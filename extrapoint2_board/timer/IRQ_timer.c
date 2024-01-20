/*********************************************************************************************************
**--------------File Info---------------------------------------------------------------------------------
** File name:           IRQ_timer.c
** Last modified Date:  2014-09-25
** Last Version:        V1.00
** Descriptions:        functions to manage T0 and T1 interrupts
** Correlated files:    timer.h
**--------------------------------------------------------------------------------------------------------
*********************************************************************************************************/
#include <string.h>
#include <stdio.h>
#include "lpc17xx.h"
#include "timer.h"
#include "../GLCD_advanced/GLCD.h"
#include "../GLCD_advanced/MyFunctions.h"
#include "../RIT/RIT.h"

extern int choice;
extern int CurrentVolume;
extern int cuddleSoundFinish;

volatile int flag = 0;
volatile int HappinessLevel = 4;
volatile int SatietyLevel = 4;
volatile int stop = 0;
volatile int secs = 0;
volatile int IsEating = 0;
volatile int IsPressed = 0;
volatile int HappinessCounter = 1;
volatile int SatietyCounter = 1;
volatile int counterEating = 1;
volatile int counterPressed = 1;
volatile int counterStop = 1;
volatile int ActuallyEat = 0;
volatile int resetReady = 0;



volatile uint16_t SinTable[sinTableLength] =
{
    410, 467, 523, 576, 627, 673, 714, 749, 778,
    799, 813, 819, 817, 807, 789, 764, 732, 694, 
    650, 602, 550, 495, 438, 381, 324, 270, 217,
    169, 125, 87 , 55 , 30 , 12 , 2  , 0  , 6  ,   
    20 , 41 , 70 , 105, 146, 193, 243, 297, 353
};

/******************************************************************************
** Function name:		Timer0_IRQHandler
**
** Descriptions:		Timer/Counter 0 interrupt handler
**
** parameters:			None
** Returned value:		None
**
******************************************************************************/

void TIMER0_IRQHandler (void)
{
	static int counter = 1;
	int sec, min, hrs;
	char time[8] = "";
	int c;
	
	if (stop==0){
		/*Age increment*/
		if(counter%2==0){
			secs++;
			hrs=secs/3600;
			min=secs/60;
			sec=secs%60;
			sprintf(time, "%d%d:%d%d:%d%d", hrs/10, hrs%10, min/10, min%10, sec/10, sec%10);
			GUI_Text(116, 5, (uint8_t*) time, Black, White);
			counter--;
		}
		else{
			counter++;
		}
		
		if (IsEating == 0 && IsPressed == 0){
			/*Tamagotchi's animation*/
			if (flag==0){
				LCD_ClearDynamic1Tamagotchi(0,0);
				LCD_DrawDynamic2Tamagotchi(0,0);
				flag++;
			} else {
				LCD_ClearDynamic2Tamagotchi(0,0);
				LCD_DrawDynamic1Tamagotchi(0,0);
				flag--;
			}
		}
		
		if (IsEating==1) {	
			if(counterEating%5==0){				
				LCD_DrawRectangle(9, 200, 42, 60, White);	/*Clear Food*/
				LCD_DrawRectangle(180, 90, 38, 25, White);	/*Clear GNAM*/
				LCD_DrawRectangle(190, 125, 38, 25, White);	/*Clear GNAM*/
				LCD_DrawRectangle(200, 160, 38, 25, White);	/*Clear GNAM*/
				LCD_ClearMyTamagotchi(-15,0);
				LCD_ClearEating(-15,0);
				LCD_DrawMyTamagotchi(0,0);
					
				if (choice == 1) {
					LCD_DrawRectangle(151+(13*SatietyLevel), 51, 11, 18, Black);
				} else {
					LCD_DrawRectangle(31+(13*HappinessLevel), 51, 11, 18, Black);
				}
						
				IsEating = 0;
				choice = 0;
				counterEating=1;
				enable_timer(1);
			} else {
				counterEating++;
				
				if (counterEating%5==2) {
					disable_timer(1);
			
					if(choice == 1){
						SatietyCounter = 1;			//Meal Selected, so I've to reset Satiety Counter
					} else {
						HappinessCounter = 1;			//Snack Selected, so I've to reset Happiness Counter
					}
			
					LCD_ClearMyTamagotchi(0,0);
					flag=0;
					LCD_DrawMyTamagotchi(-15,0);
					LCD_DrawEating(-15,0);
					
					if(choice == 1){
						SatietyLevel++;
						for (c=0; c<5; c++){
							LCD_DrawEmptyRectangle (0+c, 275+c, 125-(2*c), 45-(2*c), Black);		//Black button
						}
					} else {
						HappinessLevel++;
						for (c=0; c<5; c++){
							LCD_DrawEmptyRectangle (120+c, 275+c, 120-(2*c), 45-(2*c), Black);		//Black button
						}
					}
				}
				else {
					if (counterEating%5==3) {
						ActuallyEat = 1;
					}
					LCD_DrawGnam(0+(counterEating-3)*10,0+(counterEating-3)*35);
				}
			}
		}
		if (IsPressed==1) {		//Tamagotchi has been pressed
			if(counterPressed%5==0){
				LCD_DrawRectangle(82, 151, 27, 24, White);		//Clear Heart
				LCD_DrawRectangle(127, 161, 27, 24, White);		//Clear Heart
				LCD_DrawRectangle(20, 120, 27, 24, White);		//Clear Heart
				LCD_DrawRectangle(180, 87, 27, 24, White);		//Clear Heart
				LCD_ClearCuddling(0,0);
					
				LCD_DrawRectangle(31+(13*HappinessLevel), 51, 11, 18, Black);
						
				flag=0;
				IsPressed=0;
				cuddleSoundFinish = 0;
				counterPressed=1;
				enable_timer(1);
			} else if (counterPressed%5==1) {
				disable_timer(1);
				HappinessCounter = 1;
							
				LCD_DrawCuddling(0,0);
							
				HappinessLevel++;
				counterPressed++;
			} else if(counterPressed%5==2) {
				counterPressed++;
				LCD_DrawHeart(82,151);
			}else if (counterPressed%5==3) {
				counterPressed++;
				LCD_DrawHeart(127,161);
			} else if (counterPressed%5==4) {
				counterPressed++;
				LCD_DrawHeart(20,120);
				LCD_DrawHeart(180,87);
			}
		}
	}
	else {
		if (counterStop%7==0){
			LCD_DrawFinalIcon();
			LCD_DrawRectangle(40, 280, 190, 35, White);	/*Clear Buttons*/
			for (c=0; c<5; c++){
				LCD_DrawEmptyRectangle (0+c, 275+c, 240-(2*c), 45-(2*c), Red);
			}	
			GUI_Text(103, 290, (uint8_t *) "RESET", Red, White);
			counterStop=1;
			resetReady=1;
			disable_timer(0);
			reset_timer(0);
		} else {
			counterStop++;
			
			if (counterStop==2){
				death();
			}
			
			if (counterStop==3){
				LCD_DrawRectangle(0, 80, 60, 70, White);	/*Clear ByeByeIcon*/
			}
			
			if (counterStop>=3){	//5 ripetitions
				/*Tamagotchi's running*/
				LCD_ClearMyTamagotchi((counterStop-3)*40, 0);
				LCD_DrawMyTamagotchi((counterStop-2)*40, 0);
			}
		}
	}
		
  LPC_TIM0->IR = 1;			/* clear interrupt flag */
  return;
}


/******************************************************************************
** Function name:		Timer1_IRQHandler
**
** Descriptions:		Timer/Counter 1 interrupt handler
**
** parameters:			None
** Returned value:		None
**
******************************************************************************/
void TIMER1_IRQHandler (void)
{
	if (stop==0) {
		
		if(HappinessCounter == 5){
			if (HappinessLevel>=0) {
				LCD_DrawRectangle(31+(13*HappinessLevel), 51, 11, 18, White);
				HappinessLevel--;
				HappinessCounter = 1;
			} else {
				stop=1;
			}
		} else {
			HappinessCounter++;
		}	
		
		
		if(SatietyCounter == 5){
			if (SatietyLevel>=0) {
				LCD_DrawRectangle(151+(13*SatietyLevel), 51, 11, 18, White);
				SatietyLevel--;
				SatietyCounter = 1;
			} else {
				stop=2;
			}
		} else {
			SatietyCounter++;
		}
		
	}
	
	LPC_TIM1->IR = 1;			/* clear interrupt flag */
  return;
}

void TIMER2_IRQHandler (void)
{
	static int sineticks=0;
	
	/* DAC management */	
	static int currentValue; 
	currentValue = SinTable[sineticks];
	currentValue -= 410;
	currentValue /= 1;
	currentValue += 410;
	LPC_DAC->DACR = (currentValue*CurrentVolume)/3 <<6;
	sineticks++;
	if(sineticks==45) sineticks=0;
	
	LPC_TIM2->IR = 1;			/* clear interrupt flag */
  return;
}

void TIMER3_IRQHandler (void)
{
	
	disable_timer(2);
	LPC_TIM3->IR = 1;			/* clear interrupt flag */
  return;
}


/***************
Death Procedure
****************/

void death(void){	
	disable_timer(1);
	reset_timer(1);
	
	LCD_DrawRectangle(9, 200, 42, 60, White);	/*Clear Food*/
	LCD_DrawByeByeIcon();
	
	if (flag==1){
		LCD_ClearDynamic2Tamagotchi(0,0);
		LCD_DrawDynamic1Tamagotchi(0,0);
		flag--;
	}
}

/******************************************************************************
**                            End Of File
******************************************************************************/

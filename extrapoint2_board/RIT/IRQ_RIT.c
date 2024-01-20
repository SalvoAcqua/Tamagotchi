/*********************************************************************************************************
**--------------File Info---------------------------------------------------------------------------------
** File name:           IRQ_RIT.c
** Last modified Date:  2014-09-25
** Last Version:        V1.00
** Descriptions:        functions to manage T0 and T1 interrupts
** Correlated files:    RIT.h
**--------------------------------------------------------------------------------------------------------
*********************************************************************************************************/
#include "lpc17xx.h"
#include "RIT.h"
#include "../joystick/joystick.h"
#include "../TouchPanel/TouchPanel.h"
#include "../GLCD_advanced/MyFunctions.h"
#include "../timer/timer.h"
#include "../adc/adc.h"

#define UPTICKS 1

NOTE clickSound[] = 
{
	{d3, time_semibiscroma},
	{d4, time_semibiscroma},
	{f3, time_semibiscroma}
};

NOTE eatingSound[] = 
{
	{g3, time_semicroma},
	{a3, time_semicroma},
	{b3, time_semicroma}
};

NOTE cuddleSound[] = 
{
	{c4, time_semicroma},
	{d4, time_semicroma},
	{e4, time_semicroma}
};

NOTE deathSound[] = 
{
	{d4b, time_croma},
	{g4b, time_semiminima},
	{a4, time_semicroma},
	{b3, time_semiminima},
	{pause, time_semicroma},
	{a3, time_croma},
	{a3b, time_croma},
	{pause, time_semicroma},
	{a3b, time_croma},
	{g3b, time_croma},
	{e3, time_croma},
	{g3b, time_semiminima}
};

extern int stop;
extern int IsPressed;
extern int HappinessLevel;
extern int HappinessCounter;
extern int clickFlag;
extern int ActuallyEat;
extern int IsEating;

volatile int choice=0;   /*1=Left; 2=Right; 0=Default*/
volatile int deathSoundFinish = 0;
volatile int cuddleSoundFinish = 0;

/******************************************************************************
** Function name:		RIT_IRQHandler
**
** Descriptions:		REPETITIVE INTERRUPT TIMER handler
**
** parameters:			None
** Returned value:		None
**
******************************************************************************/

void RIT_IRQHandler (void)
{			
	static int left=0;
	static int right=0;
	static int down=0;
	static int select=0;
	static int petPressed=0;
	static int currentNote = 0;
	static int ticks = 0;
	
	/* Joystick management */
	if (IsEating == 0 && IsPressed == 0) {
		if((LPC_GPIO1->FIOPIN & (1<<27)) == 0){				/*JOY_LEFT*/
			left++;
			switch(left){
				case 1:
					if (choice!=1){
						joystick_Left();
						choice = 1;
					}
					break;
				default:
					break;
			}
		}else if((LPC_GPIO1->FIOPIN & (1<<28)) == 0){		/*JOY_RIGHT*/
			right++;
			switch(right){
				case 1:
					if (choice!=2){
						joystick_Right();
						choice = 2;
					}
					break;
				default:
					break;
			}
		} else if((LPC_GPIO1->FIOPIN & (1<<26)) == 0){		/*JOY_DOWN*/
			down++;
			switch(down){
				case 1:
					if (choice!=0){
						joystick_Down();
						choice = 0;
					}
					break;
				default:
					break;
			}
		}else if ((LPC_GPIO1->FIOPIN & (1<<25)) == 0){		/*JOY_SEL*/
			select++;
			switch(select){
				case 1:
						joystick_Select();
					break;
				default:
					break;
			}
		} else {
				left = 0;
				right = 0;
				down = 0;
				select = 0;
		}
		
		/* TouchScreen management */
		if(getDisplayPoint(&display, Read_Ads7846(), &matrix )){
			if(display.x < 195 && display.x > 49 && display.y < 240 && display.y > 79){
				petPressed++;
				switch(petPressed){
					case 1:
							if (stop==0 && HappinessLevel<4){
								IsPressed = 1;
							}
						break;
					default:
						break;
				}
			} else {
				//do nothing if touch returns values out of bounds
			}
		} else {
			petPressed = 0;
		}
	}
	
	/* ADC management */
	ADC_start_conversion();
	
	
	/* Click sound management */
	if (clickFlag != 0) {
		if(!isNotePlaying())
		{
			++ticks;
			if(ticks == UPTICKS)
			{
				ticks = 0;
				playNote(clickSound[currentNote++]);
			}
		}
		
		if (currentNote == (sizeof(clickSound) / sizeof(clickSound[0]))) {
			ticks = 0;
			currentNote = 0;
			clickFlag = 0;
		}
	}
	
	
	/* Eating sound management */
	if (ActuallyEat != 0) {
		if(!isNotePlaying())
		{
			++ticks;
			if(ticks == UPTICKS)
			{
				ticks = 0;
				playNote(eatingSound[currentNote++]);
			}
		}
		
		if (currentNote == (sizeof(eatingSound) / sizeof(eatingSound[0]))) {
			ticks = 0;
			currentNote = 0;
			ActuallyEat = 0;
		}
	}
	
	/* Cuddle sound management */
	if (IsPressed != 0 && cuddleSoundFinish == 0) {
		if(!isNotePlaying())
		{
			++ticks;
			if(ticks == UPTICKS)
			{
				ticks = 0;
				playNote(cuddleSound[currentNote++]);
			}
		}
		
		if (currentNote == (sizeof(cuddleSound) / sizeof(cuddleSound[0]))) {
			ticks = 0;
			currentNote = 0;
			cuddleSoundFinish = 1;
		}
	}
	
	
	/* Death sound management */
	if (stop != 0 && deathSoundFinish == 0) {
		if(!isNotePlaying())
		{
			++ticks;
			if(ticks == UPTICKS)
			{
				ticks = 0;
				playNote(deathSound[currentNote++]);
			}
		}
		
		if (currentNote == (sizeof(deathSound) / sizeof(deathSound[0]))) {
			ticks = 0;
			currentNote = 0;
			deathSoundFinish = 1;
		}
	}
	
	
  LPC_RIT->RICTRL |= 0x1;	/* clear interrupt flag */
	
  return;
}

/******************************************************************************
**                            End Of File
******************************************************************************/

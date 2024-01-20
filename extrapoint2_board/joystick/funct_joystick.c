/*********************************************************************************************************
**--------------File Info---------------------------------------------------------------------------------
** File name:           funct_joystick.h
** Last modified Date:  2018-12-30
** Last Version:        V1.00
** Descriptions:        High level joystick management functions
** Correlated files:    lib_joystick.c, funct_joystick.c
**--------------------------------------------------------------------------------------------------------       
*********************************************************************************************************/

#include "lpc17xx.h"
#include "joystick.h"
#include "../GLCD_advanced/MyFunctions.h"
#include "../GLCD_advanced/GLCD.h"
#include "../timer/timer.h"
#include "../RIT/RIT.h"
#include "../reset/reset.h"
#include "../music/music.h"

extern int HappinessLevel;
extern int SatietyLevel;
extern int stop;
extern int secs;
extern int IsEating;
extern int flag;
extern int HappinessCounter;
extern int SatietyCounter;
extern int choice;
extern int resetReady;
extern int deathSoundFinish;

volatile int clickFlag;


void joystick_Left(void) {
	int c;
	
	if(stop==0){
		for (c=0; c<5; c++){
			LCD_DrawEmptyRectangle (0+c, 275+c, 125-(2*c), 45-(2*c), Red);
			LCD_DrawEmptyRectangle (120+c, 275+c, 120-(2*c), 45-(2*c), Black);
		}
		LCD_DrawRectangle(9, 200, 42, 60, White);
		LCD_DrawMeal(0,0);
	}
}

void joystick_Right(void) {
	int c;
	
	if(stop==0){
		for (c=0; c<5; c++){
			LCD_DrawEmptyRectangle (0+c, 275+c, 125-(2*c), 45-(2*c), Black);
			LCD_DrawEmptyRectangle (120+c, 275+c, 120-(2*c), 45-(2*c), Red);
		}
		
		LCD_DrawRectangle(9, 200, 42, 60, White);
		LCD_DrawSnack(0,0);
	}
}

void joystick_Down(void) {
	int c;
	
	if(stop==0){
		for (c=0; c<5; c++){
			LCD_DrawEmptyRectangle (0+c, 275+c, 125-(2*c), 45-(2*c), Black);
			LCD_DrawEmptyRectangle (120+c, 275+c, 120-(2*c), 45-(2*c), Black);
		}
		
		LCD_DrawRectangle(9, 200, 42, 60, White);
	}
}

void joystick_Select() {
	int c;
	
	if(resetReady==0 && stop == 0){
		clickFlag = 1;
		
		if ((choice == 1 && SatietyLevel<4) || (choice == 2 && HappinessLevel<4)){
			IsEating = 1;
		}
		else if(choice == 1 && SatietyLevel>=4){
			for (c=0; c<5; c++){
				LCD_DrawEmptyRectangle (0+c, 275+c, 125-(2*c), 45-(2*c), Black);		//Black button
			}
			LCD_DrawRectangle(9, 200, 42, 60, White);	/*Clear Food*/
			choice = 0;
		}
		else if(choice == 2 && HappinessLevel>=4) {
			for (c=0; c<5; c++){
				LCD_DrawEmptyRectangle (120+c, 275+c, 120-(2*c), 45-(2*c), Black);		//Black button
			}
			LCD_DrawRectangle(9, 200, 42, 60, White);	/*Clear Food*/
			choice = 0;
		}
	}
	else if (resetReady == 1){
		disable_RIT();
		reset_RIT();
		stop=0;
		resetReady = 0;
		deathSoundFinish = 0;
		HappinessLevel = 4;
		SatietyLevel = 4;
		choice = 0;
		secs = 0;
		HappinessCounter = 1;
		SatietyCounter = 1;
		
		LCD_DrawRectangle(40, 105, 160, 130, White);	/*Clear Final Icon*/
		LCD_DrawRectangle(103, 290, 40, 15, White);	/*Clear Reset*/
		if (stop==1){
			LCD_DrawRectangle(150, 50, 65, 20, White);	/*Clear Satiety*/
		} else {
			LCD_DrawRectangle(30, 50, 65, 20, White);	/*Clear Happiness*/
		}
		
		reset();
	}
}

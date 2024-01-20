/****************************************Copyright (c)****************************************************
**                                      
**                                 http://www.powermcu.com
**
**--------------File Info---------------------------------------------------------------------------------
** File name:               main.c
** Descriptions:            The GLCD application function
**
**--------------------------------------------------------------------------------------------------------
** Created by:              AVRman
** Created date:            2010-11-7
** Version:                 v1.0
** Descriptions:            The original version
**
**--------------------------------------------------------------------------------------------------------
** Modified by:             Paolo Bernardi
** Modified date:           03/01/2020
** Version:                 v2.0
** Descriptions:            basic program for LCD and Touch Panel teaching
**
*********************************************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "LPC17xx.h"
#include "GLCD_advanced/GLCD.h"
#include "GLCD_advanced/MyFunctions.h"
#include "joystick/joystick.h"
#include "timer/timer.h"
#include "RIT/RIT.h"
#include "reset/reset.h"
#include "TouchPanel/TouchPanel.h"
#include "adc/adc.h"


#define SIMULATOR 1

#ifdef SIMULATOR
extern uint8_t ScaleFlag; // <- ScaleFlag needs to visible in order for the emulator to find the symbol (can be placed also inside system_LPC17xx.h but since it is RO, it needs more work)
#endif


int main(void)
{
  SystemInit();  												/* System Initialization (i.e., PLL)  */
	init_RIT(0x004C4B40);									/* RIT Inizialization 50 ms */
	init_timer(0, 0x00BEBC20); 						/* 0.5s * 25MHz = 0.5*25*10^6 = 0x00BEBC20 */
	init_timer(1, 0x017D7840); 						/* Happiness & Satiety Level: 1s * 25MHz = 25*10^6 = 0x017D7840 */
	
	//init_timer(0, 0x002625A0); 						/* 0.1s * 25MHz = 0.1*25*10^6 = 0x002625A0 							NO SCALING VALUE*/
	//init_timer(1, 0x004C4B40); 						/* Happiness & Satiety Level: 0.2s * 25MHz = 0.2*25*10^6 = 0x004C4B40 			NO SCALING VALUE*/
	joystick_init();
	LCD_Initialization();
	TP_Init();
	ADC_init();
	
	TouchPanel_Calibrate();
	 
	LCD_Clear(White);
	LCD_DrawHeader();
	reset();
	
	LPC_SC->PCON |= 0x1;									/* power-down	mode										*/
	LPC_SC->PCON &= ~(0x2);						
	
	LPC_PINCON->PINSEL1 |= (1<<21);
	LPC_PINCON->PINSEL1 &= ~(1<<20);
	LPC_GPIO0->FIODIR |= (1<<26);
	
  while (1)	
  {
		__ASM("wfi");
  }
}

/*********************************************************************************************************
      END FILE
*********************************************************************************************************/

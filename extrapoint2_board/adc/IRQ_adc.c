/*********************************************************************************************************
**--------------File Info---------------------------------------------------------------------------------
** File name:           IRQ_adc.c
** Last modified Date:  20184-12-30
** Last Version:        V1.00
** Descriptions:        functions to manage A/D interrupts
** Correlated files:    adc.h
**--------------------------------------------------------------------------------------------------------       
*********************************************************************************************************/

#include "lpc17xx.h"
#include "adc.h"
#include "../GLCD_advanced/MyFunctions.h"
#include "../GLCD_advanced/GLCD.h"

/*----------------------------------------------------------------------------
  A/D IRQ: Executed when A/D Conversion is ready (signal from ADC peripheral)
 *----------------------------------------------------------------------------*/

unsigned short AD_current;   
unsigned short AD_last = 0x00;     /* Last converted value               */
volatile int CurrentVolume = 0;
volatile int LastVolume = 0;

void ADC_IRQHandler(void) {
	
  AD_current = ((LPC_ADC->ADGDR>>4) & 0xFFF);/* Read Conversion Result             */
  if(AD_current != AD_last){
		CurrentVolume = AD_current*3/0xFFF;
		if (CurrentVolume == 3){
			switch(LastVolume){
				case 2:
					LCD_DrawVol3(Black);
					break;
				case 1:
					LCD_DrawVol2(Black);
					LCD_DrawVol3(Black);
					break;
				default:
					LCD_DrawVol0(White);
					LCD_DrawVol1(Black);
					LCD_DrawVol2(Black);
					LCD_DrawVol3(Black);
					break;
			}
		}
		else if (CurrentVolume == 2){
			switch(LastVolume){
					case 3:
						LCD_DrawVol3(White);
						break;
					case 1:
						LCD_DrawVol2(Black);
						break;
					default:
						LCD_DrawVol0(White);
						LCD_DrawVol1(Black);
						LCD_DrawVol2(Black);
						break;
				}
		}
		else if (CurrentVolume == 1){
			switch(LastVolume){
					case 3:
						LCD_DrawVol3(White);
						LCD_DrawVol2(White);
						break;
					case 2:
						LCD_DrawVol2(White);
						break;
					default:
						LCD_DrawVol0(White);
						LCD_DrawVol1(Black);
						break;
				}
		}
		else{
			switch(LastVolume){
					case 3:
						LCD_DrawVol1(White);
						LCD_DrawVol2(White);
						LCD_DrawVol3(White);
						LCD_DrawVol0(Black);
						break;
					case 2:
						LCD_DrawVol1(White);
						LCD_DrawVol2(White);
						LCD_DrawVol0(Black);
						break;
					default:
						LCD_DrawVol1(White);
						LCD_DrawVol0(Black);
						break;
				}
		}
		
		AD_last = AD_current;
		LastVolume = AD_last*3/0xFFF;
  }	
}

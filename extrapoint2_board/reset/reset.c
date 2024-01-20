#include "../GLCD_advanced/MyFunctions.h"
#include "../timer/timer.h"
#include "../RIT/RIT.h"

void reset (void){
	LCD_DrawMyTamagotchi(0,0);
	LCD_DrawButtons();
	LCD_DrawStatus();
	
	enable_RIT();
	enable_timer(0);
	enable_timer(1);
}

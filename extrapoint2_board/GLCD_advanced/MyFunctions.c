#include "GLCD.h"
#include "MyFunctions.h"

extern int flag;

void LCD_DrawMyTamagotchi(int16_t X, int16_t Y){
	int c;
	
	for (c=105; c<140; c+=5){
		LCD_SetPixel(c+X,85+Y,Black,5);
		LCD_SetPixel(c+X,220+Y,Black,5);
	}
	for (c=90; c<105; c+=5){
		LCD_SetPixel(c+X,90+Y,Black,5);
		LCD_SetPixel(c+X,215+Y,Black,5);
	}
	for (c=140; c<155; c+=5){
		LCD_SetPixel(c+X,90+Y,Black,5);
	}
	for (c=135; c<150; c+=5){
		LCD_SetPixel(c+X,215+Y,Black,5);
	}
	LCD_SetPixel(80+X,95+Y,Black,5);
	LCD_SetPixel(85+X,95+Y,Black,5);
	LCD_SetPixel(155+X,95+Y,Black,5);
	LCD_SetPixel(160+X,95+Y,Black,5);
	LCD_SetPixel(75+X,100+Y,Black,5);
	LCD_SetPixel(165+X,100+Y,Black,5);
	LCD_SetPixel(70+X,105+Y,Black,5);
	LCD_SetPixel(170+X,105+Y,Black,5);
	LCD_SetPixel(65+X,110+Y,Black,5);
	LCD_SetPixel(175+X,110+Y,Black,5);
	LCD_SetPixel(65+X,115+Y,Black,5);
	LCD_SetPixel(175+X,115+Y,Black,5);
	for (c=120; c<135; c+=5){
		LCD_SetPixel(60+X,c+Y,Black,5);
		LCD_SetPixel(180+X,c+Y,Black,5);
	}
	LCD_SetPixel(65+X,130+Y,Black,5);
	LCD_SetPixel(70+X,130+Y,Black,5);
	LCD_SetPixel(75+X,125+Y,Black,5);
	LCD_SetPixel(80+X,125+Y,Black,5);
	LCD_SetPixel(80+X,130+Y,Black,5);
	LCD_SetPixel(80+X,135+Y,Black,5);
	LCD_SetPixel(80+X,140+Y,Black,5);
	LCD_SetPixel(85+X,140+Y,Black,5);
	LCD_SetPixel(90+X,135+Y,Black,5);
	LCD_SetPixel(95+X,135+Y,Black,5);
	LCD_SetPixel(100+X,130+Y,Black,5);
	LCD_SetPixel(105+X,130+Y,Black,5);
	LCD_SetPixel(105+X,135+Y,Black,5);
	LCD_SetPixel(105+X,140+Y,Black,5);
	LCD_SetPixel(110+X,145+Y,Black,5);
	LCD_SetPixel(110+X,150+Y,Black,5);
	LCD_SetPixel(115+X,150+Y,Black,5);
	LCD_SetPixel(120+X,145+Y,Black,5);
	LCD_SetPixel(125+X,145+Y,Black,5);
	LCD_SetPixel(130+X,140+Y,Black,5);
	LCD_SetPixel(135+X,140+Y,Black,5);
	LCD_SetPixel(135+X,135+Y,Black,5);
	LCD_SetPixel(140+X,145+Y,Black,5);
	LCD_SetPixel(140+X,150+Y,Black,5);
	LCD_SetPixel(145+X,155+Y,Black,5);
	LCD_SetPixel(150+X,150+Y,Black,5);
	LCD_SetPixel(155+X,150+Y,Black,5);
	LCD_SetPixel(160+X,145+Y,Black,5);
	LCD_SetPixel(165+X,145+Y,Black,5);
	LCD_SetPixel(170+X,150+Y,Black,5);
	LCD_SetPixel(175+X,155+Y,Black,5);
	for (c=135; c<165; c+=5){
		LCD_SetPixel(185+X,c+Y,Black,5);
	}
	for (c=160; c<185; c+=5){
		LCD_SetPixel(180+X,c+Y,Black,5);
	}
	LCD_SetPixel(65+X,135+Y,Black,5);
	LCD_SetPixel(60+X,140+Y,Black,5);
	LCD_SetPixel(60+X,145+Y,Black,5);
	for (c=150; c<185; c+=5){
		LCD_SetPixel(55+X,c+Y,Black,5);
	}
	LCD_SetPixel(60+X,185+Y,Black,5);
	LCD_SetPixel(60+X,190+Y,Black,5);
	LCD_SetPixel(175+X,185+Y,Black,5);
	LCD_SetPixel(175+X,190+Y,Black,5);
	LCD_SetPixel(65+X,195+Y,Black,5);
	LCD_SetPixel(170+X,195+Y,Black,5);
	LCD_SetPixel(70+X,200+Y,Black,5);
	LCD_SetPixel(165+X,200+Y,Black,5);
	LCD_SetPixel(75+X,205+Y,Black,5);
	LCD_SetPixel(160+X,205+Y,Black,5);
	LCD_SetPixel(80+X,210+Y,Black,5);
	LCD_SetPixel(155+X,210+Y,Black,5);
	LCD_SetPixel(85+X,210+Y,Black,5);
	LCD_SetPixel(150+X,210+Y,Black,5);
	LCD_SetPixel(80+X,215+Y,Black,5);
	LCD_SetPixel(80+X,220+Y,Black,5);
	LCD_SetPixel(85+X,225+Y,Black,5);
	LCD_SetPixel(90+X,230+Y,Black,5);
	LCD_SetPixel(95+X,230+Y,Black,5);
	LCD_SetPixel(100+X,225+Y,Black,5);
	LCD_SetPixel(100+X,220+Y,Black,5);
	LCD_SetPixel(135+X,225+Y,Black,5);
	LCD_SetPixel(140+X,230+Y,Black,5);
	LCD_SetPixel(145+X,230+Y,Black,5);
	LCD_SetPixel(150+X,225+Y,Black,5);
	LCD_SetPixel(155+X,220+Y,Black,5);
	LCD_SetPixel(155+X,215+Y,Black,5);
	
	/*Black Eyes*/
	LCD_SetPixel(85+X,160+Y,Black,5);
	LCD_SetPixel(85+X,155+Y,Black,5);
	LCD_SetPixel(90+X,150+Y,Black,5);
	LCD_SetPixel(95+X,150+Y,Black,5);
	LCD_SetPixel(100+X,155+Y,Black,5);
	LCD_SetPixel(100+X,160+Y,Black,5);
	
	LCD_SetPixel(130+X,170+Y,Black,5);
	LCD_SetPixel(130+X,165+Y,Black,5);
	LCD_SetPixel(135+X,160+Y,Black,5);
	LCD_SetPixel(140+X,160+Y,Black,5);
	LCD_SetPixel(145+X,165+Y,Black,5);
	LCD_SetPixel(145+X,170+Y,Black,5);
	
	/*Black Mouth*/
	LCD_SetPixel(105+X,205+Y,Black,5);
	LCD_SetPixel(110+X,205+Y,Black,5);
	LCD_SetPixel(115+X,205+Y,Black,5);
	LCD_SetPixel(100+X,200+Y,Black,5);
	LCD_SetPixel(120+X,200+Y,Black,5);
	LCD_SetPixel(120+X,195+Y,Black,5);
	LCD_SetPixel(120+X,190+Y,Black,5);
	LCD_SetPixel(120+X,185+Y,Black,5);
	LCD_SetPixel(110+X,190+Y,Black,5);
	LCD_SetPixel(100+X,185+Y,Black,5);
	LCD_SetPixel(100+X,180+Y,Black,5);
	
	/*Yellow Mouth*/
	LCD_SetPixel(105+X,200+Y,Yellow,5);
	LCD_SetPixel(110+X,200+Y,Yellow,5);
	LCD_SetPixel(115+X,200+Y,Yellow,5);
	LCD_SetPixel(115+X,195+Y,Yellow,5);
	LCD_SetPixel(115+X,190+Y,Yellow,5);
	LCD_SetPixel(115+X,185+Y,Yellow,5);
	LCD_SetPixel(110+X,185+Y,Yellow,5);
	LCD_SetPixel(110+X,180+Y,Yellow,5);
	LCD_SetPixel(105+X,180+Y,Yellow,5);
	
	LCD_DrawDynamic1Tamagotchi(0+X,0+Y);
}

void LCD_ClearMyTamagotchi(int16_t X, int16_t Y){
	int c;

	for (c=105; c<140; c+=5){
		LCD_SetPixel(c+X,85+Y,White,5);
		LCD_SetPixel(c+X,220+Y,White,5);
	}
	for (c=90; c<105; c+=5){
		LCD_SetPixel(c+X,90+Y,White,5);
		LCD_SetPixel(c+X,215+Y,White,5);
	}
	for (c=140; c<155; c+=5){
		LCD_SetPixel(c+X,90+Y,White,5);
	}
	for (c=135; c<150; c+=5){
		LCD_SetPixel(c+X,215+Y,White,5);
	}
	LCD_SetPixel(80+X,95+Y,White,5);
	LCD_SetPixel(85+X,95+Y,White,5);
	LCD_SetPixel(155+X,95+Y,White,5);
	LCD_SetPixel(160+X,95+Y,White,5);
	LCD_SetPixel(75+X,100+Y,White,5);
	LCD_SetPixel(165+X,100+Y,White,5);
	LCD_SetPixel(70+X,105+Y,White,5);
	LCD_SetPixel(170+X,105+Y,White,5);
	LCD_SetPixel(65+X,110+Y,White,5);
	LCD_SetPixel(175+X,110+Y,White,5);
	LCD_SetPixel(65+X,115+Y,White,5);
	LCD_SetPixel(175+X,115+Y,White,5);
	for (c=120; c<135; c+=5){
		LCD_SetPixel(60+X,c+Y,White,5);
		LCD_SetPixel(180+X,c+Y,White,5);
	}
	LCD_SetPixel(65+X,130+Y,White,5);
	LCD_SetPixel(70+X,130+Y,White,5);
	LCD_SetPixel(75+X,125+Y,White,5);
	LCD_SetPixel(80+X,125+Y,White,5);
	LCD_SetPixel(80+X,130+Y,White,5);
	LCD_SetPixel(80+X,135+Y,White,5);
	LCD_SetPixel(80+X,140+Y,White,5);
	LCD_SetPixel(85+X,140+Y,White,5);
	LCD_SetPixel(90+X,135+Y,White,5);
	LCD_SetPixel(95+X,135+Y,White,5);
	LCD_SetPixel(100+X,130+Y,White,5);
	LCD_SetPixel(105+X,130+Y,White,5);
	LCD_SetPixel(105+X,135+Y,White,5);
	LCD_SetPixel(105+X,140+Y,White,5);
	LCD_SetPixel(110+X,145+Y,White,5);
	LCD_SetPixel(110+X,150+Y,White,5);
	LCD_SetPixel(115+X,150+Y,White,5);
	LCD_SetPixel(120+X,145+Y,White,5);
	LCD_SetPixel(125+X,145+Y,White,5);
	LCD_SetPixel(130+X,140+Y,White,5);
	LCD_SetPixel(135+X,140+Y,White,5);
	LCD_SetPixel(135+X,135+Y,White,5);
	LCD_SetPixel(140+X,145+Y,White,5);
	LCD_SetPixel(140+X,150+Y,White,5);
	LCD_SetPixel(145+X,155+Y,White,5);
	LCD_SetPixel(150+X,150+Y,White,5);
	LCD_SetPixel(155+X,150+Y,White,5);
	LCD_SetPixel(160+X,145+Y,White,5);
	LCD_SetPixel(165+X,145+Y,White,5);
	LCD_SetPixel(170+X,150+Y,White,5);
	LCD_SetPixel(175+X,155+Y,White,5);
	for (c=135; c<165; c+=5){
		LCD_SetPixel(185+X,c+Y,White,5);
	}
	for (c=160; c<185; c+=5){
		LCD_SetPixel(180+X,c+Y,White,5);
	}
	LCD_SetPixel(65+X,135+Y,White,5);
	LCD_SetPixel(60+X,140+Y,White,5);
	LCD_SetPixel(60+X,145+Y,White,5);
	for (c=150; c<185; c+=5){
		LCD_SetPixel(55+X,c+Y,White,5);
	}
	LCD_SetPixel(60+X,185+Y,White,5);
	LCD_SetPixel(60+X,190+Y,White,5);
	LCD_SetPixel(175+X,185+Y,White,5);
	LCD_SetPixel(175+X,190+Y,White,5);
	LCD_SetPixel(65+X,195+Y,White,5);
	LCD_SetPixel(170+X,195+Y,White,5);
	LCD_SetPixel(70+X,200+Y,White,5);
	LCD_SetPixel(165+X,200+Y,White,5);
	LCD_SetPixel(75+X,205+Y,White,5);
	LCD_SetPixel(160+X,205+Y,White,5);
	LCD_SetPixel(80+X,210+Y,White,5);
	LCD_SetPixel(155+X,210+Y,White,5);
	LCD_SetPixel(85+X,210+Y,White,5);
	LCD_SetPixel(150+X,210+Y,White,5);
	LCD_SetPixel(80+X,215+Y,White,5);
	LCD_SetPixel(80+X,220+Y,White,5);
	LCD_SetPixel(85+X,225+Y,White,5);
	LCD_SetPixel(90+X,230+Y,White,5);
	LCD_SetPixel(95+X,230+Y,White,5);
	LCD_SetPixel(100+X,225+Y,White,5);
	LCD_SetPixel(100+X,220+Y,White,5);
	LCD_SetPixel(135+X,225+Y,White,5);
	LCD_SetPixel(140+X,230+Y,White,5);
	LCD_SetPixel(145+X,230+Y,White,5);
	LCD_SetPixel(150+X,225+Y,White,5);
	LCD_SetPixel(155+X,220+Y,White,5);
	LCD_SetPixel(155+X,215+Y,White,5);
	
	/*Clear Eyes*/
	LCD_SetPixel(85+X,160+Y,White,5);
	LCD_SetPixel(85+X,155+Y,White,5);
	LCD_SetPixel(90+X,150+Y,White,5);
	LCD_SetPixel(95+X,150+Y,White,5);
	LCD_SetPixel(100+X,155+Y,White,5);
	LCD_SetPixel(100+X,160+Y,White,5);
	LCD_SetPixel(130+X,170+Y,White,5);
	LCD_SetPixel(130+X,165+Y,White,5);
	LCD_SetPixel(135+X,160+Y,White,5);
	LCD_SetPixel(140+X,160+Y,White,5);
	LCD_SetPixel(145+X,165+Y,White,5);
	LCD_SetPixel(145+X,170+Y,White,5);
	
	/*Clear Mouth*/
	LCD_SetPixel(105+X,205+Y,White,5);
	LCD_SetPixel(110+X,205+Y,White,5);
	LCD_SetPixel(115+X,205+Y,White,5);
	LCD_SetPixel(100+X,200+Y,White,5);
	LCD_SetPixel(120+X,200+Y,White,5);
	LCD_SetPixel(120+X,195+Y,White,5);
	LCD_SetPixel(120+X,190+Y,White,5);
	LCD_SetPixel(120+X,185+Y,White,5);
	LCD_SetPixel(110+X,190+Y,White,5);
	LCD_SetPixel(100+X,185+Y,White,5);
	LCD_SetPixel(100+X,180+Y,White,5);
	LCD_SetPixel(105+X,200+Y,White,5);
	LCD_SetPixel(110+X,200+Y,White,5);
	LCD_SetPixel(115+X,200+Y,White,5);
	LCD_SetPixel(115+X,195+Y,White,5);
	LCD_SetPixel(115+X,190+Y,White,5);
	LCD_SetPixel(115+X,185+Y,White,5);
	LCD_SetPixel(110+X,185+Y,White,5);
	LCD_SetPixel(110+X,180+Y,White,5);
	LCD_SetPixel(105+X,180+Y,White,5);
	
	LCD_SetPixel(105+X,185+Y,White,5);
	LCD_SetPixel(105+X,195+Y,White,5);
	LCD_SetPixel(110+X,195+Y,White,5);
	LCD_SetPixel(115+X,180+Y,White,5);
	LCD_SetPixel(110+X,175+Y,White,5);
	LCD_SetPixel(105+X,175+Y,White,5);
	
	if (flag==0)
		LCD_ClearDynamic1Tamagotchi(X,Y);
	else
		LCD_ClearDynamic2Tamagotchi(X,Y);
}

void LCD_DrawDynamic1Tamagotchi(int16_t X, int16_t Y){	
	/*Black Eyes*/
	LCD_SetPixel(85+X,165+Y,Black,5);
	LCD_SetPixel(100+X,165+Y,Black,5);
	LCD_SetPixel(90+X,170+Y,Black,5);
	LCD_SetPixel(95+X,170+Y,Black,5);
	LCD_SetPixel(130+X,175+Y,Black,5);
	LCD_SetPixel(145+X,175+Y,Black,5);
	LCD_SetPixel(135+X,180+Y,Black,5);
	LCD_SetPixel(140+X,180+Y,Black,5);
	
	/*Black Mouth*/
	LCD_SetPixel(115+X,180+Y,Black,5);
	LCD_SetPixel(110+X,175+Y,Black,5);
	LCD_SetPixel(105+X,175+Y,Black,5);
	LCD_SetPixel(105+X,190+Y,Black,5);
	LCD_SetPixel(100+X,195+Y,Black,5);
	
	/*Yellow Mouth*/
	LCD_SetPixel(105+X,195+Y,Yellow,5);
	LCD_SetPixel(110+X,195+Y,Yellow,5);
	LCD_SetPixel(105+X,185+Y,Yellow,5);

	/*Blue Eyes*/
	LCD_SetPixel(95+X,155+Y,Blue,5);
	LCD_SetPixel(95+X,160+Y,Blue,5);
	LCD_SetPixel(95+X,165+Y,Blue,5);
	LCD_SetPixel(90+X,160+Y,Blue,5);
	LCD_SetPixel(90+X,165+Y,Blue,5);
	LCD_SetPixel(140+X,165+Y,Blue,5);
	LCD_SetPixel(140+X,170+Y,Blue,5);
	LCD_SetPixel(140+X,175+Y,Blue,5);
	LCD_SetPixel(135+X,170+Y,Blue,5);
	LCD_SetPixel(135+X,175+Y,Blue,5);
}

void LCD_DrawDynamic2Tamagotchi(int16_t X, int16_t Y){	
	/*Black Mouth*/
	LCD_SetPixel(120+X,180+Y,Black,5);
	LCD_SetPixel(115+X,175+Y,Black,5);
	LCD_SetPixel(110+X,170+Y,Black,5);
	LCD_SetPixel(105+X,170+Y,Black,5);
	LCD_SetPixel(100+X,175+Y,Black,5);
	LCD_SetPixel(105+X,185+Y,Black,5);
	LCD_SetPixel(110+X,195+Y,Black,5);
	LCD_SetPixel(105+X,195+Y,Black,5);
	
	/*Yellow Mouth*/
	LCD_SetPixel(115+X,180+Y,Yellow,5);
	LCD_SetPixel(110+X,175+Y,Yellow,5);
	LCD_SetPixel(105+X,175+Y,Yellow,5);
}

void LCD_ClearDynamic1Tamagotchi(int16_t X, int16_t Y){
	/*Clear Eyes*/
	LCD_SetPixel(85+X,165+Y,White,5);
	LCD_SetPixel(100+X,165+Y,White,5);
	LCD_SetPixel(90+X,170+Y,White,5);
	LCD_SetPixel(95+X,170+Y,White,5);
	LCD_SetPixel(130+X,175+Y,White,5);
	LCD_SetPixel(145+X,175+Y,White,5);
	LCD_SetPixel(135+X,180+Y,White,5);
	LCD_SetPixel(140+X,180+Y,White,5);
	LCD_SetPixel(95+X,155+Y,White,5);
	LCD_SetPixel(95+X,160+Y,White,5);
	LCD_SetPixel(95+X,165+Y,White,5);
	LCD_SetPixel(90+X,160+Y,White,5);
	LCD_SetPixel(90+X,165+Y,White,5);
	LCD_SetPixel(140+X,165+Y,White,5);
	LCD_SetPixel(140+X,170+Y,White,5);
	LCD_SetPixel(140+X,175+Y,White,5);
	LCD_SetPixel(135+X,170+Y,White,5);
	LCD_SetPixel(135+X,175+Y,White,5);
	
	/*Clear Mouth*/
	LCD_SetPixel(105+X,190+Y,White,5);
	LCD_SetPixel(100+X,195+Y,White,5);
}

void LCD_ClearDynamic2Tamagotchi(int16_t X, int16_t Y){
	/*Clear Mouth*/
	LCD_SetPixel(120+X,180+Y,White,5);
	LCD_SetPixel(115+X,175+Y,White,5);
	LCD_SetPixel(110+X,170+Y,White,5);
	LCD_SetPixel(105+X,170+Y,White,5);
	LCD_SetPixel(100+X,175+Y,White,5);
}

void LCD_DrawButtons(void){
	int c;
	
	for (c=0; c<5; c++){
		LCD_DrawEmptyRectangle (0+c, 275+c, 125-(2*c), 45-(2*c), Black);
		LCD_DrawEmptyRectangle (120+c, 275+c, 120-(2*c), 45-(2*c), Black);
	}
	
	GUI_Text(40, 290, (uint8_t *) "MEAL", Black, White);
	GUI_Text(160, 290, (uint8_t *) "SNACK", Black, White);
}

void LCD_DrawHeader(void){
	int c;
	
	GUI_Text(25, 25, (uint8_t *) "Happiness", Black, White);
	GUI_Text(145, 25, (uint8_t *) "Satiety", Black, White);
	
	for (c=0; c<5; c++){
		LCD_DrawEmptyRectangle (25+c, 45+c, 75-(2*c), 30-(2*c), Black);
		LCD_DrawEmptyRectangle (145+c, 45+c, 75-(2*c), 30-(2*c), Black);
	}
	
	LCD_DrawRectangle(101, 55, 5, 10, Black);
	LCD_DrawRectangle(221, 55, 5, 10, Black);
	
	LCD_DrawSpeaker();
	LCD_DrawVol0(Black);
}

void LCD_DrawStatus(void){
	int c;
	
	GUI_Text(60, 5, (uint8_t *) "Age:   00:00:00", Black, White);
	for (c=0; c<5; c++){
		LCD_DrawRectangle(31+(13*c), 51, 11, 18, Black);
		LCD_DrawRectangle(151+(13*c), 51, 11, 18, Black);
	}
}

void LCD_DrawMeal(int16_t X, int16_t Y){
	int c;
	
	/*Black part*/
	LCD_SetPixel(42+X,251+Y,Black,3);
	LCD_SetPixel(45+X,248+Y,Black,3);
	LCD_SetPixel(45+X,245+Y,Black,3);
	LCD_SetPixel(39+X,248+Y,Black,3);
	LCD_SetPixel(39+X,245+Y,Black,3);	
	LCD_SetPixel(36+X,242+Y,Black,3);
	LCD_SetPixel(48+X,242+Y,Black,3);
	LCD_SetPixel(45+X,239+Y,Black,3);
	LCD_SetPixel(42+X,239+Y,Black,3);	
	for (c=21; c<36; c+=3){
		LCD_SetPixel(c+X,239+Y,Black,3);
	}
	LCD_SetPixel(39+X,236+Y,Black,3);
	LCD_SetPixel(36+X,233+Y,Black,3);
	LCD_SetPixel(36+X,230+Y,Black,3);
	for (c=215; c<230; c+=3){
		LCD_SetPixel(33+X,c+Y,Black,3);
	}
	LCD_SetPixel(18+X,236+Y,Black,3);
	LCD_SetPixel(15+X,233+Y,Black,3);
	LCD_SetPixel(12+X,230+Y,Black,3);
	LCD_SetPixel(12+X,227+Y,Black,3);
	LCD_SetPixel(9+X,224+Y,Black,3);
	LCD_SetPixel(9+X,221+Y,Black,3);
	LCD_SetPixel(9+X,218+Y,Black,3);
	LCD_SetPixel(9+X,215+Y,Black,3);
	LCD_SetPixel(12+X,212+Y,Black,3);
	LCD_SetPixel(15+X,209+Y,Black,3);
	LCD_SetPixel(18+X,206+Y,Black,3);
	LCD_SetPixel(21+X,206+Y,Black,3);
	LCD_SetPixel(24+X,206+Y,Black,3);
	LCD_SetPixel(27+X,209+Y,Black,3);
	LCD_SetPixel(30+X,212+Y,Black,3);
	
	/*Orange part*/
	for (c=18; c<27; c+=3){
		LCD_SetPixel(c+X,209+Y,Orange,3);
	}
	for (c=15; c<30; c+=3){
		LCD_SetPixel(c+X,212+Y,Orange,3);
	}
	for (c=18; c<36; c+=3){
		LCD_SetPixel(c+X,233+Y,Orange,3);
	}
	LCD_SetPixel(21+X,236+Y,Orange,3);
	LCD_SetPixel(24+X,236+Y,Orange,3);
	LCD_SetPixel(27+X,236+Y,Orange,3);
	LCD_SetPixel(33+X,230+Y,Orange,3);
	LCD_DrawRectangle(12+X, 215+Y, 21, 12, Orange);
	LCD_DrawRectangle(15+X, 227+Y, 18, 6, Orange);
}

void LCD_DrawSnack(int16_t X, int16_t Y){
	int c;
	
	/*Black part*/
	LCD_SetPixel(24+X,257+Y,Black,3);
	LCD_SetPixel(27+X,257+Y,Black,3);
	LCD_SetPixel(30+X,257+Y,Black,3);
	for (c=242; c<257; c+=3){
		LCD_SetPixel(21+X,c+Y,Black,3);
		LCD_SetPixel(33+X,c+Y,Black,3);		
	}
	LCD_SetPixel(18+X,242+Y,Black,3);
	LCD_SetPixel(36+X,242+Y,Black,3);
	LCD_SetPixel(15+X,239+Y,Black,3);
	LCD_SetPixel(39+X,239+Y,Black,3);
	for (c=206; c<239; c+=3){
		LCD_SetPixel(12+X,c+Y,Black,3);
		LCD_SetPixel(42+X,c+Y,Black,3);		
	}
	LCD_SetPixel(15+X,203+Y,Black,3);
	LCD_SetPixel(39+X,203+Y,Black,3);
	for (c=18; c<39; c+=3){
		LCD_SetPixel(c+X,200+Y,Black,3);
	}
	
	/*FleshPink part*/
	LCD_DrawRectangle(24+X, 242+Y, 9, 15, FleshPink);
	
	/*Brown part*/
	LCD_DrawRectangle(21+X, 203+Y, 18, 33, Brown);
	for (c=206; c<239; c+=3){
		LCD_SetPixel(15+X,c+Y,Brown,3);
		LCD_SetPixel(39+X,c+Y,Brown,3);
	}
	for (c=215; c<236; c+=3){
		LCD_SetPixel(18+X,c+Y,Brown,3);
	}
	LCD_SetPixel(18+X,203+Y,Brown,3);
	LCD_SetPixel(18+X,206+Y,Brown,3);
	LCD_SetPixel(21+X,236+Y,Brown,3);
	LCD_SetPixel(27+X,236+Y,Brown,3);
	LCD_SetPixel(30+X,236+Y,Brown,3);
	LCD_SetPixel(33+X,236+Y,Brown,3);
}

void LCD_DrawEating(int16_t X, int16_t Y){
	LCD_SetPixel(105+X,175+Y,White,5);
	LCD_SetPixel(110+X,175+Y,White,5);
	LCD_SetPixel(100+X,180+Y,White,5);
	LCD_SetPixel(105+X,180+Y,White,5);
	LCD_SetPixel(110+X,180+Y,White,5);
	LCD_SetPixel(115+X,180+Y,White,5);
	LCD_SetPixel(100+X,185+Y,White,5);
	LCD_SetPixel(105+X,185+Y,White,5);
	LCD_SetPixel(110+X,185+Y,White,5);
	LCD_SetPixel(115+X,185+Y,White,5);
	LCD_SetPixel(120+X,185+Y,White,5);
	LCD_SetPixel(105+X,190+Y,White,5);
	LCD_SetPixel(110+X,190+Y,White,5);
	LCD_SetPixel(115+X,190+Y,White,5);
	LCD_SetPixel(120+X,190+Y,White,5);
	LCD_SetPixel(100+X,195+Y,White,5);
	LCD_SetPixel(110+X,195+Y,White,5);
	LCD_SetPixel(115+X,195+Y,White,5);
	LCD_SetPixel(120+X,195+Y,White,5);
	LCD_SetPixel(100+X,200+Y,White,5);
	LCD_SetPixel(105+X,200+Y,White,5);
	LCD_SetPixel(105+X,205+Y,White,5);
	LCD_SetPixel(110+X,205+Y,White,5);
	
	LCD_SetPixel(130+X,190+Y,Black,5);
	LCD_SetPixel(100+X,190+Y,Black,5);
	LCD_SetPixel(105+X,195+Y,Black,5);
	LCD_SetPixel(125+X,195+Y,Black,5);
	LCD_SetPixel(120+X,200+Y,Black,5);
	LCD_SetPixel(115+X,200+Y,Black,5);
	LCD_SetPixel(110+X,200+Y,Black,5);
	LCD_SetPixel(125+X,200+Y,Magenta,5);
	LCD_SetPixel(125+X,205+Y,Magenta,5);
	LCD_SetPixel(120+X,205+Y,Magenta,5);
	LCD_SetPixel(115+X,205+Y,Magenta,5);
	LCD_SetPixel(120+X,210+Y,Magenta,5);
}

void LCD_ClearEating(int16_t X, int16_t Y){	
	LCD_SetPixel(130+X,190+Y,White,5);
	LCD_SetPixel(100+X,190+Y,White,5);
	LCD_SetPixel(105+X,195+Y,White,5);
	LCD_SetPixel(125+X,195+Y,White,5);
	LCD_SetPixel(120+X,200+Y,White,5);
	LCD_SetPixel(115+X,200+Y,White,5);
	LCD_SetPixel(110+X,200+Y,White,5);
	LCD_SetPixel(125+X,200+Y,White,5);
	LCD_SetPixel(125+X,205+Y,White,5);
	LCD_SetPixel(120+X,205+Y,White,5);
	LCD_SetPixel(115+X,205+Y,White,5);
	LCD_SetPixel(120+X,210+Y,White,5);
}

void LCD_DrawGnam(int16_t X, int16_t Y){
	int c;
	
	for (c=180; c<215; c+=3){
		LCD_SetPixel(X+c, 110+Y, Red, 3);
	}
	
	GUI_Text(180+X, 90+Y, (uint8_t *) "GNAM", Red, White);
}

void LCD_DrawByeByeIcon(void){
	LCD_DrawCircle(50,140,3,Blue);
	LCD_DrawCircle(43,130,5,Blue);
	LCD_DrawCircle(25,105,22,Blue);
	GUI_Text(12, 90, (uint8_t *) "BYE", Blue, White);
	GUI_Text(15, 105, (uint8_t *) "BYE", Blue, White);
}

void LCD_DrawFinalIcon(void){
	int c;
	
	for (c=200; c<235; c+=5){
		LCD_SetPixel(170,c,Red,5);
	}
	for (c=125; c<185; c+=5){
		LCD_SetPixel(40,c,Red,5);
		LCD_SetPixel(195,c,Red,5);
	}
	for (c=60; c<150; c+=5){
		LCD_SetPixel(c,200,Red,5);
	}
	for (c=60; c<180; c+=5){
		LCD_SetPixel(c,105,Red,5);
	}
	LCD_SetPixel(165,225,Red,5);
	LCD_SetPixel(160,220,Red,5);
	LCD_SetPixel(155,215,Red,5);
	LCD_SetPixel(150,210,Red,5);
	LCD_SetPixel(145,205,Red,5);
	LCD_SetPixel(175,200,Red,5);
	LCD_SetPixel(180,195,Red,5);
	LCD_SetPixel(185,190,Red,5);
	LCD_SetPixel(190,185,Red,5);
	LCD_SetPixel(190,120,Red,5);
	LCD_SetPixel(185,115,Red,5);
	LCD_SetPixel(180,110,Red,5);
	LCD_SetPixel(55,110,Red,5);
	LCD_SetPixel(50,115,Red,5);
	LCD_SetPixel(45,120,Red,5);
	LCD_SetPixel(45,185,Red,5);
	LCD_SetPixel(50,190,Red,5);
	LCD_SetPixel(55,195,Red,5);
	GUI_Text(80, 145, (uint8_t *) "GAME OVER!", Red, White);
}

void LCD_DrawCuddling(int16_t X, int16_t Y){
	LCD_DrawRectangle(85+X, 150+Y, 20, 25, White); //Clear Eye
	LCD_DrawRectangle(130+X, 160+Y, 20, 25, White); //Clear Eye
	LCD_DrawRectangle(100+X, 170+Y, 25, 40, White); //Clear Mouth
	
	LCD_SetPixel(85+X,160+Y,Black,5);
	LCD_SetPixel(90+X,165+Y,Black,5);
	LCD_SetPixel(95+X,165+Y,Black,5);
	LCD_SetPixel(100+X,160+Y,Black,5);
	LCD_SetPixel(130+X,170+Y,Black,5);
	LCD_SetPixel(135+X,175+Y,Black,5);
	LCD_SetPixel(140+X,175+Y,Black,5);
	LCD_SetPixel(145+X,170+Y,Black,5);
	
	LCD_SetPixel(100+X,195+Y,Black,5);
	LCD_SetPixel(130+X,195+Y,Black,5);
	LCD_SetPixel(105+X,200+Y,Black,5);
	LCD_SetPixel(125+X,200+Y,Black,5);
	LCD_SetPixel(110+X,205+Y,Black,5);
	LCD_SetPixel(115+X,205+Y,Black,5);
	LCD_SetPixel(120+X,205+Y,Black,5);
	
	LCD_SetPixel(75+X,185+Y,Pink,5);
	LCD_SetPixel(80+X,180+Y,Pink,5);
	LCD_SetPixel(90+X,185+Y,Pink,5);
	LCD_SetPixel(95+X,180+Y,Pink,5);
	LCD_SetPixel(140+X,190+Y,Pink,5);
	LCD_SetPixel(145+X,185+Y,Pink,5);
	LCD_SetPixel(155+X,190+Y,Pink,5);
	LCD_SetPixel(160+X,185+Y,Pink,5);
}

void LCD_DrawHeart(int16_t X, int16_t Y){
	LCD_SetPixel(6+X,0+Y,Black,3);
	LCD_SetPixel(9+X,0+Y,Black,3);
	LCD_SetPixel(15+X,0+Y,Black,3);
	LCD_SetPixel(18+X,0+Y,Black,3);
	LCD_SetPixel(3+X,3+Y,Black,3);
	LCD_SetPixel(12+X,3+Y,Black,3);
	LCD_SetPixel(21+X,3+Y,Black,3);
	LCD_SetPixel(0+X,6+Y,Black,3);
	LCD_SetPixel(24+X,6+Y,Black,3);
	LCD_SetPixel(0+X,9+Y,Black,3);
	LCD_SetPixel(24+X,9+Y,Black,3);
	LCD_SetPixel(3+X,12+Y,Black,3);
	LCD_SetPixel(21+X,12+Y,Black,3);
	LCD_SetPixel(6+X,15+Y,Black,3);
	LCD_SetPixel(18+X,15+Y,Black,3);
	LCD_SetPixel(9+X,18+Y,Black,3);
	LCD_SetPixel(15+X,18+Y,Black,3);
	LCD_SetPixel(12+X,21+Y,Black,3);
	
	LCD_DrawRectangle(3+X,6+Y, 21, 6, Red);
	LCD_SetPixel(6+X,3+Y,Red,3);
	LCD_SetPixel(9+X,3+Y,Red,3);
	LCD_SetPixel(15+X,3+Y,Red,3);
	LCD_SetPixel(18+X,3+Y,Red,3);
	LCD_SetPixel(6+X,12+Y,Red,3);
	LCD_SetPixel(9+X,12+Y,Red,3);
	LCD_SetPixel(12+X,12+Y,Red,3);
	LCD_SetPixel(15+X,12+Y,Red,3);
	LCD_SetPixel(18+X,12+Y,Red,3);
	LCD_SetPixel(9+X,15+Y,Red,3);
	LCD_SetPixel(12+X,15+Y,Red,3);
	LCD_SetPixel(15+X,15+Y,Red,3);
	LCD_SetPixel(12+X,18+Y,Red,3);
	
	LCD_SetPixel(15+X,6+Y,White,3);
	LCD_SetPixel(18+X,9+Y,White,3);
}

void LCD_ClearCuddling(int16_t X, int16_t Y){
	LCD_SetPixel(100+X,195+Y,White,5);
	LCD_SetPixel(130+X,195+Y,White,5);
	LCD_SetPixel(105+X,200+Y,White,5);
	LCD_SetPixel(125+X,200+Y,White,5);
	LCD_SetPixel(110+X,205+Y,White,5);
	LCD_SetPixel(115+X,205+Y,White,5);
	LCD_SetPixel(120+X,205+Y,White,5);
	
	LCD_SetPixel(75+X,185+Y,White,5);
	LCD_SetPixel(80+X,180+Y,White,5);
	LCD_SetPixel(90+X,185+Y,White,5);
	LCD_SetPixel(95+X,180+Y,White,5);
	LCD_SetPixel(140+X,190+Y,White,5);
	LCD_SetPixel(145+X,185+Y,White,5);
	LCD_SetPixel(155+X,190+Y,White,5);
	LCD_SetPixel(160+X,185+Y,White,5);
	
	/*Black Eyes*/
	LCD_SetPixel(85+X,160+Y,Black,5);
	LCD_SetPixel(85+X,155+Y,Black,5);
	LCD_SetPixel(90+X,150+Y,Black,5);
	LCD_SetPixel(95+X,150+Y,Black,5);
	LCD_SetPixel(100+X,155+Y,Black,5);
	LCD_SetPixel(100+X,160+Y,Black,5);
	
	LCD_SetPixel(130+X,170+Y,Black,5);
	LCD_SetPixel(130+X,165+Y,Black,5);
	LCD_SetPixel(135+X,160+Y,Black,5);
	LCD_SetPixel(140+X,160+Y,Black,5);
	LCD_SetPixel(145+X,165+Y,Black,5);
	LCD_SetPixel(145+X,170+Y,Black,5);
	
	/*Black Mouth*/
	LCD_SetPixel(105+X,205+Y,Black,5);
	LCD_SetPixel(110+X,205+Y,Black,5);
	LCD_SetPixel(115+X,205+Y,Black,5);
	LCD_SetPixel(100+X,200+Y,Black,5);
	LCD_SetPixel(120+X,200+Y,Black,5);
	LCD_SetPixel(120+X,195+Y,Black,5);
	LCD_SetPixel(120+X,190+Y,Black,5);
	LCD_SetPixel(120+X,185+Y,Black,5);
	LCD_SetPixel(110+X,190+Y,Black,5);
	LCD_SetPixel(100+X,185+Y,Black,5);
	LCD_SetPixel(100+X,180+Y,Black,5);
	
	/*Yellow Mouth*/
	LCD_SetPixel(105+X,200+Y,Yellow,5);
	LCD_SetPixel(110+X,200+Y,Yellow,5);
	LCD_SetPixel(115+X,200+Y,Yellow,5);
	LCD_SetPixel(115+X,195+Y,Yellow,5);
	LCD_SetPixel(115+X,190+Y,Yellow,5);
	LCD_SetPixel(115+X,185+Y,Yellow,5);
	LCD_SetPixel(110+X,185+Y,Yellow,5);
	LCD_SetPixel(110+X,180+Y,Yellow,5);
	LCD_SetPixel(105+X,180+Y,Yellow,5);
	
	LCD_DrawDynamic1Tamagotchi(0+X,0+Y);
}

void LCD_DrawSpeaker(void){
	int c;
	
	LCD_SetPoint(3,14,Black);
	LCD_SetPoint(3,15,Black);
	LCD_SetPoint(4,12,Black);
	LCD_SetPoint(4,16,Black);
	LCD_SetPoint(3,15,Black);
	for (c=12; c<18; c++) {
		LCD_SetPoint(5,c,Black);
	}
	for (c=6; c<10; c++) {
		LCD_SetPoint(c,11,Black);
		LCD_SetPoint(c,18,Black);
	}
	LCD_SetPoint(10,10,Black);
	LCD_SetPoint(11,9,Black);
	LCD_SetPoint(12,8,Black);
	LCD_SetPoint(13,7,Black);
	LCD_SetPoint(14,6,Black);
	LCD_SetPoint(10,19,Black);
	LCD_SetPoint(11,20,Black);
	LCD_SetPoint(12,21,Black);
	LCD_SetPoint(13,22,Black);
	LCD_SetPoint(14,23,Black);
	for (c=6; c<24; c++) {
		LCD_SetPoint(15,c,Black);
	}
	
	LCD_SetPoint(4,14,Yellow);
	LCD_SetPoint(4,15,Yellow);
	for (c=7; c<23; c++) {
		LCD_SetPoint(14,c,Yellow);
	}
	
	for (c=8; c<22; c++) {
		LCD_SetPoint(13,c,Brown);
	}
	
	LCD_DrawRectangle(6,12,7,6,Grey);
	LCD_SetPoint(10,11,Grey);
	LCD_SetPoint(11,11,Grey);
	LCD_SetPoint(12,11,Grey);
	LCD_SetPoint(11,10,Grey);
	LCD_SetPoint(12,10,Grey);
	LCD_SetPoint(12,9,Grey);
	LCD_SetPoint(10,18,Grey);
	LCD_SetPoint(11,18,Grey);
	LCD_SetPoint(12,18,Grey);
	LCD_SetPoint(11,19,Grey);
	LCD_SetPoint(12,19,Grey);
	LCD_SetPoint(12,20,Grey);
}

void LCD_DrawVol3(uint16_t point){
	int c;
	
	LCD_SetPoint(22,10,point);
	LCD_SetPoint(23,10,point);
	LCD_SetPoint(22,11,point);
	LCD_SetPoint(24,11,point);
	LCD_SetPoint(23,12,point);
	LCD_SetPoint(25,12,point);
	for (c=13; c<17; c++) {
		LCD_SetPoint(24,c,point);
		LCD_SetPoint(26,c,point);
	}
	LCD_SetPoint(22,19,point);
	LCD_SetPoint(23,19,point);
	LCD_SetPoint(22,18,point);
	LCD_SetPoint(24,18,point);
	LCD_SetPoint(23,17,point);
	LCD_SetPoint(25,17,point);
}

void LCD_DrawVol2(uint16_t point){
	LCD_SetPoint(19,12,point);
	LCD_SetPoint(20,12,point);
	LCD_SetPoint(19,13,point);
	LCD_SetPoint(21,13,point);
	LCD_SetPoint(20,14,point);
	LCD_SetPoint(20,15,point);
	LCD_SetPoint(22,14,point);
	LCD_SetPoint(22,15,point);
	LCD_SetPoint(19,17,point);
	LCD_SetPoint(20,17,point);
	LCD_SetPoint(19,16,point);
	LCD_SetPoint(21,16,point);
}

void LCD_DrawVol1(uint16_t point){
	LCD_SetPoint(16,13,point);
	LCD_SetPoint(17,14,point);
	LCD_SetPoint(17,15,point);
	LCD_SetPoint(16,16,point);
}

void LCD_DrawVol0(uint16_t point){
	LCD_SetPoint(17,11,point);
	LCD_SetPoint(18,11,point);
	LCD_SetPoint(17,12,point);
	LCD_SetPoint(19,12,point);
	LCD_SetPoint(18,13,point);
	LCD_SetPoint(24,11,point);
	LCD_SetPoint(23,11,point);
	LCD_SetPoint(24,12,point);
	LCD_SetPoint(22,12,point);
	LCD_SetPoint(23,13,point);
	LCD_SetPoint(17,18,point);
	LCD_SetPoint(18,18,point);
	LCD_SetPoint(17,17,point);
	LCD_SetPoint(19,17,point);
	LCD_SetPoint(18,16,point);
	LCD_SetPoint(24,18,point);
	LCD_SetPoint(23,18,point);
	LCD_SetPoint(24,17,point);
	LCD_SetPoint(22,17,point);
	LCD_SetPoint(23,16,point);
	LCD_SetPoint(20,13,point);
	LCD_SetPoint(21,13,point);
	LCD_SetPoint(20,16,point);
	LCD_SetPoint(21,16,point);
	LCD_SetPoint(19,14,point);
	LCD_SetPoint(19,15,point);
	LCD_SetPoint(22,14,point);
	LCD_SetPoint(22,15,point);
}

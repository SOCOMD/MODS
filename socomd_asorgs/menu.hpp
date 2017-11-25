#include "common.hpp"
#define CATEGORY_SPACING  .01
#define ITEM_SPACING .005
#define ITEM_HEIGHT (1/25)
#define ITEM_WIDTH (ITEM_HEIGHT*(3/4))
#define DIALOG_MARGIN .01
#define LABEL_WIDTH .21
#define TOTAL_WIDTH (safezoneW * 0.34)
#define TOP_SPACING .005
#define TOP (safezoneY + TOP_SPACING)
#define TEXT_SIZE .04
#define FULLCOMBO_WIDTH (TOTAL_WIDTH - (DIALOG_MARGIN * 2) - LABEL_WIDTH)
#define SAVE_LIST_HEIGHT (TOTAL_HEIGHT - (ITEM_HEIGHT*7 - CATEGORY_SPACING*4))
#define TOTAL_HEIGHT safezoneH


#define BOX_COMBO_WIDTH ((FULLCOMBO_WIDTH/5) - (ITEM_SPACING * 4))
#define BOX_COMBO_HEIGHT ((BOX_COMBO_WIDTH *0.86)*(4/3))
#define BOX_SPACING ((FULLCOMBO_WIDTH - BOX_COMBO_WIDTH*5) / 4)
#define MULTI_COMBO_WIDTH (TOTAL_WIDTH - DIALOG_MARGIN - (CATEGORY_SPACING*5) - LABEL_WIDTH - ITEM_WIDTH*3)
#define SAVE_WIDTH (TOTAL_WIDTH - DIALOG_MARGIN - CATEGORY_SPACING*2 - LABEL_WIDTH - MULTI_COMBO_WIDTH)
#define LEFT_START (safezoneX)

#define MULTICOMBO(NAME,FIRSTIDC,YPOS) \
class NAME##Combo : ASORGS_AmmoCombo { \
	idc= FIRSTIDC; \
	y = YPOS; }; \
class NAME##Minus : ASORGS_MinusButton { \
	idc= FIRSTIDC+1; \
	y = YPOS; };\
class NAME##Count : ASORGS_CountText { \
	idc= FIRSTIDC+2; \
	y = YPOS; };\
class NAME##CountTextBoxBG : ASORGS_CountTextBoxBG { \
	idc= FIRSTIDC+4; \
	y = -1000; \
};\
class NAME##CountTextBox : ASORGS_CountTextBox { \
	idc= FIRSTIDC+5; \
	y = -1000; \
	onLoad = "(this select 0) ctrlShow false; (this select 0) ctrlEnable false"; \
	onKillFocus = "_this spawn ASORGS_fnc_numberDeselected;";\
	onChar = "_this spawn ASORGS_fnc_numberCharEntered";\
};\
class NAME##Plus : ASORGS_PlusButton { \
	idc= FIRSTIDC+3; \
	y = YPOS; };
	
#define SINGLECOMBO(NAME,FIRSTIDC,YPOS) \
class NAME##Combo : ASORGS_FullCombo \
{ \
	idc= FIRSTIDC;\
	y = YPOS;	\
}; 
#define LABEL(NAME, FIRSTIDC, YPOS, TEXT) \
	class NAME##Text : ASORGS_FieldLabel \
	{ \
		idc= FIRSTIDC; \
		text=TEXT; \
		y = YPOS; \
	}; 
#define HEADING(NAME, FIRSTIDC, YPOS, TEXT) \
	class NAME##Text : ASORGS_FieldLabelHeading \
	{ \
		idc= FIRSTIDC; \
		text=TEXT; \
		y = YPOS; \
	}; 	
#define false 0
#define true 1
class ASORGS_FieldLabel : ASORGS_RscText
{
	style = 0x01;//ST_RIGHT
	x = LEFT_START + DIALOG_MARGIN;
	h = ITEM_HEIGHT;
	w = LABEL_WIDTH - DIALOG_MARGIN;
	sizeEx = TEXT_SIZE;
};
class ASORGS_FieldLabelHeading : ASORGS_FieldLabel
{
	font = "PuristaSemiBold";
};
class ASORGS_FullCombo : ASORGS_RscCombo
{
	x = LEFT_START + DIALOG_MARGIN + LABEL_WIDTH;
	w = FULLCOMBO_WIDTH;
	h = ITEM_HEIGHT;
	soundExpand[] = {"", 0.0, 1};
	soundCollapse[] = {"", 0.0, 1};
	//need to work out wtf this does
	maxHistoryDelay = 1000;
	autoScrollSpeed = 1000;
	onLBSelChanged = "_this spawn ASORGS_fnc_selectionChanged";
	sizeEx = TEXT_SIZE;
	colorFrame[] = {1,1,1,1};
	colorBox[] = {1,1,1,1};
	colorBorder[] = {1,1,1,1};
	colorPicture[] = {1,1,1,1};
	colorPictureRight[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,1};
	colorPictudeDisabled[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	//style=ST_FRAME;
	colorBackground[] = {.3, .3, .3, 1};
	style=ST_MULTI + ST_SHADOW + ST_KEEP_ASPECT_RATIO + ST_FRAME;
};
class ASORGS_BoxCombo : ASORGS_RscCombo
{
	x = LEFT_START + DIALOG_MARGIN + LABEL_WIDTH;
	soundExpand[] = {"", 0.0, 1};
	soundCollapse[] = {"", 0.0, 1};
	//need to work out wtf this does
	maxHistoryDelay = 1000;
	autoScrollSpeed = 1000;
	onLBSelChanged = "_this spawn ASORGS_fnc_selectionChanged";
	colorFrame[] = {1,1,1,1};
	colorBox[] = {1,1,1,1};
	colorBorder[] = {1,1,1,1};
	colorPicture[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,1};
	colorPictudeDisabled[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	//style=ST_FRAME;
	arrowEmpty="#(argb,8,8,3)color(0,0,0,0)";
	arrowFull="#(argb,8,8,3)color(0,0,0,0)";
	colorBackground[] = {.3, .3, .3, 1};
	w=BOX_COMBO_WIDTH;
	h=BOX_COMBO_HEIGHT;
	style=ST_PICTURE;
};

class ASORGS_MinusButton :ASORGS_RscShortcutButton
{
	x = LEFT_START + (TOTAL_WIDTH - DIALOG_MARGIN - CATEGORY_SPACING*3 - ITEM_WIDTH*3);

	//text= "ASORGS\images\minus_ca.paa";
	textureNoShortcut =  "ASORGS\images\minus_ca.paa";
	onButtonClick = "_this spawn ASORGS_fnc_PressMinus; false";
	sizeEx = TEXT_SIZE;
	w = ITEM_WIDTH;//1/30;
	type = CT_SHORTCUTBUTTON;
	h = ITEM_HEIGHT;
	style = ST_KEEP_ASPECT_RATIO;
	class ShortcutPos{
		left=0;
		top=0;
		w=ITEM_WIDTH;
		h=ITEM_HEIGHT;
	};
	#define ANIMTEXTURECOLOR "#(rgb,8,8,3)color(0.15,0.15,0.15,1)"
	colorBackground[] = {1,1,1,1};
	animTextureDefault = ANIMTEXTURECOLOR;
	animTextureNormal = ANIMTEXTURECOLOR;
	animTextureDisabled =   "#(rgb,8,8,3)color(0.05,0.05,0.05,1)";
	animTextureOver =  "#(rgb,8,8,3)color(1,1,1,1)";
	animTextureFocused =  "#(rgb,8,8,3)color(1,1,1,1)";
	animTexturePressed =  "#(rgb,8,8,3)color(1,1,1,1)";
	color2[]={0,0,0,1};
	color[]={0,1,1,1};
	colorFocused[]={0,1,1,1};
};
class ASORGS_CountText : ASORGS_RscButton
{
	text="20";
	style = ST_CENTER;
	w = ITEM_WIDTH + CATEGORY_SPACING*3;
	h = ITEM_HEIGHT;
	x = LEFT_START + (TOTAL_WIDTH - DIALOG_MARGIN - ITEM_HEIGHT*2 - CATEGORY_SPACING);
	onSetFocus = "_this spawn ASORGS_fnc_numberSelected;";
	sizeEx = TEXT_SIZE;
	colorBackground[] = {0.3, 0.3, 0.3, 1};
};
class ASORGS_CountTextBoxBG : ASORGS_RscText
{
	//type=CT_STATIC;
	//style = 0;

	text="";
	w = ITEM_HEIGHT;
	h = ITEM_HEIGHT;
	x = LEFT_START + (TOTAL_WIDTH - DIALOG_MARGIN - ITEM_HEIGHT*2);
	colorBackground[] = {1,1,1,1};
	colorText[] = {0,1,0,1};
	colorDisabled[] = {1,1,1,1};
	 colorBackgroundDisabled[] = { 1, 1, 1, 1 };   // background color for disabled state
  	colorBackgroundActive[] = { 1, 1, 1, 1 };   // background color for active state
	color[] = {1,1,0,1};
	colorBorder[] = {0,0,1,1}; // grey
	colorFrame[] = {1,0,0,1}; 
	colorBackground2[] = {0,1,0,1};
	visible = false;
	autocomplete = false;
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 1};
	class Attributes
	{
		shadow = "0";
	};
};
class ASORGS_CountTextBox : ASORGS_RscEdit
{
	text="20";
	w = ITEM_HEIGHT;
	h = ITEM_HEIGHT;
	x = LEFT_START + (TOTAL_WIDTH - DIALOG_MARGIN - ITEM_HEIGHT*2);
	colorBackground[] = {1,1,1,1};
	colorText[] = {0,0,0,1};
	colorDisabled[] = {1,1,1,1};
		colorBorder[] = {0,0,0,1};
			colorFrame[] = {0,0,0,1}; 
	  colorShadow[] = {0.5,0.5,0.5,1}; // darkgrey
	 colorBackgroundDisabled[] = { 1, 1, 1, 1 };   // background color for disabled state
  	colorBackgroundActive[] = { 1, 1, 1, 1 };   // background color for active state
	color[] = {1,1,1,1};
	style = ST_FRAME + ST_CENTER;
	autocomplete = false;
	visible = false;
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 1};
	sizeEx = TEXT_SIZE;
};
class ASORGS_PlusButton :ASORGS_MinusButton
{
	textureNoShortcut =  "ASORGS\images\plus_ca.paa";
	x = LEFT_START + (TOTAL_WIDTH - ITEM_HEIGHT*(3/4)) - DIALOG_MARGIN;
	onButtonClick = "_this spawn ASORGS_fnc_PressPlus; false";
};
class ASORGS_Main_Dialog {
	idd = 418000;
	name= "ASORGS_Main_Dialog";
	movingEnable = 1;
	enableSimulation = true;
	onLoad = "ASORGS_Open = true; [] spawn ASORGS_fnc_ReloadMainDialog; ";
	onUnload = "ASORGS_Open = false; [] spawn ASORGS_fnc_Closed; ";
	onMouseMoving = "_this spawn ASORGS_fnc_RotateClone";

	class controls {
		HEADING(primaryWeapon, 420000, TOP + CATEGORY_SPACING + ITEM_HEIGHT + ITEM_SPACING, "Main Weapon" );
		SINGLECOMBO(primaryWeapon, 420001, TOP + CATEGORY_SPACING + ITEM_HEIGHT + ITEM_SPACING);
		LABEL(primaryWeaponScope, 420060, TOP + CATEGORY_SPACING + (ITEM_HEIGHT + ITEM_SPACING)*2, "Scope");
		SINGLECOMBO(primaryWeaponScope, 420061, TOP + CATEGORY_SPACING + (ITEM_HEIGHT+ ITEM_SPACING)*2 );
		LABEL(primaryWeaponRail, 420070,  TOP + CATEGORY_SPACING + (ITEM_HEIGHT + ITEM_SPACING)*2, "Rail");
		SINGLECOMBO(primaryWeaponRail, 420071,   TOP + CATEGORY_SPACING + (ITEM_HEIGHT+ ITEM_SPACING)*2 );
		LABEL(primaryWeaponSuppressor, 420080,  TOP + CATEGORY_SPACING + (ITEM_HEIGHT + ITEM_SPACING)*2, "Suppressor");
		SINGLECOMBO(primaryWeaponSuppressor, 420081,  TOP + CATEGORY_SPACING + (ITEM_HEIGHT + ITEM_SPACING)*2);
		LABEL(primaryWeaponBipod, 428000,  TOP + CATEGORY_SPACING + (ITEM_HEIGHT + ITEM_SPACING)*2, "Bipod");
		SINGLECOMBO(primaryWeaponBipod, 428001,  TOP + CATEGORY_SPACING + (ITEM_HEIGHT + ITEM_SPACING)*2); 
		
		HEADING(handgun, 420160,  TOP + (CATEGORY_SPACING * 3) + (ITEM_HEIGHT + ITEM_SPACING)*4, "Handgun");
		SINGLECOMBO(handgun, 420161, TOP + (CATEGORY_SPACING * 3) + (ITEM_HEIGHT + ITEM_SPACING)*4);
		LABEL(handgunScope, 420220, TOP + (CATEGORY_SPACING * 3) + (ITEM_HEIGHT + ITEM_SPACING)*4, "Scope");
		SINGLECOMBO(handgunScope, 420221, TOP + (CATEGORY_SPACING * 3) + (ITEM_HEIGHT + ITEM_SPACING)*4);
		LABEL(handgunSuppressor, 420230, TOP + (CATEGORY_SPACING * 3) + (ITEM_HEIGHT + ITEM_SPACING)*4, "Suppressor");
		SINGLECOMBO(handgunSuppressor, 420231, TOP + (CATEGORY_SPACING * 3) + (ITEM_HEIGHT + ITEM_SPACING)*4);
		LABEL(handgunBipod, 428010,  TOP + CATEGORY_SPACING + (ITEM_HEIGHT + ITEM_SPACING)*2, "Bipod");
		SINGLECOMBO(handgunBipod, 428011,  TOP + CATEGORY_SPACING + (ITEM_HEIGHT + ITEM_SPACING)*2);

		HEADING(extraattach, 420700, TOP + (CATEGORY_SPACING * 7) + (ITEM_HEIGHT + ITEM_SPACING)*8, "Spare Attach"); 
		SINGLECOMBO(extraattach1, 420701, TOP + (CATEGORY_SPACING * 7) + (ITEM_HEIGHT + ITEM_SPACING)*8); 
		SINGLECOMBO(extraattach2, 420711, TOP + (CATEGORY_SPACING * 7) + (ITEM_HEIGHT + ITEM_SPACING)*8); 
		SINGLECOMBO(extraattach3, 420721, TOP + (CATEGORY_SPACING * 7) + (ITEM_HEIGHT + ITEM_SPACING)*8); 
		SINGLECOMBO(extraattach4, 420731, TOP + (CATEGORY_SPACING * 7) + (ITEM_HEIGHT + ITEM_SPACING)*8); 
		SINGLECOMBO(extraattach5, 420741, TOP + (CATEGORY_SPACING * 7) + (ITEM_HEIGHT + ITEM_SPACING)*8); 
		
		HEADING(uniform, 420240, TOP + (CATEGORY_SPACING * 8) + (ITEM_HEIGHT + ITEM_SPACING)*9, "Uniform"); 

		LABEL(goggles, 422000, TOP + (CATEGORY_SPACING * 8) + (ITEM_HEIGHT + ITEM_SPACING)*13, "Glasses"); 
		SINGLECOMBO(goggles, 422001, TOP + (CATEGORY_SPACING * 8) + (ITEM_HEIGHT + ITEM_SPACING)*13); 

		LABEL(insignia, 420750, TOP + (CATEGORY_SPACING * 8) + (ITEM_HEIGHT + ITEM_SPACING)*16, "Insignia"); 
		SINGLECOMBO(insignia, 420751, TOP + (CATEGORY_SPACING * 8) + (ITEM_HEIGHT + ITEM_SPACING)*16); 	

		class rotateDragThing : ASORGS_RscPicture
		{
			idc = 425004;
			type = 1;
			style = 48;
				font = "PuristaMedium";
			onMouseButtonDown = "_this spawn ASORGS_fnc_RotateCloneStart";
			onMouseButtonUp = "_this spawn ASORGS_fnc_RotateCloneStop";
			onMouseZChanged = "_this spawn ASORGS_fnc_Zoom"; 
			//onMouseEnter="[1] spawn ASORGS_fnc_RotateClone";
			//onMouseExit="[0] spawn ASORGS_fnc_RotateCloneStop";
			colorText[] = {0,0,0,0};
			colorDisabled[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			colorBackgroundDisabled[] = {0,0,0,0};
			offsetX = 0.003;
			offsetY = 0.003;
			offsetPressedX = 0.002;
			offsetPressedY = 0.002;
			colorFocused[] = {0,0,0,0};
			colorShadow[] = {0, 0, 0, 0};
			colorBorder[] = {0, 0, 0, 0};
			borderSize = 0.0;
			soundEnter[] = {"\A3\ui_f\data\Sound\RscButtonMenu\soundEnter", 0.09, 1};
			soundPush[] = {"\A3\ui_f\data\Sound\RscButtonMenu\soundPush", 0.0, 0};
			soundClick[] = {"\A3\ui_f\data\Sound\RscButtonMenu\soundClick", 0.07, 1};
			soundEscape[] = {"\A3\ui_f\data\Sound\RscButtonMenu\soundEscape", 0.09, 1};
			w=safezoneW - TOTAL_WIDTH - ITEM_HEIGHT*2 - ( LEFT_START - safezoneX); //remove item height so it doesn't overlap the close button
			h=safezoneH;
			y=safezoneY;
			x= LEFT_START + TOTAL_WIDTH;
		};
		
		class closeButton : ASORGS_PlusButton {
			idc = 427010;
			textureNoShortcut =  "A3\ui_f\data\gui\Rsc\RscDisplayArcadeMap\icon_exit_cross_ca.paa";
			onButtonClick = "closeDialog 0;";
			w = ITEM_WIDTH*2;
			h = ITEM_HEIGHT*2;
			x = safezoneX +safezoneW - ITEM_WIDTH*2 - (LEFT_START-safezoneX);
			y = safezoneY;
			class ShortcutPos{
				left=0;
				top=0;
				w=ITEM_WIDTH*2;
				h=ITEM_HEIGHT*2;
			};
			#define ANIMTEXTURECOLORCLOSE "#(rgb,8,8,3)color(0.5,0,0,1)"
			colorBackground[] = {1,1,1,1};
			animTextureDefault = ANIMTEXTURECOLORCLOSE;
			animTextureNormal = ANIMTEXTURECOLORCLOSE;
			animTextureDisabled =  "#(rgb,8,8,3)color(0.05,0.05,0.05,1)";
			animTextureOver =  "#(rgb,8,8,3)color(0.7,0,0,1)";
			animTextureFocused =  "#(rgb,8,8,3)color(0.7,0,0,1)";
			animTexturePressed =  "#(rgb,8,8,3)color(0.4,0,0,1)";
		};
	};
};

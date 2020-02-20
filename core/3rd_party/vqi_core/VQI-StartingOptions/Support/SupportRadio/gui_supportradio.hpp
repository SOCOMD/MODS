// Graphic User Interface (display only; resource)
//	

	
class VQI_SUPPORT_RADIO_GYPSY {			// UNIQUE MAIN-CLASSSNAME of this GUI/Project
	idd = -1;				          	// Display ID, can use -1 IF NO reference
	movingEnable = 0;					// Able to MOVE graphic (need in resource?)
	fadein = 0;							// How quick it pops on (seconds)
	duration = 9999;					// Time it will be displayed (seconds)
	fadeout = 0;						// How quick it goes away (seconds)
	name = "VQI SUPPORT_RADIO_GYPSY";	// Easy-To-Read 'Proper Name' in i.e. Trigger Menu
	onLoad = "uiNamespace setVariable ['VQI_SUPPORT_RADIO_GYPSY', _this select 0]";	// ????
  
	class controls {	

		class BKGD {						// SUB-CLASSNAME of specific section or element
			idc = -1;						// Control ID, can use -1 IF NO reference
			type = 0;						// Control #: Static, Text, Button, Listbox, etc
			style = 48;						// Control #: Picture, Border, Text Align, etc					// 2096 ?
			text = "vqi_core\VQI-StartingOptions\Support\SupportRadio\Gypsy911_F.paa";						// text OR graphic to display (path)
			colorBackground[] = {0,0,0,0};	// Background Color (r,g,b,a)
			colorText[] = {1,1,1,1};		// Font Color or Foreground (r,g,b,a)
			font = "PuristaMedium";			// Font Family
			sizeEx = 0.05;					// Font Size (0..1)
			
			x = safezoneX + 16 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT)
			y = safezoneY + 8 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP)
			w = 70 * pixelGridNoUIScale * pixelW;
			h = 70 * pixelGridNoUIScale * pixelH;			
			/*
			x = safeZoneX + safeZoneW - UI_GRID_W * 150; 		// Top right corner with gutter
		    y = safeZoneY + UI_GRID_W * 0.25;              		// Top right corner with gutter
		    w = UI_GRID_W * 120;                            	// Width of control
		    h = UI_GRID_H * 120;                             	// Height of control
			
			x = safezoneX * 1.0; 			//x = safezoneX * -1.8;	// - (right)
			y = safezoneY * 1.0; 			//y = safezoneY * -1.6;	// - (down)
			h = 2; 
			w = 2;
			*/
			//size = "0.05 * safezoneH";
			
		};
		
		class GPSGRID {						// 
			idc = 1000;						// 
			type = 0;						// 0 static
			style = 0;						// 0 left, 1 right, 2 center
			text = "";						// 
			colorBackground[] = {0,0,200,0.0};		// 
			colorText[] = {0,0,0,0.6};				// 
			font = "EtelkaMonospaceProBold";		// 
			sizeEx = 0.030;	
				/*
				x = safezoneX + safezoneW - 1.820;	// - (right)
				y = safezoneY + safezoneH - 1.360;	// - (down)
				h = 1; 
				w = 1;		
				*/
			x = safezoneX + 48.5 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 39 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 7 * pixelGridNoUIScale * pixelW;
			h = 2 * pixelGridNoUIScale * pixelH;				
		};
		
		class CHANNEL {						// 
			idc = 1001;						// 
			type = 0;						// 
			style = 0;						// 
			text = "";						// 
			colorBackground[] = {0,0,200,0.0};		// 
			colorText[] = {0,0,0,0.6};				// 
			font = "EtelkaMonospaceProBold";		// 
			sizeEx = 0.030;					
				/*
				x = safezoneX + safezoneW - 1.970;	// - (right)
				y = safezoneY + safezoneH - 1.360;	// - (down)
				h = 1; 
				w = 1;					
				*/
			x = safezoneX + 44 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 39 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 5 * pixelGridNoUIScale * pixelW;
			h = 2 * pixelGridNoUIScale * pixelH;	
		};
		
		class KEYPAD {						// 
			idc = 1002;						// 
			type = 0;						// 
			style = 0;						// 
			text = "";						// 
			colorBackground[] = {0,0,200,0.0};		// 
			colorText[] = {0,0,0,0.6};				// 
			font = "EtelkaMonospaceProBold";		// 
			sizeEx = 0.030;					
				/*
				x = safezoneX + safezoneW - 1.970;	// - (right)
				y = safezoneY + safezoneH - 1.360;	// - (down)
				h = 1; 
				w = 1;					
				*/
			x = safezoneX + 54 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 39 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 4 * pixelGridNoUIScale * pixelW;
			h = 2 * pixelGridNoUIScale * pixelH;	
		};	

		class ROUNDS {						// 
			idc = 1003;						// 
			type = 0;						// 
			style = 0;						// 
			text = "";						// 
			colorBackground[] = {0,0,200,0.0};		// 
			colorText[] = {0,0,0,0.6};				// 
			font = "EtelkaMonospaceProBold";		// 
			sizeEx = 0.030;					
				/*
				x = safezoneX + safezoneW - 1.970;	// - (right)
				y = safezoneY + safezoneH - 1.360;	// - (down)
				h = 1; 
				w = 1;					
				*/
			x = safezoneX + 54 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 41 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 4 * pixelGridNoUIScale * pixelW;
			h = 2 * pixelGridNoUIScale * pixelH;	
		};		
	};
};






//////////////
/* NOTES:

		x = 0.70 * safezoneW + safezoneX;  				
		y = 0.53 * safezoneH + safezoneY;
		h = 1; 
		w = 1 * 0.745;


*/
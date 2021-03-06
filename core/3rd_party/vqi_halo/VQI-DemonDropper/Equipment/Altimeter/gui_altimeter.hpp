// HellJumper 3G Next-Gen Altimeter
//

#define ST_KEEP_ASPECT_RATIO  0x800



// Day/Normal
class VQI_ALTIMETER_1 {					// UNIQUE MAIN-CLASSSNAME of this GUI/Project
	idd = -1;				          	// Display ID, can use -1 IF NO reference
	movingEnable = 0;					// Able to MOVE graphic (need in resource?)
	fadein = 0;							// How quick it pops on (seconds)
	duration = 999;						// Time it will be displayed (seconds)
	fadeout = 1;						// How quick it goes away (seconds)
	name = "VQI Altimeter One";			// Easy-To-Read 'Proper Name' in i.e. Trigger Menu
	onLoad = "uiNamespace setVariable ['VQI_Altimeter_1', _this select 0]";	// ????

  
	controls[] = {	"VQIA1_BKGD","VQIA1_ALTITUDE_FT","VQIA1_MAPGRID","VQIA1_HDG",// List ALL SUB-CLASSNAMES (in foreground) below
					"VQIA1_ALTITUDE_M","VQIA1_TIME","VQIA1_TEMP","VQIA1_SAO2_A",
					"VQIA1_METAR","VQIA1_COMPASS1"};	

	class VQIA1_BKGD {				// SUB-CLASSNAME of specific section or element
	idc = -1;						// Control ID, can use -1 IF NO reference
	type = 0;						// Control #: Static, Text, Button, Listbox, etc
	style = 48;						// Control #: Picture, Border, Text Align, etc
	text = "vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\VQI_ALTIMETER_1_hj.paa";	// text OR graphic to display (path)
	colorBackground[] = {0,0,0,0};	// Background Color (r,g,b,a)
	colorText[] = {1,1,1,1};		// Font Color or Foreground (r,g,b,a)
	font = "PuristaMedium";			// Font Family
	sizeEx = 0.05;					// Font Size (0..1)
		x =  -0.5;  
		y =  0.6;
		h = 1; 
		w = 1 * 0.745; 						
	};
	
	class VQIA1_ALTITUDE_FT {			
	idc = 1000;						
	type = 0;						
	style = 2;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {1,0.5,0,1};		
	font = "PuristaBold";			
	sizeEx = 0.08;					
		x =  -0.5;  
		y =  0.605;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_MAPGRID {			
	idc = 1001;						
	type = 0;						
	style = 2;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {1,1,1,0.5};		
	font = "PuristaLight";			
	sizeEx = 0.04;					
		x =  -0.4;  
		y =  0.536;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_HDG {			
	idc = 1002;						
	type = 0;						
	style = 2;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {1,1,1,0.7};		
	font = "PuristaBold";			
	sizeEx = 0.06;					
		x =  -0.5;  
		y =  0.445;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_ALTITUDE_M {			
	idc = 1003;						
	type = 0;						
	style = ST_LEFT;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {1,1,1,0.5};		
	font = "PuristaLight";			
	sizeEx = 0.04;					
		x =  -0.275;  
		y =  0.536;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_TIME {			
	idc = 1004;						
	type = 0;						
	style = 2;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {1,1,1,0.8};		
	font = "PuristaLight";			
	sizeEx = 0.04;					
		x =  -0.5;  
		y =  0.736;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_TEMP {			
	idc = 1005;						
	type = 0;						
	style = ST_RIGHT;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {1,1,1,0.5};		
	font = "PuristaBold";			
	sizeEx = 0.045;					
		x =  -0.935;  
		y =  0.7;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_SAO2_A {			
	idc = 1006;						
	type = 0;						
	style = ST_RIGHT;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {1,1,1,0.5};		
	font = "PuristaBold";			
	sizeEx = 0.045;					
		x =  -0.75;  
		y =  0.7;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_METAR {			
	idc = 1007;						
	type = 0;						
	style = 2;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {1,1,1,0.5};		
	font = "EtelkaMonospacePro";			
	sizeEx = 0.04;					
		x =  -0.5;  
		y =  0.68;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_COMPASS1 {			
	idc = 1008;
	type = 0;
	style = 48;
	text = "";
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,0.8};		
	font = "EtelkaMonospaceProBold";			
	sizeEx = 0.04;					
		x =  -0.06;  
		y =  0.95;
		h = 0.05; 
		w = 0.05 * 3 / 4;
	};	
};


// Night - Dusk...
class VQI_ALTIMETER_1N1 {			// UNIQUE MAIN-CLASSSNAME of this GUI/Project
	idd = -1;				          	// Display ID, can use -1 IF NO reference
	movingEnable = 0;					// Able to MOVE graphic (need in resource?)
	fadein = 0;							// How quick it pops on (seconds)
	duration = 999;						// Time it will be displayed (seconds)
	fadeout = 1;						// How quick it goes away (seconds)
	name = "VQI Altimeter 1Dusk";		// Easy-To-Read 'Proper Name' in i.e. Trigger Menu
	onLoad = "uiNamespace setVariable ['VQI_Altimeter_1N1', _this select 0]";	// ????
  
	controls[] = {"VQIA1_BKGD_N1"};	

	class VQIA1_BKGD_N1 {			// SUB-CLASSNAME of specific section or element
	idc = -1;						// Control ID, can use -1 IF NO reference
	type = 0;						// Control #: Static, Text, Button, Listbox, etc
	style = 48;						// Control #: Picture, Border, Text Align, etc
	text = "vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\VQI_ALTIMETER_1night.paa";	// text OR graphic to display (path)
	colorBackground[] = {0,0,0,0};	// Background Color (r,g,b,a)
	colorText[] = {1,1,1,0.5};		// Font Color or Foreground (r,g,b,a)
	font = "PuristaMedium";			// Font Family
	sizeEx = 0.05;					// Font Size (0..1)
		x =  -0.5;  
		y =  0.6;
		h = 1; 
		w = 1 * 0.745; 						
	};
};


// Night - Dark!
class VQI_ALTIMETER_1N2 {			// UNIQUE MAIN-CLASSSNAME of this GUI/Project
	idd = -1;				          	// Display ID, can use -1 IF NO reference
	movingEnable = 0;					// Able to MOVE graphic (need in resource?)
	fadein = 0;							// How quick it pops on (seconds)
	duration = 999;						// Time it will be displayed (seconds)
	fadeout = 1;						// How quick it goes away (seconds)
	name = "VQI Altimeter 1Night";		// Easy-To-Read 'Proper Name' in i.e. Trigger Menu
	onLoad = "uiNamespace setVariable ['VQI_Altimeter_1N2', _this select 0]";	// ????
  
	controls[] = {"VQIA1_BKGD_N2"};	

	class VQIA1_BKGD_N2 {			// SUB-CLASSNAME of specific section or element
	idc = -1;						// Control ID, can use -1 IF NO reference
	type = 0;						// Control #: Static, Text, Button, Listbox, etc
	style = 48;						// Control #: Picture, Border, Text Align, etc
	text = "vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\VQI_ALTIMETER_1night.paa";	// text OR graphic to display (path)
	colorBackground[] = {0,0,0,0};	// Background Color (r,g,b,a)
	colorText[] = {1,1,1,0.85};		// Font Color or Foreground (r,g,b,a)
	font = "PuristaMedium";			// Font Family
	sizeEx = 0.05;					// Font Size (0..1)
		x =  -0.5;  
		y =  0.6;
		h = 1; 
		w = 1 * 0.745; 						
	};
};


// Night / Glow
class VQI_ALTIMETER_1GL {				// UNIQUE MAIN-CLASSSNAME of this GUI/Project
	idd = -1;				          	// Display ID, can use -1 IF NO reference
	movingEnable = 0;					// Able to MOVE graphic (need in resource?)
	fadein = 0;							// How quick it pops on (seconds)
	duration = 999;						// Time it will be displayed (seconds)
	fadeout = 1;						// How quick it goes away (seconds)
	name = "VQI Altimeter NightGlo";			// Easy-To-Read 'Proper Name' in i.e. Trigger Menu
	onLoad = "uiNamespace setVariable ['VQI_Altimeter_1', _this select 0]";	// ????

  
	controls[] = {	"VQIA1_BKGD","VQIA1_ALTITUDE_FT","VQIA1_MAPGRID","VQIA1_HDG",	// List ALL SUB-CLASSNAMES (in foreground) below
					"VQIA1_ALTITUDE_M","VQIA1_TIME","VQIA1_TEMP","VQIA1_SAO2_A",
					"VQIA1_METAR","VQIA1_COMPASS1"};	

	class VQIA1_BKGD {				// SUB-CLASSNAME of specific section or element
	idc = -1;						// Control ID, can use -1 IF NO reference
	type = 0;						// Control #: Static, Text, Button, Listbox, etc
	style = 48;						// Control #: Picture, Border, Text Align, etc
	text = "vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\VQI_ALTIMETER_1_hj_night.paa";	// text OR graphic to display (path)
	colorBackground[] = {0,0,0,0};	// Background Color (r,g,b,a)
	colorText[] = {1,1,1,1};		// Font Color or Foreground (r,g,b,a)
	font = "PuristaMedium";			// Font Family
	sizeEx = 0.05;					// Font Size (0..1)
		x =  -0.5;  
		y =  0.6;
		h = 1; 
		w = 1 * 0.745; 						
	};
	
	class VQIA1_ALTITUDE_FT {			
	idc = 1000;						
	type = 0;						
	style = 2;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {0,1,1,0.2};		
	font = "PuristaBold";			
	sizeEx = 0.08;					
		x =  -0.5;  
		y =  0.605;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_MAPGRID {			
	idc = 1001;						
	type = 0;						
	style = 2;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {0,1,1,0.2};		
	font = "PuristaLight";			
	sizeEx = 0.04;					
		x =  -0.4;  
		y =  0.536;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_HDG {			
	idc = 1002;						
	type = 0;						
	style = 2;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {0,1,1,0.2};		
	font = "PuristaBold";			
	sizeEx = 0.06;					
		x =  -0.5;  
		y =  0.445;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_ALTITUDE_M {			
	idc = 1003;						
	type = 0;						
	style = ST_LEFT;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {0,1,1,0.2};		
	font = "PuristaLight";			
	sizeEx = 0.04;					
		x =  -0.275;  
		y =  0.536;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_TIME {			
	idc = 1004;						
	type = 0;						
	style = 2;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {0,1,1,0.2};		
	font = "PuristaLight";			
	sizeEx = 0.04;					
		x =  -0.5;  
		y =  0.736;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_TEMP {			
	idc = 1005;						
	type = 0;						
	style = ST_RIGHT;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {0,1,1,0.2};		
	font = "PuristaBold";			
	sizeEx = 0.045;					
		x =  -0.935;  
		y =  0.7;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_SAO2_A {			
	idc = 1006;						
	type = 0;						
	style = ST_RIGHT;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {0,1,1,0.2};		
	font = "PuristaBold";			
	sizeEx = 0.045;					
		x =  -0.75;  
		y =  0.7;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_METAR {			
	idc = 1007;						
	type = 0;						
	style = 2;						
	text = "";						
	colorBackground[] = {0,0,0,0};	
	colorText[] = {0,1,1,0.2};		
	font = "EtelkaMonospacePro";			
	sizeEx = 0.04;					
		x =  -0.5;  
		y =  0.68;
		h = 1; 
		w = 1 * 3 / 4;
	};
	
	class VQIA1_COMPASS1 {			
	idc = 1008;
	type = 0;
	style = 48;
	text = "";
	colorBackground[] = {0,0,0,0};
	colorText[] = {0,1,1,0.2};		
	font = "EtelkaMonospaceProBold";			
	sizeEx = 0.04;					
		x =  -0.06;  
		y =  0.95;
		h = 0.05; 
		w = 0.05 * 3 / 4;
	};
		
};

//
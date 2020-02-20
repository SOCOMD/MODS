// Dialog - Buttons / Interaction
// 		


class VQI_SUPPORT_RADIO_MAIN
{
	idd = -1;
	movingEnable = true;	// 
	onLoad = "SupportRadiodialog = 1;";
	onUnload = "SupportRadiodialog = 0; 999 cutText ['', 'PLAIN']";
	
	class Controls 
	{
		class BKGD: SupportRadio_Picture
		{
			idc = 1200;			// Graphic
			style = 2096;	
			text = "";			// bkgd graphic
			x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
			y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
			h = 2; 
			w = 2;
		};
		
		
		
		// GPS
		class UP1: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 44.5 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 46.5 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn1_up.sqf' ";
		};
		class DN1: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 44.5 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 48.7 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn1_dn.sqf' ";
		};
		
		
		class UP2: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 46.7 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 46.5 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn2_up.sqf' ";
		};
		class DN2: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 46.7 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 48.7 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn2_dn.sqf' ";
		};
		
		
		class UP3: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 49 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 46.5 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn3_up.sqf' ";
		};
		class DN3: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 49 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 48.7 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn3_dn.sqf' ";
		};

		
		class UP4: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 51.3 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 46.5 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn4_up.sqf' ";
		};
		class DN4: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 51.3 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 48.7 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn4_dn.sqf' ";
		};

		
		class UP5: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 53.6 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 46.5 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn5_up.sqf' ";
		};
		class DN5: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 53.6 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 48.7 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn5_dn.sqf' ";
		};


		class UP6: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 55.9 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 46.5 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn6_up.sqf' ";
		};
		class DN6: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 55.9 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 48.7 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn6_dn.sqf' ";
		};
		
		
		
		
		
		
		// Channel
		class CHL: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 47.1 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 52.9 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_frq_btnL.sqf' ";
		};
		// KEYPAD
		class KEYPAD: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 50.1 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 52.9 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_gps_btn7_up.sqf' ";
		};		
		class CHR: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			x = safezoneX + 53.1 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 52.9 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_frq_btnR.sqf' ";
		};
		
		
		
		
		
		// L
		class LPAD: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			
			x = safezoneX + 44.3 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 51 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_key_l.sqf' ";
		};		
		
		// X
		class XPAD: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			
			x = safezoneX + 47.1 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 51 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_key_x.sqf' ";
		};		
		// Y
		class YPAD: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			
			x = safezoneX + 50.1 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 51 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_key_y.sqf' ";
		};		
		// Z
		class ZPAD: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			
			x = safezoneX + 53.1 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 51 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_key_z.sqf' ";
		};			
		
		// R
		class RPAD: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			
			x = safezoneX + 56 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 51 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 1.8 * pixelGridNoUIScale * pixelW;
			h = 1.2 * pixelGridNoUIScale * pixelH;
			
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_key_r.sqf' ";
		};		
		
		
		
		
		
		// TRANSMIT
		class TRANSMIT: SupportRadio_Button
		{
			idc = 1600;			// 
			text = "";			// 
			/*
			x = 0.140;			// + (right)			0.205
			y = 0.875;			// + (down)				1.010
			w = 0.070 * 3/4;	// width
			h = 0.070;			// height
			*/
			
			x = safezoneX + 34.7 * pixelGridNoUIScale * pixelW;			// +n moves img rt (if +5, then +6 moves it RT) add
			y = safezoneY + 50.7 * pixelGridNoUIScale * pixelH;			// -n moves img up (if -5, then -6 moves it UP) subtract
			w = 3 * pixelGridNoUIScale * pixelW;
			h = 3 * pixelGridNoUIScale * pixelH;

			
			action = " _nil=[]execVM 'vqi_core\VQI-StartingOptions\Support\SupportRadio\Buttons\supportradio_transmit.sqf' ";
		};	
	};
};










////////////////////////
/* NOTES:



*/
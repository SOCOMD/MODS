//
//







// 
class VQI_MEDICAL_INJURYREPORT
{
	idd = -1;
	movingEnable = 0;	// 
	fadein = 0;
	duration = 5;
	fadeout = 1;
	name = "Medical Injury Report";
	onLoad = "uiNamespace setVariable ['VQI_MEDICAL_INJURYREPORT', _this select 0]";	// ????
	
	controls[] = {	"InjuryReportBKGD",
					"head_1_s","head_1_m","head_1_l","head_1_x","head_2_s","head_2_m","head_2_l","head_2_x","head_3_s","head_3_m","head_3_l","head_3_x","head_4_s","head_4_m","head_4_l","head_4_x","head_5_s","head_5_m","head_5_l","head_5_x",
					"chest_1_s","chest_1_m","chest_1_l","chest_1_x","chest_2_s","chest_2_m","chest_2_l","chest_2_x","chest_3_s","chest_3_m","chest_3_l","chest_3_x","chest_4_s","chest_4_m","chest_4_l","chest_4_x","chest_5_s","chest_5_m","chest_5_l","chest_5_x","chest_6_s","chest_6_m","chest_6_l","chest_6_x","chest_7_s","chest_7_m","chest_7_l","chest_7_x","chest_8_s","chest_8_m","chest_8_l","chest_8_x","chest_9_s","chest_9_m","chest_9_l","chest_9_x","chest_10_s","chest_10_m","chest_10_l","chest_10_x","chest_11_s","chest_11_m","chest_11_l","chest_11_x","chest_12_s","chest_12_m","chest_12_l","chest_12_x",
					"gut_1_s","gut_1_m","gut_1_l","gut_1_x","gut_2_s","gut_2_m","gut_2_l","gut_2_x","gut_3_s","gut_3_m","gut_3_l","gut_3_x","gut_4_s","gut_4_m","gut_4_l","gut_4_x","gut_5_s","gut_5_m","gut_5_l","gut_5_x","gut_6_s","gut_6_m","gut_6_l","gut_6_x","gut_7_s","gut_7_m","gut_7_l","gut_7_x","gut_8_s","gut_8_m","gut_8_l","gut_8_x",
					"rightarm_1_s","rightarm_1_m","rightarm_1_l","rightarm_1_x","rightarm_2_s","rightarm_2_m","rightarm_2_l","rightarm_2_x","rightarm_3_s","rightarm_3_m","rightarm_3_l","rightarm_3_x",
					"leftarm_1_s","leftarm_1_m","leftarm_1_l","leftarm_1_x","leftarm_2_s","leftarm_2_m","leftarm_2_l","leftarm_2_x","leftarm_3_s","leftarm_3_m","leftarm_3_l","leftarm_3_x",
					"rightforearm_1_s","rightforearm_1_m","rightforearm_1_l","rightforearm_1_x","rightforearm_2_s","rightforearm_2_m","rightforearm_2_l","rightforearm_2_x","rightforearm_3_s","rightforearm_3_m","rightforearm_3_l","rightforearm_3_x","rightforearm_4_s","rightforearm_4_m","rightforearm_4_l","rightforearm_4_x",
					"leftforearm_1_s","leftforearm_1_m","leftforearm_1_l","leftforearm_1_x","leftforearm_2_s","leftforearm_2_m","leftforearm_2_l","leftforearm_2_x","leftforearm_3_s","leftforearm_3_m","leftforearm_3_l","leftforearm_3_x","leftforearm_4_s","leftforearm_4_m","leftforearm_4_l","leftforearm_4_x",
					"rightupleg_1_s","rightupleg_1_m","rightupleg_1_l","rightupleg_1_x","rightupleg_2_s","rightupleg_2_m","rightupleg_2_l","rightupleg_2_x","rightupleg_3_s","rightupleg_3_m","rightupleg_3_l","rightupleg_3_x","rightupleg_4_s","rightupleg_4_m","rightupleg_4_l","rightupleg_4_x","rightupleg_5_s","rightupleg_5_m","rightupleg_5_l","rightupleg_5_x",
					"leftupleg_1_s","leftupleg_1_m","leftupleg_1_l","leftupleg_1_x","leftupleg_2_s","leftupleg_2_m","leftupleg_2_l","leftupleg_2_x","leftupleg_3_s","leftupleg_3_m","leftupleg_3_l","leftupleg_3_x","leftupleg_4_s","leftupleg_4_m","leftupleg_4_l","leftupleg_4_x","leftupleg_5_s","leftupleg_5_m","leftupleg_5_l","leftupleg_5_x",
					"leftleg_1_s","leftleg_1_m","leftleg_1_l","leftleg_1_x","leftleg_2_s","leftleg_2_m","leftleg_2_l","leftleg_2_x","leftleg_3_s","leftleg_3_m","leftleg_3_l","leftleg_3_x","leftleg_4_s","leftleg_4_m","leftleg_4_l","leftleg_4_x",
					"rightleg_1_s","rightleg_1_m","rightleg_1_l","rightleg_1_x","rightleg_2_s","rightleg_2_m","rightleg_2_l","rightleg_2_x","rightleg_3_s","rightleg_3_m","rightleg_3_l","rightleg_3_x","rightleg_4_s","rightleg_4_m","rightleg_4_l","rightleg_4_x",
					"rightfoot_1_s","rightfoot_1_m","rightfoot_1_l","rightfoot_1_x","rightfoot_2_s","rightfoot_2_m","rightfoot_2_l","rightfoot_2_x",
					"leftfoot_1_s","leftfoot_1_m","leftfoot_1_l","leftfoot_1_x","leftfoot_2_s","leftfoot_2_m","leftfoot_2_l","leftfoot_2_x"
	};
	
	class InjuryReportBKGD
	{
		idc = -1;			// Graphic
		style = 2096;		// 48 ?
		type=0;
		text = "vqi_core\VQI-StartingOptions\Medical\injury_base.paa";			// bkgd graphic
		colorBackground[] = {1,1,1,1};		// 0,0,0,0
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};




// head
	class head_1_s
	{
		idc = 1111;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class head_1_m
	{
		idc = 1112;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class head_1_l
	{
		idc = 1113;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class head_1_x
	{
		idc = 1114;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class head_2_s
	{
		idc = 1121;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class head_2_m
	{
		idc = 1122;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class head_2_l
	{
		idc = 1123;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class head_2_x
	{
		idc = 1124;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class head_3_s
	{
		idc = 1131;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class head_3_m
	{
		idc = 1132;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class head_3_l
	{
		idc = 1133;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class head_3_x
	{
		idc = 1134;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class head_4_s
	{
		idc = 1141;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class head_4_m
	{
		idc = 1142;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class head_4_l
	{
		idc = 1143;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class head_4_x
	{
		idc = 1144;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class head_5_s
	{
		idc = 1151;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class head_5_m
	{
		idc = 1152;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class head_5_l
	{
		idc = 1153;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class head_5_x
	{
		idc = 1154;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	
	
	
	
	/////////////////////////////////////////////////////////////////////////////
	class chest_1_s
	{
		idc = 1211;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_1_m
	{
		idc = 1212;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_1_l
	{
		idc = 1213;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_1_x
	{
		idc = 1214;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_2_s
	{
		idc = 1221;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_2_m
	{
		idc = 1222;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_2_l
	{
		idc = 1223;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_2_x
	{
		idc = 1224;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_3_s
	{
		idc = 1231;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_3_m
	{
		idc = 1232;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_3_l
	{
		idc = 1233;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_3_x
	{
		idc = 1234;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class chest_4_s
	{
		idc = 1241;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_4_m
	{
		idc = 1242;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_4_l
	{
		idc = 1243;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_4_x
	{
		idc = 1244;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class chest_5_s
	{
		idc = 1251;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_5_m
	{
		idc = 1252;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_5_l
	{
		idc = 1253;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_5_x
	{
		idc = 1254;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class chest_6_s
	{
		idc = 1261;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_6_m
	{
		idc = 1262;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_6_l
	{
		idc = 1263;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_6_x
	{
		idc = 1264;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class chest_7_s
	{
		idc = 1271;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_7_m
	{
		idc = 1272;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_7_l
	{
		idc = 1273;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_7_x
	{
		idc = 1274;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class chest_8_s
	{
		idc = 1281;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_8_m
	{
		idc = 1282;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_8_l
	{
		idc = 1283;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_8_x
	{
		idc = 1284;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class chest_9_s
	{
		idc = 1211;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_9_m
	{
		idc = 1212;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_9_l
	{
		idc = 1213;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_9_x
	{
		idc = 1214;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class chest_10_s
	{
		idc = 12101;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_10_m
	{
		idc = 12102;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_10_l
	{
		idc = 12103;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_10_x
	{
		idc = 12104;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class chest_11_s
	{
		idc = 12111;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_11_m
	{
		idc = 12112;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_11_l
	{
		idc = 12113;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_11_x
	{
		idc = 12114;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class chest_12_s
	{
		idc = 12121;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class chest_12_m
	{
		idc = 12122;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_12_l
	{
		idc = 12123;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class chest_12_x
	{
		idc = 12124;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	




//////////////////////////////////////////////////////////////////////////////	
	class gut_1_s
	{
		idc = 1311;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class gut_1_m
	{
		idc = 1312;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_1_l
	{
		idc = 1313;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_1_x
	{
		idc = 1314;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class gut_2_s
	{
		idc = 1321;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class gut_2_m
	{
		idc = 1322;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_2_l
	{
		idc = 1323;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_2_x
	{
		idc = 1324;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_3_s
	{
		idc = 1331;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class gut_3_m
	{
		idc = 1332;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_3_l
	{
		idc = 1333;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_3_x
	{
		idc = 1334;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_4_s
	{
		idc = 1341;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class gut_4_m
	{
		idc = 1342;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_4_l
	{
		idc = 1343;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_4_x
	{
		idc = 1344;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_5_s
	{
		idc = 1351;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class gut_5_m
	{
		idc = 1352;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_5_l
	{
		idc = 1353;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_5_x
	{
		idc = 1354;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_6_s
	{
		idc = 1361;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class gut_6_m
	{
		idc = 1362;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_6_l
	{
		idc = 1363;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_6_x
	{
		idc = 1364;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_7_s
	{
		idc = 1371;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class gut_7_m
	{
		idc = 1372;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_7_l
	{
		idc = 1373;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_7_x
	{
		idc = 1374;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_8_s
	{
		idc = 1381;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class gut_8_m
	{
		idc = 1382;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_8_l
	{
		idc = 1383;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class gut_8_x
	{
		idc = 1384;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	





/////////////////////////////////////////////////////////////////////////////////
	class rightarm_1_s
	{
		idc = 1411;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightarm_1_m
	{
		idc = 1412;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightarm_1_l
	{
		idc = 1413;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightarm_1_x
	{
		idc = 1414;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class rightarm_2_s
	{
		idc = 1421;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightarm_2_m
	{
		idc = 1422;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightarm_2_l
	{
		idc = 1423;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightarm_2_x
	{
		idc = 1424;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightarm_3_s
	{
		idc = 1431;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightarm_3_m
	{
		idc = 1432;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightarm_3_l
	{
		idc = 1433;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightarm_3_x
	{
		idc = 1434;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	
	
	
/////////////////////////////////////////////////////////////////////////////////
	class leftarm_1_s
	{
		idc = 1511;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftarm_1_m
	{
		idc = 1512;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftarm_1_l
	{
		idc = 1513;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftarm_1_x
	{
		idc = 1514;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class leftarm_2_s
	{
		idc = 1521;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftarm_2_m
	{
		idc = 1522;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftarm_2_l
	{
		idc = 1523;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftarm_2_x
	{
		idc = 1524;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftarm_3_s
	{
		idc = 1531;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftarm_3_m
	{
		idc = 1532;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftarm_3_l
	{
		idc = 1533;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftarm_3_x
	{
		idc = 1534;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	
	
	
	
//////////////////////////////////////////////////////////////////////////////	
	class rightforearm_1_s
	{
		idc = 1611;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightforearm_1_m
	{
		idc = 1612;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightforearm_1_l
	{
		idc = 1613;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightforearm_1_x
	{
		idc = 1614;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class rightforearm_2_s
	{
		idc = 1621;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightforearm_2_m
	{
		idc = 1622;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightforearm_2_l
	{
		idc = 1623;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightforearm_2_x
	{
		idc = 1624;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightforearm_3_s
	{
		idc = 1631;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightforearm_3_m
	{
		idc = 1632;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightforearm_3_l
	{
		idc = 1633;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightforearm_3_x
	{
		idc = 1634;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightforearm_4_s
	{
		idc = 1641;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightforearm_4_m
	{
		idc = 1642;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightforearm_4_l
	{
		idc = 1643;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightforearm_4_x
	{
		idc = 1644;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};




//////////////////////////////////////////////////////////////////////////////	
	class leftforearm_1_s
	{
		idc = 1711;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftforearm_1_m
	{
		idc = 1712;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftforearm_1_l
	{
		idc = 1713;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftforearm_1_x
	{
		idc = 1714;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class leftforearm_2_s
	{
		idc = 1721;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftforearm_2_m
	{
		idc = 1722;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftforearm_2_l
	{
		idc = 1723;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftforearm_2_x
	{
		idc = 1724;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftforearm_3_s
	{
		idc = 1731;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftforearm_3_m
	{
		idc = 1732;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftforearm_3_l
	{
		idc = 1733;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftforearm_3_x
	{
		idc = 1734;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftforearm_4_s
	{
		idc = 1741;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftforearm_4_m
	{
		idc = 1742;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftforearm_4_l
	{
		idc = 1743;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftforearm_4_x
	{
		idc = 1744;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	
	
	
	
	
//////////////////////////////////////////////////////////////////////////////	
	class rightupleg_1_s
	{
		idc = 1811;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightupleg_1_m
	{
		idc = 1812;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_1_l
	{
		idc = 1813;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_1_x
	{
		idc = 1814;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class rightupleg_2_s
	{
		idc = 1821;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightupleg_2_m
	{
		idc = 1822;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_2_l
	{
		idc = 1823;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_2_x
	{
		idc = 1824;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_3_s
	{
		idc = 1831;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightupleg_3_m
	{
		idc = 1832;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_3_l
	{
		idc = 1833;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_3_x
	{
		idc = 1834;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_4_s
	{
		idc = 1841;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightupleg_4_m
	{
		idc = 1842;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_4_l
	{
		idc = 1843;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_4_x
	{
		idc = 1844;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_5_s
	{
		idc = 1851;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightupleg_5_m
	{
		idc = 1852;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_5_l
	{
		idc = 1853;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightupleg_5_x
	{
		idc = 1854;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	
	
	
	
//////////////////////////////////////////////////////////////////////////////	
	class leftupleg_1_s
	{
		idc = 1911;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftupleg_1_m
	{
		idc = 1912;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_1_l
	{
		idc = 1913;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_1_x
	{
		idc = 1914;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class leftupleg_2_s
	{
		idc = 1921;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftupleg_2_m
	{
		idc = 1922;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_2_l
	{
		idc = 1923;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_2_x
	{
		idc = 1924;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_3_s
	{
		idc = 1931;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftupleg_3_m
	{
		idc = 1932;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_3_l
	{
		idc = 1933;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_3_x
	{
		idc = 1934;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_4_s
	{
		idc = 1941;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftupleg_4_m
	{
		idc = 1942;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_4_l
	{
		idc = 1943;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_4_x
	{
		idc = 1944;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_5_s
	{
		idc = 1951;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftupleg_5_m
	{
		idc = 1952;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_5_l
	{
		idc = 1953;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftupleg_5_x
	{
		idc = 1954;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	
	
	
	
	
//////////////////////////////////////////////////////////////////////////////	
	class rightleg_1_s
	{
		idc = 11011;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightleg_1_m
	{
		idc = 11012;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightleg_1_l
	{
		idc = 11013;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightleg_1_x
	{
		idc = 11014;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class rightleg_2_s
	{
		idc = 11021;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightleg_2_m
	{
		idc = 11022;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightleg_2_l
	{
		idc = 11023;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightleg_2_x
	{
		idc = 11024;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightleg_3_s
	{
		idc = 11031;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightleg_3_m
	{
		idc = 11032;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightleg_3_l
	{
		idc = 11033;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightleg_3_x
	{
		idc = 11034;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightleg_4_s
	{
		idc = 11041;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightleg_4_m
	{
		idc = 11042;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightleg_4_l
	{
		idc = 11043;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightleg_4_x
	{
		idc = 11044;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	

	
	
	
	
//////////////////////////////////////////////////////////////////////////////	
	class leftleg_1_s
	{
		idc = 11111;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftleg_1_m
	{
		idc = 11112;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftleg_1_l
	{
		idc = 11113;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftleg_1_x
	{
		idc = 11114;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class leftleg_2_s
	{
		idc = 11121;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftleg_2_m
	{
		idc = 11122;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftleg_2_l
	{
		idc = 11123;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftleg_2_x
	{
		idc = 11124;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftleg_3_s
	{
		idc = 11131;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftleg_3_m
	{
		idc = 11132;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftleg_3_l
	{
		idc = 11133;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftleg_3_x
	{
		idc = 11134;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftleg_4_s
	{
		idc = 11141;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftleg_4_m
	{
		idc = 11142;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftleg_4_l
	{
		idc = 11143;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftleg_4_x
	{
		idc = 11144;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	
	
	
	
	
//////////////////////////////////////////////////////////////////////////////	
	class rightfoot_1_s
	{
		idc = 11211;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightfoot_1_m
	{
		idc = 11212;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightfoot_1_l
	{
		idc = 11213;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightfoot_1_x
	{
		idc = 11214;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class rightfoot_2_s
	{
		idc = 11221;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class rightfoot_2_m
	{
		idc = 11222;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightfoot_2_l
	{
		idc = 11223;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class rightfoot_2_x
	{
		idc = 11224;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	
	
	
	
	
//////////////////////////////////////////////////////////////////////////////	
	class leftfoot_1_s
	{
		idc = 11311;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftfoot_1_m
	{
		idc = 11312;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftfoot_1_l
	{
		idc = 11313;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftfoot_1_x
	{
		idc = 11314;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};		
	class leftfoot_2_s
	{
		idc = 11321;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
	class leftfoot_2_m
	{
		idc = 11322;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftfoot_2_l
	{
		idc = 11323;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
	class leftfoot_2_x
	{
		idc = 11324;			// Graphic
		style = 2096;	
		type=0;
		text = "";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;		
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (left)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};	
};
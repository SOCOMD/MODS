//
//







// base
class VQI_MEDICAL_INJURYREPORT
{
	idd = -1;
	movingEnable = 0;	// 
	fadein = 0;
	duration = 5;
	fadeout = 1;
	name = "Injury Report Base";
	onLoad = "uiNamespace setVariable ['VQI_MEDICAL_INJURYREPORT', _this select 0]";	// ????
	
	controls[] = {"InjuryReportBase"};
	
	class InjuryReportBase
	{
		idc = -1;			// Graphic
		style = 2096;	
		type=0;
		text = "vqi_core\VQI-StartingOptions\Medical\injury_base.paa";			// bkgd graphic
		colorBackground[] = {1,1,1,1};
		colorText[] = {1,1,1,1};
		font = "PuristaMedium";
		sizeEx = 0.05;
		x = safezoneX * 1.0; 				//x = safezoneX * -1.8;	// - (right)
		y = safezoneY * 1.0; 				//y = safezoneY * -1.6;	// - (down)
		h = 2; 
		w = 2;
	};
};











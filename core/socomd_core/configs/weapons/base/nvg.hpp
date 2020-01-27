//////////////////////////////////////////////////////////////////////
// NVGS

class NVGoggles;
class zeus_earpiece : NVGoggles {
	author = "Pomigit";
	displayName = "Zeus Radio Earpiece";
	picture = "\socomd_data_core\icon\icon_H_earpiece.paa";
	model = "\socomd_data_core\models\earpiece.p3d";
	modelOptics = "-";
	visionMode[] = {"Normal", "NVG", "TI"};
	thermalMode[] = {0,1};

	class ItemInfo {
		type = 616;
		hmdType = 0;
		uniformModel = "\socomd_data_core\models\earpiece.p3d";
		modelOff = "\socomd_data_core\models\earpiece.p3d";
		mass = 4;
	};
};
class USP_L3_pvs31_A2;
class SOCOMD_NVG : USP_L3_pvs31_A2	{
	displayName = "SOCOMD NVD (WP tube)";
	descriptionShort = "SOCOMD NVD /w White Phosphor tube";
	//colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {0.5, 0.1, 1.5, 0.9}, {1, 1, 6, 0.0}}; //WP
	colorPreset[] = {
		0.05, //Offset
		{0.0, 0.0, 0.0, 0.25}, //Blend
		{0.5, 0.1, 1.5, 1.1}, //Colour
		{-1, -1, -6, 0.0} //Desaturation
	};
	ace_nightvision_generation = 3;
};
class SOCOMD_NVG_GR : SOCOMD_NVG	{
	displayName = "SOCOMD NVD (Green tube)";
	descriptionShort = "SOCOMD NVD /w Green tube";
	//colorPreset[] = {0,{0,0,0,0},{1.3,1.2,0,0.9}, {6,1,1,0}}; //Green
	colorPreset[] = {
		0.01,
		{0,0,0,0.2},
		{1.1, 1.3,0.9,1.1},
		{-6,-1,-1,0}
	};
	ace_nightvision_generation = 3;
};


class CUP_NVG_GPNVG_black;
class SOCOMD_NVG_GPNVG_WP_black: CUP_NVG_GPNVG_black {
	displayName = "GPNVG (WP tube)";
	descriptionShort = "Quad NVD /w White Phosphor tube";
	//colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {0.5, 0.1, 1.5, 0.9}, {1, 1, 6, 0.0}}; //WP
	colorPreset[] = {
		0.05, //Offset
		{0.0, 0.0, 0.0, 0.25}, //Blend
		{0.5, 0.1, 1.5, 1.1}, //Colour
		{-1, -1, -6, 0.0} //Desaturation
	};
	ace_nightvision_generation = 2;
};

class SOCOMD_NVG_GPNVG_GR_black: CUP_NVG_GPNVG_black {
	displayName = "GPNVG (Green tube)";
	descriptionShort = "Quad NVD /w Green tube";
	colorPreset[] = {
		0.01,
		{0,0,0,0.2},
		{1.1, 1.3,0.9,1.1},
		{-6,-1,-1,0}
	};
	ace_nightvision_generation = 2;
};

class A3_GPNVG18b_BLK_F;
class SOCOMD_GPNVG18b_BLK_F : A3_GPNVG18b_BLK_F {
	displayName = "GPNVG18 (Black, WP tube)";
	descriptionShort = "Quad NVD /w White Phosphor tube";
	colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {0.5, 0.1, 1.5, 0.9}, {1, 1, 6, 0.0}}; // White Phosphor tube Preset
};


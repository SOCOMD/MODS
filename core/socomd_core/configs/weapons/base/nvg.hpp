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
class NVGoggles_WP;
class SOCOMD_NVG : NVGoggles_WP	{
	displayName = "SOCOMD NVD (WP tube)";
	descriptionShort = "SOCOMD NVD /w White Phosphor tube";
	colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {0.5, 0.1, 1.5, 0.9}, {1, 1, 6, 0.0}}; // White Phosphor tube Preset
};

class A3_GPNVG18_F;
class SOCOMD_GPNVG18_F : A3_GPNVG18_F {
	displayName = "GPNVG18 (Tan, WP tube)";
	descriptionShort = "Quad NVD /w White Phosphor tube";
	colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {0.5, 0.1, 1.5, 0.9}, {1, 1, 6, 0.0}}; // White Phosphor tube Preset
};

class A3_GPNVG18b_BLK_F;
class SOCOMD_GPNVG18b_BLK_F : A3_GPNVG18b_BLK_F {
	displayName = "GPNVG18 (Black, WP tube)";
	descriptionShort = "Quad NVD /w White Phosphor tube";
	colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {0.5, 0.1, 1.5, 0.9}, {1, 1, 6, 0.0}}; // White Phosphor tube Preset
};


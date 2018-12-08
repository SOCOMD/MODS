//////////////////////////////////////////////////////////////////////
// NVGS

class NVGoggles;
class zeus_earpiece : NVGoggles {
	author = "Pomigit";
	displayName = "Zeus Radio Earpiece";
	picture = "\socomd_data\icon\icon_H_earpiece.paa";
	model = "\socomd_data\models\earpiece.p3d";
	modelOptics = "-";
	visionMode[] = {"Normal", "NVG", "TI"};
	thermalMode[] = {0,1};

	class ItemInfo {
		type = 616;
		hmdType = 0;
		uniformModel = "\socomd_data\models\earpiece.p3d";
		modelOff = "\socomd_data\models\earpiece.p3d";
		mass = 4;
	};
};

class A3_GPNVG18_F;
class SOCOMD_GPNVG18_F : A3_GPNVG18_F {
	displayName = "GPNVG18 (Tan, WP tube)";
	descriptionShort = "Quad NVD /w White Phosphor tube";
	colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {0.7, 0.3, 1.3, 0.9}, {1, 1, 6, 0.0}};
};

class A3_GPNVG18b_BLK_F;
class SOCOMD_GPNVG18b_BLK_F : A3_GPNVG18b_BLK_F {
	displayName = "GPNVG18 (Black, WP tube)";
	descriptionShort = "Quad NVD /w White Phosphor tube";
	colorPreset[] = {0.0, {0.0, 0.0, 0.0, 0.0}, {0.7, 0.3, 1.3, 0.9}, {1, 1, 6, 0.0}};
};

class ACE_NVG_Gen4;
class SOCOMD_Invis_NVG : ACE_NVG_Gen4 {
	model="\A3\Weapons_F\DummyItem.p3d";
	class ItemInfo {
		type = 616;
		uniformModel = "";
		modelOff = "";
		mass = 0;
	};
};
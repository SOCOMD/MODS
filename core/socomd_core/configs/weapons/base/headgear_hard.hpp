#define HELMET_ARMOR(ARMOR,PASS) \
class ItemInfo : ItemInfo { \
	class HitpointsProtectionInfo { \
		class Head { \
			armor = ARMOR; \
			hitPointName = "HitHead"; \
			passThrough = PASS; \
		}; \
	}; \
};

#define HELMET_ARMOR_STRONG HELMET_ARMOR(12,0.1)
#define HELMET_SOLS_ARMOR HELMET_ARMOR(12,0.1)

#define HEARING_PROTECTION_VICCREW ace_hearing_lowerVolume = 0;\
ace_hearing_protection = 1;

#define HEARING_PROTECTION_EARMUFF ace_hearing_lowerVolume = 0.75;\
ace_hearing_protection = 0.5;
#define HEARING_PROTECTION_PELTOR ace_hearing_lowerVolume = 0.0;\
ace_hearing_protection = 0.4;

////////////////////////////////////////////////////////////////////////////////

class HeadgearItem;

//TODO add peltors for Groud vic crew - @Slatery

class H_PilotHelmetHeli_B;
class H_PilotHelmetHeli_O : H_PilotHelmetHeli_B {
	class ItemInfo;
	HEARING_PROTECTION_VICCREW
};

class H_CrewHelmetHeli_B;
class H_CrewHelmetHeli_O : H_CrewHelmetHeli_B {
	class ItemInfo;
	HEARING_PROTECTION_VICCREW
};

class H_HelmetCrew_B;
class H_HelmetCrew_I :H_HelmetCrew_B {
	class ItemInfo;
	HEARING_PROTECTION_VICCREW
};

class ADFU_H_OpsCore_02 : ItemCore {
	class ItemInfo;
};

class ADFU_H_OpsCore_03 : ItemCore {
	class ItemInfo;
	HEARING_PROTECTION_PELTOR
};
class ADFU_H_OpsCore_08 : ItemCore {
	class ItemInfo;
	HEARING_PROTECTION_PELTOR
};

class ADFU_H_Airframe_Cover_03 : ItemCore {
	class ItemInfo;
	HEARING_PROTECTION_PELTOR
};

class ADFU_H_Airframe_Cover_10 : ItemCore {
	class ItemInfo;
	HEARING_PROTECTION_PELTOR
};

class ADFU_H_Airframe_Cover_03_MC;

class ADFU_H_Airframe_Cover_05 : ItemCore {
	class ItemInfo;
};

class ADFU_H_Airframe_Cover_02 : ItemCore {
	class ItemInfo;
};

////////////////////////////////////////////////////////////////////////////////
//ADFU Helmets

class ADFU_H_OpsCore_02_BLK: ADFU_H_OpsCore_02 {
	scope = public;
	scopeArsenal = 2;
	displayName = "OpsCore (Black)";
	picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";

	HELMET_ARMOR_STRONG
	
	hiddenSelections[]= {
		"camo",
		"camo2",
		"_Camera",
		"_Chemlights",
		"_CW",
		"_ESS",
		"_ESSglass",
		"_IR_Strobe",
		"_Peltor",
		"_Surefire",
		"_Manta_Back",
		"_Manta_Top",
		"_Vlite_Green",
		"_Vlite_Red"
	};

	hiddenSelectionsTextures[]= {
		"socomd_data_core\CTgear\h_opscore_black_co.paa",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		""
	};
};

class ADFU_H_OpsCore_08_BLK: ADFU_H_OpsCore_08 {
	scope = public;
	scopeArsenal = 2;
	displayName="OpsCore (Black)";
	picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"camo",
		"camo2",
		"_Camera",
		"_Chemlights",
		"_CW",
		"_ESS",
		"_ESSglass",
		"_IR_Strobe",
		"_Peltor",
		"_Surefire",
		"_Manta_Back",
		"_Manta_Top",
		"_Vlite_Green",
		"_Vlite_Red"
	};

	hiddenSelectionsTextures[]= {
		"socomd_data_core\CTgear\h_opscore_black_co.paa",
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"socomd_data_core\CTgear\h_gear_01_black_co.paa",
		"",
		"",
		"",
		"",
		""
	};
};

class ADFU_H_Airframe_Cover_10_MC: ADFU_H_Airframe_Cover_05 {
	scope = public;
	scopeArsenal = 2;
	displayName="Airframe (MC)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"_arc_peltor",
		"_camera",
		"_cover",
		"_face_cover",
		"_Manta_Rear",
		"_NVG_Battery",
		"_surefire_light",
		"camo",
		"camo2"
	};

	hiddenSelectionsTextures[]= {
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units_MC\data\h_airframe_cover_mc_co.paa",
		"",
		"",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_airframe_khk_co.paa",
		"ADFU_Units\data\h_fast_khk_co.paa"
	};
};

class ADFU_H_Airframe_Cover_11_MC: ADFU_H_Airframe_Cover_05 {
	scope = public;
	scopeArsenal = 2;
	displayName="Airframe (MC)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"_arc_peltor",
		"_camera",
		"_cover",
		"_face_cover",
		"_Manta_Rear",
		"_NVG_Battery",
		"_surefire_light",
		"camo",
		"camo2"
	};

	hiddenSelectionsTextures[]= {
		"",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units_MC\data\h_airframe_cover_mc_co.paa",
		"",
		"",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_airframe_khk_co.paa",
		"ADFU_Units\data\h_fast_khk_co.paa"
	};
};

class ADFU_H_Airframe_02_tan: ADFU_H_Airframe_Cover_02 {
	scope = public;
	scopeArsenal = 2;
	displayName="Airframe (Tan)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"_arc_peltor",
		"_camera",
		"_cover",
		"_face_cover",
		"_Manta_Rear",
		"_NVG_Battery",
		"_surefire_light",
		"camo",
		"camo2"
	};

	hiddenSelectionsTextures[]= {
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"socomd_data_core\CTgear\h_airframe_tan_co.paa",
		"socomd_data_core\CTgear\h_fast_khk_co.paa"
	};
};

class ADFU_H_Airframe_03_tan: ADFU_H_Airframe_Cover_03 {
	scope = public;
	scopeArsenal = 2;
	displayName="Airframe (Tan)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"_arc_peltor",
		"_camera",
		"_cover",
		"_face_cover",
		"_Manta_Rear",
		"_NVG_Battery",
		"_surefire_light",
		"camo",
		"camo2"
	};

	hiddenSelectionsTextures[]= {
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"",
		"",
		"",
		"",
		"",
		"",
		"socomd_data_core\CTgear\h_airframe_tan_co.paa",
		"socomd_data_core\CTgear\h_fast_khk_co.paa"
	};
};

class ADFU_H_Airframe_10_tan: ADFU_H_Airframe_Cover_05 {
	scope = public;
	scopeArsenal = 2;
	displayName="Airframe (Tan)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"_arc_peltor",
		"_camera",
		"_cover",
		"_face_cover",
		"_Manta_Rear",
		"_NVG_Battery",
		"_surefire_light",
		"camo",
		"camo2"
	};

	hiddenSelectionsTextures[]= {
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"",
		"",
		"",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"socomd_data_core\CTgear\h_airframe_tan_co.paa",
		"socomd_data_core\CTgear\h_fast_khk_co.paa"
	};
};

class ADFU_H_Airframe_11_tan: ADFU_H_Airframe_Cover_05 {
	scope = public;
	scopeArsenal = 2;
	displayName="Airframe (Tan)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"_arc_peltor",
		"_camera",
		"_cover",
		"_face_cover",
		"_Manta_Rear",
		"_NVG_Battery",
		"_surefire_light",
		"camo",
		"camo2"
	};

	hiddenSelectionsTextures[]= {
		"",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"",
		"",
		"",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"socomd_data_core\CTgear\h_airframe_tan_co.paa",
		"socomd_data_core\CTgear\h_fast_khk_co.paa"
	};
};

class ADFU_H_Airframe_02_OD: ADFU_H_Airframe_Cover_02 {
	scope = public;
	scopeArsenal = 2;
	displayName="Airframe (OD)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"_arc_peltor",
		"_camera",
		"_cover",
		"_face_cover",
		"_Manta_Rear",
		"_NVG_Battery",
		"_surefire_light",
		"camo",
		"camo2"
	};
	hiddenSelectionsTextures[]= {
		"",
		"",
		"",
		"",
		"",
		"",
		"",
		"socomd_data_core\CTgear\h_airframe_OD_co.paa",
		"socomd_data_core\CTgear\h_fast_khk_co.paa"
	};
};

class ADFU_H_Airframe_03_OD: ADFU_H_Airframe_Cover_03 {
	scope = public;
	scopeArsenal = 2;
	displayName="Airframe (OD)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"_arc_peltor",
		"_camera",
		"_cover",
		"_face_cover",
		"_Manta_Rear",
		"_NVG_Battery",
		"_surefire_light",
		"camo",
		"camo2"
	};

	hiddenSelectionsTextures[]= {
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"",
		"",
		"",
		"",
		"",
		"",
		"socomd_data_core\CTgear\h_airframe_OD_co.paa",
		"socomd_data_core\CTgear\h_fast_khk_co.paa"
	};
};

class ADFU_H_Airframe_10_OD: ADFU_H_Airframe_Cover_05 {
	scope = public;
	scopeArsenal = 2;
	displayName="Airframe (OD)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"_arc_peltor",
		"_camera",
		"_cover",
		"_face_cover",
		"_Manta_Rear",
		"_NVG_Battery",
		"_surefire_light",
		"camo",
		"camo2"
	};

	hiddenSelectionsTextures[]= {
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"",
		"",
		"",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"socomd_data_core\CTgear\h_airframe_OD_co.paa",
		"socomd_data_core\CTgear\h_fast_khk_co.paa"
	};
};

class ADFU_H_Airframe_11_OD: ADFU_H_Airframe_Cover_05 {
	scope = public;
	scopeArsenal = 2;
	displayName="Airframe (OD)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"_arc_peltor",
		"_camera",
		"_cover",
		"_face_cover",
		"_Manta_Rear",
		"_NVG_Battery",
		"_surefire_light",
		"camo",
		"camo2"
	};

	hiddenSelectionsTextures[]= {
		"",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"",
		"",
		"",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"socomd_data_core\CTgear\h_airframe_OD_co.paa",
		"socomd_data_core\CTgear\h_fast_khk_co.paa"
	};
};

class ADFU_H_Airframe_11_AMCU: ADFU_H_Airframe_Cover_05 {
	scope = public;
	scopeArsenal = 2;
	displayName="Airframe (AMCU)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"_arc_peltor",
		"_camera",
		"_cover",
		"_face_cover",
		"_Manta_Rear",
		"_NVG_Battery",
		"_surefire_light",
		"camo",
		"camo2"
	};

	hiddenSelectionsTextures[]= {
		"",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"socomd_data_core\CTgear\h_airframe_cover_AMC_co.paa",
		"",
		"",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"socomd_data_core\CTgear\h_airframe_OD_co.paa",
		"socomd_data_core\CTgear\h_fast_khk_co.paa"
	};
};

class ADFU_H_Airframe_10_AMCU: ADFU_H_Airframe_Cover_03 {
	scope = public;
	scopeArsenal = 2;
	displayName="Airframe (AMCU)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";

	HELMET_ARMOR_STRONG

	hiddenSelections[]= {
		"_arc_peltor",
		"_camera",
		"_cover",
		"_face_cover",
		"_Manta_Rear",
		"_NVG_Battery",
		"_surefire_light",
		"camo",
		"camo2"
	};

	hiddenSelectionsTextures[]= {
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"socomd_data_core\CTgear\h_airframe_cover_AMC_co.paa",
		"",
		"",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"ADFU_Units\data\h_gear_01_khk_co.paa",
		"socomd_data_core\CTgear\h_airframe_OD_co.paa",
		"socomd_data_core\CTgear\h_fast_khk_co.paa"
	};
};

//////////////////////////////////////////////////////////////////////
// SOLS Overrides

class SOCOMD_Pilot_helmet : H_PilotHelmetHeli_O {
	author = AUTHOR_STR;
	scope = public;
	displayName = "Heli-Pilot Helmet";

	HELMET_SOLS_ARMOR
};

class SOCOMD_Crew_helmet : H_CrewHelmetHeli_O {
	author = AUTHOR_STR;
	scope = public;
	displayName = "Heli-Crew Helmet";

	HELMET_SOLS_ARMOR
};

class SOCOMD_Ground_Crew_helmet : H_HelmetCrew_I {
	author = AUTHOR_STR;
	scope = public;
	displayName = "Armour Crew Helmet";
	HELMET_SOLS_ARMOR
};
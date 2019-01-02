class H_HelmetCrew_I;
class ADFU_H_Airframe_Cover_03_MC;

//////////////////////////////////////////////////////////////////////
// HEADGEAR

class AU_03_780000_v1;
class SOCOMD_BERET : AU_03_780000_v1 {
	author = AUTHOR_STR;
	displayName = "SOCOMD Beret";
	ace_hearing_protection = 1.0;
	ace_hearing_lowerVolume = 0.0;
};

class H_PilotHelmetHeli_O;
class SOCOMD_Pilot_helmet : H_PilotHelmetHeli_O {
	scope = public;
	displayName = "SOCOMD Heli-Pilot Helmet";
	ace_hearing_protection = 1.0;
	ace_hearing_lowerVolume = 0;
};

class H_PilotHelmetFighter_B;
class SOCOMD_FixedWing_Pilot_helmet : H_PilotHelmetFighter_B {
	scope = public;
	displayName = "SOCOMD Fixed Wing-Pilot Helmet";
	ace_hearing_protection = 1.0;
	ace_hearing_lowerVolume = 0;
};

class H_CrewHelmetHeli_O;
class SOCOMD_Crew_helmet : H_CrewHelmetHeli_O {
	scope = public;
	displayName = "SOCOMD Heli-Crew Helmet";
	ace_hearing_protection = 1.0;
	ace_hearing_lowerVolume = 0;
};

// CAPS
class HelmetBase;
class H_Booniehat_khk : HelmetBase {
	class ItemInfo;
};
//BOONIES
class H_Booniehat_khk_hs : HelmetBase {
	class ItemInfo;
};


class SOCOMD_Aus_Boonie: H_Booniehat_khk_hs {
	author = AUTHOR_STR;
	scope = 2;
	displayName = "SOCOMD Booniehat DPCU";
	picture = "\socomd_data_core\uniform\icons\icon_H_Booniehat_CA.paa";
	model = "\A3\Characters_F\Common\booniehat";
	ace_hearing_protection = 0.5;
	ace_hearing_lowerVolume = 0;
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\socomd_data_core\CTgear\booniehat_co.paa"};

	class ItemInfo : ItemInfo {
		mass = 5;
		allowedSlots[] = {801,901,701,605};
		uniformModel = "\A3\Characters_F\Common\booniehat";
		modelSides[] = {6};
		armor = 0;
		passThrough = 1;
	};
};

class ADFU_H_OpsCore_02;
class ADFU_H_OpsCore_02_BLK: ADFU_H_OpsCore_02 {
	author="Adacas + ADFU";
	dlc="ADFU";
	scope=2;
	scopeArsenal=2;
	displayName="OpsCore (Black)";
	picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";
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

class ADFU_H_OpsCore_08;
class ADFU_H_OpsCore_08_BLK: ADFU_H_OpsCore_08 {
	author="Adacas + ADFU";
	dlc="ADFU";
	scope=2;
	scopeArsenal=2;
	displayName="OpsCore (Black)";
	picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";
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

class ADFU_H_Airframe_Cover_02;
class ADFU_H_Airframe_02_tan: ADFU_H_Airframe_Cover_02 {
	author="Adacas + ADFU";
	dlc="ADFU";
	scope=2;
	scopeArsenal=2;
	displayName="Airframe (Tan)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
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
class ADFU_H_Airframe_Cover_03;
class ADFU_H_Airframe_03_tan: ADFU_H_Airframe_Cover_03 {
	author="Adacas + ADFU";
	dlc="ADFU";
	scope=2;
	scopeArsenal=2;
	displayName="Airframe (Tan)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
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
class ADFU_H_Airframe_Cover_05;
class ADFU_H_Airframe_Cover_10_MC: ADFU_H_Airframe_Cover_05 {
	author="Adacas + ADFU";
	dlc="ADFU";
	scope=2;
	scopeArsenal=2;
	displayName="Airframe (MC)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
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
	author="Adacas + ADFU";
	dlc="ADFU";
	scope=2;
	scopeArsenal=2;
	displayName="Airframe (MC)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
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
class ADFU_H_Airframe_10_tan: ADFU_H_Airframe_Cover_05 {
	author="Adacas + ADFU";
	dlc="ADFU";
	scope=2;
	scopeArsenal=2;
	displayName="Airframe (Tan)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
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
	author="Adacas + ADFU";
	dlc="ADFU";
	scope=2;
	scopeArsenal=2;
	displayName="Airframe (Tan)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
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
	author="Adacas + ADFU";
	dlc="ADFU";
	scope=2;
	scopeArsenal=2;
	displayName="Airframe (OD)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
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
	author="Adacas + ADFU";
	dlc="ADFU";
	scope=2;
	scopeArsenal=2;
	displayName="Airframe (OD)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
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
	author="Adacas + ADFU";
	dlc="ADFU";
	scope=2;
	scopeArsenal=2;
	displayName="Airframe (OD)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
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
	author="Adacas + ADFU";
	dlc="ADFU";
	scope=2;
	scopeArsenal=2;
	displayName="Airframe (OD)";
	picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
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

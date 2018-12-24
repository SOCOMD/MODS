
////////////////////////////////////////////////////////////////////////////////
// MODIFICATIONS
// - Added laser designator + batteries
// - Added NVG sights to gunner turret

class CUP_AH64_base : Helicopter_Base_H {
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			class OpticsIn;
		};
	};
};

class CUP_AH64D_Base : CUP_AH64_base {
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			class OpticsIn : OpticsIn {
				class WideNGS;
				class Wide;
				class WideL;
				class Medium;
				class Narrow;
				class Narrower;
			};
		};
	};
};

class CUP_AH64D_dynamic_Base : CUP_AH64D_Base {
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			weapons[] = {
				"CUP_weapon_mastersafe",
				"Laserdesignator_mounted",
				"CUP_Vacannon_M230_veh"
			};

			magazines[] = {
				"CUP_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M",
				"Laserbatteries",
				"CUP_2Rnd_pylonblank_M",
				"CUP_2Rnd_pylonblank_M",
				"CUP_2Rnd_pylonblank_M",
				"CUP_4Rnd_pylonblank_M",
				"CUP_4Rnd_pylonblank_M"
			};

			class OpticsIn : OpticsIn {
				class WideNGS : WideNGS {
					visionMode[] = {"Normal", "NVG", "Ti"};
				};
				class Wide : Wide {
					visionMode[] = {"Normal", "NVG", "Ti"};
				};
				class WideL : WideL {
					visionMode[] = {"Normal", "NVG", "Ti"};
				};
				class Medium : Medium {
					visionMode[] = {"Normal", "NVG", "Ti"};
				};
				class Narrow : Narrow {
					visionMode[] = {"Normal", "NVG", "Ti"};
				};
				class Narrower : Narrower {
					visionMode[] = {"Normal", "NVG", "Ti"};
				};
			};
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// HURRICANE

/*
CUP_B_AH64D_DL_USA <== TARGET
CUP_AH64D_dynamic_base
CUP_AH64D_Base
CUP_AH64_base
Helicopter_Base_H
*/

class CUP_B_AH64D_DL_USA;
class SOCOMD_HURRICANE_A : CUP_B_AH64D_DL_USA {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Hurricane (2/0)";

	hiddenSelections[] = {
		"camo1",
		"camo2",
		"camo3"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data_cup\data\ah64\ah64d_body_co.paa",
		"socomd_data_cup\data\ah64\ah64d_details_co.paa",
		""
	};
};
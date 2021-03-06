#define NOMAD_FAST_TURRETS \
maxHorizontalRotSpeed = 8; \
maxVerticalRotSpeed = 8;

/*
CUP_B_CH47F_USA <== TARGET
CUP_CH47F_base
Helicopter_Base_H
*/

class CUP_CH47F_base : Helicopter_Base_H {
	
};

class CUP_B_CH47F_GB : CUP_CH47F_base {
	class Turrets : Turrets {
		class MainTurret;
		class RightDoorGun;
		class BackDoorGun;
		class CopilotTurret;
	};
};

class SOCOMD_NOMAD_A : CUP_B_CH47F_GB {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Nomad (5/24)";
	fuelCapacity = 3914;
	fuelConsumptionRate = 0.34;

	hiddenSelectionsTextures[] = {
		"socomd_data_cup\data\chinook\ch47_ext_1_co.paa",
		"socomd_data_cup\data\chinook\ch47_ext_2_co.paa",
		"socomd_data_cup\data\chinook\ch47f_nalepky_ca.paa",
		"cup\airvehicles\cup_airvehicles_ch47\data\ch47_ext_mlod_co.paa"
	};
	class Turrets : Turrets {
		class MainTurret : MainTurret {
			NOMAD_FAST_TURRETS
		};

		class RightDoorGun : RightDoorGun {
			NOMAD_FAST_TURRETS
		};

		class BackDoorGun : BackDoorGun {
			NOMAD_FAST_TURRETS
		};

		class CopilotTurret : CopilotTurret {};		
	};
};
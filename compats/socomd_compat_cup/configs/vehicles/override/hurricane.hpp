
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
	class Components;
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
	class Components : Components {
		class TransportPylonsComponent;
	};
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
class CUP_B_AH64D_DL_USA : CUP_AH64D_dynamic_Base {
    class Components : Components {
		class TransportPylonsComponent;
	};
};
/*
CUP_B_AH64D_DL_USA <== TARGET
CUP_AH64D_dynamic_base
CUP_AH64D_Base
CUP_AH64_base
Helicopter_Base_H
*/

class SOCOMD_HURRICANE_A : CUP_B_AH64D_DL_USA {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Hurricane (2/0)";
	fuelCapacity = 1420;
	fuelConsumptionRate = 0.30;
	mass=8000; // Higher values improve handling default: 8000
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
	class Components: Components {
		class TransportPylonsComponent : TransportPylonsComponent {
			class pylons {
				class pylonLeft1 {
					attachment = "";
					bay = 1;
					hardpoints[] = {"SOCOMD_HURRICANE_PYLON"};
					priority = 5;
					turret[] = {};
					UIposition[] = {0.59,0.35};
				};
				class pylonLeft2 {
					attachment = "";
					bay = 1;
					hardpoints[] = {"SOCOMD_HURRICANE_PYLON"};					
					priority = 4;
					turret[] = {"MainTurret"};
					UIposition[] = {0.57,0.4};
				};
				class pylonRight1 {
					attachment = "";
					bay = 1;
					hardpoints[] = {"SOCOMD_HURRICANE_PYLON"};
					mirroredMissilePos = 2;
					priority = 5;
					turret[] = {"MainTurret"};
					UIposition[] = {0.08,0.4};
				};
				class pylonRight2 {
					attachment = "";
					bay = 1;
					//hardpoints[] = {"DAR","DAGR","B_SHRIEKER","CUP_NATO_HELO_SMALL","CUP_NATO_HELO_LARGE","CUP_NATO_HELO_AH64","CUP_PylonPod_1Rnd_AGM65_Maverick_M"};
					hardpoints[] = {"SOCOMD_HURRICANE_PYLON"};
					mirroredMissilePos = 1;
					priority = 4;
					turret[] = {};
					UIposition[] = {0.06,0.35};
				};
				class pylonWingL {
					//attachment = "CUP_PylonPod_1Rnd_AIM_9L_Sidewinder_M";
					attachment = "";
					bay = 1;
					hardpoints[] = {"CUP_NATO_HELO_WINGTIP"};
					priority = 5;
					turret[] = {"MainTurret"};
					UIposition[] = {0.61,0.3};
				};
				class pylonWingR {
					//attachment = "CUP_PylonPod_1Rnd_AIM_9L_Sidewinder_M";
					attachment = "";
					bay = 1;
					hardpoints[] = {"CUP_NATO_HELO_WINGTIP"};
					mirroredMissilePos = 5;
					priority = 5;
					turret[] = {"MainTurret"};
					UIposition[] = {0.04,0.3};
				};
			};
		};
	};
};
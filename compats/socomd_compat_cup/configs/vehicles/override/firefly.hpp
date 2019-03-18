////////////////////////////////////////////////////////////////////////////////
// MODIFICATIONS
// - Airframe has increased armor
// - Reduced rear rotor force to help with anti-torqe damage
/*
class CUP_AH6_BASE : Helicopter_Base_H {

	//Armor Damage
	armor = 60.0;
	armorStructural = 1.0;
	explosionShielding = 1.0;

	class HitPoints : HitPoints
	{
		//Integral
		class HitHull : HitHull {
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
		};

		class HitAvionics : HitAvionics {
			armor = 3.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
		};

		class HitEngine : HitEngine {
			armor = 3.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
		};

		class HitFuel : HitFuel {
			armor = 3.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
		};

		//Rotors
		class HitHRotor : HitHRotor {
			armor = 4.0;
			passThrough = 0.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
		};

		class HitVRotor : HitVRotor {
			armor = 1.0;
			passThrough = 0.0;
			explosionShielding = 5.0;
			minimalHit = 0.01;
		};

		//Glass
		class HitLGlass : HitLGlass {
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};

		class HitRGlass : HitRGlass {
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};

		class HitGlass1 : HitGlass1 {
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};

		class HitGlass2 : HitGlass2 {
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};

		class HitGlass3 : HitGlass3 {
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};

		class HitGlass4 : HitGlass4 {
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};

		class HitGlass5 : HitGlass5 {
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};

		class HitGlass6 : HitGlass6 {
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};
	};
};
*/
////////////////////////////////////////////////////////////////////////////////
// FIREFLY

/*
CUP_B_MH6J_USA <== Target
CUP_MH6_TRANSPORT
CUP_AH6_BASE
Helicopter_Base_H
*/
/*
class CUP_B_MH6J_USA;
class SOCOMD_FIREFLY_A : CUP_B_MH6J_USA {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Firefly (2/6)";

	hiddenSelections[] = {
		"camo1",
		"camo2",
		"camo_bench"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data_cup\data\ah6\ah6_hull_co.paa",
		"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa",
		"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_benches_co.paa"
	};

	//Flight Controls
	backRotorForceCoef = 0.4;
};
*/
////////////////////////////////////////////////////////////////////////////////
// DRAGONFLY

/*
CUP_B_AH6M_USA <== TARGET
CUP_AH6_DYNLOAD
CUP_AH6_ARMED_BASE
CUP_AH6_BASE
Helicopter_Base_H
*/
/*
class CUP_B_AH6M_USA;
class SOCOMD_DRAGONFLY_A : CUP_B_AH6M_USA {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Dragonfly (2/0)";

	hiddenSelections[] = {
		"camo1",
		"camo2",
		"camo_weapons"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data_cup\data\ah6\ah6_hull_co.paa",
		"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa",
		"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_weapons_co.paa"
	};

	//Flight Controls
	backRotorForceCoef = 0.4;
};
*/

////////////////////////////////////////////////////////////////////////////////
// Melb Heli Overrides


class SOCOMD_DRAGONFLY_A : MELB_AH6M {

	magazines[] = {"CUP_2Rnd_pylonblank_M","CUP_8Rnd_pylonblank_M","CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M","CUP_1Rnd_pylonblank_M","168Rnd_CMFlare_Chaff_Magazine"};
	weapons[] = {"CUP_weapon_mastersafe","CUP_Vlmg_TwinM134_veh","CMFlareLauncher"};
	//magazines[] = {"CUP_4000Rnd_TE1_Red_Tracer_762x51_M134_M","168Rnd_CMFlare_Chaff_Magazine"};
	class Turrets : Turrets {
		class CopilotTurret : CopilotTurret {
			weapons[] = {"CUP_Laserdesignator_mounted"};
			magazines[] = {"Laserbatteries"};
		}
	}
	class Components: Components {
		class TransportPylonsComponent {
			UIPicture = "melb\data\ui\melb_eden_ca.paa";
			class pylons {
				// Keep
				class R_Pylon {
					hardpoints[] = {"RightMount_MELB"};
					attachment = "CUP_PylonPod_19Rnd_CRV7_FAT_M";
					maxweight = 200;
					UIposition[] = {0.125,0.4};
				};

				
				class R_Rockets_12x {
					hardpoints[] = {"12x_Rockets_MELB"};
					attachment = "";
					priority = 3;
					maxweight = 300;
					UIposition[] = {0.04,0.2};
				};
				class R_Rockets_4x: R_Rockets_12x {
					hardpoints[] = {"4x_Rockets_MELB"};
					attachment = "";
					priority = 2;
					maxweight = 200;
					UIposition[] = {0.04,0.25};
				};
				
				class R_Rockets_3x: R_Rockets_12x {
					hardpoints[] = {"3x_Rockets_MELB"};
					attachment = "";
					priority = 1;
					maxweight = 200;
					UIposition[] = {0.04,0.3};
				};
				
				class R_HellfireRack_R_slot: R_Pylon {
					turret[] = {"CopilotTurret"};
					hardpoints[] = {"HellfireRail_MELB"};
					attachment = "";
					maxweight = 80;
					UIposition[] = {0.04,0.45};
				};
				class R_HellfireRack_L_slot: R_HellfireRack_R_slot {
					UIposition[] = {0.225,0.45};
				};
			
				// keep x2
				class R_Minigun: R_Pylon {
					hardpoints[] = {"Right_MinigunMount_MELB"};
					attachment = "Pylon_R_GUN_MELB_SOCOMD";
					priority = 5;
					maxweight = 100;
					UIposition[] = {0.225,0.325};
				};
				class L_Minigun: R_Minigun {
					hardpoints[] = {"Left_MinigunMount_MELB"};
					attachment = "Pylon_L_GUN_MELB_SOCOMD";
					UIposition[] = {0.415,0.325};
				};

				

				class L_HellfireRack_R_slot: R_HellfireRack_R_slot {
					UIposition[] = {0.405,0.45};
					mirroredMissilePos = 6;
				};
				class L_HellfireRack_L_slot: R_HellfireRack_R_slot {
					UIposition[] = {0.58,0.45};
					mirroredMissilePos = 5;
				};	
						
				class L_Rockets_3x: R_Rockets_3x {
					hardpoints[] = {"3x_Rockets_MELB"};
					UIposition[] = {0.58,0.3};
					priority = 1;
					mirroredMissilePos = 4;
				};
				
				class L_Rockets_4x: R_Rockets_4x {
					hardpoints[] = {"4x_Rockets_MELB"};
					UIposition[] = {0.58,0.25};
					priority = 2;
					mirroredMissilePos = 3;
				};
				class L_Rockets_12x: R_Rockets_12x {
					hardpoints[] = {"12x_Rockets_MELB"};
					UIposition[] = {0.58,0.2};
					priority = 3;
					mirroredMissilePos = 2;
				};

				// keep
				class L_Pylon: R_Pylon {
					hardpoints[] = {"LeftMount_MELB"};
					UIposition[] = {0.4925,0.4};
					mirroredMissilePos = 1;
				};
				/*
				// this does remove the boxes if you comment out the above classes being deleted but it all goes wacky
				delete R_HellfireRack_R_slot;
				delete R_HellfireRack_L_slot;
				delete R_Rockets_3x;
				delete R_Rockets_4x;
				delete R_Rockets_12x;

				delete L_HellfireRack_R_slot;
				delete L_HellfireRack_L_slot;
				delete L_Rockets_3x;
				delete L_Rockets_4x;
				delete L_Rockets_12x;
*/

			};
			class presets {
				class empty {
					displayName = "empty";
					attachment[] = {};
				};
				delete M260HE_M134;
				delete M260HE_M134_GAU;
				delete GAU_M134_DAGR;
				delete Hellfires;
			};
		};
	};
};
////////////////////////////////////////////////////////////////////////////////
// PYLON MAGAZINES
//
// - PylonRack_12Rnd_PG_missiles
// - PylonRack_12Rnd_missiles
// - CUP_PylonPod_7Rnd_Rocket_FFAR_M
// - CUP_PylonPod_19Rnd_Rocket_FFAR_M
// - CUP_PylonPod_19Rnd_CRV7_FAT_M
// - CUP_PylonPod_19Rnd_CRV7_HE_M
// - CUP_PylonPod_19Rnd_CRV7_KEP_M
// - CUP_PylonPod_12Rnd_CRV7_FAT_M
// - CUP_PylonPod_12Rnd_CRV7_HE_M
// - CUP_PylonPod_12Rnd_CRV7_KEP_M
// - CUP_PylonPod_2Rnd_AGM114K_Hellfire_II_M
// - CUP_PylonPod_2Rnd_AGM114L_Hellfire_II_M
// - CUP_PylonPod_1Rnd_AIM_9L_Sidewinder_M
// - CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19L_M
// - CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19A_M
// - CUP_PylonPod_2000Rnd_TE5_Red_Tracer_762x51_M134A_M
// - CUP_PylonPod_1200Rnd_TE1_Red_Tracer_M621_20mm_HE_M
// - CUP_PylonPod_1200Rnd_TE1_Red_Tracer_30x113mm_M789_HEDP_M
// - PylonRack_1Rnd_ACE_Hellfire_AGM114K
// - PylonRack_1Rnd_ACE_Hellfire_AGM114N
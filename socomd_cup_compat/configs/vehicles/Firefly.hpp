////////////////////////////////////////////////////////////////////////////////
// MODIFICATIONS
// - Airframe has increased armor
// - Reduced rear rotor force to help with anti-torqe damage

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

////////////////////////////////////////////////////////////////////////////////
// FIREFLY

/*
CUP_B_MH6J_USA <== Target
CUP_MH6_TRANSPORT
CUP_AH6_BASE
Helicopter_Base_H
*/

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
		"socomd_cup_compat\data\ah6\ah6_hull_co.paa",
		"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa",
		"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_benches_co.paa"
	};

	//Flight Controls
	backRotorForceCoef = 0.4;
};

////////////////////////////////////////////////////////////////////////////////
// DRAGONFLY

/*
CUP_B_AH6M_USA <== TARGET
CUP_AH6_DYNLOAD
CUP_AH6_ARMED_BASE
CUP_AH6_BASE
Helicopter_Base_H
*/

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
		"socomd_cup_compat\data\ah6\ah6_hull_co.paa",
		"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_interior_co.paa",
		"CUP\AirVehicles\CUP_AirVehicles_AH6\data\ah6_weapons_co.paa"
	};

	//Flight Controls
	backRotorForceCoef = 0.4;
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
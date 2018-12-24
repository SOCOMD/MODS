////////////////////////////////////////////////////////////////////////////////
// BUSHMASTER

class bma3_bushmaster_base_F : Car_F {
	class HitPoints : HitPoints {
		class HitHull;
		class HitBody;
		class HitEngine;
		class HitFuel;

		class HitLFWheel;
		class HitLF2Wheel;
		class HitLMWheel;
		class HitLBWheel;

		class HitRFWheel;
		class HitRF2Wheel;
		class HitRMWheel;
		class HitRBWheel;

		class HitLGlass;
		class HitRGlass;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
		class HitGlass5;
		class HitGlass6;
	};

	class AcreIntercoms;

	class textureSources {
		class adf_001;
		class adf_002;
		class adf_003;
		class adf_004;
		class adf_005;
		class adf_006;
		class adf_007;
		class adf_008;
		class adf_009;
		class adf_010;
	};
};

class bma3_bushmaster_unarmed_F : bma3_bushmaster_base_F {

	armor = 60;
	armorStructural = 75;
	explosionShielding = 1.0;
	damageResistance = 0.03099;
	threat[] = {1, 0.8, 0.3};

	class HitPoints : HitPoints {

		class HitHull : HitHull {
			armor = 25.0;
			passThrough = 1.0;
			minimalHit = 0.01;
			explosionShielding = 1.0;
		};

		class HitBody : HitBody {
			armor = 25.0;
			passThrough = 1.0;
			minimalHit = 0.01;
			explosionShielding = 1.0;
		};

		class HitEngine : HitEngine {
			armor = 1.0;
			passThrough = 0.5;
			minimalHit = 0.01;
			explosionShielding = 1.0;
		};

		class HitFuel : HitFuel {
			armor = 1.0;
			passThrough = 0;
			minimalHit = 0.01;
			explosionShielding = 1.0;
		};

		class HitLFWheel : HitLFWheel {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitLF2Wheel : HitLF2Wheel {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitLMWheel : HitLMWheel {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitLBWheel : HitLBWheel {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitRFWheel : HitRFWheel {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitRF2Wheel : HitRF2Wheel {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitRMWheel : HitRMWheel {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitRBWheel : HitRBWheel {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitLGlass : HitLGlass {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitRGlass : HitRGlass {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitGlass1 : HitGlass1 {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitGlass2 : HitGlass2 {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitGlass3 : HitGlass3 {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitGlass4 : HitGlass4 {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitGlass5 : HitGlass5 {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};

		class HitGlass6 : HitGlass6 {
			armor = 1.0;
			passThrough = 0;
			explosionShielding = 1.0;
		};
	};
};

class bma3_bushmaster_pws127mm_F : bma3_bushmaster_unarmed_F {
	scope = public;
	scopeCurator = public;
};

/*
bma3_bushmaster_unarmed_F
bma3_bushmaster_base_F
Car_F
Car
*/

class SOCOMD_BUSHMASTER_TRANS : bma3_bushmaster_unarmed_F {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Bushmaster Transport (1/7)";
	vehicleclass = "Car";
	forceInGarage = 1;

	crew = UNIT_SOCOMD_CREWMAN;
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	hiddenSelectionsTextures[] = {
		"socomd_data_core\bma3\camo1_co.paa",
		"socomd_data_core\bma3\camo2_co.paa",
		"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
		"bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
	};

	class textureSources : textureSources {
		class adf_001 : adf_001 {
			textures[] = {
				"socomd_data_core\bma3\camo1_co.paa",
				"socomd_data_core\bma3\camo2_co.paa",
				"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
				"bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
			};
		};

		class adf_002 : adf_001 {};
		class adf_003 : adf_001 {};
		class adf_004 : adf_001 {};
		class adf_005 : adf_001 {};
		class adf_006 : adf_001 {};
		class adf_007 : adf_001 {};
		class adf_008 : adf_001 {};
		class adf_009 : adf_001 {};
		class adf_010 : adf_001 {};
	};

	class TransportWeapons {
		INVENTORY_VEHICLE_DEFAULT_WEAPONS
	};

	class TransportMagazines {
		INVENTORY_VEHICLE_DEFAULT_MAGAZINES
	};

	class TransportItems {
		INVENTORY_VEHICLE_DEFAULT_ITEMS
	};

	class TransportBackpacks {
		INVENTORY_VEHICLE_DEFAULT_BACKPACKS
	};
};

/*
bma3_bushmaster_pws127mm_F
bma3_bushmaster_unarmed_F
bma3_bushmaster_base_F
Car_F
Car
*/

class SOCOMD_BUSHMASTER_HMG : bma3_bushmaster_pws127mm_F {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Bushmaster HMG (2/6)";
	vehicleclass = "Car";
	forceInGarage = 1;

	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	hiddenSelectionsTextures[] = {
		"socomd_data_core\bma3\camo1_co.paa",
		"socomd_data_core\bma3\camo2_co.paa",
		"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
		"bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
	};

	class textureSources : textureSources {
		class adf_001 : adf_001 {
			textures[] = {
				"socomd_data_core\bma3\camo1_co.paa",
				"socomd_data_core\bma3\camo2_co.paa",
				"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
				"bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
			};
		};

		class adf_002 : adf_001 {};
		class adf_003 : adf_001 {};
		class adf_004 : adf_001 {};
		class adf_005 : adf_001 {};
		class adf_006 : adf_001 {};
		class adf_007 : adf_001 {};
		class adf_008 : adf_001 {};
		class adf_009 : adf_001 {};
		class adf_010 : adf_001 {};
	};

	class TransportWeapons {
		INVENTORY_VEHICLE_DEFAULT_WEAPONS
	};

	class TransportMagazines {
		INVENTORY_VEHICLE_DEFAULT_MAGAZINES
	};

	class TransportItems {
		INVENTORY_VEHICLE_DEFAULT_ITEMS
	};

	class TransportBackpacks {
		INVENTORY_VEHICLE_DEFAULT_BACKPACKS
	};
};
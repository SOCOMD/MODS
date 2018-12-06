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
	editorCategory = SOCOMD_EdCat_core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Bushmaster Transport (1/7)";
	vehicleclass = "Car";
	forceInGarage = 1;

	crew = SOCOMD_MEDIC;
	typicalCargo[] = {SOCOMD_MEDIC};
	
	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	hiddenSelectionsTextures[] = {
		"socomd_data\bma3\camo1_co.paa",
		"socomd_data\bma3\camo2_co.paa",
		"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
		"bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
	};

	class textureSources : textureSources {
		class adf_001 : adf_001 {
			textures[] = {
				"socomd_data\bma3\camo1_co.paa",
				"socomd_data\bma3\camo2_co.paa",
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

	class TransportMagazines {
		LOADOUT_LAND_TRANSPORT_MAGAZINES
	};

	class TransportItems {
		LOADOUT_LAND_TRANSPORT_ITEMS
	};

	class TransportBackpacks {
		LOADOUT_LAND_TRANSPORT_BACKPACKS
	};

	class TransportWeapons {
		LOADOUT_LAND_TRANSPORT_WEAPONS
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
	editorCategory = SOCOMD_EdCat_core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Bushmaster Transport (2/6)";
	vehicleclass = "Car";
	forceInGarage = 1;

	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
	hiddenSelectionsTextures[] = {
		"socomd_data\bma3\camo1_co.paa",
		"socomd_data\bma3\camo2_co.paa",
		"bma3\bma3_bushmaster_data\camo3\camo3_co.paa",
		"bma3\bma3_bushmaster_data\labels\labels_army_01.paa"
	};

	class textureSources : textureSources {
		class adf_001 : adf_001 {
			textures[] = {
				"socomd_data\bma3\camo1_co.paa",
				"socomd_data\bma3\camo2_co.paa",
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

	class TransportMagazines {
		LOADOUT_LAND_TRANSPORT_MAGAZINES
	};

	class TransportItems {
		LOADOUT_LAND_TRANSPORT_ITEMS
	};

	class TransportBackpacks {
		LOADOUT_LAND_TRANSPORT_BACKPACKS
	};

	class TransportWeapons {
		LOADOUT_LAND_TRANSPORT_WEAPONS
	};
};

////////////////////////////////////////////////////////////////////////////////
// Trucks (Transport)

class B_Truck_01_covered_F;

#define TRUCK_TRANSPORT_BASE(ID) \
class SOCOMD_TRUCK_TRANSPORT_##ID : B_Truck_01_covered_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Truck Transport (1/17)"; \
	vehicleclass = "Car"; \
	forceInGarage = 1; \
	crew = SOCOMD_MEDIC; \
	typicalCargo[] = {SOCOMD_MEDIC}; \
	class TransportMagazines { \
		LOADOUT_LAND_TRANSPORT_MAGAZINES \
	}; \
	class TransportItems { \
		LOADOUT_LAND_TRANSPORT_ITEMS \
	}; \
	class TransportBackpacks { \
		LOADOUT_LAND_TRANSPORT_BACKPACKS \
	}; \
	class TransportWeapons { \
		LOADOUT_LAND_TRANSPORT_WEAPONS \
	};\
};

TRUCK_TRANSPORT_BASE(A)

////////////////////////////////////////////////////////////////////////////////
// Trucks (Ammo)

class B_Truck_01_ammo_F;

#define TRUCK_AMMO_BASE(ID) \
class SOCOMD_TRUCK_AMMO_##ID : B_Truck_01_ammo_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Truck Ammo (1/1)"; \
	vehicleclass = "Car"; \
	forceInGarage = 1; \
	crew = SOCOMD_MEDIC; \
	typicalCargo[] = {SOCOMD_MEDIC}; \
	class TransportMagazines { \
		LOADOUT_LAND_TRANSPORT_MAGAZINES \
	}; \
	class TransportItems { \
		LOADOUT_LAND_TRANSPORT_ITEMS \
	}; \
	class TransportBackpacks { \
		LOADOUT_LAND_TRANSPORT_BACKPACKS \
	}; \
	class TransportWeapons { \
		LOADOUT_LAND_TRANSPORT_WEAPONS \
	};\
};

TRUCK_AMMO_BASE(A)

////////////////////////////////////////////////////////////////////////////////
// Trucks (Fuel)

class B_Truck_01_fuel_F;

#define TRUCK_FUEL_BASE(ID) \
class SOCOMD_TRUCK_FUEL_##ID : B_Truck_01_fuel_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Truck Fuel (1/1)"; \
	vehicleclass = "Car"; \
	forceInGarage = 1; \
	crew = SOCOMD_MEDIC; \
	typicalCargo[] = {SOCOMD_MEDIC}; \
	class TransportMagazines { \
		LOADOUT_LAND_TRANSPORT_MAGAZINES \
	}; \
	class TransportItems { \
		LOADOUT_LAND_TRANSPORT_ITEMS \
	}; \
	class TransportBackpacks { \
		LOADOUT_LAND_TRANSPORT_BACKPACKS \
	}; \
	class TransportWeapons { \
		LOADOUT_LAND_TRANSPORT_WEAPONS \
	}; \
};

TRUCK_FUEL_BASE(A)

////////////////////////////////////////////////////////////////////////////////
// Trucks (Repair)

class B_Truck_01_Repair_F;

#define TRUCK_REPAIR_BASE(ID) \
class SOCOMD_TRUCK_REPAIR_##ID : B_Truck_01_Repair_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Truck Repair (1/1)"; \
	vehicleclass = "Car"; \
	forceInGarage = 1; \
	crew = SOCOMD_MEDIC; \
	typicalCargo[] = {SOCOMD_MEDIC}; \
	class TransportMagazines { \
		LOADOUT_LAND_TRANSPORT_MAGAZINES \
	}; \
	class TransportItems { \
		LOADOUT_LAND_TRANSPORT_ITEMS \
	}; \
	class TransportBackpacks { \
		LOADOUT_LAND_TRANSPORT_BACKPACKS \
	}; \
	class TransportWeapons { \
		LOADOUT_LAND_TRANSPORT_WEAPONS \
	}; \
};

TRUCK_REPAIR_BASE(A)

////////////////////////////////////////////////////////////////////////////////
// APC

class APC_Wheeled_03_base_F;

class I_APC_Wheeled_03_base_F : APC_Wheeled_03_base_F {
	class TextureSources;
	class AnimationSources;
};

class I_APC_Wheeled_03_cannon_F : I_APC_Wheeled_03_base_F {
	class AnimationSources : AnimationSources {
		class showCamonetHull;
		class showBags;
		class showBags2;
		class showTools;
		class showSLATHull;
	};
};

class SOCOMD_APC_A : I_APC_Wheeled_03_cannon_F {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "APC (3/8)";
	vehicleclass = "Armored";
	forceInGarage = 1;

	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines {
		LOADOUT_LAND_TRANSPORT_MAGAZINES
	};

	class TransportItems {
		LOADOUT_LAND_TRANSPORT_ITEMS
	};

	class TransportBackpacks {
		LOADOUT_LAND_TRANSPORT_BACKPACKS
	};

	class TransportWeapons {
		LOADOUT_LAND_TRANSPORT_WEAPONS
	};

	textureList[] = {"SOCOMD", 1};

	class TextureSources : TextureSources {
		class SOCOMD {
			displayName = "SOCOMD";
			author = AUTHOR_STR;
			textures[] = {
				"socomd_data\boxer\APC_Wheeled_03_Ext_CO.paa",
				"socomd_data\boxer\APC_Wheeled_03_Ext2_CO.paa",
				"socomd_data\boxer\RCWS30_CO.paa",
				"socomd_data\boxer\APC_Wheeled_03_Ext_alpha_CO.paa",
				"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
				"A3\armor_f\data\cage_sand_co.paa"
			};
			faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
		};
	};

	hiddenSelections[] = {
		"camo1",
		"camo2",
		"camo3",
		"camo4",
		"CamoNet",
		"CamoSlat"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data\boxer\APC_Wheeled_03_Ext_CO.paa",
		"socomd_data\boxer\APC_Wheeled_03_Ext2_CO.paa",
		"socomd_data\boxer\RCWS30_CO.paa",
		"socomd_data\boxer\APC_Wheeled_03_Ext_alpha_CO.paa",
		"A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
		"A3\armor_f\data\cage_sand_co.paa"
	};

	animationList[] = {
		"showCamonetHull",0,
		"showBags",0,
		"showBags2",1,
		"showTools",1,
		"showSLATHull",0
	};

	class AnimationSources : AnimationSources {
		class showBags2 : showBags2 {
			initPhase = 1;
		};

		class showTools : showTools {
			initPhase = 1;
		};
	};
};

class SOCOMD_APC_B : SOCOMD_APC_A {
	scope = public;
	scopeCurator = public;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "APC Slated (3/8)";
	vehicleclass = "Armored";

	forceInGarage = 1;

	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	animationList[] = {
		"showCamonetHull",0,
		"showBags",0,
		"showBags2",1,
		"showTools",1,
		"showSLATHull",1
	};

	class AnimationSources : AnimationSources {
		class showSLATHull : showSLATHull {
			initPhase = 1;
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// QUADBIKE

class SOCOMD_QUADBIKE : B_Quadbike_01_F {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Quadbike (1/1)";
	vehicleclass = "Car";
	forceInGarage = 1;

	crew = SOCOMD_MEDIC;
	typicalCargo[] = {SOCOMD_MEDIC};

	class TransportItems {
		TI_DefaultMeds
	};
};
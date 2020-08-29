

////////////////////////////////////////////////////////////////////////////////
// Trucks (Transport)
// trucks at 24 fuel should be 2 hours of driving time
class B_Truck_01_covered_F;

#define TRUCK_TRANSPORT_BASE(ID) \
class SOCOMD_TRUCK_TRANSPORT_##ID : B_Truck_01_covered_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_Core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Truck Transport (1/17)"; \
	vehicleclass = "Car"; \
	forceInGarage = 1; \
	crew = UNIT_SOCOMD_CREWMAN; \
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN}; \
	fuelCapacity = 24; \
	ace_refuel_fuelCapacity = 120; \
	class TransportWeapons { \
		INVENTORY_VEHICLE_SMALL_WEAPONS \
	}; \
	class TransportMagazines { \
		INVENTORY_VEHICLE_LARGE_MAGAZINES \
	}; \
	class TransportItems { \
		INVENTORY_VEHICLE_LARGE_ITEMS \
	}; \
	class TransportBackpacks { \
		INVENTORY_VEHICLE_LARGE_BACKPACKS \
	}; \
	class AcreRacks { \
		class Rack_1 { \
			allowedPositions[] = {"driver"}; \
			componentName = "ACRE_VRC110"; \
			displayName = "Dash"; \
			mountedRadio = "ACRE_PRC152"; \
			shortName = "Dash"; \
		}; \
	}; \
};

TRUCK_TRANSPORT_BASE(A)

////////////////////////////////////////////////////////////////////////////////
// Trucks (Ammo)

class B_Truck_01_ammo_F;

#define TRUCK_AMMO_BASE(ID) \
class SOCOMD_TRUCK_AMMO_##ID : B_Truck_01_ammo_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_Core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Truck Ammo (1/1)"; \
	vehicleclass = "Car"; \
	forceInGarage = 1; \
	crew = UNIT_SOCOMD_CREWMAN; \
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN}; \
	fuelCapacity = 24; \
	ace_refuel_fuelCapacity = 120; \
	class TransportWeapons { \
		INVENTORY_VEHICLE_LARGE_WEAPONS \
	}; \
	class TransportMagazines { \
		INVENTORY_VEHICLE_LARGE_MAGAZINES \
	}; \
	class TransportItems { \
		INVENTORY_VEHICLE_LARGE_ITEMS \
	}; \
	class TransportBackpacks { \
		INVENTORY_VEHICLE_LARGE_BACKPACKS \
	}; \
	class AcreRacks { \
		class Rack_1 { \
			allowedPositions[] = {"driver"}; \
			componentName = "ACRE_VRC110"; \
			displayName = "Dash"; \
			mountedRadio = "ACRE_PRC152"; \
			shortName = "Dash"; \
		}; \
	}; \
	ace_rearm_isSupplyVehicle = 1; \
};

TRUCK_AMMO_BASE(A)

////////////////////////////////////////////////////////////////////////////////
// Trucks (Fuel)

class B_Truck_01_fuel_F;

#define TRUCK_FUEL_BASE(ID) \
class SOCOMD_TRUCK_FUEL_##ID : B_Truck_01_fuel_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_Core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Truck Fuel (1/1)"; \
	vehicleclass = "Car"; \
	forceInGarage = 1; \
	crew = UNIT_SOCOMD_CREWMAN; \
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN}; \
	fuelCapacity = 24; \
	ace_refuel_fuelCapacity = 120; \
	class TransportWeapons { \
		INVENTORY_VEHICLE_SMALL_WEAPONS \
	}; \
	class TransportMagazines { \
		INVENTORY_VEHICLE_SMALL_MAGAZINES \
	}; \
	class TransportItems { \
		INVENTORY_VEHICLE_SMALL_ITEMS \
	}; \
	class TransportBackpacks { \
		INVENTORY_VEHICLE_SMALL_BACKPACKS \
	}; \
	class AcreRacks { \
		class Rack_1 { \
			allowedPositions[] = {"driver"}; \
			componentName = "ACRE_VRC110"; \
			displayName = "Dash"; \
			mountedRadio = "ACRE_PRC152"; \
			shortName = "Dash"; \
		}; \
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
	editorCategory = SOCOMD_EdCat_Core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Truck Repair (1/1)"; \
	vehicleclass = "Car"; \
	forceInGarage = 1; \
	crew = UNIT_SOCOMD_CREWMAN; \
	cost = 30000; \
	threat[] = {0.7,0.7,0.7}; \
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN}; \
	fuelCapacity = 24; \
	ace_refuel_fuelCapacity = 120; \
	class TransportWeapons { \
		INVENTORY_VEHICLE_SMALL_WEAPONS \
	}; \
	class TransportMagazines { \
		INVENTORY_VEHICLE_MEDIUM_MAGAZINES \
	}; \
	class TransportItems { \
		INVENTORY_VEHICLE_MEDIUM_ITEMS \
	}; \
	class TransportBackpacks { \
		INVENTORY_VEHICLE_MEDIUM_BACKPACKS \
	}; \
	class AcreRacks { \
		class Rack_1 { \
			allowedPositions[] = {"driver"}; \
			componentName = "ACRE_VRC110"; \
			displayName = "Dash"; \
			mountedRadio = "ACRE_PRC152"; \
			shortName = "Dash"; \
		}; \
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
	fuelCapacity = 11; // 1 hr 10m at 100km/hr
	ace_refuel_fuelCapacity = 200;
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "APC (3/8)";
	vehicleclass = "Armored";
	forceInGarage = 1;
	cost = 40000;
	threat[] = {0.8,1.0,0.7};
	camouflage = 10;

	crew = "SOCOMD_Crewman";
	typicalCargo[] = {"SOCOMD_Crewman"};

	class TransportWeapons {
		INVENTORY_VEHICLE_LARGE_WEAPONS
	};

	class TransportMagazines {
		INVENTORY_VEHICLE_LARGE_MAGAZINES
	};

	class TransportItems {
		INVENTORY_VEHICLE_LARGE_ITEMS
	};

	class TransportBackpacks {
		INVENTORY_VEHICLE_LARGE_BACKPACKS
	};

	textureList[] = {"SOCOMD", 1};

	class TextureSources : TextureSources {
		class SOCOMD {
			displayName = "SOCOMD";
			author = AUTHOR_STR;
			textures[] = {
				"socomd_data_core\boxer\APC_Wheeled_03_Ext_CO.paa",
				"socomd_data_core\boxer\APC_Wheeled_03_Ext2_CO.paa",
				"socomd_data_core\boxer\RCWS30_CO.paa",
				"socomd_data_core\boxer\APC_Wheeled_03_Ext_alpha_CO.paa",
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
		"socomd_data_core\boxer\APC_Wheeled_03_Ext_CO.paa",
		"socomd_data_core\boxer\APC_Wheeled_03_Ext2_CO.paa",
		"socomd_data_core\boxer\RCWS30_CO.paa",
		"socomd_data_core\boxer\APC_Wheeled_03_Ext_alpha_CO.paa",
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

	class AcreIntercoms {
		class Intercom_1 {
			displayName = "Crew Intercom";
			shortName = "Crew";
			allowedPositions[] = {"driver", "commander", "gunner"};
			limitedPositions[] = {};
			numLimitedPositions = 0;
			masterPositions[] = {"driver"};
			connectedByDefault = 1;
		};
	};

	class AcreRacks {
		class Rack_1 {
			allowedPositions[] = {"driver", "commander", "gunner"};
			componentName = "ACRE_VRC110";
			displayName = "Dash";
			mountedRadio = "ACRE_PRC152";
			shortName = "Dash";
		};
	};
};

class SOCOMD_APC_B : SOCOMD_APC_A {
	fuelCapacity = 11;
	ace_refuel_fuelCapacity = 200;
	scope = public;
	scopeCurator = public;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "APC Slated (3/8)";
	vehicleclass = "Armored";
	cost = 40000;
	threat[] = {0.8,1.0,0.7};
	forceInGarage = 1;
	camouflage = 10;

	crew = "SOCOMD_Crewman";
	typicalCargo[] = {"SOCOMD_Crewman"};

	animationList[] = {
		"showCamonetHull",0,
		"showBags",0,
		"showBags2",1,
		"showTools",1,
		"showSLATHull",1
	};

	class TransportWeapons {
		INVENTORY_VEHICLE_LARGE_WEAPONS
	};

	class TransportMagazines {
		INVENTORY_VEHICLE_LARGE_MAGAZINES
	};

	class TransportItems {
		INVENTORY_VEHICLE_LARGE_ITEMS
	};

	class TransportBackpacks {
		INVENTORY_VEHICLE_LARGE_BACKPACKS
	};

	class AnimationSources : AnimationSources {
		class showSLATHull : showSLATHull {
			initPhase = 1;
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// LAV
class APC_Wheeled_01_base_F;
// class VTN_LAV25_BASE : APC_Wheeled_01_base_F {
// 	class Turrets;
// };

// class VTN_LAV25A1_BASE : VTN_LAV25_BASE {
// 	class TextureSources;
// 	class AnimationSources;
// 	class HitPoints;
// 	class Turrets : Turrets {
// 		class MainTurret;
// 	};
// };

// class VTN_LAV25A1_WDL : VTN_LAV25A1_BASE {
// 	class AnimationSources : AnimationSources {
// 		class Backpack;
// 		class Br;
// 		class Br1;
// 		class tabl;
// 	};
// 	class HitPoints : HitPoints {
// 		class HitHull;
// 		class HitEngine;
// 		class HitFuel;
// 		class HitLFWheelDir;
// 		class HitLFWheel;
// 		class HitGlass1;
// 	};
// 	class Turrets : Turrets {
// 		class MainTurret : MainTurret {
// 			class HitPoints;
// 		};
// 	};
// };

// class SOCOMD_APC_C : VTN_LAV25A1_WDL {
// 	scope = public;
// 	scopeCurator = public;
// 	editorCategory = SOCOMD_EdCat_Core;
// 	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
// 	side = WEST;
// 	author = AUTHOR_STR;
// 	faction = FACTION_STR;
// 	displayname = "LAV-25A1 (3/4)";
// 	vehicleclass = "Armored";
// 	cost = 35000;
// 	threat[] = {0.8,0.7,0.7};
// 	fuelCapacity = 300; // 1 hr 51m at 100km hr
// 	ace_refuel_fuelCapacity = 140;
// 	camouflage = 8;

// 	forceInGarage = 1;

// 	crew = "SOCOMD_Crewman";
// 	typicalCargo[] = {"SOCOMD_Crewman"};

// 	class TextureSources : TextureSources {
// 		class SOCOMD {
// 			displayName = "SOCOMD";
// 			author = AUTHOR_STR;
// 			textures[] = {
// 				"socomd_data_core\lav\lavbody_co.paa",
// 				"socomd_data_core\lav\lavbody2_co.paa",
// 				"socomd_data_core\lav\kangaroo_decal.paa",
// 				"socomd_data_core\lav\lavalfa_ca.paa"
// 			};
// 			faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
// 		};
// 	};

// 	hiddenselections[] = {
// 		"Camo1",
// 		"Camo2",
// 		"z1",
// 		"Camo3"
// 	};

// 	hiddenselectionstextures[] = {
// 		"socomd_data_core\lav\lavbody_co.paa",
// 		"socomd_data_core\lav\lavbody2_co.paa",
// 		"socomd_data_core\lav\kangaroo_decal.paa",
// 		"socomd_data_core\lav\lavalfa_ca.paa"
// 	};

// 	class AnimationSources : AnimationSources {
// 		class Backpack : Backpack {
// 			initPhase = 1;
// 		};

// 		class tabl : tabl {
// 			initPhase = 1;
// 		};
// 	};
// 	class Turrets : Turrets {
// 		class MainTurret : MainTurret {
// 			class HitPoints : HitPoints {
// 				class HitTurret {
// 					armor = 0.7;
// 					explosionShielding = 0.05;
// 					material = -1;
// 					minimalHit = 0.15;
// 					name = "vez";
// 					passThrough = 0;
// 					radius = 0.25;
// 					visual = "vez";
// 				};
// 				class HitGun {
// 					armor = 0.25;
// 					explosionShielding = 0.4;
// 					material = -1;
// 					minimalHit = 0.15;
// 					name = "zbran";
// 					passThrough = 0;
// 					radius = 0.25;
// 					visual = "zbran";
// 				};
// 			};
// 		};
// 	};
// 	class HitPoints : HitPoints {
// 		class HitHull : HitHull {
// 			armor = 2.6;
// 			minimalHit = 0.060;
// 			explosionShielding = 0.0015;
// 			passThrough = 0.1;
// 		};
// 		//class HitEngine;
// 		class HitFuel : HitFuel {
// 			explosionShielding = 0.4;
// 		};
// 		//class HitGlass1;
// 		class HitLFWheelDir : HitLFWheelDir {
// 			//armor = 0.25;
// 			armor = 0.5;
// 			explosionShielding = 10;
// 			passThrough = 0;
// 		};
// 		class HitLFWheel : HitLFWheel {
// 			//explosionShielding = 10;
// 			armor = 0.5;
// 			explosionShielding = 10;
// 			passThrough = 0;
// 		};
// 		class HitLF2WheelDir: HitLFWheelDir
// 		{
// 			visual = "wheel_1_2_hide";
// 			armorComponent = "wheel_1_2_hide";
// 		};
// 		class HitLF2Wheel: HitLFWheel
// 		{
// 			name = "wheel_1_2_steering";
// 			depends = "HitLF2WheelDir - 0.25";
// 		};
// 		class HitLMWheelDir: HitLFWheelDir
// 		{
// 			visual = "wheel_1_3_hide";
// 			armorComponent = "wheel_1_3_hide";
// 		};
// 		class HitLMWheel: HitLFWheel
// 		{
// 			name = "wheel_1_3_steering";
// 			depends = "HitLMWheelDir - 0.25";
// 		};
// 		class HitLBWheelDir: HitLFWheelDir
// 		{
// 			visual = "wheel_1_4_hide";
// 			armorComponent = "wheel_1_4_hide";
// 		};
// 		class HitLBWheel: HitLFWheel
// 		{
// 			name = "wheel_1_4_steering";
// 			depends = "HitLBWheelDir - 0.25";
// 		};
// 		class HitRFWheelDir: HitLFWheelDir
// 		{
// 			visual = "wheel_2_1_hide";
// 			armorComponent = "wheel_2_1_hide";
// 		};
// 		class HitRFWheel: HitLFWheel
// 		{
// 			name = "wheel_2_1_steering";
// 			depends = "HitRFWheelDir - 0.25";
// 		};
// 		class HitRF2WheelDir: HitLFWheelDir
// 		{
// 			visual = "wheel_2_2_hide";
// 			armorComponent = "wheel_2_2_hide";
// 		};
// 		class HitRF2Wheel: HitLFWheel
// 		{
// 			name = "wheel_2_2_steering";
// 			depends = "HitRF2WheelDir - 0.25";
// 		};
// 		class HitRMWheelDir: HitLFWheelDir
// 		{
// 			visual = "wheel_2_3_hide";
// 			armorComponent = "wheel_2_3_hide";
// 		};
// 		class HitRMWheel: HitLFWheel
// 		{
// 			name = "wheel_2_3_steering";
// 			depends = "HitRMWheelDir - 0.25";
// 		};
// 		class HitRBWheelDir: HitLFWheelDir
// 		{
// 			visual = "wheel_2_4_hide";
// 			armorComponent = "wheel_2_4_hide";
// 		};
// 		class HitRBWheel: HitLFWheel
// 		{
// 			name = "wheel_2_4_steering";
// 			depends = "HitRBWheelDir - 0.25";
// 		};
// 	};

// 	class AcreIntercoms {
// 		class Intercom_1 {
// 			displayName = "Crew Intercom";
// 			shortName = "Crew";
// 			allowedPositions[] = {"driver", "commander", "gunner"};
// 			limitedPositions[] = {};
// 			numLimitedPositions = 0;
// 			masterPositions[] = {"driver"};
// 			connectedByDefault = 1;
// 		};
// 	};

// 	class AcreRacks {
// 		class Rack_1 {
// 			allowedPositions[] = {"driver", "commander", "gunner"};
// 			componentName = "ACRE_VRC110";
// 			displayName = "Dash";
// 			mountedRadio = "ACRE_PRC152";
// 			shortName = "Dash";
// 		};
// 	};

// 	class TransportWeapons {
// 		INVENTORY_VEHICLE_LARGE_WEAPONS
// 	};

// 	class TransportMagazines {
// 		INVENTORY_VEHICLE_LARGE_MAGAZINES
// 	};

// 	class TransportItems {
// 		INVENTORY_VEHICLE_LARGE_ITEMS
// 	};

// 	class TransportBackpacks {
// 		INVENTORY_VEHICLE_LARGE_BACKPACKS
// 	};
// };

////////////////////////////////////////////////////////////////////////////////
// QUADBIKE

class SOCOMD_QUADBIKE : B_Quadbike_01_F {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "ATV (1/1)";
	vehicleclass = "Car";
	forceInGarage = 1;
	cost = 10000;
	threat[] = {0.5,0.5,0.2};
	fuelCapacity = 4; // 4 == 24m at max speed
	ace_refuel_fuelCapacity = 10;

	crew = UNIT_SOCOMD_CREWMAN;
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
};
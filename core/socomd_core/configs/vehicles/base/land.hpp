

////////////////////////////////////////////////////////////////////////////////
// Trucks (Transport)

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
	class TransportWeapons { \
		INVENTORY_VEHICLE_DEFAULT_WEAPONS \
	}; \
	class TransportMagazines { \
		INVENTORY_VEHICLE_DEFAULT_MAGAZINES \
	}; \
	class TransportItems { \
		INVENTORY_VEHICLE_DEFAULT_ITEMS \
	}; \
	class TransportBackpacks { \
		INVENTORY_VEHICLE_DEFAULT_BACKPACKS \
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
	class TransportWeapons { \
		INVENTORY_VEHICLE_DEFAULT_WEAPONS \
	}; \
	class TransportMagazines { \
		INVENTORY_VEHICLE_DEFAULT_MAGAZINES \
	}; \
	class TransportItems { \
		INVENTORY_VEHICLE_DEFAULT_ITEMS \
	}; \
	class TransportBackpacks { \
		INVENTORY_VEHICLE_DEFAULT_BACKPACKS \
	}; \
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
	class TransportWeapons { \
		INVENTORY_VEHICLE_DEFAULT_WEAPONS \
	}; \
	class TransportMagazines { \
		INVENTORY_VEHICLE_DEFAULT_MAGAZINES \
	}; \
	class TransportItems { \
		INVENTORY_VEHICLE_DEFAULT_ITEMS \
	}; \
	class TransportBackpacks { \
		INVENTORY_VEHICLE_DEFAULT_BACKPACKS \
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
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN}; \
	class TransportWeapons { \
		INVENTORY_VEHICLE_DEFAULT_WEAPONS \
	}; \
	class TransportMagazines { \
		INVENTORY_VEHICLE_DEFAULT_MAGAZINES \
	}; \
	class TransportItems { \
		INVENTORY_VEHICLE_DEFAULT_ITEMS \
	}; \
	class TransportBackpacks { \
		INVENTORY_VEHICLE_DEFAULT_BACKPACKS \
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
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "APC (3/8)";
	vehicleclass = "Armored";
	forceInGarage = 1;

	crew = "SOCOMD_Crewman";
	typicalCargo[] = {"SOCOMD_Crewman"};

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

	crew = "SOCOMD_Crewman";
	typicalCargo[] = {"SOCOMD_Crewman"};

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
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "ATV (1/1)";
	vehicleclass = "Car";
	forceInGarage = 1;

	crew = UNIT_SOCOMD_CREWMAN;
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
};

class NDS_6x6_ATV_MIL2_LR;
class SOCOMD_LR_ATV : NDS_6x6_ATV_MIL2_LR
{
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "ATV - LR (1/0)";
	faction = FACTION_STR;
	vehicleclass = "Car";

	crew = UNIT_SOCOMD_CREWMAN;
	
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

////////////////////////////////////////////////////////////////////////////////
// SOV-CD
class CUP_B_BAF_Coyote_L2A1_D;
class SOCOMD_SOV_HMG_D : CUP_B_BAF_Coyote_L2A1_D
{
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOV - CD (3/9) ";
	faction = FACTION_STR;
	vehicleclass = "Car";

	crew = UNIT_SOCOMD_CREWMAN;
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN};
	
	transportMaxBackpacks = "30";
	transportMaxWeapons = "60";
	transportMaxMagazines = "600";
	
	hiddenSelections[] = 
	{
		"camo1",
		"camo2",
		"camo3"
	};
	hiddenSelectionsTextures[] = 
	{
		"socomd_data_core\SOV\jackal_base_co.paa",
		"\CUP\WheeledVehicles\CUP_WheeledVehicles_Jackal\data\jackal_mount_co.paa",
		"socomd_data_core\SOV\jackal_adds_co.paa"
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

class CUP_B_BAF_Coyote_L2A1_W;
class SOCOMD_SOV_HMG_W : CUP_B_BAF_Coyote_L2A1_W
{
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOV - CD (3/9) ";
	faction = FACTION_STR;
	vehicleclass = "Car";

	crew = UNIT_SOCOMD_CREWMAN;
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN};
	
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


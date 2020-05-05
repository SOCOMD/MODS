////////////////////////////////////////////////////////////////////////////////
// TRANSPORT
class SOCOMD_TRUCK_TRANSPORT_A : CUP_B_MTVR_USA {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Truck Transport (1/12)";
	fuelCapacity = 24;
	ace_refuel_fuelCapacity = 120;
	cost = 20000;
	threat[] = {0.8,0.8,0.5};	
	hiddenSelections[] = {
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data_cup\data\mtvr\mtvr_body_co.paa",
		"socomd_data_cup\data\mtvr\mtvr_body2_co.paa",
		"CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_interier_co.paa",
		"socomd_data_cup\data\mtvr\mtvr_tarp_co.paa"
	};
};

////////////////////////////////////////////////////////////////////////////////
// AMMO
class SOCOMD_TRUCK_AMMO_A : CUP_B_MTVR_Ammo_USA {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Truck Ammo (1/2)";
	fuelCapacity = 24;
	ace_refuel_fuelCapacity = 120;
	cost = 20000;
	threat[] = {0.8,0.8,0.5};	
	hiddenSelections[] = {
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data_cup\data\mtvr\mtvr_body_co.paa",
		"socomd_data_cup\data\mtvr\mtvr_body2_co.paa",
		"CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_interier_co.paa",
		"socomd_data_cup\data\mtvr\mtvr_tarp_co.paa"
	};
};

////////////////////////////////////////////////////////////////////////////////
// FUEL
class SOCOMD_TRUCK_FUEL_A : CUP_B_MTVR_Refuel_USA {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Truck Fuel (1/2)";
	fuelCapacity = 24;
	ace_refuel_fuelCapacity = 120;
	cost = 20000;
	threat[] = {0.8,0.8,0.5};

	hiddenSelections[] = {
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data_cup\data\mtvr\mtvr_body_co.paa",
		"socomd_data_cup\data\mtvr\mtvr_body2_co.paa",
		"CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\MTVR_interier_co.paa",
		"socomd_data_cup\data\mtvr\mtvr_fuel_co.paa"
	};
};

////////////////////////////////////////////////////////////////////////////////
// REPAIR
class SOCOMD_TRUCK_REPAIR_A : CUP_B_MTVR_Repair_USA {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Truck Repair (1/2)";
	fuelCapacity = 24;
	ace_refuel_fuelCapacity = 120;
	cost = 20000;
	threat[] = {0.8,0.8,0.5};

	hiddenSelections[] = {
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data_cup\data\mtvr\mtvr_body_co.paa",
		"socomd_data_cup\data\mtvr\mtvr_body2_co.paa",
		"CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\MTVR_interier_co.paa",
		"socomd_data_cup\data\mtvr\ural_repair_co.paa"
	};
};
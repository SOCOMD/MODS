////////////////////////////////////////////////////////////////////////////////
// TRANSPORT

/*
CUP_B_MTVR_USA <== TARGET
CUP_MTVR_Base
Car_F
*/

class CUP_B_MTVR_USA;
class SOCOMD_TRUCK_TRANSPORT_A : CUP_B_MTVR_USA {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Truck Transport (1/12)";

	hiddenSelections[] = {
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data\mtvr\mtvr_body_co.paa",
		"socomd_data\mtvr\mtvr_body2_co.paa",
		"CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_interier_co.paa",
		"socomd_data\mtvr\mtvr_tarp_co.paa"
	};
};

////////////////////////////////////////////////////////////////////////////////
// AMMO

/*
CUP_B_MTVR_Ammo_USA <== TARGET
CUP_MTVR_Reammo_Base
CUP_MTVR_Base
Car_F
*/

class CUP_B_MTVR_Ammo_USA;
class SOCOMD_TRUCK_AMMO_A : CUP_B_MTVR_Ammo_USA {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Truck Ammo (1/2)";

	hiddenSelections[] = {
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data\mtvr\mtvr_body_co.paa",
		"socomd_data\mtvr\mtvr_body2_co.paa",
		"CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\mtvr_interier_co.paa",
		"socomd_data\mtvr\mtvr_tarp_co.paa"
	};
};

////////////////////////////////////////////////////////////////////////////////
// FUEL

/*
CUP_B_MTVR_Refuel_USA <== TARGET
CUP_MTVR_Refuel_Base
CUP_MTVR_Base
Car_F
*/

class CUP_B_MTVR_Refuel_USA;
class SOCOMD_TRUCK_FUEL_A : CUP_B_MTVR_Refuel_USA {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Truck Fuel (1/2)";

	hiddenSelections[] = {
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data\mtvr\mtvr_body_co.paa",
		"socomd_data\mtvr\mtvr_body2_co.paa",
		"CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\MTVR_interier_co.paa",
		"socomd_data\mtvr\mtvr_fuel_co.paa"
	};
};

////////////////////////////////////////////////////////////////////////////////
// REPAIR

/*
CUP_B_MTVR_Repair_USA <== TARGET
CUP_MTVR_Repair_Base
CUP_MTVR_Base
Car_F
*/

class CUP_B_MTVR_Repair_USA;
class SOCOMD_TRUCK_REPAIR_A : CUP_B_MTVR_Repair_USA {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Truck Repair (1/2)";

	hiddenSelections[] = {
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4"
	};

	hiddenSelectionsTextures[] = {
		"socomd_data\mtvr\mtvr_body_co.paa",
		"socomd_data\mtvr\mtvr_body2_co.paa",
		"CUP\WheeledVehicles\CUP_WheeledVehicles_MTVR\Data\MTVR_interier_co.paa",
		"socomd_data\mtvr\ural_repair_co.paa"
	};
};
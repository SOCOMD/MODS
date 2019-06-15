////////////////////////////////////////////////////////////////////////////////
// SOV-CD

class SOCOMD_SOV_HMG_D : CUP_B_BAF_Coyote_L2A1_D {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOV-CDO (M2) (3/9) ";
	faction = FACTION_STR;
	vehicleclass = "Car";

	crew = UNIT_SOCOMD_CREWMAN;
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

	transportMaxBackpacks = "30";
	transportMaxWeapons = "60";
	transportMaxMagazines = "600";

	hiddenSelections[] = {
		"camo1",
		"camo2",
		"camo3"
	};

	hiddenSelectionsTextures[] = {
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

class SOCOMD_SOV_HMG_W : CUP_B_BAF_Coyote_L2A1_W {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOV-CDO (M2) (3/9) ";
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


class SOCOMD_SOV_HMG_D : CUP_B_BAF_Coyote_GMG_D {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOV-CDO (GMG) (3/9) ";
	faction = FACTION_STR;
	vehicleclass = "Car";

	crew = UNIT_SOCOMD_CREWMAN;
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN};

	transportMaxBackpacks = "30";
	transportMaxWeapons = "60";
	transportMaxMagazines = "600";

	hiddenSelections[] = {
		"camo1",
		"camo2",
		"camo3"
	};

	hiddenSelectionsTextures[] = {
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

class SOCOMD_SOV_HMG_W : CUP_B_BAF_Coyote_GMG_W {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOV-CDO (GMG) (3/9) ";
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
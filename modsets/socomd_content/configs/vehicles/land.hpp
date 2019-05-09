class NDS_6x6_ATV_MIL2_LR;
class SOCOMD_LR_ATV : NDS_6x6_ATV_MIL2_LR
{
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "6x6 ATV (1/0)";
	vehicleclass = "Car";
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
};

								//////////////// WIP Motorbike
class V12_KTM;
class V12_KTM_SOCOMD: V12_KTM
{
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Motorbike (1/0)";
	vehicleclass = "Car";
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
};

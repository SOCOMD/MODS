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
////////////////////////////////////////////////////////////////////////////////
// HURRICANE

class B_Heli_Attack_01_dynamicLoadout_F;

#define HURRICANE_BASE(ID) \
class SOCOMD_HURRICANE_##ID : B_Heli_Attack_01_dynamicLoadout_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_Core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Hurricane (2/0)"; \
	vehicleclass = "Air"; \
	forceInGarage = 1; \
	crew = SOCOMD_PILOT; \
	typicalCargo[] = {SOCOMD_PILOT}; \
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
	class AcreIntercoms { \
		class Intercom_1 { \
			displayName = "Crew Intercom"; \
			shortName = "Crew"; \
			allowedPositions[] = {"crew"}; \
			limitedPositions[] = {}; \
			numLimitedPositions = 0; \
			masterPositions[] = {"commander"}; \
			connectedByDefault = 1; \
		}; \
	}; \
};

HURRICANE_BASE(A)
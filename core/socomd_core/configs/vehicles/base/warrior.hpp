////////////////////////////////////////////////////////////////////////////////
// WARRIOR

class B_Heli_Transport_01_F;

#define WARRIOR_BASE(ID, SCOPE) \
class SOCOMD_WARRIOR_##ID : B_Heli_Transport_01_F { \
	scope = SCOPE; \
	scopeCurator = SCOPE; \
	editorCategory = SOCOMD_EdCat_Core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Warrior (4/8)"; \
	vehicleclass = "Air"; \
	forceInGarage = 1; \
	driverCanSee = CanSeeAll; \
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

WARRIOR_BASE(A,public)
WARRIOR_BASE(B,private)
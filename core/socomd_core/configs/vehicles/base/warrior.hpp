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
	fuelCapacity = 1360; \
	fuelConsumptionRate = 0.28; \
	driverCanSee = CanSeeAll; \
	crew = SOCOMD_PILOT; \
	cost = 40000; \
	threat[] = {1.0,0.9,0.9}; \
	typicalCargo[] = {SOCOMD_PILOT}; \
	class TransportWeapons { \
		INVENTORY_VEHICLE_DEFAULT_WEAPONS \
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
	class AcreIntercoms { \
		class Intercom_1 { \
			displayName = "Crew Intercom"; \
			shortName = "Crew"; \
			allowedPositions[] = {"driver", "commander", {"turret", "all"}}; \
			limitedPositions[] = {}; \
			numLimitedPositions = 0; \
			masterPositions[] = {"driver"}; \
			connectedByDefault = 1; \
		}; \
	}; \
	class AcreRacks { \
		class Rack_1 { \
			allowedPositions[] = {"driver", "commander", {"turret", "all"}}; \
			componentName = "ACRE_VRC110"; \
			displayName = "Dash"; \
			mountedRadio = "ACRE_PRC152"; \
			shortName = "Dash"; \
		}; \
	}; \
};

WARRIOR_BASE(A,public)
WARRIOR_BASE(B,private)
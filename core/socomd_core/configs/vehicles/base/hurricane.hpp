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
	fuelCapacity = 1420; \
	fuelConsumptionRate = 0.30; \
	crew = SOCOMD_PILOT; \
	cost = 40000; \
	threat[] = {1.0,1.0,1.0}; \
	typicalCargo[] = {SOCOMD_PILOT}; \
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
	class AcreIntercoms { \
		class Intercom_1 { \
			displayName = "Crew Intercom"; \
			shortName = "Crew"; \
			allowedPositions[] = {"driver", "gunner", "copilot"}; \
			limitedPositions[] = {}; \
			numLimitedPositions = 0; \
			masterPositions[] = {"driver"}; \
			connectedByDefault = 1; \
		}; \
	}; \
	class AcreRacks { \
		class Rack_1 { \
			allowedPositions[] = {"driver", "gunner", "copilot"}; \
			componentName = "ACRE_VRC110"; \
			displayName = "Dash"; \
			mountedRadio = "ACRE_PRC152"; \
			shortName = "Dash"; \
		}; \
	}; \
};

HURRICANE_BASE(A)
////////////////////////////////////////////////////////////////////////////////
// NOMAD

class B_Heli_Transport_03_F;

#define NOMAD_BASE(ID) \
class SOCOMD_NOMAD_##ID :  B_Heli_Transport_03_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_Core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Nomad (4/18)"; \
	vehicleclass = "Air"; \
	forceInGarage = 1; \
	fuelCapacity = 3914; \
	fuelConsumptionRate = 0.55; \
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

NOMAD_BASE(A)
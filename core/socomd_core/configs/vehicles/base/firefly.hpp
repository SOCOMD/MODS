
////////////////////////////////////////////////////////////////////////////////
// FIREFLY / DRAGONFLY COMMON

class Heli_Light_01_base_F : Helicopter_Base_H {
	class HitPoints : HitPoints
	{
		//Integral
		class HitHull : HitHull
		{
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
		};
		class HitAvionics : HitAvionics
		{
			armor = 3.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
		};
		class HitEngine : HitEngine
		{
			armor = 3.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
		};
		class HitFuel : HitFuel
		{
			armor = 3.0;
			passThrough = 1.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
		};

		//Rotors
		class HitHRotor : HitHRotor
		{
			armor = 4.0;
			passThrough = 0.0;
			explosionShielding = 1.0;
			minimalHit = 0.01;
		};
		class HitVRotor : HitVRotor
		{
			armor = 1.0;
			passThrough = 0.0;
			explosionShielding = 5.0;
			minimalHit = 0.01;
		};

		//Glass
		class HitLGlass : HitLGlass
		{
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};
		class HitRGlass : HitRGlass
		{
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};
		class HitGlass1 : HitGlass1
		{
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};
		class HitGlass2 : HitGlass2
		{
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};
		class HitGlass3 : HitGlass3
		{
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};
		class HitGlass4 : HitGlass4
		{
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};
		class HitGlass5 : HitGlass5
		{
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};
		class HitGlass6 : HitGlass6
		{
			armor = 1.0;
			passThrough = 1.0;
			explosionShielding = 0.0;
			minimalHit = 0.1;
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// FIREFLY

class B_Heli_Light_01_F;

#define FIREFLY_BASE(ID) \
class SOCOMD_FIREFLY_##ID : B_Heli_Light_01_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_Core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Firefly (2/6)"; \
	vehicleclass = "Air"; \
	forceInGarage = 1; \
	fuelCapacity = 440; \
	fuelConsumptionRate = 0.14; \
	crew = "SOCOMD_Pilot"; \
	cost = 30000; \
	threat[] = {1.0,0.7,0.3}; \
	typicalCargo[] = {"SOCOMD_Pilot"}; \
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
			disabledPositions[] = {{"Turret", {0,0}, {1}, {2}}}; \
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

FIREFLY_BASE(A)

////////////////////////////////////////////////////////////////////////////////
// DRAGON FLY

class B_Heli_Light_01_dynamicLoadout_F;

#define DRAGONFLY_BASE(ID) \
class SOCOMD_DRAGONFLY_##ID : B_Heli_Light_01_dynamicLoadout_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_Core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Dragonfly (2/0)"; \
	vehicleclass = "Air"; \
	forceInGarage = 1; \
	fuelCapacity = 440; \
	fuelConsumptionRate = 0.16; \
	crew = SOCOMD_PILOT; \
	cost = 40000; \
	threat[] = {1.0,0.9,0.9}; \
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

DRAGONFLY_BASE(A)
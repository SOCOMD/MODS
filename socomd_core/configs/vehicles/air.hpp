class Helicopter_Base_F : Helicopter {
	class HitPoints;
	class Turrets;
	class AcreIntercoms;
};

class Helicopter_Base_H : Helicopter_Base_F {
	class HitPoints : HitPoints {
		class HitHull;
		class HitAvionics;
		class HitEngine;
		class HitFuel;

		class HitHRotor;
		class HitVRotor;

		class HitLGlass;
		class HitRGlass;
		class HitGlass1;
		class HitGlass2;
		class HitGlass3;
		class HitGlass4;
		class HitGlass5;
		class HitGlass6;
	};

	class Turrets : Turrets {
		class CopilotTurret;
	};

	class AcreIntercoms : AcreIntercoms {
		class Intercom_1;
	};
};

////////////////////////////////////////////////////////////////////////////////
// WARRIOR

class B_Heli_Transport_01_F;

#define WARRIOR_BASE(ID, SCOPE) \
class SOCOMD_WARRIOR_##ID : B_Heli_Transport_01_F { \
	scope = SCOPE; \
	scopeCurator = SCOPE; \
	editorCategory = SOCOMD_EdCat_core; \
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
};

WARRIOR_BASE(A,public)
WARRIOR_BASE(B,private)

////////////////////////////////////////////////////////////////////////////////
// NOMAD

class B_Heli_Transport_03_F;

#define NOMAD_BASE(ID) \
class SOCOMD_NOMAD_##ID :  B_Heli_Transport_03_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Nomad (4/18)"; \
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
};

NOMAD_BASE(A)

////////////////////////////////////////////////////////////////////////////////
// HURRICANE

class B_Heli_Attack_01_dynamicLoadout_F;

#define HURRICANE_BASE(ID) \
class SOCOMD_HURRICANE_##ID : B_Heli_Attack_01_dynamicLoadout_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_core; \
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
};

HURRICANE_BASE(A)

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
	editorCategory = SOCOMD_EdCat_core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Firefly (2/6)"; \
	vehicleclass = "Air"; \
	forceInGarage = 1; \
	crew = "SOCOMD_Pilot"; \
	typicalCargo[] = {"SOCOMD_Pilot"}; \
	armor = 60.0; \
	armorStructural = 1.0; \
	explosionShielding = 1.0; \
	backRotorForceCoef = 0.4; \
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
};

FIREFLY_BASE(A)

////////////////////////////////////////////////////////////////////////////////
// DRAGON FLY

class B_Heli_Light_01_dynamicLoadout_F;

#define DRAGONFLY_BASE(ID) \
class SOCOMD_DRAGONFLY_##ID : B_Heli_Light_01_dynamicLoadout_F { \
	scope = public; \
	scopeCurator = public; \
	editorCategory = SOCOMD_EdCat_core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Air; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Dragonfly (2/0)"; \
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
};

DRAGONFLY_BASE(A)
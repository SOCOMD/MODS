
////////////////////////////////////////////////////////////////////////////////
// WARRIOR

class B_Boat_Transport_01_F;
class SOCOMD_BOAT_ASSAULT : B_Boat_Transport_01_F {
	scope = private;
	scopeCurator = private;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Sea;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Boat (1/5)";
	vehicleclass = "Ship";
	forceInGarage = 1;

	crew = UNIT_SOCOMD_CREWMAN;
	typicalCargo[] = {UNIT_SOCOMD_CREWMAN};
	armor = 10000;

	//Performance
	simulation = "shipX";
	idleRpm = 100;
	redRpm = 1000;
	thrustDelay = 0.5;
	enginePower = 60;
	engineShiftY = -0.15;
	waterSpeedFactor = 1;
	waterResistanceCoef = 0.015;
	waterAngularDampingCoef = 1.0;
	waterLinearDampingCoefX = 4.0;
	waterLinearDampingCoefY = 1.0;
	rudderForceCoef = 0.3;
	rudderForceCoefAtMaxSpeed = 0.01;
	waterLeakiness = 5;
	waterEffectSpeed = 5;
	waterFastEffectSpeed = 25;
	overSpeedBrakeCoef = 0.1;

	minSpeed = -0.5;
	maxSpeed = 40;

	class complexGearbox {
		GearboxRatios[] = {"R1",-0.5,"N",0,"D1",1.5,"D2",2.0,"D3",2.5};
		TransmissionRatios[] = {"High",1};
		gearBoxMode = "auto";
		moveOffGear = 1;
		driveString = "D";
		neutralString = "N";
		reverseString = "R";
	};
};

#define SHIP_BASE(ID, SCOPE) \
class SOCOMD_SHIP_##ID : SOCOMD_BOAT_ASSAULT { \
	scope = SCOPE; \
	scopeCurator = SCOPE; \
	editorCategory = SOCOMD_EdCat_Core; \
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Sea; \
	side = WEST; \
	author = AUTHOR_STR; \
	faction = FACTION_STR; \
	displayname = "Boat (1/5)"; \
	vehicleclass = "Air"; \
	forceInGarage = 1; \
	driverCanSee = CanSeeAll; \
	crew = SOCOMD_RIFLEMAN; \
	typicalCargo[] = {SOCOMD_RIFLEMAN}; \
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

SHIP_BASE(A,public)
SHIP_BASE(B,private)
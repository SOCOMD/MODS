#define SHIP_FAST_TURRETS \
maxHorizontalRotSpeed = 8; \
maxVerticalRotSpeed = 8;

class Ship_F;

class CUP_RHIB_Base : Ship_F {
	class Turrets;
};

class CUP_B_RHIB_USMC : CUP_RHIB_Base {
	class Turrets : Turrets {
		class MainTurret;
	};
};

class SOCOMD_SHIP_B : CUP_B_RHIB_USMC {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Sea;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Boat (2/12)";

	armor = 10000;

	//Performance
	simulation = "shipX";
	idleRpm = 100;
	redRpm = 1000;
	thrustDelay = 0.5;
	enginePower = 200;
	engineShiftY = 0;
	waterSpeedFactor = 1;
	waterResistanceCoef = 0.005;
	waterAngularDampingCoef = 1.75;
	waterLinearDampingCoefX = 15.0;
	waterLinearDampingCoefY = 1.2;
	rudderForceCoef = 0.5;
	rudderForceCoefAtMaxSpeed = 0.0045;
	waterLeakiness = 5;
	waterEffectSpeed = 15;
	waterFastEffectSpeed = 40;
	overSpeedBrakeCoef = 0.8;

	minSpeed = -0.5;
	maxSpeed = 60;

	class Turrets : Turrets {
		class MainTurret : MainTurret {
			SHIP_FAST_TURRETS
		};
	};
};
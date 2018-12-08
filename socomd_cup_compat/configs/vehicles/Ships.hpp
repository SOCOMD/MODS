
class CUP_B_RHIB_USMC;
class SOCOMD_SHIP_B : CUP_B_RHIB_USMC {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Boat (1/0)";

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
};
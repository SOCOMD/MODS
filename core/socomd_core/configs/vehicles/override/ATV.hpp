class NDS_6x6_ATV_base: Car_F
{
	terrainCoef = 1.4;
	turnCoef = 4.5;
	precision = 10;
	brakeDistance = 3.0;
	acceleration = 10;
	thrustDelay = 0.2;
	brakeIdleSpeed = 1.78;
	maxSpeed = 90;
	wheelCircumference = 2.073;
	antiRollbarForceCoef = 0.2;
	antiRollbarForceLimit = 0.3;
	antiRollbarSpeedMin = 20;
	antiRollbarSpeedMax = 50;
	idleRpm = 600;
	redRpm = 200;
	class complexGearbox
	{
		GearboxRatios[] = {"R1",-4,"N",0,"D1","4.5*(0.58^0)","D2","4.5*(0.58^1)","D3","4.5*(0.58^2)","D4","4.5*(0.58^3)","D5","4.5*(0.59^4)","D6","4.5*(0.6^5)"};
		TransmissionRatios[] = {"High",7};
		gearBoxMode = "auto";
		moveOffGear = 1;
		driveString = "D";
		neutralString = "N";
		reverseString = "R";
		gearUpMaxCoef = 0.95;
		gearDownMaxCoef = 0.85;
		gearUpMinCoef = 0.65;
		gearDownMinCoef = 0.55;
		transmissionDelay = 2;
	};
	simulation = "carx";
	dampersBumpCoef = 3.0;
	differentialType = "all_limited";
	frontRearSplit = 0.5;
	frontBias = 1.5;
	rearBias = 1.5;
	centreBias = 1.3;
	clutchStrength = 20.0;
	enginePower = 150;
	maxOmega = 450;
	peakTorque = 425;
	dampingRateFullThrottle = 0.08;
	dampingRateZeroThrottleClutchEngaged = 0.5;
	dampingRateZeroThrottleClutchDisengaged = 0.35;
	torqueCurve[] = {{0,0},{0.142857,0.470588},{0.428571,0.952941},{0.571429,1},{0.714286,0.823529},{0.857143,0.705882},{1.71429,0}};
	changeGearMinEffectivity[] = {1,0.15,1,1,1,1,1,1};
	switchTime = 0.31;
	latency = 1.5;
	class Wheels
	{
			class LF
			{
				side = "left";
				suspTravelDirection[] = {-0.125,-1,0};
				boneName = "wheel_1_1_damper";
				steering = 1;
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.3";
				mass = 30;
				MOI = 6;
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateInAir = 0.8;
				dampingRateDestroyed = 5000;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.05;
				maxDroop = 0.1;
				sprungMass = 400;
				springStrength = 14400;
				springDamperRate = "1920*2";
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 2.5;
				latStiffY = 18;
				frictionVsSlipGraph[] = {{0,1.75},{0.5,1.35},{1,1.2}};
			};
			class LM: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3000;
				frictionVsSlipGraph[] = {{0,2},{0.5,1.53},{1,1.36}};
			};
			class LR: LF
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 3000;
				frictionVsSlipGraph[] = {{0,2},{0.5,1.53},{1,1.36}};
			};
			class RF: LF
			{
				side = "right";
				suspTravelDirection[] = {0.125,-1,0};
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
			};
			class RM: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3000;
				frictionVsSlipGraph[] = {{0,2.3},{0.5,2.1},{1,2.0}};
			};
			class RR: RF
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 3000;
				frictionVsSlipGraph[] = {{0,2.3},{0.5,2.1},{1,2.0}};
			};
	};
	class PlayerSteeringCoefficients
	{
		turnIncreaseConst = 0.8;
		turnIncreaseLinear = 2.0;
		turnIncreaseTime = 1.0;
		turnDecreaseConst = 9.0;
		turnDecreaseLinear = 0.0;
		turnDecreaseTime = 0.0;
		maxTurnHundred = 0.8;
	};
	memoryPointTrackFLL = "TrackFLL";
	memoryPointTrackFLR = "TrackFLR";
	memoryPointTrackBLL = "TrackBLL";
	memoryPointTrackBLR = "TrackBLR";
	memoryPointTrackFRL = "TrackFRL";
	memoryPointTrackFRR = "TrackFRR";
	memoryPointTrackBRL = "TrackBRL";
	memoryPointTrackBRR = "TrackBRR";
    ejectDeadCargo = 1;
	ejectDeadDriver = 1;
	crewCrashProtection = 0;
	crewExplosionProtection = 0;
	damageEffect = "";
	damageTexDelay = 0.5;
	fuelExplosionPower = 0;
	maxFordingDepth = -0.45;
	maximumLoad = 600;
};

class NDS_6x6_ATV_MIL2_LR: NDS_6x6_ATV_base {};

class SOCOMD_LR_ATV : NDS_6x6_ATV_MIL2_LR {
    scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "6x6 ATV (1/0)";
	vehicleclass = "Car";
	forceInGarage = 1;

	fuelCapacity = 4; // 4 == 24m at max (4 == default)
	ace_refuel_fuelCapacity = 25;
	ace_refuel_fuelCargo = 40;
	crew = "SOCOMD_Crewman";
	typicalCargo[] = {"SOCOMD_Crewman"};
    class TransportWeapons {
		INVENTORY_VEHICLE_MEDIUM_WEAPONS
	};

	class TransportMagazines {
		INVENTORY_VEHICLE_SMALL_MAGAZINES
	};

	class TransportItems {
		INVENTORY_VEHICLE_6X6_ITEMS
	};

	class TransportBackpacks {
		INVENTORY_VEHICLE_SMALL_BACKPACKS
	};
    class AcreRacks {
		class Rack_1 {
			allowedPositions[] = {"driver",{"cargo", "all"}, {"ffv", "all"},{"turnedout", "all"}};
			componentName = "ACRE_VRC103";
			displayName = "Dash";
			mountedRadio = "ACRE_PRC117F";
			shortName = "Dash";
		};
	};
};


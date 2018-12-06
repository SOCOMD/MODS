class SOCOMD_ASSAULT_BOAT : B_Boat_Transport_01_F
{
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Sea;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "Assault Boat";
	faction = FACTION_STR;
	side = WEST;
	vehicleclass = "Ship";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};
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

	class complexGearbox
		{
			GearboxRatios[] = {"R1",-0.5,"N",0,"D1",1.5,"D2",2.0,"D3",2.5};
			TransmissionRatios[] = {"High",1};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};

	class TransportMagazines 
	{
		LOADOUT_LAND_TRANSPORT_MAGAZINES
	};

	class TransportItems 
	{
		LOADOUT_LAND_TRANSPORT_ITEMS
	};

	class TransportBackpacks 
	{
		LOADOUT_LAND_TRANSPORT_BACKPACKS
	};

	class TransportWeapons 
	{
		LOADOUT_LAND_TRANSPORT_WEAPONS
	};
};

class CUP_B_RHIB_USMC;
class SOCOMD_RHIB_ARMED : CUP_B_RHIB_USMC
{
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Sea;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "RHIB Armed";
	faction = FACTION_STR;
	side = WEST;
	vehicleclass = "Ship";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};
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

	class TransportMagazines 
	{
		LOADOUT_LAND_TRANSPORT_MAGAZINES
	};

	class TransportItems 
	{
		LOADOUT_LAND_TRANSPORT_ITEMS
	};

	class TransportBackpacks 
	{
		LOADOUT_LAND_TRANSPORT_BACKPACKS
	};

	class TransportWeapons 
	{
		LOADOUT_LAND_TRANSPORT_WEAPONS
	};
};
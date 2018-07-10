class I_C_Boat_Transport_02_F;
class SOCOMD_ASSAULT_BOAT : I_C_Boat_Transport_02_F
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "Unarmed RHIB";
	faction = "SOCOMD_CMD";
	vehicleclass = "Ship";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

class CUP_B_RHIB_USMC;
class SOCOMD_GUNBOAT : CUP_B_RHIB_USMC
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "Armed RHIB";
	faction = "SOCOMD_CMD";
	vehicleclass = "Ship";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

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
	waterEffectSpeed = 5;
	waterFastEffectSpeed = 25;
	overSpeedBrakeCoef = 0.8;

	minSpeed = -0.5;
	maxSpeed = 65;

	class TransportMagazines 
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

class SOCOMD_ASSAULT_BOAT_S : B_Boat_Transport_01_F
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "Small Assault Boat";
	faction = "SOCOMD_CMD";
	vehicleclass = "Ship";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines 
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};
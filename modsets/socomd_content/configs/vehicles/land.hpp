class NDS_6x6_ATV_MIL2_LR;
class SOCOMD_LR_ATV : NDS_6x6_ATV_MIL2_LR
{
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
		INVENTORY_VEHICLE_MEDIUM_MAGAZINES
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
	class complexGearbox {
		GearboxRatios[]={
			"R1",
			-2.3510001,
			"N",
			0,
			"D1",
			2.0810001,
			"D2",
			1.257,
			"D3",
			0.73699999
		};
		TransmissionRatios[]=
		{
			"High",
			4
		};
		gearBoxMode="auto";
		moveOffGear=1;
		driveString="D";
		neutralString="N";
		reverseString="R";
	};
	simulation="carx";
	dampersBumpCoef=0.30000001;
	terrainCoef=1.4;
	differentialType="rear_open";
	frontRearSplit=0.3;
	frontBias=0.9;
	rearBias=1.7;
	centreBias=1.4;
	clutchStrength=50;
	enginePower=25;
	maxOmega=210;
	peakTorque=280;
	dampingRateFullThrottle=0.079999998;
	dampingRateZeroThrottleClutchEngaged=0.15000001;
	dampingRateZeroThrottleClutchDisengaged=0.15000001;
	torqueCurve[]=
	{
		{0,0.60000002},
		{0.2,0.64999998},
		{0.30000001,0.80000001},
		{0.69999999,0.94999999},
		{0.80000001,1},
		{0.89999998,0.94999999},
		{1,0.5}
	};
	changeGearMinEffectivity[]={0.94999999,0.15000001,0.98000002,0.98000002,0.94999999};
	switchTime=0.1;
	latency=1;
	
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

								//////////////// WIP Motorbike
class V12_KTM;
class V12_KTM_SOCOMD: V12_KTM
{
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Vehicle_Land;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Motorbike (1/0)";
	vehicleclass = "Car";
	forceInGarage = 1;

	crew = "SOCOMD_Crewman";
	typicalCargo[] = {"SOCOMD_Crewman"};

	fuelCapacity = 15; // 15 == 50 minutes
	ace_refuel_fuelCapacity = 10;

	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	class TransportBackpacks {};
};

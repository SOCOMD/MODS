// PLP Containers this is extracted from
#define _ARMA_
//ndefs=13
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class plp_containers
	{
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Weapons_F_Ammoboxes","A3_UI_F","A3_Characters_F_Common","A3_Characters_F_Proxies"};
		requiredVersion = 0.1;
		units[] = {"plp_cts_FuelCrateOlive"};
		weapons[] = {};
	};
};
class CfgVehicleClasses
{
	class plp_containers_staticMetal
	{
		displayName = "PLP Containers (Static, Metal)";
		mapbuilder_filter = "PLP Object Packs";
	};
};

class CfgVehicles
{
    class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class plp_ctsm_Base: House_F
	{
		mapSize = 0.2;
		scope = 0;
		scopeCurator = 0;
		displayName = "";
		model = "\A3\Weapons_F\empty.p3d";
		icon = "iconObject";
		vehicleClass = "plp_containers_staticMetal";
		cost = 100;
		destrType = "DestructTree";
		armor = 35;
	};
	class plp_cts_FuelCrateOlive: plp_ctsm_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Fuel Crate (Olive)";
		model = "\plp_containers\plp_cts_FuelCrateOlive.p3d";
	};
};
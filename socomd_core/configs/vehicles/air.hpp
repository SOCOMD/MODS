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
class SOCOMD_WARRIOR_BASE : B_Heli_Transport_01_F {
	scope = private;
	scopeCurator = private;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Warrior (4/8)";
	
	vehicleclass = "Air";
	forceInGarage = 1;
	driverCanSee = CanSeeAll;

	crew = SOCOMD_PILOT;
	typicalCargo[] = {SOCOMD_PILOT};

	//INVENTORY
	LOADOUT_AIR

	class TransportBackpacks
	{
		TRANSPORT_BACKPACK(B_Parachute, 16)
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	};
};

class SOCOMD_WARRIOR_A : SOCOMD_WARRIOR_BASE {
	scope = public;
	scopeCurator = public;
};

class SOCOMD_WARRIOR_B : SOCOMD_WARRIOR_BASE {
	scope = private;
	scopeCurator = private;
};

////////////////////////////////////////////////////////////////////////////////
// NOMAD

class B_Heli_Transport_03_F;
class SOCOMD_NOMAD_BASE :  B_Heli_Transport_03_F {
	scope = private;
	scopeCurator = private;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Nomad (4/18)";

	vehicleclass = "Air";
	forceInGarage = 1;

	crew = SOCOMD_PILOT;
	typicalCargo[] = {SOCOMD_PILOT};
	
	//INVENTORY
	LOADOUT_AIR

	class TransportBackpacks
	{
		TRANSPORT_BACKPACK(B_Parachute, 30)
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	};
};

class SOCOMD_NOMAD_A : SOCOMD_NOMAD_BASE {
	scope = public;
	scopeCurator = public;
};

////////////////////////////////////////////////////////////////////////////////
// HURRICANE

class B_Heli_Attack_01_dynamicLoadout_F;
class SOCOMD_HURRICANE_BASE : B_Heli_Attack_01_dynamicLoadout_F {
	scope = private;
	scopeCurator = private;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Hurricane (2/0)";

	vehicleclass = "Air";
	forceInGarage = 1;
	
	crew = SOCOMD_PILOT;
	typicalCargo[] = {SOCOMD_PILOT};

	//INVENTORY
	LOADOUT_AIR

	class TransportBackpacks
	{
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	};
};

class SOCOMD_HURRICANE_A : SOCOMD_HURRICANE_BASE {
	scope = public;
	scopeCurator = public;
};

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
class SOCOMD_FIREFLY_BASE : B_Heli_Light_01_F {
	scope = private;
	scopeCurator = private;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Firefly (2/6)";

	vehicleclass = "Air";
	forceInGarage = 1;
	
	crew = "SOCOMD_Pilot";
	typicalCargo[] = {"SOCOMD_Pilot"};

	//Armor Damage
	armor = 60.0;
	armorStructural = 1.0;
	explosionShielding = 1.0;

	//Flight Controls
	backRotorForceCoef = 0.4;

	//INVENTORY
	LOADOUT_AIR

	class TransportBackpacks {
		TRANSPORT_BACKPACK(B_Parachute, 8)
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	};
};

class SOCOMD_FIREFLY_A : SOCOMD_FIREFLY_BASE {
	scope = public;
	scopeCurator = public;
};

////////////////////////////////////////////////////////////////////////////////
// DRAGON FLY

class B_Heli_Light_01_dynamicLoadout_F;
class SOCOMD_DRAGONFLY_BASE : B_Heli_Light_01_dynamicLoadout_F {
	scope = private;
	scopeCurator = private;
	
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Dragonfly (2/0)";

	vehicleclass = "Air";
	forceInGarage = 1;

	crew = SOCOMD_PILOT;
	typicalCargo[] = {SOCOMD_PILOT};

	//INVENTORY
	LOADOUT_AIR

	class TransportBackpacks
	{
		TRANSPORT_BACKPACK(B_Parachute, 2)
		TRANSPORT_BACKPACK(VSM_Multicam_Backpack_Kitbag, 1)
	};
};

class SOCOMD_DRAGONFLY_A : SOCOMD_DRAGONFLY_BASE {
	scope = public;
	scopeCurator = public;
};
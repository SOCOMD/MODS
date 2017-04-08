/*//////////////////////////////////////////////////////////////////////////////
Arguments:
0 - Prop (Editor Object Id)
1 - Marker (Editor Object Id)
2 - Spawner Type [AIR_ROTARY, AIR_FIXEDWING, LAND, SEA, SUPPLY]
3 - Spawn Method [LAND, SEA]
//////////////////////////////////////////////////////////////////////////////*/

_args = _this;
_object = _args select 0;
_target = _args select 1;
_type = _args select 2;
_spawn = _args select 3;

_aircraftRotaryClasses = [
	"SOCOMD_BLACKHAWK",
	"SOCOMD_BLACKHAWK_FFV",
	"SOCOMD_BLACKHAWK_MEV",
	"SOCOMD_CHINOOK_VIV",
	"SOCOMD_CHINOOK",
	"SOCOMD_HURRICANE_AA",
	"SOCOMD_HURRICANE_AT",
	"SOCOMD_HURRICANE_CAS",
	"SOCOMD_FIREFLY",
	"SOCOMD_DRAGONFLY_127",
	"SOCOMD_DRAGONFLY_762"
 ];

 _aircraftFixedWingClasses = [
	"JS_JC_FA18E",
	"JS_JC_FA18F",
	"FIR_A10A_Blank",
	"FIR_A10C_Blank",
	"CUP_B_TowingTractor_USMC"
 ];

_vehicleClasses = [
	"SOCOMD_ASLAV",
	"SOCOMD_JACKAL_HMG_D",
	"SOCOMD_JACKAL_AGL_D",
	"SOCOMD_JACKAL_HMG_W",
	"SOCOMD_JACKAL_AGL_W",
	"SOCOMD_BUSHMASTER_HMG",
	"SOCOMD_BUSHMASTER_TRANS",
	"SOCOMD_SUPPORT_HMG_D",
	"SOCOMD_SUPPORT_HMG_W",
	"SOCOMD_QUADBIKE",
	"SOCOMD_BIKE"
 ];

_boatClasses = [
	"SOCOMD_ASSAULT_BOAT",
	"SOCOMD_ASSAULT_BOAT_S",
	"SOCOMD_GUNBOAT"
 ];

_supplyClasses = [
	"SOCOMD_CargoNet",
	"SOCOMD_Supply_Crate",
	"SOCOMD_Archer_Crate",
	"SOCOMD_Sniper_Crate",
	"SOCOMD_UAV_Crate",
	"SOCOMD_Mag58_Crate",
	"SOCOMD_M2_Crate",
	"SOCOMD_Mk19_Crate",
	"SOCOMD_Javelin_Crate",
	"SOCOMD_Stinger_Crate",
	"SOCOMD_Fortification_Crate",
	"SOCOMD_HE_Mortar_Crate",
	"SOCOMD_WFlare_Mortar_Crate",
	"SOCOMD_WSmoke_Mortar_Crate",
	"ACE_Wheel"
];

_setupTitle = "";
_setupClasses = [];
_setupClearDistance = 8;

switch(_type) do
{
	case "AIR_ROTARY":
	{
		_setupTitle = "Rotary Requisition";
		_setupClasses = _aircraftRotaryClasses;
	};

	case "AIR_FIXEDWING":
	{
		_setupTitle = "Fixed Wing Requisition";
		_setupClasses = _aircraftFixedWingClasses;
	};
	
	case "LAND":
	{
		_setupTitle = "Vehicle Requisition";
		_setupClasses = _vehicleClasses;
	};
	
	case "SEA":
	{
		_setupTitle = "Boat Requisition";
		_setupClasses = _boatClasses;
	};

	case "SUPPLY":
	{
		_setupTitle = "Supply Requisition";
		_setupClasses = _supplyClasses;
		_setupClearDistance = 1;
	};
	
	default
	{
		systemChat format["No Spawner for type (%1)", _type];
	};
};

if(count _setupClasses <= 0) exitWith {};

_object enableSimulation false;
_object enableSimulationGlobal false;
_object addAction [_setupTitle, 
	{
		_args = _this select 3;
		_classes = _args select 0;
		_target = _args select 1;
		_spawn = _args select 2;
		_setupClearDistance = _args select 3;
		
		[["cars", "tanks", "helicopters", "planes", "boats", "thingx"], _classes, _target, _spawn, _setupClearDistance] call ASORVS_fnc_Open;

	},[_setupClasses, _target, _spawn, _setupClearDistance]
];
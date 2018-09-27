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
	"SOCOMD_HURRICANE_CAS",
	"SOCOMD_FIREFLY",
	"SOCOMD_DRAGONFLY_762"
 ];

/* _aircraftFixedWingClasses = [
	"JS_JC_FA18E",
	"JS_JC_FA18F",
	"FIR_A10A_Blank",
	"FIR_A10C_Blank",
	"CUP_B_TowingTractor_USMC"
 ];*/

_vehicleClasses = [
	//"SOCOMD_ASLAV_W",
	//"SOCOMD_ASLAV_D",
	"SOCOMD_JACKAL_HMG_D",
	"SOCOMD_JACKAL_AGL_D",
	"SOCOMD_JACKAL_HMG_W",
	"SOCOMD_JACKAL_AGL_W",
	//"SOCOMD_MASTIFF_HMG_D",
	//"SOCOMD_MASTIFF_HMG_W",
	//"SOCOMD_BUSHMASTER_HMG",
	"SOCOMD_BUSHMASTER_TRANS",
	//"SOCOMD_LANDROVER_TRANS_D",
	//"SOCOMD_LANDROVER_HMG_D",
	//"SOCOMD_LANDROVER_GMG_D",
	//"SOCOMD_LANDROVER_TRANS_W",
	//"SOCOMD_LANDROVER_HMG_W",
	//"SOCOMD_LANDROVER_GMG_W",
	"SOCOMD_SUPPORT_HMG_D",
	"SOCOMD_SUPPORT_HMG_W",
	"SOCOMD_MTVR_Trans",
	"SOCOMD_MTVR_Ammo",
	"SOCOMD_MTVR_Refuel",
	"SOCOMD_MTVR_Repair",
	"SOCOMD_QUADBIKE",
	"SOCOMD_BIKE",
	"socomd_nds_6x6_atv_mil2",
	"socomd_nds_6x6_atv_mil"
 ];

_boatClasses = [
	"SOCOMD_ASSAULT_BOAT",
	"SOCOMD_RHIB_ARMED"
 ];

_supplyClasses = [
	"SOCOMD_CargoNet",
	"SOCOMD_Supply_Crate",
	"SOCOMD_Ammo_Box",
	"SOCOMD_Vehicle_Ammo_Box",
	"SOCOMD_Mortar_Box",
	"SOCOMD_Gustav_Box",
	"SOCOMD_Medical_Box",
	"SOCOMD_UAV_Crate",
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

	// case "AIR_FIXEDWING":
	// {
	// 	_setupTitle = "Fixed Wing Requisition";
	// 	_setupClasses = _aircraftFixedWingClasses;
	// };
	
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
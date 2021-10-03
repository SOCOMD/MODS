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

_setupTitle = "";
_setupClasses = [];
_setupClearDistance = 8;

switch(_type) do
{
	case "AIR_ROTARY":
	{
		_setupTitle = "Rotary Requisition";
		_setupClasses = ["Rotary"] call socomd_core_fnc_ASORVS_GetClassnames;
	};

	case "LAND":
	{
		_setupTitle = "Vehicle Requisition";
		_setupClasses = ["Land"] call socomd_core_fnc_ASORVS_GetClassnames;
	};

	case "SEA":
	{
		_setupTitle = "Boat Requisition";
		_setupClasses = ["Sea"] call socomd_core_fnc_ASORVS_GetClassnames;
	};

	case "SUPPLY":
	{
		_setupTitle = "Supply Requisition";
		_setupClasses = ["Supply"] call socomd_core_fnc_ASORVS_GetClassnames;
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
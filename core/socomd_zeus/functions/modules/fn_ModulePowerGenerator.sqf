params["_logic", "_units", "_activated"];

if!(_activated && local _logic) exitWith {};

_objects = synchronizedObjects _logic; 
_logic setVariable ["POWER","AUTO"];
_delay = _logic getVariable ["KICKON_DELAY",120];
private _GeneratorClasses = ["Land_dp_transformer_F","Land_DPP_01_transformer_F","PowGen_Big","PowGen_Big_EP1","Land_PowerGenerator_F"];

sleep 1;
_GridPower = _logic getVariable ["GRID_POWER","OFF"];
if (_GridPower == "AUTO") then {
	_logic setVariable [ "POWER", "OFF"];
};

_triggers = [];
_Generators = [];
_counter = 0;  
{  
  if(((typeOf _x) find "EmptyDetector") != -1 ) then { 
    _triggers pushBack _x;
  };
  if (((typeOf _x) in _GeneratorClasses)) then {
	_Generators pushBack _x;
  };
} forEach _objects;

{
	_Generator = _x;
	_Generator addAction ["Power ON",{(_this select 3) execVM "\socomd_zeus\functions\power\fn_TogglePower.sqf";},[_logic,"AUTO", _triggers],1.5,true,false,"","true",3];
	_Generator addAction ["Power OFF",{(_this select 3) execVM "\socomd_zeus\functions\power\fn_TogglePower.sqf";},[_logic,"OFF", _triggers],1.5,true,false,"","true",3];
	_Generator setVariable["LOGIC",_logic];
	_Generator setVariable["TRIGGERS",_triggers];
	_Generator addEventHandler["Killed", {
		_logic = (_this select 0) getVariable ["LOGIC",objNull];
		_triggers = (_this select 0) getVariable ["TRIGGERS",objNull];
		if((_logic getVariable ["GRID_POWER","OFF"]) == "OFF") then {
			[_logic,"OFF", _triggers] execVM  "\socomd_zeus\functions\power\fn_TogglePower.sqf";
		};
	}];
	/*
	// workout how to do sounds better
	[_Generator] spawn {
		_Generator = _this select 0;
		while {alive _Generator} do {
			if(_Generator getVariable ["POWER", "OFF"] == "AUTO") then {
				playSound3D["A3\Sounds_F\vehicles2\soft\Truck_01\Truck_01_Engine_Int_Rpm0.wss",_Generator];
				sleep 7;
			};
			sleep 5;
		};
	};
	*/
} forEach _Generators;

[_logic,_logic getVariable ["GRID_POWER","AUTO"], _triggers] execVM "\socomd_zeus\functions\power\fn_TogglePower.sqf";

["GRID_CHANGE",{
	_logic = _thisArgs select 0;
	_triggers = _thisArgs select 1;
	_delay = _thisArgs select 2;
	_GridPower = _logic getVariable ["GRID_POWER","OFF"];
	if (_GridPower == "AUTO") then {
		_logic getVariable ["POWER", "OFF"];
		//[_logic,"OFF",_triggers] execVM "\socomd_zeus\functions\power\fn_TogglePower.sqf";
	} else {
		// if power grid switched off, exit early if we are turned off.
		if ((_logic getVariable ["POWER", "OFF"]) == "OFF" ) exitWith {};
		sleep _delay;
		// recheck if we are off and check if the power grid is back.
		_GridPower = _logic getVariable ["GRID_POWER","OFF"];
		if (_GridPower == "AUTO") exitWith {};
		if ((_logic getVariable ["POWER", "OFF"]) == "OFF" ) exitWith {};
		// time to turn on
		[_logic,"AUTO",_triggers] execVM "\socomd_zeus\functions\power\fn_TogglePower.sqf";
	};
},[_logic,_triggers,_delay]] call CBA_fnc_addEventHandlerArgs;

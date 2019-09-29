params["_logic", "_units", "_activated"];

if!(_activated && local _logic) exitWith {};

_objects = synchronizedObjects _logic; 
_logic setVariable ["POWER","AUTO"];

_triggers = [];
_switches = [];
_Generators = [];
_counter = 0;
{  
  if(((typeOf _x) find "EmptyDetector") != -1 ) then { 
    _triggers pushBack _x;
  };
  if (((typeOf _x) find "TransferSwitch")!= -1 ) then {
	_switches pushBack _x;
  };

  if (((typeOf _x) find "SOCOMD_Module_PowerGenerator")!= -1 ) then {
	_Generators pushBack _x;
  };
} forEach _objects;

{
	_switch = _x;
	_switch addAction ["Power ON",{(_this select 3) execVM "\socomd_zeus\functions\power\fn_TogglePower.sqf";},[_logic,"AUTO", _triggers ,_Generators,true],1.5,true,false,"","true",3];
	_switch addAction ["Power OFF",{(_this select 3) execVM "\socomd_zeus\functions\power\fn_TogglePower.sqf";},[_logic,"OFF", _triggers ,_Generators,true],1.5,true,false,"","true",3];
} forEach _switches;

_onoff = _logic getVariable "POWER";
{
	_x setVariable ["GRID_POWER",_onoff];
} forEach _Generators;

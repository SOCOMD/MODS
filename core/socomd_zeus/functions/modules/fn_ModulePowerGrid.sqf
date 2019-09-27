params["_logic", "_units", "_activated"];

if!(_activated && local _logic) exitWith {};

_objects = synchronizedObjects _logic; 
_logic setVariable ["POWER_SWITCH","AUTO"];

_powerScript = {
	private _args = _this select 3;
	private _caller = _args select 0;
	private _onoff = _args select 1;
	private _trigger = _args select 2;
	_caller setVariable ["POWER_SWITCH",_onoff];
	private _region = triggerArea _trigger;
	private _types = ["Lamps_Base_F", "PowerLines_base_F","Land_PowerPoleWooden_F","Land_LampHarbour_F","Land_LampShabby_F","Land_PowerPoleWooden_L_F","Land_PowerPoleWooden_small_F","Land_LampDecor_F","Land_LampHalogen_F","Land_LampSolar_F","Land_LampStreet_small_F","Land_LampStreet_F","Land_LampAirport_F"];
	
	_distance = _region select 0;
	if (_distance < _region select 1) then {
		_distance = _region select 1;
	};
	_distance = _distance * 2;
	_lampList = [];
	{
		_lamps = (position _trigger) nearObjects [_x,_distance ];
		{
			if((position _x) inArea _trigger) then {
				_lampList pushBack _x;
			};
		} forEach _lamps;

	} forEach _types;
	{_x switchLight _onoff} forEach _lamplist;
};

_triggers = [];
_switches = [];
_counter = 0;  
{  
  if(((typeOf _x) find "EmptyDetector") != -1 ) then { 
    _triggers pushBack _x;
  };
  if (((typeOf _x) find "TransferSwitch")!= -1 ) then {
	_switches pushBack _x;
  };
} forEach _objects;

{
	_switch = _x;
	{
		_switch addAction ["Power ON",_powerScript,[_logic,"AUTO", _x]];
		_switch addAction ["Power OFF",_powerScript,[_logic,"OFF", _x]];
	} forEach _triggers;
} forEach _switches;
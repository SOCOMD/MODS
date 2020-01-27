params["_logic", "_units", "_activated"];

if!(_activated && local _logic) exitWith {};

if !(isNil "_units" || (count _units) == 0) exitWith {
	{ 
		_unit = _x;
		{ 
			_unit forgetTarget _x;
		} foreach allPlayers;
	} foreach _units;
};

_mouseOver = missionNamespace getVariable [ "bis_fnc_curatorObjectPlaced_mouseOver", [""]];

_curatorEntity = objnull;
if ((_mouseOver select 0) == "OBJECT") then 
{
	 _curatorEntity = (_mouseOver select 1);
};

//Exit there is no curator entity under cursor
if(isNull _curatorEntity) exitWith {
	deleteVehicle _logic;
};

_group = Group _curatorEntity;
if !(isNull _group) then {
	{ 
		_group forgetTarget _x;
	} foreach allPlayers;
};
deleteVehicle _logic;
params["_logic", "_units", "_activated"];
//if(!_activated) exitWith {};
diag_log format["_logic: %1 _units: %2 _actived %3",_logic,_units,_activated];
if!(_activated && local _logic) exitWith {};
//_objects = synchronizedObjects _logic; 
if !(isNil "_units") exitWith {
	diag_log "for looping 1";
	{_x  disableAI "PATH";} forEach _units;
	diag_log "for looping 1 ending";
};
diag_log "stage 2";
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
diag_log "stage 3";
if !(isNull _group) then {
	diag_log "stage 4";
	{_x  disableAI "PATH";} foreach units _group;
};
deleteVehicle _logic;
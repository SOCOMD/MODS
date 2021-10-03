#include "script_component.hpp"
params["_logic", "_units", "_activated"];
//if(!_activated) exitWith {};
if!(_activated && local _logic) exitWith {};
//_objects = synchronizedObjects _logic;
if !(isNil "_units" || (count _units) == 0) exitWith {
    {_x  enableAI "PATH";} forEach _units;
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
    {_x  enableAI "PATH";} foreach units _group;
};
deleteVehicle _logic;
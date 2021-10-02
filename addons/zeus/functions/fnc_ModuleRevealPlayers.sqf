#include "script_component.hpp"
params["_logic", "_units", "_activated"];

if!(_activated && local _logic) exitWith {};

if !(isNil "_units" || (count _units) == 0) exitWith {
    { 
        _unit = _x;
        { 
            if((_x distance _unit) < 1000) then {
                if(([objNull,"VIEW"] checkVisibility [eyePos _unit, eyePos _x ]) > 0.5) then {
                    _unit reveal _x;
                };
            };
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
        _player = _x;
        {
            if((_x distance _player) < 1000) then {
                if(([objNull,"VIEW"] checkVisibility [eyePos _player, eyePos _x ]) > 0.5) then {
                    _x reveal _player;
                };
            };
        } foreach (units _group);
    } foreach allPlayers;
};
deleteVehicle _logic;
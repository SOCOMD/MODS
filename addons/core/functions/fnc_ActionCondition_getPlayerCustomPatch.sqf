#include "script_component.hpp"
params ["_player"];


if(isNull(_player)) exitWith {""};
_patch = "";
_guid = getPlayerUID _player;
// _guid = "76561198009993601";
if( isClass (configFile >> "CfgSocomdPlayerSettings" >> _guid)) then {
    _patch = getText (configFile >> "CfgSocomdPlayerSettings" >> _guid >> "patchPath");
};
_patch
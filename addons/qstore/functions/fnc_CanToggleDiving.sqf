#include "script_component.hpp"
params ["_player"];
_loadoutId = _player getVariable ["SOCOMD_LOADOUTID", ""];

_allowed = false;

if(!(_loadoutId == "")) then 
{ 
    _unitConfig = (configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);
    if(!(isNull _unitConfig)) then 
    {
        _allowed = true;
    };
};

_allowed;
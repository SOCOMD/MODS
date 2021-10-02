#include "script_component.hpp"
_args = _this;
_player = _this select 0;
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
#include "script_component.hpp"
_worldType = worldName call FUNC(GetWorldType);

_loadout = ACE_Player GetVariable ["SOCOMD_LOADOUTID", "SOCOMD_Rifleman"];
_uniformType = getText (configFile >> "CfgLoadouts" >> "SOCOMD" >> "SOCOMD_Uniforms" >> _worldType);
if (_loadout == "SOCOMD_Recon") then {
    _uniformType = getText (configFile >> "CfgLoadouts" >> "SOCOMD" >> "SOCOMD_Recon_Uniforms" >> _worldType);
};
_uniformType;
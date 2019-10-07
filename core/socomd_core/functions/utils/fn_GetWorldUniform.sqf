_worldType = worldName call SOCOMD_fnc_GetWorldType;
_uniformType = getText (configFile >> "CfgLoadouts" >> "SOCOMD" >> "SOCOMD_Uniforms" >> _worldType);
_uniformType;
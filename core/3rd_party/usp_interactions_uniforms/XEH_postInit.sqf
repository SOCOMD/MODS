if !(isClass (configFile >> "CfgPatches" >> "USP_Gear_Acc")) then {
    usp_uniforms_require_items = false;
};
["loadout", {
    params["_player","_new","_old"];
    [_player] call USP_fnc_generateInteractions;
}, true] call CBA_fnc_addPlayerEventHandler;

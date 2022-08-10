["loadout", {
    params["_player","",""];
    [_player] call rgoc_fnc_inventoryUpdateEH;
}, true] call CBA_fnc_addPlayerEventHandler;
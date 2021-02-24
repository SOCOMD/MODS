tf_no_auto_long_range_radio = true;

["unit", {
    if (player != (_this select 0)) then {
        player setVariable ["TFAR_controlledUnit",(_this select 0), true];
    } else {
        player setVariable ["TFAR_controlledUnit",nil, true];
    };

    TFAR_currentUnit = (_this select 0);
},true] call CBA_fnc_addPlayerEventHandler;
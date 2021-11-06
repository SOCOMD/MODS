

if (isDedicated) exitWith {};

player setVariable["ph_bCheck1", false];
L_pReady_lastSwitch 	 = 0;
L_pReady_nextCheck 		 = 0;
L_pReady_checkInterval 	 = 0.075;
L_pReady_reloadDone		 = true;
L_pReady_lastWeapon 	 = "";
L_pReady_checkDist 	 	 = 0;

FNC_LMB = {
    if ( !(player getVariable("ph_bCheck1"))) exitWith { (findDisplay 46) displayRemoveEventHandler ["MouseButtonDown", KeyDown]; };    

    if ( !(player getVariable"g_RMB") ) then {
        player setVariable["g_RMB_Cnt", 0];
    } else {
        player setVariable["g_RMB_Cnt", 1];
    };
    
    if ( (_this select 1 == (player getVariable "g_RMB_Cnt")) && {L_pReady_reloadDone}) then {
		if (!(player getVariable ["ph_wallAhead", false])) then {
			[[ player,"ph_empty_ready"],"playActionNow"] call BIS_fnc_MP;
			player setVariable ["ph_bCheck1", false];
			player setVariable ["ph_manual", false];
		} else {
			player setVariable["ph_manual", false];
		};
	};
};




[
    localize "STR_READY_CBA_INFO",
    "Checkbox",
    localize "STR_READY_CBA_RBM",
    localize "STR_READY_CBA_OPTION",
    [false],
    nil,
    {  
        params ["_value"];
        player setVariable["g_RMB", _value];
    }
] call CBA_Settings_fnc_init;

[
    localize "STR_READY_CBA_INFOAUTO",
    "Checkbox",
    localize "STR_READY_CBA_ENABLEAUTO",
    localize "STR_READY_CBA_OPTION",
    true,
    nil,
    {  
        params ["_value"];
        L_pReady_enabled = _value;
        if (!_value) then {
            player setVariable ["ph_wallAhead",false];
        };
    }
] call CBA_Settings_fnc_init;

[
    localize "STR_READY_CBA_INFOANIM",
    "List",
    localize "STR_READY_CBA_INFOANIM",
    localize "STR_READY_CBA_OPTION",
    [[0,1,2,3], ["Context-sensitive","Random","Weapon high","Weapon low"], 0],
    nil,
    {  
        params ["_value"];
        if (_value == 0) then {
            L_pReady_animArray = [];
        };
        if (_value == 1) then {
            L_pReady_animArray = ["ph_high_ready","ph_low_ready"];
        };
        if (_value == 2) then {
            L_pReady_animArray = ["ph_high_ready"];
        };
        if (_value == 3) then {
            L_pReady_animArray = ["ph_low_ready"];
        };
    }
] call CBA_Settings_fnc_init;

[
    localize "STR_READY_CBA_INFOLOOKAHEAD",
    "Editbox",
    [localize "STR_READY_CBA_INFOLOOKAHEAD","STR_READY_CBA_TOOLTIPLOOKAHEAD"],
    localize "STR_READY_CBA_OPTION",
    "0.2",
    nil,
    {  
        params [["_value",0.18,["Number"]]];
        L_pReady_lookAhead = parseNumber _value;
    }
] call CBA_Settings_fnc_init;

["Tactical Position Ready", "PH_TACREADY_HIGH", [localize "STR_READY_HIGH", "Change Ready"], { }, { ["ph_high_ready"] spawn PH_INIT_fnc_PH_switchGesture; }, [20, [false, false, false]]] call cba_fnc_addKeybind;
["Tactical Position Ready", "PH_TACREADY_LOW", [localize "STR_READY_LOW", "Change Ready"], { }, { ["ph_low_ready"] spawn PH_INIT_fnc_PH_switchGesture; }, [20, [true, false, false]]] call cba_fnc_addKeybind;



player addEventHandler ["Reloaded", { 
		params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"]; 
		L_pReady_reloadDone = true;
		player setVariable["ph_bCheck1", false];
	}
];

player addEventHandler ["Respawn", { 
		params ["_unit", "_corpse"];
		
		player setVariable["ph_bCheck1", false];
	}
];

player addEventHandler ["GetInMan", { 
	params [
		"_vehicle",
		"_role",
		"_unit",
		"_turret"
	]; 
	player playActionNow "ph_empty_ready"; 
	player setVariable["ph_bCheck1", false];
	player setVariable["ph_manual", false];
}];

if ( { (["ace_", _x] call BIS_fnc_inString)  } forEach activatedAddons ) then {
    _condition = {
        !(player getVariable "ph_bCheck1") && (stance player != "UNDEFINED") && (stance player != "PRONE") && (primaryWeapon player != "")
		&& (vehicle player == player) && (currentWeapon player == primaryWeapon player)
    };
    _statement = {
        ["ph_high_ready"] spawn PH_INIT_fnc_PH_switchGesture;
    };
    _action = ["Open RDF", localize "STR_READY_HIGH_ACE","",_statement,_condition] call ace_interact_menu_fnc_createAction;
    [(typeOf player), 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;

    _condition = {
        !(player getVariable "ph_bCheck1") && (stance player != "UNDEFINED") && (stance player != "PRONE") && (primaryWeapon player != "")
        && (vehicle player == player) && (currentWeapon player == primaryWeapon player)
    };
    _statement = {
        ["ph_low_ready"] spawn PH_INIT_fnc_PH_switchGesture;
    };
    _action = ["Open RDF", localize "STR_READY_LOW_ACE","",_statement,_condition] call ace_interact_menu_fnc_createAction;
    [(typeOf player), 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;

    _condition = {
        (player getVariable "ph_bCheck1") && (stance player != "UNDEFINED") && (stance player != "PRONE") && (vehicle player == player) &&
         (currentWeapon player == primaryWeapon player)
    };
    _statement = {
		if (L_pReady_reloadDone && !(player getVariable ["ph_wallAhead", false])) then {
			[[ player,"ph_empty_ready"],"playActionNow"] call BIS_fnc_MP;
			player setVariable["ph_bCheck1", false];
			player setVariable["ph_manual", false];
		} else {
			player setVariable["ph_manual", false];
		};
    };
    _action = ["Open RDF",localize "STR_READY_NONE_ACE","",_statement,_condition] call ace_interact_menu_fnc_createAction;
    [(typeOf player), 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToClass;
};


[{
	call PH_INIT_fnc_PH_wallAvoidance;
}, 0] call CBA_fnc_addPerFrameHandler;

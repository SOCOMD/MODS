enableSentences false;
enableRadio false;

[true, true] call acre_api_fnc_setupMission;
tf_no_auto_long_range_radio = true; // disables TFR default radio assignment

[]spawn {
	while {true} do {{
		deleteGroup _x
	}forEach allGroups;
	//diag_log "Groupcleanup script run..";
	sleep 61;
	};
}; // Fix Zeus group bug (will remove deleted groups so more can be added)

/*if ( isPlayer ) then { 
{
	if(typename(profileNamespace getVariable [_x,0]) == typename "") then {
		profileNamespace setVariable [_x,0.4];
		
	};
} forEach ['igui_bcg_rgb_a','igui_bcg_rgb_r','igui_bcg_rgb_g','igui_bcg_rgb_b','IGUI_grid_mission_X','IGUI_grid_mission_Y','IGUI_grid_mission_W','IGUI_grid_mission_H'];
}; // Exploit fix*/

["unit", {
    //current unit changed (Curator took control of unit)

    if (player != (_this select 0)) then {
        player setVariable ["TFAR_controlledUnit",(_this select 0), true];//This tells other players that our position is different
    } else {
        player setVariable ["TFAR_controlledUnit",nil, true];
    };

    TFAR_currentUnit = (_this select 0);
//    };

},true] call CBA_fnc_addPlayerEventHandler;
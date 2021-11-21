/* =================================================/
*    Author: Patch
*    Tweaking: LAxemann
*
*    Desc: 
*   Executes the gesture switch after pressing the mod'S specified button(s)
*
*    Params:
*    0 - Gesture name
*
*    Returns:
*    Nothing
*   
* =================================================*/

if (L_pReady_reloadDone) then {
    params ["_gesture"];
    private _pWpnCur         = currentWeapon player;
    private _pWpnPrimary     = primaryWeapon player;
    private _pWpnHandgun     = handgunWeapon player;

    if ((vehicle player == player) && !(_pWpnCur == "") && !(stance player == "PRONE") && !(stance player == "UNDEFINED")) then {
        if ( _pWpnCur == _pWpnPrimary ) then {
            if ( !(player getVariable("ph_bCheck1"))) then {
                [[ player,_gesture],"playActionNow"] call BIS_fnc_MP;
                player setVariable["ph_bCheck1", true];
                player setVariable["ph_manual", true];
            } else {
                if (!(player getVariable ["ph_wallAhead",false])) then {
                    [[ player,"ph_empty_ready"],"playActionNow"] call BIS_fnc_MP;
                    player setVariable["ph_bCheck1", false];
                    player setVariable["ph_manual", false];
                } else {
                    player setVariable["ph_manual", false];
                };
            };
        };
    };

    KeyDown = (findDisplay 46) displayAddEventHandler ["MouseButtonDown", {
        _this call FNC_LMB;
    }];

    while { true } do {
        if ( (stance player == "UNDEFINED") || (stance player == "PRONE") ||
             (currentWeapon player != primaryWeapon player)) exitWith
        {
            [[ player,"ph_empty_ready"],"playActionNow"] call BIS_fnc_MP;
            player setVariable["ph_bCheck1", false];
            player setVariable["ph_manual", false];
        };
        sleep 0.1;
    };
};

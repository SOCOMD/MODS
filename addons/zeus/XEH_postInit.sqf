#include "script_component.hpp"

if (!hasinterface) exitwith {};
[{
    if (typeOf ACE_player == "SOCOMD_Homestead") then {
        [{
            systemChat "You have the power";
            ace_zeus_zeus = objNull;
            ["ace_zeus_createZeus", ACE_player] call CBA_fnc_serverEvent;
        },[], 2] call CBA_fnc_waitAndExecute;
    };
}] call cba_fnc_execNextFrame;

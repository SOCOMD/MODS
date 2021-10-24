#include "script_component.hpp"


["loadout", {
    if(GVAR(randomUniformWear) > 0) then {
        params ["_player", "_new"];
        [_player, _new] call FUNC(randomizeAMCU);
    };
}, false] call CBA_fnc_addplayerEventHandler;
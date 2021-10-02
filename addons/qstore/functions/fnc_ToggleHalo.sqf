#include "script_component.hpp"
params ["_player"];
if ((backpack _player)  == "SOCOMD_COS_PARACHUTE") then {
    
    _player LinkItem "ItemWatch";
    removeBackpack _player;
    _player call grad_boc_fnc_actionOnBack;
}  else {
    
    _player LinkItem "ACE_Altimeter";
    if ((_player call grad_boc_fnc_chestpack) == "SOCOMD_COS_PARACHUTE") then {
        _player call grad_boc_fnc_removeChestpack;
    } else {
        if( (backpack _player)  == "") then {
            _player addBackpack "SOCOMD_COS_PARACHUTE";
        } else {
            // is faster than swapping bag to chest and adding
            [_player,"SOCOMD_COS_PARACHUTE"] call grad_boc_fnc_addChestpack;
            [_player] call grad_boc_fnc_actionSwap;
            _player action ["SwitchWeapon", _player, _player, 100];
        };
    };
};

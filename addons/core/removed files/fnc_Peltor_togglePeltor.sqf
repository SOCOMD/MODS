#include "script_component.hpp"
params ["_direction"];
_newModifier = 1;
if (_direction) then {
    // being turned on, will have  active noise cancelling
    _newModifier = 1;
    ACE_player setVariable ["hasPeltorsOn", 1];
} else {
    //  being turned off. acting like normal ear muffs
    _newModifier = SOCOMD_peltors_strength;
    ACE_player setVariable ["hasPeltorsOn", 0];
};
[_newModifier] call FUNC(Peltor_setVolume);
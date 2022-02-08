#include "script_component.hpp"
params ["_player"];

_player getVariable ["SOCOMD_stashedGear",  (getUnitLoadout _player)]
#include "script_component.hpp"
_whitelist = [
    "USP_L3_pvs31_A2",
    "USP_L3_pvs31_B",
    "USP_L3_pvs31_C",
    "A3_GPNVG18_BLK_F"
];

_args = _this;
_player = _args select 0;
_nvg = _args select 1;

_allowed = false;

_unitLoadout = getUnitLoadout _player;
_equipment = _unitLoadout select 9;
_equipmentNVG = _equipment select 5;

if(_equipmentNVG == "") exitWith {
    _allowed
};

if(_equipmentNVG == _nvg) exitWith {
    _allowed
};

if(!(_equipmentNVG in _whitelist)) exitWith {
    _allowed
};

_allowed = true;
_allowed
_whitelist = [
    "SOCOMD_NVG",
    "SOCOMD_NVG_GR",
    "SOCOMD_NVG_GPNVG_WP_black",
    "SOCOMD_NVG_GPNVG_GR_black"
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
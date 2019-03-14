_args = _this;
_class = _this select 0;
_mrt_checked = _this select 1;
_blacklisted = 0;

if(!hasInterface) exitWith {_blacklisted};

if(_class in _mrt_checked) exitWith {_blacklisted};

_mrt_checked = _mrt_checked + [_class];

if(!(_class isKindOf ["ItemCore", configFile >> "CfgWeapons"])) exitWith {_blacklisted};

_config = (configFile >> "CfgWeapons" >> _class);
if(isNull _config) exitWith {_blacklisted};

_opticModes = (_config >> "ItemInfo" >> "OpticsModes");
if(isNull _opticModes) exitWith {_blacklisted};

_minZoom = 1;
for "_i" from 0 to (count _opticModes) - 1 do {
    _opticMode = _opticModes select _i;

    _opticsZoomMin = getNumber(_opticMode >> "opticsZoomMin");
    if(_opticsZoomMin < _minZoom) then {
        _minZoom = _opticsZoomMin;
    };
};

_scopeFOV = [player] call SOCOMD_fnc_GetLoadoutScopeFOV;
if(_minZoom < _scopeFOV) then {
    _blacklisted = 1;
};

if(_blacklisted <= 0) then {
    _nextScope = getText(_config >> "MRT_SwitchItemNextClass");
    if(_nextScope == "") exitWith {_blacklisted};

    _nextScopeBlackListed = [_nextScope, _mrt_checked] call SOCOMD_fnc_ASORGS_CheckScopeFOV;
    if(_nextScopeBlackListed > 0) then {
        _blacklisted = 1;
    };
};

_blacklisted;
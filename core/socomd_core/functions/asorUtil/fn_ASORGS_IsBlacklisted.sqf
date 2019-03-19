_args = _this;
_class = _this select 0;
_blacklisted = 0;

if(!hasInterface) exitWith {_blacklisted;};

_scopeFOVBlacklisted = [_class, []] call SOCOMD_fnc_ASORGS_CheckScopeFOV;
if(_scopeFOVBlacklisted > 0) then {
    _blacklisted = 1;
};

_scopeWhitelist = [_class] call SOCOMD_fnc_ASORGS_GetOpticsWhitelist;
if(count _scopeWhitelist > 0) then {
    if(!(_class in _scopeWhitelist)) then {
        _blacklisted = 1;
    }; 
};

_blacklisted;
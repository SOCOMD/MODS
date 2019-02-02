_args = _this;
_class = _this select 0;
_blacklisted = 0;

if(!hasInterface) exitWith {_blacklisted};

_scopeBlacklisted = [_class, []] call SOCOMD_fnc_ASORGSCheckScope;
if(_scopeBlacklisted > 0) then {
    _blacklisted = 1;
};

_blacklisted;
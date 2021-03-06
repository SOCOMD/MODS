// Internal check to see if current headgear is compatible 

params["_headgear"];
_return = 0;

if (!hasInterface) exitWith {};


_isAllowed = getNumber (configFile >> "CfgWeapons" >> _headgear >> "rgoc_canAcceptNVG");
switch (_isAllowed)do {
    case 1 : {_return = 1};
    case 0 : {_return = 0};
	default { _return = 1};
};
if(_headgear == "" && rgoc_allowNoHelmet) then {
    _return = 0;
};
_wl = rgoc_whitelist;
_wl splitString ",";
if (_headgear in _wl) then {
    _return = 1;
};
_bl = rgoc_blacklist;
_bl splitString ",";
if (_headgear in _bl) then {
    _return = 0;
};
_return
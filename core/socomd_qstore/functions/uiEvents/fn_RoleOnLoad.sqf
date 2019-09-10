systemChat "Initialised Roles";

params["_ctrl", "_config"];

_loadouts = (configFile >> "CfgLoadouts" >> "SOCOMD");

_idx = 0;

for "_i" from 0 to (count _loadouts) - 1 do {
    _loadout = _loadouts select _i;
	_displayName = getText (_loadout >> "displayName");
	if(_displayName != "") then {
		_loadoutId = configName _loadout;
		_displayIcon = getText (_loadout >> "displayIcon");
		
		_ctrl lbAdd _displayName;
		_ctrl lbSetText [_idx, _displayIcon];
		_ctrl lbSetData [_idx, _loadoutId];
		_idx = _idx + 1;
	};
};

//Deselect All Roles
_ctrl lbSetCurSel -1;
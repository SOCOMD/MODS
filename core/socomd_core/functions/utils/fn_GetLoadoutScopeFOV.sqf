_fov = 0.0;

_args = _this;
_player = _args select 0;
if(!(isPlayer _player)) exitWith {_fov};

_loadoutId = _player getVariable ["SOCOMD_LOADOUTID", ""];
if(_loadoutId == "") exitWith {_fov};

_unitConfig = (missionConfigFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);
if(isNull _unitConfig) then {
    _unitConfig = (configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);
};

if(isNull _unitConfig) exitWith {_fov};

_maxOptic = getText(_unitConfig >> "maxOptic");
if(_maxOptic == "") exitWith {_fov};

switch(_maxOptic) do {
    case "1x": { _fov = 0.3 };
    case "2x": { _fov = 0.2 };
    case "3x": { _fov = 0.15 };
    case "4x": { _fov = 0.125 };
    case "5x": { _fov = 0.07 };
    case "6x": { _fov = 0.060 };
};

_fov;
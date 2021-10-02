#include "script_component.hpp"
_fov = 0.0;

_args = _this;
_player = _args select 0;

if(!(isPlayer _player)) exitWith {_fov};

_maxOptic = [player] call FUNC(GetLoadoutMaxOptic);
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

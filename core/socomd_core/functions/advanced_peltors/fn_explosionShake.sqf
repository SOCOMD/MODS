
#include "\z\ace\addons\main\script_macros.hpp"
params ["_strength"];
_shakeAmount = _strength * 4000;
_duration = _strength *110;
hint format ["strength: %1",_strength];
addCamShake [_shakeAmount, _duration, 25];
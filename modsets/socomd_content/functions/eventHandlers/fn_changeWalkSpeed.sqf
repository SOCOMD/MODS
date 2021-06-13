params ["","","","","","","_keypress"];
_reset = _keypress find "reset";
_increase = _keypress find "increase";
_decrease = _keypress find "decrease";
_setMax = _keypress find "setMax";
_setMin = _keypress find "setMin";
_animspeed = player getVariable ["socomd_anim_speed_coef",1];
if ( _reset != -1 ) then {
	_animspeed = 1;
};
if ( _increase != -1 && _animspeed < 1.7 ) then {
	_animspeed = _animspeed + 0.1;
};
if ( _decrease != -1 && _animspeed > 0.3 ) then {
	_animspeed = _animspeed - 0.1;
};
if ( _setMax != -1 ) then {
	_animspeed = 0.3;
};
if ( _setMin != -1 ) then {
	_animspeed = 0.3;
};

systemChat format ["Current speed: %1", _animspeed];
player setVariable ["socomd_anim_speed_coef",_animspeed];
player setUnitTrait ["audibleCoef",_animspeed];
_anim = animationState player;
[player, _anim] call SOCOMD_fnc_animSpeedSet;
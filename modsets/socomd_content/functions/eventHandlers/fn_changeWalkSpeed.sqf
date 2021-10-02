params ["","","","","","","_keypress"];
_unit = player;
if (isNull objectParent _unit ) then {
	_reset = _keypress find "reset";
	_increase = _keypress find "increase";
	_decrease = _keypress find "decrease";
	_setMax = _keypress find "setMax";
	_setMin = _keypress find "setMin";
	_animspeed = _unit getVariable ["socomd_anim_speed_coef",1];
	if ( _reset != -1 ) then {
		_animspeed = 1;
	};
	if ( _increase != -1 && _animspeed < 1.5 ) then {
		_animspeed = _animspeed + 0.1;
	};
	if ( _decrease != -1 && _animspeed > 0.5 ) then {
		_animspeed = _animspeed - 0.1;
	};
	if ( _setMax != -1 ) then {
		_animspeed = 0.3;
	};
	if ( _setMin != -1 ) then {
		_animspeed = 0.3;
	};

	_message = format ["Current speed: %1", _animspeed];
	[_message, false, 5, 2] call ace_common_fnc_displayText;
	_unit setVariable ["socomd_anim_speed_coef",_animspeed,true];
	_unit setUnitTrait ["audibleCoef",_animspeed];
	_anim = animationState _unit;
	[_unit, _anim] call SOCOMD_fnc_animSpeedSet;
};
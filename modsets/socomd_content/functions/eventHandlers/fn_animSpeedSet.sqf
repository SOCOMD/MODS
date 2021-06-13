/*
BASE = AmovPercM*
RUN = AmovPercMrun*
SPRINT = AmovPercMeva*
*/
params ["_unit","_anim"];

_speed = 1.0;
_weight = 0.0;
_minSpeed = 0.85;
_maxSpeed = 1.15;
// Weight is 330 for 15kg (its in lb's)
// 27.5kg is normal speed (600 lb)
_minLoad = 300;
_maxLoad = 1000;
_animspeed = _unit getVariable ["socomd_anim_speed_coef",1];

_walking = _anim find "wlk";
_lowered_rifle = _anim find "lowwrfldf";
_unarmed = _anim find "nonwnondf";
_running = _anim find "amovpercmrun";
if (_running == -1) then {
	_weight = loadAbs _unit;
	_speed =  linearConversion[_maxLoad,_minLoad,_weight,_minSpeed,_maxSpeed,true]; 
	if (!isNil "ace_advanced_fatigue_setAnimExclusions") then {
			ace_advanced_fatigue_setAnimExclusions pushBack _anim;
	};
	if( _walking != -1 ) then {
		_speed = _speed * _animspeed;
		if( _unarmed != -1 ) then {
			_speed = _speed * 0.9;
		};
	};
};
_unit setAnimSpeedCoef _speed;
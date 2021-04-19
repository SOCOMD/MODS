params ["_unit", "_active"];

_counter = _unit getVariable ["SOCOMD_REVIVAL",SOCOMD_medical_persistantReviveTimer];
_timer = _unit getVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", ace_medical_statemachine_cardiacArrestTime];
if(_counter < _timer && _active == true) then {
	_unit setVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", _counter];		
};
if(_active == true) then {
	_unit setVariable["SOCOMD_revival_last_updated",CBA_missionTime];		
};
if(_active == false) then {
	_lastUpdate = _unit getVariable["SOCOMD_revival_last_updated",CBA_missionTime];
	_timeRemoved = CBA_missionTime - _lastUpdate;
	_timeLeft = _counter - _timeRemoved;
	_unit setVariable ["SOCOMD_REVIVAL",_timeLeft];
	_unit setVariable["SOCOMD_revival_last_updated",CBA_missionTime];
};
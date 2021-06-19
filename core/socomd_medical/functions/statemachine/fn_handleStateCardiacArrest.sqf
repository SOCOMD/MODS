params ["_unit"];

// If the unit died the loop is finished
if (!alive _unit) exitWith {};
if (!local _unit) exitWith {};

[_unit] call ace_medical_vitals_fnc_handleUnitVitals;

private _timeDiff = CBA_missionTime - (_unit getVariable ["ace_medical_statemachine_cardiacArrestTimeLastUpdate", 0]);
if (_timeDiff >= 1) then {
    _timeDiff = _timeDiff min 10;
    _totalTimeDiff = _timeDiff min 10;
    _unit setVariable ["SOCOMD_revival_last_updated", CBA_missionTime];
    _unit setVariable ["ace_medical_statemachine_cardiacArrestTimeLastUpdate", CBA_missionTime];
    private _recieveingCPR = alive (_unit getVariable ["ace_medical_CPR_provider", objNull]);
    private _timeLeft = _unit getVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", -1];
    private _totalTimeLeft = _unit getVariable ["SOCOMD_REVIVAL", SOCOMD_medical_persistantReviveTimer];
	if(SOCOMD_medical_persistantRevive) then {
		if ((_totalTimeLeft - 2) < _timeLeft) then {_timeLeft = _totalTimeLeft}; // check if 2 less than total timer is less than the remaining time, done like this to prevent constant setting
	};
    if (_recieveingCPR) then { _timeDiff = _timeDiff * 0.01; _totalTimeDiff = _totalTimeDiff * 0.5;}; // if being cpr'ed, then time decrease is reduced
    _timeLeft = _timeLeft - _timeDiff; // negative values are fine
    _totalTimeLeft = _totalTimeLeft - _totalTimeDiff; // negative values are fine
    if(isPlayer _unit) then {
	    _message = format ["%1",_timeLeft];
	    [_message, false, 5, 3] call ace_common_fnc_displayText;
    };
    _unit setVariable ["ace_medical_statemachine_cardiacArrestTimeLeft", _timeLeft];
    _unit setVariable ["SOCOMD_REVIVAL", _totalTimeLeft, true];
};
#define BASE_FAILURE_CHANCE 0.02
#define SMALL_FAILURE_CHANCE_CHANGE 0.005
#define NORMAL_FAILURE_CHANCE_CHANGE 0.01

params ["", "_target", "", ""];

_target setVariable ["ace_medical_heartRate", 0];

[{
    private _target = _this select 1;
    if (!alive _target) exitWith {};

    private _gotAdenosine = _target getVariable ["ace_medical_adenosine_insystem",0];
    if (_gotAdenosine > 1) exitWith {};

    private _failureChance = BASE_FAILURE_CHANCE;

    // Check unit blood pressure
    private _bloodPressureFailureChance = 0;
    private _bloodPressure = [_target] call ace_medical_fnc_getBloodPressure;
    // _bloodPressureHigh is first pressure number, eg. 120/80 it is 120.
    _bloodPressure params ["_bloodPressureLow", "_bloodPressureHigh"];
    if (_bloodPressureHigh > 130) then {
        _bloodPressureFailureChance = (_bloodPressureHigh - 130) * SMALL_FAILURE_CHANCE_CHANGE;
    };
    if (_bloodPressureHigh < 90) then {
        if (_bloodPressureHigh < 50) then {
            _bloodPressureFailureChance = (120 - _bloodPressureHigh) * NORMAL_FAILURE_CHANCE_CHANGE
        } else {
            _bloodPressureFailureChance = (120 - _bloodPressureHigh) * SMALL_FAILURE_CHANCE_CHANGE
        };
    };

    // Check unit pain
    private _pain = _target getVariable ["ace_medical_painSuppress", 0];
    private _painFailureChance = _pain * SMALL_FAILURE_CHANCE_CHANGE;

    // Check unit bleeding
    private _bleeding = [_target] call ace_medical_fnc_getBloodLoss;
    private _bleedingFailureChance = _bleeding * NORMAL_FAILURE_CHANCE_CHANGE;

    // Calculate final failure chance
    _failureChance = selectMin [(_failureChance + _bloodPressureFailureChance + _painFailureChance + _bleedingFailureChance), 0.5];

    if (random(1) > _failureChance) then {_target setVariable ["ace_medical_heartRate", 70];};
}, _this, random[8,10,13]] call CBA_fnc_waitAndExecute;
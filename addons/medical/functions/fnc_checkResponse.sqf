#include "script_component.hpp"

params ["_medic", "_patient"];

_output = "Unit is deceased";
if(alive _patient) then {
    _totalTimeLeft = _patient getVariable ["SOCOMD_REVIVAL", SOCOMD_medical_persistantReviveTimer];
    _condition = _totalTimeLeft/SOCOMD_medical_persistantReviveTimer;
    _output = "Unit is in critical condition";
    if(_condition > 0.1) then {
        _output = "Unit appears very injured";
    };
    if(_condition > 0.3333) then {
        _output = "Unit appears moderately injured";
    };
    if(_condition > 0.667) then {
        _output = "Unit appears healthy";
    };
};
[[_output, _patient call ace_common_fnc_getName], 2] call ace_common_fnc_displayTextStructured;

[_patient, "quick_view", _output, [[_patient, false, true] call ace_common_fnc_getName]] call ace_medical_treatment_fnc_addToLog;

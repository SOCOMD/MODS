#include "script_component.hpp"
// Naloxone effect
// removes all amphetamine effects from a patient

params ["_patient", "_bodyPart", "_classname"];

// Medication has no effects on dead units
if (!alive _patient) exitWith {};
if (!local _patient) exitWith {};
_adjustments = _patient getVariable ["ACE_medical_medications",[]]; 
if (_adjustments isNotEqualTo []) then { 
     private _changedMedication = ["",0]; 
     private _changedMedicationIndex = 0; 
     private _fullStrength = 0; 
     private _halfStrength = 0; 
     private _quaterStrength = 0; 
     private _nillStrength = 0; 
    {  
        _x params ["_medication", "_timeAdded", "_timeTillMaxEffect", "_maxTimeInSystem", "_hrAdjust", "_painAdjust", "_flowAdjust"];  
        if(_medication == "SOCOMD_Apap") then {
            if(_timeAdded > (_changedMedication#1)) then {
                _changedMedication = _x;  
                _changedMedicationIndex = _forEachIndex;
            };
            _fullStrength = _fullStrength + 1;
        };
        if(_medication == "SOCOMD_Apap_half") then {
            _halfStrength = _halfStrength + 1;
        };
        if(_medication == "SOCOMD_Apap_nil") then {
            _nillStrength = _nillStrength + 1;
        };
    } forEach _adjustments;  
    switch (true) do {
        case (_nillStrength > 1):{
            _changedMedication set [0, "SOCOMD_Apap_nil"];
            _changedMedication set [5, 0];
            _adjustments set [_changedMedicationIndex, _changedMedication]; 
        };
        case (_halfStrength > 1):{
            _changedMedication set [0, "SOCOMD_Apap_nil"];
            _changedMedication set [5, 0];
            _adjustments set [_changedMedicationIndex, _changedMedication];             
        };
        case (_fullStrength > 2):{
            _changedMedication set [0, "SOCOMD_Apap_half"];
            _changedMedication set [5, 0.1];
            _adjustments set [_changedMedicationIndex, _changedMedication]; 
        };
    };
    [_patient] call ace_medical_vitals_fnc_handleUnitVitals; 
};
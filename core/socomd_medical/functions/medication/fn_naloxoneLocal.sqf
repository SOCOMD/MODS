// Naloxone effect
// removes all amphetamine effects from a patient

params ["_patient", "_bodyPart", "_classname"];

// Medication has no effects on dead units
if (!alive _patient) exitWith {};
if (!local _patient) exitWith {};
_adjustments = _patient getVariable ["ACE_medical_medications",[]];
if (_adjustments isNotEqualTo []) then {
	private _deleted = false;
    { 
        _x params ["_medication", "_timeAdded", "_timeTillMaxEffect", "_maxTimeInSystem", "_hrAdjust", "_painAdjust", "_flowAdjust"]; 
		if(_medication == "Fentanyl" || _medication == "Morphine" || _medication == "SOCOMD_Morphine") then {
			_deleted = true; 
			_adjustments set [_forEachIndex, objNull];
		};        
    } forEach _adjustments; 
	if (_deleted) then { 
        _unit setVariable ["ACE_medical_medications", _adjustments - [objNull], true]; 
        _syncValues = true; 
    };
};

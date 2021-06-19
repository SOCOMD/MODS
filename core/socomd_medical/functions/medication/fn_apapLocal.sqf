// Paracetamol effect
// Treatment's effectiveness goes down with usage

params ["_patient", "_bodyPart", "_classname"];

// Medication has no effects on dead units
if (!alive _patient) exitWith {};
if (!local _patient) exitWith {};
_adjustments = _patient getVariable ["ACE_medical_medications",[]]; 
if (_adjustments isNotEqualTo []) then { 
	//  index for full strength medication to replace
 	private _replaceIndex = -1;
	private _isSet = false
	private _updatedMedicine = [];
	//  counter for medication strength
 	private _full = 0; 
 	private _half = 0; 
 	private _quarter = 0; 
 	private _nil = 0; 
    {  
        _x params ["_medication", "_timeAdded", "_timeTillMaxEffect", "_maxTimeInSystem", "_hrAdjust", "_painAdjust", "_flowAdjust"];  
		if(_medication == "paracetamol_nil" || _quarter > 3) then {
			_nil = _nil + 1;
			_updatedMedicine = ["paracetamol_nil", _timeAdded, _timeTillMaxEffect, _maxTimeInSystem, _hrAdjust, 0, _flowAdjust];
			_isSet = true;
		};         
		if(_medication == "paracetamol_quarter") then {
			_quarter = _quarter + 1;
			if(!_isSet) then {
				_updatedMedicine = ["paracetamol_nil", _timeAdded, _timeTillMaxEffect, _maxTimeInSystem, _hrAdjust, 0, _flowAdjust];
			}
		};         
		if(_medication == "paracetamol_half") then {
			_half = _half + 1;
		};         
		if(_medication == "paracetamol") then {
			_replaceIndex = _forEachIndex;
			_full = _full + 1;
		};         
    } forEach _adjustments;  
 	if (_nil > 0)  exitWith {
		_adjustments set [_forEachIndex, objNull]; 
        [_patient] call ace_medical_vitals_fnc_handleUnitVitals; 
    }; 
};
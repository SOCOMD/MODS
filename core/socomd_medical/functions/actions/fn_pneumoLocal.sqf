

params ["_unit", "_bodyPart", "_damage", "_ammo", "_damageSelectionArray"];
if !(KAT_breathing_enable) exitWith {};
if !(_bodyPart isEqualTo "Body") exitWith {};
if !(_ammo isKindOF "BulletBase") exitWith {};
if (_damage < kat_medical_pneumothoraxDamageThreshold) exitWith {};
if (random 100 <= KAT_breathing_pneumothorax) then {
    // add breathing sound
    [_unit, 0.5] call ace_medical_status_fnc_adjustPainLevel;
    [_unit] call kat_breathing_fnc_handleBreathing;
    _unit setVariable ["KAT_medical_pneumothorax", true, true];

    private _hemo = _unit getVariable ["KAT_medical_heompneumothorax", false];
    private _tension = _unit getVariable ["KAT_medical_tensionpneumothorax", false];

    // Prevent the patient from getting both hemothorax and tension pneumothorax at the same time
    if (random 100 <= KAT_breathing_hemopneumothoraxChance && !(_hemo || _tension)) then {
        [_unit, 0.7] call ace_medical_status_fnc_adjustPainLevel;

        if (random 100 < 50) then {
            _unit setVariable ["KAT_medical_hemopneumothorax", true, true];
        } else {
            _unit setVariable ["KAT_medical_tensionpneumothorax", true, true];
        };
    };
};

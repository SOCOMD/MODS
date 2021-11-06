#include "script_component.hpp"
/*
 * Author: Monk
 * Ketamine Local function
 *
 */

params ["_patient", "_bodyPart", "_classname"];

// Medication has no effects on dead units
if (!alive _patient) exitWith {};
if (!local _patient) exitWith {};

if(isPlayer _patient) then {
    // _message = format ["Ketamine was given by %1",name _player];

    //Display message stating who has given the drug
    // hint _message;

    private _unconsciousTime = getNumber(configFile >> "ace_medical_treatment" >> "Medication" >> _classname >> "unconsciousTime");
    private _forcedUnconcious = getNumber(configFile >> "ace_medical_treatment" >> "Medication" >> _classname >> "forcedUnconcious");
    private _ketCount = 0;
    private _adjustments = _patient getVariable ["ACE_medical_medications",[]]; 
    if (_adjustments isNotEqualTo []) then { 
        private _deleted = false; 
        {  
            _x params ["_medication"];  
            if(_medication == "Ketamine_200mg" ) then {
                _ketCount = _ketCount + 10;  
            };         
            if(_medication == "Ketamine_6mg" ) then {
                _ketCount = _ketCount + 0.5;
            };         
        } forEach _adjustments;  
    };
    // //Set unconscious state for an amount of time
    _unconsciousTime = _unconsciousTime * _ketCount;
    _isRandom = ((random 10) < _ketCount);
    if(_forcedUnconcious == 1 || _isRandom) then {
        [_patient, true, _unconsciousTime] call ace_medical_fnc_setUnconscious;
    };
    


    //Play special effect 
    _aberEffect = ppEffectCreate ["chromAberration", 300];
    _radialEffect = ppEffectCreate ["radialBlur", 301];
    _ColorEffect = ppEffectCreate ["ColorInversion", 302];
    _WetEffect = ppEffectCreate ["WetDistortion", 299];
    _aberEffect ppEffectEnable true;  
    _radialEffect ppEffectEnable true;  
    _ColorEffect ppEffectEnable true;  
    _WetEffect ppEffectEnable true;  
    enableCamShake true;  
    _WetEffect ppEffectAdjust [1, 1, 1, 4.10, 3.70, 2.50, 1.85, 0.0035, 0.0025, 0.03, 0.00450, 0.1, 0.1, 0.1, 0.1];   
    _WetEffect ppEffectCommit 2; 
    for "_i" from 0 to (30 + _unconsciousTime) do {                          //PP Effects last for 30s after waking up
    [{  
        params ["_aberEffect","_radialEffect","_ColorEffect"];
        _rand1 = random [0, 0.2, 1];  
        _rand2 = random [0, 0.05, 0.2];  
        _rand3 = random [0, 2, 8];  
        _rand4 = random [0, 0.005, 0.02];  
        _rand5 = random [0, 0.005, 0.02]; 
        _ciR = random [0, 0.09, 0.25];
        _ciG = random [0, 0.09, 0.25];
        _ciB = random [0, 0.09, 0.25];
        _aberEffect ppEffectAdjust [0,_rand1,true];  //PP effect strength/values  
        _aberEffect ppEffectCommit 1;   
        _radialEffect ppEffectAdjust [_rand2,_rand3,_rand4,_rand5];   
        _radialEffect ppEffectCommit 1;
        _ColorEffect ppEffectAdjust [_ciR,_ciG,_ciB];
        _ColorEffect ppEffectCommit 1; 
    }, [_aberEffect,_radialEffect,_ColorEffect], _i] call CBA_fnc_waitAndExecute;  
    }; 
    [{  
        params ["_aberEffect","_radialEffect","_ColorEffect","_WetEffect"];
        _aberEffect ppEffectAdjust [0,0,true];        //Fade out effects  
        _aberEffect ppEffectCommit 10;  
        _ColorEffect ppEffectAdjust [0,0,0];
        _ColorEffect ppEffectCommit 10; 
        _radialEffect ppEffectAdjust [0,0,0,0];  
        _radialEffect ppEffectCommit 10; 
        _WetEffect ppEffectAdjust [
        0, // blur
        0, 0, //effect top/bottom
        4.10, 3.70, 2.50, 1.85, // effect speed
        0, 0, 0, 0, //effect amplitude
        0, 0, 0, 0];  // effect position
        _WetEffect ppEffectCommit 180; // calm down over 3 minutes
        
    }, [_aberEffect,_radialEffect,_ColorEffect,_WetEffect], (31 + _unconsciousTime)] call CBA_fnc_waitAndExecute;
    [{  
        params ["_aberEffect","_radialEffect","_ColorEffect"];
        _aberEffect ppEffectEnable false;
        _radialEffect ppEffectEnable false;
        _ColorEffect ppEffectEnable false;
        
    }, [_aberEffect,_radialEffect,_ColorEffect], (41 + _unconsciousTime)] call CBA_fnc_waitAndExecute;

    [{  
        params ["_WetEffect"];
        _WetEffect ppEffectEnable false;    
    }, [_WetEffect], (211 + _unconsciousTime)] call CBA_fnc_waitAndExecute;
};
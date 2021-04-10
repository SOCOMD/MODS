/*
 * Author: Monk
 * Ketamine Local function
 *
 */

params ["_patient", "_bodyPart", "_classname"];

// Medication has no effects on dead units
if (!alive _patient) exitWith {};

_message = format ["Ketamine was given by %1",name _player];

//Display message stating who has given the drug
hint _message;

_unconsciousTime = getNumber(configFile >> "ace_medical_treatment" >> "Medication" >> _classname >> "unconsciousTime");
//Set unconscious state for an amount of time
[_patient, true, _unconsciousTime] call ace_medical_fnc_setUnconscious;

//Play special effect 

"chromAberration" ppEffectEnable true;              //Enable PPeffect  
"radialBlur" ppEffectEnable true;                //Enable PPeffect  
"ColorInversion" ppEffectEnable true;
_handle = ppEffectCreate ["WetDistortion", 20];       //Enable PPeffect  
_handle ppEffectEnable true;  
enableCamShake true;  
_handle ppEffectAdjust [1, 1, 1, 4.10, 3.70, 2.50, 1.85, 0.0025, 0.0015, 0.02, 0.00350, 0.1, 0.1, 0.1, 0.1];   
_handle ppEffectCommit 2; 
for "_i" from 0 to 30 do {                          //PP Effects last for 30s  
 [{  
  _rand1 = random [0, 0.2, 1];  
  _rand2 = random [0, 0.05, 0.2];  
  _rand3 = random [0, 2, 8];  
  _rand4 = random [0, 0.005, 0.02];  
  _rand5 = random [0, 0.005, 0.02]; 
  _ciR = random [0, 0.1, 0.2];
  _ciG = random [0, 0.1, 0.2];
  _ciB = random [0, 0.1, 0.2];
  "ColorInversion" ppEffectAdjust [_ciR,_ciG,_ciB];
  "ColorInversion" ppEffectCommit 1; 
  "chromAberration" ppEffectAdjust [0,_rand1,true];  //PP effect strength/values  
  "chromAberration" ppEffectCommit 1;   
  "radialBlur" ppEffectAdjust [_rand2,_rand3,_rand4,_rand5];   
  "radialBlur" ppEffectCommit 1;
 }, [], _i] call CBA_fnc_waitAndExecute;  
}; 
[{  
  "chromAberration" ppEffectAdjust [0,0,true];        //Fade out effects  
  "chromAberration" ppEffectCommit 5;  
  "ColorInversion" ppEffectAdjust [0,0,0];
  "ColorInversion" ppEffectCommit 5; 
  "radialBlur" ppEffectAdjust [0,0,0,0];  
  "radialBlur" ppEffectCommit 5; 
  _handle = _this select 0;
   _handle ppEffectAdjust [0, 
   0, 0, 
   4.10, 3.70, 2.50, 1.85, 
   0, 0, 0, 0, 
   0, 0, 0, 0];  
   _handle ppEffectCommit 45;
 
}, [_handle], 31] call CBA_fnc_waitAndExecute;

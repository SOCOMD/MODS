params ["_medic", "_patient"];

_this call ace_medical_treatment_fnc_cprProgress

_soundOn = _medic getVariable ["SOCOMD_Medical_Var_DefibrillatorSoundOn", false];
if(_soundOn == true) exitWith {};

_medic setVariable ["SOCOMD_Medical_Var_DefibrillatorSoundOn", true];
_this spawn {
	params ["_medic", "_patient"];
	// 8 seconds treatment time
	playsound3D ["socomd_medical\data\standclear.wav", _medic, false, getPosASL _medic, 5, 1, 15]; // 1.2 seconds
	sleep 1.5;
	playsound3D ["socomd_medical\data\powerup.wav"), _medic, false, getPosASL _medic, 5, 1, 15]; // 7.6 seconds
	sleep 7.7; // 9.2 seconds
	playsound3D ["socomd_medical\data\bump.wav", _medic, false, getPosASL _medic, 5, 1, 15]; // 0.8 seconds
	sleep 1; // 10.2 seconds
	playsound3D ["socomd_medical\data\checkpulse.wav"), _medic, false, getPosASL _medic, 5, 1, 15]; // 1.1 seconds
	_medic setVariable ["SOCOMD_Medical_Var_DefibrillatorSoundOn", false];
};
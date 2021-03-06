// Maximum Safety
// ASTRA EAAD - AGL (1000'-1500')


private ["_unit","_aadR"];

_unit = _this select 0;
_aadR = 300 + random 150; // 300-450m  (984'-1476')





waitUntil { sleep 2; _unit distance VQI_HALO_JUMPCRAFT > 300; };
waitUntil { sleep 2; getPosVisual _unit select 2 < _aadR + 300 }; playSound "aad_beeping";
waitUntil { sleep 2; getPosVisual _unit select 2 < _aadR }; _unit action ["openParachute"];


//
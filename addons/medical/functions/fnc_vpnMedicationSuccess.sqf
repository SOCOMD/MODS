#include "script_component.hpp"
params ["_medic", "_patient"];

[_medic, _patient, ["SOCOMD_VPN"]] call ace_medical_treatment_fnc_useItem;
_this call ace_medical_treatment_fnc_medication;
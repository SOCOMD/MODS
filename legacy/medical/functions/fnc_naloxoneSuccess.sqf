#include "script_component.hpp"
params ["_medic", "_patient", "_bodyPart", "_classname", "", "_usedItem"];

_this call socomd_medical_fnc_vpnMedicationSuccess;
["SOCOMD_Medical_Event_naloxoneLocal", [_patient, _bodyPart, _classname], _patient] call CBA_fnc_targetEvent;

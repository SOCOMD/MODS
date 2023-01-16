// #include "script_component.hpp"
// _rack = _this select 0;
// _rackId = typeof _rack;

// _vehicle = [_rackId] call acre_sys_rack_fnc_getVehicleFromRack;
// _radioId = [_rackId] call acre_api_fnc_getMountedRackRadio;
// if (_radioId != "" && _radioId != "ACRE_PRC152") exitWith {};
// if(_vehicle == objNull) exitWith {};
// if(!(local _vehicle)) exitWith {};

// [{
//     params ["_vehicle"];
//    _vehicle getVariable ["acre_sys_rack_initialized", false]
// },{
//     params ["_vehicle", "_radioId"];
//     [_radioId, 1] call acre_api_fnc_setRadioChannel;
//     [_radioId, 0.7] call acre_sys_radio_fnc_setRadioVolume;
//     [_radioId, "setState", ["audioPath", "INTAUDIO"]] call acre_sys_data_fnc_dataEvent;
// },
// [_vehicle, _radioId]] call cba_fnc_waitUntilAndExecute;
#include "script_component.hpp"
private _caller = _this select 0;
private _onoff = _this select 1;
private _triggers = _this select 2;
private _Generators = param [3, []];
private _SourceGrid = param [4, false];
//Note for future mod overhauls; this includes non vanilla (CUP) classes.
private _types = ["Lamps_Base_F", "PowerLines_base_F","Land_PowerPoleWooden_F","Land_LampHarbour_F","Land_LampShabby_F","Land_PowerPoleWooden_L_F","Land_PowerPoleWooden_small_F","Land_LampDecor_F","Land_LampHalogen_F","Land_LampSolar_F","Land_LampStreet_small_F","Land_LampStreet_F","Land_LampAirport_F","Land_fs_roof_F"];

_caller setVariable ["POWER",_onoff];
if (_caller getVariable ["GRID_POWER","OFF"] == "AUTO" && ((typeOf _caller) find "SOCOMD_Module_PowerGenerator") != -1)    exitWith {};


{
    _trigger = _x;
    private _region = triggerArea _trigger;
    
    _distance = _region select 0;
    if (_distance < _region select 1) then {
        _distance = _region select 1;
    };
    _distance = _distance * 2;
    _lampList = [];
    {
        _lamps = (position _trigger) nearObjects [_x,_distance ];
        {
            if((position _x) inArea _trigger) then {
                _lampList pushBack _x;
            };
        } forEach _lamps;

    } forEach _types;
    {_x switchLight _onoff} forEach _lamplist;
} forEach _triggers;

// set generator logics power state
{
    _x setVariable ["GRID_POWER",_onoff];
}forEach _Generators;

if(_SourceGrid) then {
    ["GRID_CHANGE", []] call CBA_fnc_globalEvent;
}
#include "script_component.hpp"
params ["_veh"]; 
_newID = [{ 
    params ["_args","_pfhId"]; 
    _args params ["_veh"]; 

    _smoke = _veh getVariable ["busmashter_smoke",objNull];  
    _motor = _veh getHit "motor"; 
    if (_motor == 1 && isNull _smoke) then { 
        _smoke = "#particlesource" createVehicleLocal position _veh;
        _smoke setParticleClass "AirObjectDestructionSmoke";
        _smoke attachTo [_veh,[0,0,0.8]]; 
        _veh setVariable ["busmashter_smoke",_smoke]; 
    }; 
    if( _motor < 1.0 && ! isNull _smoke ) then {  
        deleteVehicle _smoke;  
    };  
}, 1, [_veh]] call CBA_fnc_addPerFrameHandler;
_veh addEventHandler ["Deleted", {   
    _target = (_this select 0);
    _pfhId = _target getVariable ["busmashter_pfh",_newID]; 
    _smoke = _target getVariable ["busmashter_smoke",objNull]; 
    _pfhId call CBA_fnc_removePerFrameHandler; 
    if ( ! isNull _smoke) then { 
        deleteVehicle _smoke;  
    }; 
}]; 
_veh setVariable ["busmashter_smoke",objNull]; 
_veh setVariable ["busmashter_pfh",_newID];
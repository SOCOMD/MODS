// #include "script_component.hpp"
// params ["_player","_mass","_container",["_replacing",true,[true]],["_clearing",false,[true]]];

// _massDelta = 0;
// _currentMass = _player getVariable ["SOCOMD_currentAddedWeight",0];

// if(_clearing) exitWith {
//     // clearing the current weight
//     [_player, _container, -_currentMass] call ace_movement_fnc_addLoadToUnitContainer;
// };

// if (_replacing) then {
//     _massDelta = _mass;
//     [_player, _container, -_currentMass] call ace_movement_fnc_addLoadToUnitContainer;
// } else {
//     _massDelta = _currentMass + _mass;
// };
// [_player, _container, _massDelta] call ace_movement_fnc_addLoadToUnitContainer;
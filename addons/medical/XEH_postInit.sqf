#include "script_component.hpp"

[QGVAR(Event_ketamineLocal), {_this call FUNC(ketamineLocal);}] call CBA_fnc_addEventHandler;
[QGVAR(Event_naloxoneLocal), {_this call FUNC(naloxoneLocal);}] call CBA_fnc_addEventHandler;

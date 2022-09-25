#include "script_component.hpp"

[QGVAR(Event_ketamineLocal), {_this call FUNC(ketamineLocal);}] call CBA_fnc_addEventHandler;
[QGVAR(Event_naloxoneLocal), {_this call FUNC(naloxoneLocal);}] call CBA_fnc_addEventHandler;
[QGVAR(Event_apapLocal), {_this call FUNC(apapLocal);}] call CBA_fnc_addEventHandler;

["kat_AED", "socomd_defib_AED"] call ace_common_fnc_registerItemReplacement;
["kat_chestSeal", "ACE_chestSeal"] call ace_common_fnc_registerItemReplacement;
["kat_larynx", "ACE_advancedAirway"] call ace_common_fnc_registerItemReplacement;
["kat_guedel", "ACE_basicAirway"] call ace_common_fnc_registerItemReplacement;
//Increase drag limit for ACE box draging (800 -> 10000)
missionNamespace setVariable ["ACE_maxWeightDrag", 10000];


// make the bushmaster not have thermal visible
["bma3_bushmaster_base_F", "InitPost", {(_this select 0) disableTIEquipment true;}, true, [], true] call CBA_fnc_addClassEventHandler;

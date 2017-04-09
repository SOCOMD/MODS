// teleport santa to spot and face north
fc1 SetPos getMarkerPos "sc1";
fc1 setdir 0;

[fc1, false] call ACE_captives_fnc_setSurrendered;
sleep 1;
fc1 setUnitPos "up";
Sleep 1;
"endall.sqf" remoteexec ["execvm", 0];
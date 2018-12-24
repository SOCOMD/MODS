if(!isServer) exitWith {};

//Call CommonInitLocal on all connected clients/JIP clients
[[], "SOCOMD_fnc_CommonInitLocal", true, true, true] call BIS_fnc_MP;
// Template: Operations Centre
// Ref. N.Door: -L/R, -B/F, -D/U
if (VQI_CORE_HINTS == 1) then { hint "OpsCenter.sqf"; };
sleep 1;


private ["_OpsCenterStart"];

_OpsCenterStart = [-1000,-1000,0];



 VQI_fnc_SetPitchBankYaw = { private ["_object","_rotations","_aroundX","_aroundY","_aroundZ","_dirX","_dirY","_dirZ","_upX","_upY","_upZ","_dir","_up","_dirXTemp","_upXTemp"]; 
 _object = _this select 0; _rotations = _this select 1; _aroundX = _rotations select 0; _aroundY = _rotations select 1; _aroundZ = (360 - (_rotations select 2)) - 360; 
 _dirX = 0; _dirY = 1; _dirZ = 0; _upX = 0; _upY = 0; _upZ = 1; if (_aroundX != 0) then { _dirY = cos _aroundX; _dirZ = sin _aroundX; _upY = -sin _aroundX; _upZ = cos _aroundX; }; 
 if (_aroundY != 0) then { _dirX = _dirZ * sin _aroundY; _dirZ = _dirZ * cos _aroundY; _upX = _upZ * sin _aroundY; _upZ = _upZ * cos _aroundY; }; 
 if (_aroundZ != 0) then { _dirXTemp = _dirX; _dirX = (_dirXTemp * cos _aroundZ) - (_dirY * sin _aroundZ); _dirY = (_dirY * cos _aroundZ) + (_dirXTemp * sin _aroundZ); _upXTemp = _upX; 
 _upX = (_upXTemp * cos _aroundZ) - (_upY * sin _aroundZ); _upY = (_upY * cos _aroundZ) + (_upXTemp * sin _aroundZ); }; _dir = [_dirX,_dirY,_dirZ]; _up = [_upX,_upY,_upZ]; 
 _object setVectorDirAndUp [_dir,_up]; };
 
 sleep 1;


if (isServer) then {
	//Ops Centre Building, aka "Black Site"
	OpsCenter = "Land_MilOffices_V1_F" createVehicle _OpsCenterStart;
	OpsCenter setPos [getPos OpsCenter select 0, getPos OpsCenter select 1, (getPos OpsCenter select 2) +10000];
	publicVariable "OpsCenter";
};


sleep 1;

//------------------------------------------------------
// move and set players
// 0 ,2.5, -3
waitUntil {sleep 1; !isNil "OpsCenter"};

player allowDamage false;
sleep 1;

player attachTo [OpsCenter,[0, 2.5, -3]];
sleep 1; detach player;

[] spawn {player switchMove "";};
sleep 1;

player setDir random 360;

// Holster Weapon
player action ["SwitchWeapon", player, player, 100];




sleep 1; // A.I. ///////////////////////////////////////////////
{ _x attachTo [player,[0,0,0.5]]; } forEach units group player;
sleep 1;
{ detach _x; } forEach units group player;
sleep 1;
{ _x switchMove ""; } forEach units group player;
sleep 1;
//{ doStop _x; } forEach units group player;
doStop (units player);
////////////////////////////////////////////////////////////////



sleep 1;
//--- Rooms -----------------------------------------------------------------------------------
if (isServer) then {
	execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\OpsMedical.sqf";
	sleep 1;
	execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\OpsBriefing.sqf";
	sleep 1;
	execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\OpsBackRoom.sqf";
	sleep 1;
	execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\OpsArmy\OpsArmy.sqf";
	sleep 1;
	execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\OpsNavy\OpsNavy.sqf";
	sleep 1;
	execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\OpsAirForce\OpsAirForce.sqf";
	sleep 1;
	execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\OpsMarines\OpsMarines.sqf";
	sleep 1;
	execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\BlackOps\BlackOps.sqf";
	sleep 1;
	execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\WeaponsRoom\WeaponsRoom.sqf";
};
	
sleep 1;
execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\vqi_core_opscenter_efx.sqf";

//----------------------------------------------------------------------------------------------


sleep 60;
player allowDamage true;








sleep 1;
if (VQI_CORE_HINTS == 1) then { hint "OpsCenter.sqf -END-"; };

/* =======================================================================================
NOTES:


*/
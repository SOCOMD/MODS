// Simulate Ack-Ack - Altitude Fuses
//
if (VQI_HINTS_HALO == 1) then { hint "ack_trigger.sqf"; };
sleep 1;


private ["_mapSize","_mapHalf","_mapCent","_agl","_posX","_posY","_posZ","_ACK","_ACKfired"];




_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];


_agl = getPosATLVisual player;		

if (_agl > 100) then {

	hint "FLAK!";

	AckAckMax = 250; 				
	_ACKfired = 5 + (random 10);	

	for "_i" from 1 to _ACKfired do {

		_posX = (random AckAckMax) - (random AckAckMax);
		_posY = (random AckAckMax) - (random AckAckMax);
		_posZ = (random AckAckMax) - (random AckAckMax);

		
		_ACK = "DemoCharge_Remote_Ammo_Scripted" createVehicle _mapCent;
		_ACK attachTo [(vehicle player),[_posX,_posY,_posZ]];  sleep 0.1;
		_ACK setDamage 1; sleep 0.1;
		
		{ addCamShake [5, 1, 25]; } remoteExec ["bis_fnc_call", 0]; // MP?
		
		
		sleep (random 3);
	};
};






sleep 1;
if (VQI_HINTS_HALO == 1) then { hint "ack_trigger -END-.sqf"; };
/////////////////////
/* NOTES:



*/
//
//


private ["_csP","_csF"];


_csP = 10 + random 35;
_csF = random 10;



addCamShake [_csP, 3, _csF];


playSound "aad_beeping";
deleteVehicle vehicle player;
sleep 0.5;

player addBackpack "ACE_ReserveParachute";
sleep 0.3;
player action ["openParachute"];






sleep 1; //remove reserve chute
player unassignItem "VQI_ReserveChute";
player removeItem "VQI_ReserveChute";









////////////////////
/* NOTES:



*/
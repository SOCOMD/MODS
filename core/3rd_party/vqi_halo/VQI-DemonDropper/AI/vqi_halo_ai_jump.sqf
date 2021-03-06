// Experimental A.I. Jumps
// --W-I-P--


// Gear
{ if (_x != player) then { [_x] execVM "vqi_halo\VQI-DemonDropper\AI\vqi_halo_ai_backpackgear.sqf"; }; } forEach units group player;
sleep 3;

// Cargo Seats
{ if (_x != player) then { _x moveInCargo [VQI_HALO_JUMPCRAFT,_forEachIndex]; }; } forEach units group player;

// Wait for Player Jumps
waitUntil { sleep 1; animationState player == "HaloFreeFall_non"; };
// -----------------------------------------------------





// AI ParaJump with Player
//player setPos (player modelToWorld [0,0,2222]); player allowDamage false;
{ _x allowDamage false; } forEach units group player; 
 
{ moveOut _x } forEach units group player; 
{ unassignVehicle _x } forEach units group player; 
 
 
{ if (_x != player) then { _x playMove "HaloFreeFall_non"; }; } forEach units group player; 
sleep 1; 
{ _x attachTo [player,[0,0,-1]]; } forEach units group player; 
{ if (_x != player) then { _x disableAI "ANIM" }; } forEach units group player;   
sleep 3; 
 
{detach _x} forEach units group player;

sleep 0.5;
{ if (_x != player) then { _x execVM "vqi_halo\VQI-DemonDropper\AI\vqi_halo_ai_jump_ff.sqf"; }; } forEach units group player;

sleep 60;
{ if (_x != player) then { _x allowDamage true; }; } forEach units group player;


//////////////////////
/* NOTES:



*/
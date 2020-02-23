// Transition - Flight EFX and FULL Systems Start-Up
//
if (VQI_HINTS_HALO == 1) then { hint "transition_halo.sqf"; };
//sleep 1;



private ["_unit","_jumpTravelTime","_jumpPlaneTravel"];

_unit = _this select 0;
detach _unit;	// player


// Server Player Required for HALO
if (isServer) then { 

	waitUntil { sleep 5; _unit distance VQI_HALO_JUMPCRAFT < 10; }; // SIGNALS!!!!
	execVM "vqi_halo\VQI-DemonDropper\JumpCraft\HALO\vqi_halo_cargohold_signals.sqf";
};










// Player perspective - Aircraft Ride
[_unit] execVM "vqi_halo\VQI-DemonDropper\JumpCraft\HALO\vqi_halo_cargohold_efx.sqf";


_jumpPlaneTravel = 0;	// Flight Travel Time into AO
if (VQI_HALO_TravelTime == 1) then { _jumpPlaneTravel = 1; 			if (isServer) then {skipTime _jumpPlaneTravel}; };	// 1hr
if (VQI_HALO_TravelTime == 2) then { _jumpPlaneTravel = 1 + (random 2);	if (isServer) then {skipTime _jumpPlaneTravel}; };	// 1-3hrs
if (VQI_HALO_TravelTime == 3) then { _jumpPlaneTravel = 2 + (random 4);	if (isServer) then {skipTime _jumpPlaneTravel}; };	// 2-6hrs





// Engine - XC-130: Nightmare (temp fix)
//if (PlaneType == 2) then { execVM "vqi_halo\VQI-DemonDropper\JumpCraft\vqi_halo_engine_xc130.sqf"; };

// Engine - ScramJet Technologies (temp fix)
if (PlaneType == 4) then { execVM "vqi_halo\VQI-DemonDropper\JumpCraft\vqi_halo_engine_xhr1.sqf"; };



// Equipment EFX & Initialization
H1 = [_unit] execVM "vqi_halo\VQI-DemonDropper\Equipment\Helmet\vqi_halo_helmet.sqf";						// Hawkers HALO Helmet
O2 = [_unit] execVM "vqi_halo\VQI-DemonDropper\Equipment\Oxygen\Dragonfly\vqi_leap_dragonfly_breath.sqf";	// Dragonfly Re-breather Breath
EA = [_unit] execVM "vqi_halo\VQI-DemonDropper\Equipment\AAD\EAAD\vqi_halo_eaad.sqf";						// EAAD (auto device)
PC = [_unit] execVM "vqi_halo\VQI-DemonDropper\Equipment\Parachute\vqi_halo_parachute.sqf";				// Parachute Rig


// Aircraft EFX
RC = [_unit] execVM "vqi_halo\VQI-DemonDropper\JumpCraft\vqi_halo_radiochatter.sqf";

// De-Pressurize EFX
DE = [_unit] execVM "vqi_halo\VQI-DemonDropper\JumpCraft\HALO\vqi_halo_depressurize.sqf";

// H.A.L.O EFX
DD = [_unit] execVM "vqi_halo\VQI-DemonDropper\FreeFall\vqi_halo_efx_freefall_halo.sqf";









// Visual Range
setViewDistance VQI_HALO_ViewDist; //3600 = 12,000'






// for the noobs
if (VQI_HINTS_HALO == 1) then { 
	sleep 30;
	hint "Altimeter: Hold 'Watch' Button"; 
	sleep 10;
	hint "En-route: DO NOT Jump too soon or you will be OFF COURSE \n WAIT for GREEN/GO Signal";
};


if (VQI_HINTS_HALO == 1) then { hint "transition_halo.sqf -END-"; };

/////////////////////////
/* NOTES:



*/
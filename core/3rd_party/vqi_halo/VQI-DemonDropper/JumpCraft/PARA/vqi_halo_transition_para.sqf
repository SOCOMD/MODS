// Transition - Flight EFX and FULL Systems Start-Up
//
if (VQI_HINTS_HALO == 1) then { hint "transition_para.sqf"; };
sleep 1;



private ["_unit","_start0","_jumpTravelTime","_jumpPlaneTravel"];

_unit = _this select 0;
_start0 = [0,0,0];

detach _unit;






// Aircraft Ride
[_unit] execVM "vqi_halo\VQI-DemonDropper\JumpCraft\HALO\vqi_halo_cargohold_efx.sqf";


_jumpTravelTime = 0;	// Flight Travel Time into AO
if (VQI_HALO_TravelTime == 1) then { _jumpPlaneTravel = 1; 			if (isServer) then {skipTime _jumpPlaneTravel}; };	// 1hr
if (VQI_HALO_TravelTime == 2) then { _jumpPlaneTravel = 1 + (random 2);	if (isServer) then {skipTime _jumpPlaneTravel}; };	// 1-3hrs
if (VQI_HALO_TravelTime == 3) then { _jumpPlaneTravel = 2 + (random 4);	if (isServer) then {skipTime _jumpPlaneTravel}; };	// 2-6hrs





// Engine - XC-130: Nightmare (temp fix)
//if (PlaneType == 2) then { execVM "vqi_halo\VQI-DemonDropper\JampCraft\vqi_halo_engine_xc130.sqf"; };




// Equipment EFX & Initialization
H1 = [_unit] execVM "vqi_halo\VQI-DemonDropper\Equipment\Helmet\vqi_halo_helmet.sqf";				// Hawkers HALO Helmet
sleep 1;
O2 = [_unit] execVM "vqi_halo\VQI-DemonDropper\Equipment\Oxygen\Dragonfly\vqi_leap_dragonfly_breath.sqf";	// Dragonfly Re-breather
sleep 1;
EA = [_unit] execVM "vqi_halo\VQI-DemonDropper\Equipment\AAD\EAAD\vqi_halo_eaad.sqf";				// EAAD (auto device)
sleep 1;
PC = [_unit] execVM "vqi_halo\VQI-DemonDropper\Equipment\Parachute\vqi_halo_parachute.sqf";		// Parachute Rig
sleep 1;



// Aircraft EFX
RC = [_unit] execVM "vqi_halo\VQI-DemonDropper\JumpCraft\vqi_halo_radiochatter.sqf";
sleep 1;

// H.A.L.O EFX
DD = [_unit] execVM "vqi_halo\VQI-DemonDropper\FreeFall\vqi_halo_efx_freefall_para.sqf";
sleep 1;




// Set Group A.I.
//AI = [_unit] execVM "vqi_halo\VQI-DemonDropper\AI\vqi_halo_ai_halo.sqf";
sleep 1;




// Visual Range
setViewDistance VQI_HALO_ViewDist; //3600 = 12,000'



if (isServer) then {
	// Lights & Open Ramp
	if (planeType == 2) then {
		lightRED1 = "chemlight_red" createVehicle _start0;
		lightRED1 attachTo [VQI_HALO_JUMPCRAFT,[1.6,  -1, -3.2]];		// XC-130 Nightmare
		
		REDlight1ON = 1; publicVariable "REDlight1ON";
		
		sleep 30;
		[lightRED1,"CargoDoor_Open_Mech"] call CBA_fnc_globalSay3d;
		sleep 3;
		[lightRED1,"CargoDoor_Open_HALO"] call CBA_fnc_globalSay3d;
		VQI_HALO_JUMPCRAFT animate ["ramp_bottom", 1];				// XC-130 Nightmare & MC-130J Commando II
		VQI_HALO_JUMPCRAFT animate ["ramp_top", 1];					// XC-130 Nightmare & MC-130J Commando II
		
		
		sleep 10;
		addCamShake [2,2,7];
		
		RampOpenYES = 1; 
		publicVariable "RampOpenYES";



		sleep 10;
		[lightRED1,"ns_ongreen"] call CBA_fnc_globalSay3d;

		sleep 10;
		deleteVehicle lightRED1;



		//Green Light: GO-GO-GO!!!
		lightGREEN = "chemlight_green" createVehicle _start0; 
		lightGREEN attachTo [VQI_HALO_JUMPCRAFT,[1.6,  -1, -3.2]];		// XC-130 Nightmare
		[lightGREEN,"ns_gogogo"] call CBA_fnc_globalSay3d;
	};
};










// for the noobs
if (VQI_HINTS_HALO == 1) then { 
	sleep 30;
	hint "Altimeter: Hold 'Watch' Button"; 
};


sleep 5;
if (VQI_HINTS_HALO == 1) then { hint "transition_para.sqf -END-"; };

/////////////////////////
/* NOTES:



*/
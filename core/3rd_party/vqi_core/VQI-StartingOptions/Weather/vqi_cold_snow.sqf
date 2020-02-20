// Weather - Random Snow!
// 
if (VQI_CORE_HINTS == 1) then { hint "cold_snow.sqf"; };
sleep 1810;



private ["_type","_rNum","_snow"];

_unit = _this select 0;





// randomized
while {alive _unit} do {

	_type = 0.1;
	_rNum = 1;
	
	
	

	
	
	// 0.0001 more zeros is more snow
	if (VQI_CORE_COLDSNOW == 1) then { _type = 0.1; 	  	};		// sparse
	if (VQI_CORE_COLDSNOW == 2) then { _type = 0.01; 	};		// light
	if (VQI_CORE_COLDSNOW == 3) then { _type = 0.001; 	};		// medium
	if (VQI_CORE_COLDSNOW == 4) then { _type = 0.0001; 	};		// heavy	
	if (VQI_CORE_COLDSNOW == 5) then { _type = 0.00001; 	};		// storm
	if (VQI_CORE_COLDSNOW == 6) then { 							
		_rNum = [1,5] call BIS_fnc_randomInt; 
		if (_rNum == 1) then { _type = 0.1; };
		if (_rNum == 2) then { _type = 0.01; };					// RANDOM
		if (_rNum == 3) then { _type = 0.001; };
		if (_rNum == 4) then { _type = 0.0001; };
		if (_rNum == 5) then { _type = 0.00001; };
	};		

	
	_snow = "#particleSource" createVehicleLocal (position player);  
	_snow setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal.p3d", 16,12,13,1], "","Billboard", 1, 7, [0,0,0], [0,0,0], 1, 0.0000001, 0.000, 1.7,[0.07],[[1,1,1,1]],[0,1], 0.2, 1.2, "", "",vehicle player];
	_snow setParticleRandom [0,[30,30,20],[0,0,0],0,0.01,[0,0,0,0.1],0,0];
	_snow setParticleCircle [0,[0,0,0]];
	_snow setDropInterval _type;
	


	sleep 20 + (random 1800);
	deleteVehicle _snow;


	//add random 10% possible no snow interval
	if (random 100 < 10) then {
		sleep (random 1200);
	};
};






///////////////////////////
/* Notes:
Meatball's
setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 13,1], "","Billboard", 1, 7, [0,0,0], [0,0,0], 1, 0.0000001, 0.000, 1.7,[0.07],[[1,1,1,1]],[0,1], 0.2, 1.2, "", "", _unit];
setParticleRandom [0, [10, 10, 7], [0, 0, 0], 0, 0.01, [0, 0, 0, 0.1], 0, 0];

JTS_2009's
setParticleParams [["\Ca\Data\ParticleEffects\Universal\Universal", 16, 12, 8, 1], "", "Billboard", 1, 20 ,[0,0,0], [0,0,0], 1, 0.000001, 0, 1.4, [0.1,0.1], [[1,1,1,1]], [0,1], 0.2, 1.2, "", "",vehicle player];
*/
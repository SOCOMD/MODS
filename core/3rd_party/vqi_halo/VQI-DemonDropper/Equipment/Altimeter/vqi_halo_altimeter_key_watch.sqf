// Altimeter - On/Off - SetUp and execVM in Module (fn_module.sqf)
// SetUp Battery and Setting File System???


private ["_unit"];
_unit = _this select 0;


while {true} do { 

	if ((inputAction "Watch" > 0) && ("VQI_JumpBuddy_1" in (assignedItems _unit))) then {
	
		VQIALTIMETER = [_unit] execVM "vqi_halo\VQI-DemonDropper\Equipment\Altimeter\vqi_halo_altimeter.sqf"; 
		
		if (VQI_HALO_JB1WATCH == 1) then { sleep 2;  terminate VQIALTIMETER; 2 cutText ["","PLAIN"]; 5 cutText ["","PLAIN"]; };
		if (VQI_HALO_JB1WATCH == 2) then { sleep 10; terminate VQIALTIMETER; 2 cutText ["","PLAIN"]; 5 cutText ["","PLAIN"]; };
		if (VQI_HALO_JB1WATCH == 3) then { sleep 20; terminate VQIALTIMETER; 2 cutText ["","PLAIN"]; 5 cutText ["","PLAIN"]; };
		if (VQI_HALO_JB1WATCH == 4) then { sleep 30; terminate VQIALTIMETER; 2 cutText ["","PLAIN"]; 5 cutText ["","PLAIN"]; };
		if (VQI_HALO_JB1WATCH == 5) then { sleep 60; terminate VQIALTIMETER; 2 cutText ["","PLAIN"]; 5 cutText ["","PLAIN"]; };
		if (VQI_HALO_JB1WATCH == 6) then { sleep 90; terminate VQIALTIMETER; 2 cutText ["","PLAIN"]; 5 cutText ["","PLAIN"]; };
	};
	
sleep .02;
};




/////////
/*




*/
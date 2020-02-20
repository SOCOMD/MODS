//
//


private ["_aad1","_aad2","_aad3","_aad4","_aad5","_aad6","_aad7"];

if ("VQI_AR3" in assignedItems player) then {
	
	// 1000 = 363'/110m
	_aad1 = player addAction ["AR3 Set: 998 hPA","[998,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"]; // 998 = 418'/127m
	_aad2 = player addAction ["AR3 Set: 995 hPA","[995,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"]; // 995 = 501'/153m
	_aad3 = player addAction ["AR3 Set: 990 hPA","[990,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"]; // 990 = 640'/195m
	_aad4 = player addAction ["AR3 Set: 980 hPA","[980,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"]; // 980 = 920'/280m
	_aad5 = player addAction ["AR3 Set: 970 hPA","[970,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"]; // 970 = 1201'/366m
	_aad6 = player addAction ["AR3 Set: 950 hPA","[950,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"]; // 950 = 1772'/540m
	_aad7 = player addAction ["AR3 Set: 930 hPA","[930,player] execVM 'vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_set_hpa.sqf';"]; // 930 = 2352'/717m

	sleep 20;

	player removeAction _aad1;
	player removeAction _aad2;
	player removeAction _aad3;
	player removeAction _aad4;
	player removeAction _aad5;
	player removeAction _aad6;
	player removeAction _aad7;
};


///////////////////////////////
/* NOTES:


*/
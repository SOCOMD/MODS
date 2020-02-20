//
//
//hint "holeinmypocket.sqf";
sleep 10 + (random 900);




while {true} do {

	sleep VQI_CORE_sHIMP;

	if (random 100 < VQI_CORE_pHIMP) then {
	_rI = selectRandom [1,2,3,4];

		// items
		if (_rI == 1) then { player unassignItem "itemmap"; 		player removeItem "itemmap"; };				// map
		if (_rI == 2) then { player unassignItem "itemgps"; 		player removeItem "itemgps"; };				// gps
		if (_rI == 3) then { player unassignItem "itemradio"; 		player removeItem "itemradio"; };			// radio
		if (_rI == 4) then { player unassignItem "itemcompass"; 	player removeItem "itemcompass"; };			// compass
	};
};









//hint "holeinmypocket.sqf -END-";
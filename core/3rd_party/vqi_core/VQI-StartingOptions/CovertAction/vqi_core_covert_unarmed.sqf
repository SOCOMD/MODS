//
//
if (VQI_CORE_HINTS) then { hint "covert_unarmed.sqf"; };
sleep 1;

private ["_nE1","_kA1","_nE2","_cM2","_nE3","_kA3"];


// Switch To camoCoef ?
player setCaptive true;
vqi_covert_spotted = false;









while {true} do {

	// add Vest and Launcher back in (lost)
	waitUntil {sleep 5; currentWeapon player != ""};	// or
	player setCaptive false;
	
	waitUntil {sleep 5; currentWeapon player == ""};	// and
	
	
	
	
	_nE1 = player findNearestEnemy player;
	_kA1 = _nE1 knowsAbout player;
												// distance & prob?
	if (_kA1 < 3.5) then {						// user KA option?
		player setCaptive true;
		vqi_covert_spotted = false;
	} else {
		_nE2 = player findNearestEnemy player;
		_cM2 = combatMode _nE2;
		
		if (_cM2 != "RED") then {
			player setCaptive true;
			vqi_covert_spotted = false;
		} else {
			vqi_covert_spotted = true;
		};
	};

	sleep 1;
	
	while {vqi_covert_spotted} do { 
		sleep 666; 	//longer cool-down penalty
		
		_nE3 = player findNearestEnemy player;
		_kA3 = _nE3 knowsAbout player; //side?
		
		if (_kA3 <= 3.5) then {
			player setCaptive true;
			vqi_covert_spotted = false;
		};
	};
	

sleep 5 + (random 30);
};














////////////////////////////
/* NOTES:


	_pos = getPos player;
	_n50 = _pos nearEntities _dxx;
	_grn = resistance countSide _n50;
	_red = east countSide _n50;
	_bad = _grn + _red;
*/
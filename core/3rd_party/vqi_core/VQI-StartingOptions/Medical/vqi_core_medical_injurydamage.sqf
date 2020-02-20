// process/store damage variables
//

private ["_damage","_hitLoc","_trauma",
		"_damage1a","_damage1b","_damage1c","_damage1d","_damage1e",
		"_damage2a","_damage2b","_damage2c","_damage2d","_damage2e","_damage2f","_damage2g","_damage2h","_damage2i","_damage2j","_damage2k","_damage2l",
		"_damage3a","_damage3b","_damage3c","_damage3d","_damage3e","_damage3f","_damage3g","_damage3h",
		"_damage4a","_damage4b","_damage4c",
		"_damage5a","_damage5b","_damage5c",
		"_damage6a","_damage6b","_damage6c","_damage6d",
		"_damage7a","_damage7b","_damage7c","_damage7d",
		"_damage8a","_damage8b","_damage8c","_damage8d","_damage8e",
		"_damage9a","_damage9b","_damage9c","_damage9d","_damage9e",
		"_damage10a","_damage10b","_damage10c","_damage10d",
		"_damage11a","_damage11b","_damage11c","_damage11d",
		"_damage12a","_damage12b",
		"_damage13a","_damage13b"
		];

_damage = _this select 0;
_damage = [_damage,2] call BIS_fnc_cutDecimals;
_trauma = 0;
_hitLoc = 0;

//hint str _damage;


waitUntil { sleep 0.1; vqi_hit == 1; };	// x4 per Loc, per Part
if ((_damage > 0.0) && (_damage <= 0.3)) then { _trauma = 1; };	// small			Sm EFX...
if ((_damage > 0.3) && (_damage <= 0.6)) then { _trauma = 2; };	// medium			Lg EFX...
if ((_damage > 0.6) && (_damage <= 0.9)) then { _trauma = 3; };	// large			Knock Down, Drop Weapon
if ( _damage > 0.9) 					 then { _trauma = 4; };	// xtreme			" + Unconscious





// head
if (hit_head == 1) then {

	//_hitLoc = player getVariable "hit_head"; _hitLoc = _hitLoc + 1; player setVariable ["hit_head",_hitLoc];
	_hitLoc = [1,5] call BIS_fnc_randomInt;	// random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage1a = player getVariable "head_1"; _damage1a = _damage1a + _trauma; player setVariable ["head_1",_damage1a]; };
	if (_hitLoc == 2) then { _damage1b = player getVariable "head_2"; _damage1b = _damage1b + _trauma; player setVariable ["head_2",_damage1b]; };
	if (_hitLoc == 3) then { _damage1c = player getVariable "head_3"; _damage1c = _damage1c + _trauma; player setVariable ["head_3",_damage1c]; };
	if (_hitLoc == 4) then { _damage1d = player getVariable "head_4"; _damage1d = _damage1d + _trauma; player setVariable ["head_4",_damage1d]; };
	if (_hitLoc == 5) then { _damage1e = player getVariable "head_5"; _damage1e = _damage1e + _trauma; player setVariable ["head_5",_damage1e]; };
	systemChat "HEAD";
};


// chest
if (hit_chest == 1) then {

	//_hitLoc = player getVariable "hit_chest"; _hitLoc = _hitLoc + 1; player setVariable ["hit_chest",_hitLoc];
	_hitLoc = [1,12] call BIS_fnc_randomInt;	 // random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage2a = player getVariable "chest_1"; _damage2a = _damage2a + _trauma; player setVariable ["chest_1",_damage2a]; };
	if (_hitLoc == 2) then { _damage2b = player getVariable "chest_2"; _damage2b = _damage2b + _trauma; player setVariable ["chest_2",_damage2b]; };
	if (_hitLoc == 3) then { _damage2c = player getVariable "chest_3"; _damage2c = _damage2c + _trauma; player setVariable ["chest_3",_damage2c]; };
	if (_hitLoc == 4) then { _damage2d = player getVariable "chest_4"; _damage2d = _damage2d + _trauma; player setVariable ["chest_4",_damage2d]; };
	if (_hitLoc == 5) then { _damage2e = player getVariable "chest_5"; _damage2e = _damage2e + _trauma; player setVariable ["chest_5",_damage2e]; };
	if (_hitLoc == 6) then { _damage2f = player getVariable "chest_6"; _damage2f = _damage2f + _trauma; player setVariable ["chest_6",_damage2f]; };
	if (_hitLoc == 7) then { _damage2g = player getVariable "chest_7"; _damage2g = _damage2g + _trauma; player setVariable ["chest_7",_damage2g]; };
	if (_hitLoc == 8) then { _damage2h = player getVariable "chest_8"; _damage2h = _damage2h + _trauma; player setVariable ["chest_8",_damage2h]; };
	if (_hitLoc == 9) then { _damage2i = player getVariable "chest_9"; _damage2i = _damage2i + _trauma; player setVariable ["chest_9",_damage2i]; };
	if (_hitLoc == 10) then { _damage2j = player getVariable "chest_10"; _damage2j = _damage2j + _trauma; player setVariable ["chest_10",_damage2j]; };
	if (_hitLoc == 11) then { _damage2k = player getVariable "chest_11"; _damage2k = _damage2k + _trauma; player setVariable ["chest_11",_damage2k]; };
	if (_hitLoc == 12) then { _damage2l = player getVariable "chest_12"; _damage2l = _damage2l + _trauma; player setVariable ["chest_12",_damage2l]; };
	systemChat "CHEST";
};


// gut
if (hit_gut == 1) then {

	//_hitLoc = player getVariable "hit_gut"; _hitLoc = _hitLoc + 1; player setVariable ["hit_gut",_hitLoc];
	_hitLoc = [1,8] call BIS_fnc_randomInt;	 // random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage3a = player getVariable "gut_1"; _damage3a = _damage3a + _trauma; player setVariable ["gut_1",_damage3a]; };
	if (_hitLoc == 2) then { _damage3b = player getVariable "gut_2"; _damage3b = _damage3b + _trauma; player setVariable ["gut_2",_damage3b]; };
	if (_hitLoc == 3) then { _damage3c = player getVariable "gut_3"; _damage3c = _damage3c + _trauma; player setVariable ["gut_3",_damage3c]; };
	if (_hitLoc == 4) then { _damage3d = player getVariable "gut_4"; _damage3d = _damage3d + _trauma; player setVariable ["gut_4",_damage3d]; };
	if (_hitLoc == 5) then { _damage3e = player getVariable "gut_5"; _damage3e = _damage3e + _trauma; player setVariable ["gut_5",_damage3e]; };
	if (_hitLoc == 6) then { _damage3f = player getVariable "gut_6"; _damage3f = _damage3f + _trauma; player setVariable ["gut_6",_damage3f]; };
	if (_hitLoc == 7) then { _damage3g = player getVariable "gut_7"; _damage3g = _damage3g + _trauma; player setVariable ["gut_7",_damage3g]; };
	if (_hitLoc == 8) then { _damage3h = player getVariable "gut_8"; _damage3h = _damage3h + _trauma; player setVariable ["gut_8",_damage3h]; };
	systemChat "GUT";
};


// rightarm
if (hit_rightarm == 1) then {

	//_hitLoc = player getVariable "hit_rightarm"; _hitLoc = _hitLoc + 1; player setVariable ["hit_rightarm",_hitLoc];
	_hitLoc = [1,3] call BIS_fnc_randomInt;	 // random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage4a = player getVariable "rightarm_1"; _damage4a = _damage4a + _trauma; player setVariable ["rightarm_1",_damage4a]; };
	if (_hitLoc == 2) then { _damage4b = player getVariable "rightarm_2"; _damage4b = _damage4b + _trauma; player setVariable ["rightarm_2",_damage4b]; };
	if (_hitLoc == 3) then { _damage4c = player getVariable "rightarm_3"; _damage4c = _damage4c + _trauma; player setVariable ["rightarm_3",_damage4c]; };
	systemChat "RIGHT UPPER ARM";
};


// leftarm
if (hit_leftarm == 1) then {

	//_hitLoc = player getVariable "hit_leftarm"; _hitLoc = _hitLoc + 1; player setVariable ["hit_leftarm",_hitLoc];
	_hitLoc = [1,3] call BIS_fnc_randomInt;	 // random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage5a = player getVariable "leftarm_1"; _damage5a = _damage5a + _trauma; player setVariable ["leftarm_1",_damage5a]; };
	if (_hitLoc == 2) then { _damage5b = player getVariable "leftarm_2"; _damage5b = _damage5b + _trauma; player setVariable ["leftarm_2",_damage5b]; };
	if (_hitLoc == 3) then { _damage5c = player getVariable "leftarm_3"; _damage5c = _damage5c + _trauma; player setVariable ["leftarm_3",_damage5c]; };
	systemChat "LEFT UPPER ARM";
};


// rightforearm
if (hit_rightforearm == 1) then {

	//_hitLoc = player getVariable "hit_rightforearm"; _hitLoc = _hitLoc + 1; player setVariable ["hit_rightforearm",_hitLoc];
	_hitLoc = [1,4] call BIS_fnc_randomInt;	 // random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage6a = player getVariable "rightforearm_1"; _damage6a = _damage6a + _trauma; player setVariable ["rightforearm_1",_damage6a]; };
	if (_hitLoc == 2) then { _damage6b = player getVariable "rightforearm_2"; _damage6b = _damage6b + _trauma; player setVariable ["rightforearm_2",_damage6b]; };
	if (_hitLoc == 3) then { _damage6c = player getVariable "rightforearm_3"; _damage6c = _damage6c + _trauma; player setVariable ["rightforearm_3",_damage6c]; };
	if (_hitLoc == 4) then { _damage6d = player getVariable "rightforearm_4"; _damage6d = _damage6d + _trauma; player setVariable ["rightforearm_4",_damage6d]; };
	systemChat "RIGHT FOREARM";
};


// leftforearm
if (hit_leftforearm == 1) then {

	//_hitLoc = player getVariable "hit_leftforearm"; _hitLoc = _hitLoc + 1; player setVariable ["hit_leftforearm",_hitLoc];
	_hitLoc = [1,4] call BIS_fnc_randomInt;	 // random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage7a = player getVariable "leftforearm_1"; _damage7a = _damage7a + _trauma; player setVariable ["leftforearm_1",_damage7a]; };
	if (_hitLoc == 2) then { _damage7b = player getVariable "leftforearm_2"; _damage7b = _damage7b + _trauma; player setVariable ["leftforearm_2",_damage7b]; };
	if (_hitLoc == 3) then { _damage7c = player getVariable "leftforearm_3"; _damage7c = _damage7c + _trauma; player setVariable ["leftforearm_3",_damage7c]; };
	if (_hitLoc == 4) then { _damage7d = player getVariable "leftforearm_4"; _damage7d = _damage7d + _trauma; player setVariable ["leftforearm_4",_damage7d]; };
	systemChat "LEFT FOREARM";
};



// rightupleg
if (hit_rightupleg == 1) then {

	//_hitLoc = player getVariable "hit_rightupleg"; _hitLoc = _hitLoc + 1; player setVariable ["hit_rightupleg",_hitLoc];
	_hitLoc = [1,5] call BIS_fnc_randomInt;	 // random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage8a = player getVariable "rightupleg_1"; _damage8a = _damage8a + _trauma; player setVariable ["rightupleg_1",_damage8a]; };
	if (_hitLoc == 2) then { _damage8b = player getVariable "rightupleg_2"; _damage8b = _damage8b + _trauma; player setVariable ["rightupleg_2",_damage8b]; };
	if (_hitLoc == 3) then { _damage8c = player getVariable "rightupleg_3"; _damage8c = _damage8c + _trauma; player setVariable ["rightupleg_3",_damage8c]; };
	if (_hitLoc == 4) then { _damage8d = player getVariable "rightupleg_4"; _damage8d = _damage8d + _trauma; player setVariable ["rightupleg_4",_damage8d]; };
	if (_hitLoc == 5) then { _damage8e = player getVariable "rightupleg_5"; _damage8e = _damage8e + _trauma; player setVariable ["rightupleg_5",_damage8e]; };
	systemChat "RIGHT UPPER LEG";
};



// leftupleg
if (hit_leftupleg == 1) then {

	//_hitLoc = player getVariable "hit_leftupleg"; _hitLoc = _hitLoc + 1; player setVariable ["hit_leftupleg",_hitLoc];
	_hitLoc = [1,5] call BIS_fnc_randomInt;	 // random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage9a = player getVariable "leftupleg_1"; _damage9a = _damage9a + _trauma; player setVariable ["leftupleg_1",_damage9a]; };
	if (_hitLoc == 2) then { _damage9b = player getVariable "leftupleg_2"; _damage9b = _damage9b + _trauma; player setVariable ["leftupleg_2",_damage9b]; };
	if (_hitLoc == 3) then { _damage9c = player getVariable "leftupleg_3"; _damage9c = _damage9c + _trauma; player setVariable ["leftupleg_3",_damage9c]; };
	if (_hitLoc == 4) then { _damage9d = player getVariable "leftupleg_4"; _damage9d = _damage9d + _trauma; player setVariable ["leftupleg_4",_damage9d]; };
	if (_hitLoc == 5) then { _damage9e = player getVariable "leftupleg_5"; _damage9e = _damage9e + _trauma; player setVariable ["leftupleg_5",_damage9e]; };
	systemChat "LEFT UPPER LEG";
};



// rightleg
if (hit_rightleg == 1) then {

	//_hitLoc = player getVariable "hit_rightleg"; _hitLoc = _hitLoc + 1; player setVariable ["hit_rightleg",_hitLoc];
	_hitLoc = [1,4] call BIS_fnc_randomInt;	 // random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage10a = player getVariable "rightleg_1"; _damage10a = _damage10a + _trauma; player setVariable ["rightleg_1",_damage10a]; };
	if (_hitLoc == 2) then { _damage10b = player getVariable "rightleg_2"; _damage10b = _damage10b + _trauma; player setVariable ["rightleg_2",_damage10b]; };
	if (_hitLoc == 3) then { _damage10c = player getVariable "rightleg_3"; _damage10c = _damage10c + _trauma; player setVariable ["rightleg_3",_damage10c]; };
	if (_hitLoc == 4) then { _damage10d = player getVariable "rightleg_4"; _damage10d = _damage10d + _trauma; player setVariable ["rightleg_4",_damage10d]; };
	systemChat "RIGHT LOWER LEG";
};



// leftleg
if (hit_leftleg == 1) then {

	//_hitLoc = player getVariable "hit_leftleg"; _hitLoc = _hitLoc + 1; player setVariable ["hit_leftleg",_hitLoc];
	_hitLoc = [1,4] call BIS_fnc_randomInt;	 // random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage11a = player getVariable "leftleg_1"; _damage11a = _damage11a + _trauma; player setVariable ["leftleg_1",_damage11a]; };
	if (_hitLoc == 2) then { _damage11b = player getVariable "leftleg_2"; _damage11b = _damage11b + _trauma; player setVariable ["leftleg_2",_damage11b]; };
	if (_hitLoc == 3) then { _damage11c = player getVariable "leftleg_3"; _damage11c = _damage11c + _trauma; player setVariable ["leftleg_3",_damage11c]; };
	if (_hitLoc == 4) then { _damage11d = player getVariable "leftleg_4"; _damage11d = _damage11d + _trauma; player setVariable ["leftleg_4",_damage11d]; };
	systemChat "LEFT LOWER LEG";
};


// rightfoot
if (hit_rightfoot == 1) then {

	//_hitLoc = player getVariable "hit_rightfoot"; _hitLoc = _hitLoc + 1; player setVariable ["hit_rightfoot",_hitLoc];
	_hitLoc = [1,2] call BIS_fnc_randomInt;	 // random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage12a = player getVariable "rightfoot_1"; _damage12a = _damage12a + _trauma; player setVariable ["rightfoot_1",_damage12a]; };
	if (_hitLoc == 2) then { _damage12b = player getVariable "rightfoot_2"; _damage12b = _damage12b + _trauma; player setVariable ["rightfoot_2",_damage12b]; };
	systemChat "RIGHT FOOT";
};


// leftfoot
if (hit_leftfoot == 1) then {

	//_hitLoc = player getVariable "hit_leftfoot"; _hitLoc = _hitLoc + 1; player setVariable ["hit_leftfoot",_hitLoc];
	_hitLoc = [1,2] call BIS_fnc_randomInt;	 // random   or   ordered ?
	
	if (_hitLoc == 1) then { _damage13a = player getVariable "leftfoot_1"; _damage13a = _damage13a + _trauma; player setVariable ["leftfoot_1",_damage13a]; };
	if (_hitLoc == 2) then { _damage13b = player getVariable "leftfoot_2"; _damage13b = _damage13b + _trauma; player setVariable ["leftfoot_2",_damage13b]; };
	systemChat "LEFT FOOT";
};












sleep 2;



// ??????????????????????
// reset global variables
vqi_hit = 0;

hit_head = 0;
hit_chest = 0;
hit_gut = 0;

hit_rightarm = 0;
hit_rightforearm = 0;
hit_leftarm = 0;
hit_leftforearm = 0;

hit_rightupleg = 0;
hit_rightleg = 0;
hit_leftupleg = 0;
hit_leftleg = 0;

hit_rightfoot = 0;
hit_leftfoot = 0;



////////////////////////
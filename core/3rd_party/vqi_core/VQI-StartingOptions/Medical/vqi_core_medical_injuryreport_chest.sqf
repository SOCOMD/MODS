//
//

private ["_chest_1","_chest_2","_chest_3","_chest_4","_chest_5","_chest_6","_chest_7","_chest_8","_chest_9","_chest_10","_chest_11","_chest_12"];




// each location check
_chest_1 = profileNamespace getVariable "chest_1";	// 1,2,3,4
_chest_2 = profileNamespace getVariable "chest_2";
_chest_3 = profileNamespace getVariable "chest_3";
_chest_4 = profileNamespace getVariable "chest_4";
_chest_5 = profileNamespace getVariable "chest_5";
_chest_6 = profileNamespace getVariable "chest_6";
_chest_7 = profileNamespace getVariable "chest_7";
_chest_8 = profileNamespace getVariable "chest_8";
_chest_9 = profileNamespace getVariable "chest_9";
_chest_10 = profileNamespace getVariable "chest_10";
_chest_11 = profileNamespace getVariable "chest_11";
_chest_12 = profileNamespace getVariable "chest_12";


//disableSerialization;



// injury type per loc
if (_chest_1 > 0) then {
	if (_chest_1 == 1) then { 1006 cutRsc ["vqi_injury_rsc_chest_1_s", "PLAIN"]; }; 	// small
	if (_chest_1 == 2) then { 1006 cutRsc ["vqi_injury_rsc_chest_1_m", "PLAIN"]; }; 	// medium
	if (_chest_1 == 3) then { 1006 cutRsc ["vqi_injury_rsc_chest_1_l", "PLAIN"]; }; 	// large
	if (_chest_1 == 4) then { 1006 cutRsc ["vqi_injury_rsc_chest_1_x", "PLAIN"]; }; 	// xtreme
};	

if (_chest_2 > 0) then {
	if (_chest_2 == 1) then { 1007 cutRsc ["vqi_injury_rsc_chest_2_s", "PLAIN"]; }; 	// small
	if (_chest_2 == 2) then { 1007 cutRsc ["vqi_injury_rsc_chest_2_m", "PLAIN"]; }; 	// medium
	if (_chest_2 == 3) then { 1007 cutRsc ["vqi_injury_rsc_chest_2_l", "PLAIN"]; }; 	// large
	if (_chest_2 == 4) then { 1007 cutRsc ["vqi_injury_rsc_chest_2_x", "PLAIN"]; }; 	// xtreme
};

if (_chest_3 > 0) then {
	if (_chest_3 == 1) then { 1008 cutRsc ["vqi_injury_rsc_chest_3_s", "PLAIN"]; }; 	// small
	if (_chest_3 == 2) then { 1008 cutRsc ["vqi_injury_rsc_chest_3_m", "PLAIN"]; }; 	// medium
	if (_chest_3 == 3) then { 1008 cutRsc ["vqi_injury_rsc_chest_3_l", "PLAIN"]; }; 	// large
	if (_chest_3 == 4) then { 1008 cutRsc ["vqi_injury_rsc_chest_3_x", "PLAIN"]; }; 	// xtreme
};

if (_chest_4 > 0) then {
	if (_chest_4 == 1) then { 1009 cutRsc ["vqi_injury_rsc_chest_4_s", "PLAIN"]; }; 	// small
	if (_chest_4 == 2) then { 1009 cutRsc ["vqi_injury_rsc_chest_4_m", "PLAIN"]; }; 	// medium
	if (_chest_4 == 3) then { 1009 cutRsc ["vqi_injury_rsc_chest_4_l", "PLAIN"]; }; 	// large
	if (_chest_4 == 4) then { 1009 cutRsc ["vqi_injury_rsc_chest_4_x", "PLAIN"]; }; 	// xtreme
};

if (_chest_5 > 0) then {
	if (_chest_5 == 1) then { 1010 cutRsc ["vqi_injury_rsc_chest_5_s", "PLAIN"]; }; 	// small
	if (_chest_5 == 2) then { 1010 cutRsc ["vqi_injury_rsc_chest_5_m", "PLAIN"]; }; 	// medium
	if (_chest_5 == 3) then { 1010 cutRsc ["vqi_injury_rsc_chest_5_l", "PLAIN"]; }; 	// large
	if (_chest_5 == 4) then { 1010 cutRsc ["vqi_injury_rsc_chest_5_x", "PLAIN"]; }; 	// xtreme
};

// injury type per loc
if (_chest_6 > 0) then {
	if (_chest_6 == 1) then { 1011 cutRsc ["vqi_injury_rsc_chest_6_s", "PLAIN"]; }; 	// small
	if (_chest_6 == 2) then { 1011 cutRsc ["vqi_injury_rsc_chest_6_m", "PLAIN"]; }; 	// medium
	if (_chest_6 == 3) then { 1011 cutRsc ["vqi_injury_rsc_chest_6_l", "PLAIN"]; }; 	// large
	if (_chest_6 == 4) then { 1011 cutRsc ["vqi_injury_rsc_chest_6_x", "PLAIN"]; }; 	// xtreme
};	

if (_chest_7 > 0) then {
	if (_chest_7 == 1) then { 1012 cutRsc ["vqi_injury_rsc_chest_7_s", "PLAIN"]; }; 	// small
	if (_chest_7 == 2) then { 1012 cutRsc ["vqi_injury_rsc_chest_7_m", "PLAIN"]; }; 	// medium
	if (_chest_7 == 3) then { 1012 cutRsc ["vqi_injury_rsc_chest_7_l", "PLAIN"]; }; 	// large
	if (_chest_7 == 4) then { 1012 cutRsc ["vqi_injury_rsc_chest_7_x", "PLAIN"]; }; 	// xtreme
};

if (_chest_8 > 0) then {
	if (_chest_8 == 1) then { 1013 cutRsc ["vqi_injury_rsc_chest_8_s", "PLAIN"]; }; 	// small
	if (_chest_8 == 2) then { 1013 cutRsc ["vqi_injury_rsc_chest_8_m", "PLAIN"]; }; 	// medium
	if (_chest_8 == 3) then { 1013 cutRsc ["vqi_injury_rsc_chest_8_l", "PLAIN"]; }; 	// large
	if (_chest_8 == 4) then { 1013 cutRsc ["vqi_injury_rsc_chest_8_x", "PLAIN"]; }; 	// xtreme
};

if (_chest_9 > 0) then {
	if (_chest_9 == 1) then { 1014 cutRsc ["vqi_injury_rsc_chest_9_s", "PLAIN"]; }; 	// small
	if (_chest_9 == 2) then { 1014 cutRsc ["vqi_injury_rsc_chest_9_m", "PLAIN"]; }; 	// medium
	if (_chest_9 == 3) then { 1014 cutRsc ["vqi_injury_rsc_chest_9_l", "PLAIN"]; }; 	// large
	if (_chest_9 == 4) then { 1014 cutRsc ["vqi_injury_rsc_chest_9_x", "PLAIN"]; }; 	// xtreme
};

if (_chest_10 > 0) then {
	if (_chest_10 == 1) then { 1015 cutRsc ["vqi_injury_rsc_chest_10_s", "PLAIN"]; }; 	// small
	if (_chest_10 == 2) then { 1015 cutRsc ["vqi_injury_rsc_chest_10_m", "PLAIN"]; }; 	// medium
	if (_chest_10 == 3) then { 1015 cutRsc ["vqi_injury_rsc_chest_10_l", "PLAIN"]; }; 	// large
	if (_chest_10 == 4) then { 1015 cutRsc ["vqi_injury_rsc_chest_10_x", "PLAIN"]; }; 	// xtreme
};

if (_chest_11 > 0) then {
	if (_chest_11 == 1) then { 1016 cutRsc ["vqi_injury_rsc_chest_11_s", "PLAIN"]; }; 	// small
	if (_chest_11 == 2) then { 1016 cutRsc ["vqi_injury_rsc_chest_11_m", "PLAIN"]; }; 	// medium
	if (_chest_11 == 3) then { 1016 cutRsc ["vqi_injury_rsc_chest_11_l", "PLAIN"]; }; 	// large
	if (_chest_11 == 4) then { 1016 cutRsc ["vqi_injury_rsc_chest_11_x", "PLAIN"]; }; 	// xtreme
};

if (_chest_12 > 0) then {
	if (_chest_12 == 1) then { 1017 cutRsc ["vqi_injury_rsc_chest_12_s", "PLAIN"]; }; 	// small
	if (_chest_12 == 2) then { 1017 cutRsc ["vqi_injury_rsc_chest_12_m", "PLAIN"]; }; 	// medium
	if (_chest_12 == 3) then { 1017 cutRsc ["vqi_injury_rsc_chest_12_l", "PLAIN"]; }; 	// large
	if (_chest_12 == 4) then { 1017 cutRsc ["vqi_injury_rsc_chest_12_x", "PLAIN"]; }; 	// xtreme
};













////////////////
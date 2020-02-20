//
//

private ["_head_1","_head_2","_head_3","_head_4","_head_5"];




// each location check
_head_1 = profileNamespace getVariable "head_1";	// 1,2,3,4
_head_2 = profileNamespace getVariable "head_2";
_head_3 = profileNamespace getVariable "head_3";
_head_4 = profileNamespace getVariable "head_4";
_head_5 = profileNamespace getVariable "head_5";


//disableSerialization;


// injury type per loc
if (_head_1 > 0) then {
	if (_head_1 == 1) then { 1001 cutRsc ["vqi_injury_rsc_head_1_s", "PLAIN"]; }; 	// small
	if (_head_1 == 2) then { 1001 cutRsc ["vqi_injury_rsc_head_1_m", "PLAIN"]; }; 	// medium
	if (_head_1 == 3) then { 1001 cutRsc ["vqi_injury_rsc_head_1_l", "PLAIN"]; }; 	// large
	if (_head_1 == 4) then { 1001 cutRsc ["vqi_injury_rsc_head_1_x", "PLAIN"]; }; 	// xtreme
};	

if (_head_2 > 0) then {
	if (_head_2 == 1) then { 1002 cutRsc ["vqi_injury_rsc_head_2_s", "PLAIN"]; }; 	// small
	if (_head_2 == 2) then { 1002 cutRsc ["vqi_injury_rsc_head_2_m", "PLAIN"]; }; 	// medium
	if (_head_2 == 3) then { 1002 cutRsc ["vqi_injury_rsc_head_2_l", "PLAIN"]; }; 	// large
	if (_head_2 == 4) then { 1002 cutRsc ["vqi_injury_rsc_head_2_x", "PLAIN"]; }; 	// xtreme
};

if (_head_3 > 0) then {
	if (_head_3 == 1) then { 1003 cutRsc ["vqi_injury_rsc_head_3_s", "PLAIN"]; }; 	// small
	if (_head_3 == 2) then { 1003 cutRsc ["vqi_injury_rsc_head_3_m", "PLAIN"]; }; 	// medium
	if (_head_3 == 3) then { 1003 cutRsc ["vqi_injury_rsc_head_3_l", "PLAIN"]; }; 	// large
	if (_head_3 == 4) then { 1003 cutRsc ["vqi_injury_rsc_head_3_x", "PLAIN"]; }; 	// xtreme
};

if (_head_4 > 0) then {
	if (_head_4 == 1) then { 1004 cutRsc ["vqi_injury_rsc_head_4_s", "PLAIN"]; }; 	// small
	if (_head_4 == 2) then { 1004 cutRsc ["vqi_injury_rsc_head_4_m", "PLAIN"]; }; 	// medium
	if (_head_4 == 3) then { 1004 cutRsc ["vqi_injury_rsc_head_4_l", "PLAIN"]; }; 	// large
	if (_head_4 == 4) then { 1004 cutRsc ["vqi_injury_rsc_head_4_x", "PLAIN"]; }; 	// xtreme
};

if (_head_5 > 0) then {
	if (_head_5 == 1) then { 1005 cutRsc ["vqi_injury_rsc_head_5_s", "PLAIN"]; }; 	// small
	if (_head_5 == 2) then { 1005 cutRsc ["vqi_injury_rsc_head_5_m", "PLAIN"]; }; 	// medium
	if (_head_5 == 3) then { 1005 cutRsc ["vqi_injury_rsc_head_5_l", "PLAIN"]; }; 	// large
	if (_head_5 == 4) then { 1005 cutRsc ["vqi_injury_rsc_head_5_x", "PLAIN"]; }; 	// xtreme
};


















////////////////
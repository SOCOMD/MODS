//
//

private ["_display",
		"_head_1","_head_2","_head_3","_head_4","_head_5",
		"_chest_1","_chest_2","_chest_3","_chest_4","_chest_5","_chest_6","_chest_7","_chest_8","_chest_9","_chest_10","_chest_11","_chest_12",
		"_gut_1","_gut_2","_gut_3","_gut_4","_gut_5","_gut_6","_gut_7","_gut_8",
		"_rightarm_1","_rightarm_2","_rightarm_3",
		"_leftarm_1","_leftarm_2","_leftarm_3",
		"_rightforearm_1","_rightforearm_2","_rightforearm_3","_rightforearm_4",
		"_leftforearm_1","_leftforearm_2","_leftforearm_3","_leftforearm_4",
		"_rightupleg_1","_rightupleg_2","_rightupleg_3","_rightupleg_4","_rightupleg_5",
		"_leftupleg_1","_leftupleg_2","_leftupleg_3","_leftupleg_4","_leftupleg_5",
		"_rightleg_1","_rightleg_2","_rightleg_3","_rightleg_4",
		"_leftleg_1","_leftleg_2","_leftleg_3","_leftleg_4",
		"_rightfoot_1","_rightfoot_2",
		"_leftfoot_1","_leftfoot_2"
		];
		
		
		
		



// background
disableSerialization; 

2 cutRsc ["VQI_MEDICAL_INJURYREPORT", "PLAIN"];
_display = uiNamespace getVariable "VQI_MEDICAL_INJURYREPORT";





// head
// each location check
_head_1 = player getVariable "head_1";	// 1,2,3,4 (sm,m,lg,x)
_head_2 = player getVariable "head_2";
_head_3 = player getVariable "head_3";	
_head_4 = player getVariable "head_4";	
_head_5 = player getVariable "head_5";

// injury type per loc
if (_head_1 > 0) then {
	if (_head_1 == 1) then { (_display displayCtrl 1111) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_1_s.paa"; }; 	// small
	if (_head_1 == 2) then { (_display displayCtrl 1112) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_1_m.paa"; }; 	// medium
	if (_head_1 == 3) then { (_display displayCtrl 1113) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_1_l.paa"; }; 	// large
	if (_head_1 == 4) then { (_display displayCtrl 1114) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_1_x.paa"; }; 	// xtreme
};
if (_head_2 > 0) then {
	if (_head_2 == 1) then { (_display displayCtrl 1121) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_2_s.paa"; }; 	// small
	if (_head_2 == 2) then { (_display displayCtrl 1122) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_2_m.paa"; }; 	// medium
	if (_head_2 == 3) then { (_display displayCtrl 1123) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_2_l.paa"; }; 	// large
	if (_head_2 == 4) then { (_display displayCtrl 1124) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_2_x.paa"; }; 	// xtreme
};
if (_head_3 > 0) then {
	if (_head_3 == 1) then { (_display displayCtrl 1131) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_3_s.paa"; }; 	// small
	if (_head_3 == 2) then { (_display displayCtrl 1132) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_3_m.paa"; }; 	// medium
	if (_head_3 == 3) then { (_display displayCtrl 1133) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_3_l.paa"; }; 	// large
	if (_head_3 == 4) then { (_display displayCtrl 1134) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_3_x.paa"; }; 	// xtreme
};
if (_head_4 > 0) then {
	if (_head_4 == 1) then { (_display displayCtrl 1141) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_4_s.paa"; }; 	// small
	if (_head_4 == 2) then { (_display displayCtrl 1142) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_4_m.paa"; }; 	// medium
	if (_head_4 == 3) then { (_display displayCtrl 1143) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_4_l.paa"; }; 	// large
	if (_head_4 == 4) then { (_display displayCtrl 1144) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_4_x.paa"; }; 	// xtreme
};
if (_head_5 > 0) then {
	if (_head_5 == 1) then { (_display displayCtrl 1151) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_5_s.paa"; }; 	// small
	if (_head_5 == 2) then { (_display displayCtrl 1152) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_5_m.paa"; }; 	// medium
	if (_head_5 == 3) then { (_display displayCtrl 1153) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_5_l.paa"; }; 	// large
	if (_head_5 == 4) then { (_display displayCtrl 1154) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\head\injury_head_5_x.paa"; }; 	// xtreme
};



// chest
// each location check
_chest_1 = player getVariable "chest_1";	// 1,2,3,4 (sm,m,lg,x)
_chest_2 = player getVariable "chest_2";
_chest_3 = player getVariable "chest_3";
_chest_4 = player getVariable "chest_4";
_chest_5 = player getVariable "chest_5";
_chest_6 = player getVariable "chest_6";
_chest_7 = player getVariable "chest_7";
_chest_8 = player getVariable "chest_8";
_chest_9 = player getVariable "chest_9";
_chest_10 = player getVariable "chest_10";
_chest_11 = player getVariable "chest_11";
_chest_12 = player getVariable "chest_12";

// injury type per loc
if (_chest_1 > 0) then {
	if (_chest_1 == 1) then { (_display displayCtrl 1211) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_1_s.paa"; }; 	// small
	if (_chest_1 == 2) then { (_display displayCtrl 1212) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_1_m.paa"; }; 	// medium
	if (_chest_1 == 3) then { (_display displayCtrl 1213) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_1_l.paa"; }; 	// large
	if (_chest_1 == 4) then { (_display displayCtrl 1214) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_1_x.paa"; }; 	// xtreme
};
if (_chest_2 > 0) then {
	if (_chest_2 == 1) then { (_display displayCtrl 1221) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_2_s.paa"; }; 	// small
	if (_chest_2 == 2) then { (_display displayCtrl 1222) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_2_m.paa"; }; 	// medium
	if (_chest_2 == 3) then { (_display displayCtrl 1223) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_2_l.paa"; }; 	// large
	if (_chest_2 == 4) then { (_display displayCtrl 1224) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_2_x.paa"; }; 	// xtreme
};
if (_chest_3 > 0) then {
	if (_chest_3 == 1) then { (_display displayCtrl 1231) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_3_s.paa"; }; 	// small
	if (_chest_3 == 2) then { (_display displayCtrl 1232) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_3_m.paa"; }; 	// medium
	if (_chest_3 == 3) then { (_display displayCtrl 1233) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_3_l.paa"; }; 	// large
	if (_chest_3 == 4) then { (_display displayCtrl 1234) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_3_x.paa"; }; 	// xtreme
};
if (_chest_4 > 0) then {
	if (_chest_4 == 1) then { (_display displayCtrl 1241) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_4_s.paa"; }; 	// small
	if (_chest_4 == 2) then { (_display displayCtrl 1242) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_4_m.paa"; }; 	// medium
	if (_chest_4 == 3) then { (_display displayCtrl 1243) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_4_l.paa"; }; 	// large
	if (_chest_4 == 4) then { (_display displayCtrl 1244) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_4_x.paa"; }; 	// xtreme
};
if (_chest_5 > 0) then {
	if (_chest_5 == 1) then { (_display displayCtrl 1251) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_5_s.paa"; }; 	// small
	if (_chest_5 == 2) then { (_display displayCtrl 1252) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_5_m.paa"; }; 	// medium
	if (_chest_5 == 3) then { (_display displayCtrl 1253) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_5_l.paa"; }; 	// large
	if (_chest_5 == 4) then { (_display displayCtrl 1254) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_5_x.paa"; }; 	// xtreme
};
if (_chest_6 > 0) then {
	if (_chest_6 == 1) then { (_display displayCtrl 1261) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_6_s.paa"; }; 	// small
	if (_chest_6 == 2) then { (_display displayCtrl 1262) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_6_m.paa"; }; 	// medium
	if (_chest_6 == 3) then { (_display displayCtrl 1263) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_6_l.paa"; }; 	// large
	if (_chest_6 == 4) then { (_display displayCtrl 1264) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_6_x.paa"; }; 	// xtreme
};
if (_chest_7 > 0) then {
	if (_chest_7 == 1) then { (_display displayCtrl 1271) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_7_s.paa"; }; 	// small
	if (_chest_7 == 2) then { (_display displayCtrl 1272) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_7_m.paa"; }; 	// medium
	if (_chest_7 == 3) then { (_display displayCtrl 1273) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_7_l.paa"; }; 	// large
	if (_chest_7 == 4) then { (_display displayCtrl 1274) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_7_x.paa"; }; 	// xtreme
};
if (_chest_8 > 0) then {
	if (_chest_8 == 1) then { (_display displayCtrl 1281) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_8_s.paa"; }; 	// small
	if (_chest_8 == 2) then { (_display displayCtrl 1282) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_8_m.paa"; }; 	// medium
	if (_chest_8 == 3) then { (_display displayCtrl 1283) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_8_l.paa"; }; 	// large
	if (_chest_8 == 4) then { (_display displayCtrl 1284) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_8_x.paa"; }; 	// xtreme
};
if (_chest_9 > 0) then {
	if (_chest_9 == 1) then { (_display displayCtrl 1291) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_9_s.paa"; }; 	// small
	if (_chest_9 == 2) then { (_display displayCtrl 1292) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_9_m.paa"; }; 	// medium
	if (_chest_9 == 3) then { (_display displayCtrl 1293) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_9_l.paa"; }; 	// large
	if (_chest_9 == 4) then { (_display displayCtrl 1294) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_9_x.paa"; }; 	// xtreme
};
if (_chest_10 > 0) then {
	if (_chest_10 == 1) then { (_display displayCtrl 12101) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_10_s.paa"; }; 	// small
	if (_chest_10 == 2) then { (_display displayCtrl 12102) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_10_m.paa"; }; 	// medium
	if (_chest_10 == 3) then { (_display displayCtrl 12103) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_10_l.paa"; }; 	// large
	if (_chest_10 == 4) then { (_display displayCtrl 12104) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_10_x.paa"; }; 	// xtreme
};
if (_chest_11 > 0) then {
	if (_chest_11 == 1) then { (_display displayCtrl 12111) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_11_s.paa"; }; 	// small
	if (_chest_11 == 2) then { (_display displayCtrl 12112) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_11_m.paa"; }; 	// medium
	if (_chest_11 == 3) then { (_display displayCtrl 12113) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_11_l.paa"; }; 	// large
	if (_chest_11 == 4) then { (_display displayCtrl 12114) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_11_x.paa"; }; 	// xtreme
};
if (_chest_12 > 0) then {
	if (_chest_12 == 1) then { (_display displayCtrl 12121) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_12_s.paa"; }; 	// small
	if (_chest_12 == 2) then { (_display displayCtrl 12122) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_12_m.paa"; }; 	// medium
	if (_chest_12 == 3) then { (_display displayCtrl 12123) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_12_l.paa"; }; 	// large
	if (_chest_12 == 4) then { (_display displayCtrl 12124) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\chest\injury_chest_12_x.paa"; }; 	// xtreme
};






// gut
// each location check
_gut_1 = player getVariable "gut_1";	// 1,2,3,4 (sm,m,lg,x)
_gut_2 = player getVariable "gut_2";
_gut_3 = player getVariable "gut_3";
_gut_4 = player getVariable "gut_4";
_gut_5 = player getVariable "gut_5";
_gut_6 = player getVariable "gut_6";
_gut_7 = player getVariable "gut_7";
_gut_8 = player getVariable "gut_8";

// injury type per loc
if (_gut_1 > 0) then {
	if (_gut_1 == 1) then { (_display displayCtrl 1311) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_1_s.paa"; }; 	// small
	if (_gut_1 == 2) then { (_display displayCtrl 1312) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_1_m.paa"; }; 	// medium
	if (_gut_1 == 3) then { (_display displayCtrl 1313) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_1_l.paa"; }; 	// large
	if (_gut_1 == 4) then { (_display displayCtrl 1314) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_1_x.paa"; }; 	// xtreme
};
if (_gut_2 > 0) then {
	if (_gut_2 == 1) then { (_display displayCtrl 1321) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_2_s.paa"; }; 	// small
	if (_gut_2 == 2) then { (_display displayCtrl 1322) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_2_m.paa"; }; 	// medium
	if (_gut_2 == 3) then { (_display displayCtrl 1323) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_2_l.paa"; }; 	// large
	if (_gut_2 == 4) then { (_display displayCtrl 1324) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_2_x.paa"; }; 	// xtreme
};
if (_gut_3 > 0) then {
	if (_gut_3 == 1) then { (_display displayCtrl 1331) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_3_s.paa"; }; 	// small
	if (_gut_3 == 2) then { (_display displayCtrl 1332) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_3_m.paa"; }; 	// medium
	if (_gut_3 == 3) then { (_display displayCtrl 1333) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_3_l.paa"; }; 	// large
	if (_gut_3 == 4) then { (_display displayCtrl 1334) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_3_x.paa"; }; 	// xtreme
};
if (_gut_4 > 0) then {
	if (_gut_4 == 1) then { (_display displayCtrl 1341) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_4_s.paa"; }; 	// small
	if (_gut_4 == 2) then { (_display displayCtrl 1342) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_4_m.paa"; }; 	// medium
	if (_gut_4 == 3) then { (_display displayCtrl 1343) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_4_l.paa"; }; 	// large
	if (_gut_4 == 4) then { (_display displayCtrl 1344) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_4_x.paa"; }; 	// xtreme
};
if (_gut_5 > 0) then {
	if (_gut_5 == 1) then { (_display displayCtrl 1351) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_5_s.paa"; }; 	// small
	if (_gut_5 == 2) then { (_display displayCtrl 1352) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_5_m.paa"; }; 	// medium
	if (_gut_5 == 3) then { (_display displayCtrl 1353) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_5_l.paa"; }; 	// large
	if (_gut_5 == 4) then { (_display displayCtrl 1354) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_5_x.paa"; }; 	// xtreme
};
if (_gut_6 > 0) then {
	if (_gut_6 == 1) then { (_display displayCtrl 1361) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_6_s.paa"; }; 	// small
	if (_gut_6 == 2) then { (_display displayCtrl 1362) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_6_m.paa"; }; 	// medium
	if (_gut_6 == 3) then { (_display displayCtrl 1363) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_6_l.paa"; }; 	// large
	if (_gut_6 == 4) then { (_display displayCtrl 1364) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_6_x.paa"; }; 	// xtreme
};
if (_gut_7 > 0) then {
	if (_gut_7 == 1) then { (_display displayCtrl 1371) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_7_s.paa"; }; 	// small
	if (_gut_7 == 2) then { (_display displayCtrl 1372) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_7_m.paa"; }; 	// medium
	if (_gut_7 == 3) then { (_display displayCtrl 1373) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_7_l.paa"; }; 	// large
	if (_gut_7 == 4) then { (_display displayCtrl 1374) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_7_x.paa"; }; 	// xtreme
};
if (_gut_8 > 0) then {
	if (_gut_8 == 1) then { (_display displayCtrl 1381) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_8_s.paa"; }; 	// small
	if (_gut_8 == 2) then { (_display displayCtrl 1382) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_8_m.paa"; }; 	// medium
	if (_gut_8 == 3) then { (_display displayCtrl 1383) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_8_l.paa"; }; 	// large
	if (_gut_8 == 4) then { (_display displayCtrl 1384) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\gut\injury_gut_8_x.paa"; }; 	// xtreme
};





// rightarm
// each location check
_rightarm_1 = player getVariable "rightarm_1";	// 1,2,3,4 (sm,m,lg,x)
_rightarm_2 = player getVariable "rightarm_2";
_rightarm_3 = player getVariable "rightarm_3";

// injury type per loc
if (_rightarm_1 > 0) then {
	if (_rightarm_1 == 1) then { (_display displayCtrl 1411) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightarm\injury_rightarm_1_s.paa"; }; 	// small
	if (_rightarm_1 == 2) then { (_display displayCtrl 1412) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightarm\injury_rightarm_1_m.paa"; }; 	// medium
	if (_rightarm_1 == 3) then { (_display displayCtrl 1413) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightarm\injury_rightarm_1_l.paa"; }; 	// large
	if (_rightarm_1 == 4) then { (_display displayCtrl 1414) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightarm\injury_rightarm_1_x.paa"; }; 	// xtreme
};
if (_rightarm_2 > 0) then {
	if (_rightarm_2 == 1) then { (_display displayCtrl 1421) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightarm\injury_rightarm_2_s.paa"; }; 	// small
	if (_rightarm_2 == 2) then { (_display displayCtrl 1422) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightarm\injury_rightarm_2_m.paa"; }; 	// medium
	if (_rightarm_2 == 3) then { (_display displayCtrl 1423) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightarm\injury_rightarm_2_l.paa"; }; 	// large
	if (_rightarm_2 == 4) then { (_display displayCtrl 1424) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightarm\injury_rightarm_2_x.paa"; }; 	// xtreme
};
if (_rightarm_3 > 0) then {
	if (_rightarm_3 == 1) then { (_display displayCtrl 1431) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightarm\injury_rightarm_3_s.paa"; }; 	// small
	if (_rightarm_3 == 2) then { (_display displayCtrl 1432) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightarm\injury_rightarm_3_m.paa"; }; 	// medium
	if (_rightarm_3 == 3) then { (_display displayCtrl 1433) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightarm\injury_rightarm_3_l.paa"; }; 	// large
	if (_rightarm_3 == 4) then { (_display displayCtrl 1434) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightarm\injury_rightarm_3_x.paa"; }; 	// xtreme
};





// leftarm
// each location check
_leftarm_1 = player getVariable "leftarm_1";	// 1,2,3,4 (sm,m,lg,x)
_leftarm_2 = player getVariable "leftarm_2";
_leftarm_3 = player getVariable "leftarm_3";

// injury type per loc
if (_leftarm_1 > 0) then {
	if (_leftarm_1 == 1) then { (_display displayCtrl 1511) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftarm\injury_leftarm_1_s.paa"; }; 	// small
	if (_leftarm_1 == 2) then { (_display displayCtrl 1512) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftarm\injury_leftarm_1_m.paa"; }; 	// medium
	if (_leftarm_1 == 3) then { (_display displayCtrl 1513) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftarm\injury_leftarm_1_l.paa"; }; 	// large
	if (_leftarm_1 == 4) then { (_display displayCtrl 1514) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftarm\injury_leftarm_1_x.paa"; }; 	// xtreme
};
if (_leftarm_2 > 0) then {
	if (_leftarm_2 == 1) then { (_display displayCtrl 1521) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftarm\injury_leftarm_2_s.paa"; }; 	// small
	if (_leftarm_2 == 2) then { (_display displayCtrl 1522) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftarm\injury_leftarm_2_m.paa"; }; 	// medium
	if (_leftarm_2 == 3) then { (_display displayCtrl 1523) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftarm\injury_leftarm_2_l.paa"; }; 	// large
	if (_leftarm_2 == 4) then { (_display displayCtrl 1524) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftarm\injury_leftarm_2_x.paa"; }; 	// xtreme
};
if (_leftarm_3 > 0) then {
	if (_leftarm_3 == 1) then { (_display displayCtrl 1531) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftarm\injury_leftarm_3_s.paa"; }; 	// small
	if (_leftarm_3 == 2) then { (_display displayCtrl 1532) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftarm\injury_leftarm_3_m.paa"; }; 	// medium
	if (_leftarm_3 == 3) then { (_display displayCtrl 1533) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftarm\injury_leftarm_3_l.paa"; }; 	// large
	if (_leftarm_3 == 4) then { (_display displayCtrl 1534) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftarm\injury_leftarm_3_x.paa"; }; 	// xtreme
};







// rightforearm
// each location check
_rightforearm_1 = player getVariable "rightforearm_1";	// 1,2,3,4 (sm,m,lg,x)
_rightforearm_2 = player getVariable "rightforearm_2";
_rightforearm_3 = player getVariable "rightforearm_3";
_rightforearm_4 = player getVariable "rightforearm_4";

// injury type per loc
if (_rightforearm_1 > 0) then {
	if (_rightforearm_1 == 1) then { (_display displayCtrl 1611) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_1_s.paa"; }; 	// small
	if (_rightforearm_1 == 2) then { (_display displayCtrl 1612) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_1_m.paa"; }; 	// medium
	if (_rightforearm_1 == 3) then { (_display displayCtrl 1613) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_1_l.paa"; }; 	// large
	if (_rightforearm_1 == 4) then { (_display displayCtrl 1614) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_1_x.paa"; }; 	// xtreme
};
if (_rightforearm_2 > 0) then {
	if (_rightforearm_2 == 1) then { (_display displayCtrl 1621) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_2_s.paa"; }; 	// small
	if (_rightforearm_2 == 2) then { (_display displayCtrl 1622) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_2_m.paa"; }; 	// medium
	if (_rightforearm_2 == 3) then { (_display displayCtrl 1623) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_2_l.paa"; }; 	// large
	if (_rightforearm_2 == 4) then { (_display displayCtrl 1624) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_2_x.paa"; }; 	// xtreme
};
if (_rightforearm_3 > 0) then {
	if (_rightforearm_3 == 1) then { (_display displayCtrl 1631) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_3_s.paa"; }; 	// small
	if (_rightforearm_3 == 2) then { (_display displayCtrl 1632) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_3_m.paa"; }; 	// medium
	if (_rightforearm_3 == 3) then { (_display displayCtrl 1633) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_3_l.paa"; }; 	// large
	if (_rightforearm_3 == 4) then { (_display displayCtrl 1634) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_3_x.paa"; }; 	// xtreme
};
if (_rightforearm_4 > 0) then {
	if (_rightforearm_4 == 1) then { (_display displayCtrl 1641) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_4_s.paa"; }; 	// small
	if (_rightforearm_4 == 2) then { (_display displayCtrl 1642) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_4_m.paa"; }; 	// medium
	if (_rightforearm_4 == 3) then { (_display displayCtrl 1643) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_4_l.paa"; }; 	// large
	if (_rightforearm_4 == 4) then { (_display displayCtrl 1644) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightforearm\injury_rightforearm_4_x.paa"; }; 	// xtreme
};





// leftforearm
// each location check
_leftforearm_1 = player getVariable "leftforearm_1";	// 1,2,3,4 (sm,m,lg,x)
_leftforearm_2 = player getVariable "leftforearm_2";
_leftforearm_3 = player getVariable "leftforearm_3";
_leftforearm_4 = player getVariable "leftforearm_4";

// injury type per loc
if (_leftforearm_1 > 0) then {
	if (_leftforearm_1 == 1) then { (_display displayCtrl 1711) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_1_s.paa"; }; 	// small
	if (_leftforearm_1 == 2) then { (_display displayCtrl 1712) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_1_m.paa"; }; 	// medium
	if (_leftforearm_1 == 3) then { (_display displayCtrl 1713) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_1_l.paa"; }; 	// large
	if (_leftforearm_1 == 4) then { (_display displayCtrl 1714) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_1_x.paa"; }; 	// xtreme
};
if (_leftforearm_2 > 0) then {
	if (_leftforearm_2 == 1) then { (_display displayCtrl 1721) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_2_s.paa"; }; 	// small
	if (_leftforearm_2 == 2) then { (_display displayCtrl 1722) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_2_m.paa"; }; 	// medium
	if (_leftforearm_2 == 3) then { (_display displayCtrl 1723) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_2_l.paa"; }; 	// large
	if (_leftforearm_2 == 4) then { (_display displayCtrl 1724) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_2_x.paa"; }; 	// xtreme
};
if (_leftforearm_3 > 0) then {
	if (_leftforearm_3 == 1) then { (_display displayCtrl 1731) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_3_s.paa"; }; 	// small
	if (_leftforearm_3 == 2) then { (_display displayCtrl 1732) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_3_m.paa"; }; 	// medium
	if (_leftforearm_3 == 3) then { (_display displayCtrl 1733) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_3_l.paa"; }; 	// large
	if (_leftforearm_3 == 4) then { (_display displayCtrl 1734) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_3_x.paa"; }; 	// xtreme
};
if (_leftforearm_4 > 0) then {
	if (_leftforearm_4 == 1) then { (_display displayCtrl 1741) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_4_s.paa"; }; 	// small
	if (_leftforearm_4 == 2) then { (_display displayCtrl 1742) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_4_m.paa"; }; 	// medium
	if (_leftforearm_4 == 3) then { (_display displayCtrl 1743) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_4_l.paa"; }; 	// large
	if (_leftforearm_4 == 4) then { (_display displayCtrl 1744) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftforearm\injury_leftforearm_4_x.paa"; }; 	// xtreme
};






// rightupleg
// each location check
_rightupleg_1 = player getVariable "rightupleg_1";	// 1,2,3,4 (sm,m,lg,x)
_rightupleg_2 = player getVariable "rightupleg_2";
_rightupleg_3 = player getVariable "rightupleg_3";
_rightupleg_4 = player getVariable "rightupleg_4";
_rightupleg_5 = player getVariable "rightupleg_5";

// injury type per loc
if (_rightupleg_1 > 0) then {
	if (_rightupleg_1 == 1) then { (_display displayCtrl 1811) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_1_s.paa"; }; 	// small
	if (_rightupleg_1 == 2) then { (_display displayCtrl 1812) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_1_m.paa"; }; 	// medium
	if (_rightupleg_1 == 3) then { (_display displayCtrl 1813) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_1_l.paa"; }; 	// large
	if (_rightupleg_1 == 4) then { (_display displayCtrl 1814) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_1_x.paa"; }; 	// xtreme
};
if (_rightupleg_2 > 0) then {
	if (_rightupleg_2 == 1) then { (_display displayCtrl 1821) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_2_s.paa"; }; 	// small
	if (_rightupleg_2 == 2) then { (_display displayCtrl 1822) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_2_m.paa"; }; 	// medium
	if (_rightupleg_2 == 3) then { (_display displayCtrl 1823) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_2_l.paa"; }; 	// large
	if (_rightupleg_2 == 4) then { (_display displayCtrl 1824) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_2_x.paa"; }; 	// xtreme
};
if (_rightupleg_3 > 0) then {
	if (_rightupleg_3 == 1) then { (_display displayCtrl 1831) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_3_s.paa"; }; 	// small
	if (_rightupleg_3 == 2) then { (_display displayCtrl 1832) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_3_m.paa"; }; 	// medium
	if (_rightupleg_3 == 3) then { (_display displayCtrl 1833) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_3_l.paa"; }; 	// large
	if (_rightupleg_3 == 4) then { (_display displayCtrl 1834) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_3_x.paa"; }; 	// xtreme
};
if (_rightupleg_4 > 0) then {
	if (_rightupleg_4 == 1) then { (_display displayCtrl 1841) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_4_s.paa"; }; 	// small
	if (_rightupleg_4 == 2) then { (_display displayCtrl 1842) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_4_m.paa"; }; 	// medium
	if (_rightupleg_4 == 3) then { (_display displayCtrl 1843) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_4_l.paa"; }; 	// large
	if (_rightupleg_4 == 4) then { (_display displayCtrl 1844) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_4_x.paa"; }; 	// xtreme
};
if (_rightupleg_5 > 0) then {
	if (_rightupleg_5 == 1) then { (_display displayCtrl 1851) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_5_s.paa"; }; 	// small
	if (_rightupleg_5 == 2) then { (_display displayCtrl 1852) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_5_m.paa"; }; 	// medium
	if (_rightupleg_5 == 3) then { (_display displayCtrl 1853) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_5_l.paa"; }; 	// large
	if (_rightupleg_5 == 4) then { (_display displayCtrl 1854) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightupleg\injury_rightupleg_5_x.paa"; }; 	// xtreme
};







// leftupleg
// each location check
_leftupleg_1 = player getVariable "leftupleg_1";	// 1,2,3,4 (sm,m,lg,x)
_leftupleg_2 = player getVariable "leftupleg_2";
_leftupleg_3 = player getVariable "leftupleg_3";
_leftupleg_4 = player getVariable "leftupleg_4";
_leftupleg_5 = player getVariable "leftupleg_5";

// injury type per loc
if (_leftupleg_1 > 0) then {
	if (_leftupleg_1 == 1) then { (_display displayCtrl 1911) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_1_s.paa"; }; 	// small
	if (_leftupleg_1 == 2) then { (_display displayCtrl 1912) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_1_m.paa"; }; 	// medium
	if (_leftupleg_1 == 3) then { (_display displayCtrl 1913) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_1_l.paa"; }; 	// large
	if (_leftupleg_1 == 4) then { (_display displayCtrl 1914) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_1_x.paa"; }; 	// xtreme
};
if (_leftupleg_2 > 0) then {
	if (_leftupleg_2 == 1) then { (_display displayCtrl 1921) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_2_s.paa"; }; 	// small
	if (_leftupleg_2 == 2) then { (_display displayCtrl 1922) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_2_m.paa"; }; 	// medium
	if (_leftupleg_2 == 3) then { (_display displayCtrl 1923) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_2_l.paa"; }; 	// large
	if (_leftupleg_2 == 4) then { (_display displayCtrl 1924) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_2_x.paa"; }; 	// xtreme
};
if (_leftupleg_3 > 0) then {
	if (_leftupleg_3 == 1) then { (_display displayCtrl 1931) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_3_s.paa"; }; 	// small
	if (_leftupleg_3 == 2) then { (_display displayCtrl 1932) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_3_m.paa"; }; 	// medium
	if (_leftupleg_3 == 3) then { (_display displayCtrl 1933) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_3_l.paa"; }; 	// large
	if (_leftupleg_3 == 4) then { (_display displayCtrl 1934) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_3_x.paa"; }; 	// xtreme
};
if (_leftupleg_4 > 0) then {
	if (_leftupleg_4 == 1) then { (_display displayCtrl 1941) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_4_s.paa"; }; 	// small
	if (_leftupleg_4 == 2) then { (_display displayCtrl 1942) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_4_m.paa"; }; 	// medium
	if (_leftupleg_4 == 3) then { (_display displayCtrl 1943) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_4_l.paa"; }; 	// large
	if (_leftupleg_4 == 4) then { (_display displayCtrl 1944) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_4_x.paa"; }; 	// xtreme
};
if (_leftupleg_5 > 0) then {
	if (_leftupleg_5 == 1) then { (_display displayCtrl 1951) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_5_s.paa"; }; 	// small
	if (_leftupleg_5 == 2) then { (_display displayCtrl 1952) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_5_m.paa"; }; 	// medium
	if (_leftupleg_5 == 3) then { (_display displayCtrl 1953) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_5_l.paa"; }; 	// large
	if (_leftupleg_5 == 4) then { (_display displayCtrl 1954) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftupleg\injury_leftupleg_5_x.paa"; }; 	// xtreme
};







// rightleg
// each location check
_rightleg_1 = player getVariable "rightleg_1";	// 1,2,3,4 (sm,m,lg,x)
_rightleg_2 = player getVariable "rightleg_2";
_rightleg_3 = player getVariable "rightleg_3";
_rightleg_4 = player getVariable "rightleg_4";

// injury type per loc
if (_rightleg_1 > 0) then {
	if (_rightleg_1 == 1) then { (_display displayCtrl 11011) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_1_s.paa"; }; 	// small
	if (_rightleg_1 == 2) then { (_display displayCtrl 11012) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_1_m.paa"; }; 	// medium
	if (_rightleg_1 == 3) then { (_display displayCtrl 11013) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_1_l.paa"; }; 	// large
	if (_rightleg_1 == 4) then { (_display displayCtrl 11014) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_1_x.paa"; }; 	// xtreme
};
if (_rightleg_2 > 0) then {
	if (_rightleg_2 == 1) then { (_display displayCtrl 11021) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_2_s.paa"; }; 	// small
	if (_rightleg_2 == 2) then { (_display displayCtrl 11022) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_2_m.paa"; }; 	// medium
	if (_rightleg_2 == 3) then { (_display displayCtrl 11023) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_2_l.paa"; }; 	// large
	if (_rightleg_2 == 4) then { (_display displayCtrl 11024) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_2_x.paa"; }; 	// xtreme
};
if (_rightleg_3 > 0) then {
	if (_rightleg_3 == 1) then { (_display displayCtrl 11031) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_3_s.paa"; }; 	// small
	if (_rightleg_3 == 2) then { (_display displayCtrl 11032) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_3_m.paa"; }; 	// medium
	if (_rightleg_3 == 3) then { (_display displayCtrl 11033) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_3_l.paa"; }; 	// large
	if (_rightleg_3 == 4) then { (_display displayCtrl 11034) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_3_x.paa"; }; 	// xtreme
};
if (_rightleg_4 > 0) then {
	if (_rightleg_4 == 1) then { (_display displayCtrl 11041) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_4_s.paa"; }; 	// small
	if (_rightleg_4 == 2) then { (_display displayCtrl 11042) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_4_m.paa"; }; 	// medium
	if (_rightleg_4 == 3) then { (_display displayCtrl 11043) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_4_l.paa"; }; 	// large
	if (_rightleg_4 == 4) then { (_display displayCtrl 11044) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightleg\injury_rightleg_4_x.paa"; }; 	// xtreme
};










// leftleg
// each location check
_leftleg_1 = player getVariable "leftleg_1";	// 1,2,3,4 (sm,m,lg,x)
_leftleg_2 = player getVariable "leftleg_2";
_leftleg_3 = player getVariable "leftleg_3";
_leftleg_4 = player getVariable "leftleg_4";

// injury type per loc
if (_leftleg_1 > 0) then {
	if (_leftleg_1 == 1) then { (_display displayCtrl 11111) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_1_s.paa"; }; 	// small
	if (_leftleg_1 == 2) then { (_display displayCtrl 11112) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_1_m.paa"; }; 	// medium
	if (_leftleg_1 == 3) then { (_display displayCtrl 11113) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_1_l.paa"; }; 	// large
	if (_leftleg_1 == 4) then { (_display displayCtrl 11114) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_1_x.paa"; }; 	// xtreme
};
if (_leftleg_2 > 0) then {
	if (_leftleg_2 == 1) then { (_display displayCtrl 11121) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_2_s.paa"; }; 	// small
	if (_leftleg_2 == 2) then { (_display displayCtrl 11122) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_2_m.paa"; }; 	// medium
	if (_leftleg_2 == 3) then { (_display displayCtrl 11123) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_2_l.paa"; }; 	// large
	if (_leftleg_2 == 4) then { (_display displayCtrl 11124) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_2_x.paa"; }; 	// xtreme
};
if (_leftleg_3 > 0) then {
	if (_leftleg_3 == 1) then { (_display displayCtrl 11131) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_3_s.paa"; }; 	// small
	if (_leftleg_3 == 2) then { (_display displayCtrl 11132) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_3_m.paa"; }; 	// medium
	if (_leftleg_3 == 3) then { (_display displayCtrl 11133) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_3_l.paa"; }; 	// large
	if (_leftleg_3 == 4) then { (_display displayCtrl 11134) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_3_x.paa"; }; 	// xtreme
};
if (_leftleg_4 > 0) then {
	if (_leftleg_4 == 1) then { (_display displayCtrl 11141) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_4_s.paa"; }; 	// small
	if (_leftleg_4 == 2) then { (_display displayCtrl 11142) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_4_m.paa"; }; 	// medium
	if (_leftleg_4 == 3) then { (_display displayCtrl 11143) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_4_l.paa"; }; 	// large
	if (_leftleg_4 == 4) then { (_display displayCtrl 11144) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftleg\injury_leftleg_4_x.paa"; }; 	// xtreme
};








// rightfoot
// each location check
_rightfoot_1 = player getVariable "rightfoot_1";	// 1,2,3,4 (sm,m,lg,x)
_rightfoot_2 = player getVariable "rightfoot_2";

// injury type per loc
if (_rightfoot_1 > 0) then {
	if (_rightfoot_1 == 1) then { (_display displayCtrl 11211) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightfoot\injury_rightfoot_1_s.paa"; }; 	// small
	if (_rightfoot_1 == 2) then { (_display displayCtrl 11212) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightfoot\injury_rightfoot_1_m.paa"; }; 	// medium
	if (_rightfoot_1 == 3) then { (_display displayCtrl 11213) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightfoot\injury_rightfoot_1_l.paa"; }; 	// large
	if (_rightfoot_1 == 4) then { (_display displayCtrl 11214) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightfoot\injury_rightfoot_1_x.paa"; }; 	// xtreme
};
if (_rightfoot_2 > 0) then {
	if (_rightfoot_2 == 1) then { (_display displayCtrl 11221) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightfoot\injury_rightfoot_2_s.paa"; }; 	// small
	if (_rightfoot_2 == 2) then { (_display displayCtrl 11222) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightfoot\injury_rightfoot_2_m.paa"; }; 	// medium
	if (_rightfoot_2 == 3) then { (_display displayCtrl 11223) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightfoot\injury_rightfoot_2_l.paa"; }; 	// large
	if (_rightfoot_2 == 4) then { (_display displayCtrl 11224) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\rightfoot\injury_rightfoot_2_x.paa"; }; 	// xtreme
};





// leftfoot
// each location check
_leftfoot_1 = player getVariable "leftfoot_1";	// 1,2,3,4 (sm,m,lg,x)
_leftfoot_2 = player getVariable "leftfoot_2";

// injury type per loc
if (_leftfoot_1 > 0) then {
	if (_leftfoot_1 == 1) then { (_display displayCtrl 11311) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftfoot\injury_leftfoot_1_s.paa"; }; 	// small
	if (_leftfoot_1 == 2) then { (_display displayCtrl 11312) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftfoot\injury_leftfoot_1_m.paa"; }; 	// medium
	if (_leftfoot_1 == 3) then { (_display displayCtrl 11313) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftfoot\injury_leftfoot_1_l.paa"; }; 	// large
	if (_leftfoot_1 == 4) then { (_display displayCtrl 11314) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftfoot\injury_leftfoot_1_x.paa"; }; 	// xtreme
};
if (_leftfoot_2 > 0) then {
	if (_leftfoot_2 == 1) then { (_display displayCtrl 11321) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftfoot\injury_leftfoot_2_s.paa"; }; 	// small
	if (_leftfoot_2 == 2) then { (_display displayCtrl 11322) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftfoot\injury_leftfoot_2_m.paa"; }; 	// medium
	if (_leftfoot_2 == 3) then { (_display displayCtrl 11323) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftfoot\injury_leftfoot_2_l.paa"; }; 	// large
	if (_leftfoot_2 == 4) then { (_display displayCtrl 11324) ctrlSetText "\vqi_core\VQI-StartingOptions\Medical\leftfoot\injury_leftfoot_2_x.paa"; }; 	// xtreme
};











//sleep 7;
//closeDialog 0;
//2 cutText ["","PLAIN"];




////////////////
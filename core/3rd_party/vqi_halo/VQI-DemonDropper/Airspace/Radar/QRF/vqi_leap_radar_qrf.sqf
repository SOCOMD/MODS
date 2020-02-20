//
//
if (VQI_HINTS_HALO == 1) then { hint "radar_qrf.sqf"; };
sleep 1;


private ["_unit","_posA","_posB","_posP","_rDir","_heliBad","_wpH1","_wpS1","_wpH2","_wpS2","_wpS3","_wpS4","_wpS5","_wpH3","_posQRF"];

_unit = _this select 0;


_posA = [getPos player, 3000, random 360] call BIS_fnc_relPos;
_posB = [getPos player, 3000, random 360] call BIS_fnc_relPos;
_posP = getPos player; 
_rDir = random 360;



//////////////////////////////////////////////////////////
if (VQI_LEAP_RAD_QRF == 1) then { // RED - OPFOR - CSAT

	heliCrw = createGroup EAST;
	
	if (true) then {
		_heliBad = [_posA, _rDir, "O_Heli_Transport_04_bench_F", heliCrw] call BIS_fnc_spawnVehicle; // 1.Mi-290 Taru (transport)
		
		_rSquad = ["OI_reconPatrol","OI_reconSentry","OI_reconTeam","OIA_InfSentry","OIA_InfSquad","OIA_InfSquad_Weapons","OIA_InfTeam","OIA_InfTeam_AA","OIA_InfTeam_AT"] call BIS_fnc_selectRandom;	//
		heliQRF = [_posA, EAST, (configFile >> "CfgGroups" >> "EAST" >> "OPF_F" >> "Infantry" >> _rSquad)] call BIS_fnc_spawnGroup; 	//
		{_x assignAsCargo (_heliBad select 0); _x moveInCargo (_heliBad select 0);} forEach (units heliQRF);
	};
};

////////////////////////////////////////////////////////////
if (VQI_LEAP_RAD_QRF == 2) then { // GREEN - INDEP - AAF

	heliCrw = createGroup RESISTANCE;
	
	if (true) then {
		_heliBad = [_posA, _rDir, "I_Heli_Transport_02_F", heliCrw] call BIS_fnc_spawnVehicle; // 1.CH-49 Mohawk (transport)
		
		_rSquad = ["HAF_InfSentry","HAF_InfSquad","HAF_InfSquad_Weapons","HAF_InfTeam","HAF_InfTeam_AA","HAF_InfTeam_AT"] call BIS_fnc_selectRandom;	//
		heliQRF = [_posA, RESISTANCE, (configFile >> "CfgGroups" >> "INDEP" >> "IND_F" >> "Infantry" >> _rSquad)] call BIS_fnc_spawnGroup; 	//
		{_x assignAsCargo (_heliBad select 0); _x moveInCargo (_heliBad select 0);} forEach (units heliQRF);
	};
};

////////////////////////////////////////////////////////////
if (VQI_LEAP_RAD_QRF == 3) then { // BLUE - BLUFOR - NATO

	heliCrw = createGroup WEST;
	
	if (true) then {
		_heliBad = [_posA, _rDir, "B_Heli_Transport_03_F", heliCrw] call BIS_fnc_spawnVehicle; // 1.CH-67 Huron (transport)
		
		_rSquad = ["BUF_InfSentry","BUS_InfSquad","BUS_InfSquad_Weapons","BUS_InfTeam","BUS_InfTeam_AA","BUS_InfTeam_AT"] call BIS_fnc_selectRandom;	//
		heliQRF = [_posA, WEST, (configFile >> "CfgGroups" >> "WEST" >> "BLU_F" >> "Infantry" >> _rSquad)] call BIS_fnc_spawnGroup; 	//
		{_x assignAsCargo (_heliBad select 0); _x moveInCargo (_heliBad select 0);} forEach (units heliQRF);
	};
};

//////////////////////////////////////////////////////////////////
if (VQI_LEAP_RAD_QRF == 4) then { // RED - OPFOR - RHS RUSSIANS

	heliCrw = createGroup EAST;
	
	if (true) then {
		_heliBad = [_posA, _rDir, "RHS_Mi8AMTSh_UPK23_vvsc", heliCrw] call BIS_fnc_spawnVehicle; // 1.MI-8 (attack-transport)
		
		_rSquad = ["rhs_group_rus_vdv_mi8_squad","rhs_group_rus_vdv_mi8_squad_2mg","rhs_group_rus_vdv_mi8_squad_sniper","rhs_group_rus_vdv_mi8_squad_mg_sniper"] call BIS_fnc_selectRandom;	//
		heliQRF = [_posA, EAST, (configFile >> "CfgGroups" >> "EAST" >> "rhs_faction_vdv" >> "rhs_group_rus_vdv_mi8" >> _rSquad)] call BIS_fnc_spawnGroup; 	//
		{_x assignAsCargo (_heliBad select 0); _x moveInCargo (_heliBad select 0);} forEach (units heliQRF);
	};
};
sleep 1;







// Skill Setup?
//[heliQRF] call VQI_SCAR_fnc_Xskill; 	
//[heliQRF] call VQI_SCAR_fnc_Xitems;
//	-OR-
//{ _x setSkill 0.3 } forEach (units heliQRF); // Advanced QRF Team?
sleep 5;




// find nearby Landing Area
// [position, minDist, maxDist, objDist, waterMode, maxGrad, shoreMode, blacklistPos, defaultPos]
_posQRF = [getPos player, 10, 1000, 15, 0, 0.5, 0] call BIS_fnc_findSafePos;	// way too random (not close enough)

//_posQRF = getPos player findEmptyPosition [1,1000,"I_Heli_Transport_02_F"];		// too slow (not always flat enough)
sleep 5;



//////////////////////////////////////////////////////////////////
// Patrols & Troop movement //////////////////////////////////////

_wpH1 = heliCrw addWaypoint [_posQRF, 0]; 	// getPos player
_wpH1 setWaypointType "TR UNLOAD";
_wpH1 setWaypointSpeed "NORMAL";
_wpH1 setWaypointStatements ["true","(vehicle this) land 'land';"];
_wpH1 setWaypointBehaviour "CARELESS";		// AWARE?

sleep 60;

if (VQI_HINTS_HALO == 1) then { hint "Cargo Unload..."; };
_wpS1 = heliQRF addWaypoint [getPos player, 0];
_wpS1 setWaypointType "GETOUT";
//_wpS1 synchronizeWaypoint [_wpH1, 0];

sleep 60 + (random 120);

if (VQI_HINTS_HALO == 1) then { hint "HELI Move Out... PATROL/SPOT"; };
_wpH2 = heliCrw addWaypoint [getPos player, 1];
_wpH2 setWaypointType "MOVE";
_wpH2 setWaypointSpeed "FULL";
_wpH2 setWaypointStatements ["true","[group this, getPos this, 3000] call BIS_fnc_taskPatrol;"]; //getPos player?

sleep 5 + (random 120);

if (true) then { // -TBD-  Tracking Guide or Guillie-Suit Modifier

	if (VQI_HINTS_HALO == 1) then { hint "QRF hunting..."; };
	_wpS2 = heliQRF addWaypoint [getPos player, 1];
	_wpS2 setWaypointType "MOVE";
	_wpS2 setWaypointSpeed "LIMITED";
	_wpS2 setWaypointBehaviour "AWARE";		// Stealth, Aware, Combat, Safe, Careless, Unchanged
	_wpS2 setWaypointCombatMode "RED";		// BLUE (never), RED (fire,engage), GREEN (defend), etc

	sleep 60 + (random 1200);

	if (VQI_HINTS_HALO == 1) then { hint "QRF still hunting..."; };
	_wpS3 = heliQRF addWaypoint [getPos player, 2];
	_wpS3 setWaypointType "MOVE";
	_wpS3 setWaypointSpeed "LIMITED";
	_wpS3 setWaypointBehaviour "AWARE";		// Stealth, Aware, Combat, Safe, Careless, Unchanged
	_wpS3 setWaypointCombatMode "RED";		// BLUE (never), RED (fire,engage), GREEN (defend), etc
	
	sleep 60 + (random 1200);

	if (VQI_HINTS_HALO == 1) then { hint "QRF still hunting..."; };
	_wpS4 = heliQRF addWaypoint [getPos player, 3];
	_wpS4 setWaypointType "MOVE";
	_wpS4 setWaypointSpeed "LIMITED";
	_wpS4 setWaypointBehaviour "AWARE";		// Stealth, Aware, Combat, Safe, Careless, Unchanged
	_wpS4 setWaypointCombatMode "RED";		// BLUE (never), RED (fire,engage), GREEN (defend), etc
	
	sleep 60 + (random 1200);

	if (VQI_HINTS_HALO == 1) then { hint "QRF still hunting..."; };
	_wpS5 = heliQRF addWaypoint [getPos player, 4];
	_wpS5 setWaypointType "MOVE";
	_wpS5 setWaypointSpeed "LIMITED";
	_wpS5 setWaypointBehaviour "AWARE";		// Stealth, Aware, Combat, Safe, Careless, Unchanged
	_wpS5 setWaypointCombatMode "RED";		// BLUE (never), RED (fire,engage), GREEN (defend), etc
};


sleep 5;

if (VQI_HINTS_HALO == 1) then { hint "HELI, Break Contact"; };
_wpH3 = heliCrw addWaypoint [_posA, 2]; // land/leave?
_wpH3 setWaypointType "GETOUT";
_wpH3 setWaypointSpeed "LIMITED";
_wpH3 setWaypointStatements ["true","(vehicle this) land 'land';"];
_wpH3 setWaypointBehaviour "CARELESS";








// Delete Unnecessary Units
[heliCrw] execVM "vqi_halo\VQI-DemonDropper\Airspace\Radar\QRF\vqi_leap_x_despawn.sqf";
sleep 1;
[heliQRF] execVM "vqi_halo\VQI-DemonDropper\Airspace\Radar\QRF\vqi_leap_x_despawn.sqf";
sleep 1;













sleep 1;
if (VQI_HINTS_HALO == 1) then { hint "radar_qrf.sqf -END-"; };

//
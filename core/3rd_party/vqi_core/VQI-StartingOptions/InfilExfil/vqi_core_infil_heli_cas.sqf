//
//




private ["_posCAS","_cas","_wpC1","_wpC2"];


sleep 10;
_posCAS = coreHELI modelToWorld [-100, -300, 0]; // -L/R, -B/F, -D/U

_cas = VQI_CORE_COREHELI_4CAS;
coreCAS = createVehicle [_cas, _posCAS, [], 0, "FLY"];
createVehicleCrew coreCAS; publicVariable "coreCAS"; 



sleep 1;



_cas = coreCAS;
_cas setGroupID ["ECHO CAS"];
_cas move getMarkerPos "mkrCORE_LZ";
_cas flyInHeight 100;
_cas setSpeedMode "FULL";
sleep 60;



_wpC1 = (group coreCAS) addWaypoint [getMarkerPos "mkrCORE_LZ", 1];
_wpC1 setWaypointType "SAD";			//
_wpC1 setWaypointSpeed "FULL";			//
_wpC1 setWaypointBehaviour "COMBAT";	//
_wpC1 setWaypointCombatMode "RED";		// FIRE-AT-WILL
sleep 1;








casRTB = 0;
waitUntil { sleep 10; casRTB > 0; }; sleep 20;




_cas setCombatMode "BLUE";				// HOLD FIRE
sleep 1;

systemChat format ["%1 CAS is RTB! Good Luck down there gentlemen...",coreCAS];
_cas move (getMarkerPos "mkrCORE_IN");
_cas setSpeedMode "FULL";
sleep 1;

_wpC2 = (group coreCAS) addWaypoint [getMarkerPos "mkrCORE_IN", 2];
_wpC2 setWaypointType "MOVE";			//
_wpC2 setWaypointSpeed "FULL";			//
_wpC2 setWaypointBehaviour "CARELESS";	//
_wpC2 setWaypointCombatMode "BLUE";		// HOLD FIRE

	

//---------------------------------------------------------------
waitUntil { sleep 5; (getMarkerPos "mkrCORE_LZ") distance2D _cas > 3000; };
sleep 2;



systemChat format ["%1 CAS is Off-Station... Over & Out!",coreCAS];
sleep 2;


{ if (vehicle _x != _x) then { deleteVehicle vehicle _x; }; deleteVehicle _x }
forEach (units coreCAS);
sleep 2;


coreCAS = nil;
publicVariable "coreCAS";	
	
	
	
	
	
	
	
	
	
	

////////////////////
/* NOTES:


*/
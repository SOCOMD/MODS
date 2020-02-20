// Random Location - Land - 1 position
//



coreRandomPos = false;


if (isServer) then {

	_mapSize = worldSize;
	_mapHalf = _mapSize / 2;
	_mapCent = [_mapHalf, _mapHalf, 0];

	//									land/water		shore
	// [position, minDist, maxDist, objDist, 0l/1a/2w, maxGrad, 0a/1s, blacklistPos, defaultPos]
	posFSP = [_mapCent, 1, (_mapSize * 1.2), 1, 0, 0.5, 0] call BIS_fnc_findSafePos;
	sleep 1;
	
	
	publicVariable "posFSP"; sleep 1;
	coreRandomPos = true;
	publicVariable "coreRandomPos";
};


// each player, same location
waitUntil { sleep 1; coreRandomPos; };
player setPos posFSP;











//////////////////////////
/* NOTES:


*/
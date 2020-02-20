// Random Buidling/Object (house class) Positions
// might be overkill/redundent



// map data
_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];

// [position, minDist, maxDist, objDist, 0l/1a/2w, maxGrad, 0a/1s, blacklistPos, defaultPos]
_posFSP = [_mapCent, 1, (_mapSize * 1.2), 1, 0, 0.5, 0] call BIS_fnc_findSafePos;
sleep 1;





// all "house" class objects
_allBuildings = nearestTerrainObjects [_posFSP, ["HOUSE"], _mapSize, false, true];
_allPositions = [];
_allBuildings apply { _allPositions append (_x buildingPos -1) };
_rPos = selectRandom _allPositions;
sleep 1;


// set player
player setPos _rPos;












///////////////////////
/* NOTES:


_allBuildings = ( nearestObjects [_pos, ["Land_Cargo_House_V1_F"], _radius] select {_x buildingPos -1 != []} );
_rBld = selectRandom _allBuildings;
_rPos = selectRandom (_rBld buildingPos -1);
player setPos _rPos;

*/
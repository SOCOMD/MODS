// Random Location - Water - EACH Player in different location
//




_mapSize = worldSize;
_mapHalf = _mapSize / 2;
_mapCent = [_mapHalf, _mapHalf, 0];

//									land/water		shore
// [position, minDist, maxDist, objDist, 0l/1a/2w, maxGrad, 0a/1s, blacklistPos, defaultPos]
_posFSP = [_mapCent, 1, (_mapSize * 0.6), 1, 2, 0.5, 0] call BIS_fnc_findSafePos;
sleep 1;




player setPos _posFSP;











//////////////////////////
/* NOTES:


*/
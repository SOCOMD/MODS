//===================================================================================================================
// This script is called to "map" (spawn) any Zeus/Editor saved objects around the reference position. Mapped compositions will be
// called from the file with the format example below. The File Path should be clearly specified and the File already pre-set.
// How to use: Execute this in an execution box, addAction command, scripts, triggers, etc. EXAMPLE:
//
//             null = ["mkrName","fileLoc"] execVM "objectsMapper.sqf";
//
//             "mkrName" = name of the marker which serves as the reference point where the objects will spawn. 
//             "fileLoc" = is the file directory path to the pre-set path/file.sqf.   Example:"fob\molos_1.sqf"
//===================================================================================================================



private ["_refName","_fileLoc"];


_refName  = _this select 0;
_fileLoc  = _this select 1;

if (VQI_HINTS_CORE == 1) then { hint "Placing compilations..."; };

0 = [getPos _refName, 0, call (compile (preprocessFileLineNumbers _fileLoc))] call BIS_fnc_ObjectsMapper;
disableSerialization;
#include "macro.sqf"
if(!isNil 'ASORVS_loading_preset' ) exitWith {hint "Still applying gear. Please wait before reopening Gear Selector.";};
if(isNil '_this') exitWith { "No parameters"; };
//this addAction ["Tank Garage", {[["tanks"], "vehiclespawn1"] execVM 'ASORVS\open.sqf'}];

ASORVS_PosIsASL = "false";
ASORVS_VehicleTypes = [_this, 0, [], [[]]] call BIS_fnc_Param;
ASORVS_VehicleWhitelist = [_this, 1, [], [[]]] call BIS_fnc_Param;
ASORVS_VehicleSpawnPos = getPos ([_this, 2] call BIS_fnc_Param);
ASORVS_VehicleSpawnDir = direction ([_this, 2] call BIS_fnc_Param);
ASORVS_VehicleSpawnPoint = ([_this, 2] call BIS_fnc_Param);
ASORVS_VehicleSpawnPosASL = getPosASL ([_this, 2] call BIS_fnc_Param);
ASORVS_PositionType = [_this, 3, ""] call BIS_fnc_Param;
if(ASORVS_PositionType == "SEA") then { ASORVS_VehicleSpawnPos = [0,0,1000];ASORVS_PosIsASL = "true";};
ASORVS_VehicleSpawnRadius = [_this, 4, 8, [0]] call BIS_fnc_Param;
ASORVS_VehicleSpawnName = [_this, 5, "Vehicle Pad", [""]] call BIS_fnc_Param;
if((format["%1", ASORVS_VehicleSpawnPos]) == "[0,0,0]" ) exitWith {hint "Invalid spawn marker."};

ASORVS_FirstLoad = true;
if(isNil 'ASORVS_CurrentVehicle') then {ASORVS_CurrentVehicle = ""};
ASORVS_Clone = objNull;
ASORVS_VehicleSpawnPosClear = false;

createDialog "ASORVS_Main_Dialog";
[] call ASORVS_fnc_CameraStart;

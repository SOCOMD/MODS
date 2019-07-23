/*
 * Author: Glowbal
 * Modified: 3Mydlo3
 * handle Litter Create
 *
 * Arguments:
 * 0: Litter Class <STRING>
 * 1: Position <ARRAY>
 * 2: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["litter", [2, 5, 6], bob] call ACE_medical_fnc_handleCreateLitter
 *
 * Public: No
 */

params ["_litterClass", "_position", "_direction"];

if (isNil "ace_medical_allCreatedLitter") then {
    ace_medical_allCreatedLitter = [];
    ace_medical_litterPFHRunning = false;
};
/*
private _p3dFile = getText (configFile >> "CfgVehicles" >> _litterClass >> "model");
if (_p3dFile == "") exitWith {};
if ((_p3dFile select [0,1]) == "\") then {_p3dFile = _p3dFile select [1];};
*/
private _litterObject = createSimpleObject [_litterClass, [0,0,0]];
_litterObject setDir _direction;
_litterObject setPosATL _position;
// Move the litter next frame to get rid of HORRIBLE spacing, fixes #1112
[{ params ["_object", "_pos"]; _object setPosATL _pos; }, [_litterObject, _position]] call CBA_fnc_execNextFrame;

private _maxLitterCount = getArray (configFile >> "ACE_Settings" >> "ace_medical_litterSimulationDetail" >> "_values") select ace_medical_litterSimulationDetail;
if ((count ace_medical_allCreatedLitter) > _maxLitterCount) then {

    private _oldLitter = ace_medical_allCreatedLitter deleteAt 0;
    {
        deleteVehicle _x;
    } forEach (_oldLitter select 1);
};

ace_medical_allCreatedLitter pushBack [CBA_missionTime, [_litterObject]];

if(!ace_medical_litterPFHRunning && {ace_medical_litterCleanUpDelay > 0}) then {
    ace_medical_litterPFHRunning = true;
    call ace_medical_fnc_litterCleanupLoop;
};
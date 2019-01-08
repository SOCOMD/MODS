if(!hasInterface) exitWith {};

_zeusInitLocalCalled = player getVariable["SOCOMD_zeusInitLocalCalled", 0];
if(_zeusInitLocalCalled == 1) exitWith {};
player setVariable ["SOCOMD_zeusInitLocalCalled", 1];

_zeusWhitelist = [
	"SOCOMD_Homestead"
];

_type = typeOf player;
if(_type in _zeusWhitelist) then
{
	_alreadyAssigned = 0;
	{
		_unit = getAssignedCuratorUnit _x;
		if(_unit == player) then {
			_alreadyAssigned = 1;
		};
	}foreach(allCurators);

	if(_alreadyAssigned == 0) then {
		player remoteExec ["SOCOMD_fnc_ZeusRegisterCurator", 2];
	};
};

[objNull, player] call SOCOMD_fnc_ZeusAddObject;
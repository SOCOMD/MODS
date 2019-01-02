_player = _this;

_adminCurator = missionNamespace getVariable["SOCOMD_ADMINCURATOR", objNull];
if(isNull(_adminCurator)) then
{
	_adminCurator = call SOCOMD_fnc_ZeusCreateCurator;
	missionNamespace setVariable["SOCOMD_ADMINCURATOR", _adminCurator];
};

if(isNull _player) exitWith {};

sleep 1;
unassignCurator _playerCurator;

sleep 1;
_player assignCurator _adminCurator;

_adminCurator remoteExec ["SOCOMD_fnc_ZeusRegisterCallbacks", _player];
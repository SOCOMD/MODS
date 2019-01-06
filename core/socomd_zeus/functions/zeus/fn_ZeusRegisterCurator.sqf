_player = _this;
_playerUUID = getPlayerUID _player;
_playerCuratorID = format["SOCOMD_ZEUS_%1", _playerUUID];
_playerCurator = missionNamespace getVariable [_playerCuratorID, objNull];

if(isNull _playerCurator) then
{	
	_playerCurator = call SOCOMD_fnc_ZeusCreateCurator;
	missionNamespace setVariable[_playerCuratorID, _playerCurator];
};

sleep 1;
unassignCurator _playerCurator;

sleep 1;
_player assignCurator _playerCurator;

_playerCurator remoteExec ["SOCOMD_fnc_ZeusRegisterCallbacks", _player];
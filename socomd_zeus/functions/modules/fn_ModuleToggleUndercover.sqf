_args = _this;
_logic = _args select 0;

_radius = 2;
_logicPosition = position _logic;

//Destory Module
deleteVehicle _logic;

_nearestEntities = _logicPosition nearEntities _radius;
{
	if(not (_x in allPlayers)) then {
		_nearestEntities = _nearestEntities - [_x];
	};
}foreach(_nearestEntities);

//Exit if nothing near by
if(count _nearestEntities <= 0) exitWith { };

_nearestEntity = _nearestEntities select 0;
_curators = objectCurators _nearestEntity;

//Exit if entity isn't controlled by a curator
if(count _curators <= 0) exitWith { };

_newCaptiveState = 1;
if(captive _nearestEntity) then 
{
	_newCaptiveState = 0;
};

//Set Captive State
[_newCaptiveState] remoteExec ["SOCOMD_fnc_ModuleToggleUndercover_Local", _nearestEntity];
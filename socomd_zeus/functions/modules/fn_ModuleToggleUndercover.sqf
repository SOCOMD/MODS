_args = _this;
_logic = _args select 0;

//Destory Module
deleteVehicle _logic;

sleep 0.02;

_curatorEntity = objnull;
if ((curatormouseover select 0) == "object") then 
{
	 _curatorEntity = (curatormouseover select 1);
};

//Exit there is no curator entity under cursor
if(isNull _curatorEntity) exitWith { };

_newCaptiveState = 1;
if(captive _curatorEntity) then 
{
	_newCaptiveState = 0;
};

//Set Captive State
if(_curatorEntity in allPlayers) then {
	[_newCaptiveState] remoteExec ["SOCOMD_fnc_ModuleToggleUndercover_Local", _curatorEntity];
} else {
	_curatorEntity setCaptive _newCaptiveState;
};

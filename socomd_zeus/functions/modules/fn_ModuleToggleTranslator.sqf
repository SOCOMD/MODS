params["_logic", "_units", "_activated"];

if!(_activated && local _logic) exitWith {};

_mouseOver = missionNamespace getVariable [ "bis_fnc_curatorObjectPlaced_mouseOver", [""]];

_curatorEntity = objnull;
if ((_mouseOver select 0) == "OBJECT") then 
{
	 _curatorEntity = (_mouseOver select 1);
};

//Exit there is no curator entity under cursor
if(isNull _curatorEntity) exitWith {
	deleteVehicle _logic;
};

if(!isPlayer _curatorEntity) exitWith {
	deleteVehicle _logic;
};

if(typeOf _curatorEntity == "SOCOMD_Homestead") exitWith {
	deleteVehicle _logic;
};

_ownerId = owner _curatorEntity;

_translatorKey = format["SOCOMD_isTranslator_%1", _ownerId];
_isTranslator = missionNamespace getVariable [_translatorKey, 0];

_languages = ["e"];
if(_isTranslator == 0) then {
	_languages = _languages + ["f"];
	_isTranslator = 1;
	hint format["Translator Toggled On"];
}else {
	_isTranslator = 0;
	hint format["Translator Toggled Off"];
};

missionNamespace setVariable [_translatorKey, _isTranslator];

_languages remoteExec ["acre_api_fnc_babelSetSpokenLanguages", _ownerId];

deleteVehicle _logic;
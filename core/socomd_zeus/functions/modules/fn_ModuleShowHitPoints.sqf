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

_curatorEntity enableSimulation true;
_curatorEntity allowDamage true;

_hitPointDesc = [
	["HitEngine", "#(argb,8,8,3)color(1,0,0,0.8)"],
	["HitFuel", "#(argb,8,8,3)color(0,0,1,0.8)"]
];

for "_i" from 0 to 10 do {
	_curatorEntity setObjectTexture [_i,"#(argb,32,32,3)color(0.5,0.5,0.5,1)"];
	_curatorEntity setObjectMaterial [_i,"A3\Structures_F\Data\Windows\ResHQ_glass.rvmat"];
};

_cfgHitPoints = configFile >> "CfgVehicles" >> (typeOf _curatorEntity) >> "HitPoints";

_selections = [];
{
	_selectionId = "";
	_cfgHitPoint = _cfgHitPoints >> (_x select 0);

	if(!(isNull _cfgHitPoint)) then {
		_selectionId = getText(_cfgHitPoint >> "name");
		_selections = _selections + [[_selectionId, _x select 1]];
	};
} foreach _hitPointDesc;

{
	_selectionId = _x select 0;
	_selectionPos = _curatorEntity selectionPosition [_selectionId, "HitPoints"];
	if(!(_selectionPos isEqualTo [0,0,0])) then {
		_selectionObj = _curatorEntity getVariable [_selectionId, objNull];
		if(isNull(_selectionObj)) then {
			_selectionObj = "Sign_sphere25cm_EP1" createVehicle [0,0,0];
		};
		_selectionObj attachTo [_curatorEntity, _selectionPos];
		_selectionObj setObjectTexture [0, _x select 1];
		_curatorEntity setVariable [_selectionId, _selectionObj];
	};
}foreach _selections;

deleteVehicle _logic;
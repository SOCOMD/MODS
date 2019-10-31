params["_logic", "_units", "_activated"];

if!(_activated && local _logic) exitWith {};

_mouseOver = missionNamespace getVariable [ "bis_fnc_curatorObjectPlaced_mouseOver", [""]];

_curatorEntity = objnull;
if ((_mouseOver select 0) == "OBJECT") then {
	 _curatorEntity = (_mouseOver select 1);
};

//Exit there is no curator entity under cursor
if(isNull _curatorEntity) exitWith {
	deleteVehicle _logic;
};

_loadout = getUnitLoadout _curatorEntity;
if(count _loadout == 0) then {
	deleteVehicle _logic;
};

_weapons = [];
_magazines = [];
_linkedItems = [];
_items = [];

_inventoryItems = [];

_primary = _loadout select 0;
if(_primary select 0 != "") then {
	_weapons = _weapons + [_primary select 0];
};

_secondary = _loadout select 1;
if(_secondary select 0 != "") then {
	_weapons = _weapons + [_secondary select 0];
};

_handgun = _loadout select 2;
if(_handgun select 0 != "") then {
	_weapons = _weapons + [_handgun select 0];
};


_uniform = _loadout select 3;
if(_uniform select 0 != "") then {
	_linkedItems = _linkedItems + [_uniform select 0];
	{
		for "_i" from 0 to (_x select 1) - 1 do {
			_inventoryItems = _inventoryItems + [_x select 0];
		};
	}foreach (_uniform select 1);
};

_vest = _loadout select 4;
if(_vest select 0 != "") then {
	_linkedItems = _linkedItems + [_vest select 0];
	{
		for "_i" from 0 to (_x select 1) - 1 do {
			_inventoryItems = _inventoryItems + [_x select 0];
		};
	}foreach (_vest select 1);
};

_backpack = _loadout select 5;
if(_backpack select 0 != "") then {
	{
		for "_i" from 0 to (_x select 1) - 1 do {
			_inventoryItems = _inventoryItems + [_x select 0];
		};
	}foreach (_backpack select 1);
};

_helmet = _loadout select 6;
if(_helmet != "") then {
	_linkedItems = _linkedItems + [_helmet];
};

_facewear = _loadout select 7;
if(_facewear != "") then {
	_linkedItems = _linkedItems + [_facewear];
};

_equippedItems = _loadout select 9;
{
	if(_x != "") then {
		_linkedItems = _linkedItems + [_x];
	};
}foreach _equippedItems;

{
	if(_x != "") then {
		if(_x isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then {
			_magazines = _magazines + [_x];
		} else {
			_items = _items + [_x];
		};
	};
}foreach _inventoryItems;

_weaponsStr = "";
for "_i" from 0 to (count _weapons) - 1 do {
	if(_i == 0) then {
		_weaponsStr = format[' "%1" ', _weapons select _i];
	} else {
		_weaponsStr = _weaponsStr + format[',"%1" ', _weapons select _i];
	}
};

_magazinesStr = "";
for "_i" from 0 to (count _magazines) - 1 do {
	if(_i == 0) then {
		_magazinesStr = format[' "%1" ', _magazines select _i];
	} else {
		_magazinesStr = _magazinesStr + format[',"%1" ', _magazines select _i];
	}
};

_linkedItemsStr = "";
for "_i" from 0 to (count _linkedItems) - 1 do {
	if(_i == 0) then {
		_linkedItemsStr = format[' "%1" ', _linkedItems select _i];
	} else {
		_linkedItemsStr = _linkedItemsStr + format[',"%1" ', _linkedItems select _i];
	}
};

_itemsStr = "";
for "_i" from 0 to (count _items) - 1 do {
	if(_i == 0) then {
		_itemsStr = format[' "%1" ', _items select _i];
	} else {
		_itemsStr = _itemsStr + format[',"%1" ', _items select _i];
	}
};

_br = toString [13,10];
_format = 'class SET_SOLDIER_CLASSNAME: B_Soldier_02_f {' + _br;
_format = _format + 'scope = public;' + _br;
_format = _format + 'scopeCurator = public;' + _br;
_format = _format + 'editorCategory = SET_EDITOR_CATEGORY;' + _br;
_format = _format + 'editorSubcategory = SET_EDITOR_SUB_CATEGORY;' + _br;
_format = _format + 'side = WEST;' + _br;
_format = _format + 'author = AUTHOR_STR;' + _br;
_format = _format + 'faction = SET_FACTION_NAME;' + _br;
_format = _format + 'displayname = SET_DISPLAY_NAME;' + _br;
_format = _format + 'vehicleclass = "Man";' + _br + _br;
_format = _format + 'uniformClass = "%1";' + _br;
_format = _format + 'backpack = "%6";' + _br + _br;
_format = _format + 'weapons[] = {%2};' + _br;
_format = _format + 'respawnWeapons[] = {%2};' + _br;
_format = _format + 'magazines[] = {%3};' + _br;
_format = _format + 'respawnMagazines[] = {%3};' + _br;
_format = _format + 'linkedItems[] = {%4};' + _br;
_format = _format + 'respawnLinkedItems[] = {%4};' + _br;
_format = _format + 'items[] = {%5};' + _br;
_format = _format + 'respawnItems[] = {%5};' + _br;
_format = _format + '}';

copyToClipboard format[_format, _uniform select 0, _weaponsStr, _magazinesStr, _linkedItemsStr, _itemsStr, _backpack select 0];
hint "Unit copied to clipboard";

deleteVehicle _logic;
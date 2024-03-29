#include "macro.sqf"
private ["_backpackitems", "_backpack", "_mass", "_capacity", "_i", "_item", "_itemmass", "_vestitems", "_vest", "_uniformitems", "_uniform", "_containerClass"];
_backpackitems = ASORGS_CurrentInventory select GSVI_BackpackItems;
_backpack = (ASORGS_CurrentInventory select GSVI_Backpack);
if(_backpack == "") then {_backpackitems = [];};
_mass = 0;
_capacity = getNumber(configFile >> "CfgVehicles" >> _backpack >> "maximumLoad");
for [{_i = 0}, {_i < (count _backpackitems)}, {_i = _i + 1}] do {
    _item = _backpackitems select _i;
    _itemmass = getNumber (configFile >> "cfgWeapons" >> _item >> "iteminfo" >> "mass");
    _mass = _mass + _itemmass;
    if(_mass > _capacity) then { _backpackitems set [_i, "DEL"]; _mass = _mass - _itemmass;ASORGS_WeightChanged = true; ASORGS_BackpackCapacityChanged = true; };
};
_backpackitems = _backpackitems - ["DEL"];
ASORGS_CurrentInventory set [GSVI_BackpackItems, _backpackitems];

_vestitems = ASORGS_CurrentInventory select GSVI_VestItems;
_vest = (ASORGS_CurrentInventory select GSVI_Vest);
if(_vest == "") then {_vestitems = [];};
_mass = 0;
_containerClass = getText (configFile >> "cfgWeapons" >> _vest >> "ItemInfo" >> "ContainerClass");
_capacity = getNumber(configFile >> "CfgVehicles" >> _containerClass >> "maximumLoad");
for [{_i = 0}, {_i < (count _vestitems)}, {_i = _i + 1}] do {
    _item = _vestitems select _i;
    _itemmass = getNumber (configFile >> "cfgWeapons" >> _item >> "iteminfo" >> "mass");
    _mass = _mass + _itemmass;
    if(_mass > _capacity) then { _vestitems set [_i, "DEL"]; _mass = _mass - _itemmass;ASORGS_WeightChanged = true; ASORGS_VestCapacityChanged = true;};
};
_vestitems = _vestitems - ["DEL"];
ASORGS_CurrentInventory set [GSVI_VestItems, _vestitems];

_uniformitems = ASORGS_CurrentInventory select GSVI_UniformItems;
_uniform = (ASORGS_CurrentInventory select GSVI_Uniform);
if(_uniform == "") then {_uniformitems = [];};
_mass = 0;
_containerClass = getText (configFile >> "cfgWeapons" >> _uniform >> "ItemInfo" >> "ContainerClass");
_capacity = getNumber(configFile >> "CfgVehicles" >> _containerClass >> "maximumLoad");
for [{_i = 0}, {_i < (count _uniformitems)}, {_i = _i + 1}] do {
    _item = _uniformitems select _i;
    _itemmass = getNumber (configFile >> "cfgWeapons" >> _item >> "iteminfo" >> "mass");
    _mass = _mass + _itemmass;
    if(_mass > _capacity) then { _uniformitems set [_i, "DEL"]; _mass = _mass - _itemmass;ASORGS_WeightChanged = true; ASORGS_UniformCapacityChanged = true;};
};
_uniformitems = _uniformitems - ["DEL"];
ASORGS_CurrentInventory set [GSVI_UniformItems, _uniformitems];



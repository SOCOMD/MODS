#include "script_component.hpp"
params ["_player","_loadoutId"];

_unitConfig = (missionConfigFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);
if(isNull _unitConfig) then {
    _unitConfig = (configFile >> "CfgLoadouts" >> "SOCOMD" >> _loadoutId);
};

if(isNull _unitConfig) exitWith { };

_player setVariable ["SOCOMD_LOADOUTID", _loadoutId];

removeBackpack _player;

_unitLoadout = getUnitLoadout _player;

//Backpack
_backpackConfig = (_unitConfig >> "Backpack");
_backpackLoadout = _unitLoadout select 5;
if(not isNull _backpackConfig) then
{
    _backpackType = getText (_backpackConfig >> "type");
    _backpackLoadout set [0, _backpackType];

    _backpackInventoryConfig = (_backpackConfig >> "Inventory");
    _backpackInventoryLoadout = [];

    if(not isNull _backpackInventoryConfig) then
    {
        for "_i" from 0 to (count _backpackInventoryConfig) - 1 do
        {
            _loadoutItem = _backpackInventoryConfig select _i;
            _type = getText (_loadoutItem >> "type");
            _count = getNumber (_loadoutItem >> "count");

            _added = 0;
            if(_type isKindOf ["CA_Magazine", configFile >> "CfgMagazines"] && _added == 0) then
            {
                _magazineCapacity = getNumber (configFile >> "CfgMagazines" >> _type >> "count");
                _backpackInventoryLoadout = _backpackInventoryLoadout + [[_type, _count, _magazineCapacity]];
                _added = 1;
            };

            if((_type isKindOf ["Rifle", configFile >> "CfgWeapons"] || _type isKindOf ["Pistol", configFile >> "CfgWeapons"] ) && _added == 0) then
            {
                _weapon = [_type, "", "", "", [], [], ""];
                _backpackInventoryLoadout = _backpackInventoryLoadout + [[_weapon, _count]];
                _added = 1;
            };

            if(_added == 0) then
            {
                _backpackInventoryLoadout = _backpackInventoryLoadout + [[_type, _count]];
                _added = 1;
            };
        };
    };
    _backpackLoadout set [1, _backpackInventoryLoadout];
};
_unitLoadout set [5, _backpackLoadout];

_player setVariable ["SOCOMD_stashedGear", false];
_player setVariable ["SOCOMD_hasDivingGear", false];
[_player, _unitLoadout] call FUNC(SetUnitLoadout);

ACE_Player setVariable  ["socomd_prev_weapons",[_primary,_secondary,_handgun]];
[_player, _loadoutId,_unitConfig] call FUNC(UpdateArsenalContent);

// Custom Arsenal code
[_player, _player, false] call EFUNC(arsenal,openBox);
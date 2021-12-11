#include "script_component.hpp"
#include "..\defines.hpp"
/*
 * Author: Alganthe, Dedmen
 * Add virtual items to the provided target.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Items <ARRAY of strings> <BOOL>
 * 2: Add globally <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_box, ["item1", "item2", "itemN"]] call ace_arsenal_fnc_addVirtualItems
 * [_box, true, false] call ace_arsenal_fnc_addVirtualItems
 *
 * Public: Yes
*/

params [["_object", objNull, [objNull]], ["_items", [], [true, []]], ["_global", false, [false]]];

if (_object == objNull) exitWith {};
if (_items isEqualType [] && {count _items == 0}) exitWith {};

private _cargo = _object getVariable [QGVAR(virtualItems), [
    [[], [], []], // Weapons 0, primary, secondary, handgun
    [[], [], [], []], // WeaponAccessories 1, optic,side,muzzle,bipod
    [ ], // Magazines 2
    [ ], // Headgear 3
    [ ], // Uniform 4
    [ ], // Vest 5
    [ ], // Backpacks 6
    [ ], // Goggles 7
    [ ], // NVGs 8
    [ ], // Binoculars 9
    [ ], // Map 10
    [ ], // Compass 11
    [ ], // Radio slot 12
    [ ], // Watch slot  13
    [ ], // Comms slot 14
    [ ], // WeaponThrow 15
    [ ], // WeaponPut 16
    [ ] // InventoryItems 17
]];

private _configCfgWeapons = configFile >> "CfgWeapons"; //Save this lookup in variable for perf improvement

if (_items isEqualType true) then {
    if (_items) then {
        private _configItems = uiNamespace getVariable QGVAR(configItems);

        {
            (_x select 0) append (_x select 1);
            (_x select 2) set [(_x select 3), (_x select 0) arrayIntersect (_x select 0)];
        } forEach [
            [(_cargo select 0 select 0),(_configItems select 0 select 0), _cargo select 0, 0],
            [(_cargo select 0 select 1),(_configItems select 0 select 1), _cargo select 0, 1],
            [(_cargo select 0 select 2),(_configItems select 0 select 2), _cargo select 0, 2],
            [(_cargo select 1 select 0),(_configItems select 1 select 0), _cargo select 1, 0],
            [(_cargo select 1 select 1),(_configItems select 1 select 1), _cargo select 1, 1],
            [(_cargo select 1 select 2),(_configItems select 1 select 2), _cargo select 1, 2],
            [(_cargo select 1 select 3),(_configItems select 1 select 3), _cargo select 1, 3]
        ];

        for "_index" from 2 to 17 do {
            (_cargo select _index) append (_configItems select _index);
            _cargo set [_index, (_cargo select _index) arrayIntersect (_cargo select _index)];
        };
    };

} else {
    {
        if (_x isEqualType "") then {
            private _className = toLower _x;
            private _configItemInfo = _configCfgWeapons >> _className >> "ItemInfo";
            private _simulationType = getText (_configCfgWeapons >> _className >> "simulation");
            switch true do {
                case (isClass (_configCfgWeapons >> _className)): {
                    switch true do {
                        /* Weapon acc */
                        case (
                                isClass (_configItemInfo) &&
                                {(getNumber (_configItemInfo >> "type")) in [TYPE_MUZZLE, TYPE_OPTICS, TYPE_FLASHLIGHT, TYPE_BIPOD]} &&
                                {!(_className isKindOf ["CBA_MiscItem", (_configCfgWeapons)])}
                            ): {
                            switch (getNumber (_configItemInfo >> "type")) do {
                                case TYPE_OPTICS: {
                                    (_cargo select 1) select 0 pushBackUnique _className;
                                };
                                case TYPE_FLASHLIGHT: {
                                    (_cargo select 1) select 1 pushBackUnique _className;
                                };
                                case TYPE_MUZZLE: {
                                    (_cargo select 1) select 2 pushBackUnique _className;
                                };
                                case TYPE_BIPOD: {
                                    (_cargo select 1) select 3 pushBackUnique _className;
                                };
                            };
                        };
                        /* Headgear */
                        case (isClass (_configItemInfo) &&
                            {getNumber (_configItemInfo >> "type") == TYPE_HEADGEAR}): {
                            (_cargo select 3) pushBackUnique _className;
                        };
                        /* Uniform */
                        case (isClass (_configItemInfo) &&
                            {getNumber (_configItemInfo >> "type") == TYPE_UNIFORM}): {
                            (_cargo select 4) pushBackUnique _className;
                        };
                        /* Vest */
                        case (isClass (_configItemInfo) &&
                            {getNumber (_configItemInfo >> "type") == TYPE_VEST}): {
                            (_cargo select 5) pushBackUnique _className;
                        };
                        /* NVgs */
                        case (_simulationType == "NVGoggles"): {
                            (_cargo select 8) pushBackUnique _className;
                        };
                        /* Binos */
                        case (_simulationType == "Binocular" ||
                            {(_simulationType == 'Weapon') && {(getNumber (_configCfgWeapons >> _className >> 'type') == TYPE_BINOCULAR_AND_NVG)}}): {
                            (_cargo select 9) pushBackUnique _className;
                        };
                        /* Map */
                        case (_simulationType == "ItemMap"): {
                            (_cargo select 10) pushBackUnique _className;
                        };
                        /* Compass */
                        case (_simulationType == "ItemCompass"): {
                            (_cargo select 11) pushBackUnique _className;
                        };
                        /* Radio */
                        case (_simulationType == "ItemRadio"): {
                            (_cargo select 12) pushBackUnique _className;
                        };
                        /* Watch */
                        case (_simulationType == "ItemWatch"): {
                            (_cargo select 13) pushBackUnique _className;
                        };
                        /* GPS */
                        case (_simulationType == "ItemGPS"): {
                            (_cargo select 14) pushBackUnique _className;
                        };
                        /* UAV terminals */
                        case (isClass (_configItemInfo) &&
                            {getNumber (_configItemInfo >> "type") == TYPE_UAV_TERMINAL}): {
                            (_cargo select 14) pushBackUnique _className;
                        };
                        /* Weapon, at the bottom to avoid adding binos */
                        case (isClass (_configCfgWeapons >> _className >> "WeaponSlotsInfo") &&
                            {getNumber (_configCfgWeapons >> _className >> 'type') != TYPE_BINOCULAR_AND_NVG}): {
                            switch (getNumber (_configCfgWeapons >> _className >> "type")) do {
                                case TYPE_WEAPON_PRIMARY: {
                                    (_cargo select 0) select 0 pushBackUnique  ([_className] call bis_fnc_baseWeapon);
                                };
                                case TYPE_WEAPON_HANDGUN: {
                                    (_cargo select 0) select 2 pushBackUnique ([_className] call bis_fnc_baseWeapon);
                                };
                                case TYPE_WEAPON_SECONDARY: {
                                    (_cargo select 0) select 1 pushBackUnique ([_className] call bis_fnc_baseWeapon);
                                };
                            };
                        };
                        /* Misc items */
                        case (
                                isClass (_configItemInfo) &&
                                ((getNumber (_configItemInfo >> "type")) in [TYPE_MUZZLE, TYPE_OPTICS, TYPE_FLASHLIGHT, TYPE_BIPOD] &&
                                {(_className isKindOf ["CBA_MiscItem", (_configCfgWeapons)])}) ||
                                {(getNumber (_configItemInfo >> "type")) in [TYPE_FIRST_AID_KIT, TYPE_MEDIKIT, TYPE_TOOLKIT]} ||
                                {(getText (_configCfgWeapons >> _className >> "simulation")) == "ItemMineDetector"}
                            ): {
                            (_cargo select 17) pushBackUnique _className;
                        };
                    };
                };
                case (isClass (configFile >> "CfgMagazines" >> _className)): {
                    // Lists to check against
                    private _grenadeList = [];
                    {
                        _grenadeList append getArray (_configCfgWeapons >> "Throw" >> _className >> "magazines");
                        false
                    } count getArray (_configCfgWeapons >> "Throw" >> "muzzles");

                    private _putList = [];
                    {
                        _putList append getArray (_configCfgWeapons >> "Put" >> _className >> "magazines");
                        false
                    } count getArray (_configCfgWeapons >> "Put" >> "muzzles");

                    // Check what the magazine actually is
                    switch true do {
                        // Rifle, handgun, secondary weapons mags
                        case (
                                ((getNumber (configFile >> "CfgMagazines" >> _className >> "type") in [TYPE_MAGAZINE_PRIMARY_AND_THROW,TYPE_MAGAZINE_SECONDARY_AND_PUT,1536,TYPE_MAGAZINE_HANDGUN_AND_GL]) ||
                                {(getNumber (configFile >> "CfgMagazines" >> _className >> QGVAR(hide))) == -1}) &&
                                {!(_className in _grenadeList)} &&
                                {!(_className in _putList)}
                            ): {
                            (_cargo select 2) pushBackUnique _className;
                        };
                        // Grenades
                        case (_className in _grenadeList): {
                            (_cargo select 15) pushBackUnique _className;
                        };
                        // Put
                        case (_className in _putList): {
                            (_cargo select 16) pushBackUnique _className;
                        };
                    };
                };
                case (isClass (configFile >> "CfgVehicles" >> _className)): {
                    if (getNumber (configFile >> "CfgVehicles" >> _className >> "isBackpack") == 1) then {
                        (_cargo select 6) pushBackUnique _className;
                    };
                };
                case (isClass (configFile >> "CfgGlasses" >> _className)): {
                    (_cargo select 7) pushBackUnique _className;
                };
            };
        };
    } foreach _items;
};

_object setVariable [QGVAR(virtualItems), _cargo, _global];

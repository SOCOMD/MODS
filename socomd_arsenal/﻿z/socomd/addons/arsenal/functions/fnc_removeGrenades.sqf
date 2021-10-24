params ["_user"];
_grenades = [];
{
    _grenades append getArray(configFile >> "CfgWeapons" >> "Throw" >> _x >> "magazines");
} forEach getArray(configFile >> "CfgWeapons" >> "Throw" >> "muzzles");
{_user removeMagazines _x} forEach _grenades;
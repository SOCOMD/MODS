#include "script_component.hpp"
params ["_vehicle"];

pylons = GetPylonMagazines _vehicle;
vehicleMass= getNumber(configFile >> "CfgVehicles" >> typeOf _vehicle >> "mass");
totalMass = 0;
{
mass = getNumber( configFile >> "CfgMagazines" >> _x >> "mass");
totalMass= totalMass + mass;
} forEach pylons;

finalMass = vehicleMass - totalMass;

_vehicle setMass finalMass;
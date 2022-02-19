#include "script_component.hpp"
params ["_unit","_selection"];
_vest = getArray (configFile >> "CfgWeapons" >> _selection >> "vest");
 { 
  (vestContainer player) addMagazineCargoGlobal [ _x select 0, _x select 1 ];
player addMagazines [ _x select 0, 0 ]; 
} foreach _vest;
_uniform = getArray (configFile >> "CfgWeapons" >> _selection >> "uniform");
 
{ 
  (uniformContainer player) addMagazineCargoGlobal [ _x select 0, _x select 1 ];
player addMagazines [ _x select 0, 0 ]; 
} foreach _uniform;
_bag = getArray (configFile >> "CfgWeapons" >> _selection >> "bag");
 
{ 
  (backpackContainer player) addMagazineCargoGlobal [ _x select 0, _x select 1 ];
player addMagazines [ _x select 0, 0 ]; 
} foreach _bag;
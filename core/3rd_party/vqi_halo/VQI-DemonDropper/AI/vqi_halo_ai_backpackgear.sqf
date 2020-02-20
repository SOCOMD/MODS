// Save Gear & Backpack - then return all
// 		-- W-I-P --


private ["_unit","_pack","_class","_items"];
_unit = _this select 0;


_pack = unitBackpack _unit; 
_class = typeOf _pack; 
_items = backpackItems _unit; 
hint format ["%1",_items]; 
sleep 3; 

removeBackpack _unit; 
_unit addBackpack "B_Parachute"; 
sleep 3; 

// on ground
waitUntil { sleep 5; getPos _unit select 2 > 20; };
waitUntil { sleep 5; getPos _unit select 2 < 1;  };
sleep 10;

_unit addBackpack _class; 
_unit addBackpackCargoGlobal _items;
_unit enableAI "ANIM";


//////////////////////
/* NOTES:


*/
params ["_storePos"];
_holder = 'groundweaponholder' createVehicle _storePos; 
_holder addItemCargoGlobal ['Nano_UAV_ITEM',1];
_holder setPosATL _storePos;
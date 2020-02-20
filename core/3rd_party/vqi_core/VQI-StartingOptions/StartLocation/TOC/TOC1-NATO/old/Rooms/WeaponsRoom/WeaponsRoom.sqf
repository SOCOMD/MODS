/////////////////////////////////////////////////////////
// Template: Operations Centre - Weapons Room
// Ref. N.Door: -L/R, -B/F, -D/U
if (VQI_CORE_HINTS == 1) then { hint "WeaponsRoom.sqf"; };
sleep 1;


private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100,100];






 
//--- Area #1 --------------------------------------------------------
WRTABLE_1a = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
WRTABLE_1a attachTo [OpsCenter,[6.25, 6.1, -2.5]];
WRTABLE_1a setDir 0;

WRTABLE_1b = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
WRTABLE_1b attachTo [OpsCenter,[6.25, 8.25, -2.5]];
WRTABLE_1b setDir 0;

WRTABLE_1c = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
WRTABLE_1c attachTo [OpsCenter,[6.25, 10.4, -2.5]];
WRTABLE_1c setDir 0;



//--- Area #2 --------------------------------------------------------
WRTABLE_2a = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
WRTABLE_2a attachTo [OpsCenter,[16.7, 10.4, -2.5]];
WRTABLE_2a setDir 0;

WRTABLE_2b = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
WRTABLE_2b attachTo [OpsCenter,[16.7, 8.25, -2.5]];
WRTABLE_2b setDir 0;

WRTABLE_2c = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
WRTABLE_2c attachTo [OpsCenter,[15, 7.75, -2.5]];
WRTABLE_2c setDir 90;



//--- Area #3 --------------------------------------------------------
WRTABLE_3a = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
WRTABLE_3a attachTo [OpsCenter,[16.7, 5.3, -2.5]];
WRTABLE_3a setDir 0;

WRTABLE_3b = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
WRTABLE_3b attachTo [OpsCenter,[15, 4.8, -2.5]];
WRTABLE_3b setDir 90;

WRTABLE_3c = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
WRTABLE_3c attachTo [OpsCenter,[12.84, 4.8, -2.5]];
WRTABLE_3c setDir 90;

/*
WRTABLE_3d = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
WRTABLE_3d attachTo [OpsCenter,[10.455, 4.8, -2.5]];
WRTABLE_3d setDir 90;
*/


//--- Area # W -------------------------------------------------------
WRTABLE_w2 = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
WRTABLE_w2 attachTo [OpsCenter,[12.8, 12.45, -2.5]]; //10.88
WRTABLE_w2 setDir 90;

WRTABLE_w1 = "Land_WoodenTable_large_F" createVehicle _OpsCenterStart;
WRTABLE_w1 attachTo [OpsCenter,[10.65, 12.45, -2.5]]; //10.88
WRTABLE_w1 setDir 90;






///////////////////////////////////////////////////////////////////////
sleep 2;
execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\WeaponsRoom\WeaponsRoom_BackWall.sqf";		// Backwall Weapon Display
sleep 2; 
execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\WeaponsRoom\Crates_BackWall.sqf";			// Backwall Ammo & Crates
sleep 2;
execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\WeaponsRoom\WeaponsRoom_Center.sqf";			// Center Setup
sleep 2;
execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\WeaponsRoom\Crates_Center.sqf";				// Center - Fill Crates
sleep 2;
execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\WeaponsRoom\WeaponsRoom_1.sqf";				// Table Set 1
sleep 2;
execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\WeaponsRoom\Crates_1.sqf";					// Table Set 1 - Fill Crates
sleep 2;
execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\WeaponsRoom\WeaponsRoom_2.sqf";				// Table Set 2
sleep 2;
execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\WeaponsRoom\Crates_2.sqf";					// Table Set 2 - Fill Crates
sleep 2;
execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\WeaponsRoom\WeaponsRoom_3.sqf";				// Table Set 3
sleep 2;
execVM "vqi_core\VQI-CreepyCORE\StartLocation\OpsCenter1\Rooms\WeaponsRoom\Crates_3.sqf";					// Table Set 3 - Fill Crates

///////////////////////////////////////////////////////////////////////









/* =======================================================================================
NOTES:


*/
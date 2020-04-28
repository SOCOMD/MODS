// Save ALL Gear in Backpack - Simulate Unit Backpack on Chest
// original GearSaving and HALO set-up by cobra4v320 - Thanks!!!
if (VQI_HINTS_HALO == 1) then { hint "backpack_onfront.sqf"; };



//Parameters
private ["_unit"]; 

_unit = _this select 0;
dropGear = false;




//Immersion EFX & Sound ???? WIP - REDO!
//playSound "HALOExt"; //need cool transition sound here?
if ("VQI_Vest_Dragonfly" == Vest _unit) then {	
	playSound "rebreather_breath"; // Gear-Up Sound Needed
};

// Navigation Gear packed away
if (VQI_HALO_HIDENAV == 1) then {			
	showGPS false;
	showMAP false;
	showCompass false;
};




//save the backpack and its contents, also adds faux backpack to front of unit
if (!isNull (unitBackpack _unit) && (backpack _unit) != "SOCOMD_COS_PARACHUTE") then {
	private ["_pack","_bag","_magazines","_weapons","_items","_helmet","_goggles"];
	_pack	   	= unitBackpack _unit;
	_bag	   		= typeOf _pack;
	_magazines 	= getMagazineCargo _pack;
	_weapons   	= getWeaponCargo _pack;
	_items	   	= getItemCargo _pack;
	_helmet	   	= headgear _unit;
	_goggles		= goggles _unit; // Goggles NOT working? Spelled googles?
	// _X		= backpack? add ability to store other Backpack as well??
 
	// removeBackpack _unit; //remove the backpack
	_unit call zade_boc_fnc_actionOnChest;
	_unit addBackpack "SOCOMD_COS_PARACHUTE"; //add the parachute				/////////////////////////
	//{_x addBackpack "SOCOMD_COS_PARACHUTE";} forEach units group _unit;		/////////////////////////
	// Set Group A.I.


	// [_unit,_bag,_magazines,_weapons,_items,_helmet,_goggles] spawn {
	// 	private ["_unit","_bag","_magazines","_weapons","_items","_helmet","_goggles"];
	// 	_unit		= _this select 0;
	// 	_bag			= _this select 1;
	// 	_magazines	= _this select 2;
	// 	_weapons 	= _this select 3;
	// 	_items 		= _this select 4;
	// 	_helmet		= _this select 5;
	// 	_goggles		= _this select 6;
	// 	//_altitude = _this select 6;
		
	// 	private ["_packHolder"];
	// 	_packHolder = createVehicle ["groundWeaponHolder", [0,0,0], [], 0, "can_collide"];
	// 	_packHolder addBackpackCargoGlobal [_bag, 1];
		
	// 	//Backpack on Front while walking around
	// 	//Awkward, weapon will clip through, etc
	// 	//May work on skeleton-config in V2???
	// 	_packHolder attachTo [vehicle _unit,[-0.07,0.67,-0.3],"pelvis"]; 
	// 	_packHolder setVectorDirAndUp [[0,-0.2,-1],[0,1,0]];
		
	// 	//Backpack on Front while in HALO Freefall
	// 	waitUntil {animationState _unit == "HaloFreeFall_non"};
	// 	_packHolder attachTo [_unit,[-0.12,-0.02,-.74],"pelvis"]; 
	// 	_packHolder setVectorDirAndUp [[0,-1,-0.05],[0,0,-1]];
			
	// 	//Backpack on Front while Chute is OPEN		
	// 	waitUntil {animationState _unit == "para_pilot"};
	// 	_packHolder attachTo [vehicle _unit,[-0.07,0.67,-0.3],"pelvis"]; 
	// 	_packHolder setVectorDirAndUp [[0,-0.2,-1],[0,1,0]];
		
		
		
		
		
		
		
		
	// 	//////////////////////////////////////////////////////////////////////
	// 	// LZ:   Near Ground!
	// 	waitUntil {(getPos _unit select 2) < 1};
		
	// 	// water
	// 	if (underwater _unit) then {
		
	// 		detach _packHolder;
	// 		deleteVehicle _packHolder; 		//delete the faux backpack on front
				
	// 		_unit addBackpack _bag; 			//return the backpack
	// 		clearAllItemsFromBackpack _unit;	//clear all gear from new backpack
			
	// 		// return gear
	// 		for "_i" from 0 to (count (_magazines select 0) - 1) do { (unitBackpack _unit) addMagazineCargoGlobal [(_magazines select 0) select _i,(_magazines select 1) select _i]; };
	// 		for "_i" from 0 to (count (_weapons select 0) - 1) do { (unitBackpack _unit) addWeaponCargoGlobal [(_weapons select 0) select _i,(_weapons select 1) select _i]; };
	// 		for "_i" from 0 to (count (_items select 0) - 1) do { (unitBackpack _unit) addItemCargoGlobal [(_items select 0) select _i,(_items select 1) select _i]; };
		
	// 	} else {
		
	// 		// land
	// 		_packHolder attachTo [_unit,[-0.07,0.67,-0.3],"pelvis"]; 
	// 		_packHolder setVectorDirAndUp [[0,-0.2,-1],[0,1,0]];
	// 		_unit addBackpack "SOCOMD_COS_PARACHUTE";
			
	// 		sleep 10;
			
	// 		waitUntil {dropGear};
	// 		removeBackpack _unit;
	// 		sleep 1;
	// 		detach _packHolder;
	// 		deleteVehicle _packHolder;
	// 		_unit addBackpack _bag; 			//return the backpack
	// 		clearAllItemsFromBackpack _unit;	//clear all gear from new backpack
			
	// 		// return gear
	// 		for "_i" from 0 to (count (_magazines select 0) - 1) do { (unitBackpack _unit) addMagazineCargoGlobal [(_magazines select 0) select _i,(_magazines select 1) select _i]; };
	// 		for "_i" from 0 to (count (_weapons select 0) - 1) do { (unitBackpack _unit) addWeaponCargoGlobal [(_weapons select 0) select _i,(_weapons select 1) select _i]; };
	// 		for "_i" from 0 to (count (_items select 0) - 1) do { (unitBackpack _unit) addItemCargoGlobal [(_items select 0) select _i,(_items select 1) select _i]; };
	// 	};
	// };
} else {
	if ((backpack _unit) != "SOCOMD_COS_PARACHUTE") then {_unit addBackpack "SOCOMD_COS_PARACHUTE"}; //add the parachute if unit has no backpack, needed?
};



////////////////////////////////
/* NOTES:




		-old-
		// LZ:   On Ground!
		waitUntil {isTouchingGround _unit || (getPos _unit select 2) < 1};
		detach _packHolder;
		deleteVehicle _packHolder; 		//delete the faux backpack on front
			
		_unit addBackpack _bag; 			//return the backpack
		clearAllItemsFromBackpack _unit;	//clear all gear from new backpack
		
		// return gear
		for "_i" from 0 to (count (_magazines select 0) - 1) do { (unitBackpack _unit) addMagazineCargoGlobal [(_magazines select 0) select _i,(_magazines select 1) select _i]; };
		for "_i" from 0 to (count (_weapons select 0) - 1) do { (unitBackpack _unit) addWeaponCargoGlobal [(_weapons select 0) select _i,(_weapons select 1) select _i]; };
		for "_i" from 0 to (count (_items select 0) - 1) do { (unitBackpack _unit) addItemCargoGlobal [(_items select 0) select _i,(_items select 1) select _i]; };
		


*/
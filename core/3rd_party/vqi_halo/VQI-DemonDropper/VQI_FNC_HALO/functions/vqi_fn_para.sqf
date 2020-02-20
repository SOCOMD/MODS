/////////////////////////////////////////////////////////////////////////////
/*	ADDON: VQI-DEMONDROPPER-v1		BY: R.Von Quest  aka the "Goblin"
	------------------------------------------------------------------------
	DEPT.: Von Quest Industries		STATUS: WORK-IN-PROGRESS
	PROJECT: H.A.L.O. SYSTEM		SERIES: SPOOKWARCOM
	ADDON NAME: DemonDropper		VERSION: v1 - 20.APR.2014
	------------------------------------------------------------------------
	CREATOR: R. Von Quest - aka the "Goblin"
	CREDITS: a big thanks to dr_strangepete and cobra4v320!
	------------------------------------------------------------------------
	NOTES: HALO = High Altitude Low Opening. A specific TYPE of ParaJump
	at extreme high altitude for clandestine operations. The atmosphere
	is so hostile that special equipment IS required to survive the Jump!
*/
/////////////////////////////////////////////////////////////////////////////
if (VQI_HINTS_HALO == 1) then {
hint "Altimeter: JumpBuddy I \n ON: HOLD 'Watch' Button \n Must be Items (watch) Slot";};

//Parameters
private ["_unit","_saveLoadOut"]; 
_unit 		= [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_saveLoadOut 	= [_this, 1, true, [true]] call BIS_fnc_param;

//Validate - Testing ONLY
//if (isNull _unit) exitWith {"Unit parameter must not be objNull. Accepted: OBJECT" call BIS_fnc_error};



//Immersion EFX & Sound ???? WIP - REDO!
if (isPlayer _unit) then {

	//playSound "HALOExt"; //need cool transition sound here?
	if ("Vest_VQI_Stingray" == Vest player) then {
		//hint "O2 Supply: READY";	
		playSound "rebreather_breath";};
	
	if (VQI_MGC_HALO == 0) then {			
		showGPS false;
		showMAP false;
		showCompass false;};
};

/*
if (true) then {		
		while {(getPos _unit select 2) > 15} do {
			playSound "rebreather_breath";
			sleep 4;
		};
};
*/

//save the backpack and its contents, also adds faux backpack to front of unit
if (_saveLoadOut && !isNull (unitBackpack _unit) && (backpack _unit) != "b_parachute") then {
	private ["_pack","_class","_magazines","_weapons","_items","_helmet","_goggles"];
	_pack	   	= unitBackpack _unit;
	_class	   	= typeOf _pack;
	_magazines 	= getMagazineCargo _pack;
	_weapons   	= getWeaponCargo _pack;
	_items	   	= getItemCargo _pack;
	_helmet	   	= headgear _unit;
	_goggles		= goggles _unit; // Goggles NOT working? Spelled googles?
	// _X		= backpack? add ability to store other Backpack as well??
 
	removeBackpack _unit; //remove the backpack
	sleep 1;
	//_unit addBackpack "b_parachute"; //add the parachute
	{_x addBackpack "B_Parachute";} forEach units group _unit;
	
	[_unit,_class,_magazines,_weapons,_items,_helmet,_altitude,_goggles] spawn {
		private ["_unit","_class","_magazines","_weapons","_items","_helmet","_altitude","_goggles"];
		_unit		= _this select 0;
		_class		= _this select 1;
		_magazines	= _this select 2;
		_weapons 	= _this select 3;
		_items 		= _this select 4;
		_helmet		= _this select 5;
		_altitude   	= _this select 6;
		_goggles		= _this select 7;
		
		private ["_packHolder"];
		_packHolder = createVehicle ["groundWeaponHolder", [0,0,0], [], 0, "can_collide"];
		_packHolder addBackpackCargoGlobal [_class, 1];
		
		//Backpack on Front while walking around
		//Awkward, weapon will clip through, etc
		//May work on skeleton-config in V2???
		_packHolder attachTo [vehicle _unit,[-0.07,0.67,-0.3],"pelvis"]; 
		_packHolder setVectorDirAndUp [[0,-0.2,-1],[0,1,0]];
		
		//Backpack on Front while in HALO Freefall
		waitUntil {animationState _unit == "HaloFreeFall_non"};
		_packHolder attachTo [_unit,[-0.12,-0.02,-.74],"pelvis"]; 
		_packHolder setVectorDirAndUp [[0,-1,-0.05],[0,0,-1]];
			
		//Backpack on Front while Chute is OPEN		
		waitUntil {animationState _unit == "para_pilot"};
		_packHolder attachTo [vehicle _unit,[-0.07,0.67,-0.3],"pelvis"]; 
		_packHolder setVectorDirAndUp [[0,-0.2,-1],[0,1,0]];
				
		waitUntil {isTouchingGround _unit || (getPos _unit select 2) < 1};
		detach _packHolder;
		deleteVehicle _packHolder; //delete the faux backpack in front
			
		_unit addBackpack _class; //return the backpack
		clearAllItemsFromBackpack _unit; //clear all gear from new backpack
		
		for "_i" from 0 to (count (_magazines select 0) - 1) do {
			(unitBackpack _unit) addMagazineCargoGlobal [(_magazines select 0) select _i,(_magazines select 1) select _i]; //return the magazines
		};
		for "_i" from 0 to (count (_weapons select 0) - 1) do {
			(unitBackpack _unit) addWeaponCargoGlobal [(_weapons select 0) select _i,(_weapons select 1) select _i]; //return the weapons
		};
		for "_i" from 0 to (count (_items select 0) - 1) do {
			(unitBackpack _unit) addItemCargoGlobal [(_items select 0) select _i,(_items select 1) select _i]; //return the items
		};
	};
} else {
	if ((backpack _unit) != "b_parachute") then {_unit addBackpack "b_parachute"}; //add the parachute if unit has no backpack, needed?
};



/*
// MP dePressurize EFX
if (isPlayer _unit) then {	
		waitUntil {!isNil "lightRED1"};
		sleep 5;
		[lightRED1,"efx_depress"] call CBA_fnc_globalSay3d;
		sleep 2;
		if ((cameraView == "INTERNAL") && ("Helmet_VQI_HALO" == Headgear player)) then {
		3 cutRsc ["VQI_HALO_HELMET_FOGGED0_EFX", "PLAIN"]; 	
		addCamShake [2,1,3]; //power, duration, frequency	
		};
};
*/

sleep 5;
//execVM "\vqi_halo\VQI-DemonDropper\Altimeter\vqi_aad.sqf";
sleep 2;
// Player HALO Menu?
//execVM "\vqi_halo\VQI-DemonDropper\vqi_menu_halo_player.sqf";

if (isPlayer _unit) then {	

		waitUntil {animationState _unit == "para_pilot"};
		 
		// Parachute Opening EFX & Sound
		33 cutText ["", "BLACK IN", 2];
		addCamShake [75, 5, 5];
		playSound "open_chute";
		playSound "grunt1";
		playSound "open_chute2";
		//sleep 5;
		
		addCamShake [5,  5,  2];
		
		
		setAperture 0.05; 
		setAperture -1;
		"DynamicBlur" ppEffectEnable true;  
		"DynamicBlur" ppEffectAdjust [8.0];  
		"DynamicBlur" ppEffectCommit 0.01;
		sleep 1;
		"DynamicBlur" ppEffectAdjust [0.0]; 
		"DynamicBlur" ppEffectCommit 3;
		sleep 3;
		"DynamicBlur" ppEffectEnable false;
		"RadialBlur" ppEffectAdjust [0.0, 0.0, 0.0, 0.0]; 
		"RadialBlur" ppEffectCommit 1.0; 
		"RadialBlur" ppEffectEnable false;
		
		playSound "heartbeat";
		
		//W-I-P
		while {(getPos _unit select 2) > 5} do {
			playSound "para_pilot";
			addCamShake [3, 4, 2];
			sleep 4;
		};
};


//Return Value
//_unit;
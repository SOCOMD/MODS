/*
 DragBody script by BangaBob (H8erMaker) v1.2
 LiftBody addition by Von Quest (Goblin) v1.3
 Hotfixed addition by Von Quest (Goblin) v1.4
 
 Description
  Drag dead bodies out of sight to avoid detection. JIP/MP/SP/Dedicated compatible
 
 Instructions
  Add this line into the init.sqf. This will add a drag action to all editor placed units.
	null = allUnits execVM "H8_dragBody.sqf";
	
 Functions
	[UNIT1,UNIT2,UNIT3] spawn H8_addDrag;
 Add living units into the script. (Useful for units spawned mid-mission).
*/

#define H8_LIFTTEXT	"Body: Lift/Carry"	// AddAction text for carrying body
#define H8_DRAGTEXT	"Body: Pull/Drag"		// AddAction text for dragging body
#define H8_DROPTEXT	"Body: Release"		// AddAction text for dropping body
#define H8_LOADTEXT	"Body: Load"			// AddAction text for loading body
#define H8_UNLOTEXT	"Body: Unload"		// AddAction text for unloading body

 H8_fnc_Action = {
	_dragCond = "vehicle _this != vehicle _target and isNull attachedTo _target and count attachedObjects _this == 0 and _target distance _this < 2";	// ?m distance
	{ _x addaction [H8_DRAGTEXT,{call H8_DragAction},nil,6,false,false,"",_dragCond];	} forEach _this;
	{ _x addaction [H8_LIFTTEXT,{call H8_LiftAction},nil,6,false,false,"",_dragCond];	} forEach _this;
 };
 
 
 // Add Lift-Carry
 H8_LiftAction = {
	_unit = (_this select 0);
	_unit switchMove "AinjPfalMstpSnonWrflDnon_carried_Up";					// Animation for Alive Units (only, no dead - c'mon BIS)
	
	// CLIENT SIDE
	player playMove "AcinPknlMstpSrasWrflDnon_AcinPercMrunSrasWrflDnon";		// grabDrag		AcinPercMstpSrasWrflDnon
	player forceWalk false;												// faster move option (the entire point of Lift/Carry)
	sleep 15;															// pause for dead unit attachTo - finish player animation
	
	// GLOBAL CODE
	_unitID = _unit getVariable "H8_increm";
	[[_unit, vehicle player,_unitID],"H8_fnc_attachLift",true] call BIS_fnc_MP; 
	_unit attachTo [player,[0,1,0]];
	
	_dropID = player addAction [H8_DROPTEXT,{call H8_dropAction},_unit,6];
	_hideID = player addAction [H8_LOADTEXT,{call H8_putIncar},_unit,6,false,false,"","_target distance _this < 8"]; // and cursorTarget isKindOf ""LandVehicle"""];
	
	player setVariable ["H8hideVeh",_hideID];
	player setVariable ["H8dropact",_dropID];
 };
 
 
 H8_DragAction = {
	_unit = (_this select 0);
	
	// GLOBAL CODE
	_unitID = _unit getVariable "H8_increm";
	[[_unit, vehicle player,_unitID],"H8_fnc_attachDrag",true] call BIS_fnc_MP; 
	_unit attachTo [player,[0,1,0]];
	
	// CLIENT SIDE
	player playAction "grabDrag";
	player forceWalk true;
	
	_dropID = player addAction [H8_DROPTEXT,{call H8_dropAction},_unit,6];
	_hideID = player addAction [H8_LOADTEXT,{call H8_putIncar},_unit,6,false,false,"","_target distance _this < 8"]; // and cursorTarget isKindOf ""LandVehicle"""];
	
	player setVariable ["H8hideVeh",_hideID];
	player setVariable ["H8dropact",_dropID];
 };

 
 H8_putIncar = {
	_hideID 	= (_this select 2);
	_dropID 	= player getVariable "H8dropact";
	_unit 	= (_this select 3);
	_vehicle = cursorTarget;
 
	_loadedBody = _vehicle getVariable "H8loadedBody";
	
	
	if (isNil "_loadedBody") then {
	
		// CLIENT CODE
		player playMove "amovpknlmstpsraswrfldnon";
		player forceWalk false;	
		player removeAction _hideID;
		player removeAction _dropID;
			
		// GLOBAL CODE
		_unitID = _unit getVariable "H8_increm";
		0 = [[_unit, vehicle player,_unitID],"H8_fnc_detach",true] call BIS_fnc_MP;
		sleep 1;
		deTach _unit;
		_unit setPos [0,0,0];
		_vehicle setVariable ["H8loadedBody",_unit,true];
		[[_vehicle],"H8_carAction",true] call BIS_fnc_MP; 
				
	} else {
		hint "Vehicle already has a body loaded";
	};
 };
 
 
 H8_carAction = {
	_vehicle = (_this select 0);
	_vehicle addAction [H8_UNLOTEXT,{call H8_removeBody},nil,0,false,false,"","_this distance _target < 8"];
 };
 
 
 H8_carRemoveAction = {
	_vehicle = (_this select 0);
	_id 		= (_this select 1);
	_vehicle removeAction _id;
 };
 
 
 H8_removeBody = {
	_vehicle = (_this select 0);
	_player 	= (_this select 1);
	_id 		= (_this select 2);
 
	[[_vehicle,_id],"H8_carRemoveAction",true] call BIS_fnc_MP; 
 
	_unit = _vehicle getVariable "H8loadedBody";
	_vehicle setVariable ["H8loadedBody",Nil];
 	_pos  = _player modelToWorld [1,0,0];
    _unit setPos _pos;
	_unit switchMove "AinjPpneMstpSnonWrflDb_release";
 };
 
 
 H8_dropAction = {
	_dropID 	= (_this select 2);
	_hideID 	= player getVariable "H8hideVeh";
	_unit	= (_this select 3);
	
	// GLOBAL CODE
	_unitID = _unit getVariable "H8_increm";
	0 = [[_unit, vehicle player,_unitID],"H8_fnc_detach",true] call BIS_fnc_MP;
	detach _unit;
 
	// CLIENT SIDE	
	player removeAction _hideID;
	player removeAction _dropID;
	player playMove "amovpknlmstpsraswrfldnon";
	player forceWalk false;	
 };
 
 
 // Attach-Lift
  H8_fnc_attachLift = {
	_unit 	= (_this select 0);
	_player 	= (_this select 1);
	_unitID 	= (_this select 2);
	
	_id = format ["h8EF%1",_unitID];
	0 = [_id, "onEachFrame", "H8_fnc_moveBodyLift",[_unit,_player]] call BIS_fnc_addStackedEventHandler;	// lift
 };
 
 
 H8_fnc_attachDrag = {
	_unit 	= (_this select 0);
	_player 	= (_this select 1);
	_unitID 	= (_this select 2);
	
	_id = format ["h8EF%1",_unitID];
	0 = [_id, "onEachFrame", "H8_fnc_moveBodyDrag",[_unit,_player]] call BIS_fnc_addStackedEventHandler;	// drag
 };
 
 
 H8_fnc_detach = {
 	_unit 	= 	(_this select 0);
	_player 	= 	(_this select 1);
	_unitID 	=	(_this select 2);
	
	_id = format ["h8EF%1",_unitID];
	0 = [_id, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
 
	sleep 0.05;
	_relD = [_unit,_player] call BIS_fnc_dirTo;
	
	if (!alive _unit) then {_unit switchMove "AinjPpneMstpSnonWrflDb_release"; } else {_unit switchmove "";}; // or alive units will get stuck
	_unit setDir _relD;
 };

 
 // Move-Lift
  H8_fnc_moveBodyLift = {
	_unit 	= (_this select 0);
	_player	= (_this select 1);
	
	// CREDIT TOO Das Attorney FOR CODE
	_pos  = _player modelToWorld [-0.2,0,0];						// align body (close enough for now)
    _unit setPos _pos;
	_unit setDir 180;
	//_unit switchMove "AinjPfalMstpSnonWrflDnon_carried_Up"; 
	_unit switchMove "AinjPfalMstpSnonWrflDnon_carried_still"; 	// AinjPpneMrunSnonWnonDb
 };

 
 // Move-Drag
 H8_fnc_moveBodyDrag = {
	_unit 	= (_this select 0);
	_player	= (_this select 1);
	
	// CREDIT TOO Das Attorney FOR CODE
	_pos  = _player modelToWorld [0,1,0];
    _unit setPos _pos;
	_unit setDir 180;
	_unit switchMove "AinjPpneMrunSnonWnonDb"; 		
 };


 H8_addDrag = {
 	{
		H8_increments = H8_increments + 1;	
		_x setVariable ["H8_increm",H8_increments,true];
		H8_dragUnitArray set [count H8_dragUnitArray, _x];
	} forEach _this;
			
	[_this,"H8_fnc_Action",TRUE] call BIS_fnc_MP;
	
	publicVariable "H8_increments";
	publicVariable "H8_dragUnitArray";
 };

 
if (isServer) then {

	if (isNil ("H8_dragUnitArray")) then {
	   H8_dragUnitArray = [];
	   H8_increments = 0; };
			
	{
		H8_increments = H8_increments + 1;	
		_x setVariable ["H8_increm",H8_increments,true];
		H8_dragUnitArray set [count H8_dragUnitArray, _x];
	} forEach _this;
			
	publicVariable "H8_increments";			
	publicVariable "H8_dragUnitArray";
 };
 
if (!isServer && (player != player)) then { waitUntil {player == player}; waitUntil {time > 15}; };
if (!isDedicated) then { 0 = H8_dragUnitArray spawn H8_fnc_Action; };
sleep 10;


















///////////////////////////////////
// Separate File? Server vs Client?


// addAction		["menu text", {"script"}, args, priority, titleText, hide, shortcut, condition, radius, unconscious, selection];
{ if (_x != player) then { _x addaction ["Body: Drag/Pull",{call H8_DragAction},nil,6,false,false,"","",2]; };	} forEach allUnits; sleep 1;
{ if (_x != player) then { _x addaction ["Body: Lift/Carry",{call H8_LiftAction},nil,6,false,false,"","",2]; };	} forEach allUnits;
sleep 1;


VQI_fnc_addDrag = {

	_unit = _this select 0;
	_unit addaction ["Body: Drag/Pull", {call H8_DragAction},nil,6,false,false,"","",2];
};






////////////////////
/* NOTES:



*/
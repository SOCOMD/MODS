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

/*
if (!(isNull player)) then {
	fnc_MPaddAction1 = {
        _this addAction [("<t color='#006699'>" + ("Request Flight SITREP") + "</t>"),"vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf","",6,true,true,"","(_target distance _this) < 4"];
		_this addAction [("<t color='#006699'>" + ("Request NEW H.A.L.O. Flight Plan") + "</t>"),"vqi_halo\VQI-DemonDropper\vqi_requestflight_halo.sqf","",5,true,true,"","(_target distance _this) < 4"];
		_this addAction [("<t color='#006699'>" + ("Request NEW ParaJump Flight Plan") + "</t>"),"vqi_halo\VQI-DemonDropper\vqi_requestflight_para.sqf","",4,true,true,"","(_target distance _this) < 4"];
        _this addAction [("<t color='#006699'>" + ("H.A.L.O. Inspection") + "</t>"),"vqi_halo\VQI-DemonDropper\vqiJumpMaster_halo.sqf","",3,true,true,"","(_target distance _this) < 4"];
		_this addAction [("<t color='#006699'>" + ("ParaJump Inspection") + "</t>"),"vqi_halo\VQI-DemonDropper\vqiJumpMaster_para.sqf","",2,true,true,"","(_target distance _this) < 4"];};
		
	fnc_MPaddAction2 = {	
		_this addAction [("<t color='#006699'>" + ("CLEARED for HALO Flight") + "</t>"),"vqi_halo\VQI-DemonDropper\vqiCrewMaster_halo.sqf","",2,true,true,"","(_target distance _this) < 4"];
		_this addAction [("<t color='#006699'>" + ("CLEARED for PARA Flight") + "</t>"),"vqi_halo\VQI-DemonDropper\vqiCrewMaster_para.sqf","",1,true,true,"","(_target distance _this) < 4"];};
	fnc_MPaddAction3 = {	
		_this addAction [("<t color='#FFFFFF'>" + ("Cargo Lighting - ON") + "</t>"),"vqi_halo\VQI-DemonDropper\vqi_lighting_groundplane.sqf","",1,true,true,"","(_target distance _this) < 7"];};
}; 
*/

if (isServer) then  { // random number generator
	R1X_Number = floor random 10;
	publicVariable "R1X_Number";
	
	R2X_Number = floor random 20;
	publicVariable "R2X_Number";
	
	R3X_Number = floor random 30;
	publicVariable "R3X_Number";
	
	pAlt_Number = _pTempX;
	publicVariable "pAlt_Number";
};

//hint "Client - DemonDropper";

if (isServer) then  { // random altitude generator
	HALO_RndAlt_Number10 = floor random 3100;	// 10,170K'
	publicVariable "HALO_RndAlt_Number10";
	
	
//hint "Server - DemonDropper";
_mapSize = call BIS_fnc_mapSize;
_half = _mapSize / 2;


//create some magic here...
demonPortal = "Sign_Sphere25cm_F" createVehicle (position VQI_HALO_C130); //
hideObjectGlobal demonPortal; demonPortal setVectorUp [0,0,1]; demonPortal setDir random 359;

//find centre of the Map -- Jump approx 25,000 - 35,000ft+
_startPos = [_half, _half, 7500 + HALO_RndAlt_Number10];	// 7500 = 24.6k'
demonPortal setPosASL _startPos; //ASL = Above Sea level
publicVariable "demonPortal";







sleep 10;
/////////////////////////////////////// SOCOM SYSTEM ////////////////////////////////////////////////
missionNamespace setVariable ["HALO_SOCOM", 1];
//socomORDERS = true;
// set-up the reference objects
_socomJSOC = call VQI_fnc_locX;
/////////////////////////////////////////////////////////////////////////////////////////////////////
sleep 10;



//JumpPlane Location
if (!isNull(Loc1)) then {
	_startPos = [(getPos Loc1 select 0), (getPos Loc1 select 1), 7500 + HALO_RndAlt_Number10];
	demonPortal setPosASL _startPos;
	_jumpPos = [getPos demonPortal, random 2000, random 359] call BIS_fnc_relPos;
	demonPortal setPosASL _jumpPos; //by SOCOM
} else {
	//find & move out to random X% of map + 360*		||		Or OVER Objective!  ???????
	_jumpPos = [getPos demonPortal, (random (_half*0.90)), random 359] call BIS_fnc_relPos;
	demonPortal setPosASL _jumpPos; //by Map
};
//////////////////////////////////////////////////////////////////////////////////////////////////////


sleep 1;

//create the C-130 Jump Craft!!!!
VQIHALO2 = "USAF_MC130" createVehicle (position demonPortal);
publicVariable "VQIHALO2";

VQIHALO2 allowDamage false; VQIHALO2 setVectorUp [0,0,1];
VQIHALO2 attachTo [demonPortal,[0,0,0]];
VQIHALO2 engineOn true;

sleep 1;

// setVelocity Ref
jumpV = "Sign_Sphere25cm_F" createVehicle (position VQI_HALO_C130);
jumpV attachTo [VQIHALO2,[0,0,0]]; sleep 1; jumpV setDir -180;
jumpV hideObjectGlobal true;

sleep 1;


//Fix the Damn Floor, or you'll trip and go into FreeFall animation!
_floorfix1 = "Box_NATO_WpsSpecial_F" createVehicle (position demonPortal); //HotFix until more time to test
_floorfix2 = "Box_NATO_WpsSpecial_F" createVehicle (position demonPortal); //HotFix until more time to test
clearWeaponCargoGlobal _floorfix1;
clearWeaponCargoGlobal _floorfix2;
clearMagazineCargoGlobal _floorfix1;
clearMagazineCargoGlobal _floorfix2;
clearItemCargoGlobal _floorfix1;
clearItemCargoGlobal _floorfix2;
_floorfix1 enableSimulation false;
_floorfix2 enableSimulation false;
_floorfix1 attachTo [VQIHALO2,[ 0.8,7.8,-4.7]];		// -3.1
_floorfix2 attachTo [VQIHALO2,[-0.8,7.8,-4.7]];

sleep 1;

//Create Crew or System to Start H.A.L.O. Ops!!!
//JumpMaster w/ Equipment Check and execVM the Backpack & Gear-Saving System
JumpMaster = "B_Helipilot_F" createVehicle (position demonPortal);
JumpMaster setIdentity "JumpMaster";
(group JumpMaster) SetGroupID ["JumpMaster"];
 
removeAllweapons JumpMaster; removeAllItems JumpMaster;  removeAllAssignedItems JumpMaster;  removeBackpack JumpMaster;  removeVest JumpMaster; removeHeadgear JumpMaster; JumpMaster addHeadgear "H_Cap_headphones";
//CrewMaster w/ Equipment Check and execVM the Altimeter, Helmet, and HALO EFX System
CrewMaster = "B_Helipilot_F" createVehicle (position demonPortal);
(group CrewMaster) SetGroupID ["CrewMaster"]; 
 
removeAllweapons CrewMaster; removeAllItems CrewMaster;  removeAllAssignedItems CrewMaster;  removeBackpack CrewMaster;  removeVest CrewMaster; CrewMaster addHeadgear "H_Cap_red";

sleep 1;

JumpMaster attachTo [VQI_HALO_C130,[ 0, -2,-5.5]]; 	// -13
CrewMaster attachTo [VQI_HALO_C130,[-1, 17,-4.6]];	//  6
CrewMaster setDir 160;

sleep 1;

JumpMaster switchMove "AmovPercMstpSnonWnonDnon_Ease";
CrewMaster switchMove "AmovPercMstpSnonWnonDnon_Ease";
//Acts_A_M01_briefing - Not MP friendly?

sleep 1;

//Required HALO Equipment & Gear Crate
//Custom Gear W-I-P, coming soon...?
_jumpCrate = "VQI_HALO_Crate" createVehicle (position demonPortal);
_jumpCrate attachTo [VQI_HALO_C130,[5,-2,-4.7]]; 	//
_jumpCrate allowDamage false;


execVM "vqi_halo\VQI-DemonDropper\vqi_crate_extra.sqf";


//Required spare VQI HALO Gear?
VQIHALO2 allowDamage false; 
VQI_HALO_C130 addItemCargoGlobal ["Helmet_VQI_HALO",6]; 
VQI_HALO_C130 addItemCargoGlobal ["Vest_VQI_Stingray",6]; 
VQI_HALO_C130 addItemCargoGlobal ["Uniform_VQI_Slipstream",6]; 
VQI_HALO_C130 addItemCargoGlobal ["VQI_JumpBuddy_1",6];


/*
//addActions in MP
[JumpMaster,"fnc_MPaddAction1",nil,true] spawn BIS_fnc_MP; 
[CrewMaster,"fnc_MPaddAction2",nil,true] spawn BIS_fnc_MP;
[VQI_HALO_C130,"fnc_MPaddAction3",nil,true] spawn BIS_fnc_MP;
*/

//jumpCargo = 1;
//publicVariableServer "jumpCargo";       			// new variable value sent to other non-local machines, to trigger eventHandler
//[jumpCargo] execVM "path\file_here.sqf"		 	// for client (activator) to play script.


// trigger to start Cargo/Lighting/Jump ---> Server/Host Control!
trgCargo = createTrigger["EmptyDetector",getPos VQIHALO2];
sleep 2;

publicVariableServer "trgCargo"; //use publicVariableClient?
trgCargo setTriggerArea[25,25,0,false];
trgCargo setTriggerActivation["WEST","PRESENT",false];
trgCargo setTriggerTimeout [1,1,1,false];
trgCargo setTriggerStatements["({_x in thisList} count (playableUnits + switchableUnits) > 0) && ((getposASL Player select 2) > 3333);", 
"[] execVM 'vqi_halo\VQI-DemonDropper\vqi_efx_cargo.sqf';", "hint 'X';"];





sleep 1;
detach JumpMaster;
sleep 1;
detach CrewMaster;

//setPos not working very well
//JumpMaster setpos [getPos JumpMaster select 0, getPos JumpMaster select 1, 0];
//CrewMaster setpos [getPos CrewMaster select 0, getPos CrewMaster select 1, 1.5];
sleep 1;

//Inside Night Lighting for ground C-130
lightC130 = "chemlight_blue" createVehicle (position demonPortal);  
lightC130 attachTo [VQI_HALO_C130,[0, 15,-1.5]];

//Add Altimeters to JumpCraft
VQIHALO2 addItemCargoGlobal ["VQI_JumpBuddy_1",8];

//NEW MP Menu
//[[JumpMaster, [("<t color='#006699'>" + ("Request Flight SITREP") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["Request Flight SITREP", "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [JumpMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["Request NEW H.A.L.O. Flight Plan", "execVM 'vqi_halo\VQI-DemonDropper\vqi_requestflight_halo.sqf'; [JumpMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["Request NEW ParaJump Flight Plan", "execVM 'vqi_halo\VQI-DemonDropper\vqi_requestflight_para.sqf'; [JumpMaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["H.A.L.O. Inspection", "execVM 'vqi_halo\VQI-DemonDropper\vqi_JumpMaster_halo.sqf'; [JumpMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[JumpMaster, ["ParaJump Inspection", "execVM 'vqi_halo\VQI-DemonDropper\vqi_JumpMaster_para.sqf'; [JumpMaster, 1]"]], "addAction", true, true] call BIS_fnc_MP;

[[CrewMaster, ["CLEARED for HALO Flight", "execVM 'vqi_halo\VQI-DemonDropper\vqi_CrewMaster_halo.sqf'; [CrewMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[CrewMaster, ["CLEARED for PARA Flight", "execVM 'vqi_halo\VQI-DemonDropper\vqi_CrewMaster_para.sqf'; [CrewMaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;

[[CrewMaster, ["Request Cargo Drop", "execVM 'vqi_halo\VQI-DemonDropper\vqi_CrewMaster_cargodrop.sqf'; [CrewMaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;

[[VQI_HALO_C130, ["Cargo Lighting - ON", "execVM 'vqi_halo\VQI-DemonDropper\vqi_lighting_groundplane.sqf'; [VQI_HALO_C130, 1]"]], "addAction", true, true] call BIS_fnc_MP;

sleep 1;

VQI_HALO_C130 animate ["ramp_bottom", 1];		// MC-130J Commando II
VQI_HALO_C130 animate ["Ramp_top", 1];			// MC-130J Commando II
};







//Jump Lighting W-I-P
//{_x in thisList} count (playableUnits + switchableUnits) > 1
//lightBLUE = "chemlight_blue" createVehicle [getPos trigChemBLUE select 0, getPos trigChemBLUE select 1,0.15];  lightBLUE attachTo [x,[0,4,-1.5]];

/*////////////////////////////////////////////////////////
 NOTES:  MP?

 [nil,nil,rPLAYSOUND,"ns_intro"] call RE;
*/////////////////////////////////////////////////////////
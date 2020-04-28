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
        _this addAction [("<t color='#006699'>" + ("H.A.L.O. Inspection") + "</t>"),"vqi_halo\VQI-DemonDropper\vqi_jumpmaster_halo.sqf","",3,true,true,"","(_target distance _this) < 4"];
		_this addAction [("<t color='#006699'>" + ("ParaJump Inspection") + "</t>"),"vqi_halo\VQI-DemonDropper\vqi_jumpmaster_para.sqf","",2,true,true,"","(_target distance _this) < 4"];};
		
	fnc_MPaddAction2 = {	
		_this addAction [("<t color='#006699'>" + ("CLEARED for HALO Flight") + "</t>"),"vqi_halo\VQI-DemonDropper\vqi_crewmaster_halo.sqf","",2,true,true,"","(_target distance _this) < 4"];
		_this addAction [("<t color='#006699'>" + ("CLEARED for PARA Flight") + "</t>"),"vqi_halo\VQI-DemonDropper\vqi_crewmaster_para.sqf","",1,true,true,"","(_target distance _this) < 4"];};
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
	HALO_RndAlt_Number10 = floor random 3100;
	publicVariable "HALO_RndAlt_Number10";
	
	
//hint "Server - DemonDropper";
_mapSize = call BIS_fnc_mapSize;
_half = _mapSize / 2;

//create some magic here...
demonPortal = "Sign_Sphere25cm_F" createVehicle (position VQI_HALO_C17); //
demonPortal hideObjectGlobal true; demonPortal setVectorUp [0,0,1]; demonPortal setDir random 359;

//find centre of the Map -- Jump approx 35,000-45,000ft+
_centerPos = [_half, _half, 10700 + HALO_RndAlt_Number10];	// 10700 = 35.1k'
demonPortal setPosASL _centerPos; //ASL = Above Sea level
publicVariable "demonPortal";

sleep 1;

//find & move out to random X% of map + 360*		||		Or OVER Objective!
_jumpPos = [getPos demonPortal, (random (_half*0.90)), random 359] call BIS_fnc_relPos;
demonPortal setPosASL _jumpPos; //Above Sea Level

sleep 1;

//create the C-17 Globemaster III Jump Craft!!!!
VQIHALO2 = "USAF_C17" createVehicle (position demonPortal);
publicVariable "VQIHALO2";

VQIHALO2 allowDamage false; VQIHALO2 setVectorUp [0,0,1];
VQIHALO2 attachTo [demonPortal,[0,0,0]];
VQIHALO2 engineOn true;

sleep 1;

// setVelocity Ref
jumpV = "Sign_Sphere25cm_F" createVehicle (position VQI_HALO_C17);
jumpV attachTo [VQIHALO2,[0,0,0]]; sleep 1; jumpV setDir -180;
jumpV hideObjectGlobal true;

sleep 1;




//Create Crew or System to Start H.A.L.O. Ops!!!
//JumpMaster w/ Equipment Check and execVM the Backpack & Gear-Saving System
_jumpmaster = "B_Helipilot_F" createVehicle (position demonPortal);
_jumpmaster setIdentity "JumpMaster";
(group _jumpmaster) SetGroupID ["JumpMaster"];
 
removeAllweapons _jumpmaster; removeAllItems _jumpmaster;  removeAllAssignedItems _jumpmaster;  removeBackpack _jumpmaster;  removeVest _jumpmaster; removeHeadgear _jumpmaster; _jumpmaster addHeadgear "H_Cap_headphones";
//CrewMaster w/ Equipment Check and execVM the Altimeter, Helmet, and HALO EFX System
_crewmaster = "B_Helipilot_F" createVehicle (position demonPortal);
(group _crewmaster) SetGroupID ["CrewMaster"]; 
 
removeAllweapons _crewmaster; removeAllItems _crewmaster;  removeAllAssignedItems _crewmaster;  removeBackpack _crewmaster;  removeVest _crewmaster; _crewmaster addHeadgear "H_Cap_red";

sleep 1;

_jumpmaster attachTo [VQI_HALO_C17,[ 0,  -30, -3.4]]; 	// 
_crewmaster attachTo [VQI_HALO_C17,[-1.7, 10, -1.2]];		//  
_crewmaster setDir 160;

sleep 1;

_jumpmaster switchMove "AmovPercMstpSnonWnonDnon_Ease";
_crewmaster switchMove "AmovPercMstpSnonWnonDnon_Ease";
//Acts_A_M01_briefing - Not MP friendly?

sleep 1;

//Required HALO Equipment & Gear Crate
//Custom Gear W-I-P, coming soon...?
_jumpCrate = "VQI_HALO_Crate" createVehicle (position demonPortal);
_jumpCrate attachTo [VQI_HALO_C17,[5,-30,-2.5]]; 	//
_jumpCrate allowDamage false;


execVM "vqi_halo\VQI-DemonDropper\vqi_crate_extra.sqf";


//Required spare VQI HALO Gear?
VQIHALO2 allowDamage false; 
VQI_HALO_C17 addItemCargoGlobal ["Helmet_VQI_HALO",6]; 
VQI_HALO_C17 addItemCargoGlobal ["Vest_VQI_Stingray",6]; 
VQI_HALO_C17 addItemCargoGlobal ["Uniform_VQI_Slipstream",6]; 
VQI_HALO_C17 addItemCargoGlobal ["VQI_JumpBuddy_1",6];


/*
//addActions in MP
[_jumpmaster,"fnc_MPaddAction1",nil,true] spawn BIS_fnc_MP; 
[_crewmaster,"fnc_MPaddAction2",nil,true] spawn BIS_fnc_MP;
[VQI_HALO_C17,"fnc_MPaddAction3",nil,true] spawn BIS_fnc_MP;
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
detach _jumpmaster;
sleep 1;
detach _crewmaster;

//setPos not working very well
//_jumpmaster setpos [getPos _jumpmaster select 0, getPos _jumpmaster select 1, 0];
//_crewmaster setpos [getPos _crewmaster select 0, getPos _crewmaster select 1, 1.5];
sleep 1;

//Inside Night Lighting for ground C-130
lightC130 = "chemlight_blue" createVehicle (position demonPortal);  
lightC130 attachTo [VQI_HALO_C17,[0, 15,-1.5]];

//Add Altimeters to JumpCraft
VQIHALO2 addItemCargoGlobal ["VQI_JumpBuddy_1",8];

//NEW MP Menu
//[[_jumpmaster, [("<t color='#006699'>" + ("Request Flight SITREP") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [_jumpmaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[_jumpmaster, ["Request Flight SITREP", "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [_jumpmaster, 5]"]], "addAction", true, true] call BIS_fnc_MP;
[[_jumpmaster, ["Request NEW H.A.L.O. Flight Plan", "execVM 'vqi_halo\VQI-DemonDropper\vqi_requestflight_halo.sqf'; [_jumpmaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[_jumpmaster, ["Request NEW ParaJump Flight Plan", "execVM 'vqi_halo\VQI-DemonDropper\vqi_requestflight_para.sqf'; [_jumpmaster, 3]"]], "addAction", true, true] call BIS_fnc_MP;
[[_jumpmaster, ["H.A.L.O. Inspection", "execVM 'vqi_halo\VQI-DemonDropper\vqi_jumpmaster_halo.sqf'; [_jumpmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[_jumpmaster, ["ParaJump Inspection", "execVM 'vqi_halo\VQI-DemonDropper\vqi_jumpmaster_para.sqf'; [_jumpmaster, 1]"]], "addAction", true, true] call BIS_fnc_MP;

[[_crewmaster, ["CLEARED for HALO Flight", "execVM 'vqi_halo\VQI-DemonDropper\vqi_crewmaster_halo.sqf'; [_crewmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[_crewmaster, ["CLEARED for PARA Flight", "execVM 'vqi_halo\VQI-DemonDropper\vqi_crewmaster_para.sqf'; [_crewmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;

[[VQI_HALO_C17, ["Cargo Lighting - ON", "execVM 'vqi_halo\VQI-DemonDropper\vqi_lighting_groundplane.sqf'; [VQI_HALO_C17, 1]"]], "addAction", true, true] call BIS_fnc_MP;

sleep 1;





			// C-17 Globemaster III
 			// C-17 Globemaster III
			// C-17 Globemaster III
//VQI_HALO_C17 say "globemaster_c17_doors";
VQI_HALO_C17 animate ["back_ramp",1];
VQI_HALO_C17 animate ["back_ramp_st",1];
VQI_HALO_C17 animate ["back_ramp_p",1];
VQI_HALO_C17 animate ["back_ramp_p_2",1];
VQI_HALO_C17 animate ["back_ramp_door_main",1]
};







//Jump Lighting W-I-P
//{_x in thisList} count (playableUnits + switchableUnits) > 1
//lightBLUE = "chemlight_blue" createVehicle [getPos trigChemBLUE select 0, getPos trigChemBLUE select 1,0.15];  lightBLUE attachTo [x,[0,4,-1.5]];

/*////////////////////////////////////////////////////////
 NOTES:  MP?

 [nil,nil,rPLAYSOUND,"ns_intro"] call RE;
*/////////////////////////////////////////////////////////
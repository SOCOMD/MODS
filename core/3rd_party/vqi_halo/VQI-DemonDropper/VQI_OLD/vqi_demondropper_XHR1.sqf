/////////////////////////////////////////////////////////////////////////////
/*	ADDON: VQI-DEMONDROPPER-v1		BY: R.Von Quest  aka the "Goblin"
	------------------------------------------------------------------------
	DEPT.: Von Quest Industries		STATUS: WORK-IN-PROGRESS
	PROJECT: H.A.L.O. SYSTEM		SERIES: SPOOKWARCOM
	ADDON NAME: DemonDropper		VERSION: v1 - 01.OCT.2014
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
		_this addAction [("<t color='#006699'>" + ("Request NEW Vampyre Flight Plan") + "</t>"),"vqi_halo\VQI-DemonDropper\vqi_requestflight_halo.sqf","",5,true,true,"","(_target distance _this) < 4"];
        _this addAction [("<t color='#006699'>" + ("H.A.L.O. Inspection") + "</t>"),"vqi_halo\VQI-DemonDropper\vqi_jumpmaster_halo.sqf","",3,true,true,"","(_target distance _this) < 4"];};
		
		
	fnc_MPaddAction2 = {	
		_this addAction [("<t color='#006699'>" + ("Engage Sub-Orbital Flight") + "</t>"),"vqi_halo\VQI-DemonDropper\vqi_crewmaster_halo.sqf","",2,true,true,"","(_target distance _this) < 4"];};
	
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
	
	//~~~~~~~~~~~~~~~~~
	//aFix_Door = 100000;
	//publicVariable "aFix_door";
};

//hint "Client - DemonDropper";

if (isServer) then  { // random altitude generator
	HALO_RndAlt_Number20 = floor random 6500; //(+20k)
	publicVariable "HALO_RndAlt_Number20";
	
	
//hint "Server - DemonDropper";
_mapSize = call BIS_fnc_mapSize;
_half = _mapSize / 2;


//create some magic here..."Sign_Sphere25cm_F"?
demonPortal = "Sign_Sphere25cm_F" createVehicle (position VQI_HALO_XHR1); //demonPortal allowDamage false; //
demonPortal hideObjectGlobal true; demonPortal setVectorUp [0,0,1]; demonPortal setDir random 359;

//~~~~~~~~~~~~~~~~~~~~~~~~test fix door
//demonPortal1 = "B_SDV_01_F" createVehicle (position _startFix);
//hideObject demonPortal1; demonPortal1 setVectorUp [0,0,1]; demonPortal1 setDir random 360;

//find centre of the Map -- Jump approx 45,000-65,000ft+
_centerPos = [_half, _half, 14000 + HALO_RndAlt_Number20];	//14000 = 45.9k'
demonPortal setPosASL _centerPos; //ASL = Above Sea level

sleep 1;

//find & move out to random X% of map + 360*		||		Or OVER Objective!
_jumpPos = [getPos demonPortal, (random (_half*0.90)), random 359] call BIS_fnc_relPos;
demonPortal setPosASL _jumpPos; //Above Sea Level

sleep 1;

// Create the XHR-1:Vampyre Jump Craft!!!!
VQIHALO2 = "VQI_XHR1_Vampyre" createVehicle (position demonPortal);
publicVariable "VQIHALO2";

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//demonPortal1 attachTo [demonPortal,[0,0,100000]];

//~~~
VQIHALO2 allowDamage false; VQIHALO2 setVectorUp [0,0,1];
VQIHALO2 attachTo [demonPortal,[0,0,0]];
VQIHALO2 engineOn true;

sleep 1;

// setVelocity Ref
jumpV = "Sign_Sphere25cm_F" createVehicle (position VQI_HALO_XHR1);
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

_jumpmaster attachTo [VQI_HALO_XHR1,[0,-10,-1.7]]; 	//XHR1
_crewmaster attachTo [VQI_HALO_XHR1,[1.6,-2,-1.5]]; 	//XHR1
_crewmaster setDir 200;

sleep 1;


_jumpmaster switchMove "AmovPercMstpSnonWnonDnon_Ease";
_crewmaster switchMove "AmovPercMstpSnonWnonDnon_Ease";
//Acts_A_M01_briefing - Not MP friendly?

sleep 1;

//Required HALO Equipment & Gear Crate
//Custom Gear W-I-P, coming soon...?
_jumpCrate = "VQI_HALO_Crate" createVehicle (position demonPortal);
_jumpCrate attachTo [VQI_HALO_XHR1,[5,-10,-1]]; //?
_jumpCrate allowDamage false;

/* BlackOps Crate - Move to another Mod Project?
////////////////////////////////////////////////
ClearWeaponCargoGlobal _jumpCrate; 
ClearMagazineCargoGlobal _jumpCrate;
ClearItemCargoGlobal _jumpCrate;
ClearBackpackCargoGlobal _jumpCrate;
sleep 3;

_jumpCrate addItemCargoGlobal ["Helmet_VQI_HALO",12]; 
_jumpCrate addItemCargoGlobal ["Vest_VQI_Stingray",12];
_jumpCrate addItemCargoGlobal ["Uniform_VQI_Slipstream",12];
_jumpCrate addItemCargoGlobal ["U_B_Wetsuit",12];
_jumpCrate addItemCargoGlobal ["U_B_GhillieSuit",4];


_jumpCrate addItemCargoGlobal ["U_B_CombatUniform_mcam",12];
_jumpCrate addItemCargoGlobal ["V_PlateCarrier3_rgr",12];
_jumpCrate addItemCargoGlobal ["Vest_VQI_Rhino",2];
_jumpCrate addItemCargoGlobal ["V_Tacvest_blk",12];
_jumpCrate addItemCargoGlobal ["H_Booniehat_khk",12];

_jumpCrate addBackpackCargoGlobal ["B_Carryall_khk",12];
_jumpCrate addBackpackCargoGlobal ["B_Bergen_blk",12];

_jumpCrate addItemCargoGlobal ["SatchelCharge_Remote_Mag",4];
_jumpCrate addItemCargoGlobal ["DemoCharge_Remote_Mag",12];
_jumpCrate addItemCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag",24];
_jumpCrate addItemCargoGlobal ["APERSMine_Range_Mag",24];
_jumpCrate addItemCargoGlobal ["APERSBoundingMine_Range_Mag",24];
_jumpCrate addItemCargoGlobal ["APERSTripMine_Wire_Mag",24];
_jumpCrate addItemCargoGlobal ["SLAMDirectionalMine_Wire_Mag",12];
_jumpCrate addItemCargoGlobal ["ATMine_Range_Mag",6];
_jumpCrate addItemCargoGlobal ["HandGrenade",96];

_jumpCrate addItemCargoGlobal ["SmokeShell",48];
_jumpCrate addItemCargoGlobal ["SmokeShellRed",24];
_jumpCrate addItemCargoGlobal ["SmokeShellBlue",24];
_jumpCrate addItemCargoGlobal ["SmokeShellGreen",24];
_jumpCrate addItemCargoGlobal ["SmokeShellYellow",24];
_jumpCrate addItemCargoGlobal ["SmokeShellPurple",24];
_jumpCrate addItemCargoGlobal ["SmokeShellOrange",24];
_jumpCrate addItemCargoGlobal ["Chemlight_Red",48];
_jumpCrate addItemCargoGlobal ["Chemlight_Blue",48];
_jumpCrate addItemCargoGlobal ["Chemlight_Green",48];
_jumpCrate addItemCargoGlobal ["Chemlight_Yellow",48];

_jumpCrate addItemCargoGlobal ["arifle_MX_Black_F",4];
_jumpCrate addItemCargoGlobal ["arifle_MX_GL_Black_F",4];
_jumpCrate addItemCargoGlobal ["arifle_MX_SW_Black_F",4];
_jumpCrate addItemCargoGlobal ["arifle_MXC_Black_F",4];
_jumpCrate addItemCargoGlobal ["arifle_MXM_Black_F",4];
_jumpCrate addItemCargoGlobal ["srifle_EBR_F",4];
_jumpCrate addItemCargoGlobal ["srifle_LRR_F",2];
_jumpCrate addItemCargoGlobal ["hgun_PDW2000_F",6]; 
_jumpCrate addItemCargoGlobal ["hgun_ACPC2_F",12];

_jumpCrate addItemCargoGlobal ["launch_NLAW_F",2];
_jumpCrate addItemCargoGlobal ["NLAW_F",6];

_jumpCrate addItemCargoGlobal ["30Rnd_65x39_caseless_mag",96];
_jumpCrate addItemCargoGlobal ["100Rnd_65x39_caseless_mag",96];
_jumpCrate addItemCargoGlobal ["20Rnd_762x51_Mag",96];
_jumpCrate addItemCargoGlobal ["7Rnd_408_Mag",24];
_jumpCrate addItemCargoGlobal ["30Rnd_9x21_Mag",96];
_jumpCrate addItemCargoGlobal ["9Rnd_45ACP_Mag",36];
_jumpCrate addItemCargoGlobal ["3Rnd_HE_Grenade_shell",96];
_jumpCrate addItemCargoGlobal ["3Rnd_UGL_FlareWhite_F",96];

_jumpCrate addItemCargoGlobal ["muzzle_snds_H",12];
_jumpCrate addItemCargoGlobal ["muzzle_snds_L",12];
_jumpCrate addItemCargoGlobal ["muzzle_snds_ACP",12];

_jumpCrate additemCargoGlobal ["acc_pointer_IR",12];
_jumpCrate additemCargoGlobal ["acc_flashlight",12];
_jumpCrate additemCargoGlobal ["optic_Hamr",12];
_jumpCrate addItemCargoGlobal ["optic_ACO",12];
_jumpCrate addItemCargoGlobal ["optic_SOS",4];
_jumpCrate addItemCargoGlobal ["optic_DMS",12];
_jumpCrate addItemCargoGlobal ["optic_TWS",2];
_jumpCrate addItemCargoGlobal ["optic_NVS",12];
_jumpCrate addItemCargoGlobal ["optic_MRCO",12];


_jumpCrate additemCargoGlobal ["itemMap",12];
_jumpCrate additemCargoGlobal ["itemWatch",12];
_jumpCrate additemCargoGlobal ["itemCompass",12];
_jumpCrate additemCargoGlobal ["itemRadio",12];
_jumpCrate additemCargoGlobal ["itemGPS",12];

_jumpCrate additemCargoGlobal ["MineDetector",6];
_jumpCrate additemCargoGlobal ["NVGoggles_OPFOR",12];
_jumpCrate additemCargoGlobal ["LaserDesignator",2];
_jumpCrate addItemCargoGlobal ["LaserBatteries",2];
_jumpCrate additemCargoGlobal ["Binocular",12];

_jumpCrate additemCargoGlobal ["FirstAidKit",48];
_jumpCrate additemCargoGlobal ["MedKit",4];
_jumpCrate additemCargoGlobal ["ToolKit",4];

/*
"arifle_MX_Black_F"
"arifle_MX_GL_Black_F"
"arifle_MX_SW_Black_F"
"arifle_MXC_Black_F"
"arifle_MXM_Black_F"
*/

//Required spare VQI HALO Gear?
VQIHALO2 allowDamage false; 
VQI_HALO_XHR1 addItemCargoGlobal ["Helmet_VQI_HALO",3]; 
VQI_HALO_XHR1 addItemCargoGlobal ["Vest_VQI_Stingray",3]; 
VQI_HALO_XHR1 addItemCargoGlobal ["Uniform_VQI_Slipstream",3]; 
VQI_HALO_XHR1 additemCargoGlobal ["U_B_Wetsuit",3];
VQI_HALO_XHR1 additemCargoGlobal ["G_Diving",3];
VQI_HALO_XHR1 addItemCargoGlobal ["VQI_JumpBuddy_1",3];
VQI_HALO_XHR1 addItemCargoGlobal ["arifle_MXC_Black_F",3];
VQI_HALO_XHR1 addItemCargoGlobal ["arifle_MXC_Black_F",3];
VQI_HALO_XHR1 addItemCargoGlobal ["optic_DMS",3];
VQI_HALO_XHR1 addItemCargoGlobal ["30Rnd_65x39_caseless_mag",96];
VQI_HALO_XHR1 addItemCargoGlobal ["acc_flashlight",3];

/*
//addActions in MP
[_jumpmaster,"fnc_MPaddAction1",nil,true] spawn BIS_fnc_MP; 
[_crewmaster,"fnc_MPaddAction2",nil,true] spawn BIS_fnc_MP;
[VQI_HALO_XHR1,"fnc_MPaddAction3",nil,true] spawn BIS_fnc_MP;
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

//Inside Night Lighting for ground XHR-1:Vampyre
lightXHR1 = "chemlight_red" createVehicle (position demonPortal);  
lightXHR1 attachTo [VQI_HALO_XHR1,[0,-4,0.85]];



sleep 1;
detach _jumpmaster;
_jumpmaster setVelocity [0,0,0.3];
sleep 1;
detach _crewmaster;
_crewmaster setVelocity [0,0,0.3];
sleep 1;
detach _jumpCrate;
_jumpCrate setVelocity [0,0,0.3];

VQI_HALO_XHR1 animate ["AnimateRAMP1", 1];

VQIHALO2 allowDamage false;
VQIHALO2 setDamage 0;
VQIHALO2 setDammage 0;
VQIHALO2 addItemCargoGlobal ["VQI_JumpBuddy_1",4];


//NEW MP Menu
[[_jumpmaster, ["Request Flight SITREP", "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [_jumpmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[_jumpmaster, ["Request NEW Vampyre Flight Plan", "execVM 'vqi_halo\VQI-DemonDropper\vqi_requestflight_halo.sqf'; [_jumpmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[_jumpmaster, ["H.A.L.O. Inspection", "execVM 'vqi_halo\VQI-DemonDropper\vqi_jumpmaster_halo.sqf'; [_jumpmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;

[[_crewmaster, ["Engage Sub-Orbital Flight", "execVM 'vqi_halo\VQI-DemonDropper\vqi_crewmaster_halo.sqf'; [_crewmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;

[[VQI_HALO_XHR1, ["Cargo Lighting - Red OFF / Blue ON", "execVM 'vqi_halo\VQI-DemonDropper\vqi_lighting_groundplane.sqf'; [VQI_HALO_XHR1, 2]"]], "addAction", true, true] call BIS_fnc_MP;
};







//Jump Lighting W-I-P
//{_x in thisList} count (playableUnits + switchableUnits) > 1
//lightBLUE = "chemlight_blue" createVehicle [getPos trigChemBLUE select 0, getPos trigChemBLUE select 1,0.15];  lightBLUE attachTo [x,[0,4,-1.5]];

/*////////////////////////////////////////////////////////
 NOTES:  MP?
[[VQI_HALO_XHR1, [("<t color='#006699'>" + ("Cargo Lighting - ON") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_lighting_groundplane.sqf'; [VQI_HALO_XHR1, 2]"]], "addAction", true, true] call BIS_fnc_MP;
 [nil,nil,rPLAYSOUND,"ns_intro"] call RE;
*/////////////////////////////////////////////////////////
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
	HALO_RndAlt_Number = floor random 3100;
	publicVariable "HALO_RndAlt_Number";
	
	
//hint "Server - DemonDropper";
_half = 0;
_mapSizeF = worldName;

//find Map size FORMULA: Custom/A2/A3	Add non-supported manually
if (_mapSizeF == "Stratis")			then {_half = getNumber (configfile >> "CfgWorlds" >> worldName >> "mapSize") / 2;}; // Map formula A3
if (_mapSizeF == "Altis")				then {_half = getNumber (configfile >> "CfgWorlds" >> worldName >> "mapSize") / 2;}; // Map formula A3
if (_mapSizeF == "Chernarus")			then {_half = 7500;};
if (_mapSizeF == "Utes")				then {_half = 2500;};
if (_mapSizeF == "ProvingGrounds_PMC")	then {_half = 1000;};
if (_mapSizeF == "Takistan")			then {_half = 6300;};
if (_mapSizeF == "Zargabd")			then {_half = 4000;};
if (_mapSizeF == "Desert_E")			then {_half = 1000;};
if (_mapSizeF == "Shapur_baf")			then {_half = 1000;};	
if (_mapSizeF == "IslaDuala")			then {_half = 5000;};
//	
if (_mapSizeF == "fallujah")			then {_half = 5000;};	
if (_mapSizeF == "fata")				then {_half = 5000;};	
if (_mapSizeF == "Thirsk")				then {_half = 2500;};
if (_mapSizeF == "ThirskW")			then {_half = 2500;};
if (_mapSizeF == "pja305")				then {_half = 10000;};
if (_mapSizeF == "pja306")				then {_half = 10000;};
if (_mapSizeF == "pja307")				then {_half = 10000;};
if (_mapSizeF == "sfp_wamako")			then {_half = 12500;};
if (_mapSizeF == "sfp_sturko")			then {_half = 5000;};
if (_mapSizeF == "everon2014")			then {_half = 6500;};
//
if (_mapSizeF == "IsolaDiCapraia")		then {_half = 5000;};


//non-suported maps
if (_half == 0)	then {_half = 3000;};


//create some magic here...
_demonPortal = "Sign_Sphere25cm_F" createVehicle (position VQI_HALO_IL76); //C-130J by theebu
hideObject _demonPortal; _demonPortal setVectorUp [0,0,1]; _demonPortal setDir random 360;

//find centre of the Map -- Jump approx 32,000-41,000ft+
_centerPos = [_half, _half, 9600 + HALO_RndAlt_Number];
_demonPortal setPosASL _centerPos; //ASL = Above Sea level

sleep 1;

//find & move out to random 75% of map + 360*
_jumpPos = [getPos _demonPortal, (random (_half*0.75)), random 360] call BIS_fnc_relPos;
_demonPortal setPosASL _jumpPos; //Above Sea Level

sleep 1;

//create the Jump Craft!!!!
VQIHALO2 = "ivory_il76" createVehicle (position _demonPortal);
publicVariable "VQIHALO2";

VQIHALO2 allowDamage false; VQIHALO2 setVectorUp [0,0,1];
VQIHALO2 attachTo [_demonPortal,[0,0,0]];
VQIHALO2 engineOn true;

sleep 1;
/*  ::::::: NOT NEEDED IN Ivory IL-76 Mod ::::::::
//Fix the Damn Floor, or you'll trip and go into FreeFall animation!
_floorfix1 = "Box_NATO_WpsSpecial_F" createVehicle (position _demonPortal); //HotFix until more time to test
_floorfix2 = "Box_NATO_WpsSpecial_F" createVehicle (position _demonPortal); //HotFix until more time to test
clearWeaponCargoGlobal _floorfix1;
clearWeaponCargoGlobal _floorfix2;
clearMagazineCargoGlobal _floorfix1;
clearMagazineCargoGlobal _floorfix2;
clearItemCargoGlobal _floorfix1;
clearItemCargoGlobal _floorfix2;
_floorfix1 enableSimulation false;
_floorfix2 enableSimulation false;
_floorfix1 attachTo [VQIHALO2,[0.8,-3.1,-4.7]];
_floorfix2 attachTo [VQIHALO2,[-0.8,-3.1,-4.7]];
*/
sleep 1;

//Create Crew or System to Start H.A.L.O. Ops!!!
//JumpMaster w/ Equipment Check and execVM the Backpack & Gear-Saving System
_jumpmaster = "B_Helipilot_F" createVehicle (position _demonPortal);
_jumpmaster setIdentity "JumpMaster";
(group _jumpmaster) SetGroupID ["JumpMaster"];
 
removeAllweapons _jumpmaster; removeAllItems _jumpmaster;  removeAllAssignedItems _jumpmaster;  removeBackpack _jumpmaster;  removeVest _jumpmaster; removeHeadgear _jumpmaster; _jumpmaster addHeadgear "H_Cap_headphones";
//CrewMaster w/ Equipment Check and execVM the Altimeter, Helmet, and HALO EFX System
_crewmaster = "B_Helipilot_F" createVehicle (position _demonPortal);
(group _crewmaster) SetGroupID ["CrewMaster"]; 
 
removeAllweapons _crewmaster; removeAllItems _crewmaster;  removeAllAssignedItems _crewmaster;  removeBackpack _crewmaster;  removeVest _crewmaster; _crewmaster addHeadgear "H_Cap_red";

sleep 1;

_jumpmaster attachTo [VQI_HALO_IL76,[0,-26,-3.4]]; //
_crewmaster attachTo [VQI_HALO_IL76,[-1,-19,-3.4]]; //
_crewmaster setDir 160;

sleep 1;

_jumpmaster switchMove "AmovPercMstpSnonWnonDnon_Ease";
_crewmaster switchMove "AmovPercMstpSnonWnonDnon_Ease";
//Acts_A_M01_briefing - Not MP friendly?

sleep 1;

//Required HALO Equipment & Gear Crate
//Custom Gear W-I-P, coming soon...?
_jumpCrate = "VQI_HALO_Crate" createVehicle (position _demonPortal);
_jumpCrate attachTo [VQI_HALO_IL76,[4,-26,-2]]; //C1130 4, -13, -4.7
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
VQI_HALO_IL76 addItemCargoGlobal ["Helmet_VQI_HALO",6]; 
VQI_HALO_IL76 addItemCargoGlobal ["Vest_VQI_Stingray",6]; 
VQI_HALO_IL76 addItemCargoGlobal ["Uniform_VQI_Slipstream",6]; 
VQI_HALO_IL76 addItemCargoGlobal ["VQI_JumpBuddy_1",6];


/*
//addActions in MP
[_jumpmaster,"fnc_MPaddAction1",nil,true] spawn BIS_fnc_MP; 
[_crewmaster,"fnc_MPaddAction2",nil,true] spawn BIS_fnc_MP;
[VQI_HALO_IL76,"fnc_MPaddAction3",nil,true] spawn BIS_fnc_MP;
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
lightIL76 = "chemlight_blue" createVehicle (position _demonPortal);  
lightIL76 attachTo [VQI_HALO_IL76,[0,4,-1.5]];




VQIHALO2 addItemCargoGlobal ["VQI_JumpBuddy_1",4];


//NEW MP Menu
[[_jumpmaster, [("<t color='#006699'>" + ("Request Flight SITREP") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_mkrjumpplane.sqf'; [_jumpmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[_jumpmaster, [("<t color='#006699'>" + ("Request NEW H.A.L.O. Flight Plan") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_requestflight_halo.sqf'; [_jumpmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[_jumpmaster, [("<t color='#006699'>" + ("Request NEW ParaJump Flight Plan") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_requestflight_para.sqf'; [_jumpmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[_jumpmaster, [("<t color='#006699'>" + ("H.A.L.O. Inspection") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_jumpmaster_halo.sqf'; [_jumpmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[_jumpmaster, [("<t color='#006699'>" + ("ParaJump Inspection") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_jumpmaster_para.sqf'; [_jumpmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;

[[_crewmaster, [("<t color='#006699'>" + ("CLEARED for HALO Flight") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_crewmaster_halo.sqf'; [_crewmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;
[[_crewmaster, [("<t color='#006699'>" + ("CLEARED for PARA Flight") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_crewmaster_para.sqf'; [_crewmaster, 2]"]], "addAction", true, true] call BIS_fnc_MP;

[[VQI_HALO_IL76, [("<t color='#006699'>" + ("Cargo Lighting - ON") + "</t>"), "execVM 'vqi_halo\VQI-DemonDropper\vqi_lighting_groundplane.sqf'; [VQI_HALO_IL76, 2]"]], "addAction", true, true] call BIS_fnc_MP;
};







//Jump Lighting W-I-P
//{_x in thisList} count (playableUnits + switchableUnits) > 1
//lightBLUE = "chemlight_blue" createVehicle [getPos trigChemBLUE select 0, getPos trigChemBLUE select 1,0.15];  lightBLUE attachTo [x,[0,4,-1.5]];

/*////////////////////////////////////////////////////////
 NOTES:  MP?

 [nil,nil,rPLAYSOUND,"ns_intro"] call RE;
*/////////////////////////////////////////////////////////
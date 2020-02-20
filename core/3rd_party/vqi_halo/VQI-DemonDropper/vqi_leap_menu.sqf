// All-In-One MENU Setup...Only 1 Key to memorize!
// 



private ["_menu0","_menu1","_menu2","_menu3","_menu4","_menu5","_menu6","_menu7","_menu8",
		"_menuS0","_menuS1","_menuS2","_menuS3","_menuS4"];
		
		
		
//player = _this select 0;
		

_menuS0= player addAction ["----------------"," "];
_menu0 = player addAction ["Altimeter - POWER ON/OFF","vqi_halo\VQI-DemonDropper\Equipment\Altimeter\vqi_halo_altimeter_key_power.sqf"];
_menu1 = player addAction ["Altimeter - Toggle View ON/OFF","vqi_halo\VQI-DemonDropper\Equipment\Altimeter\vqi_halo_altimeter_key_toggle.sqf"];
_menu2 = player addAction ["AR3 Millibar hPA Setting","vqi_halo\VQI-DemonDropper\Equipment\AAD\AR3\vqi_halo_ar3_setting.sqf"];
_menuS1= player addAction ["----------------"," "];

//if ("Chemlight_Red" in UniformItems player) then {
_menu3 = player addAction ["JumpLight - RED Chemlight - On Boot","vqi_halo\VQI-DemonDropper\Equipment\vqi_halo_jumplight_red_attach.sqf"];
_menu4 = player addAction ["JumpLight - RED Chemlight - Remove","vqi_halo\VQI-DemonDropper\Equipment\vqi_halo_jumplight_red_detach.sqf"];
//};
_menu5 = player addAction ["SmokeShell - BLUE Smoke - On Boot","vqi_halo\VQI-DemonDropper\Equipment\vqi_halo_attach_smoke_blue.sqf"];
_menuS2= player addAction ["----------------"," "];




// Dragonfly
_menu6 = player addAction ["Dragonfly ReBreather - SYSTEM ON","vqi_halo\VQI-DemonDropper\Equipment\Oxygen\Dragonfly\vqi_leap_dragonfly_system.sqf"];					// FIX
_menu7 = player addAction ["Dragonfly ReBreather - Dive/Surface Valve: DSV","vqi_halo\VQI-DemonDropper\Equipment\Oxygen\Dragonfly\vqi_leap_dragonfly_gasmix.sqf"];		// FIX
_menuS3= player addAction ["----------------"," "];


// Drop Chute
_menu8 = player addAction ["Detach Pack / Drop Chute","vqi_halo\VQI-DemonDropper\Landing\vqi_halo_chuteonground.sqf"];
_menuS4= player addAction ["----------------"," "];




sleep 15;
player removeAction _menu0;
player removeAction _menu1;
player removeAction _menu2;
player removeAction _menu3;
player removeAction _menu4;
player removeAction _menu5;
player removeAction _menu6;
player removeAction _menu7;
player removeAction _menu8;
player removeAction _menuS0;
player removeAction _menuS1;
player removeAction _menuS2;
player removeAction _menuS3;
player removeAction _menuS4;

//////////////////////////
/* NOTES:



*/
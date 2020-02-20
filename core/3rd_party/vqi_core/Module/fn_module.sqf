//
//


private ["_logic","_units","_activated","_coreHints","_mapWeather","_coldBreath","_covertUnArm","_seasonMoon","_daylight","_startLoc","_gearPlayer",
		"_msgOn","_msgT","_msg1","_msg2","_msg3","_msgX","_msgY","_weaponSway","_stamina","_holster","_coreHELI","_dragCarry"];

// Argument 0 is module logic
_logic = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = [_this, 1, [], [[]]] call BIS_fnc_param;

// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = [_this, 2, true, [true]] call BIS_fnc_param;




// ---------- CORE Module Setup Player Options ----------------------


// Debug/Hints
_coreHints = _logic getVariable "vqi_module_core_debughints";
missionNamespace setVariable ["VQI_CORE_HINTS", _coreHints];






// Climate
_climate = _logic getVariable "vqi_module_core_climate";
missionNamespace setVariable ["VQI_CORE_REGIONWEATHER", _climate];

// Snow Type
_mapSnow = _logic getVariable "vqi_module_core_coldsnow";
missionNamespace setVariable ["VQI_CORE_COLDSNOW", _mapSnow];
// Snow Percent
_snowChance = _logic getVariable "vqi_module_core_coldsnow_chance";
missionNamespace setVariable ["VQI_CORE_COLDSNOW_CHANCE", _snowChance];

// Cold Breath
_coldBreath = _logic getVariable "vqi_module_core_coldbreath";
missionNamespace setVariable ["VQI_CORE_COLDBREATH", _coldBreath];







// Covert / Unarmed
_covertUnArm = _logic getVariable "vqi_module_core_covert_unarmed";
missionNamespace setVariable ["VQI_CORE_UNARMED", _covertUnArm];

// Drag/Carry
_dragCarry = _logic getVariable "vqi_module_core_dragcarry";
missionNamespace setVariable ["VQI_CORE_DRAGCARRY", _dragCarry];

// Full Moon Date/Season
_seasonMoon = _logic getVariable "vqi_module_core_datetime_sm";
missionNamespace setVariable ["VQI_CORE_SEASONMOON", _seasonMoon];

// Start Time
_daylight = _logic getVariable "vqi_module_core_datetime_daylight";
missionNamespace setVariable ["VQI_CORE_DAYLIGHT", _daylight];

// Start Location
_startLoc = _logic getVariable "vqi_module_core_playerstart_location";
missionNamespace setVariable ["VQI_CORE_STARTTYPE", _startLoc];

// Starting Gear
_gearPlayer = _logic getVariable "vqi_module_core_weaponsgear_player";
missionNamespace setVariable ["VQI_CORE_STARTGEAR_P", _gearPlayer];

//--------------------------------------------------------
// Start Screen
_coreSS = _logic getVariable "vqi_module_core_startscreen";
missionNamespace setVariable ["VQI_CORE_STARTSCREEN", _coreSS];

//--------------------------------------------------------
// Msg ON
_msgOn = _logic getVariable "vqi_module_core_msg_on";
missionNamespace setVariable ["VQI_CORE_MSG_ON", _msgOn];

// Msg Time
_msgT = _logic getVariable "vqi_module_core_msg_timed";
missionNamespace setVariable ["VQI_CORE_MSG_TIME", _msgT];

// Msg 1
_msg1 = _logic getVariable "vqi_module_core_msg_1";
missionNamespace setVariable ["VQI_CORE_MSG_1", _msg1];

// Msg 2
_msg2 = _logic getVariable "vqi_module_core_msg_2";
missionNamespace setVariable ["VQI_CORE_MSG_2", _msg2];

// Msg 3
_msg3 = _logic getVariable "vqi_module_core_msg_3";
missionNamespace setVariable ["VQI_CORE_MSG_3", _msg3];

// Msg X
_msgX = _logic getVariable "vqi_module_core_msg_x";
missionNamespace setVariable ["VQI_CORE_MSG_X", _msgX];

// Msg Y
_msgY = _logic getVariable "vqi_module_core_msg_y";
missionNamespace setVariable ["VQI_CORE_MSG_Y", _msgY];
//---------------------------------------------------------------

// WeaponSway
_weaponSway = _logic getVariable "vqi_module_core_weaponsway";
missionNamespace setVariable ["VQI_CORE_WEAPONSWAY", _weaponSway];

// Stamina
_stamina = _logic getVariable "vqi_module_core_stamina";
missionNamespace setVariable ["VQI_CORE_STAMINA", _stamina];

// Holster
_holster = _logic getVariable "vqi_module_core_holster";
missionNamespace setVariable ["VQI_CORE_HOLSTER", _holster];


// Heli
_coreHELI = _logic getVariable "vqi_module_core_support_heli";
missionNamespace setVariable ["VQI_CORE_SUPPORT_HELI", _coreHELI];
// type
_coreHELI1 = _logic getVariable "vqi_module_core_heli_infil_1";
missionNamespace setVariable ["VQI_CORE_COREHELI_1", _coreHELI1];
_coreHELI2 = _logic getVariable "vqi_module_core_heli_infil_2";
missionNamespace setVariable ["VQI_CORE_COREHELI_2", _coreHELI2];
_coreHELI3 = _logic getVariable "vqi_module_core_heli_infil_3";
missionNamespace setVariable ["VQI_CORE_COREHELI_3", _coreHELI3];
_coreHELI4 = _logic getVariable "vqi_module_core_heli_infil_4";
missionNamespace setVariable ["VQI_CORE_COREHELI_4", _coreHELI4];
_coreHELI4cas = _logic getVariable "vqi_module_core_heli_infil_4_cas";
missionNamespace setVariable ["VQI_CORE_COREHELI_4CAS", _coreHELI4cas];
// alt land
_coreHELI1al = _logic getVariable "vqi_module_core_heli_infil_1_altL";
missionNamespace setVariable ["VQI_CORE_COREHELI_1_ALTL", _coreHELI1al];
_coreHELI2al = _logic getVariable "vqi_module_core_heli_infil_2_altL";
missionNamespace setVariable ["VQI_CORE_COREHELI_2_ALTL", _coreHELI2al];
_coreHELI3al = _logic getVariable "vqi_module_core_heli_infil_3_altL";
missionNamespace setVariable ["VQI_CORE_COREHELI_3_ALTL", _coreHELI3al];
_coreHELI4al = _logic getVariable "vqi_module_core_heli_infil_4_altL";
missionNamespace setVariable ["VQI_CORE_COREHELI_4_ALTL", _coreHELI4al];
// alt sea
_coreHELI1as = _logic getVariable "vqi_module_core_heli_infil_1_altS";
missionNamespace setVariable ["VQI_CORE_COREHELI_1_ALTS", _coreHELI1as];
_coreHELI2as = _logic getVariable "vqi_module_core_heli_infil_2_altS";
missionNamespace setVariable ["VQI_CORE_COREHELI_2_ALTS", _coreHELI2as];
_coreHELI3as = _logic getVariable "vqi_module_core_heli_infil_3_altS";
missionNamespace setVariable ["VQI_CORE_COREHELI_3_ALTS", _coreHELI3as];
_coreHELI4as = _logic getVariable "vqi_module_core_heli_infil_4_altS";
missionNamespace setVariable ["VQI_CORE_COREHELI_4_ALTS", _coreHELI4as];



// Heli Item
_coreHELIitem = _logic getVariable "vqi_module_core_support_item";
missionNamespace setVariable ["VQI_CORE_SUPPORT_ITEM", _coreHELIitem];










//---------------------------------------------------------------

// tacReload
_tacReload = _logic getVariable "vqi_module_core_tacreload";
missionNamespace setVariable ["VQI_CORE_tacRELOAD", _tacReload];

// tacThrow
_tacThrow = _logic getVariable "vqi_module_core_tacthrow";
missionNamespace setVariable ["VQI_CORE_tacTHROW", _tacThrow];

// tacExplosives
_tacExp = _logic getVariable "vqi_module_core_tacexplosives";
missionNamespace setVariable ["VQI_CORE_tacEXPLOSIVES", _tacExp];

// screen blood
_bloodss = _logic getVariable "vqi_module_core_screensplatter";
missionNamespace setVariable ["VQI_CORE_BLOODSS", _bloodss];

// screen blood
_injuryR = _logic getVariable "vqi_module_core_injuryreport";
missionNamespace setVariable ["VQI_CORE_INJURYREPORT", _injuryR];


//---------------------------------------------------------------

// hole in pocket
_HIMP = _logic getVariable "vqi_module_core_holeinmypocket";
missionNamespace setVariable ["VQI_CORE_HIMP", _HIMP];

// hole in pocket
_sHIMP = _logic getVariable "vqi_module_core_holeinmypocket_timer";
missionNamespace setVariable ["VQI_CORE_sHIMP", _sHIMP];


// hole in pocket
_pHIMP = _logic getVariable "vqi_module_core_holeinmypocket_chance";
missionNamespace setVariable ["VQI_CORE_pHIMP", _pHIMP];






sleep 1;
[] spawn VQI_fnc_COREinit;
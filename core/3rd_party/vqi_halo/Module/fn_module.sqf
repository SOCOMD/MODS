// Module Variables
//



private ["_logic","_activ"];


_logic = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_units = [_this, 1, [], [[]]] call BIS_fnc_param;
_activ = [_this, 2, true, [true]] call BIS_fnc_param;
if !(_activ) exitWith{};


if !(hasInterface) exitWith{};

waitUntil {!isNull(findDisplay 46)};
waitUntil {!isNull player};


sleep 5;

//---HALO Module Setup-----------------------------------------------------

// Debug/Hints
_haloHints = _logic getVariable "vqi_module_halo_debughints";
missionNamespace setVariable ["VQI_HINTS_HALO", _haloHints];

// Temp Marker
_haloMarker = _logic getVariable "vqi_module_halo_tempmarker";
missionNamespace setVariable ["VQI_HALO_MKPLANE", _haloMarker];

// MAP/GPS Allowed
_haloHideNav = _logic getVariable "vqi_module_halo_hidenav";
missionNamespace setVariable ["VQI_HALO_HIDENAV", _haloHideNav];

// JB1 Keypressed - Set-Up Altimeter
_haloJB1	= _logic getVariable "vqi_module_halo_jb1watch";
missionNamespace setVariable ["VQI_HALO_JB1WATCH", _haloJB1];

// Audio
_haloTransAudio = _logic getVariable "vqi_module_halo_trans_audio";
missionNamespace setVariable ["VQI_HALO_T_AUDIO", _haloTransAudio];

// Travel Time
_haloTravelTime = _logic getVariable "vqi_module_halo_plane_travel";
missionNamespace setVariable ["VQI_HALO_TravelTime", _haloTravelTime];
/*
/////////////////////////////////////////////////////////////
// Enemy ACK Systems
_haloACK = _logic getVariable "vqi_module_leap_ao_ack_sites";
missionNamespace setVariable ["VQI_LEAP_EnemyACK", _haloACK];

// Enemy ACK Num
_haloACKn = _logic getVariable "vqi_module_leap_ao_ack_num";
missionNamespace setVariable ["VQI_LEAP_ACK_NUM", _haloACKn];

// Enemy SAM Systems
_haloSAM = _logic getVariable "vqi_module_leap_ao_sam_sites";
missionNamespace setVariable ["VQI_LEAP_EnemySAM", _haloSAM];

// Enemy SAM Num
_haloSAMn = _logic getVariable "vqi_module_leap_ao_sam_num";
missionNamespace setVariable ["VQI_LEAP_SAM_NUM", _haloSAMn];

// Enemy RADAR Systems
_haloRAD = _logic getVariable "vqi_module_leap_ao_radar_sites";
missionNamespace setVariable ["VQI_LEAP_EnemyRAD", _haloRAD];

// Enemy RADAR Num
_haloRADn = _logic getVariable "vqi_module_leap_ao_radar_num";
missionNamespace setVariable ["VQI_LEAP_RAD_NUM", _haloRADn];

// Enemy RADAR Side
_haloRADs = _logic getVariable "vqi_module_leap_ao_radar_qrf";
missionNamespace setVariable ["VQI_LEAP_RAD_QRF", _haloRADs];
/////////////////////////////////////////////////////////////

// Enemy SAM Team
//_haloSAMT = _logic getVariable "vqi_module_halo_sam_team";
//missionNamespace setVariable ["VQI_HALO_EnemySAM_TEAM", _haloSAMT];

// Enemy SAM Team %
//_haloSAMTP = _logic getVariable "vqi_module_halo_sam_team_p";
//missionNamespace setVariable ["VQI_HALO_EnemySAM_TEAMp", _haloSAMTP];
*/




// Jump View Distance
_haloViewDist	= _logic getVariable "vqi_module_halo_viewdist";
missionNamespace setVariable ["VQI_HALO_ViewDist",_haloViewDist];

// Parachute Failure Rate
_parachuteFail = _logic getVariable "vqi_module_halo_chute_fail";
missionNamespace setVariable ["VQI_PARACHUTE_FAIL",_parachuteFail];

// ------------------------------------------------------------------
// Height
_HALOAircraftALT = _logic getVariable "vqi_module_halo_aircraft_alt";

//HALO Jump Aircraft
_HALOAircraft = _logic getVariable "vqi_module_halo_aircraft";

if (isServer) then {
	// MC-130J Commando II
	if (_HALOAircraft == 1) then { 
		VQI_HALO_MC130 = "USAF_MC130" createVehicle (position _logic);
		VQI_HALO_MC130 setDir (getDir _logic);
		if (_HALOAircraftALT == 2) then {VQI_HALO_MC130 setPosASL [position VQI_HALO_MC130 select 0, position VQI_HALO_MC130 select 1, 18.3]; }; 	// Nimitz 18.3m Deck
	};

	// XC-130 Nightmare
	if (_HALOAircraft == 2) then { 
		VQI_HALO_XC130 = "VQI_C130_NIGHTMARE" createVehicle (position _logic);
		VQI_HALO_XC130 setDir (getDir _logic);
		if (_HALOAircraftALT == 2) then {VQI_HALO_XC130 setPosASL [position VQI_HALO_XC130 select 0, position VQI_HALO_XC130 select 1, 18.3]; }; // Nimitz 18.3m Deck
	};

	// C-17 Globemaster III
	if (_HALOAircraft == 3) then { 
		VQI_HALO_C17 = "USAF_C17" createVehicle (position _logic);
		VQI_HALO_C17 setDir (getDir _logic);
	};

	// XHR-1:Vampyre
	if (_HALOAircraft == 4) then { 
		VQI_HALO_XHR1 = "VQI_XHR1_Vampyre" createVehicle (position _logic);
		VQI_HALO_XHR1 setDir (getDir _logic);
		if (_HALOAircraftALT == 2) then {VQI_HALO_XHR1 setPosASL [position VQI_HALO_XHR1 select 0, position VQI_HALO_XHR1 select 1, 18.3]; }; // Nimitz 18.3m Deck
	};
};
// -----------------------------------------------------------------------


// Flight Path
_HALOFlightPath = _logic getVariable "vqi_module_halo_flightpath_mkrs";
missionNamespace setVariable ["VQI_HALO_FLIGHTPATH_MKR", _HALOFLightPath];

// Flight Path
_HALOFFOW = _logic getVariable "vqi_module_halo_flight_fow";
missionNamespace setVariable ["VQI_HALO_FFOW", _HALOFFOW];

// Flight Path
_PARAFFOW = _logic getVariable "vqi_module_para_flight_fow";
missionNamespace setVariable ["VQI_PARA_FFOW", _PARAFFOW];
	
// Add Gen Crate
_HALOAircraftCgen	= _logic getVariable "vqi_module_halo_aircraft_crate_gen";
missionNamespace setVariable ["VQI_XTRACRATE_GEN", _HALOAircraftCgen];

// Add VA Crate
_HALOAircraftCva = _logic getVariable "vqi_module_halo_aircraft_crate_va";
missionNamespace setVariable ["VQI_XTRACRATE_VA", _HALOAircraftCva];

// Add AI Support
_HALOAI = _logic getVariable "vqi_module_halo_ai";
missionNamespace setVariable ["VQI_HALO_AI", _HALOAI];

// Delete PARA
_HALOAircraftDEL = _logic getVariable "vqi_module_halo_aircraft_delete";
missionNamespace setVariable ["VQI_AIRCRAFT_DEL", _HALOAircraftDEL];
sleep 1;




//--------------------------------------------------------
// Msg ON
_msgOn = _logic getVariable "vqi_module_leap_msg_on";
missionNamespace setVariable ["VQI_LEAP_MSG_ON", _msgOn];

// Msg Time
_msgT = _logic getVariable "vqi_module_leap_msg_timed";
missionNamespace setVariable ["VQI_LEAP_MSG_TIME", _msgT];

// Msg 1
_msg1 = _logic getVariable "vqi_module_leap_msg_1";
missionNamespace setVariable ["VQI_LEAP_MSG_1", _msg1];

// Msg 2
_msg2 = _logic getVariable "vqi_module_leap_msg_2";
missionNamespace setVariable ["VQI_LEAP_MSG_2", _msg2];

// Msg 3
_msg3 = _logic getVariable "vqi_module_leap_msg_3";
missionNamespace setVariable ["VQI_LEAP_MSG_3", _msg3];

// Msg X
_msgX = _logic getVariable "vqi_module_leap_msg_x";
missionNamespace setVariable ["VQI_LEAP_MSG_X", _msgX];

// Msg Y
_msgY = _logic getVariable "vqi_module_leap_msg_y";
missionNamespace setVariable ["VQI_LEAP_MSG_Y", _msgY];
//---------------------------------------------------------------





// Bury Chute
_bChute = _logic getVariable "vqi_module_leap_burychute";
missionNamespace setVariable ["VQI_LEAP_BURYCHUTE", _bChute];



// lose gear
_damOpt = _logic getVariable "vqi_module_leap_damage_opt";
missionNamespace setVariable ["VQI_LEAP_DAMAGE_OPT", _damOpt];

_damLit = _logic getVariable "vqi_module_leap_damage_lit";
missionNamespace setVariable ["VQI_LEAP_DAMAGE_LIT", _damLit];

_damSup = _logic getVariable "vqi_module_leap_damage_sup";
missionNamespace setVariable ["VQI_LEAP_DAMAGE_SUP", _damSup];

_damBip = _logic getVariable "vqi_module_leap_damage_bip";
missionNamespace setVariable ["VQI_LEAP_DAMAGE_BIP", _damBip];








// required jump gear
_rqdHeadgear_P = _logic getVariable "vqi_module_leap_rqd_headgear_p";
missionNamespace setVariable ["VQI_LEAP_RQD_HEADGEAR_P", _rqdHeadgear_P];
VQI_LEAP_RQD_HEADGEAR_P = VQI_LEAP_RQD_HEADGEAR_P splitString ", ";

_rqdFacewear_P = _logic getVariable "vqi_module_leap_rqd_facewear_p";
missionNamespace setVariable ["VQI_LEAP_RQD_FACEWEAR_P", _rqdFacewear_P];
VQI_LEAP_RQD_FACEWEAR_P = VQI_LEAP_RQD_FACEWEAR_P splitString ", ";

_rqdMiscgear_P = _logic getVariable "vqi_module_leap_rqd_miscgear_p";
missionNamespace setVariable ["VQI_LEAP_RQD_MISCGEAR_P", _rqdMiscgear_P];
VQI_LEAP_RQD_MISCGEAR_P = VQI_LEAP_RQD_MISCGEAR_P splitString ", ";


// required halo gear
_rqdHeadgear_H = _logic getVariable "vqi_module_leap_rqd_headgear_h";
missionNamespace setVariable ["VQI_LEAP_RQD_HEADGEAR_H", _rqdHeadgear_H];
VQI_LEAP_RQD_HEADGEAR_H = VQI_LEAP_RQD_HEADGEAR_H splitString ", ";

_rqdFacewear_H = _logic getVariable "vqi_module_leap_rqd_facewear_h";
missionNamespace setVariable ["VQI_LEAP_RQD_FACEWEAR_H", _rqdFacewear_H];
VQI_LEAP_RQD_FACEWEAR_H = VQI_LEAP_RQD_FACEWEAR_H splitString ", ";

_rqdO2system_H = _logic getVariable "vqi_module_leap_rqd_o2system_h";
missionNamespace setVariable ["VQI_LEAP_RQD_O2SYSTEM_H", _rqdO2system_H];
VQI_LEAP_RQD_O2SYSTEM_H = VQI_LEAP_RQD_O2SYSTEM_H splitString ", ";

_rqdJumpsuit_H = _logic getVariable "vqi_module_leap_rqd_jumpsuit_h";
missionNamespace setVariable ["VQI_LEAP_RQD_JUMPSUIT_H", _rqdJumpsuit_H];
VQI_LEAP_RQD_JUMPSUIT_H = VQI_LEAP_RQD_JUMPSUIT_H splitString ", ";

_rqdMiscgear_H = _logic getVariable "vqi_module_leap_rqd_miscgear_h";
missionNamespace setVariable ["VQI_LEAP_RQD_MISCGEAR_H", _rqdMiscgear_H];
VQI_LEAP_RQD_MISCGEAR_H = VQI_LEAP_RQD_MISCGEAR_H splitString ", ";










sleep 3;
[] spawn VQI_fnc_HALOinit;
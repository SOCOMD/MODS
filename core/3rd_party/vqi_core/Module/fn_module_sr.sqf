//
//


private ["_logic","_units","_activated"];

// Argument 0 is module logic
_logic = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

// Argument 1 is list of affected units (affected by value selected in the 'class Units' argument))
_units = [_this, 1, [], [[]]] call BIS_fnc_param;

// True when the module was activated, false when it's deactivated (i.e., synced triggers are no longer active)
_activated = [_this, 2, true, [true]] call BIS_fnc_param;




// ----------CORE Module Setup Player Options ----------------------


// HQ
_HQ = _logic getVariable "vqi_module_core_sr_hq";
missionNamespace setVariable ["SR_HQ_NAME", _HQ];




// CH1 - Type
_CH1 = _logic getVariable "vqi_module_core_sr_ch1";
missionNamespace setVariable ["SR_FRQ_CH1", _CH1];
// CH1 - Callsign
_CH1a = _logic getVariable "vqi_module_core_sr_ch1_callsign";
missionNamespace setVariable ["SR_GID_CH1", _CH1a];
// CH1 - Range
_CH1b = _logic getVariable "vqi_module_core_sr_ch1_range";
missionNamespace setVariable ["SR_RNG_CH1", _CH1b];
// CH1 - Marker
_CH1c = _logic getVariable "vqi_module_core_sr_ch1_marker";
missionNamespace setVariable ["SR_MKR_CH1", _CH1c];
// CH1 - Limit
_CH1d = _logic getVariable "vqi_module_core_sr_ch1_limit";
missionNamespace setVariable ["SR_NUM_CH1", _CH1d];


// CH2 - Type
_CH2 = _logic getVariable "vqi_module_core_sr_ch2";
missionNamespace setVariable ["SR_FRQ_CH2", _CH2];
// CH2 - Callsign
_CH2a = _logic getVariable "vqi_module_core_sr_ch2_callsign";
missionNamespace setVariable ["SR_GID_CH2", _CH2a];
// CH2 - Range
_CH2b = _logic getVariable "vqi_module_core_sr_ch2_range";
missionNamespace setVariable ["SR_RNG_CH2", _CH2b];
// CH2 - Marker
_CH2c = _logic getVariable "vqi_module_core_sr_ch2_marker";
missionNamespace setVariable ["SR_MKR_CH2", _CH2c];
// CH2 - Limit
_CH2d = _logic getVariable "vqi_module_core_sr_ch2_limit";
missionNamespace setVariable ["SR_NUM_CH2", _CH2d];


// CH3 - Type
_CH3 = _logic getVariable "vqi_module_core_sr_ch3";
missionNamespace setVariable ["SR_FRQ_CH3", _CH3];
// CH3 - Callsign
_CH3a = _logic getVariable "vqi_module_core_sr_ch3_callsign";
missionNamespace setVariable ["SR_GID_CH3", _CH3a];
// CH3 - Range
_CH3b = _logic getVariable "vqi_module_core_sr_ch3_range";
missionNamespace setVariable ["SR_RNG_CH3", _CH3b];
// CH3 - Marker
_CH3c = _logic getVariable "vqi_module_core_sr_ch3_marker";
missionNamespace setVariable ["SR_MKR_CH3", _CH3c];
// CH3 - Limit
_CH3d = _logic getVariable "vqi_module_core_sr_ch3_limit";
missionNamespace setVariable ["SR_NUM_CH3", _CH3d];


// CH4 - Type
_CH4 = _logic getVariable "vqi_module_core_sr_ch4";
missionNamespace setVariable ["SR_FRQ_CH4", _CH4];
// CH4 - Callsign
_CH4a = _logic getVariable "vqi_module_core_sr_ch4_callsign";
missionNamespace setVariable ["SR_GID_CH4", _CH4a];
// CH4 - Range
_CH4b = _logic getVariable "vqi_module_core_sr_ch4_range";
missionNamespace setVariable ["SR_RNG_CH4", _CH4b];
// CH4 - Marker
_CH4c = _logic getVariable "vqi_module_core_sr_ch4_marker";
missionNamespace setVariable ["SR_MKR_CH4", _CH4c];
// CH4 - Limit
_CH4d = _logic getVariable "vqi_module_core_sr_ch4_limit";
missionNamespace setVariable ["SR_NUM_CH4", _CH4d];


// CH5 - Type
_CH5 = _logic getVariable "vqi_module_core_sr_ch5";
missionNamespace setVariable ["SR_FRQ_CH5", _CH5];
// CH5 - Callsign
_CH5a = _logic getVariable "vqi_module_core_sr_ch5_callsign";
missionNamespace setVariable ["SR_GID_CH5", _CH5a];
// CH5 - Range
_CH5b = _logic getVariable "vqi_module_core_sr_ch5_range";
missionNamespace setVariable ["SR_RNG_CH5", _CH5b];
// CH5 - Marker
_CH5c = _logic getVariable "vqi_module_core_sr_ch5_marker";
missionNamespace setVariable ["SR_MKR_CH5", _CH5c];
// CH5 - Limit
_CH5d = _logic getVariable "vqi_module_core_sr_ch5_limit";
missionNamespace setVariable ["SR_NUM_CH5", _CH5d];


// CH6 - Type
_CH6 = _logic getVariable "vqi_module_core_sr_ch6";
missionNamespace setVariable ["SR_FRQ_CH6", _CH6];
// CH6 - Callsign
_CH6a = _logic getVariable "vqi_module_core_sr_ch6_callsign";
missionNamespace setVariable ["SR_GID_CH6", _CH6a];
// CH6 - Range
_CH6b = _logic getVariable "vqi_module_core_sr_ch6_range";
missionNamespace setVariable ["SR_RNG_CH6", _CH6b];
// CH6 - Marker
_CH6c = _logic getVariable "vqi_module_core_sr_ch6_marker";
missionNamespace setVariable ["SR_MKR_CH6", _CH6c];
// CH6 - Limit
_CH6d = _logic getVariable "vqi_module_core_sr_ch6_limit";
missionNamespace setVariable ["SR_NUM_CH6", _CH6d];


// CH7 - Type
_CH7 = _logic getVariable "vqi_module_core_sr_ch7";
missionNamespace setVariable ["SR_FRQ_CH7", _CH7];
// CH7 - Callsign
_CH7a = _logic getVariable "vqi_module_core_sr_ch7_callsign";
missionNamespace setVariable ["SR_GID_CH7", _CH7a];
// CH7 - Range
_CH7b = _logic getVariable "vqi_module_core_sr_ch7_range";
missionNamespace setVariable ["SR_RNG_CH7", _CH7b];
// CH7 - Marker
_CH7c = _logic getVariable "vqi_module_core_sr_ch7_marker";
missionNamespace setVariable ["SR_MKR_CH7", _CH7c];
// CH7 - Limit
_CH7d = _logic getVariable "vqi_module_core_sr_ch7_limit";
missionNamespace setVariable ["SR_NUM_CH7", _CH7d];


// CH8 - Type
_CH8 = _logic getVariable "vqi_module_core_sr_ch8";
missionNamespace setVariable ["SR_FRQ_CH8", _CH8];
// CH8 - Callsign
_CH8a = _logic getVariable "vqi_module_core_sr_ch8_callsign";
missionNamespace setVariable ["SR_GID_CH8", _CH8a];
// CH8 - Range
_CH8b = _logic getVariable "vqi_module_core_sr_ch8_range";
missionNamespace setVariable ["SR_RNG_CH8", _CH8b];
// CH8 - Marker
_CH8c = _logic getVariable "vqi_module_core_sr_ch8_marker";
missionNamespace setVariable ["SR_MKR_CH8", _CH8c];
// CH8 - Limit
_CH8d = _logic getVariable "vqi_module_core_sr_ch8_limit";
missionNamespace setVariable ["SR_NUM_CH8", _CH8d];


// CH9 - Type
_CH9 = _logic getVariable "vqi_module_core_sr_ch9";
missionNamespace setVariable ["SR_FRQ_CH9", _CH9];
// CH9 - Callsign
_CH9a = _logic getVariable "vqi_module_core_sr_ch9_callsign";
missionNamespace setVariable ["SR_GID_CH9", _CH9a];
// CH9 - Range
_CH9b = _logic getVariable "vqi_module_core_sr_ch9_range";
missionNamespace setVariable ["SR_RNG_CH9", _CH9b];
// CH9 - Marker
_CH9c = _logic getVariable "vqi_module_core_sr_ch9_marker";
missionNamespace setVariable ["SR_MKR_CH9", _CH9c];
// CH9 - Limit
_CH9d = _logic getVariable "vqi_module_core_sr_ch9_limit";
missionNamespace setVariable ["SR_NUM_CH9", _CH9d];


// CH0 - Type
_CH0 = _logic getVariable "vqi_module_core_sr_ch0";
missionNamespace setVariable ["SR_FRQ_CH0", _CH0];
// CH0 - Callsign
_CH0a = _logic getVariable "vqi_module_core_sr_ch0_callsign";
missionNamespace setVariable ["SR_GID_CH0", _CH0a];
// CH0 - Range
_CH0b = _logic getVariable "vqi_module_core_sr_ch0_range";
missionNamespace setVariable ["SR_RNG_CH0", _CH0b];
// CH0 - Marker
_CH0c = _logic getVariable "vqi_module_core_sr_ch0_marker";
missionNamespace setVariable ["SR_MKR_CH0", _CH0c];
// CH0 - Limit
_CH0d = _logic getVariable "vqi_module_core_sr_ch0_limit";
missionNamespace setVariable ["SR_NUM_CH0", _CH0d];














// Default Variables - Set ////////////////////////////

// Call Count Set
SR_CALL_CH1 = 1;	// default variable - separate file?
SR_CALL_CH2 = 1;	// default variable - separate file?
SR_CALL_CH3 = 1;	// default variable - separate file?
SR_CALL_CH4 = 1;	// default variable - separate file?
SR_CALL_CH5 = 1;	// default variable - separate file?
SR_CALL_CH6 = 1;	// default variable - separate file?
SR_CALL_CH7 = 1;	// default variable - separate file?
SR_CALL_CH8 = 1;	// default variable - separate file?
SR_CALL_CH9 = 1;	// default variable - separate file?
SR_CALL_CH0 = 1;	// default variable - separate file?
sleep 1;



// GPS Default
SR_GPS_BTN_1 = 0;
SR_GPS_BTN_2 = 0;
SR_GPS_BTN_3 = 0;
SR_GPS_BTN_4 = 0;
SR_GPS_BTN_5 = 0;
SR_GPS_BTN_6 = 0;
 
SR_GPS_BTN_7 = 5;			// Keypad


// Button Defaults
SR_CH_TRANSMIT = 0;		// Ch.1
SR_NUM_BTN_R = 0;			// Num 0 (ie arty rounds)
sleep 1;



// Set HQ Battle Net
_radio = createGroup west;
_pos00 = [0,0,0];
SR_NET_HQ1 = _radio createUnit ["LOGIC",_pos00,[],0,""];

SR_NET_HQ1 setGroupID [SR_HQ_NAME];	// HQ Set







//sleep 1;
//[] spawn VQI_fnc_COREinit;
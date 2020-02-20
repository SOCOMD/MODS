// Check FRQ & Module Setting
//


_gpsLOC = _this select 0;
SR_SEND = 1; // SENDING





// Channel 1
if (SR_CH_TRANSMIT == 1) then {

	// Frequency
	if (SR_FRQ_CH1 == 0) exitWith { hint "CHANNEL NOT SET"; };	 							// OFF
	if (SR_FRQ_CH1 == 1) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_pickup.sqf"; };					// Heli Support
	if (SR_FRQ_CH1 == 2) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_arty.sqf"; };			// Arty
	if (SR_FRQ_CH1 == 3) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_jetstrike.sqf"; };		// Jet Strike
	if (SR_FRQ_CH1 == 4) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_para.sqf"; };			// QRF NATO Para
	if (SR_FRQ_CH1 == 5) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_apc.sqf"; };			// APC
	if (SR_FRQ_CH1 == 6) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_blackfoot.sqf"; };		// CAS Blackfoot	
	if (SR_FRQ_CH1 == 7) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_satellite.sqf"; };		// Satellite
	if (SR_FRQ_CH1 == 8) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_uav.sqf"; };			// UAV
	if (SR_FRQ_CH1 == 9) exitWith { [_gpsLOC, player] execVM "Gypsy\ch1.sqf"; };			// USER CUSTOM - Ch.1
};



// Channel 2
if (SR_CH_TRANSMIT == 2) then {

	// Frequency
	if (SR_FRQ_CH2 == 0) exitWith { hint "CHANNEL NOT SET"; };	 							// OFF
	if (SR_FRQ_CH2 == 1) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_pickup.sqf"; };					// Heli Support
	if (SR_FRQ_CH2 == 2) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_arty.sqf"; };			// Arty
	if (SR_FRQ_CH2 == 3) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_jetstrike.sqf"; };		// Jet Strike
	if (SR_FRQ_CH2 == 4) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_para.sqf"; };			// QRF NATO Para
	if (SR_FRQ_CH2 == 5) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_apc.sqf"; };			// APC
	if (SR_FRQ_CH2 == 6) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_blackfoot.sqf"; };		// CAS Blackfoot
	if (SR_FRQ_CH2 == 7) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_satellite.sqf"; };		// Satellite
	if (SR_FRQ_CH2 == 8) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_uav.sqf"; };			// UAV
	if (SR_FRQ_CH2 == 9) exitWith { [_gpsLOC, player] execVM "Gypsy\ch2.sqf"; };			// USER CUSTOM - Ch.2
};



// Channel 3
if (SR_CH_TRANSMIT == 3) then {

	// Frequency
	if (SR_FRQ_CH3 == 0) exitWith { hint "CHANNEL NOT SET"; };	 							// OFF
	if (SR_FRQ_CH3 == 1) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_pickup.sqf"; };					// Heli Support
	if (SR_FRQ_CH3 == 2) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_arty.sqf"; };			// Arty
	if (SR_FRQ_CH3 == 3) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_jetstrike.sqf"; };		// Jet Strike
	if (SR_FRQ_CH3 == 4) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_para.sqf"; };			// QRF NATO Para
	if (SR_FRQ_CH3 == 5) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_apc.sqf"; };			// APC
	if (SR_FRQ_CH3 == 6) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_blackfoot.sqf"; };		// CAS Blackfoot
	if (SR_FRQ_CH3 == 7) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_satellite.sqf"; };		// Satellite
	if (SR_FRQ_CH3 == 8) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_uav.sqf"; };			// UAV	
	if (SR_FRQ_CH3 == 9) exitWith { [_gpsLOC, player] execVM "Gypsy\ch3.sqf"; };			// USER CUSTOM - Ch.3
};



// Channel 4
if (SR_CH_TRANSMIT == 4) then {

	// Frequency
	if (SR_FRQ_CH4 == 0) exitWith { hint "CHANNEL NOT SET"; };	 							// OFF
	if (SR_FRQ_CH4 == 1) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_pickup.sqf"; };					// Heli Support
	if (SR_FRQ_CH4 == 2) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_arty.sqf"; };			// Arty
	if (SR_FRQ_CH4 == 3) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_jetstrike.sqf"; };		// Jet Strike
	if (SR_FRQ_CH4 == 4) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_para.sqf"; };			// QRF NATO Para
	if (SR_FRQ_CH4 == 5) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_apc.sqf"; };			// APC
	if (SR_FRQ_CH4 == 6) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_blackfoot.sqf"; };		// CAS Blackfoot	
	if (SR_FRQ_CH4 == 7) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_satellite.sqf"; };		// Satellite
	if (SR_FRQ_CH4 == 8) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_uav.sqf"; };			// UAV	
	if (SR_FRQ_CH4 == 9) exitWith { [_gpsLOC, player] execVM "Gypsy\ch4.sqf"; };			// USER CUSTOM - Ch.4
};



// Channel 5
if (SR_CH_TRANSMIT == 5) then {

	// Frequency
	if (SR_FRQ_CH5 == 0) exitWith { hint "CHANNEL NOT SET"; };	 							// OFF
	if (SR_FRQ_CH5 == 1) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_pickup.sqf"; };					// Heli Support
	if (SR_FRQ_CH5 == 2) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_arty.sqf"; };			// Arty
	if (SR_FRQ_CH5 == 3) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_jetstrike.sqf"; };		// Jet Strike
	if (SR_FRQ_CH5 == 4) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_para.sqf"; };			// QRF NATO Para
	if (SR_FRQ_CH5 == 5) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_apc.sqf"; };			// APC
	if (SR_FRQ_CH5 == 6) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_blackfoot.sqf"; };		// CAS Blackfoot
	if (SR_FRQ_CH5 == 7) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_satellite.sqf"; };		// Satellite
	if (SR_FRQ_CH5 == 8) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_uav.sqf"; };			// UAV	
	if (SR_FRQ_CH5 == 9) exitWith { [_gpsLOC, player] execVM "Gypsy\ch5.sqf"; };			// USER CUSTOM - Ch.5
};




// Channel 6
if (SR_CH_TRANSMIT == 6) then {

	// Frequency
	if (SR_FRQ_CH6 == 0) exitWith { hint "CHANNEL NOT SET"; };	 							// OFF
	if (SR_FRQ_CH6 == 1) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_pickup.sqf"; };					// Heli Support
	if (SR_FRQ_CH6 == 2) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_arty.sqf"; };			// Arty
	if (SR_FRQ_CH6 == 3) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_jetstrike.sqf"; };		// Jet Strike
	if (SR_FRQ_CH6 == 4) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_para.sqf"; };			// QRF NATO Para
	if (SR_FRQ_CH6 == 5) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_apc.sqf"; };			// APC
	if (SR_FRQ_CH6 == 6) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_blackfoot.sqf"; };		// CAS Blackfoot	
	if (SR_FRQ_CH6 == 7) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_satellite.sqf"; };		// Satellite
	if (SR_FRQ_CH6 == 8) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_uav.sqf"; };			// UAV	
	if (SR_FRQ_CH6 == 9) exitWith { [_gpsLOC, player] execVM "Gypsy\ch6.sqf"; };			// USER CUSTOM - Ch.6
};



// Channel 7
if (SR_CH_TRANSMIT == 7) then {

	// Frequency
	if (SR_FRQ_CH7 == 0) exitWith { hint "CHANNEL NOT SET"; };	 							// OFF
	if (SR_FRQ_CH7 == 1) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_pickup.sqf"; };					// Heli Support
	if (SR_FRQ_CH7 == 2) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_arty.sqf"; };			// Arty
	if (SR_FRQ_CH7 == 3) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_jetstrike.sqf"; };		// Jet Strike
	if (SR_FRQ_CH7 == 4) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_para.sqf"; };			// QRF NATO Para
	if (SR_FRQ_CH7 == 5) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_apc.sqf"; };			// APC
	if (SR_FRQ_CH7 == 6) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_blackfoot.sqf"; };		// CAS Blackfoot
	if (SR_FRQ_CH7 == 7) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_satellite.sqf"; };		// Satellite
	if (SR_FRQ_CH7 == 8) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_uav.sqf"; };			// UAV	
	if (SR_FRQ_CH7 == 9) exitWith { [_gpsLOC, player] execVM "Gypsy\ch7.sqf"; };			// USER CUSTOM - Ch.7
};



// Channel 8
if (SR_CH_TRANSMIT == 8) then {

	// Frequency
	if (SR_FRQ_CH8 == 0) exitWith { hint "CHANNEL NOT SET"; };	 							// OFF
	if (SR_FRQ_CH8 == 1) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_pickup.sqf"; };					// Heli Support
	if (SR_FRQ_CH8 == 2) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_arty.sqf"; };			// Arty
	if (SR_FRQ_CH8 == 3) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_jetstrike.sqf"; };		// Jet Strike
	if (SR_FRQ_CH8 == 4) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_para.sqf"; };			// QRF NATO Para
	if (SR_FRQ_CH8 == 5) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_apc.sqf"; };			// APC
	if (SR_FRQ_CH8 == 6) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_blackfoot.sqf"; };		// CAS Blackfoot
	if (SR_FRQ_CH8 == 7) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_satellite.sqf"; };		// Satellite
	if (SR_FRQ_CH8 == 8) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_uav.sqf"; };			// UAV	
	if (SR_FRQ_CH8 == 9) exitWith { [_gpsLOC, player] execVM "Gypsy\ch8.sqf"; };			// USER CUSTOM - Ch.8
};



// Channel 9
if (SR_CH_TRANSMIT == 9) then {

	// Frequency
	if (SR_FRQ_CH9 == 0) exitWith { hint "CHANNEL NOT SET"; };	 							// OFF
	if (SR_FRQ_CH9 == 1) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_pickup.sqf"; };					// Heli Support
	if (SR_FRQ_CH9 == 2) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_arty.sqf"; };			// Arty
	if (SR_FRQ_CH9 == 3) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_jetstrike.sqf"; };		// Jet Strike
	if (SR_FRQ_CH9 == 4) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_para.sqf"; };			// QRF NATO Para
	if (SR_FRQ_CH9 == 5) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_apc.sqf"; };			// APC
	if (SR_FRQ_CH9 == 6) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_blackfoot.sqf"; };		// CAS Blackfoot
	if (SR_FRQ_CH9 == 7) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_satellite.sqf"; };		// Satellite
	if (SR_FRQ_CH9 == 8) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_uav.sqf"; };			// UAV	
	if (SR_FRQ_CH9 == 9) exitWith { [_gpsLOC, player] execVM "Gypsy\ch9.sqf"; };			// USER CUSTOM - Ch.9
};



// Channel 0
if (SR_CH_TRANSMIT == 0) then {

	// Frequency
	if (SR_FRQ_CH0 == 0) exitWith { hint "CHANNEL NOT SET"; };	 							// OFF
	if (SR_FRQ_CH0 == 1) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\InfilExfil\vqi_core_transport_heli_pickup.sqf"; };					// Heli Support
	if (SR_FRQ_CH0 == 2) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_arty.sqf"; };			// Arty
	if (SR_FRQ_CH0 == 3) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_jetstrike.sqf"; };		// Jet Strike
	if (SR_FRQ_CH0 == 4) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_para.sqf"; };			// QRF NATO Para
	if (SR_FRQ_CH0 == 5) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_apc.sqf"; };			// APC
	if (SR_FRQ_CH0 == 6) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_blackfoot.sqf"; };		// CAS Blackfoot
	if (SR_FRQ_CH0 == 7) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_satellite.sqf"; };		// Satellite
	if (SR_FRQ_CH0 == 8) exitWith { [_gpsLOC, player] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call_uav.sqf"; };			// UAV	
	if (SR_FRQ_CH0 == 9) exitWith { [_gpsLOC, player] execVM "Gypsy\ch0.sqf"; };			// USER CUSTOM - Ch.0
};





sleep 10;		// DONE
SR_SEND = 0;


///////////////////
/* NOTES:



*/
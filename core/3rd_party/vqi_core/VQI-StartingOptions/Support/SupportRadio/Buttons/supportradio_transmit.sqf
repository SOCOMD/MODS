// Convert to GPS Cordinates
//



_radioGPS = [
SR_GPS_BTN_1,
SR_GPS_BTN_2,
SR_GPS_BTN_3,
SR_GPS_BTN_4,
SR_GPS_BTN_5,
SR_GPS_BTN_6];

_x1 = _radioGPS select 0;
_x2 = _radioGPS select 1;
_x3 = _radioGPS select 2;
_y1 = _radioGPS select 3;
_y2 = _radioGPS select 4;
_y3 = _radioGPS select 5;
//hint format ["%1%2%3%4%5%6",_x1,_x2,_x3,_y1,_y2,_y3];
//sleep 1;

_locGPSx = format ["%1%2%3",_x1,_x2,_x3];	// x				// upgrade to 8-digit grid? 
_locGPSy = format ["%1%2%3",_y1,_y2,_y3];	// y				// upgrade to 8-digit grid? 
_locGPSz = 0;								// z
//hint format ["%1%2 GPS",_locGPSx,_locGPSy];
//sleep 1;

 _x4 = 50;
 _y4 = 50;
 
 // small adjust - keypad ref
if (SR_GPS_BTN_7 == 1) then { _x4 = 0;  	_y4 = 0; };		// KeyPad 1
if (SR_GPS_BTN_7 == 2) then { _x4 = 50;  	_y4 = 0; };		// KeyPad 2
if (SR_GPS_BTN_7 == 3) then { _x4 = 100; 	_y4 = 0; };		// KeyPad 3
if (SR_GPS_BTN_7 == 4) then { _x4 = 0;  	_y4 = 50; };		// KeyPad 4
if (SR_GPS_BTN_7 == 5) then { _x4 = 50;  	_y4 = 50; };		// KeyPad 5
if (SR_GPS_BTN_7 == 6) then { _x4 = 100;  	_y4 = 50; };		// KeyPad 6
if (SR_GPS_BTN_7 == 7) then { _x4 = 0;  	_y4 = 100; };	// KeyPad 7	
if (SR_GPS_BTN_7 == 8) then { _x4 = 50;  	_y4 = 100; };	// KeyPad 8
if (SR_GPS_BTN_7 == 9) then { _x4 = 100;  	_y4 = 100; };	// KeyPad 9


// convert to gps location
_gpsLOC = [((parseNumber _locGPSx) * 100) + _x4, ((parseNumber _locGPSy) * 100) + _y4, _locGPSz];
//hint format ["%1",_gpsLOC];
//sleep 1;






playSound "SupportRadio_Transmit";
/*
_rRadio = 1;
_rRadio = selectRandom [1,2,3];
if (_rRadio == 1) then { playSound "SupportRadio_Transmit"; };
if (_rRadio == 2) then { playSound "MW4"; };
if (_rRadio == 3) then { playSound "MW8"; };
*/
// Send GPS/Call Data - Transmit
if (SR_SEND == 0) then { [_gpsLOC] execVM "vqi_core\VQI-StartingOptions\Support\SupportRadio\vqi_core_supportradio_call.sqf"; };
if (SR_SEND == 1) then { SR_SEND = 2; };





////////////////////////
/* NOTES:


*/
// Display Readout for the GYPSY RADIO
//



playSound "Orange_Access_FM";



disableSerialization; 
999 cutRsc ["VQI_SUPPORT_RADIO_GYPSY", "PLAIN"];
SR_SEND = 0;	// default/reset

_send = "eTX...";
_spam = "ERROR!";


while {SupportRadiodialog == 1} do {

	_display = uiNamespace getVariable "VQI_SUPPORT_RADIO_GYPSY"; 
	
	if (SR_SEND == 1) then {	(_display displayCtrl 1000) ctrlSetText format["%1",_send]; };
	if (SR_SEND == 2) then {	(_display displayCtrl 1000) ctrlSetText format["%1",_spam]; };
	if (SR_SEND == 0) then {	(_display displayCtrl 1000) ctrlSetText format["%1%2%3%4%5%6",SR_GPS_BTN_1,SR_GPS_BTN_2,SR_GPS_BTN_3,SR_GPS_BTN_4,SR_GPS_BTN_5,SR_GPS_BTN_6]; };
	(_display displayCtrl 1001) ctrlSetText format["CH:%1",SR_CH_TRANSMIT];
	(_display displayCtrl 1002) ctrlSetText format["KP%1",SR_GPS_BTN_7];	// keypad
	(_display displayCtrl 1003) ctrlSetText format["R=%1",SR_NUM_BTN_R];	// number/rounds
};








//////////////////////////
/* NOTES:


*/
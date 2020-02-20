//
//
if (VQI_CORE_HINTS == 1) then { hint "startefx_starttext.sqf"; };
sleep 1;


private ["_txtTime","_txtFade","_startTextC","_startTextD","_custom1","_custom","_custom3","_valueRL","_valueDU","_customT"];


_txtTime = 15;
_txtFade = 5;

//_custom1 = "SECTION 20, BRITISH INTELLIGENCE";
//_custom2 = "OPS CENTER, WAREHOUSE #213";
//_custom3 = "MIDDLE EAST - ISTANBUL, TURKEY";
_custom1 = VQI_CORE_MSG_1;
_custom2 = VQI_CORE_MSG_2;
_custom3 = VQI_CORE_MSG_3;
_valueRL = VQI_CORE_MSG_X;
_valueDU = VQI_CORE_MSG_Y;
_customT = VQI_CORE_MSG_TIME;

// Custom Info Lines
_startTextC = format["<t size='0.6' font='PuristaMedium' align='right'>%1 <br/> %2 <br/> %3",_custom1,_custom2,_custom3];
sleep 1;




sleep VQI_CORE_MSG_TIME;

// _variable, +R/L, +D/U, Timed, Fadeout Time, ?, ?
[_startTextC, _valueRL, _valueDU, _txtTime, _txtFade, 0, 5] spawn BIS_fnc_dynamicText; // 0.6   1.1
	







/////////////////////////
/* NOTES:



*/
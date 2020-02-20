//
//


private ["_sID","_rn1","_rn2","_sen","_dta","_lnk"];

_sID = round (random 9999);
_rn0 = round (random 7);
_rn1 = _rn0 + 2;
_sen = round (random 9);
_dta = round (random 999);
_lnk = round (random 5);
//_box = _this select 0;


hint format [
"RADAR Node : R5 Systems\n
DRAC-N-%1.R%2 \n
\n
Range: 1km - %2km \n
RAX Sensor: v%3 T  \n
Data-Link ID: #%4.%2 \n 
Systems Linked: %5
",_sID,_rn1,_sen,_dta,_lnk];


removeAllActions rBox;



/////////////////
/* NOTES:


*/
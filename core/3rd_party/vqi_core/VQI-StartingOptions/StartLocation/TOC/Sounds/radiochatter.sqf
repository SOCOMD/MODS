//
//
sleep 30;



private ["_rNum1","_rNum2","_rNum3","_rNum4"];


// Generation Kill
_rNum1 = [1,1] call BIS_fnc_randomInt;

switch (_rNum1) do
{
	case 1 : { VQI_Radio1 say3D "GenKill1"; };
	case 2 : { VQI_Radio1 say3D "GenKill2"; };
	case 3 : { VQI_Radio1 say3D "GenKill3"; };
};


sleep 20;


// Modern Warfare
for "_i" from 1 to 10 do {

	_rNum2 = [1,10] call BIS_fnc_randomInt;
	
	switch (_rNum2) do
	{
	   case 1 : { VQI_Radio2 say3D "MW1"; };
	   case 2 : { VQI_Radio2 say3D "MW2"; };
	   case 3 : { VQI_Radio2 say3D "MW3"; };
	   case 4 : { VQI_Radio2 say3D "MW4"; };
	   case 5 : { VQI_Radio2 say3D "MW5"; };
	   case 6 : { VQI_Radio2 say3D "MW6"; };
	   case 7 : { VQI_Radio2 say3D "MW7"; };
	   case 8 : { VQI_Radio2 say3D "MW8"; };
	   case 9 : { VQI_Radio2 say3D "MW9"; };
	   case 10: { VQI_Radio2 say3D "MW10"; };
	}; 
sleep 30 + (random 90);
};


sleep 120;


// Generation Kill
_rNum3 = [2,2] call BIS_fnc_randomInt;

switch (_rNum3) do
{
	case 1 : { VQI_Radio1 say3D "GenKill1"; };
	case 2 : { VQI_Radio1 say3D "GenKill2"; };
	case 3 : { VQI_Radio1 say3D "GenKill3"; };
};


sleep 20;


// Modern Warfare
for "_i" from 1 to 10 do {

	_rNum4 = [1,10] call BIS_fnc_randomInt;
	
	switch (_rNum4) do
	{
	   case 1 : { VQI_Radio2 say3D "MW1"; };
	   case 2 : { VQI_Radio2 say3D "MW2"; };
	   case 3 : { VQI_Radio2 say3D "MW3"; };
	   case 4 : { VQI_Radio2 say3D "MW4"; };
	   case 5 : { VQI_Radio2 say3D "MW5"; };
	   case 6 : { VQI_Radio2 say3D "MW6"; };
	   case 7 : { VQI_Radio2 say3D "MW7"; };
	   case 8 : { VQI_Radio2 say3D "MW8"; };
	   case 9 : { VQI_Radio2 say3D "MW9"; };
	   case 10: { VQI_Radio2 say3D "MW10"; };
	}; 
sleep 30 + (random 120);
};


sleep 120;


// Generation Kill
_rNum3 = [3,3] call BIS_fnc_randomInt;

switch (_rNum3) do
{
	case 1 : { VQI_Radio1 say3D "GenKill1"; };
	case 2 : { VQI_Radio1 say3D "GenKill2"; };
	case 3 : { VQI_Radio1 say3D "GenKill3"; };
};




///////////////////////
/* NOTES:



*/
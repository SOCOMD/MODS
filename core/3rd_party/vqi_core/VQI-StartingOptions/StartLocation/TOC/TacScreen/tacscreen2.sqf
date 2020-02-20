//
//



private ["_rNum"];




for "_i" from 1 to 5 do {

	_rNum = [1,5] call BIS_fnc_randomInt;

	switch (_rNum) do
	{
		case 1 : { TacScreen2 setObjectTextureGlobal [0, "S20TOC\TacScreen\images\ts_sat_carrier1.jpg"]; };
		case 2 : { TacScreen2 setObjectTextureGlobal [0, "S20TOC\TacScreen\images\ts_sat_harbor1.jpg"]; };
		case 3 : { TacScreen2 setObjectTextureGlobal [0, "S20TOC\TacScreen\images\ts_sat_striker1.jpg"]; };
		case 4 : { TacScreen2 setObjectTextureGlobal [0, "S20TOC\TacScreen\images\ts_sat_striker2.jpg"]; };
		case 5 : { TacScreen2 setObjectTextureGlobal [0, "S20TOC\TacScreen\images\ts_tac_china_ac1.jpg"]; };
	};
	
sleep 10 + (random 90);
};
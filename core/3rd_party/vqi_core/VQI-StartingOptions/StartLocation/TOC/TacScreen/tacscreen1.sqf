//
//



private ["_rNum"];




for "_i" from 1 to 5 do {

	_rNum = [1,5] call BIS_fnc_randomInt;

	switch (_rNum) do
	{
		case 1 : { TacScreen1 setObjectTextureGlobal [0, "S20TOC\TacScreen\images\ts_data_circle1.jpg"]; };
		case 2 : { TacScreen1 setObjectTextureGlobal [0, "S20TOC\TacScreen\images\ts_data_station1.jpg"]; };
		case 3 : { TacScreen1 setObjectTextureGlobal [0, "S20TOC\TacScreen\images\ts_sat_blue1.jpg"]; };
		case 4 : { TacScreen1 setObjectTextureGlobal [0, "S20TOC\TacScreen\images\ts_weather_euraisa1.jpg"]; };
		case 5 : { TacScreen1 setObjectTextureGlobal [0, "S20TOC\TacScreen\images\ts_weather_euraisa2.jpg"]; };
	};
	
sleep 20 + (random 60);
};
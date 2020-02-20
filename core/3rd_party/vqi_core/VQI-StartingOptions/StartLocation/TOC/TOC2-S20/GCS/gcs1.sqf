//
//



private ["_rNum1","_rNum2"];




for "_i" from 1 to 5 do {

	_rNum1 = [1,4] call BIS_fnc_randomInt;
	_rNum2 = [1,4] call BIS_fnc_randomInt;

	switch (_rNum1) do
	{
		case 1 : { GCS1 setObjectTextureGlobal [3, "S20TOC\GCS\images\gcs_map_danang1.jpg"]; };
		case 2 : { GCS1 setObjectTextureGlobal [3, "S20TOC\GCS\images\gcs_map_danang2.jpg"]; };
		case 3 : { GCS1 setObjectTextureGlobal [3, "S20TOC\GCS\images\gcs_map_danang3.jpg"]; };
		case 4 : { GCS1 setObjectTextureGlobal [3, "S20TOC\GCS\images\gcs_map_danang4.jpg"]; };
	};
	
	sleep 1 + (random 60);
	
	switch (_rNum2) do
	{
		case 1 : { GCS1 setObjectTextureGlobal [2, "S20TOC\GCS\images\gcs_drone_bridge1.jpg"]; };
		case 2 : { GCS1 setObjectTextureGlobal [2, "S20TOC\GCS\images\gcs_drone_harbor1.jpg"]; };
		case 3 : { GCS1 setObjectTextureGlobal [2, "S20TOC\GCS\images\gcs_drone_ship1.jpg"]; };
		case 4 : { GCS1 setObjectTextureGlobal [2, "S20TOC\GCS\images\gcs_map_longbin1.jpg"]; };
	};
	
sleep 10 + (random 90);
};












/////////////////////////
/* NOTES:



*/
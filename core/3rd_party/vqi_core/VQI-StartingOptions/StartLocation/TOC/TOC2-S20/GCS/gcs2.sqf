//
//



private ["_rNum1","_rNum2"];




for "_i" from 1 to 5 do {

	_rNum1 = [1,4] call BIS_fnc_randomInt;
	_rNum2 = [1,4] call BIS_fnc_randomInt;

	switch (_rNum1) do
	{
		case 1 : { GCS2 setObjectTextureGlobal [3, "S20TOC\GCS\images\gcs_radar_chart1.jpg"]; };
		case 2 : { GCS2 setObjectTextureGlobal [3, "S20TOC\GCS\images\gcs_radar_misc1.jpg"]; };
		case 3 : { GCS2 setObjectTextureGlobal [3, "S20TOC\GCS\images\gcs_radar_misc2.jpg"]; };
		case 4 : { GCS2 setObjectTextureGlobal [3, "S20TOC\GCS\images\gcs_radar_ring1.jpg"]; };
	};
	
	sleep 1 + (random 120);
	
	switch (_rNum2) do
	{
		case 1 : { GCS2 setObjectTextureGlobal [2, "S20TOC\GCS\images\gcs_map_test.jpg"]; };
		case 2 : { GCS2 setObjectTextureGlobal [2, "S20TOC\GCS\images\gcs_map_phu1.jpg"]; };
		case 3 : { GCS2 setObjectTextureGlobal [2, "S20TOC\GCS\images\gcs_map_phu2.jpg"]; };
		case 4 : { GCS2 setObjectTextureGlobal [2, "S20TOC\GCS\images\gcs_map_aviation1.jpg"]; };
	};
	
sleep 10 + (random 40);
};












/////////////////////////
/* NOTES:



*/
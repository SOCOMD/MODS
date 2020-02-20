//
//
if (VQI_CORE_HINTS == 1) then { hint "starttime.sqf"; };
sleep 1;


private ["_rDayLight"];



_rDaylight = 100;
vqiNewTime = 0;

if (isServer) then {

	if (VQI_CORE_DAYLIGHT == 5) then {
	
		waitUntil {sleep 1; time > 5};			//set to Midnight (hour 0) - year, month, day, hour, seconds
		
		setDate [date select 0, date select 1, date select 2, ((date select 3)*0), date select 4];
		vqiNewTime = random 23;

	} else {
	
		if (VQI_CORE_DAYLIGHT == 1) then { _rDaylight = 98; };
		if (VQI_CORE_DAYLIGHT == 2) then { _rDaylight = 90; };
		if (VQI_CORE_DAYLIGHT == 3) then { _rDaylight = 80; };
		if (VQI_CORE_DAYLIGHT == 4) then { _rDaylight = 70; };
			
		waitUntil {sleep 1; time > 5};			//set to Midnight (hour 0) - year, month, day, hour, seconds
		setDate [date select 0, date select 1, date select 2, ((date select 3)*0), date select 4]; 

		sleep 1;

		//Random Start Time, X % daylight
		if (random 100 < _rDaylight) then {
			vqiNewTime = 6.5 + random 9; 		// Day Time: 6:30am-3:30pm
		} else {
			if (random 100 < 75) then {
				vqiNewTime = random 5.5; 		// Night/Dawn: 12am-5:30am
			} else {
				vqiNewTime = 18 + random 5.5;	// Dusk/Night: 6pm-11:30pm
			};
		};
		publicVariable "vqiNewTime";
	};
};    

waitUntil {sleep 1; !isNil "vqiNewTime"};
skipTime vqiNewTime;








///////////////////////
/* NOTES:


*/
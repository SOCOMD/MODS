// CORE WEATHER SETTINGS - Temperature per Region
// 6 Climate Zones, rough estimates, gaming only
//hint "climate.sqf";
sleep 5;
if (VQI_CORE_REGIONWEATHER == 0) exitWith { VQI_CORE_TEMP = 33; };



// 0 = off/none
// 1 = polar.............ice
// 2 = tundra............cold
// 3 = temperate.........normal
// 4 = mediterranean.....warm
// 5 = tropical..........warm/wet
// 6 = arid..............hot/dry



// Calc Temperature for Region/Climate											Wetsuit < 60°F		ICE < 32°F
if (VQI_CORE_REGIONWEATHER == 1) then {
	// polar/ice/sub-zero
	if (VQI_CORE_SEASONMOON == 1) then {VQI_CORE_TEMP = -40 + (random 50)};		// winter - Dec,Jan,Feb 	-40°F - 10°F
	if (VQI_CORE_SEASONMOON == 2) then {VQI_CORE_TEMP =   0 + (random 30)};		// spring - Mar,Apr,May	  0°F - 30°F
	if (VQI_CORE_SEASONMOON == 3) then {VQI_CORE_TEMP =  10 + (random 40)};		// summer - Jun,Jul,Aug	 10°F - 50°F
	if (VQI_CORE_SEASONMOON == 4) then {VQI_CORE_TEMP = -10 + (random 30)};		// fall --- Sep,Oct,Nov	-10°F - 20°F
};


if (VQI_CORE_REGIONWEATHER == 2) then {
	// tundra/cold/alpine
	if (VQI_CORE_SEASONMOON == 1) then {VQI_CORE_TEMP = -10 + (random 30)};		// winter - Dec,Jan,Feb 	-10°F - 20°F
	if (VQI_CORE_SEASONMOON == 2) then {VQI_CORE_TEMP =  10 + (random 30)};		// spring - Mar,Apr,May	 10°F - 40°F
	if (VQI_CORE_SEASONMOON == 3) then {VQI_CORE_TEMP =  30 + (random 30)};		// summer - Jun,Jul,Aug	 30°F - 60°F
	if (VQI_CORE_SEASONMOON == 4) then {VQI_CORE_TEMP =  10 + (random 20)};		// fall --- Sep,Oct,Nov	 10°F - 30°F
};


if (VQI_CORE_REGIONWEATHER == 3) then {
	// temperate
	if (VQI_CORE_SEASONMOON == 1) then {VQI_CORE_TEMP = -10 + (random 40)};		// winter - Dec,Jan,Feb 	-10°F - 30°F
	if (VQI_CORE_SEASONMOON == 2) then {VQI_CORE_TEMP =  20 + (random 40)};		// spring - Mar,Apr,May	 20°F - 60°F
	if (VQI_CORE_SEASONMOON == 3) then {VQI_CORE_TEMP =  20 + (random 30)};		// summer - Jun,Jul,Aug	 50°F - 95°F
	if (VQI_CORE_SEASONMOON == 4) then {VQI_CORE_TEMP =  30 + (random 40)};		// fall --- Sep,Oct,Nov	 30°F - 70°F
};


if (VQI_CORE_REGIONWEATHER == 4) then {
	// mediterranean
	if (VQI_CORE_SEASONMOON == 1) then {VQI_CORE_TEMP = 40 + (random 20)};		// winter - Dec,Jan,Feb 	40°F - 60°F
	if (VQI_CORE_SEASONMOON == 2) then {VQI_CORE_TEMP = 50 + (random 20)};		// spring - Mar,Apr,May	50°F - 70°F
	if (VQI_CORE_SEASONMOON == 3) then {VQI_CORE_TEMP = 70 + (random 20)};		// summer - Jun,Jul,Aug	70°F - 90°F
	if (VQI_CORE_SEASONMOON == 4) then {VQI_CORE_TEMP = 50 + (random 10)};		// fall --- Sep,Oct,Nov	50°F - 60°F
};


if (VQI_CORE_REGIONWEATHER == 5) then {
	// tropical
	if (VQI_CORE_SEASONMOON == 1) then {VQI_CORE_TEMP = 75 + (random 10)};		// winter - Dec,Jan,Feb 	75°F - 85°F
	if (VQI_CORE_SEASONMOON == 2) then {VQI_CORE_TEMP = 80 + (random 15)};		// spring - Mar,Apr,May	80°F - 95°F
	if (VQI_CORE_SEASONMOON == 3) then {VQI_CORE_TEMP = 85 + (random 20)};		// summer - Jun,Jul,Aug	85°F - 105°F
	if (VQI_CORE_SEASONMOON == 4) then {VQI_CORE_TEMP = 75 + (random 20)};		// fall --- Sep,Oct,Nov	75°F - 95°F
};


if (VQI_CORE_REGIONWEATHER == 6) then {
	// arid/desert
	if (VQI_CORE_SEASONMOON == 1) then {VQI_CORE_TEMP = 30 + (random 40)};		// winter - Dec,Jan,Feb 	30°F - 70°F
	if (VQI_CORE_SEASONMOON == 2) then {VQI_CORE_TEMP = 50 + (random 40)};		// spring - Mar,Apr,May	50°F - 90°F
	if (VQI_CORE_SEASONMOON == 3) then {VQI_CORE_TEMP = 75 + (random 50)};		// summer - Jun,Jul,Aug	75°F - 125°F
	if (VQI_CORE_SEASONMOON == 4) then {VQI_CORE_TEMP = 70 + (random 25)};		// fall --- Sep,Oct,Nov	70°F - 95°F
};




sleep 1;
publicVariable "VQI_CORE_TEMP";




sleep 1;
//hint "climate.sqf -END-";
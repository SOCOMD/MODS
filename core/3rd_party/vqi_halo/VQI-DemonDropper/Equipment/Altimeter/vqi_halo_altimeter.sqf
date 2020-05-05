//
//


profileNamespace setVariable ["AltimeterKeyToggle", true];

private ["_mapName","_mapDate","_mapTime","_aveCTemp","_dateTemp","_timeTemp","_mapTemp","_unit","_pAlt","_pGrid","_pHdg","_pAltm","_pTempL","_pTempM","_pTempH","_pTempV","_pTempX","_pTemp1",
		"_pSaO2a","_pSaO2b","_pSaO2c","_pSaO2d","_pSaO2e","_pSaO2f","_windDir","_knots","_display","_cabTemp","_outTemp","_dorTemp"];

_mapName = worldName;
_mapDate	= dateToNumber date;
_mapTime = daytime;

_aveCTemp = 20; 	// default
_dateTemp = 0;
_timeTemp = 0;

_mapTemp = 0;
_outTemp = 0;		// Outside-Jump
_cabTemp = 0;		// Cargo/Aircraft
_dorTemp = 0;		// Ramp/Door


_pDistcab = 51;
_dayTime = sunOrMoon; // 1=Sun  less than 3 is dusk

//////// WIP - Experimental Atmospheric Data - WIP ////////////////////////

//Find Location, Map, Climate
//official name of Map <--THEN--> Ave Coldest Temp -50% of R3X_Number (line26) est -15*
if (_mapName == "Stratis")				then {_aveCTemp = 30;}; 	//Mediterranean
if (_mapName == "Altis")				then {_aveCTemp = 30;}; 	//Mediterranean
if (_mapName == "Chernarus")			then {_aveCTemp = 5;};	  	//Russia (southern)
if (_mapName == "Utes")				then {_aveCTemp = 5;};  	//Russia (southern, Caspian Sea)
if (_mapName == "ProvingGrounds_PMC")	then {_aveCTemp = 40;}; 	//???
if (_mapName == "Takistan")			then {_aveCTemp = 40;}; 	//Middle East
if (_mapName == "Zargabd")				then {_aveCTemp = 40;}; 	//Middle East
if (_mapName == "Desert_E")			then {_aveCTemp = 40;}; 	//??
if (_mapName == "Shapur_baf")			then {_aveCTemp = 40;}; 	//Middle East?
if (_mapName == "IslaDuala")			then {_aveCTemp = 50;}; 	//??
if (_mapName == "fallujah")			then {_aveCTemp = 40;}; 	//Middle East	
if (_mapName == "fata")				then {_aveCTemp = 40;}; 	//Middle East	
if (_mapName == "Thirsk")				then {_aveCTemp = 5;}; 	//Russia (?)
if (_mapName == "ThirskW")				then {_aveCTemp = -5;}; 	//Russia (cold)
if (_mapName == "everon2014")			then {_aveCTemp = 5;}; 	//Russia (?)
if (_mapName == "pja305")				then {_aveCTemp = 30;}; 	//Jungle (Central America?)
if (_mapName == "pja306")				then {_aveCTemp = 10;}; 	//Mountains (?)
if (_mapName == "pja307")				then {_aveCTemp = 40;}; 	//Middle East/Africa
if (_mapName == "sfp_wamako")			then {_aveCTemp = 40;}; 	//Middle East/Africa
if (_mapName == "sfp_sturko")			then {_aveCTemp = 5;}; 	//Sweden (?)
if (_mapName == "IsolaDiCapraia")		then {_aveCTemp = 40;}; 	//Middle East	

//Adjust for Date, Season
if ((_mapDate > 0.00) && (_mapDate < 0.08))	then {_dateTemp = 0;};  //Jan - dateToNumber: Jan1st=0 -> Dec31st=1
if ((_mapDate > 0.08) && (_mapDate < 0.17))	then {_dateTemp = 2;};  //Feb
if ((_mapDate > 0.17) && (_mapDate < 0.25)) 	then {_dateTemp = 5;};  //Mar
if ((_mapDate > 0.25) && (_mapDate < 0.33)) 	then {_dateTemp = 10;}; //Apr
if ((_mapDate > 0.33) && (_mapDate < 0.42)) 	then {_dateTemp = 20;}; //May
if ((_mapDate > 0.42) && (_mapDate < 0.50)) 	then {_dateTemp = 25;}; //Jun
if ((_mapDate > 0.50) && (_mapDate < 0.58)) 	then {_dateTemp = 30;}; //Jul
if ((_mapDate > 0.58) && (_mapDate < 0.67)) 	then {_dateTemp = 35;}; //Aug
if ((_mapDate > 0.67) && (_mapDate < 0.75)) 	then {_dateTemp = R3X_Number;}; //Sep
if ((_mapDate > 0.75) && (_mapDate < 0.83)) 	then {_dateTemp = R2X_Number;}; //Oct
if ((_mapDate > 0.83) && (_mapDate < 0.92)) 	then {_dateTemp = R1X_Number;}; //Nov
if ((_mapDate > 0.92) && (_mapDate < 1.00)) 	then {_dateTemp = R1X_Number;}; //Dec

//Adjust for Time-of-Day 24:00
if ((_mapTime > 0.0) && (_mapTime < 6.0 )) then {_timeTemp = 0;}; //military time 24h: 0-6=0,6-9=5,9-12=10,12-18=rnd20,18-23=rnd10
if ((_mapTime > 6.0) && (_mapTime < 9.0 )) then {_timeTemp = 5;};
if ((_mapTime > 9.0) && (_mapTime < 12.0)) then {_timeTemp = R1X_Number;};
if ((_mapTime > 12 ) && (_mapTime < 18.0)) then {_timeTemp = R3X_Number;};
if ((_mapTime > 18 ) && (_mapTime < 24.0)) then {_timeTemp = R2X_Number;};


//////////////////////////////////////////////////////
_unit = _this select 0;

if ("VQI_JumpBuddy_1" in assignedItems _unit) then {

	disableSerialization;
	if (_dayTime > 0.1) then {	2 cutRsc ["VQI_ALTIMETER_1", "PLAIN"]; };	// Normal
	if (_dayTime == 0)  then {	2 cutRsc ["VQI_ALTIMETER_1GL", "PLAIN"]; };	// NightGlo
	
	if ((_dayTime < 0.8) && (_dayTime > 0.2)) then {	5 cutRsc ["VQI_ALTIMETER_1N1", "PLAIN"]; };	// Shadow (light)
	if ((_dayTime < 0.2) && (_dayTime > 0.0)) then {	5 cutRsc ["VQI_ALTIMETER_1N2", "PLAIN"]; };	// Shadow (dark)
	


	
	while {"VQI_JumpBuddy_1" in (assignedItems _unit)} do {

		
		_pAlt = round (((getPosASL _unit) select 2)*3.2808);
		_pGrid = mapGridposition _unit;
		_pHdg = round (getDir _unit);
		_pAltm = round ((getPosASL _unit) select 2);
		
		_mapTemp = _aveCTemp + _dateTemp + _timeTemp + R2X_Number; //average Temp (Need X each Map) - WIP
		
		_pTempL = round (((-3.6)*_pAlt)/1000) + _mapTemp;
		_pTempM = round (((-3.5)*_pAlt)/1000) + (_mapTemp * 0.9); //need better Formula for Temp Layers!
		_pTempH = round (((-3.4)*_pAlt)/1000) + (_mapTemp * 0.7);
		_pTempV = round (((-3.3)*_pAlt)/1000) + (_mapTemp * 0.2);
		_pTempX = round (((-3.2)*_pAlt)/1000) + 55 + R1X_Number;
		_pTemp1 = round (-78) + R1X_Number; //XHR-1 Flights
		
		_pSaO2a = round (((-0.11)*_pAlt)/100) + 98;
		_pSaO2b = round (((-0.22)*_pAlt)/100) + 98;
		_pSaO2c = round (((-0.33)*_pAlt)/100) + 98;
		_pSaO2d = round (((-0.38)*_pAlt)/100) + 98;
		_pSaO2e = round (((-0.37)*_pAlt)/100) + 98;
		_pSaO2f = 0;
		
		_windDir = windDir;
		_knots = 3.6 * sqrt ((wind select 0)*(wind select 0) + (wind select 1)*(wind select 1)); //WIP?

		_display = uiNamespace getVariable "VQI_ALTIMETER_1";  
		(_display displayCtrl 1000) ctrlSetText format["%1'",_pAlt];									// Altitude ( ft)
		(_display displayCtrl 1001) ctrlSetText format["%1",_pGrid];									// GPS
		(_display displayCtrl 1002) ctrlSetText format["%1",_pHdg];									// Heading
		(_display displayCtrl 1003) ctrlSetText format["%1m",_pAltm];									// Altitude ( m )
		(_display displayCtrl 1004) ctrlSetText format["%1",[daytime] call bis_fnc_timetostring];			// Clock
		//(_display displayCtrl 1005) ctrlSetText format["%1F",_pTemp];									// ?
		(_display displayCtrl 1007) ctrlSetText format["%1~%2",(round(_windDir)),(round(_knots/1.852))];	// Weather (wind ~ knots)
	
		
		// Temperature: INSIDE PLANE
		if (isNil "VQI_HALO_JUMPCRAFT") then { _pDistcap = 51; } else { _pDistcab = _unit distance VQI_HALO_JUMPCRAFT; };
		if (BLUElightON == 1)	then { _cabTemp = 50 + rCargoTemp1; }; 	// Ride to DZ
		if (REDlight1ON == 1)	then { _cabTemp = 50 + rCargoTemp2; }; 	// 1st Red-Light
		if (REDlight2ON == 1)	then { _cabTemp = 40 + rCargoTemp3; }; 	// De-pressurize
		if (RampOpenYES == 1)	then { _cabTemp = 20 + rCargoTemp4; };	// Ramp Opened
		
		if (_pDistcab < 50) then { 
			(_display displayCtrl 1005) ctrlSetText format["%1F",(round(_cabTemp))];
		} else {
	
			switch (true) do {	// Altitude Temperature based on Climate: OUTSIDE PLANE
				case ( _pAlt < 13000): { (_display displayCtrl 1005) ctrlSetText format["%1F",(round(_pTempL*1.00))]; };						// 13,000'ft
				case ((_pAlt > 13000) && (_pAlt <= 15000)): { (_display displayCtrl 1005) ctrlSetText format["%1F",(round(_pTempM*0.90))]; };		// 
				case ((_pAlt > 15000) && (_pAlt <= 18000)): { (_display displayCtrl 1005) ctrlSetText format["%1F",(round(_pTempH*0.60))]; };		// 
				case ((_pAlt > 18000) && (_pAlt <= 28000)): { (_display displayCtrl 1005) ctrlSetText format["%1F",(round(_pTempV*0.30))]; };		//
				case ((_pAlt > 28000) && (_pAlt <= 38000)): { (_display displayCtrl 1005) ctrlSetText format["%1F",(round(_pTempX*1.15))]; };		//
				case ( _pAlt > 38000): { (_display displayCtrl 1005) ctrlSetText format["%1F",_pTemp1]; };									// 38,000'ft
			};
		};
		
		
		switch (true) do {	// Oxygen Saturation:  ~Non-Linear Data Curve~
			case ( _pAlt <= 10000): { (_display displayCtrl 1006) ctrlSetText (format["%1",_pSaO2a]+"%"); };
			case ((_pAlt > 10000) && (_pAlt <= 15000)): { (_display displayCtrl 1006) ctrlSetText (format["%1",_pSaO2b]+"%"); };
			case ((_pAlt > 15000) && (_pAlt <= 18000)): { (_display displayCtrl 1006) ctrlSetText (format["%1",_pSaO2c]+"%"); };
			case ((_pAlt > 18000) && (_pAlt <= 20000)): { (_display displayCtrl 1006) ctrlSetText (format["%1",_pSaO2d]+"%"); };
			case ((_pAlt > 20000) && (_pAlt <= 26500)): { (_display displayCtrl 1006) ctrlSetText (format["%1",_pSaO2e]+"%"); };
			case ( _pAlt > 26500): { (_display displayCtrl 1006) ctrlSetText (format["%1",_pSaO2f]+"%"); };
		};
		
		
		switch (true) do {	// Navigation Arrow
			case ((_pHdg >=  0) && (_pHdg <=  22)): { (_display displayCtrl 1008) ctrlSetText "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\n_1.paa"; };
			case ((_pHdg > 338) && (_pHdg <= 360)): { (_display displayCtrl 1008) ctrlSetText "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\n_1.paa"; };
			case ((_pHdg >  22) && (_pHdg <=  67)): { (_display displayCtrl 1008) ctrlSetText "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\ne_1.paa"; };
			case ((_pHdg >  67) && (_pHdg <= 112)): { (_display displayCtrl 1008) ctrlSetText "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\e_1.paa"; };
			case ((_pHdg > 112) && (_pHdg <= 157)): { (_display displayCtrl 1008) ctrlSetText "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\se_1.paa";	 };
			case ((_pHdg > 157) && (_pHdg <= 202)): { (_display displayCtrl 1008) ctrlSetText "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\s_1.paa"; };
			case ((_pHdg > 202) && (_pHdg <= 247)): { (_display displayCtrl 1008) ctrlSetText "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\sw_1.paa";	 };
			case ((_pHdg > 247) && (_pHdg <= 292)): { (_display displayCtrl 1008) ctrlSetText "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\w_1.paa"; };
			case ((_pHdg > 292) && (_pHdg <= 338)): { (_display displayCtrl 1008) ctrlSetText "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gfx\nw_1.paa"; };
		};
	sleep 0.02; // loop
	};
} else { 
	hint "Altimeter: JumpBuddy Missing \n Used in Items (watch) slot";
};






/////////////////////////////////////////////////////////////////////////
/* NOTES:




*/
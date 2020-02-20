// hide/bury parachute to prevent enemy detection
//





dropGear = true;
gearSpot = true;

// chute & bury menu
LZchute = createVehicle ["B_Parachute", position player, [], 0, "CAN_COLLIDE"];
(objectParent LZchute) setPos getPos player;
sleep 1;

hint "'Bury/Hide' Menu on \n Ground Gear (optional)";
LZchute addAction ["--------------", ""];
LZchute addAction ["<t color='#CC9933'>Bury/Hide Jump Gear</t>", { deleteVehicle objectParent LZchute; gearSpot = false; } ];
sleep 1200;	// 20 min







// deploy enemy if noticed
if (gearSpot) then { 
	
	// X %
	if (random 100 < VQI_LEAP_BURYCHUTE) then { [player] execVM "vqi_halo\VQI-DemonDropper\Airspace\Radar\QRF\vqi_leap_radar_qrf.sqf"; };
};







///////////////////////
/* NOTES:



*/
// hide/bury parachute to prevent enemy detection
//





dropGear = true;
gearSpot = true;


player setVariable ["haloReady", false];
player setVariable ["haloLanded", false];

// chute & bury menu
LZchute = createVehicle ["SOCOMD_COS_PARACHUTE", position player, [], 0, "CAN_COLLIDE"];
(objectParent LZchute) setPos getPos player;

hint "'Bury/Hide' Menu on \n Ground Gear (optional)";
LZchute addAction ["--------------", ""];
LZchute addAction ["<t color='#CC9933'>Bury/Hide Jump Gear</t>", { deleteVehicle objectParent LZchute; gearSpot = false; } ];




///////////////////////
/* NOTES:



*/
//request a re-route of the Flight Plan; select a more specific area
//---WIP-----------by R.Von Quest aka 'Goblin'--------------WIP-----
//---HALO---HALO---HALO---HALO---HALO---HALO---HALO---HALO---HALO---
private ["_mkAlt","_xX","_yY","_zZ","_mkDZ"];
_mkAlt 	= _this select 0;

hint "Open Map, 'CLICK' to request NEW Flight Plan and JumpPoint";
sleep 1;




MapClicked = false;
publicVariable "MapClicked";

onMapSingleClick "clickPos = _pos; MapClicked = true; onMapSingleClick {};";
publicVariable "clickPos";

waitUntil {MapClicked};
sleep 1;

deleteMarker "mkrJmp";
deleteMarker "mkrJmpDD";
deleteVehicle demonPortal;


hint "Stand-By....";
sleep 1;

if (true) then { // 95% of Command approval - SAMs later

	demonPortal = "Sign_Sphere25cm_F" createVehicle clickPos;
	publicVariable "demonPortal";
	demonPortal hideObjectGlobal true;

	xX = random 555; // random area, apprx 1km2+
	publicVariable "xX";
	yY = random 555; // x+y=area
	publicVariable "yY";
	zZ = 5555 + random 6666; // z is your height (18K-40k')
	publicVariable "zZ";

	VQIHALO2 allowDamage false;
	
	VQIHALO2 attachTo [demonPortal,[xX,yY,zZ]];
	demonPortal setVectorUp [0,0,1];
	demonPortal setDir random 359;

	
_mkAlt	= round (((getPosASL VQIHALO2) select 2)*3.2808);

deleteMarker "mkrN";

sleep 2;
hint "No worries! We'll get ya close...";
_mkrDZ = createMarker["mkrJmpDD", getPos VQIHALO2];
"mkrJmpDD" setMarkerShape "ICON";
"mkrJmpDD" setMarkerType "selector_selectedMission";
"mkrJmpDD" setMarkerColor "ColorGreen";
"mkrJmpDD" setMarkerText format [" New Flight - H.A.L.O. - %1ft",_mkAlt];
"mkrJmpDD" setMarkerAlpha 1;

sleep 1;


//move Trigger into new pos? NOT WORKING IF CLIENT!
//trgCargo attachTo [demonPortal,[0,0,0]];
//trgCargo setPos demonPortal;
//publicVariableServer "trgCargo";
trgCargo attachTo [VQIHALO2,[0,0,0]];
trgCargo setPos VQIHALO2;


sleep 2;
VQIHALO2 setDamage 0;



if (VQI_MKPLANE_HALO == 1) then {
	sleep 5;
	hint "Note: Marker is temporary";
	sleep 1200;
	deleteMarker "mkrJmp";
	deleteMarker "mkrJmpDD";
};
	} else {
		sleep 2;
		hint "Sorry Sir, Intel reports SAMs in the near area. No can do...";
	};
//WIP v1.2
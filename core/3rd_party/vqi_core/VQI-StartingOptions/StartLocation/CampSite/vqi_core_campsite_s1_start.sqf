//
//
if (VQI_HINTS_CORE == 1) then { hint "campSite_s1.sqf"; };
sleep 1;



if (isServer) then  { 

	execVM "vqi_core\VQI-StartingOptions\StartLocation\CampSite\vqi_core_campsite_findlocation.sqf";
	waitUntil {sleep 1; !isNil "VQIcampLocation"};
	
	// Set CampSite Ref Object/Location
	CLocOM = "Land_PenBlack_F" createVehicle (position ClocX);
	publicVariable "ClocOM";
	
	sleep 2;

	// CampSite Type/Number (object composition)			[Object, "File\Path_1.sqf"]
	_null = [ClocOM,"vqi_core\VQI-StartingOptions\StartLocation\CampSite\vqi_core_campsite_s1_objcomp.sqf"] execVM "vqi_core\VQI-StartingOptions\StartLocation\vqi_objectsMapper.sqf";
	sleep 2;
	execVM "vqi_core\VQI-StartingOptions\StartLocation\CampSite\vqi_core_campsite_s1_setup.sqf";
};



waitUntil {sleep 1; !isNil "VQIcampLocation"};

// Teleport ALL Players!
player setCaptive true;
player allowDamage false; 
sleep 2;
player attachTo [ClocOM,[0, -6, 1]];

sleep 2;
detach player;


///////////////////////////////////////////////////////////////////////////////////////////////////////
// Drop Weapon on Ground
if (VQI_CORE_STARTGEAR_P == 1) then { waitUntil {sleep 1; !isNil "SOGhasWeapon"}; };
sleep 2;

// ---> ADD Start with Weapon Option ----->
player action ["DropWeapon", "GroundWeaponHolder" createVehicle position player, currentWeapon player];
sleep 2;


player allowDamage true;
sleep 2;

// Check for Weapon in HAND!
sneakyB = true;
while {sneakyB} do {

	if (currentWeapon player != "") then {
		sneakyB = false;
	};

sleep 3;
};
////////////////////////////////////////////////////////////////////////////////////////////////////////


if (VQI_HINTS_CORE == 1) then { hint "Watch Out! \n He has a Weapon!!"; };

sleep 10;
player setCaptive false;
sleep 1;
player setCaptive false;









sleep 1;
if (VQI_HINTS_CORE == 1) then { hint "campSite_s1.sqf -END-"; };



//////////////////////
/* NOTES:
Damage reported if too close to fire?



*/
// Start Medical/Injury System
// Add EventHandlers for X

vqi_hit = 0;

hit_head = 0;
hit_chest = 0;
hit_gut = 0;

hit_rightarm = 0;
hit_leftarm = 0;
hit_rightforearm = 0;
hit_leftforearm = 0;

hit_rightupleg = 0;
hit_leftupleg = 0;
hit_rightleg = 0;
hit_leftleg = 0;

hit_rightfoot = 0;
hit_leftfoot = 0;


player addEventHandler ["Hit", {
	params ["_unit", "_source", "_damage", "_instigator"];
	[_damage] execVM "vqi_core\VQI-StartingOptions\Medical\vqi_core_medical_injurydamage.sqf";
}];


player addEventHandler ["HitPart", {
	(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];
	
	// set global variables / locations
	if ("head" 			in _selection) exitWith { hit_head = 1; 		vqi_hit = 1; };
	if ("spine3" 			in _selection) exitWith { hit_chest = 1; 		vqi_hit = 1; };
	if ("spine2" 			in _selection) exitWith { hit_gut = 1; 			vqi_hit = 1; };
	if ("rightforearm" 	in _selection) exitWith { hit_rightforearm = 1; 	vqi_hit = 1; };
	if ("rightarm" 		in _selection) exitWith { hit_rightarm = 1; 		vqi_hit = 1; };
	if ("leftforearm" 	in _selection) exitWith { hit_leftforearm = 1; 	vqi_hit = 1; };
	if ("leftarm" 		in _selection) exitWith { hit_leftarm = 1; 		vqi_hit = 1; };
	if ("rightupleg" 		in _selection) exitWith { hit_rightupleg = 1; 	vqi_hit = 1; };
	if ("rightleg" 		in _selection) exitWith { hit_rightleg = 1; 		vqi_hit = 1; };
	if ("leftupleg" 		in _selection) exitWith { hit_leftupleg = 1; 	vqi_hit = 1; };
	if ("leftleg" 		in _selection) exitWith { hit_leftleg = 1; 		vqi_hit = 1; };
	if ("rightfoot" 		in _selection) exitWith { hit_rightfoot = 1; 	vqi_hit = 1; };
	if ("leftfoot" 		in _selection) exitWith { hit_leftfoot = 1; 		vqi_hit = 1; };
}];





// set all global parts variables
// head
player setVariable ["hit_head",0];
player setVariable ["head_1",0];
player setVariable ["head_2",0];
player setVariable ["head_3",0];
player setVariable ["head_4",0];
player setVariable ["head_5",0];


// chest
player setVariable ["hit_chest",0];
player setVariable ["chest_1",0];
player setVariable ["chest_2",0];
player setVariable ["chest_3",0];
player setVariable ["chest_4",0];
player setVariable ["chest_5",0];
player setVariable ["chest_6",0];
player setVariable ["chest_7",0];
player setVariable ["chest_8",0];
player setVariable ["chest_9",0];
player setVariable ["chest_10",0];
player setVariable ["chest_11",0];
player setVariable ["chest_12",0];


// gut
player setVariable ["hit_gut",0];
player setVariable ["gut_1",0];
player setVariable ["gut_2",0];
player setVariable ["gut_3",0];
player setVariable ["gut_4",0];
player setVariable ["gut_5",0];
player setVariable ["gut_6",0];
player setVariable ["gut_7",0];
player setVariable ["gut_8",0];


// rightarm
player setVariable ["hit_rightarm",0];
player setVariable ["rightarm_1",0];
player setVariable ["rightarm_2",0];
player setVariable ["rightarm_3",0];

// leftarm
player setVariable ["hit_leftarm",0];
player setVariable ["leftarm_1",0];
player setVariable ["leftarm_2",0];
player setVariable ["leftarm_3",0];


// rightforearm
player setVariable ["hit_rightforearm",0];
player setVariable ["rightforearm_1",0];
player setVariable ["rightforearm_2",0];
player setVariable ["rightforearm_3",0];
player setVariable ["rightforearm_4",0];


// leftforearm
player setVariable ["hit_leftforearm",0];
player setVariable ["leftforearm_1",0];
player setVariable ["leftforearm_2",0];
player setVariable ["leftforearm_3",0];
player setVariable ["leftforearm_4",0];


// right upper leg
player setVariable ["hit_rightupleg",0];
player setVariable ["rightupleg_1",0];
player setVariable ["rightupleg_2",0];
player setVariable ["rightupleg_3",0];
player setVariable ["rightupleg_4",0];
player setVariable ["rightupleg_5",0];


// left upper leg
player setVariable ["hit_leftupleg",0];
player setVariable ["leftupleg_1",0];
player setVariable ["leftupleg_2",0];
player setVariable ["leftupleg_3",0];
player setVariable ["leftupleg_4",0];
player setVariable ["leftupleg_5",0];


// right leg
player setVariable ["hit_rightleg",0];
player setVariable ["rightleg_1",0];
player setVariable ["rightleg_2",0];
player setVariable ["rightleg_3",0];
player setVariable ["rightleg_4",0];


// left leg
player setVariable ["hit_leftleg",0];
player setVariable ["leftleg_1",0];
player setVariable ["leftleg_2",0];
player setVariable ["leftleg_3",0];
player setVariable ["leftleg_4",0];


// right foot
player setVariable ["hit_rightfoot",0];
player setVariable ["rightfoot_1",0];
player setVariable ["rightfoot_2",0];


// left foot
player setVariable ["hit_leftfoot",0];
player setVariable ["leftfoot_1",0];
player setVariable ["leftfoot_2",0];























////////////////////
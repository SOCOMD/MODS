//
//
if (VQI_HINTS_CORE == 1) then { hint "campsite_s1_setup.sqf"; };
sleep 1;


private ["_hGunMags","_rItem","_rNum"];

//Adjust Objects
VQI_SOCOM_1 attachTo [VQI_Box1,[0,0,0.58]]; 
VQI_Soda1 attachTo [VQI_Box1,[0.5,0,0.47]]; 
VQI_Bacon1 attachTo [VQI_Box1,[0.7,0.15,0.47]]; 
VQI_PMilk1 attachTo [VQI_Box1,[0.7,0,0.44]]; 
VQI_Radio1 attachTo [VQI_Box1,[-0.6,0,0.47]]; 
VQI_CerealBox1 attachTo [VQI_Box1,[0.7,-0.2,0.59]]; 
VQI_Beans1 attachTo [VQI_Box1,[-0.75,-0.2,0.49]];


sleep 2;
VQI_Backpack1 = "B_FieldPack_blk" createVehicle position VQI_Box1;

sleep 2;	
VQI_Backpack1 addItemCargoGlobal ["ItemMap",1];
VQI_Backpack1 addItemCargoGlobal ["ItemCompass",1];

sleep 1;





_hGunMags = 1 + random 5;

if (random 100 < 50) then { // 50%
	VQI_Backpack1 addItemCargoGlobal ["hgun_Rook40_F",1];
	VQI_Backpack1 addItemCargoGlobal ["16Rnd_9x21_Mag",_hGunMags];
};

//
_rNum = 2 + random 3;
for "_i" from 0 to _rNum do {
	_rItem = ["ItemMap","ItemWatch","ItemCompass","Binocular","Binocular","Binocular","FirstAidKit","optic_Aco_smg","bipod_01_F_blk","optic_MRCO","H_Cap_press","H_Bandanna_camo","HandGrenade",
			 "hgun_Rook40_F","16Rnd_9x21_Mag","NVGoggles_OPFOR","Rangefinder","H_Booniehat_dgtl","Chemlight_green","SmokeShell","HandGrenade_Stone","1Rnd_HE_Grenade_shell"] call BIS_fnc_selectRandom;
	VQI_Backpack1 addItemCargoGlobal [_rItem,1];
};





/* =======================================================================================
NOTES:


*/
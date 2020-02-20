//
//
if (VQI_CORE_HINTS == 1) then { hint "Crates_3.sqf"; };
sleep 1;


private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100,100];



// Night - Equipment /////////////////////////////////////////////////////////////////////////////
clearWeaponCargoGlobal WR_Night; clearMagazineCargoGlobal WR_Night; clearItemCargoGlobal WR_Night;

WR_Night addItemCargoGlobal ["UGL_FlareWhite_F",10];
WR_Night addItemCargoGlobal ["3Rnd_UGL_FlareWhite_F",10];
WR_Night addItemCargoGlobal ["UGL_FlareGreen_F",10];
WR_Night addItemCargoGlobal ["3Rnd_UGL_FlareGreen_F",10];
WR_Night addItemCargoGlobal ["UGL_FlareRed_F",10];
WR_Night addItemCargoGlobal ["3Rnd_UGL_FlareRed_F",10];
WR_Night addItemCargoGlobal ["UGL_FlareYellow_F",10];
WR_Night addItemCargoGlobal ["3Rnd_UGL_FlareYellow_F",10];
WR_Night addItemCargoGlobal ["UGL_FlareCIR_F",10];
WR_Night addItemCargoGlobal ["3Rnd_UGL_FlareCIR_F",10];
WR_Night addItemCargoGlobal ["FlareWhite_F",10];
WR_Night addItemCargoGlobal ["FlareGreen_F",10];
WR_Night addItemCargoGlobal ["FlareRed_F",10];
WR_Night addItemCargoGlobal ["FlareYellow_F",10];
WR_Night addItemCargoGlobal ["NVGoggles",4];
WR_Night addItemCargoGlobal ["NVGoggles_OPFOR",4];
WR_Night addItemCargoGlobal ["NVGoggles_INDEP",4];
WR_Night addItemCargoGlobal ["Chemlight_green",30];
WR_Night addItemCargoGlobal ["Chemlight_red",30];
WR_Night addItemCargoGlobal ["Chemlight_yellow",30];
WR_Night addItemCargoGlobal ["Chemlight_blue",30];
WR_Night addItemCargoGlobal ["acc_flashlight",10];
WR_Night addItemCargoGlobal ["acc_pointer_IR",10];



// Misc - Equipment /////////////////////////////////////////////////////////////////////////////////
clearWeaponCargoGlobal WR_Equip3; clearMagazineCargoGlobal WR_Equip3; clearItemCargoGlobal WR_Equip3;

WR_Equip3 additemCargoGlobal ["VQI_SniperBuddy_1",6];
WR_Equip3 additemCargoGlobal ["VQI_BombBuddy_1",6];
WR_Equip3 additemCargoGlobal ["VQI_JumpBuddy_1",6];

WR_Equip3 addItemCargoGlobal ["Binocular",6];
WR_Equip3 addItemCargoGlobal ["LaserDesignator",2];
WR_Equip3 addItemCargoGlobal ["LaserBatteries",2];
WR_Equip3 additemCargoGlobal ["itemMap",((random 10) - 3)];  
WR_Equip3 additemCargoGlobal ["itemWatch",(random 20)];  
WR_Equip3 additemCargoGlobal ["itemCompass",((random 10) - 3)];  
WR_Equip3 additemCargoGlobal ["itemRadio",((random 10) - 3)];  
WR_Equip3 additemCargoGlobal ["itemGPS",((random 10) - 3)];
WR_Equip3 additemCargoGlobal ["RangeFinder",4];
WR_Equip3 additemCargoGlobal ["ToolKit",1];


//EOD/Pink Mist
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_DSNIPS",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_ESD_DSNIPS",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_NNPLIERS",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_ESD_NNPliers",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Screwdriver_Phillips",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Screwdriver_Flathead",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_ESD_Tweezers_R",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_ESD_Tweezers_F",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_ESD_Tweezers_C",6];

WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Spudger_Set",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Mini_inspection_Mirror",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Ceramic_Knife",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Fuse_CrimperCutter",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Screwdriver_Flathead",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Hex_Keys",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Alligator_Clips",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Jumper_Wires",6];

WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Multi_Tool",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_PryBar",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Reamer",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_MultiMeter",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Screwdriver_Flathead",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Hex_Keys",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Alligator_Clips",6];
WR_Equip3 additemCargoGlobal ["VQI_TOOLS_Shock_Initiator",6];





//
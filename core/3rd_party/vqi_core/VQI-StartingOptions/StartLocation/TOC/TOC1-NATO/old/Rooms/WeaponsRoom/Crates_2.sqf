//
//
if (VQI_CORE_HINTS == 1) then { hint "Crates_2.sqf"; };
sleep 1;


private ["_OpsCenterStart"];

_OpsCenterStart = [-100,-100,100];


// Grenades - Exp /////////////////////////////////////////////
clearMagazineCargoGlobal WR_Gre1;
WR_Gre1 addItemCargoGlobal ["HandGrenade",50];
WR_Gre1 addItemCargoGlobal ["MiniGrenade",50];




// Grenades - Smoke ////////////////////////////////////////
clearMagazineCargoGlobal WR_Gre2;
WR_Gre2 addItemCargoGlobal ["SmokeShell",40];
WR_Gre2 addItemCargoGlobal ["SmokeShellRed",10];
WR_Gre2 addItemCargoGlobal ["SmokeShellGreen",10];
WR_Gre2 addItemCargoGlobal ["SmokeShellYellow",10];
WR_Gre2 addItemCargoGlobal ["SmokeShellPurple",10];
WR_Gre2 addItemCargoGlobal ["SmokeShellBlue",10];
WR_Gre2 addItemCargoGlobal ["SmokeShellOrange",10];



// Grenades - 203 ///////////////////////////////////////////
clearMagazineCargoGlobal WR_Gre3;
WR_Gre3 addItemCargoGlobal ["1Rnd_HE_Grenade_shell",25];
WR_Gre3 addItemCargoGlobal ["3Rnd_HE_Grenade_shell",25];
WR_Gre3 addItemCargoGlobal ["3Rnd_Smoke_Grenade_shell",20];
WR_Gre3 addItemCargoGlobal ["3Rnd_SmokeRed_Grenade_shell",5];
WR_Gre3 addItemCargoGlobal ["3Rnd_SmokeGreen_Grenade_shell",5];
WR_Gre3 addItemCargoGlobal ["3Rnd_SmokeYellow_Grenade_shell",5];
WR_Gre3 addItemCargoGlobal ["3Rnd_SmokePurple_Grenade_shell",5];
WR_Gre3 addItemCargoGlobal ["3Rnd_SmokeBlue_Grenade_shell",5];
WR_Gre3 addItemCargoGlobal ["3Rnd_SmokeOrange_Grenade_shell",5];






/////////////////////////////////////////////////////////////
// Explosives - Small ///////////////////////////////////////
clearWeaponCargoGlobal WR_Exp1; clearMagazineCargoGlobal WR_Exp1; clearItemCargoGlobal WR_Exp1;
WR_Exp1 addItemCargoGlobal ["APERSMine_Range_Mag",10];
WR_Exp1 addItemCargoGlobal ["APERSBoundingMine_Range_Mag",10];
WR_Exp1 addItemCargoGlobal ["APERSTripMine_Wire_Mag",10];
WR_Exp1 addItemCargoGlobal ["SLAMDirectionalMine_Wire_Mag",10];
WR_Exp1 addItemCargoGlobal ["ClaymoreDirectionalMine_Remote_Mag",10];


// Explosives - C4 ////////////////////////////////////////////
clearMagazineCargoGlobal WR_Exp2;
WR_Exp2 addItemCargoGlobal ["DemoCharge_Remote_Mag",20];


// Explosives - Large ////////////////////////////////////////
clearWeaponCargoGlobal WR_Exp3; clearMagazineCargoGlobal WR_Exp3; clearItemCargoGlobal WR_Exp3;
WR_Exp3 addItemCargoGlobal ["SatchelCharge_Remote_Mag",10];
WR_Exp3 addItemCargoGlobal ["ATMine_Range_Mag",10];



//
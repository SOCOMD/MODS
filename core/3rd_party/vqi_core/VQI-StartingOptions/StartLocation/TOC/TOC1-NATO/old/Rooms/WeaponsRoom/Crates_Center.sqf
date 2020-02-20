//
//
if (VQI_CORE_HINTS == 1) then { hint "Crates_Center.sqf"; };
sleep 1;

// Launchers /////////////////////////////////////////////////////////////////////////////////////////////////
clearWeaponCargoGlobal WRCRATER; clearMagazineCargoGlobal WRCRATER; clearItemCargoGlobal WRCRATER; clearBackpackCargoGlobal WRCRATER;
sleep 1;

// PCML - Person-Carried Missle Launcher
// 150mm, Guided, ??? Range
WRCRATER addItemCargoGlobal ["launch_NLAW_F",2];
WRCRATER addItemCargoGlobal ["NLAW_F",10]; //Anti Armor

// Titan MPRL (air)
// 127mm, Guided, ??? Range
WRCRATER addItemCargoGlobal ["launch_Titan_F",2];
WRCRATER addItemCargoGlobal ["Titan_AA",10]; //Anti-Air

// Titan MPRL Compact (ground)
// 127mm, Guided-Controlled, ??? Range
WRCRATER addItemCargoGlobal ["launch_Titan_short_F",2];
WRCRATER addItemCargoGlobal ["Titan_AT",10]; //Anti Armor
WRCRATER addItemCargoGlobal ["Titan_AP",10]; //Anti-Personal

// RPG-42 Alamut
// 105mm, Unguided Rocket-Propelled-Grenade
WRCRATER addItemCargoGlobal ["launch_RPG32_F",2];
WRCRATER addItemCargoGlobal ["RPG32_F",10]; //Anti Armor
WRCRATER addItemCargoGlobal ["RPG32_HE_F",10]; //High Explosive
sleep 1;





// ? /////////////////////////////////////////////////////////////////////////////////////////////////
clearWeaponCargoGlobal WRCRATEC; clearMagazineCargoGlobal WRCRATEC; clearItemCargoGlobal WRCRATEC; clearBackpackCargoGlobal WRCRATEC;
sleep 1;

WRCRATEC addItemCargoGlobal ["srifle_DMR_01_F",2];
WRCRATEC addItemCargoGlobal ["srifle_EBR_F",2];
WRCRATEC addItemCargoGlobal ["srifle_GM6_F",2];
WRCRATEC addItemCargoGlobal ["srifle_LRR_F",2];

WRCRATEC addItemCargoGlobal ["LMG_Mk200_F",2];
WRCRATEC addItemCargoGlobal ["LMG_Zafir_F",2];

WRCRATEC addItemCargoGlobal ["hgun_ACPC2_F",2];
WRCRATEC addItemCargoGlobal ["hgun_P07_F",2];
WRCRATEC addItemCargoGlobal ["hgun_Pistol_heavy_01_F",2];
WRCRATEC addItemCargoGlobal ["hgun_Pistol_heavy_02_F",2];
WRCRATEC addItemCargoGlobal ["hgun_Rook40_F",2];

WRCRATEC addItemCargoGlobal ["arifle_Katiba_F",2];
WRCRATEC addItemCargoGlobal ["arifle_Katiba_C_F",2];
WRCRATEC addItemCargoGlobal ["arifle_Katiba_GL_F",2];
WRCRATEC addItemCargoGlobal ["arifle_Mk20_F",2];
WRCRATEC addItemCargoGlobal ["arifle_Mk20C_F",2];
WRCRATEC addItemCargoGlobal ["arifle_Mk20_GL_plain_F",2];

WRCRATEC addItemCargoGlobal ["arifle_MX_F",2];
WRCRATEC addItemCargoGlobal ["arifle_MXC_F",2];
WRCRATEC addItemCargoGlobal ["arifle_MX_GL_F",2];
WRCRATEC addItemCargoGlobal ["arifle_MX_SW_F",2];
WRCRATEC addItemCargoGlobal ["arifle_MXM_F",2];
WRCRATEC addItemCargoGlobal ["arifle_MX_black_F",2];
WRCRATEC addItemCargoGlobal ["arifle_MXC_black_F",2];
WRCRATEC addItemCargoGlobal ["arifle_MX_GL_black_F",2];
WRCRATEC addItemCargoGlobal ["arifle_MX_SW_black_F",2];
WRCRATEC addItemCargoGlobal ["arifle_MXM_black_F",2];

WRCRATEC addItemCargoGlobal ["arifle_TRG21_F",2];
WRCRATEC addItemCargoGlobal ["arifle_TRG20_F",2];

WRCRATEC addItemCargoGlobal ["hgun_PDW2000_F",2];
WRCRATEC addItemCargoGlobal ["SMG_01_F",2];
WRCRATEC addItemCargoGlobal ["SMG_02_F",2];

WRCRATEC addItemCargoGlobal ["srifle_DMR_02_F",2];
WRCRATEC addItemCargoGlobal ["srifle_DMR_03_F",2];
WRCRATEC addItemCargoGlobal ["srifle_DMR_04_F",2];
WRCRATEC addItemCargoGlobal ["srifle_DMR_05_blk_F",2];
WRCRATEC addItemCargoGlobal ["srifle_DMR_06_camo_F",2];

WRCRATEC addItemCargoGlobal ["MMG_01_hex_F",2];
WRCRATEC addItemCargoGlobal ["MMG_02_camo_F",2];

WRCRATEC addItemCargoGlobal ["arifle_SDAR_F",4];


/*
WRCRATEC addItemCargoGlobal ["bear_MX_GL_white_F",2];
WRCRATEC addItemCargoGlobal ["bear_MX_white_F",2];
WRCRATEC addItemCargoGlobal ["bear_MXC_white_F",2];
WRCRATEC addItemCargoGlobal ["bear_MXM_white_F",2];
WRCRATEC addItemCargoGlobal ["bear_MX_SW_white_F",2];

WRCRATEC addItemCargoGlobal ["RH_sw659",2];
*/








/*
// Spooks / Misc /////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------------------------------------------------------------------------

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_CLEAN_ID(id) id > 9 ? ##id : 0##id
#define DEFINE_TAKI_INSURGENT_CLASS_GEN(myclass) \
	myclass(1,01) 
    

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_INDEX(idx,idy) \
#idx#idy

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(id,man) \
class CUP_O_TK_INS_Soldier_##id : CUP_O_TKI_Man_##man \
{ \
	author = "SOCOMD"; \
    faction = "CUP_O_TK_MILITIA" \
	scope = 2; \
    side = 0; \
	scopeCurator = 2; \
	accuracy = 3.9; \
	displayName = QUOTE(Militiaman (AK-74) id); \
	weapons[] = {"CUP_arifle_AK74","Throw","Put"}; \
	respawnWeapons[] = {"CUP_arifle_AK74","Throw","Put"}; \
	magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
	respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
	Items[] = {"FirstAidKit"}; \
	RespawnItems[] = {"FirstAidKit"}; \
	linkedItems[] = {"CUP_H_TKI_Lungee_01","CUP_V_OI_TKI_Jacket2_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
	respawnLinkedItems[] = {"CUP_H_TKI_Lungee_01","CUP_V_OI_TKI_Jacket2_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
};

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(id,man) \
class CUP_O_TK_INS_Soldier_MG_##id: CUP_O_TKI_Man_##man \
{ \
	author = "SOCOMD"; \
    faction = "CUP_O_TK_MILITIA" \
	scope = 2; \
	scopeCurator = 2; \
	accuracy = 3.9; \
	displayName = QUOTE(Machinegunner id); \
	weapons[] = {"CUP_lmg_PKM","Throw","Put"}; \
	respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"}; \
	magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}; \
	respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}; \
	threat[] = {1,0.1,0.6}; \
	Items[] = {"FirstAidKit"}; \
	RespawnItems[] = {"FirstAidKit"}; \
	linkedItems[] = {"CUP_V_OI_TKI_Jacket3_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
	respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket3_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
	backpack = "CUP_B_TKI_AlicePack_MG"; \
};

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(id,man) \
class CUP_O_TK_INS_Soldier_AR_##id: CUP_O_TKI_Man_##man \
{ \
	author = "SOCOMD"; \
    faction = "CUP_O_TK_MILITIA" \
	scope = 2; \
	scopeCurator = 2; \
	accuracy = 3.9; \
	displayName = QUOTE(Automatic Rifleman id); \
	backpack = "CUP_B_TKI_CivPack_WDL_RPK"; \
	weapons[] = {"CUP_arifle_RPK74","Throw","Put"}; \
	respawnWeapons[] = {"CUP_arifle_RPK74","Throw","Put"}; \
	magazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"}; \
	respawnMagazines[] = {"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M","CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"}; \
	Items[] = {"FirstAidKit"}; \
	RespawnItems[] = {"FirstAidKit"}; \
	linkedItems[] = {"CUP_V_OI_TKI_Jacket3_02","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
	respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket3_02","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
	threat[] = {1,0.1,0.3}; \
};

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(id,man) \
class CUP_O_TK_INS_Soldier_AAT_##id: CUP_O_TKI_Man_##man \
{ \
    author = "SOCOMD"; \
    faction = "CUP_O_TK_MILITIA" \
    scope = 2; \
    scopeCurator = 2; \
    weapons[] = {"CUP_arifle_AK74","Throw","Put"}; \
    respawnWeapons[] = {"CUP_arifle_AK74","Throw","Put"}; \
    magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
    respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M"}; \
    Items[] = {"FirstAidKit"}; \
    RespawnItems[] = {"FirstAidKit"}; \
    linkedItems[] = {"CUP_H_TKI_Lungee_01","CUP_V_OI_TKI_Jacket2_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
    respawnLinkedItems[] = {"CUP_H_TKI_Lungee_01","CUP_V_OI_TKI_Jacket2_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
    displayName = QUOTE(Militiaman (RPG ammo) id); \
    backpack = "CUP_B_TKI_Backpack_RPG"; \
};

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(id,man) \
class CUP_O_TK_INS_Soldier_GL_##id: CUP_O_TKI_Man_##man \
{ \
    author = "SOCOMD"; \
    faction = "CUP_O_TK_MILITIA" \
    scope = 2; \
    scopeCurator = 2; \
    accuracy = 3.9; \
    displayName = QUOTE(Militiaman (AK-74 GL) id); \
    backpack = "CUP_B_TKI_AlicePack_Khaki_AmmoAK74"; \
    weapons[] = {"CUP_arifle_AK74_GL","Throw","Put"}; \
    respawnWeapons[] = {"CUP_arifle_AK74_GL","Throw","Put"}; \
    magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"}; \
    respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"}; \
    Items[] = {"FirstAidKit"}; \
    RespawnItems[] = {"FirstAidKit"}; \
    linkedItems[] = {"CUP_H_TKI_Lungee_open_02","CUP_V_OI_TKI_Jacket2_02","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
    respawnLinkedItems[] = {"CUP_H_TKI_Lungee_open_02","CUP_V_OI_TKI_Jacket2_02","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
};

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(id,man) \
class CUP_O_TK_INS_Soldier_Enfield_##id: CUP_O_TKI_Man_##man \
{ \
    author = "SOCOMD"; \
    faction = "CUP_O_TK_MILITIA" \
    scope = 2; \
    scopeCurator = 2; \
    accuracy = 3.9; \
    displayName = QUOTE(Militiaman (Lee-Enfield) id); \
    weapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"}; \
    respawnWeapons[] = {"CUP_srifle_LeeEnfield","Throw","Put"}; \
    magazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"}; \
    respawnMagazines[] = {"CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M","CUP_10x_303_M"}; \
    Items[] = {"FirstAidKit"}; \
    RespawnItems[] = {"FirstAidKit"}; \
    linkedItems[] = {"CUP_V_OI_TKI_Jacket4_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
    respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket4_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
}; 

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(id,man) \
class CUP_O_TK_INS_Soldier_FNFAL_##id: CUP_O_TKI_Man_##man \
{ \
    author = "SOCOMD"; \
    faction = "CUP_O_TK_MILITIA" \
    scope = 2; \
    scopeCurator = 2; \
    accuracy = 3.9; \
    displayName = QUOTE(Militiaman (FN FAL) id); \
    backpack = "CUP_B_TIK_CivPack_WDL_Ammo"; \
    weapons[] = {"CUP_arifle_FNFAL","Throw","Put"}; \
    respawnWeapons[] = {"CUP_arifle_FNFAL","Throw","Put"}; \
    magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"}; \
    respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M"}; \
    Items[] = {"FirstAidKit"}; \
    RespawnItems[] = {"FirstAidKit"}; \
    linkedItems[] = {"CUP_V_OI_TKI_Jacket3_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
    respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket3_01","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
};

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(id,man) \
class CUP_O_TK_INS_Soldier_AA_##id: CUP_O_TKI_Man_##man \
{ \
    author = "SOCOMD"; \
    faction = "CUP_O_TK_MILITIA" \
    scope = 2; \
    scopeCurator = 2; \
    accuracy = 3.9; \
    displayName = QUOTE(AA Specialist id); \
    weapons[] = {"CUP_arifle_AKS74U","CUP_launch_9K32Strela","Throw","Put"}; \
    respawnWeapons[] = {"CUP_arifle_AKS74U","CUP_launch_9K32Strela","Throw","Put"}; \
    magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_Strela_2_M"}; \
    respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_Strela_2_M"}; \
    Items[] = {"FirstAidKit"}; \
    RespawnItems[] = {"FirstAidKit"}; \
    linkedItems[] = {"CUP_V_OI_TKI_Jacket1_02","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
    respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket1_02","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
    threat[] = {1,0.1,0.7}; \
};

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(id,man) \
class CUP_O_TK_INS_Soldier_AT_##id: CUP_O_TKI_Man_##man \
{ \
    author = "SOCOMD"; \
    faction = "CUP_O_TK_MILITIA" \
    scope = 2; \
    scopeCurator = 2; \
    accuracy = 3.9; \
    threat[] = {1,0.6,0.1}; \
    displayName = QUOTE(Militiaman (RPG-7) id); \
    weapons[] = {"CUP_arifle_AK74","CUP_launch_RPG7V","Throw","Put"}; \
    respawnWeapons[] = {"CUP_arifle_AK74","CUP_launch_RPG7V","Throw","Put"}; \
    magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_PG7VL_M"}; \
    respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_PG7VL_M"}; \
    Items[] = {"FirstAidKit"}; \
    RespawnItems[] = {"FirstAidKit"}; \
    linkedItems[] = {"CUP_V_OI_TKI_Jacket4_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
    respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket4_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
    backpack = "CUP_B_TKI_Backpack_Gunner_RPG"; \
};

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(id,man) \
class CUP_O_TK_INS_Soldier_TL_##id: CUP_O_TKI_Man_##man \
{ \
    author = "SOCOMD"; \
    faction = "CUP_O_TK_MILITIA" \
    scope = 2; \
    scopeCurator = 2; \
    accuracy = 3.9; \
    displayName = QUOTE(Team Leader id); \
    weapons[] = {"CUP_arifle_AK74_GL","Throw","Put"}; \
    respawnWeapons[] = {"CUP_arifle_AK74_GL","Throw","Put"}; \
    magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShellBlue","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"}; \
    respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShellBlue","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M","CUP_1Rnd_HE_GP25_M"}; \
    Items[] = {"FirstAidKit"}; \
    RespawnItems[] = {"FirstAidKit"}; \
    linkedItems[] = {"CUP_V_OI_TKI_Jacket1_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
    respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket1_03","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
};

#define DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(id,man) \
class CUP_O_TK_INS_Sniper_##id: CUP_O_TKI_Man_##man \
{ \
    author = "SOCOMD"; \
    faction = "CUP_O_TK_MILITIA" \
    scope = 2; \
    scopeCurator = 2; \
    accuracy = 3.9; \
    displayName = QUOTE(Sniper id); \
    threat[] = {1,0.3,0.3}; \
    weapons[] = {"CUP_arifle_AKS74_pso","Throw","Put","Binocular"}; \
    respawnWeapons[] = {"CUP_arifle_AKS74_pso","Throw","Put","Binocular"}; \
    magazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShellBlue"}; \
    respawnMagazines[] = {"CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","CUP_30Rnd_545x39_AK_M","SmokeShell","SmokeShellBlue"}; \
    Items[] = {"FirstAidKit"}; \
    RespawnItems[] = {"FirstAidKit"}; \
    linkedItems[] = {"CUP_V_OI_TKI_Jacket2_02","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
    respawnLinkedItems[] = {"CUP_V_OI_TKI_Jacket2_02","ItemMap","ItemCompass","ItemWatch","ItemRadio"}; \
};
 
class CUP_O_TKI_Man_01;
class CUP_O_TKI_Man_02;
class CUP_O_TKI_Man_03;
class CUP_O_TKI_Man_04;
class CUP_O_TKI_Man_05;
class CUP_O_TKI_Man_06;
class CUP_O_TKI_Man_07;
class CUP_O_TKI_Man_08;
class CUP_O_TKI_Man_09;
class CUP_O_TKI_Man_10;
class CUP_O_TKI_Man_11;
class CUP_O_TKI_Man_12;


//DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(1,01)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(1,01)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(2,02)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(3,03)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(4,04)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(5,05)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(6,06)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(7,07)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(8,08)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(9,09)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(10,10)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(11,11)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER(12,12)

DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(1,01)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(2,02)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(3,03)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(4,04)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(5,05)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(6,06)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(7,07)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(8,08)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(9,09)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(10,10)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(11,11)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_MG(12,12)

DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(1,01)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(2,02)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(3,03)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(4,04)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(5,05)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(6,06)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(7,07)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(8,08)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(9,09)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(10,10)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(11,11)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AR(12,12)

DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(1,01)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(2,02)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(3,03)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(4,04)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(5,05)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(6,06)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(7,07)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(8,08)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(9,09)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(10,10)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(11,11)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AAT(12,12)

DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(1,01)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(2,02)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(3,03)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(4,04)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(5,05)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(6,06)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(7,07)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(8,08)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(9,09)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(10,10)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(11,11)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_GL(12,12)

DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(1,01)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(2,02)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(3,03)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(4,04)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(5,05)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(6,06)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(7,07)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(8,08)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(9,09)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(10,10)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(11,11)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_ENFIELD(12,12)

DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(1,01)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(2,02)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(3,03)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(4,04)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(5,05)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(6,06)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(7,07)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(8,08)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(9,09)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(10,10)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(11,11)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_FNFAL(12,12)

DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(1,01)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(2,02)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(3,03)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(4,04)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(5,05)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(6,06)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(7,07)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(8,08)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(9,09)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(10,10)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(11,11)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AA(12,12)

DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(1,01)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(2,02)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(3,03)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(4,04)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(5,05)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(6,06)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(7,07)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(8,08)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(9,09)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(10,10)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(11,11)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_AT(12,12)

DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(1,01)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(2,02)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(3,03)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(4,04)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(5,05)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(6,06)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(7,07)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(8,08)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(9,09)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(10,10)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(11,11)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SOLIDER_TL(12,12)

DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(1,01)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(2,02)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(3,03)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(4,04)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(5,05)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(6,06)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(7,07)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(8,08)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(9,09)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(10,10)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(11,11)
DEFINE_TAKI_INSURGENT_CLASS_GEN_SNIPER(12,12)

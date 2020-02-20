//
//
if (VQI_HINTS_CORE == 1) then { hint "randomWeapon_1_any.sqf"; };
sleep 1;

private ["_unit","_rMags","_rWeaponA3","_rWeaponRH","_rWeaponCU","_rWeaponX","_muzzle"];


_unit = _this select 0;

removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeGoggles _unit;


_rMags = 2 + random 6;
sleep 5;






// a3
_rWeaponA3 = [
"srifle_DMR_01_F",
"srifle_DMR_01_DMS_F",
"srifle_EBR_F",
"srifle_GM6_F",
"srifle_LRR_F",
"hgun_ACPC2_F",
"hgunP07_F",
"hgun_Pistol_heavy_01_F",
"hgun_Pistol_heavy_02_F",
"hgun_Rook40_F",
"LMG_Mk200_F",
"LMG_Zafir_F",
"arifle_Katiba_F",
"arifle_Mk20C_F",
"arifle_MXC_F",
"arifle_MX_F",
"arifle_MX_SW_F",
"arifle_MXM_F",
"arifle_MXC_Black_F",
"arifle_MXC_Black_F",
"arifle_MXC_Black_F",
"arifle_MXC_Black_F",
"arifle_MX_Black_F",
"arifle_MX_SW_Black_F",
"arifle_MXM_Black_F",
"arifle_TRG21_F",
"hgun_PDW2000_F",
"hgun_PDW2000_F",
"hgun_PDW2000_Holo_snds_F",
"SMG_01_F",
"SMG_01_Holo_pointer_snds_F",
"SMG_02_F",
"SMG_02_F",
"SMG_02_F",
"SMG_02_F",
"SMG_02_F",
"hgun_ACPC2_F",
"hgunP07_F",
"hgun_Pistol_heavy_01_snds_F",
"hgun_Pistol_heavy_02_F",
"hgun_Rook40_snds_F",
"hgun_Rook40_F",
"hgun_Rook40_F",
"hgun_Rook40_F"] call BIS_fnc_selectRandom;

sleep 5;

// RobertHammer Config
if (isClass(configFile >> "CfgPatches" >> "RH_m4_cfg")) then {
	_rWeaponRH = [
	"RH_m4",
	"RH_m4_m203",
	"RH_m4_ris",
	"RH_m4_ris_m203",
	"RH_m4_ris_m203s", 
	"RH_m4a1_ris",            
	"RH_m4a1_ris_m203",       
	"RH_m4a1_ris_m203s",
	"RH_m4sbr",
	"RH_m4sbr_g",
	"RH_m4sbr_b",
	"RH_m16a1",
	"RH_m16a1gl",
	"RH_m16a2",
	"RH_m16a2gl",
	"RH_m16a3",
	"RH_m16a4",
	"RH_m16a4gl",
	"RH_m16a4_m",
	"RH_mk12mod1",
	"RH_samr",
	"RH_m4m",
	"RH_m4m_g",
	"RH_m4m_b",
	"RH_m4_moe",
	"RH_m4_moe_g",
	"RH_m4_moe_b",
	"RH_m4a6",
	"RH_m16a6",
	"RH_hb",
	"RH_hb_b",
	"RH_hk416",
	"RH_hk416c",
	"RH_hk416s",
	"RH_m27iar",
	"RH_ar10",              
	"RH_mk11",
	"RH_m110",
	"RH_sr25ec",
	"RH_sbr9"] call BIS_fnc_selectRandom;
} else { _rWeaponRH = "hgun_PDW2000_F"; };

sleep 5;

// CUP_Weapons_WeaponsCore
if (isClass(configFile >> "CfgPatches" >> "CUP_Weapons_WeaponsCore")) then {
	_rWeaponCU = [
	"CUP_arifle_AK74",
	"CUP_arifle_AK74M",
	"CUP_arifle_AKS",
	"CUP_arifle_AKS74",
	"CUP_arifle_AKS74U",
	"CUP_arifle_AK107",
	"CUP_arifle_AKM",
	"CUP_arifle_CZ805_A1",
	"CUP_arifle_CZ805_B",
	"CUP_arifle_FNFAL",
	"CUP_arifle_FNFAL_railed",
	"CUP_arifle_G36K",
	"CUP_arifle_G36C",
	"CUP_arifle_L85A2",
	"CUP_arifle_Sa58P",
	"CUP_arifle_Mk16_STD",
	"CUP_arifle_Mk17_CQC",
	"CUP_arifle_Mk20",
	"CUP_arifle_XM8_Carbine",
	"CUP_RPK_74",
	"CUP_lmg_M60A4",
	"CUP_M249",
	"CUP_MG36",
	"CUP_srifle_M24_wdl_LeupoldMk4LRT",
	"CUP_srifle_M40A3",
	"CUP_srifle_M110_ANPVS10",
	"CUP_srifle_SVD_pso",
	"CUP_srifle_LeeEnfield",
	"CUP_srifle_ksvk_PSO3",
	"CUP_sgun_M1014",
	"CUP_sgun_M1014",
	"CUP_sgun_M1014",
	"CUP_sgun_M1014",
	"CUP_smg_bizon_snds",
	"CUP_smg_EVO",
	"CUP_smg_EVO",
	"CUP_smg_EVO",
	"CUP_smg_MP5A5",
	"CUP_smg_MP5A5",
	"CUP_hgun_Colt1911",
	"CUP_hgun_Compact",
	"CUP_hgun_Duty_M3X",
	"CUP_hgun_glock17_flashlight",
	"CUP_hgun_M9",
	"CUP_hgun_M9_snds",
	"CUP_hgun_M9_snds",
	"CUP_hgun_Makarov",
	"CUP_hgun_PB6P9_snds",
	"CUP_hgun_SA61",
	"CUP_hgun_MicroUzi",
	"CUP_hgun_MicroUzi",
	"CUP_hgun_MicroUzi",
	"CUP_hgun_MicroUzi",
	"CUP_hgun_MicroUzi_snds",
	"CUP_hgun_MicroUzi_snds",
	"CUP_UZI_SD_EP1",
	"CUP_UZI_EP1",
	"CUP_UZI_EP1",
	"CUP_UZI_EP1",
	"CUP_UZI_EP1",
	"CUP_UZI_EP1",
	"CUP_UZI_EP1",
	"CUP_UZI_EP1",
	"CUP_UZI_EP1",
	"CUP_hgun_TaurusTracker455",
	"CUP_glaunch_M32",
	"CUP_glaunch_M79",
	"CUP_launch_FIM92Stinger",
	"CUP_launch_9K32Strela"] call BIS_fnc_selectRandom;
} else { _rWeaponCU = "hgun_PDW2000_F"; };



sleep 5;
_rWeaponX = [_rWeaponA3, _rWeaponRH, _rWeaponCU] call BIS_fnc_selectRandom;

sleep 5;
_muzzle = [_unit, _rWeaponX, _rMags] call BIS_fnc_addWeapon;






SOGhasWeapon = true;
//publicVariable "SOGhasWeapon";









sleep 1;
if (VQI_HINTS_CORE == 1) then { hint "randomWeapon_1_any.sqf -END-"; };


/*

nul = [] spawn {   
	while {true} do {    
	hintSilent format["Has weapons: %1 - %2 - %3",primaryWeapon _unit, secondaryWeapon _unit, currentWeapon _unit];
	sleep 0.2;
	};
};

*/
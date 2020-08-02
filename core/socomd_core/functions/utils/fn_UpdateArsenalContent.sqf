#include "\z\ace\addons\arsenal\defines.hpp"
_args = _this;
_player = _args select 0;
_loadoutId = _args select 1;
_unitConfig = _args select 2;
// Custom blacklist not wanted items
_blackList = ["cup_optic_goshawk_ris","cup_acc_glock17_flashlight","acc_flashlight_pistol","hlc_acc_dbalpl_fl","hlc_acc_tlr1","rhsusf_acc_SFMB556", "rhsusf_acc_SF3P556", "rhsusf_acc_anpeq15_light", "acc_flashlight", "FHQ_optic_TWS3050", "optic_tws_mg", "optic_tws", "optic_nvs", "optic_Nightstalker", "UK3CB_BAF_SFFH", "UK3CB_BAF_BFA_L110", "G_Balaclava_blk", "G_Balaclava_combat", "G_Balaclava_lowprofile", "G_Balaclava_oli", "Balaclava_Black", "Kio_Balaclava_hex", "Kio_Balaclava_wcam", "R3F_OB50", "R3F_FELIN_DES", "R3F_FELIN", "Kio_Balaclava_blk", "Kio_Balaclava_blkSkull", "Kio_Balaclava_des", "Kio_Balaclava_grn", "Kio_Balaclava_multicam", "Kio_Balaclava_urbcam", "G_Goggles_VR", "G_Respirator_blue_F", "G_Respirator_white_F", "G_Respirator_yellow_F", "G_EyeProtectors_F", "G_EyeProtectors_Earpiece_F", "G_WirelessEarpiece_F", "VSM_FaceMask_black", "VSM_FaceMask_Ghost", "VSM_FaceMask_Ghost_olive", "VSM_FaceMask_Ghost_tan", "VSM_FaceMask_olive", "VSM_FaceMask_tan", "VSM_FaceMask_black_glasses", "VSM_FaceMask_OD_glasses", "VSM_FaceMask_tan_glasses", "VSM_FaceMask_black_goggles", "VSM_FaceMask_OD_goggles", "VSM_FaceMask_tan_goggles", "VSM_Shemagh_OD", "VSM_Shemagh_tan", "EWK_Cig1", "EWK_Cig2", "EWK_Cig3", "EWK_Cig4", "EWK_Glasses_Cig1", "EWK_Glasses_Cig2", "EWK_Glasses_Cig3", "EWK_Glasses_Cig4", "EWK_Cigar1", "EWK_Cigar2", "EWK_CigPack_Helmet", "EWK_CigPack_Helmet_OCP", "EWK_CigPack_Helmet2", "EWK_CigPack_Helmet2_OCP", "EWK_Glasses_Shemag_GRE_Cig6", "EWK_Glasses_Shemag_NB_Cig6", "EWK_Glasses_Shemag_tan_Cig6", "EWK_Shemag_tan_Cig6", "EWK_Shemag_NB_Cig6", "EWK_Shemag_GRE_Cig6", "EWK_Shemag_LULZ", "EWK_Shemag_GRE", "EWK_Shemag_tan", "EWK_Shemag_NB", "CUP_SSO_Balaclava_blk", "CUP_SSO_Balaclava_grn", "VSM_Shemagh_Facemask_OD", "VSM_Shemagh_Facemask_tan", "VSM_Shemagh_Facemask_OD_Glasses", "VSM_Shemagh_Facemask_tan_Glasses", "VSM_Shemagh_Facemask_OD_Goggles", "VSM_Shemagh_Facemask_tan_Goggles", "VSM_Shemagh_Facemask_OD_Peltor", "VSM_Shemagh_Facemask_tan_Peltor", "VSM_Shemagh_Facemask_OD_Peltor_Glasses", "VSM_Shemagh_Facemask_tan_Peltor_Glasses", "VSM_Shemagh_Facemask_OD_Peltor_Goggles", "VSM_Shemagh_Facemask_tan_Peltor_Goggles", "VSM_Shemagh_Glasses_OD", "VSM_Shemagh_Glasses_tan", "VSM_Shemagh_Goggles_OD", "VSM_Shemagh_Goggles_tan", "VSM_SkiMask_Black", "G_Lady_Blue", "50Suppressor_ej", "CUP_PMC_Facewrap_Black", "CUP_G_PMC_Facewrap_Black_Glasses_Dark_Headset", "CUP_G_PMC_Facewrap_Black_Glasses_Dark", "CUP_G_PMC_Facewrap_Black_Glasses_Ember", "CUP_PMC_Facewrap_Red", "CUP_PMC_Facewrap_Ranger", "CUP_PMC_Facewrap_Skull", "CUP_PMC_Facewrap_Smilie", "CUP_PMC_Facewrap_Tan", "CUP_G_PMC_Facewrap_Tan_Glasses_Dark_Headset", "CUP_G_PMC_Facewrap_Tan_Glasses_Dark", "CUP_G_PMC_Facewrap_Tan_Glasses_Ember", "CUP_PMC_Facewrap_Tropical", "CUP_G_PMC_Facewrap_Tropical_Glasses_Dark_Headset", "CUP_G_PMC_Facewrap_Tropical_Glasses_Dark", "CUP_G_PMC_Facewrap_Tropical_Glasses_Ember", "CUP_PMC_Facewrap_Winter", "CUP_G_PMC_Facewrap_Winter_Glasses_Dark_Headset", "CUP_G_PMC_Facewrap_Winter_Glasses_Dark", "CUP_G_PMC_Facewrap_Winter_Glasses_Ember", "CUP_PMC_G_thug", "CUP_FR_NeckScarf4", "CUP_optic_AN_PAS_13c1", "CUP_optic_AN_PAS_13c2", "CUP_optic_AN_PVS_10", "CUP_optic_AN_PVS_4", "CUP_optic_CWS", "CUP_optic_goshawk_ris", "RH_anpvs4", "RH_pas13ch", "RH_pas13cm", "RH_pas13cmg", "RH_pas13cl", "CUP_acc_ANPEQ_15", "CUP_acc_ANPEQ_15_Black", "CUP_acc_ANPEQ_15_OD", "CUP_acc_ANPEQ_2", "CUP_acc_Flashlight", "CUP_acc_Flashlight_wdl", "CUP_acc_Flashlight_desert", "CUP_acc_XM8_light_module", "CUP_acc_ANPEQ_2_camo", "CUP_acc_ANPEQ_2_desert", "CUP_acc_ANPEQ_2_grey", "CUP_acc_CZ_M3X", "CUP_acc_MLPLS_Laser", "CUP_acc_LLM", "CUP_muzzle_mfsup_Flashhider_West_Base", "CUP_muzzle_mfsup_Flashhider_556x45_Black", "CUP_muzzle_mfsup_Flashhider_556x45_OD", "CUP_muzzle_mfsup_Flashhider_556x45_Tan", "CUP_muzzle_mfsup_Flashhider_762x51_Black", "CUP_muzzle_mfsup_Flashhider_762x51_OD", "CUP_muzzle_mfsup_Flashhider_762x51_Tan", "acc_pointer_IR", "acc_flashlight", "RH_peq15", "RH_peq15_top", "RH_peq15b", "RH_peq15b_top", "ACE_acc_pointer_green"];

// Loudout Specific
_vests_tl = [
    "lbt_tl_coy",
    "lbt_tl_mc",
    "lbt_tl_amcu"
];
_vests_comms =[
    "lbt_comms_coy",
    "lbt_comms_mc",
    "lbt_comms_amcu"
];
_vests_weapons = [
    "lbt_weapons_coy",
    "lbt_weapons_mc",
    "lbt_weapons_amcu"
];
_vests_med = [
    "lbt_medical_coy",
    "lbt_medical_mc",
    "lbt_medical_amcu"
];
_Backpack_Leader = [
    "SOG_BAG_recon_MC",
    "SOG_BAG_recon_Tan",
    "Kit_Bag_R_MC",
    "SOG_BAG_recon_od",
    "Kit_Bag_R_od",
    "Kit_Bag_R_Tan"
];
_Backpack_Sapper = [
    "Kit_Bag_pince_TAN",
    "SOG_BAG_BREACHER_tan",
    "Kit_Bag_pince_mc",
    "SOG_BAG_BREACHER_MC",
    "Kit_Bag_pince_od",
    "SOG_BAG_BREACHER_od"
];
_Backpack_Medic = [
    "SOG_BAG_med_tan",
    "SOG_BAG_med_MC",
    "SOG_BAG_med_od"
];
_general_rifle = [
    // "ACWP_M4A5_145_ris_base",
    // "ACWP_M4A5_145_troy_AFG",
    // "ACWP_M4A5_145_troy_tango",
    // "ACWP_M4A5_145_troy_MOD3",
    // "ACWP_M4A5_105_troy_AFG",
    // "ACWP_M4A5_105_troy_tango",
    // "ACWP_M4A5_105_troy_MOD3",
    // "ACWP_M4A5_145_troy_AFG_TAN",
    // "ACWP_M4A5_145_troy_Tango_TAN",
    // "ACWP_M4A5_105_troy_AFG_TAN",
    // "ACWP_M4A5_105_troy_Tango_TAN",
    // "ACWP_M4A5_145_troy_AFG_DON",
    // "ACWP_M4A5_145_troy_Tango_DON",
    // "ACWP_M4A5_105_troy_AFG_DON",
    // "ACWP_M4A5_105_troy_Tango_DON",
    // "ACWP_M4A5_145_troy_AFG_NET",
    // "ACWP_M4A5_145_troy_Tango_NET",
    // "ACWP_M4A5_105_troy_AFG_NET",
    // "ACWP_M4A5_105_troy_Tango_NET",
    // "ACWP_M4A5_145_troy_MOD3_TAN",
    // "ACWP_M4A5_145_troy_MOD3_DON",
    // "ACWP_M4A5_145_troy_MOD3_NET",
    // "ACWP_M4A5_105_troy_MOD3_NET",
    // "ACWP_M4A5_105_troy_MOD3_DON",
    // "ACWP_M4A5_105_troy_MOD3_TAN",

    
    "ACWP_M4A5_145_troy_base",
    "ACWP_M4A5_105_troy_base",
    "ACWP_M4A5_145_troy_base_DON",
    "ACWP_M4A5_105_troy_base_DON",
    "ACWP_M4A5_145_troy_base_NET",
    "ACWP_M4A5_105_troy_base_NET",
    "ACWP_M4A5_145_troy_base_TAN",
    "ACWP_M4A5_105_troy_base_TAN",
    "ACWP_M4A5_145_troy_ROE",
    "ACWP_M4A5_105_troy_ROE",
    "ACWP_M4A5_105_troy_ROE_DON",
    "ACWP_M4A5_145_troy_ROE_DON",
    "ACWP_M4A5_105_troy_ROE_NET",
    "ACWP_M4A5_145_troy_ROE_NET",
    "ACWP_M4A5_105_troy_ROE_TAN",
    "ACWP_M4A5_145_troy_ROE_TAN",
    "ACWP_M4A5_145_troy_KAG",
    "ACWP_M4A5_105_troy_KAG",
    "ACWP_M4A5_145_troy_KAG_TAN",
    "ACWP_M4A5_105_troy_KAG_TAN",
    "ACWP_M4A5_145_troy_KAG_DON",
    "ACWP_M4A5_105_troy_KAG_DON",
    "ACWP_M4A5_145_troy_KAG_NET",
    "ACWP_M4A5_105_troy_KAG_NET",
    "SMA_MK18MOEBLK_SM",
    "SMA_MK18MOETAN_SM",
    "SMA_MK18MOEOD_SM",
    "SMA_AUG_A3_F",
    "SMA_AUG_A3_KRYPT_F",
    "SMA_AUG_A3_MCAM_F",
    "ACWP_HK416_base",
    "ACWP_HK416D_105_tan",
    "ACWP_HK416D_105_don",
    "ACWP_HK416D_105_AFG",
    "ACWP_HK416D_105_AFG_tan",
    "ACWP_HK416D_105_AFG_don"
];
_556_rifle_gl = [
    "SMA_M4_GL_SM",
    "SMA_MK18BLK_GL_SM",
    "SMA_MK18TAN_GL_SM",
    "SMA_MK18OD_GL_SM",
    "SMA_AUG_EGLM",
    "SMA_AUG_EGLM_tan",
    "SMA_AUG_EGLM_Olive",
    "hlc_rifle_416D10_gl",
    "hlc_rifle_416D10_tan_gl",
    "hlc_rifle_416D10_wdl_gl",
    "CUP_arifle_M16A4_GL"
];
_machine_gun = [
    "CUP_lmg_L110A1_railed",
    "CUP_lmg_minimi_railed",
    "CUP_lmg_Mk48_nohg",
    "CUP_lmg_Mk48_nohg_des",
    "CUP_lmg_Mk48_nohg_tan",
    "CUP_lmg_Mk48_nohg_wdl"
];
_marksman = [
    "SPARTAN_EBR_black_F",
    "SPARTAN_EBR_snake_F",
    "SMA_HK417_16in",
    "S_kio_sr25",
    "S_kio_sr25_camo",
    "S_kio_sr25_ec",
    "S_kio_sr25_ec_camo"
];
_sniper = [
    "Recon_Barret",
    "Recon_338",
    "Recon_300WM"
];
_launchers = [
    "HAFM_LAW",
    "SOCOMD_Carl_Gustav"
];
// Common loudout options between classes
_worldType = worldName call SOCOMD_fnc_GetWorldType;
_uniforms = [];
if( _worldType == 'Arid' ) then {
	_uniforms = ["SOCOMD_Uniform_SleevesDown","SOCOMD_Uniform_SleevesUp","SOCOMD_Tee_uniform"];
} else {
_uniforms = ["SOCOMD_Uniform_AMCU_SleevesDown","SOCOMD_Uniform_AMCU_SleevesUp", "SOCOMD_Tee_AMCU_uniform"];	
};
_reconUniforms = ["SOCOMD_Uniform_AMCU_SleevesDown_Recon", "SOCOMD_Uniform_SleevesDown_Recon"];
_bags = ["KIT_BAG_mc","KIT_BAG_OD","KIT_BAG_TAN","SOG_BAG_tan","SOG_BAG_od","SOG_BAG_MC"];
_helmets = ["VSM_Bowman","VSM_Bowman_cap_Black","VSM_Bowman_cap_Green","VSM_Bowman_cap_Tan","ADFU_H_Airframe_02_tan","ADFU_H_Airframe_Cover_02_MC","ADFU_H_Airframe_02_AMCU","H_Watchcap_blk","H_Watchcap_cbr","CUP_H_RUS_Bandana_HS","H_Bandanna_sgg","H_Bandanna_sand","AU_03_780000_v1","H_Booniehat_mgrn","H_Booniehat_tan","H_Booniehat_khk","ADFU_Booniehat_MC","ADFU_Cap_MC","H_Cap_oli","CUP_H_PMC_Cap_Tan","ADFU_H_OpsCore_02_MC","ADFU_H_OpsCore_02_TAN","SOCOMD_Aus_Boonie_AMC","SOCOMD_Aus_Boonie"];

_secondaries = [
    "DSO_hgun_Pistol_heavy_01_blk_F",
    "ACWP_USP",
    "ACWP_HP",
    "acwp_glock17"
    ];
// accesories and facewear blacklist check
_configClasses = "(getNumber (_x >> 'scope') >= 2)" configClasses (configFile >> "CfgGlasses");
_facewear = [];
{
	if !(configName _x in _blackList) then
	{
		_facewear pushBack (configName _x);
	};
} forEach _configClasses;
// 101, muzzle devices
// 201, optics
// 301, laser/flashlights
// 302, items & bipods, bipods must be seperated by config attribute "hasBipod"
_configAcc = "getNumber (_x >> 'ItemInfo' >> 'type') in [101,301] and getNumber (_x >> 'scope') == 2" configClasses (configFile >> "CfgWeapons");
_configBipods = "getNumber (_x >> 'ItemInfo' >> 'type') in [302] and getNumber (_x >> 'ItemInfo' >> 'hasBipod')  == 1 and getNumber (_x >> 'scope') == 2" configClasses (configFile >> "CfgWeapons");
_configOptics = "getNumber (_x >> 'ItemInfo' >> 'type') in [201] and getNumber (_x >> 'scope') == 2" configClasses (configFile >> "CfgWeapons");
_accessories = [];
// filters optics, skips if recon class
{
	_scopeFOVBlacklisted =  [configName _x, []] call SOCOMD_fnc_ASORGS_CheckScopeFOV;
    if( _scopeFOVBlacklisted == 0  && !(configName _x in _blackList ) && _loadoutId != "SOCOMD_Recon") then {
		_accessories pushBack (configName _x);
    };
} forEach _configOptics;
// filters lasers and muzzle devices
{
	if !(configName _x in _blackList) then
	{
		_accessories pushBack (configName _x);
	};
} forEach _configAcc;
// filters bipods
{
	if !(configName _x in _blackList) then
	{
		_accessories pushBack (configName _x);
	};
} forEach _configBipods;
// clears player's existing arsenal
[_player, true, false] call ace_arsenal_fnc_removeVirtualItems;

_configWeapons = "(getNumber (_x >> 'scope') >= 2)" configClasses (configFile >> "CfgWeapons");

_loadOut = [];
_loadOut append _helmets;
_loadOut append _facewear;
_loadOut append _uniforms;
_loadOut append _bags;
_loadOut append _secondaries;

// Adds new arsenal items to player
[_player, _loadOut, false] call ace_arsenal_fnc_addVirtualItems;
// [_player, _configWeapons, false] call ace_arsenal_fnc_removeVirtualItems;
[_player, _accessories, false] call ace_arsenal_fnc_addVirtualItems;

// Adds kit specific gear
if( _loadoutId ==  "SOCOMD_Commander" || _loadoutId ==  "SOCOMD_2IC" || _loadoutId ==  "SOCOMD_Leader") then  {
    _sc_array = [];
    _sc_array append _vests_comms;
    _sc_array append _vests_weapons;
    _sc_array append _general_rifle;
    _sc_array append _556_rifle_gl;
    _sc_array append _Backpack_Leader;
    [_player, _sc_array, false] call ace_arsenal_fnc_addVirtualItems;
};
if( _loadoutId ==  "SOCOMD_Rifleman" || _loadoutId ==   "SOCOMD_AT_Assistant" ) then  {
    _sr_arrtay = [];
    _sr_arrtay append _vests_tl;
    _sr_arrtay append _general_rifle;
    [_player, _sr_arrtay, false] call ace_arsenal_fnc_addVirtualItems;
};
if( _loadoutId ==  "SOCOMD_Marksman") then  {
    _sm_array = [];
    _sm_array append _vests_tl;
    _sm_array append _marksman;
    _sm_array append getArray(_unitConfig >> "optics");
    [_player, _sm_array, false] call ace_arsenal_fnc_addVirtualItems;
};
if( _loadoutId ==  "SOCOMD_Sapper") then  {
    _ss_array = [];
    _ss_array append _vests_tl;
    _ss_array append _general_rifle;
    _ss_array append _Backpack_Sapper;
    [_player, _ss_array, false] call ace_arsenal_fnc_addVirtualItems;
};
if( _loadoutId ==  "SOCOMD_MachineGunner") then  {
    _smg_array = [];
    _smg_array append _vests_comms;
    _smg_array append _machine_gun;
    [_player, _smg_array, false] call ace_arsenal_fnc_addVirtualItems;
};
if( _loadoutId ==  "SOCOMD_Medic") then  {
    _smed_array = [];
    _smed_array append _vests_med;
    _smed_array append _general_rifle;
    _smed_array append _Backpack_Medic;
    [_player, _smed_array, false] call ace_arsenal_fnc_addVirtualItems;
};
if( _loadoutId ==  "SOCOMD_AT") then  {
    _sat_array = [];
    _sat_array append _vests_tl;
    _sat_array append _general_rifle;
    _sat_array append _launchers;
    [_player, _sat_array, false] call ace_arsenal_fnc_addVirtualItems;
};
// Support Kits 
if( _loadoutId ==  "SOCOMD_Pilot") then  {
    _sp_array = [];
    _sp_array append _vests_tl;
    _sp_array append ["SOLS_tshirt"]; 
    [_player, _helmets, false] call ace_arsenal_fnc_removeVirtualItems;  
    [_player, _sp_array, false] call ace_arsenal_fnc_addVirtualItems;
};
if( _loadoutId ==  "SOCOMD_Crewman") then  {
    _scr_array = [];
    _scr_array append _vests_tl;
    _scr_array append ["SOLS_tshirt"];
    [_player, _helmets, false] call ace_arsenal_fnc_removeVirtualItems;  
    [_player, _scr_array, false] call ace_arsenal_fnc_addVirtualItems;
};
if( _loadoutId ==  "SOCOMD_Logistician") then  {
    _sl_array = [];
    _sl_array append _vests_tl;
    _sl_array append _general_rifle;
    _sl_array append ["SOLS_tshirt"];
    [_player, _sl_array, false] call ace_arsenal_fnc_addVirtualItems;
};
if( _loadoutId ==  "SOCOMD_Recon") then  {
    _src_array = [];
    _src_array append _vests_tl;
    _src_array append _sniper;
    _src_array append _reconUniforms;
    _src_array append _Backpack_Leader;
    _src_array append getArray(_unitConfig >> "optics");
    [_player, _uniforms, false] call ace_arsenal_fnc_removeVirtualItems;    
    [_player, _configOptics, false] call ace_arsenal_fnc_removeVirtualItems;
    [_player, _src_array, false] call ace_arsenal_fnc_addVirtualItems;
};
if( _loadoutId ==  "SOCOMD_Recon_Assistant") then  {
    _sra_array = [];
    _sra_array append _vests_tl;
    _sra_array append _general_rifle;
    _sra_array append _marksman;
    _sra_array append _reconUniforms;
    _sra_array append _Backpack_Leader;
    _sra_array append getArray(_unitConfig >> "optics");
    [_player, _uniforms, false] call ace_arsenal_fnc_removeVirtualItems;
    [_player, _configOptics, false] call ace_arsenal_fnc_removeVirtualItems; 
    [_player, _sra_array, false] call ace_arsenal_fnc_addVirtualItems;
};

// arsenal Event Handlers

// removes old event handlers if exist

_isPrevInit = player getVariable ["SOCOMD_eh_ids","failed"];

if ( typeName _isPrevInit == "ARRAY") then {
    ["ace_arsenal_displayOpened", _isPrevInit select 0] call CBA_fnc_removeEventHandler;
    ["ace_arsenal_rightPanelFilled", _isPrevInit select 1] call CBA_fnc_removeEventHandler;
    ["ace_arsenal_displayClosed", _isPrevInit select 2] call CBA_fnc_removeEventHandler;
};

_openedEh = ["ace_arsenal_displayOpened", {
    player setVariable ["SOCOMD_prev_primary", primaryWeapon player]
    params ["_display"];
    
    _disabledButtons = [
        2018,   // IDC_buttonNVG 
        2020,   // IDC_buttonBinoculars 
        2022,   // IDC_buttonMap 
        2024,   // IDC_buttonGPS 
        2026,   // IDC_buttonRadio 
        2029,   // IDC_buttonCompass 
        2031,   // IDC_buttonWatch 
        2033,   // IDC_buttonFace 
        2035,   // IDC_buttonVoice 
        3002,   // IDC_buttonCurrentMag
        3004,   // IDC_buttonCurrentMag2
        1003,   // IDC_buttonLoadouts 
        1004,   // IDC_buttonExport 
        1005,   // IDC_buttonImport 
        307,    // IDC_buttonDelete 
        30,     // IDC_buttonMag
        32,     // IDC_buttonMagALL
        34,     // IDC_buttonThrow
        36,     // IDC_buttonPut
        38,     // IDC_buttonMisc
        39,     // IDC_buttonRemoveAllSelected
        40      // IDC_buttonRemoveAll
    ];
    {
        private _ctrl = _display displayctrl _x;
        _ctrl ctrlEnable false;
        _ctrl ctrlSetFade 0.6;
        _ctrl ctrlCommit 0;
        
    } forEach _disabledButtons;
    
}] call CBA_fnc_addEventHandler;
_removedRight = ["ace_arsenal_rightPanelFilled", { 
    _currentTab = currentNamespace getVariable "ace_arsenal_currentLeftPanel";
    switch(_currentTab) do {
        case 2010 :{ // uniform panel
           TOGGLE_RIGHT_PANEL_HIDE
        };
        case 2012 :{ // vest panel
           TOGGLE_RIGHT_PANEL_HIDE
        };
        case 2014 :{ // backpack panel
            TOGGLE_RIGHT_PANEL_HIDE
        };
    };
}] call CBA_fnc_addEventHandler;
_closedEh = ["ace_arsenal_displayClosed", {
    // for some reason using _player inside here doesnt work. Done in this order so primary weapon is out last
    [player, secondaryWeapon player] call SOCOMD_fnc_SwitchUnitSecondaryWeapon;
    [player, handgunWeapon player] call SOCOMD_fnc_SwitchUnitHandgunWeapon;
    [player, primaryWeapon player] call SOCOMD_fnc_SwitchUnitPrimaryWeapon;
}] call CBA_fnc_addEventHandler;
player setVariable ["SOCOMD_eh_ids", [_openedEh, _removedRight, _closedEh]];
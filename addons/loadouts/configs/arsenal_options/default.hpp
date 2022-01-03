// all options goes into a macro to be added into a class
// class must have the same name as the loudout cfg
// isLogi is used for pilots and crewmen who don't need grenade options. eg: isLogi = 1;
// extraUniforms used for classes that need specialist uniforms like recon. Uniforms all defined in own class. eg: extraUniforms = "recon_uniforms";
// arsenalExtras used for those who need extra arsenal equipment like rifleman. options defined in role class eg arsenalExtras[] = {"myExtra","myExtra2"};

#define GENERAL_RIFLE \
    "ACWP_HK416D_105_base",\
    "ACWP_HK416D_105_tan",\
    "ACWP_HK416D_105_don",\
    "ACWP_HK416D_105_AFG",\
    "ACWP_HK416D_105_AFG_tan",\
    "ACWP_HK416D_105_AFG_don",\
    "ACWP_HK416D_105_CTR_don",\
    "ACWP_HK416D_105_CTR_AFG_don",\
    "ACWP_HK416D_105_CTR_tan",\
    "ACWP_HK416D_105_CTR_AFG_tan",\
    "ACWP_HK416D_105_CTR_base",\
    "ACWP_HK416D_105_CTR_AFG",\
    "ACWP_M4A5_105_troy_base",\
    "ACWP_M4A5_105_troy_base_DON",\
    "ACWP_M4A5_105_troy_base_NET",\
    "ACWP_M4A5_145_troy_base",\
    "ACWP_M4A5_145_troy_base_DON",\
    "ACWP_M4A5_145_troy_base_NET",\
    "ACWP_M4A5_145_troy_base_TAN",\
    "ACWP_M4A5_105_troy_base_TAN",\
    "ACWP_M4A5_145_troy_ROE",\
    "ACWP_M4A5_145_troy_ROE_DON",\
    "ACWP_M4A5_145_troy_ROE_NET",\
    "ACWP_M4A5_145_troy_ROE_TAN",\
    "ACWP_M4A5_145_troy_KAG",\
    "ACWP_M4A5_145_troy_KAG_TAN",\
    "ACWP_M4A5_145_troy_KAG_DON",\
    "ACWP_M4A5_145_troy_KAG_NET",\
    "ACWP_M4A5_145_troy_AFG",\
    "ACWP_M4A5_145_troy_tango",\
    "ACWP_M4A5_145_troy_MOD3",\
    "ACWP_M4A5_105_troy_AFG",\
    "ACWP_M4A5_105_troy_tango",\
    "ACWP_M4A5_105_troy_MOD3",\
    "ACWP_M4A5_145_troy_AFG_TAN",\
    "ACWP_M4A5_145_troy_Tango_TAN",\
    "ACWP_M4A5_105_troy_AFG_TAN",\
    "ACWP_M4A5_105_troy_Tango_TAN",\
    "ACWP_M4A5_145_troy_AFG_DON",\
    "ACWP_M4A5_145_troy_Tango_DON",\
    "ACWP_M4A5_105_troy_AFG_DON",\
    "ACWP_M4A5_105_troy_Tango_DON",\
    "ACWP_M4A5_145_troy_AFG_NET",\
    "ACWP_M4A5_145_troy_Tango_NET",\
    "ACWP_M4A5_105_troy_AFG_NET",\
    "ACWP_M4A5_105_troy_Tango_NET",\
    "ACWP_M4A5_145_troy_MOD3_TAN",\
    "ACWP_M4A5_145_troy_MOD3_DON",\
    "ACWP_M4A5_145_troy_MOD3_NET",\
    "ACWP_M4A5_105_troy_MOD3_NET",\
    "ACWP_M4A5_105_troy_MOD3_DON",\
    "ACWP_M4A5_105_troy_MOD3_TAN",\
    "ACWP_M4A5_105_troy_ROE",\
    "ACWP_M4A5_105_troy_ROE_DON",\
    "ACWP_M4A5_105_troy_ROE_NET",\
    "ACWP_M4A5_105_troy_ROE_TAN",\
    "ACWP_M4A5_105_troy_KAG",\
    "ACWP_M4A5_105_troy_KAG_DON",\
    "ACWP_M4A5_105_troy_KAG_NET",\
    "ACWP_M4A5_105_troy_KAG_TAN",\
    "ACWP_M4A5_105_troy_base_BLK",\
    "ACWP_M4A5_105_troy_base_BLK_DON",\
    "ACWP_M4A5_105_troy_base_BLK_NET",\
    "ACWP_M4A5_145_troy_base_BLK",\
    "ACWP_M4A5_145_troy_base_BLK_DON",\
    "ACWP_M4A5_145_troy_base_BLK_NET",\
    "ACWP_M4A5_145_troy_base_BLK_TAN",\
    "ACWP_M4A5_105_troy_base_BLK_TAN",\
    "ACWP_M4A5_145_troy_ROE_blk",\
    "ACWP_M4A5_145_troy_ROE_BLK_DON",\
    "ACWP_M4A5_145_troy_ROE_BLK_NET",\
    "ACWP_M4A5_145_troy_ROE_BLK_TAN",\
    "ACWP_M4A5_145_troy_KAG_BLK",\
    "ACWP_M4A5_145_troy_KAG_BLK_TAN",\
    "ACWP_M4A5_145_troy_KAG_BLK_DON",\
    "ACWP_M4A5_145_troy_KAG_BLK_NET",\
    "ACWP_M4A5_145_troy_afg_BLK",\
    "ACWP_M4A5_145_troy_tango_BLK",\
    "ACWP_M4A5_145_troy_MOD3_BLK",\
    "ACWP_M4A5_105_troy_afg_BLK",\
    "ACWP_M4A5_105_troy_tango_BLK",\
    "ACWP_M4A5_105_troy_MOD3_BLK",\
    "ACWP_M4A5_145_troy_afg_BLK_TAN",\
    "ACWP_M4A5_145_troy_tango_BLK_TAN",\
    "ACWP_M4A5_105_troy_afg_BLK_TAN",\
    "ACWP_M4A5_105_troy_tango_BLK_TAN",\
    "ACWP_M4A5_145_troy_afg_BLK_DON",\
    "ACWP_M4A5_145_troy_tango_BLK_DON",\
    "ACWP_M4A5_105_troy_afg_BLK_DON",\
    "ACWP_M4A5_105_troy_tango_BLK_DON",\
    "ACWP_M4A5_145_troy_afg_BLK_NET",\
    "ACWP_M4A5_145_troy_tango_BLK_NET",\
    "ACWP_M4A5_105_troy_afg_BLK_NET",\
    "ACWP_M4A5_105_troy_tango_BLK_NET",\
    "ACWP_M4A5_145_troy_MOD3_BLK_TAN",\
    "ACWP_M4A5_145_troy_MOD3_BLK_DON",\
    "ACWP_M4A5_145_troy_MOD3_BLK_NET",\
    "ACWP_M4A5_105_troy_MOD3_BLK_NET",\
    "ACWP_M4A5_105_troy_MOD3_BLK_DON",\
    "ACWP_M4A5_105_troy_MOD3_BLK_TAN",\
    "ACWP_M4A5_105_troy_ROE_blk",\
    "ACWP_M4A5_105_troy_ROE_BLK_DON",\
    "ACWP_M4A5_105_troy_ROE_BLK_NET",\
    "ACWP_M4A5_105_troy_ROE_BLK_TAN",\
    "ACWP_M4A5_105_troy_KAG_BLK",\
    "ACWP_M4A5_105_troy_KAG_BLK_DON",\
    "ACWP_M4A5_105_troy_KAG_BLK_NET",\
    "ACWP_M4A5_145_ris_base",\
    "ACWP_M4A5_145_ris_ROE",\
    "ACWP_M4A5_145_ris_afg",\
    "ACWP_M4A5_145_ris_tango",\
    "ACWP_M4A5_145_ris_kag",\
    "ACWP_M4A5_145_ris_base_DON",\
    "ACWP_M4A5_145_ris_ROE_DON",\
    "ACWP_M4A5_145_ris_afg_DON",\
    "ACWP_M4A5_145_ris_tango_DON",\
    "ACWP_M4A5_145_ris_kag_DON",\
    "ACWP_M4A5_145_ris_base_tan",\
    "ACWP_M4A5_145_ris_ROE_tan",\
    "ACWP_M4A5_145_ris_afg_tan",\
    "ACWP_M4A5_145_ris_tango_tan",\
    "ACWP_M4A5_145_ris_kag_tan",\
    "ACWP_M4A5_145_ris_base_NET",\
    "ACWP_M4A5_145_ris_ROE_NET",\
    "ACWP_M4A5_145_ris_afg_NET",\
    "ACWP_M4A5_145_ris_tango_NET",\
    "ACWP_M4A5_145_ris_kag_NET"

#define SOLS_RIFLES \
    QUOTE(ITEM_PRIMARY_SMG),\
    "ACWP_M4A5_145_ris_base",\
    "ACWP_M4A5_145_ris_ROE",\
    "ACWP_M4A5_145_ris_afg",\
    "ACWP_M4A5_145_ris_tango",\
    "ACWP_M4A5_145_ris_kag",\
    "ACWP_M4A5_145_ris_base_DON",\
    "ACWP_M4A5_145_ris_ROE_DON",\
    "ACWP_M4A5_145_ris_afg_DON",\
    "ACWP_M4A5_145_ris_tango_DON",\
    "ACWP_M4A5_145_ris_kag_DON",\
    "ACWP_M4A5_145_ris_base_tan",\
    "ACWP_M4A5_145_ris_ROE_tan",\
    "ACWP_M4A5_145_ris_afg_tan",\
    "ACWP_M4A5_145_ris_tango_tan",\
    "ACWP_M4A5_145_ris_kag_tan",\
    "ACWP_M4A5_145_ris_base_NET",\
    "ACWP_M4A5_145_ris_ROE_NET",\
    "ACWP_M4A5_145_ris_afg_NET",\
    "ACWP_M4A5_145_ris_tango_NET",\
    "ACWP_M4A5_145_ris_kag_NET"
    
#define GL_RIFLE \
    "SMA_MK18BLK_GL_SM",\
    "SMA_MK18TAN_GL_SM",\
    "SMA_MK18OD_GL_SM",\
    "ACWP_M4A5_145_7rail_GL",\
    "ACWP_M4A5_145_7rail_GL_GRIP",\
    "ACWP_M4A5_145_7rail_GL_NET",\
    "ACWP_M4A5_145_7rail_GL_GRIP_NET",\
    "ACWP_M4A5_145_7rail_GL_TAN",\
    "ACWP_M4A5_145_7rail_GL_GRIP_TAN",\
    "ACWP_M4A5_145_7rail_GL_DON",\
    "ACWP_M4A5_145_7rail_GL_GRIP_DON",\
    "1Rnd_HE_Grenade_shell",\
    "UGL_FlareRed_F",\
    "1Rnd_SmokeRed_Grenade_shell",\
    "ACE_HuntIR_M203"

#define MACHINE_GUN \
    QUOTE(ITEM_PRIMARY_MACHINEGUN),\
    QUOTE(ITEM_PRIMARY_MACHINEGUN_762),\
    QUOTE(ITEM_PRIMARY_MACHINEGUN_GPMG),\
    QUOTE(ITEM_MAGAZINE_556_BELT),\
    QUOTE(ITEM_MAGAZINE_762_BELT),\
    QUOTE(ITEM_MAGAZINE_GPMG_BELT)

#define MARKSMAN \
    "SPARTAN_EBR_black_F",\
    "SPARTAN_EBR_snake_F",\
    "ACWP_sr25",\
    "ACWP_sr25_camo",\
    "ACWP_sr25_ec",\
    "ACWP_sr25_ec_camo",\
    "ACWP_sr25_VFG",\
    "ACWP_sr25_VFG_camo",\
    QUOTE(ITEM_MAGAZINE_762)

#define SNIPER \
    "rhs_weap_m82a1",\
    "Recon_338",\
    "Recon_300WM",\
    "bnae_falkor_camo1_virtual",\
    "bnae_falkor_blk_virtual",\
    "bnae_falkor_snd_virtual",\
    "bnae_trg42_virtual",\
    "bnae_trg42_camo1_virtual",\
    "bnae_trg42_camo2_virtual",\
    "bnae_trg42_f_virtual",\
    "bnae_trg42_f_camo1_virtual",\
    "bnae_trg42_f_mmrs_virtual",\
    "bnae_trg42_f_mmrs_camo1_virtual",\
    "5Rnd_338LM_Magazine",\
    "5Rnd_APDS_338LM_Magazine",\
    "hlc_5rnd_300WM_FMJ_AWM",\
    "10Rnd_300WM_Magazine"

#define LAUNCHERS \
    "rhs_weap_m72a7",\
    QUOTE(ITEM_DEFAULT_LAUNCHER),\
    "rhs_mag_maaws_HEAT",\
    "rhs_mag_maaws_HE"

#define HANDGUNS  \
    "DSO_hgun_Pistol_heavy_01_blk_F",\
    "ACWP_USP",\
    "ACWP_USP_TBRK",\
    "ACWP_USP_TAN",\
    "ACWP_HP_ba",\
    "acwp_glock17_black",\
    "acwp_glock19_black",\
    "acwp_glock19_sim",\
    "acwp_glock19_hlmnd",\
    "ACWP_18Rnd_9x21_Mag_USP",\
    "ACWP_13Rnd_9x21_Mag_HP",\
    "ACWP_19Rnd_9x21_Mag_glock",\
    "ACWP_19Rnd_9x21_Mag_glock_sim",\
    "11Rnd_45ACP_Mag"

#define HELMETS \
    "acwp_airframe_mc_ct3_light_strap",\
    "acwp_airframe_mc_ct3_light",\
    "acwp_airframe_mc_light_strap",\
    "acwp_airframe_mc_light",\
    "acwp_airframe_mc_ct3_light_black_strap",\
    "acwp_airframe_mc_ct3_light_black",\
    "acwp_airframe_mc_light_black_strap",\
    "acwp_airframe_mc_light_black",\
    "acwp_airframe_mc_ct3_strap",\
    "acwp_airframe_mc_ct3",\
    "acwp_airframe_mc_strap",\
    "acwp_airframe_mc",\
    "acwp_airframe_amcu_ct3_light_strap",\
    "acwp_airframe_amcu_ct3_light",\
    "acwp_airframe_amcu_light_strap",\
    "acwp_airframe_amcu_light",\
    "acwp_airframe_amcu_ct3_light_black_strap",\
    "acwp_airframe_amcu_ct3_light_black",\
    "acwp_airframe_amcu_light_black_strap",\
    "acwp_airframe_amcu_light_black",\
    "acwp_airframe_amcu_ct3_strap",\
    "acwp_airframe_amcu_ct3",\
    "acwp_airframe_amcu_strap",\
    "acwp_airframe_amcu",\
    "H_Watchcap_blk",\
    "H_Watchcap_cbr",\
    "H_Bandanna_sgg",\
    "H_Bandanna_sand",\
    "AU_03_780000_v1",\
    "H_Booniehat_mgrn",\
    "H_Booniehat_tan",\
    "H_Booniehat_khk",\
    "ADFU_Booniehat_MC",\
    "ADFU_Cap_MC",\
    "H_Cap_oli",\
    "ADFU_H_OpsCore_02_MC",\
    "ADFU_H_OpsCore_02_TAN",\
    "SOCOMD_Aus_Boonie_AMC",\
    "SOCOMD_Aus_Boonie"

#define NVG_OPTIONS \
    "SOCOMD_NVG",\
    "SOCOMD_NVG_GR",\
    "SOCOMD_NVG_AM",\
    "SOCOMD_NVG_B",\
    "SOCOMD_NVG_GR_B",\
    "SOCOMD_NVG_AM_B",\
    "SOCOMD_NVG_C",\
    "SOCOMD_NVG_GR_C",\
    "SOCOMD_NVG_AM_C",\
    "SOCOMD_NVG_GPNVG_WP_black",\
    "SOCOMD_NVG_GPNVG_GR_black"

#define SOLS_HELMS \
    "SOCOMD_NVG",\
    "SOCOMD_NVG_GR",\
    "SOCOMD_NVG_B",\
    "SOCOMD_NVG_GR_B",\
    "SOCOMD_NVG_AM_B",\
    "SOCOMD_NVG_C",\
    "SOCOMD_NVG_GR_C",\
    "SOCOMD_NVG_AM_C",\
    "SOCOMD_NVG_GPNVG_WP_black",\
    "SOCOMD_NVG_GPNVG_GR_black",\
    "rhsusf_ihadss",\
    "rhsusf_hgu56p_visor_mask_tan",\
    "rhsusf_hgu56p_visor_tan",\
    "rhsusf_hgu56p_mask_tan",\
    "rhsusf_hgu56p_tan",\
    "rhsusf_hgu56p_visor_mask",\
    "rhsusf_hgu56p_visor",\
    "rhsusf_hgu56p_mask",\
    "rhsusf_hgu56p"
    
#define MC_UNIFORMS \
    "USP_G3C_KP_MC_SOCOMD",\
    "USP_PCU_G3C_KP_MC_SOCOMD",\
    "USP_SOFTSHELL_G3C_KP_MC_SOCOMD",\
    "USP_SOFTSHELL_G3C_KP_MC_GRN_SOCOMD"

#define AMCU_UNIFORMS \
    "USP_G3C_KP_AMCU_SOCOMD",\
    "USP_PCU_G3C_KP_AMCU_MC_SOCOMD",\
    "USP_SOFTSHELL_G3C_KP_AMCU_MC_SOCOMD",\
    "USP_SOFTSHELL_G3C_KP_AMCU_GRN_SOCOMD"

#define SNOW_UNIFORMS \
    "USP_PCU_G3C_KP_MC_GRY_SOCOMD",\
    "USP_OVERWHITE_G3C_KP_MC_SOCOMD"
    
#define RECON_UNIFORMS \
    "USP_G3C_KP_MC_RECON",\
    "USP_PCU_G3C_KP_MC_RECON",\
    "USP_SOFTSHELL_G3C_KP_MC_RECON",\
    "USP_SOFTSHELL_G3C_KP_MC_GRN_RECON"

#define RECON_AMCU_UNIFORMS \
    "USP_G3C_KP_AMCU_RECON",\
    "USP_PCU_G3C_KP_AMCU_MC_RECON",\
    "USP_SOFTSHELL_G3C_KP_AMCU_MC_RECON",\
    "USP_SOFTSHELL_G3C_KP_AMCU_GRN_RECON"

#define RECON_SNOW_UNIFORMS \
    "USP_OVERWHITE_G3C_KP_MC_RECON",\
    "USP_PCU_G3C_KP_MC_GRY_RECON"

#define PILOT_UNIFORMS \
    "USP_TSHIRT_G3C_MC_SOCOMD"


#define ONE_COMM_RIGS \
    "vss_04_RG",\
    "vss_04_MC",\
    "vss_03_RG",\
    "vss_03_MC",\
    "vss_01_RG",\
    "vss_01_MC"


#define TWO_COMMS_RIGS \
    "vss_06_MC",\
    "vss_06_RG",\
    "vss_05_RG",\
    "vss_05_MC",\
    "vss_02_RG",\
    "vss_02_MC"

#define VESTS_COMMANDER \
    "acwp_pc_tacp_antennaup_s7_closed",\
    "acwp_pc_tacp_antenna_s7_closed"

#define VESTS_TL \
    "lbt_tl_coy",\
    "lbt_tl_mc",\
    "lbt_tl_amcu"

#define VESTS_COMMS \
    "lbt_comms_coy",\
    "lbt_comms_mc",\
    "lbt_comms_amcu",\
    "acwp_pc_comms",\
    "acwp_pc_comms_mag",\
    "acwp_pc_comms_mag_L",\
    "acwp_pc_comms_nod",\
    "acwp_pc_comms_mag_nod",\
    "acwp_pc_comms_mag_L_nod",\
    "acwp_pc_comms762_nod",\
    "acwp_pc_comms762"

#define VESTS_WEAPONS \
    "lbt_weapons_coy",\
    "lbt_weapons_mc",\
    "lbt_weapons_amcu",\
    "acwp_pc_203",\
    "acwp_pc_203_nod",\
    "acwp_pc_203_nobfg",\
    "acwp_pc_203_nod_nobfg"

#define VESTS_MED \
    "lbt_medical_coy",\
    "lbt_medical_mc",\
    "lbt_medical_amcu"

#define VESTS_GUNNER \
    "acwp_pc_mg",\
    "acwp_pc_mg_nod",\
    "acwp_pc_operator_s7_closed",\
    "acwp_pc_operator_radioback_s7_closed",\
    "acwp_pc_operator_top_s7_closed"

#define VESTS_COMMON \
    "acwp_pc_operator",\
    "acwp_pc_operator_strap",\
    "acwp_pc_operator_radioback",\
    "acwp_pc_operator_nod",\
    "acwp_pc_operator_radioback_nod",\
    "acwp_pc_operator_nobfg",\
    "acwp_pc_operator_radioback_nobfg",\
    "acwp_pc_operator_nod_nobfg",\
    "acwp_pc_operator_radioback_nod_nobfg",\
    "acwp_pc_marksman",\
    "acwp_pc_marksman_nod",\
    "acwp_pc_marksman_nobfg",\
    "acwp_pc_marksman_nod_nobfg",\
    "acwp_pc_operator_s7_closed",\
    "acwp_pc_operator_radioback_s7_closed",\
    "acwp_pc_operator_top_s7_closed"

#define BACKPACK_COMMS \
    "SOG_BAG_recon_MC",\
    "SOG_BAG_recon_Tan",\
    "Kit_Bag_R_MC",\
    "SOG_BAG_recon_od",\
    "Kit_Bag_R_od",\
    "Kit_Bag_R_Tan",\
    "ACWP_Bullock_radio_MC",\
    "ACWP_Bullock_radio_AMCU",\
    "ACWP_Bullock_radio_no_helm_MC",\
    "ACWP_Bullock_radio_no_helm_AMCU",\
    "COMM4",\
    "ECPV2"

#define BACKPACK_SAPPER \
    "Kit_Bag_pince_TAN",\
    "SOG_BAG_BREACHER_tan",\
    "Kit_Bag_pince_mc",\
    "SOG_BAG_BREACHER_MC",\
    "Kit_Bag_pince_od",\
    "SOG_BAG_BREACHER_od"

#define BACKPACK_MEDIC \
    "SOG_BAG_med_tan",\
    "SOG_BAG_med_MC",\
    "SOG_BAG_med_od",\
    "ACWP_Bullock_no_helm_med_AMCU",\
    "ACWP_Bullock_no_helm_med_MC"

#define BAGS \
    "KIT_BAG_mc",\
    "KIT_BAG_OD",\
    "KIT_BAG_TAN",\
    "SOG_BAG_tan",\
    "SOG_BAG_od",\
    "SOG_BAG_MC",\
    "ACWP_Bullock_AMCU",\
    "ACWP_Bullock_MC",\
    "ACWP_Bullock_no_helm_AMCU",\
    "ACWP_Bullock_no_helm_MC",\
    "3DAP",\
    "ECPV1",\
    "Crewcab"

#define GRENADES_NORMAL\
    "grenades_default",\
    "grenades_more_flash",\
    "grenades_less_lethal"
    
#define GRENADES_LEADER\
    "grenades_default_leader",\
    "grenades_more_flash_leader",\
    "grenades_less_lethal_leader"

#define GRENADES_BREACHER \
    "grenades_default_breacher",\
    "grenades_more_flash_breacher",\
    "grenades_less_lethal_breacher"
    
#define GRENADES_SAPPER \
    "grenades_default_sapper",\
    "grenades_more_flash_sapper",\
    "grenades_less_lethal_sapper"

#define RIFLEMAN_EXTRAS \
    "extras_none",\
    "extras_spare_squad_ammo",\
    "extras_mg_support",\
    "extras_medium_mg_support",\
    "extras_heavy_mg_support",\
    "extras_at_assistant_mixed",\
    "extras_at_assistant_heat"

class helmets{
    helmets[] = {
        HELMETS,
        NVG_OPTIONS
    };
};
class uniforms{
    arid_uniforms[]={
        MC_UNIFORMS
    };
    temperate_uniforms[]={
        AMCU_UNIFORMS
    };
    recon_uniforms[]={
        RECON_UNIFORMS
    };
    recon_temperate_uniforms[]={
        RECON_AMCU_UNIFORMS
    };
    pilot_uniforms[]={
        PILOT_UNIFORMS
    };
};
class SOCOMD_Commander{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS
        };
        snow_uniforms[]={
            SNOW_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        GL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        TWO_COMMS_RIGS,
        VESTS_COMMS,
        VESTS_WEAPONS,
        VESTS_COMMANDER
    };
    bags[]={
        BAGS,
        BACKPACK_COMMS
    };
    grenades[]={
        GRENADES_LEADER
    };
};
class SOCOMD_TACP{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS
        };
        snow_uniforms[]={
            SNOW_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        GL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        TWO_COMMS_RIGS,
        VESTS_COMMS,
        VESTS_WEAPONS,
        VESTS_COMMANDER
    };
    bags[]={
        BAGS,
        BACKPACK_COMMS
    };
    grenades[]={
        GRENADES_LEADER
    };
};
// 2IC redundant selection
//class SOCOMD_2IC : SOCOMD_Commander{
//
//    vests[]={
//        VESTS_COMMON,
//        TWO_COMMS_RIGS,
//        VESTS_COMMS,
//        VESTS_WEAPONS
//    };
//};
class SOCOMD_Leader : SOCOMD_Commander{
    vests[]={
        VESTS_COMMON,
        TWO_COMMS_RIGS,
        VESTS_COMMS,
        VESTS_WEAPONS
    };
};

class SOCOMD_Rifleman{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS
        };
        snow_uniforms[]={
            SNOW_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        GL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_TL,
        VESTS_WEAPONS
        };
    bags[]={
        BAGS
    };
    grenades[]={
        GRENADES_NORMAL
    };    
    arsenalExtras[] ={
        RIFLEMAN_EXTRAS
    };
};

class SOCOMD_Breacher{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS
        };
        snow_uniforms[]={
            SNOW_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        GL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_TL,
        VESTS_WEAPONS
        };
    bags[]={
        BAGS,
        BACKPACK_SAPPER
    };
    grenades[]={
        GRENADES_BREACHER
    };    
};
class SOCOMD_Marksman{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS
        };
        snow_uniforms[]={
            SNOW_UNIFORMS
        };
    };
    weapons[]={
        MARKSMAN,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_TL
        };
    bags[]={
        BAGS
    };
    grenades[]={
        GRENADES_NORMAL
    };            
};
class SOCOMD_Sapper{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS
        };
        snow_uniforms[]={
            SNOW_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_TL
        };
    bags[]={
        BAGS,
        BACKPACK_SAPPER
    };
    grenades[]={
        GRENADES_SAPPER
    };    
};
class SOCOMD_MachineGunner{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS
        };
    };
    weapons[]={
        MACHINE_GUN,
        HANDGUNS
    };
    vests[]={
        ONE_COMM_RIGS,
        VESTS_GUNNER
        };
    bags[]={
        BAGS
    };
    grenades[]={
        GRENADES_NORMAL
    };    
};
class SOCOMD_Medic{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS
        };
        snow_uniforms[]={
            SNOW_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_MED
        };
    bags[]={
        BAGS,
        BACKPACK_MEDIC
    };
    grenades[]={
        GRENADES_NORMAL
    };    
};
class SOCOMD_AT{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS
        };
        snow_uniforms[]={
            SNOW_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        HANDGUNS,
        LAUNCHERS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_TL
        };
    bags[]={
        BAGS
    };
    grenades[]={
        GRENADES_NORMAL
    };    
};
class SOCOMD_Pilot{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS,
            PILOT_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS,
            PILOT_UNIFORMS
        };
        snow_uniforms[]={
            SNOW_UNIFORMS
        };
    };
    weapons[]={
        HANDGUNS,
        SOLS_RIFLES
    };
    vests[]={
        VESTS_COMMON,
        TWO_COMMS_RIGS,
        VESTS_COMMS        
    };
    bags[]={
        BAGS,
        BACKPACK_COMMS,
        SOLS_HELMS
    };
    helmets[] = {
        SOLS_HELMS,
        NVG_OPTIONS        
    };
    isLogi = 1;
    grenades[]={
    };    
};
class SOCOMD_Crewman{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS,
            PILOT_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS,
            PILOT_UNIFORMS
        };
        snow_uniforms[]={
            SNOW_UNIFORMS
        };
    };
    weapons[]={
        HANDGUNS,
        SOLS_RIFLES
    };
    vests[]={
        VESTS_COMMON,
        TWO_COMMS_RIGS,
        VESTS_COMMS
        };
    bags[]={
        BAGS,
        BACKPACK_COMMS
    };
    helmets[] = {
        SOLS_HELMS,
        NVG_OPTIONS
    };
    grenades[]={
    };    
    isLogi = 1;
};
class SOCOMD_AO{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS,
            PILOT_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS,
            PILOT_UNIFORMS
        };
        snow_uniforms[]={
            SNOW_UNIFORMS
            
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_MED,
        VESTS_TL
        };
    bags[]={
        BAGS,
        BACKPACK_MEDIC
    };
    isLogi = 1;
    grenades[]={
    };    
};
class SOCOMD_Logistician{
    class uniforms{
        arid_uniforms[]={
            MC_UNIFORMS
        };
        temperate_uniforms[]={
            AMCU_UNIFORMS
        };
        snow_uniforms[]={
            SNOW_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        ONE_COMM_RIGS,
        VESTS_TL
        };
    bags[]={
        BAGS
    };
    grenades[]={
        GRENADES_NORMAL
    };    
};
class SOCOMD_Recon{
    class uniforms{
        arid_uniforms[]={
            RECON_UNIFORMS
        };
        temperate_uniforms[]={
            RECON_UNIFORMS
        };
        snow_uniforms[]={
            RECON_SNOW_UNIFORMS
        };
    };
    weapons[]={
        GENERAL_RIFLE,
        MARKSMAN,
        SNIPER,
        HANDGUNS
    };
    vests[]={
        VESTS_COMMON,
        TWO_COMMS_RIGS,
        VESTS_COMMS
        };
    bags[]={
        BAGS,
        BACKPACK_COMMS,
        "AGE_F2Bergen_Multicam",
        "AGE_Camelback_Coyote"
    };
    grenades[]={
        GRENADES_NORMAL
    };    
};
// all options goes into a macro to be added into a class
// class must have the same name as the loudout cfg
// isLogi is used for pilots and crewmen who don't need grenade options. eg: isLogi = 1;
// extraUniforms used for classes that need specialist uniforms like recon. Uniforms all defined in own class. eg: extraUniforms = "LOWVIS_UNIFORMS";
// arsenalExtras used for those who need extra arsenal equipment like rifleman. options defined in role class eg arsenalExtras[] = {"myExtra","myExtra2"};

#define GENERAL_RIFLE \
    "SMA_MK18MOEBLK_SM",\
    "SMA_MK18MOETAN_SM",\
    "SMA_MK18MOEOD_SM",\
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
    "ACWP_M4A5_145_ris_kag_NET",\
	"SMA_HK417vfg"

#define SOLS_RIFLES \
	"SMA_Steyr_AUG_F",\
	"CUP_smg_MP5A5"

#define BACKPACK_MEDIC \
    "SOG_BAG_med_tan",\
    "SOG_BAG_med_MC",\
    "SOG_BAG_med_od"

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
	"hlc_rifle_416D10_gl",\
    "hlc_rifle_416D10_tan_gl",\
    "hlc_rifle_416D10_wdl_gl",\
	"1Rnd_HE_Grenade_shell",\
	"UGL_FlareRed_F",\
	"1Rnd_SmokeRed_Grenade_shell",\
	"ACE_HuntIR_M203"

#define MACHINE_GUN \
    "CUP_lmg_L110A1_railed",\
    "CUP_lmg_minimi_railed",\
    "CUP_lmg_Mk48_nohg",\
    "CUP_lmg_Mk48_nohg_des",\
    "CUP_lmg_Mk48_nohg_tan",\
    "CUP_lmg_Mk48_nohg_wdl",\
	"SOCOMD_Item_Magazine_556x45_200Rnd_Tracer",\
	"SOCOMD_Item_Magazine_762x51_100Rnd_Tracer",\
	"SOCOMD_mag58"

#define MARKSMAN \
    "SPARTAN_EBR_black_F",\
    "SPARTAN_EBR_snake_F",\
    "SMA_HK417_16in",\
    "ACWP_sr25",\
    "ACWP_sr25_camo",\
    "ACWP_sr25_ec",\
    "ACWP_sr25_ec_camo",\
    "ACWP_sr25_VFG",\
    "ACWP_sr25_VFG_camo",\
	"SOCOMD_Item_Magazine_762x51_20Rnd"

#define SNIPER \
    "Recon_Barret",\
    "Recon_338",\
    "Recon_300WM",\
	"5Rnd_338LM_Magazine",\
	"5Rnd_APDS_338LM_Magazine",\
	"SOCOMD_Item_Magazine_300_5Rnd",\
	"10Rnd_300WM_Magazine",\
	"SOCOMD_Item_Magazine_Barret"

#define LAUNCHERS \
    "HAFM_LAW",\
    "SOCOMD_Carl_Gustav",\
	"tf47_m3maaws_HEAT",\
	"tf47_m3maaws_HE"

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
	"VSM_Bowman",\
	"VSM_Bowman_cap_Black",\
	"VSM_Bowman_cap_Green",\
	"CUP_H_PMC_Cap_PRR_Tan",\
	"ADFU_H_Airframe_02_tan",\
	"ADFU_H_Airframe_Cover_02_MC",\
	"ADFU_H_Airframe_Cover_11_MC",\
	"ADFU_H_Airframe_Cover_10_MC",\
	"ADFU_H_Airframe_Cover_03_MC",\
	"ADFU_H_Airframe_02_AMCU",\
	"ADFU_H_Airframe_03_AMCU",\
	"ADFU_H_Airframe_10_AMCU",\
	"ADFU_H_Airframe_11_AMCU",\
	"H_Watchcap_blk",\
	"H_Watchcap_cbr",\
	"CUP_H_RUS_Bandana_HS",\
	"H_Bandanna_sgg",\
	"H_Bandanna_sand",\
	"AU_03_780000_v1",\
	"H_Booniehat_mgrn",\
	"H_Booniehat_tan",\
	"H_Booniehat_khk",\
	"ADFU_Booniehat_MC",\
	"ADFU_Cap_MC",\
	"H_Cap_oli",\
	"CUP_H_PMC_Cap_Tan",\
	"ADFU_H_OpsCore_02_MC",\
	"ADFU_H_OpsCore_02_TAN",\
	"SOCOMD_Aus_Boonie_AMC",\
	"SOCOMD_Aus_Boonie",\
	"CUP_H_PMC_Cap_Back_Tan",\
	"CUP_H_PMC_Cap_Back_EP_Tan",\
	"CUP_H_PMC_Cap_Back_PRR_Tan",\
	"CFP_BaseballCap_Multicam_DEF",\
	"CFP_BaseballCap_Multicam_DEF_Back",\
	"CFP_BaseballCap_Multicam_Back",\

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
	"SOCOMD_Crew_helmet",\
	"SOCOMD_Pilot_helmet"

#define MC_UNIFORMS \
	"SOCOMD_Uniform_SleevesDown",\
	"SOCOMD_Uniform_SleevesUp",\
	"SOCOMD_Tee_uniform"

#define AMCU_UNIFORMS \
	"SOCOMD_Uniform_AMCU_SleevesDown",\
	"SOCOMD_Uniform_AMCU_SleevesUp",\
	"SOCOMD_Tee_AMCU_uniform"
	
#define RECON_UNIFORMS \
	"SOCOMD_Uniform_SleevesDown_Recon"

#define RECON_AMCU_UNIFORMS \
	"SOCOMD_Uniform_AMCU_SleevesDown_Recon"

#define PILOT_UNIFORMS \
	"SOLS_tshirt"

#define ONE_COMM_RIGS \
    "vss_04_RG",\
    "vss_04_MC",\
    "vss_03_RG",\
    "vss_03_MC",\
    "vss_01_RG",\
    "vss_01_MC",\
    "vss_04_WG",\
    "vss_03_WG",\
    "vss_01_WG",\

#define TWO_COMMS_RIGS \
    "vss_06_MC",\
    "vss_06_RG",\
    "vss_05_RG",\
    "vss_05_MC",\
    "vss_02_RG",\
    "vss_02_MC",\
    "vss_06_WG",\
    "vss_05_WG",\
    "vss_02_WG"

#define VESTS_TL \
    "lbt_tl_coy",\
    "lbt_tl_mc",\
    "lbt_tl_amcu"

#define VESTS_COMMS \
    "lbt_comms_coy",\
    "lbt_comms_mc",\
    "lbt_comms_amcu"

#define VESTS_WEAPONS \
    "lbt_weapons_coy",\
    "lbt_weapons_mc",\
    "lbt_weapons_amcu"

#define VESTS_MED \
    "lbt_medical_coy",\
    "lbt_medical_mc",\
    "lbt_medical_amcu"

#define BACKPACK_COMMS \
    "SOG_BAG_recon_MC",\
    "SOG_BAG_recon_Tan",\
    "Kit_Bag_R_MC",\
    "SOG_BAG_recon_od",\
    "Kit_Bag_R_od",\
    "Kit_Bag_R_Tan",\
	"ACWP_Bullock_radio_MC",\
	"ACWP_Bullock_radio_AMCU"
	// "ACWP_Bullock_radio_no_helm_MC",\
	// "ACWP_Bullock_radio_no_helm_AMCU"

#define BACKPACK_SAPPER \
    "Kit_Bag_pince_TAN",\
    "SOG_BAG_BREACHER_tan",\
    "Kit_Bag_pince_mc",\
    "SOG_BAG_BREACHER_MC",\
    "Kit_Bag_pince_od",\
    "SOG_BAG_BREACHER_od"

#define BAGS \
	"KIT_BAG_mc",\
	"KIT_BAG_OD",\
	"KIT_BAG_TAN",\
	"SOG_BAG_tan",\
	"SOG_BAG_od",\
	"SOG_BAG_MC",\
	"ACWP_Bullock_AMCU",\
	"ACWP_Bullock_MC"
	// "ACWP_Bullock_no_helm_AMCU",\
	// "ACWP_Bullock_no_helm_MC"
#define GREMADES_NORMAL\
	"grenades_default",\
	"grenades_more_flash",\
	"grenades_less_lethal"
	
#define GREMADES_LEADER\
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

#define LOWVIS_UNIFORMS \
	"CUP_I_B_PMC_Unit_20",\
	"CUP_I_B_PMC_Unit_21",\
	"CUP_I_B_PMC_Unit_19",\
	"CUP_I_B_PMC_Unit_17",\
	"CUP_I_B_PMC_Unit_17",\
	"CUP_I_B_PMC_Unit_14",\
	"CUP_I_B_PMC_Unit_15",\
	"CUP_I_B_PMC_Unit_3",\
	"CUP_I_B_PMC_Unit_2",\
	"CUP_I_B_PMC_Unit_1",\
	"CUP_I_B_PMC_Unit_4",\
	"CUP_I_B_PMC_Unit_7",\
	"CUP_I_B_PMC_Unit_6",\
	"CUP_I_B_PMC_Unit_5",\
	"CUP_I_B_PMC_Unit_8",\
	"CUP_I_B_PMC_Unit_11",\
	"CUP_I_B_PMC_Unit_10",\
	"CUP_I_B_PMC_Unit_9",\
	"CUP_I_B_PMC_Unit_12",\
	"CUP_I_B_PMC_Unit_42",\
	"CUP_I_B_PMC_Unit_41",\
	"CUP_I_B_PMC_Unit_43",\
	"CUP_I_B_PMC_Unit_40",\
	"CUP_I_B_PMC_Unit_39",\
	"CUP_I_B_PMC_Unit_36",\
	"CUP_I_B_PMC_Unit_38",\
	"CUP_I_B_PMC_Unit_37",\
	"CUP_I_B_PMC_Unit_24",\
	"CUP_I_B_PMC_Unit_23",\
	"CUP_I_B_PMC_Unit_31",\
	"CUP_I_B_PMC_Unit_32",\
	"CFP_GUER_TanTee",\
	"CFP_GUER_GreenTan",\
	"CFP_FieldUniform_tanblack_SS",\
	"U_C_Man_casual_5_F",\
	"U_C_Man_casual_4_F",\
	"U_C_Man_casual_6_F",\
	"U_C_Poor_1",\
	"U_BG_Guerilla2_3",\
	"U_BG_Guerilla2_1",\
	"U_BG_Guerilla2_2",\
	"U_C_Poloshirt_tricolour",\
	"CUP_O_TKI_Khet_Jeans_04",\
	"CUP_O_TKI_Khet_Jeans_01",\
	"CUP_O_TKI_Khet_Jeans_02",\
	"CUP_O_TKI_Khet_Jeans_03",\
	"CPC_Afrique_Clothes_Pirate_1",\
	"CPC_Afrique_Clothes_Pirate_2",\
	"CPC_Afrique_Clothes_Pirate_3"


	class SOCOMD_LOWVIS_Commander{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			GENERAL_RIFLE,
			GL_RIFLE,
			HANDGUNS
		};
		vests[]={
			TWO_COMMS_RIGS,
			VESTS_COMMS,
			VESTS_WEAPONS,
			
		};
		bags[]={
			BAGS,
			BACKPACK_COMMS
		};
		grenades[]={
			GREMADES_LEADER
		};
	};
	class SOCOMD_LOWVIS_2IC : SOCOMD_LOWVIS_Commander{};
	class SOCOMD_LOWVIS_Leader : SOCOMD_LOWVIS_Commander{};

	class SOCOMD_LOWVIS_Rifleman{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			GENERAL_RIFLE,
			GL_RIFLE,
			HANDGUNS
		};
		vests[]={
			ONE_COMM_RIGS,
			VESTS_TL,
			VESTS_WEAPONS,
			
		};
		bags[]={
			BAGS
		};
		grenades[]={
			GREMADES_NORMAL
		};	
		arsenalExtras[] ={
			RIFLEMAN_EXTRAS
		};
	};

	class SOCOMD_LOWVIS_Breacher{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			GENERAL_RIFLE,
			GL_RIFLE,
			HANDGUNS
		};
		vests[]={
			ONE_COMM_RIGS,
			VESTS_TL,
			VESTS_WEAPONS,
			
		};
		bags[]={
			BAGS,
			BACKPACK_SAPPER
		};
		grenades[]={
			GREMADES_BREACHER
		};	
	};

	class SOCOMD_LOWVIS_AT_Assistant{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			GENERAL_RIFLE,
			HANDGUNS
		};
		vests[]={
			ONE_COMM_RIGS,
			VESTS_TL,
			
		};
		bags[]={
			BAGS
		};
		grenades[]={
			GREMADES_NORMAL
		};				
	};
	class SOCOMD_LOWVIS_Marksman{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			MARKSMAN,
			HANDGUNS
		};
		vests[]={
			ONE_COMM_RIGS,
			VESTS_TL,
			
		};
		bags[]={
			BAGS
		};
		grenades[]={
			GREMADES_NORMAL
		};			
	};
	class SOCOMD_LOWVIS_Sapper{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			GENERAL_RIFLE,
			HANDGUNS
		};
		vests[]={
			ONE_COMM_RIGS,
			VESTS_TL,
			
		};
		bags[]={
			BAGS,
			BACKPACK_SAPPER
		};
		grenades[]={
			GREMADES_SAPPER
		};	
	};
	class SOCOMD_LOWVIS_MachineGunner{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			MACHINE_GUN,
			HANDGUNS
		};
		vests[]={
			ONE_COMM_RIGS,
			VESTS_COMMS,
			
		};
		bags[]={
			BAGS
		};
		grenades[]={
			GREMADES_NORMAL
		};	
	};
	class SOCOMD_LOWVIS_Medic{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			GENERAL_RIFLE,
			HANDGUNS
		};
		vests[]={
			ONE_COMM_RIGS,
			VESTS_MED,
			
		};
		bags[]={
			BAGS,
			BACKPACK_MEDIC
		};
		grenades[]={
			GREMADES_NORMAL
		};	
	};
	class SOCOMD_LOWVIS_AT{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			GENERAL_RIFLE,
			HANDGUNS,
			LAUNCHERS
		};
		vests[]={
			ONE_COMM_RIGS,
			VESTS_TL,
			
		};
		bags[]={
			BAGS
		};
		grenades[]={
			GREMADES_NORMAL
		};	
	};
	class SOCOMD_LOWVIS_Pilot{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			HANDGUNS,
			SOLS_RIFLES
		};
		vests[]={
			TWO_COMMS_RIGS,
			VESTS_COMMS,
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
	class SOCOMD_LOWVIS_Crewman{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			HANDGUNS,
			SOLS_RIFLES
		};
		vests[]={
			TWO_COMMS_RIGS,
			VESTS_COMMS,
			
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
	class SOCOMD_LOWVIS_AO{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			GENERAL_RIFLE,
			HANDGUNS
		};
		vests[]={
			ONE_COMM_RIGS,
			VESTS_MED,
			
		};
		bags[]={
			BAGS,
			BACKPACK_MEDIC
		};
		isLogi = 1;
		grenades[]={
		};	
	};
	class SOCOMD_LOWVIS_Logistician{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			GENERAL_RIFLE,
			HANDGUNS
		};
		vests[]={
			ONE_COMM_RIGS,
			VESTS_TL,
			
		};
		bags[]={
			BAGS
		};
		grenades[]={
			GREMADES_NORMAL
		};	
	};
	class SOCOMD_LOWVIS_Recon{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			SNIPER,
			HANDGUNS
		};
		vests[]={
			TWO_COMMS_RIGS,
			VESTS_COMMS,
			
		};
		bags[]={
			BAGS,
			BACKPACK_COMMS
		};
		grenades[]={
			GREMADES_NORMAL
		};	
	};
	class SOCOMD_LOWVIS_Recon_Assistant{
		class uniforms{
			arid_uniforms[]={
				LOWVIS_UNIFORMS
			};
			temperate_uniforms[]={
				LOWVIS_UNIFORMS
			};
		};
		weapons[]={
			GENERAL_RIFLE,
			MARKSMAN,
			HANDGUNS
		};
		vests[]={
			TWO_COMMS_RIGS,
			VESTS_COMMS,
			
		};
		bags[]={
			BAGS,
			BACKPACK_COMMS
		};
		grenades[]={
			GREMADES_NORMAL
		};	
	};
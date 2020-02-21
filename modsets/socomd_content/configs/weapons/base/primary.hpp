class SMA_AssaultBase;
class SMA_762_RIFLEBASE: SMA_AssaultBase {
	magazineWell[] = {"CBA_762x51_HK417"};
};
class acc_flashlight;
class InventoryFlashLightItem_Base_F;
class SMA_SFLIGHT_TOPM4: acc_flashlight {
	scope=1;
	dlc="SMA";
	displayName="Surefire flash light";
	picture="\SMA_PEQ15\data\UI\SFflashblk.paa";
	model="SMA_PEQ15\sma_peqFlash_top_m4.p3d";
	class ItemInfo: InventoryFlashLightItem_Base_F
	{
		mass=4;
		class FlashLight
		{
			color[]={7000,7500,10000};
			ambient[]={6,9,9};
			intensity=2.5;
			size=1;
			innerAngle=20;
			outerAngle=80;
			coneFadeCoef=10;
			position="light_dir";
			direction="light";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance="600.0f";
			dayLight=1;
			class Attenuation
			{
				start=0.5;
				constant=0;
				linear=0;
				quadratic=1;
				hardLimitStart=200;
				hardLimitEnd=300;
			};
			scale[]={0};
		};
	};
};
class S_WMLX: acc_flashlight {
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="WMLX";
	model="M4A5_Troy_Acc\mesh\wmlxdbal.p3d";
	class ItemInfo: InventoryFlashLightItem_Base_F {
		mass=4;
		class FlashLight {
			color[]={7000,7500,10000};
			ambient[]={6,9,9};
			intensity=2.5;
			size=1;
			innerAngle=20;
			outerAngle=80;
			coneFadeCoef=10;
			position="light_dir";
			direction="light";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance="600.0f";
			dayLight=1;
			class Attenuation
			{
				start=0.5;
				constant=0;
				linear=0;
				quadratic=1;
				hardLimitStart=200;
				hardLimitEnd=300;
			};
			scale[]={0};
		};
	};
};
//Rifle 556 - SMA_30Rnd_556x45_M855A1
class SMA_M4afgSTOCK;
class S_M4A5_base;
class S_145_KAG_MAG;
class S_145_MOD_MAG_Camo;
class CUP_sgun_M1014_Entry_vfg;
class CUP_sgun_M1014_base: Rifle_Base_F {
		modes[] = {"Single","Single_close","Single_far"};
		class single: mode_semiauto
		{
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundSetShot[] = {"HunterShotgun_01_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
			};
			class silencedsound: basesoundmodetype
			{
				soundSetShot[] = {"HunterShotgun_01_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
			};
		};
};
class SOCOMD_Shotgun: CUP_sgun_M1014_Entry_vfg {
	displayname = "SOCOMD Benelli M4 Entry";
};
class SOCOMD_SMA_M4afgSTOCK : SMA_M4afgSTOCK {		/// WIP Retexturing
	hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\SMA_M4\data\plastic_diffuse_co.paa",
			"\SMA_M4\data\grip_blk_co.paa",
			"\SMA_M4\data\magnoalpha_black_co.paa",
			"\SMA_M4\data\metal_diffuse_red_co.paa"
		};
}; 
/*
class hlc_HK416_base : Rifle_Base_F {};
class hlc_rifle_416D145 : hlc_HK416_base {};
class S_M4A5_base : hlc_rifle_416D145 {
	class WeaponSlotsInfo
	{
		class MuzzleSlot
		{
			compatibleItems[]=
			{
				"sma_gemtech_one_blk",
				"sma_gemtech_one_des",
				"sma_gemtech_one_wdl",
				"SMA_Silencer_556",
				"SMA_Silencer_556_Bronze",
				"SMA_Silencer_556_Silver",
				"SMA_FLASHHIDER1",
				"SMA_FLASHHIDER2",
				"SMA_supp2btan_556",
				"SMA_supp1tan_556",
				"SMA_supp1b_556",
				"SMA_supp2b_556",
				"SMA_supp1BB_556",
				"SMA_supp1BOD_556",
				"SMA_supp1BT_556",
				"SMA_supp1Bwht_556",
				"SMA_supp1TB_556",
				"SMA_supp1TOD_556",
				"SMA_supp1TT_556",
				"SMA_supp1TW_556",
				"SMA_supp2BOD_556",
				"SMA_supp2BT_556",
				"SMA_supp2BW_556",
				"SMA_supp2T_556",
				"SMA_supp2TB_556",
				"SMA_supp2TOD_556",
				"SMA_supp2TWH_556",
				"SMA_supp2smaB_556",
				"SMA_supp2smaT_556",
				"SMA_rotex_blk",
				"SMA_rotex_tan",
				"SMA_rotex_gry"
			};
		};
	};
};*/

//Default
class SMA_MK18MOEBLK_SM;
class SMA_AUG_A3_F;
class SMA_HK416CUSTOMCQBvfgB;

//RifleGL 556 - SMA_30Rnd_556x45_M855A1
class SMA_M4_GL_SM; //Default
class SMA_MK18BLK_GL_SM;
class SMA_AUG_EGLM;
class SMA_HK416GLCQB_B;

//Tan
class SMA_MK18MOETAN_SM;
class SMA_AUG_A3_KRYPT_F;
class SMA_HK416CUSTOMCQBvfg;
class SMA_MK18TAN_GL_SM;
class SMA_AUG_EGLM_tan;
class SMA_HK416GLCQB;

//OD
class SMA_MK18MOEOD_SM;
class SMA_AUG_A3_MCAM_F;
class SMA_HK416CQB_vfg_ODPAINTED;
class SMA_MK18OD_GL_SM;
class SMA_AUG_EGLM_Olive;
class SMA_HK416GLCQB_ODP;

//Rifle 762 - 20Rnd_762x51_Mag
class SMA_HK417_16in;
class SMA_HK417vfg;
class CUP_srifle_M110 : Rifle_Base_F {
	magazineWell[] = {"CBA_762x51_HK417"};
	displayName = "SR-25";
};
class CUP_srifle_m110_kac_black: CUP_srifle_M110 {
	displayName = "SR-25 Black";
};
class CUP_srifle_m110_kac: CUP_srifle_M110 {
	displayName = "SR-25";
};
class CUP_srifle_m110_kac_woodland: CUP_srifle_M110 {
	displayName = "SR-25 Woodland";
};

class srifle_EBR_F;
class SPARTAN_EBR_black_F : srifle_EBR_F {
	magazineWell[] = {"CBA_762x51_HK417"};
};
class SPARTAN_EBR_snake_F : srifle_EBR_F { 		//Camo
	magazineWell[] = {"CBA_762x51_HK417"};
};

//Machine Gun 556
// class CUP_lmg_minimipara;
// class CUP_lmg_minimi_railed : CUP_lmg_minimipara {
// 	displayName = "FN Minimi HS";
// 	magazineWell[] = {"CBA_556x45_MINIMI"};
// };

//Machine Gun 762
class CUP_lmg_Mk48;
class CUP_lmg_Mk48_nohg : CUP_lmg_Mk48 {
	displayName = "Mk 48 Maximi";
	magazineWell[] = {"SOCOMD_762_150Rnd"};
}
class CUP_lmg_Mk48_nohg_des : CUP_lmg_Mk48_nohg {};
class CUP_lmg_Mk48_nohg_tan : CUP_lmg_Mk48_nohg {};
class CUP_lmg_Mk48_nohg_wdl : CUP_lmg_Mk48_nohg {};

//Machine Gun 762
class CUP_lmg_FNMAG_RIS;
class SOCOMD_mag58: CUP_lmg_FNMAG_RIS {
	displayName = "MAG 58";
	magazineWell[] = {
		"SOCOMD_762_150Rnd",
		"CBA_762x51_LINKS",
		"M240_762x51"};
	magazines[]=
		{
			"SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M"
		};
	ace_overheating_mrbs = 1200; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
	ace_overheating_slowdownFactor = 1; //Slowdown Factor (this will be scaled based on the barrel temp)
	ace_overheating_allowSwapBarrel = 1; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
	ace_overheating_dispersion = 0.75; //Dispersion Factor (this will be scaled based on the barrel temp)  
};

//MP5
class CUP_smg_MP5A5;

//Rifle 300WM
class hlc_AWC_base;
class hlc_rifle_awmagnum : hlc_AWC_base {
	magazineWell[] = {"SOCOMD_300_MAG"};
	mass=120;
	allowedSlots[]={901}; // 701 = vest, 801 = uniform, 901 = backpack
};

//Rfile Barret
class ej_barrett_base;
class ej_m107 : ej_barrett_base {
	recoil = "recoil_gm6";
	magazineWell[] = {"SOCOMD_Barret_MAG"};
	allowedSlots[]={901}; // 701 = vest, 801 = uniform, 901 = backpack
};

class bnae_trg42_camo2_virtual;

class bnae_falkor_camo1_virtual;
/*

class SOCOMD_trg42 : bnae_trg42_camo2_virtual {
	magazineWell[] = {"SOCOMD_338_bolt"};
	allowedSlots[]={901}; // 701 = vest, 801 = uniform, 901 = backpack
	class WeaponSlotsInfo {
		class UnderBarrelSlot {
			access=1;
			compatibleitems[]=
			{
				"bnae_bipod_v2_virtual",
				"dzn_tripod_rifle",
				"dzn_tripod_rifle_od",
				"dzn_tripod_rifle_tan"
			};
			linkproxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
			iconPosition[]={0.2,0.80000001};
			iconScale=0.30000001;
		};
	};
	
};



class SOCOMD_falkor : bnae_falkor_camo1_virtual{
	magazineWell[] = {"SOCOMD_300WM_semi"};
	allowedSlots[]={901}; // 701 = vest, 801 = uniform, 901 = backpack
	class WeaponSlotsInfo
		{
		class UnderBarrelSlot
			{
			access=1;
			compatibleitems[] = {
				"bnae_bipod_blk_virtual",
				"bnae_bipod_snd_virtual",
				"bipod_01_F_snd",
				"bipod_01_F_blk",
				"bipod_01_F_mtp",
				"bipod_01_F_khk",
				"bipod_02_F_blk",
				"bipod_02_F_tan",
				"bipod_02_F_hex",
				"bipod_03_F_blk",
				"bipod_03_F_oli",
				"dzn_tripod_rifle",
				"dzn_tripod_rifle_od",
				"dzn_tripod_rifle_tan"
			};
		};
	};
};*/
//Russian Gun
class CUP_arifle_AK104_railed;
class SOCOMD_SSO_AK: CUP_arifle_AK104_railed {
	displayName="RU-AK-104 (Modified)";
	hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"CamoRail",
			"CamoRailHG"
		};
		hiddenSelectionsTextures[]=
		{
			"socomd_data_core\Russian\ak74m_body_camo_co.paa",
			"socomd_data_core\Russian\ak74m_stock_camo_co.paa",
			"socomd_data_core\Russian\ak74m_grip_rail_co.paa",
			"socomd_data_core\Russian\fortisshift_foregrip_co.paa"
		};
		magazines[]=
		{
			"CUP_30Rnd_545x39_AK74M_camo_M",
			"CUP_30Rnd_545x39_AK74M_M",
			"CUP_30Rnd_Subsonic_545x39_AK74M_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",
			"CUP_30Rnd_545x39_AK_M",
			"CUP_30Rnd_Subsonic_545x39_AK_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
			"CUP_30Rnd_545x39_AK74_plum_M",
			"CUP_30Rnd_Subsonic_545x39_AK74_plum_M",
			"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M",
			"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M",
			"CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M",
			"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M",
			"CUP_20Rnd_545x39_AKSU_M",
			"CUP_20Rnd_Subsonic_545x39_AKSU_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
			"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
			"CUP_60Rnd_545x39_AK74M_M",
			"CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M",
			"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M",
			"CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M",
			"CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M"
		};
	/*class Single {
		dispersion=0.00015;
	};
	class Burst {
		dispersion=0.00015;
	};
	class FullAuto {
		dispersion=0.00015;
	};*/
	aiDispersionCoefY=4;
	aiDispersionCoefX=4;
};
class SOCOMD_SSO_AK_acc: SOCOMD_SSO_AK {
	displayName="RU-AK-104 (Modified)";
	class LinkedItems{
		class LinkedItemsOptic{
			item = "CUP_optic_MARS_OD";
			slot = "CUP_PicatinnySideMountAK";
		};
		class LinkedItemsAcc{
			item = "CUP_acc_ANPEQ_15_Flashlight_OD_L";
			slot = "CUP_PicatinnyTopMountAK";
		};
		class LinkedItemsMuzzle{
			item = "CUP_muzzle_Bizon";
			slot = "CUP_EastMuzzleSlotAK";
		};
	};
};
class CUP_arifle_AK74M_GL_railed_camo;
class SOCOMD_SSO_AK_GL: CUP_arifle_AK74M_GL_railed_camo {
	displayName="RU-AK-104-GL (Modified)";
	magazines[]=
	{
		"CUP_30Rnd_545x39_AK74M_camo_M",
		"CUP_30Rnd_545x39_AK74M_M",
		"CUP_30Rnd_Subsonic_545x39_AK74M_M",
		"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",
		"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M",
		"CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M",
		"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_Subsonic_545x39_AK_M",
		"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
		"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
		"CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
		"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
		"CUP_30Rnd_545x39_AK74_plum_M",
		"CUP_30Rnd_Subsonic_545x39_AK74_plum_M",
		"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M",
		"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M",
		"CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M",
		"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M",
		"CUP_20Rnd_545x39_AKSU_M",
		"CUP_20Rnd_Subsonic_545x39_AKSU_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
		"CUP_60Rnd_545x39_AK74M_M",
		"CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M",
		"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M",
		"CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M",
		"CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M"
	};
	aiDispersionCoefY=4;
	aiDispersionCoefX=4;

};
class SOCOMD_SSO_AK_GL_acc: SOCOMD_SSO_AK_GL{
	class LinkedItems{
		class LinkedItemsOptic{
			item = "CUP_optic_MARS_OD";
			slot = "CUP_PicatinnySideMountAK";
		};
		class LinkedItemsAcc{
			item = "CUP_acc_ANPEQ_15_Flashlight_OD_L";
			slot = "CUP_PicatinnyTopMountAK";
		};
		class LinkedItemsMuzzle{
			item = "CUP_muzzle_TGPA_woodland";
			slot = "CUP_EastMuzzleSlotAK";
		};
	};
};
class CUP_arifle_RPK74M_railed;
class SOCOMD_SSO_RPK: CUP_arifle_RPK74M_railed{
	displayName="RU-RPK-74m (Modified)";
	hiddenSelections[] = {
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4"
		};
	hiddenSelectionsTextures[] = {
		"CUP\Weapons\CUP_Weapons_AK\Data\rpk_body_co.paa",
		"CUP\Weapons\CUP_Weapons_AK\Data\rpk_furniture_co.paa",
		"CUP\Weapons\CUP_Weapons_AK\Data\rpk74m_furniture_co.paa",
		"CUP\Weapons\CUP_Weapons_AK\Data\rpk74m_other_co.paa"
		};

	magazines[] = {
		"SOCOMD_RPK_MAGAZINE",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK74M_M",
		"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",
		"CUP_30Rnd_545x39_AK_M",
		"CUP_30Rnd_Subsonic_545x39_AK_M",
		"CUP_30Rnd_TE1_Green_Tracer_545x39_AK_M",
		"CUP_30Rnd_TE1_Red_Tracer_545x39_AK_M",
		"CUP_30Rnd_TE1_White_Tracer_545x39_AK_M",
		"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK_M",
		"CUP_30Rnd_545x39_AK74M_M",
		"CUP_30Rnd_Subsonic_545x39_AK74M_M",
		"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M",
		"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74M_M",
		"CUP_30Rnd_TE1_White_Tracer_545x39_AK74M_M",
		"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",
		"CUP_30Rnd_545x39_AK74_plum_M",
		"CUP_30Rnd_Subsonic_545x39_AK74_plum_M",
		"CUP_30Rnd_TE1_Green_Tracer_545x39_AK74_plum_M",
		"CUP_30Rnd_TE1_Red_Tracer_545x39_AK74_plum_M",
		"CUP_30Rnd_TE1_White_Tracer_545x39_AK74_plum_M",
		"CUP_30Rnd_TE1_Yellow_Tracer_545x39_AK74_plum_M",
		"CUP_30Rnd_545x39_AK74M_camo_M",
		"CUP_20Rnd_545x39_AKSU_M",
		"CUP_20Rnd_Subsonic_545x39_AKSU_M",
		"CUP_60Rnd_545x39_AK74M_M",
		"CUP_60Rnd_TE1_Green_Tracer_545x39_AK74M_M",
		"CUP_60Rnd_TE1_Red_Tracer_545x39_AK74M_M",
		"CUP_60Rnd_TE1_White_Tracer_545x39_AK74M_M",
		"CUP_60Rnd_TE1_Yellow_Tracer_545x39_AK74M_M",
		"CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"
		};
	aiDispersionCoefY=10;
	aiDispersionCoefX=10;
};
class SOCOMD_SSO_RPK_acc : SOCOMD_SSO_RPK{
	class LinkedItems{
		class LinkedItemsOptic{
			item = "CUP_optic_MARS_OD";
			slot = "CUP_PicatinnySideMountAK";
		};
		class LinkedItemsAcc{
			item = "CUP_acc_ANPEQ_15_Flashlight_OD_L";
			slot = "CUP_PicatinnyTopMountAK";
		};
		class LinkedItemsMuzzle{
			item = "CUP_muzzle_TGPA_woodland";
			slot = "CUP_EastMuzzleSlotAK";
		};
	};
};

class srifle_DMR_05_blk_F;
class SOCOMD_SSO_Cyrus_acc : srifle_DMR_05_blk_F{
	class LinkedItems{
		class LinkedItemsOptic{
			item = "optic_TWS";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc{
			item = "RH_peq15b";
			slot = "PointerSlot";
		};
		class LinkedItemsMuzzle{
			item = "muzzle_snds_93mmg";
			slot = "MuzzleSlot";
		};
	};
};

class CUP_lmg_Pecheneg_woodland;
class SOCOMD_pkp: CUP_lmg_Pecheneg_woodland{

};
class SOCOMD_pkp_acc: SOCOMD_pkp{
	class LinkedItemsOptic{
			item = "CUP_optic_1p63";
			slot = "CUP_PicatinnySideMountAK";
		};
		class LinkedItemsMuzzle{
			item = "CUP_muzzle_snds_KZRZP_PK_woodland";
			slot = "CUP_EastMuzzleSlotAK";
		};
};

class SOCOMD_VEGA_AK_V1_acc: CUP_arifle_AK104_railed{
	displayName="RU-AK-104 V1 (VEGA)";
	class LinkedItems{
		class LinkedItemsOptic{
			item = "SMA_eotech552";
			slot = "CUP_PicatinnySideMountAK";
		};
		class LinkedItemsAcc{
			item = "CUP_acc_Flashlight_wdl";
			slot = "CUP_PicatinnyTopMountAK";
		};
		class LinkedItemsMuzzle{
			item = "CUP_muzzle_mfsup_Flashhider_556x45_OD";
			slot = "CUP_EastMuzzleSlotAK";
		};
	};
};

class CUP_arifle_AK101_railed;
class SOCOMD_VEGA_AK_V2_acc: CUP_arifle_AK101_railed{
	displayName="RU-AK-101 (VEGA)";
	class LinkedItems{
		class LinkedItemsOptic{
			item = "CUP_optic_MicroT1";
			slot = "CUP_PicatinnySideMountAK";
		};
		class LinkedItemsAcc{
			item = "CUP_acc_Flashlight_wdl";
			slot = "CUP_PicatinnyTopMountAK";
		};
		class LinkedItemsMuzzle{
			item = "CUP_muzzle_mfsup_Flashhider_556x45_OD";
			slot = "CUP_EastMuzzleSlotAK";
		};
	};
};

class CUP_arifle_AK101_GL_railed;
class SOCOMD_VEGA_AK_GL_acc: CUP_arifle_AK101_GL_railed{
	displayName="RU-AK-101 GL (VEGA)";
	class LinkedItems{
		class LinkedItemsOptic{
			item = "SMA_eotech552";
			slot = "CUP_PicatinnySideMountAK";
		};
		class LinkedItemsAcc{
			item = "CUP_acc_Flashlight_wdl";
			slot = "CUP_PicatinnyTopMountAK";
		};
		class LinkedItemsMuzzle{
			item = "CUP_muzzle_mfsup_Flashhider_556x45_OD";
			slot = "CUP_EastMuzzleSlotAK";
		};
	};
};

class SOCOMD_VEGA_RPK_acc: CUP_arifle_RPK74M_railed{
	displayName="RU-RPK-74M (VEGA)";
	class LinkedItems{
		class LinkedItemsOptic{
			item = "CUP_optic_MicroT1";
			slot = "CUP_PicatinnySideMountAK";
		};
		class LinkedItemsMuzzle{
			item = "CUP_muzzle_mfsup_Flashhider_556x45_OD";
			slot = "CUP_EastMuzzleSlotAK";
		};
	};
};

class CUP_srifle_SVD_wdl_top_rail;
class SOCOMD_VEGA_SVD: CUP_srifle_SVD_wdl_top_rail{
};
class SOCOMD_VEGA_SVD_acc: CUP_srifle_SVD_wdl_top_rail{
	displayName="RU-SVD (VEGA)";
	class LinkedItems{
		class LinkedItemsOptic{
			item = "CUP_optic_SB_11_4x20_PM_od";
			slot = "CUP_PicatinnyTopMount_SVD";
		};
	};
};


// CUSTOM Minimi

	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class CUP_saw_base: Rifle_Long_Base_F
	{
		author="$STR_CUP_AUTHOR_STRING";
		dlc="CUP_Weapons";
		scope=1;
		magazines[]={};
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=164;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPinpoint="center";
				iconPosition[]={0.068000004,0.45300001};
				iconScale=0.14;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="Assault rifle<br/>Caliber: 5.45mm";
		dexterity=1.8;
		aimTransitionSpeed=0.69999999;
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\5_56\metal_556_01.wss",
			0.1,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\5_56\metal_556_02.wss",
			0.1,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\5_56\metal_556_03.wss",
			0.177828,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\5_56\metal_556_04.wss",
			0.177828,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss",
			0.1,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss",
			0.1,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss",
			0.1,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss",
			0.1,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\5_56\grass_556_01.wss",
			0.0099999998,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\5_56\grass_556_02.wss",
			0.0099999998,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\5_56\grass_556_03.wss",
			0.0099999998,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\5_56\grass_556_04.wss",
			0.0099999998,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		inertia=0.80000001;
		ACE_overheating_mrbs=23000;
		ACE_overheating_dispersion=1;
		ACE_overheating_slowdownFactor=1;
		ACE_overheating_allowSwapBarrel=1;
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class FullAuto: Mode_FullAuto
		{
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			dispersion=0.00034999999;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_M249_Closure_SoundSet",
					"CUP_M249_Shot_SoundSet",
					"CUP_lmg1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"CUP_M249_Closure_SoundSet",
					"CUP_M249_ShotSD_SoundSet",
					"CUP_Rifle1_SD_Tail_SoundSet"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.57999998;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
			reloadTime=0.067000002;
		};
		class close: FullAuto
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.57999998;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.57999998;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=12;
			aiRateOfFire=3;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.57999998;
			maxRange=600;
			maxRangeProbab=0.039999999;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			burst=8;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.5;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=8;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.60000002;
			maxRange=900;
			maxRangeProbab=0.0099999998;
		};
		aiDispersionCoefY=18;
		aiDispersionCoefX=16;
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_M249\data\sfx\Dry",
			1,
			1,
			35
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_M249\data\sfx\saw_reload",
			1,
			1,
			35
		};
	};
	class CUP_lmg_minimipara: CUP_saw_base
	{
		scope=1;
		ACE_barrelTwist=178;
		ACE_barrelLength=380;
		initspeed=-0.936216;
		recoil="recoil_SAW";
		deployedPivot="deploypoint";
		hasBipod=1;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db-3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db-3",
			1,
			20
		};
		magazines[]=
		{
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Green_Tracer_556x45_M249_Pouch",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249_Pouch",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch",
			"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1",
			"CUP_30Rnd_556x45_Stanag",
			"30Rnd_556x45_STANAG",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_green"
		};
		magazineWell[]=
		{
			"CBA_556x45_MINIMI",
			"CBA_556x45_STANAG",
			"CBA_556x45_STANAG_L",
			"CBA_556x45_STANAG_XL",
			"CBA_556x45_STANAG_2D",
			"CBA_556x45_STANAG_2D_XL",
			"STANAG_556x45",
			"STANAG_556x45_Large",
			CBA_556x45_MINIMI
		};
		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				directionName="linkeject_end";
				effectName="MachineGunEject2";
				positionName="linkeject_start";
			};
		};
		cursor="mg";
		cursorAim="EmptyCursor";
		nameSound="Mgun";
		model="\CUP\Weapons\CUP_Weapons_M249\mesh\minimi_para\minimi.p3d";
		author="$STR_CUP_AUTHOR_STRING";
		reloadaction="CUP_GestureReloadM249STANAG";
		magazineReloadSwitchPhase=0.5;
		descriptionShort="Light Machine Gun<br/>Caliber: 5.56mm";
		drySound[]=
		{
			"CUP\Weapons\CUP_Weapons_M249\data\sfx\Dry",
			1,
			1,
			35
		};
		reloadMagazineSound[]=
		{
			"CUP\Weapons\CUP_Weapons_M249\data\sfx\saw_reload",
			1,
			1,
			35
		};
		inertia=0.75;
		picture="\CUP\Weapons\CUP_Weapons_M249\tex\ui\gear_minimipara_x_ca";
		UiPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
		displayName="$STR_CUP_dn_FN_mimini_para";
		cameraDir="eye_look";
		discretedistance[]={300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[]=
		{
			"eye",
			"eye_400",
			"eye_500",
			"eye_600",
			"eye_700",
			"eye_800",
			"eye_900",
			"eye_1000"
		};
		discretedistanceinitindex=0;
		hiddenSelections[]=
		{
			"Reciever",
			"Assembly_cover",
			"Barrel",
			"Misc",
			"Foregrip",
			"Stock",
			"RearSight"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\reciever_minimi_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\assemblycover_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\barrel_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\misc_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\fore_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\stockmap_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\rearsight_co.paa"
		};
		bg_bipod=1;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\handpose_standard.rtm"
		};
		aidispersioncoefx=21;
		aidispersioncoefy=24;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=144;
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="XMC";
			onHoverText="TODO XMC DSS";
		};
		class Library
		{
			libTextDesc="FN Herstal Minimi";
		};
	};
	

class CUP_lmg_minimi_railed: CUP_lmg_minimipara
	{
		scope = 1;
		model="\CUP\Weapons\CUP_Weapons_M249\mesh\minimi_para\minimi_longer_railed.p3d";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_FN_Minimi_ris_stock";
		picture="\CUP\Weapons\CUP_Weapons_M249\tex\ui\gear_minimiris_x_ca";
		ACE_barrelTwist=178;
		ACE_barrelLength=465;
		inertia=0.81;
		initspeed=-1;
		hiddenSelections[]=
		{
			"Reciever",
			"Assembly_cover",
			"Barrel",
			"Misc",
			"Foregrip",
			"Stock",
			"RearSight"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\reciever_minimi_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\assemblycover_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\barrel_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\misc_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\fore_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\stockmap_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\rearsight_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=164;
			class CUP_PicatinnyTopMountM249: CUP_PicatinnyTopMount
			{
				iconPinpoint="center";
				iconPosition[]={0.56999999,0.30899999};
				iconScale=0.15000001;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
			};
		};
	};
	
class CUP_lmg_m249_pip4: CUP_lmg_minimi_railed
	{
		scope = 1;
		model="\CUP\Weapons\CUP_Weapons_M249\mesh\m249\m249e2_pip4.p3d";
		author="$STR_CUP_AUTHOR_STRING";
		displayName="$STR_CUP_dn_m249pip_vfg_stock";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\handpose_VFG.rtm"
		};
		picture="\CUP\Weapons\CUP_Weapons_M249\tex\ui\gear_m249e2pip2_x_ca";
		deployedPivot="deploypoint";
		hasBipod=0;
		inertia=0.70999998;
		ACE_barrelTwist=305;
		ACE_barrelLength=465;
		initspeed=-1;
		hiddenSelections[]=
		{
			"Reciever",
			"Assembly_cover",
			"Barrel",
			"Misc",
			"Foregrip",
			"Stock",
			"RearSight",
			"VFG"
		};
		hiddenSelectionsTextures[]=
		{
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\reciever_249_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\assemblycover_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\barrel_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\misc_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\pip_foregrip_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\stockmap_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\rearsight_co.paa",
			"cup\weapons\cup_weapons_m249\tex\toadie_m249\vert_grip_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=144;
			class CUP_PicatinnySideMountM249: CUP_PicatinnySideMount
			{
				iconPinpoint="center";
				iconPosition[]={0.31999999,0.5};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_side.paa";
			};
		};
	};
class SOCOMD_minimi: CUP_lmg_m249_pip4	{	
		
	// ===========================
		author="SOCOMD";
		scope=2;
		model="\socomd_data_core\weapons\mesh\minimi\2cdo_minimi.p3d";
		displayName="FN Minimi";
		picture="\socomd_data_core\weapons\tex\ui\gear_l110a2_x_ca";
		
		deployedPivot="deploypoint";
		inertia=0.75999999;
		initspeed=-1;
		hasBipod=1;
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\socomd_data_core\weapons\data\gesture\handpose_standard.rtm"
		};
		magazines[]=
		{
			"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_200Rnd_TE1_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Green_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Red_Tracer_556x45_M249",
			"CUP_100Rnd_TE4_Yellow_Tracer_556x45_M249",
			"CUP_200Rnd_TE4_Green_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
			"CUP_200Rnd_TE4_Yellow_Tracer_556x45_L110A1",
			"CUP_30Rnd_556x45_Stanag",
			"30Rnd_556x45_STANAG",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_green"
		};
		hiddenSelections[]=
		{
			"Reciever",
			"Assembly_cover",
			"Barrel",
			"Misc",
			"Foregrip",
			"Stock",
			"RearSight",
			"VFG"
		};
		hiddenSelectionsTextures[]=
		{
			"socomd_data_core\weapons\tex\toadie_m249\reciever_minimi_co.paa",
			"socomd_data_core\weapons\tex\toadie_m249\assemblycover_co.paa",
			"socomd_data_core\weapons\tex\toadie_m249\barrel_co.paa",
			"socomd_data_core\weapons\tex\toadie_m249\misc_co.paa",
			"socomd_data_core\weapons\tex\toadie_m249\pip_foregrip_co.paa",
			"socomd_data_core\weapons\tex\toadie_m249\stockmap_co.paa",
			"socomd_data_core\weapons\tex\toadie_m249\rearsight_co.paa",
			"socomd_data_core\weapons\tex\toadie_m249\vert_grip_co.paa"
		};
	};
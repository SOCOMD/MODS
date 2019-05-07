//Rifle 556 - SMA_30Rnd_556x45_M855A1
class SMA_M4afgSTOCK; //Default
class SMA_MK18MOEBLK_SM;
class SMA_AUG_A3_F;
class SMA_HK416CUSTOMCQBvfgB;

//RifleGL 556 - SMA_30Rnd_556x45_M855A1
class SMA_M4_GL_SM; //Default
class SMA_MK18BLK_GL_SM;
class SMA_AUG_EGLM;
class SMA_HK416GLCQB_B;

//Rifle 762 - 20Rnd_762x51_Mag
class SMA_AssaultBase;
class SMA_762_RIFLEBASE : SMA_AssaultBase {
	magazineWell[] = {"CBA_762x51_HK417"};
};
class SMA_HK417_16in;
class SMA_HK417vfg;

class srifle_EBR_F;
class SPARTAN_EBR_black_F : srifle_EBR_F {
	magazineWell[] = {"CBA_762x51_HK417"};
};

//Machine Gun 556
class CUP_lmg_minimi_railed;
class CUP_lmg_m249_pip2 : CUP_lmg_minimi_railed {
	displayName = "FN Minimi HS";
	magazineWell[] = {"CBA_556x45_MINIMI"};
};

//Machine Gun 762
class sma_minimi_762_base_F;
class sma_minimi_mk3_762tsb : sma_minimi_762_base_F {
	displayName = "Mk 48 Maximi";
	magazineWell[] = {"SOCOMD_762_150Rnd"};
};

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
class SOCOMD_RUS_AK: CUP_arifle_AK104_railed {
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
class SOCOMD_RUS_AK_acc: SOCOMD_RUS_AK {
	displayName="RU-AK-104 (Modified)";
	class LinkedItems{
		class LinkedItemsOptic{
			item = "CUP_optic_MicroT1_low_OD";
			slot = "CUP_PicatinnySideMountAK";
		};
		class LinkedItemsAcc{
			item = "RH_peq15b";
			slot = "CUP_PicatinnyTopMountAK";
		};
		class LinkedItemsMuzzle{
			item = "CUP_muzzle_Bizon";
			slot = "CUP_EastMuzzleSlotAK";
		};
	};
};
class CUP_arifle_AK103_GL_railed;
class SOCOMD_RUS_AK_GL: CUP_arifle_AK103_GL_railed {
	displayName="RU-AK-104-GL (Modified)";
	hiddenSelections[] = {
		"Camo1",
		"Camo2",
		"Camo3",
		"CamoRail",
		"CamoGL1",
		"CamoGL2"};
	hiddenSelectionsTextures[]=
	{
		"CUP\Weapons\CUP_Weapons_AK\Data\ak74m_body_camo_co.paa",
		"CUP\Weapons\CUP_Weapons_AK\Data\ak74m_stock_camo_co.paa",
		"CUP\Weapons\CUP_Weapons_AK\Data\ak74m_magazine_camo_co.paa",
		"socomd_data_core\Russian\ak74m_grip_rail_co.paa",
		"CUP\Weapons\CUP_Weapons_AK\Data\gp25_body_co.paa",
		"CUP\Weapons\CUP_Weapons_AK\Data\gp25_sight_co.paa"
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
	aiDispersionCoefY=4;
	aiDispersionCoefX=4;

};
class SOCOMD_RUS_AK_GL_acc: SOCOMD_RUS_AK_GL{
	class LinkedItems{
		class LinkedItemsOptic{
			item = "CUP_optic_MicroT1_low_OD";
			slot = "CUP_PicatinnySideMountAK";
		};
		class LinkedItemsAcc{
			item = "RH_peq15b";
			slot = "CUP_PicatinnyTopMountAK";
		};
		class LinkedItemsMuzzle{
			item = "CUP_muzzle_Bizon";
			slot = "CUP_EastMuzzleSlotAK";
		};
	};
};
class CUP_arifle_RPK74M_railed;
class SOCOMD_RUS_RPK: CUP_arifle_RPK74M_railed{
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
class SOCOMD_RUS_RPK_acc : SOCOMD_RUS_RPK{
	class LinkedItems{
		class LinkedItemsOptic{
			item = "CUP_optic_MicroT1_low_OD";
			slot = "CUP_PicatinnySideMountAK";
		};
		class LinkedItemsAcc{
			item = "RH_peq15b";
			slot = "CUP_PicatinnyTopMountAK";
		};
		class LinkedItemsMuzzle{
			item = "CUP_muzzle_TGPA";
			slot = "CUP_EastMuzzleSlotAK";
		};
	};
};

class srifle_DMR_05_blk_F;
class SOCOMD_RUS_Cyrus_acc : srifle_DMR_05_blk_F{
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
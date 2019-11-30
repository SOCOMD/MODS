class CfgLoadoutWeapons {
	class Rifle_556;
	class SMA_M4afgSTOCK : Rifle_556 {};
	class SMA_MK18MOEBLK_SM : Rifle_556 {};
	class SMA_AUG_A3_F : Rifle_556 {};
	class SMA_HK416CUSTOMCQBvfgB : Rifle_556 {};
	class S_145_KAG_MAG : Rifle_556 {};
	//TAN
	class SMA_MK18MOETAN_SM : Rifle_556 {};
	class SMA_AUG_A3_KRYPT_F : Rifle_556 {};
	class SMA_HK416CUSTOMCQBvfg : Rifle_556 {};
	//OD
	class SMA_MK18MOEOD_SM : Rifle_556 {};
	class SMA_AUG_A3_MCAM_F : Rifle_556 {};
	class SMA_HK416CQB_vfg_ODPAINTED : Rifle_556 {};
	
	class RifleGL_556;
	class SMA_M4_GL_SM : RifleGL_556 {};
	class SMA_MK18BLK_GL_SM : RifleGL_556 {};
	class SMA_AUG_EGLM : RifleGL_556 {};
	class SMA_HK416GLCQB_B : RifleGL_556 {};
	//TAN
	class SMA_MK18TAN_GL_SM : RifleGL_556 {};
	class SMA_AUG_EGLM_tan : RifleGL_556 {};
	class SMA_HK416GLCQB : RifleGL_556 {};
	//OD
	class SMA_MK18OD_GL_SM : RifleGL_556 {};
	class SMA_AUG_EGLM_Olive : RifleGL_556 {};
	class SMA_HK416GLCQB_ODP : RifleGL_556 {};

	class Rifle_556_Camo;
	class S_145_MOD_MAG_Camo: Rifle_556_Camo {
		loadoutWhitelist[] = {
			"SOCOMD_Rifleman",
			"SOCOMD_Sapper",
			"SOCOMD_Medic",
			"SOCOMD_AT",
			"SOCOMD_AT_Assistant"
		};
		magazines[] = {
			{"S_30rnd_556x45_EPR_PMAG_Camo", 8}
		};
	};
	
	class MachineGun_556;
	class CUP_lmg_minimi_railed : MachineGun_556 {};

	class MachineGun_762;
	class CUP_lmg_Mk48_nohg : MachineGun_762 {
		magazines[] = {
			{"SOCOMD_Item_Magazine_762x51_150Rnd_Tracer", 4}
		};
	};
	class CUP_lmg_Mk48_nohg_des : MachineGun_762 {
		magazines[] = {
			{"SOCOMD_Item_Magazine_762x51_150Rnd_Tracer", 4}
		};
	};
	class CUP_lmg_Mk48_nohg_tan : MachineGun_762 {
		magazines[] = {
			{"SOCOMD_Item_Magazine_762x51_150Rnd_Tracer", 4}
		};
	};
	class CUP_lmg_Mk48_nohg_wdl : MachineGun_762 {
		magazines[] = {
			{"SOCOMD_Item_Magazine_762x51_150Rnd_Tracer", 4}
		};
	};

	class Rifle_556_Marksman;
	class SMA_HK416CUSTOMvfgB : Rifle_556_Marksman {
		loadoutWhitelist[] = {
			"SOCOMD_Marksman",
		};
		magazines[] = {
			{"SOCOMD_Item_Magazine_556x45_30Rnd", 5}
		};
	}; 

	class Rifle_762;
	class SMA_HK417vfg : Rifle_762 {};

	class Long_Rifle_762;
	class SMA_HK417_16in : Long_Rifle_762 {};
	class CUP_srifle_m110_kac_black : Long_Rifle_762 {};
	class CUP_srifle_m110_kac : Long_Rifle_762 {};
	class CUP_srifle_m110_kac_woodland : Long_Rifle_762 {};

	class Launcher;
	class HAFM_LAW : Launcher {};
	class SOCOMD_Carl_Gustav : Launcher {
		magazines[] = {
			{"tf47_m3maaws_HEAT", 1},
			{"tf47_m3maaws_HE", 1}
		};
	};

	class Rifle_300 {
		magazines[] = {
			{"SOCOMD_Item_Magazine_300_5Rnd", 12}
		};
	};

	class SOCOMD_Item_Primary_Recon : Rifle_300 {
		loadoutWhitelist[] = {
			"SOCOMD_Recon"
		};
	};

	class ej_m107;
	class Recon_Barret : ej_m107 {
		loadoutWhitelist[] = {
			"SOCOMD_Recon"
		};
		magazines[] = {
			{"SOCOMD_Item_Magazine_Barret", 6}
		};
	};
	
	class bnae_trg42_camo2_virtual;
	class Recon_338 : bnae_trg42_camo2_virtual {
		loadoutWhitelist[] = {
			"SOCOMD_Recon"
		};
		magazines[] = {
			{"5Rnd_338LM_Magazine", 7},
			{"5Rnd_APDS_338LM_Magazine", 2}
		};
	};

	class bnae_falkor_camo1_virtual;
	class Recon_300WM : bnae_falkor_camo1_virtual {
		loadoutWhitelist[] = {
			"SOCOMD_Recon"
		};
		magazines[] = {
			{"10Rnd_300WM_Magazine", 5}
		};
	};
};
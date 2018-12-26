class CfgLoadoutWeapons {
	class Rifle_556;
	class SMA_M4afgSTOCK : Rifle_556 {};
	class SMA_MK18MOEBLK_SM : Rifle_556 {};
	class SMA_AUG_A3_F : Rifle_556 {};
	class SMA_HK416CUSTOMCQBvfgB : Rifle_556 {};

	class RifleGL_556;
	class SMA_M4_GL_SM : RifleGL_556 {};
	class SMA_MK18BLK_GL_SM : RifleGL_556 {};
	class SMA_AUG_EGLM : RifleGL_556 {};
	class SMA_HK416GLCQB_B : RifleGL_556 {};

	class MachineGun_556;
	class CUP_lmg_m249_pip2 : MachineGun_556 {};

	class MachineGun_762;
	class sma_minimi_mk3_762tsb : MachineGun_762 {
		 magazines[] = {
			{"SMA_150Rnd_762_M80A1", 4}
		};
	};

	class Rifle_762;
	class SMA_HK417vfg : Rifle_762 {};
	
	class Long_Rifle_762;
	class SMA_HK417_16in : Rifle_762 {};
	
	class Launcher;
	class HAFM_LAW : Launcher {};
	class SOCOMD_Carl_Gustav : Launcher {
		magazines[] = {
			{"tf47_m3maaws_HEAT", 1},
			{"tf47_m3maaws_HE", 1}
		};
	};

	class CUP_launch_Javelin : Launcher {
		magazines[] = {
			{"CUP_Javelin_M", 1}
		};
	};

	class Rifle_300 {
		magazines[] = {
			{"SOCOMD_Item_Magazine_300_5Rnd", 12}
		};
	};

	class SOCOMD_Item_Primary_Sniper : Rifle_300 {
		loadoutWhitelist[] = {
			"SOCOMD_Sniper"
		};
		magazines[] = {
			{"SOCOMD_Item_Magazine_300_5Rnd", 6}
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

	class Sniper_Barret : ej_m107 {
		loadoutWhitelist[] = {
			"SOCOMD_Sniper"
		};
		magazines[] = {
			{"SOCOMD_Item_Magazine_Barret", 3}
		};
	};


};
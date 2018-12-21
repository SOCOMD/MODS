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

	class Rifle_762;
	class SMA_HK417_16in : Rifle_762 {};
	class SMA_HK417vfg : Rifle_762 {};

	class Launcher;
	class HAFM_LAW : Launcher {};
	class SOCOMD_Carl_Gustav : Launcher {
		magazines[] = {
			{"tf47_m3maaws_HEAT", 1},
			{"tf47_m3maaws_HEAT", 1}
		};
	};

	class CUP_launch_Javelin : Launcher {
		magazines[] = {
			{"CUP_Javelin_M", 1}
		};
	};
};
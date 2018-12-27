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

	class MachineGun_762;
	class sma_minimi_mk3_762tsb : MachineGun_762 {
		 magazines[] = {
			{"SMA_150Rnd_762_M80A1", 4}
		};
	};

	class Rifle_762;
	class SMA_HK417_16in : Rifle_762 {};
	class SMA_HK417vfg : Rifle_762 {};
};
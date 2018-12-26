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
class SMA_762_RIFLEBASE; //Default
class SMA_HK417_16in : SMA_762_RIFLEBASE {
	magazineWell[] = {"CBA_762x51_HK417"};
};
class SMA_HK417;
class SMA_HK417vfg : SMA_HK417 {
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
};

//Rifle 300WM
class hlc_AWC_base;
class hlc_rifle_awmagnum : hlc_AWC_base {
	magazineWell[] = {"SOCOMD_300_MAG"};
	mass=120;
	allowedSlots[]={901}; // 701 = vest, 801 = uniform, 901 = backpack
};
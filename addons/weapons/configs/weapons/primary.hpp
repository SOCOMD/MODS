class SMG_05_base_F;
//Using CBA_9x19_MP5
class SMG_05_F : SMG_05_base_F {
    magazineWell[] = {"CBA_9x19_MP5"};
};
class Rifle_Base_F;
class Rifle_Long_Base_F : Rifle_Base_F{
    class WeaponSlotsInfo;
};
class bnae_falkor_base : Rifle_Long_Base_F{
    class WeaponSlotsInfo:WeaponSlotsInfo{
        allowedSlots[] = {901};
    };
};
class bnae_trg42_base : Rifle_Long_Base_F{
    class WeaponSlotsInfo:WeaponSlotsInfo{
        allowedSlots[] = {901};
    };
};
class bnae_trg42_f_camo1_virtual;
class bnae_trg42_f_camo1_virtual_kit : bnae_trg42_f_camo1_virtual {
         _generalMacro = "bnae_trg42_f_camo1_virtual_kit";
        class LinkedItems {
            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "bnae_scope_snd_virtual";
            };
            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "bnae_bipod_v2_virtual";
            };
        };
    };

//class SMA_AssaultBase;
//class SMA_762_RIFLEBASE: SMA_AssaultBase {
//    magazineWell[] = {"CBA_762x51_HK417"};
//};
//Rifle 556 - SMA_30Rnd_556x45_M855A1
//class SMA_M4afgSTOCK;
class ACWP_rifle_base: Rifle_Base_F { 
    bullet1[] =     {"A3\sounds_f\weapons\shells\5_56\metal_556_01.wss", 0.1, 1, 15};
	bullet2[] =     {"A3\sounds_f\weapons\shells\5_56\metal_556_02.wss", 0.1, 1, 15};
	bullet3[] =     {"A3\sounds_f\weapons\shells\5_56\metal_556_03.wss", 0.177828, 1, 15};
	bullet4[] =     {"A3\sounds_f\weapons\shells\5_56\metal_556_04.wss", 0.177828, 1, 15};
	bullet5[] =     {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss", 0.1, 1, 15};
	bullet6[] =     {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss", 0.1, 1, 15};
	bullet7[] =     {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss", 0.1, 1, 15};
	bullet8[] =     {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss", 0.1, 1, 15};
	bullet9[] =     {"A3\sounds_f\weapons\shells\5_56\grass_556_01.wss", 0.01, 1, 15};
	bullet10[] =    {"A3\sounds_f\weapons\shells\5_56\grass_556_02.wss", 0.01, 1, 15};
	bullet11[] =    {"A3\sounds_f\weapons\shells\5_56\grass_556_03.wss", 0.01, 1, 15};
	bullet12[] =    {"A3\sounds_f\weapons\shells\5_56\grass_556_04.wss", 0.01, 1, 15};
	soundBullet[] = {"bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
    class Single : Mode_SemiAuto{
        sounds[] = {"StandardSound", "SilencedSound"};

        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
        };

        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
        };

        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
        };
    };
    class FullAuto : Mode_FullAuto{
        sounds[] = {"StandardSound", "SilencedSound"};

        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
        };

        class StandardSound : BaseSoundModeType
        {
            soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
        };

        class SilencedSound : BaseSoundModeType
        {
            soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
        };
    };
};
class rhs_weap_M590_5RD;
class SOCOMD_Shotgun: rhs_weap_M590_5RD {
    displayname = "SOCOMD Entry Shotgun";
    magazineWell[] = {"SOCOMD_Breaching"};
};
class srifle_DMR_06_camo_F;
class ACWP_sr25: srifle_DMR_06_camo_F {
    magazineWell[] = {"CBA_762x51_HK417"};
};
class ACWP_sr25_camo: ACWP_sr25 {};
class ACWP_sr25_ec: ACWP_sr25 {};
class ACWP_sr25_ec_camo: ACWP_sr25_ec {};
class ACWP_sr25_VFG: ACWP_sr25 {};
class ACWP_sr25_VFG_camo: ACWP_sr25_VFG {};

class srifle_EBR_F;
class SPARTAN_EBR_black_F : srifle_EBR_F {
    magazineWell[] = {"CBA_762x51_HK417"};
};
class SPARTAN_EBR_snake_F : srifle_EBR_F {         //Camo
    magazineWell[] = {"CBA_762x51_HK417"};
};
#define SOCOMD_MINIMI_SETTINGS \
    displayName = "FN Minimi PARA";\
    magazineWell[] += {"CBA_556x45_MINIMI"};\
    ace_overheating_dispersion = 0.85; 
#define SOCOMD_MINIMI_FOLDED_MACRO \
    baseWeapon = "SOCOMD_Minimi";\
    rhs_grip1_change = "SOCOMD_Minimi_folded_vfg1";\
    rhs_grip2_change = "SOCOMD_Minimi_folded_vfg2";\
    rhs_grip3_change = "SOCOMD_Minimi_folded_vfg3";
#define SOCOMD_MINIMI_MACRO \
    baseWeapon = "SOCOMD_Minimi";\
    rhs_grip1_change = "SOCOMD_Minimi_vfg1";\
    rhs_grip2_change = "SOCOMD_Minimi_vfg2";\
    rhs_grip3_change = "SOCOMD_Minimi_vfg3";
    
class rhs_weap_minimi_para_railed;
class rhs_weap_minimi_para_railed_vfg1;
class rhs_weap_minimi_para_railed_vfg2;
class rhs_weap_minimi_para_railed_vfg3;
class rhs_weap_minimi_para_railed_folded;
class rhs_weap_minimi_para_railed_vfg1_folded;
class rhs_weap_minimi_para_railed_vfg2_folded;
class rhs_weap_minimi_para_railed_vfg3_folded;
class SOCOMD_Minimi : rhs_weap_minimi_para_railed {
    SOCOMD_MINIMI_SETTINGS
    SOCOMD_MINIMI_MACRO
    rhs_fold = "SOCOMD_Minimi_folded";
};
// RHS BS
class SOCOMD_Minimi_vfg1 : rhs_weap_minimi_para_railed_vfg1 {
    SOCOMD_MINIMI_SETTINGS
    SOCOMD_MINIMI_MACRO
    rhs_fold = "SOCOMD_Minimi_vfg1_folded";
};
class SOCOMD_Minimi_vfg2 : rhs_weap_minimi_para_railed_vfg2 {
    SOCOMD_MINIMI_SETTINGS
    SOCOMD_MINIMI_MACRO
    rhs_fold = "SOCOMD_Minimi_vfg2_folded";
};
class SOCOMD_Minimi_vfg3 : rhs_weap_minimi_para_railed_vfg3 {
    SOCOMD_MINIMI_SETTINGS
    SOCOMD_MINIMI_MACRO
    rhs_fold = "SOCOMD_Minimi_vfg3_folded";
};
class SOCOMD_Minimi_folded : rhs_weap_minimi_para_railed_folded {
    SOCOMD_MINIMI_SETTINGS
    SOCOMD_MINIMI_MACRO
    rhs_fold = "SOCOMD_Minimi";
};
class SOCOMD_Minimi_vfg1_folded : rhs_weap_minimi_para_railed_vfg1_folded {
    SOCOMD_MINIMI_SETTINGS
    SOCOMD_MINIMI_MACRO
    rhs_fold = "SOCOMD_Minimi_vfg1";
};
class SOCOMD_Minimi_vfg2_folded : rhs_weap_minimi_para_railed_vfg2_folded {
    SOCOMD_MINIMI_SETTINGS
    SOCOMD_MINIMI_MACRO
    rhs_fold = "SOCOMD_Minimi_vfg2";
};
class SOCOMD_Minimi_vfg3_folded : rhs_weap_minimi_para_railed_vfg3_folded {
    SOCOMD_MINIMI_SETTINGS
    SOCOMD_MINIMI_MACRO
    rhs_fold = "SOCOMD_Minimi_vfg3";
};

class rhs_weap_fnmag;
class SOCOMD_mag58 : rhs_weap_fnmag {
    inertia = 3;
    displayName = "MAG 58";
    magazineWell[] = {
        "SOCOMD_GPMG_Belt",
        "CBA_762x51_LINKS",
        "M240_762x51",
        "SOCOMD_762_150Rnd"
        };
    // magazines[]=
    //     {
    //         QUOTE(ITEM_MAGAZINE_GPMG_BELT)
    //     };
    ace_overheating_mrbs = 3000; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
    ace_overheating_slowdownFactor = 1; //Slowdown Factor (this will be scaled based on the barrel temp)
    ace_overheating_allowSwapBarrel = 1; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
    ace_overheating_dispersion = 0.9; //Dispersion Factor (this will be scaled based on the barrel temp)  
    baseWeapon = "SOCOMD_mag58";
    rhs_grip1_change = "SOCOMD_mag58";
    rhs_grip2_change = "SOCOMD_mag58";
    rhs_grip3_change = "SOCOMD_mag58";
    rhs_fold = "SOCOMD_mag58";
};
class UK3CB_BAF_L110_762_Base;
class UK3CB_BAF_L110_762 : UK3CB_BAF_L110_762_Base {
    displayName = "Mk 48 Maximi";
    ace_overheating_mrbs = 2000; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
    magazineWell[] += {"SOCOMD_762_150Rnd"};
};

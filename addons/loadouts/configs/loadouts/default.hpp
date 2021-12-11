///Standard SOCOMD
//////////////////////////////////////////////////////////////////////
//Common loadout items
//Contents shared by every loadout
//////////////////////////////////////////////////////////////////////
// COMMON SOCOMD LOADOUT ITEMS


#define LOADOUT_STANDARD_MEDICAL \
    LOADOUT_ITEM(ACE_elasticBandage, 8) \
    LOADOUT_ITEM(ACE_quikclot, 8) \
    LOADOUT_ITEM(ACE_epinephrine, 0) \
    LOADOUT_ITEM(ACE_morphine, 2) \
    LOADOUT_ITEM(ACE_tourniquet, 2) \
    LOADOUT_ITEM(SOCOMD_Apap, 3) \
    LOADOUT_ITEM(ACE_packingBandage, 0) \
    LOADOUT_ITEM(ACE_fieldDressing, 4)  \
    LOADOUT_ITEM(KAT_ChestSeal, 1)    \
    LOADOUT_ITEM(SOCOMD_NDC, 1)    \
    LOADOUT_ITEM(KAT_guedel, 2)

#define LOADOUT_UNIFORM_ESSENTIALS \
    LOADOUT_ITEM(ItemAndroid, 1) \
    LOADOUT_ITEM(ItemcTabHCam, 1) \
    LOADOUT_ITEM(ACE_EarPlugs, 1) \
    LOADOUT_ITEM(ACE_MapTools, 1) \
    LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
    LOADOUT_ITEM(ACE_SpraypaintGreen, 1) \
    LOADOUT_ITEM(murshun_cigs_cigpack, 1) \
    LOADOUT_ITEM(murshun_cigs_lighter, 1) \
    LOADOUT_ITEM(ACWP_18Rnd_9x21_Mag_USP, 3)

#define LOADOUT_COMMANDER_ESSENTIALS \
    LOADOUT_ITEM(ItemcTab, 1) \
    LOADOUT_ITEM(ItemcTabHCam, 1) \
    LOADOUT_ITEM(ACE_EarPlugs, 1) \
    LOADOUT_ITEM(ACE_MapTools, 1) \
    LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
    LOADOUT_ITEM(ACE_SpraypaintGreen, 1) \
    LOADOUT_ITEM(murshun_cigs_cigpack, 1) \
    LOADOUT_ITEM(murshun_cigs_lighter, 1) \
    LOADOUT_ITEM(ACWP_18Rnd_9x21_Mag_USP, 3)

#define LOADOUT_UNIFORM_AO_ESSENTIALS \
    LOADOUT_ITEM(ItemAndroid, 1) \
    LOADOUT_ITEM(ItemcTabHCam, 1) \
    LOADOUT_ITEM(ACE_EarPlugs, 1) \
    LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
    LOADOUT_ITEM(ACWP_18Rnd_9x21_Mag_USP, 2)

#define LOADOUT_PILOT_ESSENTIALS \
    LOADOUT_ITEM(ItemcTabHCam, 1) \
    LOADOUT_ITEM(ACE_EarPlugs, 1) \
    LOADOUT_ITEM(ACE_MapTools, 1) \
    LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
    LOADOUT_ITEM(ACE_microDAGR, 1) \
    LOADOUT_ITEM(ACE_SpraypaintGreen, 1) \
    LOADOUT_ITEM(murshun_cigs_cigpack, 1) \
    LOADOUT_ITEM(murshun_cigs_lighter, 1) \
    LOADOUT_ITEM(ACWP_18Rnd_9x21_Mag_USP, 3)

#define LOADOUT_VEST_ESSENTIALS \
    LOADOUT_ITEM(CUP_HandGrenade_M67, 2) \
    LOADOUT_ITEM(ACE_Chemlight_HiRed, 2) \
    LOADOUT_ITEM(ACE_M84, 2) \
    LOADOUT_ITEM(SmokeShell, 5) \
    LOADOUT_ITEM(ACRE_PRC343, 1) \
    LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)

#define LOADOUT_VEST_AO_ESSENTIALS \
    LOADOUT_ITEM(ACE_Chemlight_HiWhite, 4) \
    LOADOUT_ITEM(SmokeShellPurple, 2) \
    LOADOUT_ITEM(B_IR_Grenade, 2) \
    LOADOUT_ITEM(ACE_HandFlare_White, 2) \
    LOADOUT_ITEM(ACRE_PRC343, 1) \
    LOADOUT_ITEM(ACRE_PRC152, 2) \
    LOADOUT_ITEM(ACE_IR_Strobe_Item, 2)

#define LOADOUT_BACKPACK_ESSENTIALS \
    LOADOUT_ITEM(SOCOMD_NVG, 1) \
    LOADOUT_ITEM(ACE_CableTie, 4)

// COMMON JAC LOADOUT ITEMS

#define LOADOUT_SUPPORT_ESSENTIALS \
    LOADOUT_ITEM(ItemcTabHCam, 1) \
    LOADOUT_ITEM(ACE_EarPlugs, 1) \
    LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
    LOADOUT_ITEM(SOCOMD_GPNVG18b_BLK_F, 1) \
    LOADOUT_ITEM(SOCOMD_NVG, 1) \
    LOADOUT_ITEM(ACE_IR_Strobe_Item, 1) \
    LOADOUT_ITEM(ACRE_PRC343, 1) \
    LOADOUT_ITEM(ACE_DAGR, 1) \
    LOADOUT_ITEM(ACE_MapTools, 1)

#define LOADOUT_SUPPORT_STANDARD_MEDICAL \
    LOADOUT_ITEM(ACE_elasticBandage, 8) \
    LOADOUT_ITEM(ACE_quikclot, 8) \
    LOADOUT_ITEM(ACE_epinephrine, 0) \
    LOADOUT_ITEM(ACE_morphine, 1) \
    LOADOUT_ITEM(ACE_tourniquet, 2) \
    LOADOUT_ITEM(SOCOMD_Apap, 4) \
    LOADOUT_ITEM(ACE_packingBandage, 0) \
    LOADOUT_ITEM(ACE_fieldDressing, 0) \
    LOADOUT_ITEM(SOCOMD_VPN, 1)

//////////////////////////////////////////////////////////////////////
//Individual loadout items
//Contents shared by individual loadouts common to every Qstore
//When you want to change the contents of a loadout on every Qstore, change it here
//////////////////////////////////////////////////////////////////////

//HAT
#define LOADOUT_HAT_BACKPACK                \
    LOADOUT_ITEM(CUP_Javelin_M, 1)

////////////////////////////////////////////////////////////////////////////////
// Uniforms

class SOCOMD_Uniforms {
    Arid = ITEM_DEFAULT_UNIFORM;
    Woodland = ITEM_DEFAULT_UNIFORM;
    Snow = ITEM_SNOW_UNIFORM;
};
class SOCOMD_Recon_Uniforms {
    Arid = ITEM_RECON_UNIFORM;
    Woodland = ITEM_RECON_UNIFORM;
    Snow = ITEM_RECON_SNOW_UNIFORM;
};

////////////////////////////////////////////////////////////////////////////////
// Unarmed

class SOCOMD_Unarmed {
    headgear  = "AU_02_780000_v1";
    binocular = "";
    maxOptic  = "1x";

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// Commander

class SOCOMD_Commander {
    blacklist = "SOCOMD";
    primary            = QUOTE(ITEM_PRIMARY_GL);
    secondary            = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear        = ITEM_DEFAULT_HEADGEAR;
    binocular        = LEADER_BINOCS;
    gps                = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;
    isCommander        = 1;

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = ITEM_VEST_TROOPLEADER;
        class Inventory {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ACRE_PRC152, 2)
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 6)
            LOADOUT_ITEM(ITEM_MAGAZINE_556_TRACER, 2)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_TROOPLEADER;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(Laserbatteries, 2)
            LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
            LOADOUT_ITEM(ACRE_PRC117F, 1)
            LOADOUT_ITEM(SmokeShellGreen, 2)
            LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
            LOADOUT_ITEM(UGL_FlareRed_F, 2)
            LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
            LOADOUT_ITEM(ACE_HuntIR_M203, 3)
            LOADOUT_ITEM(ACE_M14, 3)
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// HAVOC / JTAC
class SOCOMD_TACP {
    blacklist = "SOCOMD";
    primary            = QUOTE(ITEM_PRIMARY_GL);
    secondary            = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear        = ITEM_DEFAULT_HEADGEAR;
    binocular        = "Laserdesignator";
    gps                = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;
    noGrenadeOptions          = 1;
    isTACP        = 1;

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
            LOADOUT_ITEM(ACE_Kestrel4500, 1)
        };
    };

    class Vest {
        type = ITEM_VEST_TROOPLEADER;
        class Inventory {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ACRE_PRC152, 2)
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 6)
            LOADOUT_ITEM(ITEM_MAGAZINE_556_TRACER, 2)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_TROOPLEADER;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(Laserbatteries, 2)
            LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
            LOADOUT_ITEM(ACRE_PRC117F, 1)
            LOADOUT_ITEM(SmokeShellGreen, 2)
            LOADOUT_ITEM(SmokeShellpurple, 2)
            LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 6)
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// Leader

class SOCOMD_Leader {
    blacklist = "SOCOMD";
    primary            = QUOTE(ITEM_PRIMARY_GL);
    secondary            = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear        = ITEM_DEFAULT_HEADGEAR;
    binocular        = LEADER_BINOCS;
    gps                = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;
    isCommander        = 1;

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = ITEM_VEST_PATROLLEADER;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 6)
            LOADOUT_ITEM(ITEM_MAGAZINE_556_TRACER, 2)
            LOADOUT_ITEM(ACRE_PRC152, 2)
        };
    };
    class Backpack {
        type = ITEM_BACKPACK_PATROLLEADER;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(Laserbatteries, 2)
            LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
            LOADOUT_ITEM(SmokeShellGreen, 2)
            LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
            LOADOUT_ITEM(UGL_FlareRed_F, 2)
            LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
            LOADOUT_ITEM(ACE_HuntIR_M203, 3)
            LOADOUT_ITEM(ACE_M14, 3)
        };
    };
};

class SOCOMD_2IC : SOCOMD_Leader {};

////////////////////////////////////////////////////////////////////////////////
// Rifleman

class SOCOMD_Rifleman {
    blacklist = "SOCOMD";
    primary            = QUOTE(ITEM_PRIMARY_M4);
    secondary            = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear        = ITEM_DEFAULT_HEADGEAR;
    binocular        = "";
    gps                = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = ITEM_VEST_RIFLEMAN;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 6)
            LOADOUT_ITEM(ITEM_MAGAZINE_556_TRACER, 2)
        };
    };
    class Backpack {
        type = ITEM_BACKPACK_RIFLEMAN;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(ACE_EntrenchingTool, 1)
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 4)
            LOADOUT_ITEM(20Rnd_762x51_Mag, 2)
            LOADOUT_ITEM(ITEM_MAGAZINE_556_BELT,1)
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// Breacher
class SOCOMD_Breacher {
    blacklist = "SOCOMD";
    primary            = QUOTE(ITEM_PRIMARY_M4);
    secondary            = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear        = ITEM_DEFAULT_HEADGEAR;
    binocular        = "";
    gps                = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = ITEM_VEST_BREACHER;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 6)
            LOADOUT_ITEM(ITEM_MAGAZINE_556_TRACER, 2)
        };
    };
    class Backpack {
        type = ITEM_BACKPACK_BREACHER;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(AMP_Breaching_Charge_Mag, 3)
            LOADOUT_ITEM(ACE_DefusalKit, 1)
            LOADOUT_ITEM(ACE_Clacker, 1)
            LOADOUT_ITEM(ACE_M84, 3)
            LOADOUT_ITEM(ACE_CTS9, 3)
            LOADOUT_ITEM(ACE_EntrenchingTool, 1)
            LOADOUT_ITEM(SOCOMD_Shotgun, 1)
            LOADOUT_ITEM(SOCOMD_Breaching_Slug, 18)
        };
    };
};
////////////////////////////////////////////////////////////////////////////////
// Marksman
class SOCOMD_Marksman {
    blacklist = "SOCOMD";
    primary            = QUOTE(ITEM_PRIMARY_MARKSMAN);
    secondary        = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear        = ITEM_DEFAULT_HEADGEAR;
    binocular        = LEADER_BINOCS;
    gps                = "";
    maxOptic        = MARKSMAN_MAGNIFICATION_LIMIT;
    optics[]         = {"rhsusf_acc_m8541","rhsusf_acc_m8541_d","rhsusf_acc_m8541_low","rhsusf_acc_m8541_low_d","rhsusf_acc_m8541_low_wd","rhsusf_acc_m8541_mrds","rhsusf_acc_m8541_wd","rhsusf_acc_premier_low","rhsusf_acc_premier","rhsusf_acc_premier_mrds","rhsusf_acc_leupoldmk4","rhsusf_acc_leupoldmk4_d","rhsusf_acc_leupoldmk4_wd","rhsusf_acc_leupoldmk4_2","rhsusf_acc_nxs_3515x50_md","rhsusf_acc_nxs_3515x50f1_h58","rhsusf_acc_nxs_3515x50f1_md","rhsusf_acc_nxs_3515x50f1_h58_sun","rhsusf_acc_nxs_3515x50f1_md_sun","rh_leu_mk4","cup_optic_sb_11_4x20_pm","cup_optic_sb_11_4x20_pm_od","cup_optic_sb_11_4x20_pm_tan","hlc_optic_zf95base","rh_anpvs10","rh_accupoint","cup_optic_leupoldmk4","cup_optic_leupoldm3lr""cup_optic_leupoldmk4_mrt_tan","hlc_optic_atacr","hlc_optic_atacr_offset","optic_ams","optic_ams_khk","optic_ams_snd","hlc_optic_leupoldm3a","optic_khs_blk","rh_anpvs10"};

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
            LOADOUT_ITEM(ACE_RangeCard, 1)
        };
    };

    class Vest {
        type = ITEM_VEST_MARKSMAN;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(20Rnd_762x51_Mag, 8)
        };
    };
    class Backpack {
        type = ITEM_BACKPACK_MARKSMAN;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// Sapper

class SOCOMD_Sapper {
    blacklist = "SOCOMD";
    primary            = QUOTE(ITEM_PRIMARY_M4);
    secondary        = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear        = ITEM_DEFAULT_HEADGEAR;
    binocular        = "";
    gps                = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = ITEM_VEST_SAPPER;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 6)
            LOADOUT_ITEM(ITEM_MAGAZINE_556_TRACER, 2)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_SAPPER;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(ACE_Clacker, 1)
            LOADOUT_ITEM(ACE_M26_Clacker, 1)
            LOADOUT_ITEM(ACE_DefusalKit, 1)
            LOADOUT_ITEM(ACE_wirecutter, 1)
            LOADOUT_ITEM(ACE_VMH3, 1)
            LOADOUT_ITEM(ACE_EntrenchingTool, 1)
            LOADOUT_ITEM(MineDetector, 1)
            LOADOUT_ITEM(DemoCharge_Remote_Mag, 3)
            LOADOUT_ITEM(SatchelCharge_Remote_Mag, 1)
            LOADOUT_ITEM(ACE_M14, 3)
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// Machine Gunner

class SOCOMD_MachineGunner {
    blacklist = "SOCOMD";
    primary            = ITEM_PRIMARY_MACHINEGUN;
    secondary        = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear        = ITEM_DEFAULT_HEADGEAR;
    binocular        = "";
    gps                = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = ITEM_VEST_MACHINEGUNNER;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556_BELT, 2)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_MACHINEGUNNER;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556_BELT, 3)
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// Medic

class SOCOMD_Medic {
    blacklist = "SOCOMD";
    primary            = QUOTE(ITEM_PRIMARY_M4);
    secondary        = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear        = ITEM_DEFAULT_HEADGEAR;
    binocular        = "";
    gps                = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
        };
    };

    class Vest {
        type = ITEM_VEST_MEDIC;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 6)
            LOADOUT_ITEM(ITEM_MAGAZINE_556_TRACER, 2)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_MEDIC;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(SOCOMD_booboo, 1)
            LOADOUT_ITEM(SOCOMD_shears, 1)
            LOADOUT_ITEM(ACE_packingBandage, 0)          //Remove
            LOADOUT_ITEM(ACE_fieldDressing, 20)          //Israeli Bandage
            LOADOUT_ITEM(SOCOMD_triangleban, 3)          //Israeli Bandage
            LOADOUT_ITEM(ACE_epinephrine, 0)              //Remove
            LOADOUT_ITEM(ACE_morphine, 0)                  //Remove
            LOADOUT_ITEM(ACE_personalAidKit, 0)            //Remove
            LOADOUT_ITEM(ACE_salineIV_500, 0)             //Remove
            LOADOUT_ITEM(SOCOMD_cascard, 2)
            LOADOUT_ITEM(ACE_elasticBandage, 20)        //Elastic Bandage
            LOADOUT_ITEM(ACE_quikclot, 25)                //Quikclot
            LOADOUT_ITEM(KAT_ChestSeal, 6)                //Hyfin Chest Seal
            LOADOUT_ITEM(SOCOMD_nargloves, 10)
            LOADOUT_ITEM(ACE_tourniquet, 6)                //Tourniquet
            LOADOUT_ITEM(SOCOMD_Epinephrine, 10)        //Epinephrine Ampoule
            LOADOUT_ITEM(SOCOMD_naloxone, 2)                //Naloxone Ampoule
            LOADOUT_ITEM(SOCOMD_fentanyl, 8)                //Fentanyl Ampoule
            LOADOUT_ITEM(SOCOMD_ketamine, 8)                    //Ketamine Ampoule
            LOADOUT_ITEM(SOCOMD_Apap, 10)                //Paracetamol
            LOADOUT_ITEM(SOCOMD_Tetra, 5)                //Paracetamol
            LOADOUT_ITEM(ACE_bloodIV_500, 5)            //Blood
            LOADOUT_ITEM(SOCOMD_notes, 0)
            LOADOUT_ITEM(KAT_guedel, 9)                    //Nasopharangeal Airway
            LOADOUT_ITEM(KAT_larynx, 6)                    //Laryngeal Mask Airway
            LOADOUT_ITEM(KAT_accuvac, 1)                //Medical Suction
            LOADOUT_ITEM(KAT_Pulseoximeter, 4)            //Pulseoximeter
            LOADOUT_ITEM(SOCOMD_NDC, 6)                    //14 Gauge needle
            LOADOUT_ITEM(SOCOMD_VPN, 30)                //3mL drug Syringe
            LOADOUT_ITEM(ACE_surgicalKit, 8)            //Surgical Kit
            LOADOUT_ITEM(kat_AED, 1)        //Defibrillator
        };
    };
};

class SOCOMD_AO{
    blacklist = "SOCOMD";
    primary            = QUOTE(ITEM_PRIMARY_M4);
    secondary        = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear        = ITEM_DEFAULT_HEADGEAR;
    binocular        = "";
    gps                = "";
    maxOptic        = LOW_MAGNIFICATION_LIMIT;

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_AO_ESSENTIALS
        };
    };

    class Vest {
        type = ITEM_VEST_MEDIC;
        class Inventory    {
            LOADOUT_VEST_AO_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 4)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_MEDIC;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(SOCOMD_booboo, 1)
            LOADOUT_ITEM(ACE_packingBandage, 0)          //Remove
            LOADOUT_ITEM(ACE_fieldDressing, 15)          //Israeli Bandage
            LOADOUT_ITEM(ACE_epinephrine, 0)              //Remove
            LOADOUT_ITEM(ACE_morphine, 0)                  //Remove
            LOADOUT_ITEM(ACE_personalAidKit, 0)            //Remove
            LOADOUT_ITEM(ACE_salineIV_500, 0)             //Remove
            LOADOUT_ITEM(ACE_elasticBandage, 5)            //Elastic Bandage
            LOADOUT_ITEM(ACE_quikclot, 20)                //Quikclot
            LOADOUT_ITEM(KAT_ChestSeal, 8)                //Hyfin Chest Seal
            LOADOUT_ITEM(ACE_tourniquet, 6)                //Tourniquet
            LOADOUT_ITEM(SOCOMD_Epinephrine, 10)        //Epinephrine Ampoule
            LOADOUT_ITEM(SOCOMD_naloxone, 2)                //Naloxone Ampoule
            LOADOUT_ITEM(SOCOMD_fentanyl, 4)                //Fentanyl Ampoule
            LOADOUT_ITEM(SOCOMD_ketamine, 4)        //Ketamine Ampoule
            LOADOUT_ITEM(SOCOMD_Apap, 10)                    //Paracetamol
            LOADOUT_ITEM(SOCOMD_nargloves, 5)
            LOADOUT_ITEM(SOCOMD_Tetra, 0)                //Paracetamol
            LOADOUT_ITEM(ACE_bloodIV_500, 14)            //Blood
            LOADOUT_ITEM(SOCOMD_shears, 1)
            LOADOUT_ITEM(KAT_guedel, 0)                    //Nasopharangeal Airway
            LOADOUT_ITEM(SOCOMD_cascard, 2)
            LOADOUT_ITEM(KAT_larynx, 6)                    //Laryngeal Mask Airway
            LOADOUT_ITEM(KAT_accuvac, 1)                //Medical Suction
            LOADOUT_ITEM(KAT_Pulseoximeter, 3)            //Pulseoximeter
            LOADOUT_ITEM(SOCOMD_VPN, 30)                //3mL drug Syringe
            LOADOUT_ITEM(SOCOMD_NDC, 8)                    //14 Gauge needle
            LOADOUT_ITEM(ACE_surgicalKit, 4)            //Surgical Kit
            LOADOUT_ITEM(kat_aed, 1)                    //Defibrillator
            LOADOUT_ITEM(ACE_bodyBag, 2)                //Defibrillator
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// LAT

class SOCOMD_AT {
    blacklist = "SOCOMD";
    primary            = QUOTE(ITEM_PRIMARY_M4);
    secondary          = QUOTE(ITEM_DEFAULT_LAUNCHER);
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine    = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear           = ITEM_DEFAULT_HEADGEAR;
    binocular          = LEADER_BINOCS;
    gps                = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;
    optics[]         = {"rhs_optic_maaws"};

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = ITEM_VEST_AT;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 6)
            LOADOUT_ITEM(ITEM_MAGAZINE_556_TRACER, 2)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_AT;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(rhs_mag_maaws_HEAT, 1)
            LOADOUT_ITEM(rhs_mag_maaws_HE, 1)
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// Recon

class SOCOMD_Recon {
    blacklist = "SOCOMD";
    primary            = QUOTE(ITEM_PRIMARY_RECON);
    secondary        = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear        = ITEM_DEFAULT_HEADGEAR;
    binocular        = LEADER_BINOCS;
    gps                = "";
    //optics[]         = {"hlc_optic_DocterV", "hlc_optic_RomeoV", "optic_LRPS", "bnae_scope_blk_virtual", "bnae_scope_snd_virtual", "bnae_scope_mtp_virtual", "bnae_scope_v2_virtual", "optic_KHS_tan", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd", "optic_AMS_khk", "optic_SOS", "RH_anpvs10"};

    class Uniform {
        type = ITEM_RECON_UNIFORM;
        Arid = ITEM_RECON_UNIFORM;
        Woodland = ITEM_RECON_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
            LOADOUT_ITEM(ACE_Kestrel4500, 1)
            LOADOUT_ITEM(ACE_RangeCard, 1)
        };
    };

    class Vest {
        type = ITEM_VEST_RECON;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(Laserdesignator, 1)
            LOADOUT_ITEM(ACE_ATragMX, 1)
            LOADOUT_ITEM(ACRE_PRC152, 1)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_RECON;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(ACE_Tripod, 1)
        };
    };
};



////////////////////////////////////////////////////////////////////////////////
// LOGISTICIAN

class SOCOMD_Logistician {
    blacklist = "SOCOMD";
    primary         = QUOTE(ITEM_PRIMARY_M4);
    secondary         = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear         = ITEM_DEFAULT_HEADGEAR;
    binocular        = "";
    gps             = "ItemcTab";
    maxOptic        = LOW_MAGNIFICATION_LIMIT;
    noGrenadeOptions          = 1;

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = ITEM_VEST_RIFLEMAN;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 6)
            LOADOUT_ITEM(ITEM_MAGAZINE_556_TRACER, 2)
            LOADOUT_ITEM(SmokeShell, 3)
            LOADOUT_ITEM(ACRE_PRC152, 2)
            LOADOUT_ITEM(ACRE_PRC343, 1)
            LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_RIFLEMAN;
        class Inventory    {
            LOADOUT_ITEM(ToolKit, 1)
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// Pilot

class SOCOMD_Pilot {
    blacklist = "SOCOMD";
    primary         = QUOTE(ITEM_PRIMARY_SOLS);
    secondary         = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear         = ITEM_PILOT_HEADGEAR;
    binocular         = "";
    gps             = "ItemcTab";
    maxOptic        = LOW_MAGNIFICATION_LIMIT;
    noGrenadeOptions          = 1;

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM;
        Arid = ITEM_DEFAULT_UNIFORM;
        Woodland = ITEM_DEFAULT_UNIFORM_AMCU;
        class Inventory    {
            LOADOUT_PILOT_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = ITEM_VEST_PILOT;
        class Inventory    {
            LOADOUT_ITEM(ACE_Chemlight_HiRed, 2)
            LOADOUT_ITEM(ACE_HandFlare_Red, 2)
            LOADOUT_ITEM(SmokeShell, 5)
            LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)
            LOADOUT_ITEM(ACRE_PRC152, 2)
        };
    };
    class Backpack {
        type = ITEM_BACKPACK_PILOT;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(ACRE_PRC117F, 1)
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// Crewman

class SOCOMD_Crewman : SOCOMD_Pilot {
    headgear = ITEM_CREW_HEADGEAR;
};

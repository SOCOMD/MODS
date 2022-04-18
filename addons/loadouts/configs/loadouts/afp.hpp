
////////////////////////////////////////////////////////////////////////////////
// Leader

class SOCOMD_AFP_Leader {
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
        type = ITEM_DEFAULT_UNIFORM_MCB;
        Arid = ITEM_DEFAULT_UNIFORM_MCB;
        Woodland = ITEM_DEFAULT_UNIFORM_MCB;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = ITEM_VEST_PATROLLEADER;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 8)
            
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

////////////////////////////////////////////////////////////////////////////////
// Rifleman

class SOCOMD_AFP_Rifleman {
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
        type = ITEM_DEFAULT_UNIFORM_MCB;
        Arid = ITEM_DEFAULT_UNIFORM_MCB;
        Woodland = ITEM_DEFAULT_UNIFORM_MCB;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = ITEM_VEST_RIFLEMAN;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 8)
            
        };
    };
    class Backpack {
        type = ITEM_BACKPACK_RIFLEMAN;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(ACE_EntrenchingTool, 1)
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// Breacher
class SOCOMD_AFP_Breacher {
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
        type = ITEM_DEFAULT_UNIFORM_MCB;
        Arid = ITEM_DEFAULT_UNIFORM_MCB;
        Woodland = ITEM_DEFAULT_UNIFORM_MCB;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = ITEM_VEST_BREACHER;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 8)
            
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
class SOCOMD_AFP_Marksman {
    blacklist = "SOCOMD";
    primary            = QUOTE(ITEM_PRIMARY_MARKSMAN);
    secondary        = "";
    handgun            = QUOTE(ITEM_DEFAULT_HANDGUN);
    handgunMagazine = QUOTE(ITEM_DEFAULT_HANDGUN_MAGAZINE);
    headgear        = ITEM_DEFAULT_HEADGEAR;
    binocular        = LEADER_BINOCS;
    gps                = "";
    maxOptic        = MARKSMAN_MAGNIFICATION_LIMIT;
    optics[]         = {"rhsusf_acc_m8541","rhsusf_acc_m8541_d","rhsusf_acc_m8541_low","rhsusf_acc_m8541_low_d","rhsusf_acc_m8541_low_wd","rhsusf_acc_m8541_mrds","rhsusf_acc_m8541_wd","rhsusf_acc_premier_low","rhsusf_acc_premier","rhsusf_acc_premier_mrds","rhsusf_acc_leupoldmk4","rhsusf_acc_leupoldmk4_d","rhsusf_acc_leupoldmk4_wd","rhsusf_acc_leupoldmk4_2","rhsusf_acc_nxs_3515x50_md","rhsusf_acc_nxs_3515x50f1_h58","rhsusf_acc_nxs_3515x50f1_md","rhsusf_acc_nxs_3515x50f1_h58_sun","rhsusf_acc_nxs_3515x50f1_md_sun","rh_leu_mk4","hlc_optic_zf95base","rh_anpvs10","rh_accupoint","hlc_optic_atacr","hlc_optic_atacr_offset","optic_ams","optic_ams_khk","optic_ams_snd","hlc_optic_leupoldm3a","optic_khs_blk","rh_anpvs10"};

    class Uniform {
        type = ITEM_DEFAULT_UNIFORM_MCB;
        Arid = ITEM_DEFAULT_UNIFORM_MCB;
        Woodland = ITEM_DEFAULT_UNIFORM_MCB;
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
// Medic

class SOCOMD_AFP_Medic {
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
        type = ITEM_DEFAULT_UNIFORM_MCB;
        Arid = ITEM_DEFAULT_UNIFORM_MCB;
        Woodland = ITEM_DEFAULT_UNIFORM_MCB;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
        };
    };

    class Vest {
        type = ITEM_VEST_MEDIC;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556, 8)
            
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

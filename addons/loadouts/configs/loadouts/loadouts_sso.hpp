// Defunct atm. Needs updating.
// #include default.hpp

///Russian SSO (DMOCOS)
#define SSO_DEFAULT_UNIFORM "USP_G3C_MX_MC_RUS"
#define SSO_DEFAULT_HEADGEAR "AGE_Fast_Tan_C_H"

class SOCOMD_SSO_Commander {
    primary            = "rhs_weap_ak103_gp25";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = SSO_DEFAULT_HEADGEAR;
    binocular        = "Laserdesignator";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;
    isCommander        = 1;

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "age_lv119_sl_holster_multicam";
        class Inventory {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ACRE_PRC152, 2)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_TROOPLEADER;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(itc_land_tablet_rover,1)
            LOADOUT_ITEM(Laserbatteries, 2)
            LOADOUT_ITEM(ACRE_PRC117F, 1)
            LOADOUT_ITEM(ACE_M14, 3)
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// Leader

class SOCOMD_SSO_Leader {
    primary            = "rhs_weap_ak103_gp25";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = SSO_DEFAULT_HEADGEAR;
    binocular        = "Laserdesignator";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;
    isCommander        = 1;

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "age_lv119_sl_holster_multicam";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(itc_land_tablet_rover,1)
        };
    };
    class Backpack {
        type = ITEM_BACKPACK_PATROLLEADER;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(Laserbatteries, 2)
            LOADOUT_ITEM(ACRE_PRC152, 2)
            LOADOUT_ITEM(ACE_M14, 3)
        };
    };
};

class SOCOMD_SSO_2IC : SOCOMD_Leader {};

////////////////////////////////////////////////////////////////////////////////
// Rifleman

class SOCOMD_SSO_Rifleman {
    primary            = "rhs_weap_ak105";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = SSO_DEFAULT_HEADGEAR;
    binocular        = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "age_tv110_ak_holster_multicam";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
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
class SOCOMD_SSO_Breacher {
    primary            = "rhs_weap_ak105";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = SSO_DEFAULT_HEADGEAR;
    binocular        = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "age_tv110_ak_holster_multicam";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
        };
    };
    class Backpack {
        type = ITEM_BACKPACK_BREACHER;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(tsp_frameCharge_mag, 1)
            LOADOUT_ITEM(tsp_stickCharge_mag, 1)
            LOADOUT_ITEM(tsp_popperCharge_mag, 3)
            LOADOUT_ITEM(ACE_DefusalKit, 1)
            LOADOUT_ITEM(ACE_Clacker, 1)
            LOADOUT_ITEM(ACE_M84, 3)
            LOADOUT_ITEM(ACE_CTS9, 3)
            LOADOUT_ITEM(ACE_EntrenchingTool, 1)
        };
    };
};
////////////////////////////////////////////////////////////////////////////////
// Marksman
class SOCOMD_SSO_Marksman {
    primary            = "rhs_weap_svdp_npz";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = SSO_DEFAULT_HEADGEAR;
    binocular        = "";
    maxOptic        = MARKSMAN_MAGNIFICATION_LIMIT;
    optics[]         = {"rh_leu_mk4","hlc_optic_zf95base","rh_anpvs10","rh_accupoint"};

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "age_tv110_ak_holster_multicam";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
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

class SOCOMD_SSO_Sapper {
    primary            = "rhs_weap_ak105";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = SSO_DEFAULT_HEADGEAR;
    binocular        = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "age_tv110_ak_holster_multicam";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
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

class SOCOMD_SSO_MachineGunner {
    primary            = "rhs_weap_rpk74m";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = SSO_DEFAULT_HEADGEAR;
    binocular        = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "age_tv110_ak_holster_multicam";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_MACHINEGUNNER;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// Medic

class SOCOMD_SSO_Medic {
    primary            = "rhs_weap_ak105";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = SSO_DEFAULT_HEADGEAR;
    binocular        = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
        };
    };

    class Vest {
        type = "age_tv110_sl_holster_multicam";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
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
            LOADOUT_ITEM(ACE_chestSeal, 6)                //Hyfin Chest Seal
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
            LOADOUT_ITEM(ACE_basicAirway, 9)                    //Nasopharangeal Airway
            LOADOUT_ITEM(ACE_advancedAirway, 6)                    //Laryngeal Mask Airway
            LOADOUT_ITEM(ACE_pocketBVM, 1)                //Medical Suction
            LOADOUT_ITEM(ACE_Pulseoximeter, 4)            //Pulseoximeter
            LOADOUT_ITEM(SOCOMD_NDC, 6)                    //14 Gauge needle
            LOADOUT_ITEM(SOCOMD_VPN, 30)                //3mL drug Syringe
            LOADOUT_ITEM(ACE_surgicalKit, 8)            //Surgical Kit
            LOADOUT_ITEM(socomd_defib_AED, 1)        //Defibrillator
        };
    };
};

class SOCOMD_SSO_AO{
    primary            = "rhs_weap_ak105";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = SSO_DEFAULT_HEADGEAR;
    binocular        = "";
    maxOptic        = LOW_MAGNIFICATION_LIMIT;

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_AO_ESSENTIALS
        };
    };

    class Vest {
        type = "age_tv110_sl_holster_multicam";
        class Inventory    {
            LOADOUT_VEST_AO_ESSENTIALS
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_MEDIC;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_BACKPACK_MEDIC
        };
    };
};

////////////////////////////////////////////////////////////////////////////////
// LAT

class SOCOMD_SSO_AT {
    primary            = "rhs_weap_ak105";
    secondary        = "rhs_weap_rpg7";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = SSO_DEFAULT_HEADGEAR;
    binocular        = "";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "age_tv110_ak_holster_multicam";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_AT;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
        };
    };
};

class SOCOMD_SSO_AT_Assistant : SOCOMD_AT {
    secondary = "";
    binocular = "Binocular";
};

////////////////////////////////////////////////////////////////////////////////
// Recon

class SOCOMD_SSO_Recon {
    primary            = "rhs_weap_t5000";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = SSO_DEFAULT_HEADGEAR;
    binocular        = LEADER_BINOCS;
    optics[]         = {"hlc_optic_DocterV", "hlc_optic_RomeoV", "optic_LRPS", "bnae_scope_blk_virtual", "bnae_scope_snd_virtual", "bnae_scope_mtp_virtual", "bnae_scope_v2_virtual", "optic_KHS_tan", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd", "optic_AMS_khk", "optic_SOS", "RH_anpvs10"};

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
            LOADOUT_ITEM(ACE_Kestrel4500, 1)
            LOADOUT_ITEM(ACE_RangeCard, 1)
        };
    };

    class Vest {
        type = "AGE_TV110_AK_Holster_MultiCam";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(Laserdesignator, 1)
            LOADOUT_ITEM(ACE_ATragMX, 1)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_RECON;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(itc_land_tablet_rover,1)
            LOADOUT_ITEM(ACE_Tripod, 1)
            LOADOUT_ITEM(ACRE_PRC152, 1)
        };
    };
};

/* No longer used

class SOCOMD_SSO_Recon_Assistant {
    primary            = "rhs_weap_svdp_npz";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear         = SSO_DEFAULT_HEADGEAR;
    binocular        = LEADER_BINOCS;
    maxOptic        = MARKSMAN_MAGNIFICATION_LIMIT;
    optics[]         = {"hlc_optic_DocterV", "hlc_optic_RomeoV", "optic_LRPS", "bnae_scope_blk_virtual", "bnae_scope_snd_virtual", "bnae_scope_mtp_virtual", "bnae_scope_v2_virtual", "optic_KHS_tan", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd", "optic_AMS_khk", "optic_SOS", "RH_anpvs10"};

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
            LOADOUT_ITEM(ACE_Kestrel4500, 1)
            LOADOUT_ITEM(ACE_RangeCard, 1)
        };
    };

    class Vest {
        type = "AGE_TV110_AK_Holster_MultiCam";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(Laserdesignator, 1)
            LOADOUT_ITEM(ACE_ATragMX, 1)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_RECON;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(itc_land_tablet_rover,1)
            LOADOUT_ITEM(ACE_Tripod, 1)
            LOADOUT_ITEM(ACRE_PRC152, 1)
        };
    };
};
*/
////////////////////////////////////////////////////////////////////////////////
// LOGISTICIAN

class SOCOMD_SSO_Logistician {
    primary         = "rhs_weap_aks74un";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear         = SSO_DEFAULT_HEADGEAR;
    binocular        = "";
    maxOptic        = LOW_MAGNIFICATION_LIMIT;

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "vss_01_mc";
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
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

class SOCOMD_SSO_Pilot {
    primary         = "rhs_weap_aks74un";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear         = ITEM_PILOT_HEADGEAR;
    binocular         = "";
    maxOptic        = LOW_MAGNIFICATION_LIMIT;

    class Uniform {
        type = SSO_DEFAULT_UNIFORM;
        class Inventory    {
            LOADOUT_PILOT_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "age_lv119_sl_multicam";
        class Inventory    {
            LOADOUT_ITEM(ACE_Chemlight_HiRed, 2)
            LOADOUT_ITEM(ACE_M84, 2)
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

class SOCOMD_SSO_Crewman : SOCOMD_SSO_Pilot {
    headgear = "SOCOMD_Ground_Crew_helmet";
};

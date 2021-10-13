///Russian LOWVIS (DMOCOS)
    
class SOCOMD_LOWVIS_Commander {
    primary            = "ACWP_M4A5_145_7rail_GL";
    secondary            = "";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = "Laserdesignator";
    gps                = "ItemAndroid";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;
    isCommander        = 1;
    class Uniform {
        type = "CUP_I_B_PMC_Unit_42";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "lbt_comms_mc";
        class Inventory {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ACRE_PRC152, 2)
            LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_M, 8)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_TROOPLEADER;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS            
            LOADOUT_ITEM(itc_land_tablet_rover,1)
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
// Leader

class SOCOMD_LOWVIS_Leader {
    primary            = "ACWP_M4A5_145_7rail_GL";
    secondary            = "";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = "Laserdesignator";
    gps                = "ItemAndroid";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;
    isCommander        = 1;

    class Uniform {
        type = "CUP_I_B_PMC_Unit_43";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "lbt_comms_mc";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(itc_land_tablet_rover,1)
            LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_M, 8)
        };
    };
    class Backpack {
        type = ITEM_BACKPACK_PATROLLEADER;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(Laserbatteries, 2)
            LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
            LOADOUT_ITEM(ACRE_PRC152, 2)
            LOADOUT_ITEM(SmokeShellGreen, 2)
            LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
            LOADOUT_ITEM(UGL_FlareRed_F, 2)
            LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
            LOADOUT_ITEM(ACE_HuntIR_M203, 3)
            LOADOUT_ITEM(ACE_M14, 3)
        };
    };
};

class SOCOMD_LOWVIS_2IC : SOCOMD_Leader {};

////////////////////////////////////////////////////////////////////////////////
// Rifleman

class SOCOMD_LOWVIS_Rifleman {
    primary            = "ACWP_M4A5_145_troy_base";
    secondary            = "";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "CUP_I_B_PMC_Unit_15";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "lbt_tl_mc";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_M, 8)
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
class SOCOMD_LOWVIS_Breacher {
    primary            = "ACWP_M4A5_145_troy_base";
    secondary            = "";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "CUP_I_B_PMC_Unit_1";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "lbt_tl_mc";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_M, 8)
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
        };
    };
};
////////////////////////////////////////////////////////////////////////////////
// Marksman
class SOCOMD_LOWVIS_Marksman {
    primary            = "ACWP_sr25";
    secondary        = ITEM_SECONDARY_MARKSMAN;
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = MARKSMAN_MAGNIFICATION_LIMIT;
    optics[]         = {"rh_leu_mk4","cup_optic_sb_11_4x20_pm","cup_optic_sb_11_4x20_pm_od","cup_optic_sb_11_4x20_pm_tan","hlc_optic_zf95base","rh_anpvs10","rh_accupoint","cup_optic_leupoldmk4_mrt_tan"};

    class Uniform {
        type = "CUP_I_B_PMC_Unit_3";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "lbt_tl_mc";
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

class SOCOMD_LOWVIS_Sapper {
    primary            = "ACWP_M4A5_145_troy_base";
    secondary            = "";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "CUP_I_B_PMC_Unit_20";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "lbt_tl_mc";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_M, 8)
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

class SOCOMD_LOWVIS_MachineGunner {
    primary            = "CUP_lmg_L110A1_railed";
    secondary            = "";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "CUP_I_B_PMC_Unit_11";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "lbt_tl_mc";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(ITEM_MAGAZINE_556_BELT, 2)
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

class SOCOMD_LOWVIS_Medic {
    primary            = "ACWP_M4A5_145_troy_base";
    secondary            = "";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "CUP_I_B_PMC_Unit_38";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
        };
    };

    class Vest {
        type = ITEM_VEST_MEDIC;
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_M, 8)
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

class SOCOMD_LOWVIS_AO{
    primary            = "ACWP_M4A5_145_troy_base";
    secondary            = "";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = "";
    gps                = "ItemAndroid";
    maxOptic        = LOW_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "CUP_I_B_PMC_Unit_40";
        class Inventory    {
            LOADOUT_UNIFORM_AO_ESSENTIALS
        };
    };

    class Vest {
        type = "lbt_tl_mc";
        class Inventory    {
            LOADOUT_VEST_AO_ESSENTIALS
            LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_M, 4)
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

class SOCOMD_LOWVIS_AT {
    primary            = "ACWP_M4A5_145_troy_base";
    secondary        = "CUP_launch_RPG18";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "CUP_I_B_PMC_Unit_2";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "lbt_tl_mc";
        class Inventory    {
            LOADOUT_VEST_ESSENTIALS
            LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_M, 8)
        };
    };

    class Backpack {
        type = ITEM_BACKPACK_AT;
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
        };
    };
};

class SOCOMD_LOWVIS_AT_Assistant : SOCOMD_AT {
    secondary = "";
    binocular = "Binocular";
};

////////////////////////////////////////////////////////////////////////////////
// Recon

class SOCOMD_LOWVIS_Recon {
    primary            = "bnae_trg42_camo2_virtual";
    secondary            = "";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = LEADER_BINOCS;
    gps                = "ItemAndroid";
    optics[]         = {"hlc_optic_DocterV", "hlc_optic_RomeoV", "optic_LRPS", "bnae_scope_blk_virtual", "bnae_scope_snd_virtual", "bnae_scope_mtp_virtual", "bnae_scope_v2_virtual", "optic_KHS_tan", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd", "optic_AMS_khk", "optic_SOS", "RH_anpvs10"};

    class Uniform {
        type = "CUP_I_B_PMC_Unit_41";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
            LOADOUT_ITEM(ACE_Kestrel4500, 1)
            LOADOUT_ITEM(ACE_RangeCard, 1)
        };
    };

    class Vest {
        type = "lbt_tl_mc";
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

class SOCOMD_LOWVIS_Recon_Assistant {
    primary            = "ACWP_sr25";
    secondary            = "";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear         = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = LEADER_BINOCS;
    gps                = "ItemAndroid";
    maxOptic        = MARKSMAN_MAGNIFICATION_LIMIT;
    optics[]         = {"hlc_optic_DocterV", "hlc_optic_RomeoV", "optic_LRPS", "bnae_scope_blk_virtual", "bnae_scope_snd_virtual", "bnae_scope_mtp_virtual", "bnae_scope_v2_virtual", "optic_KHS_tan", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd", "optic_AMS_khk", "optic_SOS", "RH_anpvs10"};

    class Uniform {
        type = "CUP_I_B_PMC_Unit_39";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
            LOADOUT_ITEM(ACE_Kestrel4500, 1)
            LOADOUT_ITEM(ACE_RangeCard, 1)
        };
    };

    class Vest {
        type = "lbt_tl_mc";
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

////////////////////////////////////////////////////////////////////////////////
// LOGISTICIAN

class SOCOMD_LOWVIS_Logistician {
    primary         = "ACWP_M4A5_145_troy_base";
    secondary            = "";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear         = "ADFU_H_Airframe_Cover_05_MC";
    binocular        = "";
    gps             = "ItemcTab";
    maxOptic        = LOW_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "CUP_I_B_PMC_Unit_38";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "lbt_tl_mc";
        class Inventory    {
            LOADOUT_BACKPACK_ESSENTIALS
            LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_M, 8)
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

class SOCOMD_LOWVIS_Pilot {
    primary         = "CUP_smg_MP5A5";
    secondary            = "";
    handgun            = "acwp_glock19_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear         = "SOCOMD_Headgear_Pilot";
    binocular         = "";
    gps             = "ItemcTab";
    maxOptic        = LOW_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "CUP_I_B_PMC_Unit_42";
        class Inventory    {
            LOADOUT_PILOT_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "lbt_comms_mc";
        class Inventory    {
            LOADOUT_ITEM(ACE_Chemlight_HiRed, 2)
            LOADOUT_ITEM(ACE_M84, 2)
            LOADOUT_ITEM(SmokeShell, 5)
            LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)
            LOADOUT_ITEM(ACRE_PRC152, 2)
            LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_M, 4)
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

class SOCOMD_LOWVIS_Crewman : SOCOMD_LOWVIS_Pilot {
    headgear = "SOCOMD_Headgear_Crew";
};
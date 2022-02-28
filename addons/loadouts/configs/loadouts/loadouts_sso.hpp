// Defunct atm. Needs updating. 
// #include default.hpp

///Russian SSO (DMOCOS)
    
class SOCOMD_SSO_Commander {
    primary            = "SOCOMD_SSO_AK_GL";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "AGE_Fast_Tan_C_H_A";
    binocular        = "Laserdesignator";
    gps                = "ItemAndroid";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;
    isCommander        = 1;

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "AGE_LV119_SL_Holster_MultiCam";
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

class SOCOMD_SSO_Leader {
    primary            = "SOCOMD_SSO_AK_GL";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "AGE_Fast_Tan_C_H_A";
    binocular        = "Laserdesignator";
    gps                = "ItemAndroid";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;
    isCommander        = 1;

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "AGE_LV119_SL_Holster_MultiCam";
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

class SOCOMD_SSO_2IC : SOCOMD_Leader {};

////////////////////////////////////////////////////////////////////////////////
// Rifleman

class SOCOMD_SSO_Rifleman {
    primary            = "SOCOMD_SSO_AK";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "AGE_Fast_Tan_C_H_A";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "AGE_TV110_AK_Holster_MultiCam";
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
class SOCOMD_SSO_Breacher {
    primary            = "SOCOMD_SSO_AK";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "AGE_Fast_Tan_C_H_A";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "AGE_TV110_AK_Holster_MultiCam";
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
class SOCOMD_SSO_Marksman {
    primary            = "CUP_srifle_SVD_top_rail";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "AGE_Fast_Tan_C_H_A";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = MARKSMAN_MAGNIFICATION_LIMIT;
    optics[]         = {"rh_leu_mk4","cup_optic_sb_11_4x20_pm","cup_optic_sb_11_4x20_pm_od","cup_optic_sb_11_4x20_pm_tan","hlc_optic_zf95base","rh_anpvs10","rh_accupoint","cup_optic_leupoldmk4_mrt_tan"};

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "AGE_TV110_AK_Holster_MultiCam";
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

class SOCOMD_SSO_Sapper {
    primary            = "SOCOMD_SSO_AK";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "AGE_Fast_Tan_C_H_A";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "AGE_TV110_AK_Holster_MultiCam";
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

class SOCOMD_SSO_MachineGunner {
    primary            = "SOCOMD_SSO_RPK";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "AGE_Fast_Tan_C_H_A";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "AGE_TV110_AK_Holster_MultiCam";
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

class SOCOMD_SSO_Medic {
    primary            = "SOCOMD_SSO_AK";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "AGE_Fast_Tan_C_H_A";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
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
            LOADOUT_ITEM(kat_AED, 1)        //Defibrillator
        };
    };
};

class SOCOMD_SSO_AO{
    primary            = "SOCOMD_SSO_AK";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "AGE_Fast_Tan_C_H_A";
    binocular        = "";
    gps                = "ItemAndroid";
    maxOptic        = LOW_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
        class Inventory    {
            LOADOUT_UNIFORM_AO_ESSENTIALS
        };
    };

    class Vest {
        type = "AGE_TV110_AK_Holster_MultiCam";
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
            LOADOUT_ITEM(ACE_chestSeal, 8)                //Hyfin Chest Seal
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
            LOADOUT_ITEM(ACE_basicAirway, 0)                    //Nasopharangeal Airway
            LOADOUT_ITEM(SOCOMD_cascard, 2)
            LOADOUT_ITEM(ACE_advancedAirway, 6)                    //Laryngeal Mask Airway
            LOADOUT_ITEM(ACE_pocketBVM, 1)                //Medical Suction
            LOADOUT_ITEM(ACE_Pulseoximeter, 3)            //Pulseoximeter
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

class SOCOMD_SSO_AT {
    primary            = "SOCOMD_SSO_AK";
    secondary        = "CUP_launch_RPG18";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "AGE_Fast_Tan_C_H_A";
    binocular        = "";
    gps                = "ItemMicroDAGR";
    maxOptic        = STANDARD_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "AGE_TV110_AK_Holster_MultiCam";
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

class SOCOMD_SSO_AT_Assistant : SOCOMD_AT {
    secondary = "";
    binocular = "Binocular";
};

////////////////////////////////////////////////////////////////////////////////
// Recon

class SOCOMD_SSO_Recon {
    primary            = "AGE_OrsisT5000";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear        = "AGE_Fast_Tan_C_H_A";
    binocular        = LEADER_BINOCS;
    gps                = "ItemAndroid";
    optics[]         = {"hlc_optic_DocterV", "hlc_optic_RomeoV", "optic_LRPS", "bnae_scope_blk_virtual", "bnae_scope_snd_virtual", "bnae_scope_mtp_virtual", "bnae_scope_v2_virtual", "optic_KHS_tan", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd", "optic_AMS_khk", "optic_SOS", "RH_anpvs10"};

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
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

class SOCOMD_SSO_Recon_Assistant {
    primary            = "CUP_srifle_SVD_top_rail";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear         = "AGE_Fast_Tan_C_H_A";
    binocular        = LEADER_BINOCS;
    gps                = "ItemAndroid";
    maxOptic        = MARKSMAN_MAGNIFICATION_LIMIT;
    optics[]         = {"hlc_optic_DocterV", "hlc_optic_RomeoV", "optic_LRPS", "bnae_scope_blk_virtual", "bnae_scope_snd_virtual", "bnae_scope_mtp_virtual", "bnae_scope_v2_virtual", "optic_KHS_tan", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd", "optic_AMS_khk", "optic_SOS", "RH_anpvs10"};

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
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

////////////////////////////////////////////////////////////////////////////////
// LOGISTICIAN

class SOCOMD_SSO_Logistician {
    primary         = "SOCOMD_Weapon_Rifle_556x45";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear         = "AGE_Fast_Tan_C_H_A";
    binocular        = "";
    gps             = "ItemcTab";
    maxOptic        = LOW_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
        class Inventory    {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "AGE_TV110_AK_Holster_MultiCam";
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

class SOCOMD_SSO_Pilot {
    primary         = "CUP_arifle_AKS74U_top_rail";
    secondary            = "";
    handgun            = "acwp_glock17_black";
    handgunMagazine = "ACWP_19Rnd_9x21_Mag_glock";
    headgear         = "SOCOMD_Headgear_Pilot";
    binocular         = "";
    gps             = "ItemcTab";
    maxOptic        = LOW_MAGNIFICATION_LIMIT;

    class Uniform {
        type = "SOCOMD_SSO_SleevesDown";
        class Inventory    {
            LOADOUT_PILOT_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL
        };
    };

    class Vest {
        type = "AGE_LV119_SL_MultiCam";
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

class SOCOMD_SSO_Crewman : SOCOMD_SSO_Pilot {
    headgear = "SOCOMD_Headgear_Crew";
};
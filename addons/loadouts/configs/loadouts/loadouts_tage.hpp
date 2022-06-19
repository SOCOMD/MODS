// Defunct atm. Needs updating. 
// #include default.hpp

///Counter Terrorism
class TAGE_TroopLeader
{
    primary = "SMG_05_F";
    handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
    handgunMagazine = "SOCOMD_Item_Magazine_45ACP_11Rnd";
    headgear = "ADFU_H_OpsCore_08_BLK";
    facewear = "Mask_M40";
    binocular = "Laserdesignator";
    gps = "ItemAndroid";

    class Uniform
    {
        type = "USP_G3C_BLK_SOCOMD";
        class Inventory
        {
            LOADOUT_UNIFORM_ESSENTIALS

            LOADOUT_ITEM(Laserbatteries, 2)
        };
    };

    class Vest
    {
        type = "lbt_tl_blk";

        class Inventory
        {
            TAGE_VEST_ESSENTIALS

            LOADOUT_ITEM(ACRE_PRC152, 1)
            LOADOUT_ITEM(30Rnd_9x21_Mag_SMG_02, 12)

        };
    };

    class Backpack
    {
        type = "SOG_BAG_recon_blk";
        class Inventory
        {
            TAGE_BACKPACK_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL

            LOADOUT_ITEM(ACRE_PRC117F, 1)
        };
    };
};

class TAGE_Medic
{
    primary = "SMG_05_F";
    handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
    handgunMagazine = "SOCOMD_Item_Magazine_45ACP_11Rnd";
    headgear = "ADFU_H_OpsCore_08_BLK";
    facewear = "Mask_M40";
    binocular = "Binocular";
    gps = "ItemMicroDAGR";

    class Uniform
    {
        type = "USP_G3C_BLK_SOCOMD";
        class Inventory
        {
            LOADOUT_UNIFORM_ESSENTIALS
        };
    };

    class Vest
    {
        type = "lbt_medical_blk";
        class Inventory
        {
            TAGE_VEST_ESSENTIALS

            LOADOUT_ITEM(30Rnd_9x21_Mag_SMG_02, 12)
        };
    };

    class Backpack
    {
        type = "SOG_BAG_med_blk";
        class Inventory
        {
            TAGE_BACKPACK_ESSENTIALS

            LOADOUT_ITEM(ACE_surgicalKit, 8)
            LOADOUT_ITEM(ACE_fieldDressing, 25)
            LOADOUT_ITEM(ACE_elasticBandage, 20)
            LOADOUT_ITEM(ACE_packingBandage, 25)
            LOADOUT_ITEM(ACE_quikclot, 25)
            LOADOUT_ITEM(ACE_epinephrine, 10)
            LOADOUT_ITEM(ACE_morphine, 10)
            LOADOUT_ITEM(SOCOMD_VPN, 10)
            LOADOUT_ITEM(ACE_tourniquet, 6)
            LOADOUT_ITEM(ACE_salineIV_500, 6)
            LOADOUT_ITEM(ACE_personalAidKit, 2)
        };
    };
};

class TAGE_Sapper
{
    primary = "SMG_05_F";
    handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
    handgunMagazine = "SOCOMD_Item_Magazine_45ACP_11Rnd";
    headgear = "ADFU_H_OpsCore_08_BLK";
    facewear = "Mask_M40";
    binocular = "Binocular";
    gps = "ItemMicroDAGR";

    class Uniform
    {
        type = "USP_G3C_BLK_SOCOMD";
        class Inventory
        {
            LOADOUT_UNIFORM_ESSENTIALS

        };
    };

    class Vest
    {
        type = "lbt_tl_blk";
        class Inventory
        {
            TAGE_VEST_ESSENTIALS

            LOADOUT_ITEM(30Rnd_9x21_Mag_SMG_02, 12)
        };
    };

    class Backpack
    {
        type = "SOG_BAG_BREACHER_BLK";
        class Inventory
        {
            TAGE_BACKPACK_ESSENTIALS
            LOADOUT_STANDARD_MEDICAL

            LOADOUT_ITEM(ACE_DefusalKit, 1)
            LOADOUT_ITEM(ACE_M26_Clacker, 1)
            LOADOUT_ITEM(ACE_wirecutter, 1)
            LOADOUT_ITEM(MineDetector, 1)
            LOADOUT_ITEM(tsp_frameCharge_mag, 1)
            LOADOUT_ITEM(tsp_stickCharge_mag, 1)
            LOADOUT_ITEM(tsp_popperCharge_mag, 3)
        };
    };
};

class TAGE_Sniper
{
    primary = "hlc_rifle_awcovert_BL";
    handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
    handgunMagazine = "SOCOMD_Item_Magazine_45ACP_11Rnd";
    headgear = "CUP_H_PMC_Cap_Grey";
    facewear = "milgp_f_face_shield_tactical_shemagh_BLK";
    binocular = "Rangefinder";
    gps = "ItemMicroDAGR";

    class Uniform
    {
        type = "USP_G3C_BLK_SOCOMD";

        class Inventory
        {
            LOADOUT_UNIFORM_ESSENTIALS
            LOADOUT_ITEM(ACE_Kestrel4500, 1)
            LOADOUT_ITEM(ACE_RangeCard, 1)
        };
    };

    class Vest
    {
        type = "lbt_operator_blk";
        class Inventory
        {
            TAGE_VEST_ESSENTIALS

            LOADOUT_ITEM(ACRE_PRC152, 1)
            LOADOUT_ITEM(hlc_5rnd_300WM_FMJ_AWM, 9)

        };
    };

    class Backpack
    {
        type = "SOG_BAG_blk";
        class Inventory
        {
            LOADOUT_STANDARD_MEDICAL
            TAGE_BACKPACK_ESSENTIALS

            LOADOUT_ITEM(ACE_DefusalKit, 1)
            LOADOUT_ITEM(ACE_M26_Clacker, 1)
            LOADOUT_ITEM(ACE_FlareTripMine_Mag, 4)
        };
    };
};
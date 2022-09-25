class Kit_Bag_R_MC;
class KIT_BAG_MC;
class SOG_BAG_recon_MC;
class SOG_BAG_MC;
class SOG_BAG_recon_od;
class Bag_Base;

class B_AssaultPack_mcamo;
class Kit_Bag_pince_TAN : B_AssaultPack_mcamo {
    maximumLoad = 450;
 };
class SOG_BAG_BREACHER_tan : B_AssaultPack_mcamo {
    maximumLoad = 450;
 };
class Kit_Bag_pince_mc : B_AssaultPack_mcamo {
    maximumLoad = 450;
 };
class SOG_BAG_BREACHER_MC : B_AssaultPack_mcamo {
    maximumLoad = 450;
 };
class Kit_Bag_pince_od : B_AssaultPack_mcamo {
    maximumLoad = 450;
 };
class SOG_BAG_BREACHER_od : B_AssaultPack_mcamo {
    maximumLoad = 450;
 };

class Kit_Bag_pince_blk : B_AssaultPack_mcamo {
    maximumLoad = 450;
 };
class SOG_BAG_BREACHER_blk : B_AssaultPack_mcamo {
    maximumLoad = 450;
 };
class SOG_BAG_med_od : B_AssaultPack_mcamo {
    maximumLoad = 450;
 };
class SOG_BAG_med_tan : B_AssaultPack_mcamo {
    maximumLoad = 450;
 };
class SOG_BAG_med_blk : B_AssaultPack_mcamo {
    maximumLoad = 450;
 };
class SOG_BAG_med_MC : B_AssaultPack_mcamo {
    maximumLoad = 450;
 };
 
//class B_Bergen_Base;
//class SOCOMD_drybag_od : B_Bergen_Base {
//    maximumLoad = 450;
//};
//class SOCOMD_drybag_blk : B_Bergen_Base {
//    maximumLoad = 450;
//};
    
class SOCOMD_BackpackPRC117F : Kit_Bag_R_MC {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    maximumLoad = 450;

    class TransportItems {
        TRANSPORT_ITEM(ACRE_PRC117F, 1)
    };
};

class backpack_OD;
class SOCOMD_Medical_Grabbag: backpack_OD {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    picture = "COS_back_pack\data\icon\sac_fs.paa";
    displayname = "SOCOMD Medical Grab bag";
    maximumLoad = 100;

    class TransportItems {
        TRANSPORT_ITEM(kat_guedel, 8)
        TRANSPORT_ITEM(kat_larynx, 8)
        TRANSPORT_ITEM(kat_naloxone, 8)
        TRANSPORT_ITEM(ACE_packingBandage, 15)
        TRANSPORT_ITEM(ACE_elasticBandage, 15)
        TRANSPORT_ITEM(ACE_quikclot, 15)                //Quikclot
        TRANSPORT_ITEM(ACE_chestSeal, 8)                //Hyfin Chest Seal
        TRANSPORT_ITEM(ACE_tourniquet, 8)                //Tourniquet
        TRANSPORT_ITEM(ACE_epinephrine, 8)        //Epinephrine Ampoule
        TRANSPORT_ITEM(ACE_morphine, 8)        //Morphine Ampoule
        TRANSPORT_ITEM(ACE_bloodIV_500, 8)            //Blood
        TRANSPORT_ITEM(ACE_pulseOximeter, 2)            //Pulseoximeter
        TRANSPORT_ITEM(ACE_surgicalKit, 8)            //Surgical Kit
    };    
};
class B_TacticalPack_blk;
class SOCOMD_Medical_AO: B_TacticalPack_blk {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayname = "Aeromedical Resupply Pack";
    maximumLoad = 200;
    class TransportItems {
        TRANSPORT_ITEM(kat_guedel, 10)
        TRANSPORT_ITEM(kat_larynx, 10)
        TRANSPORT_ITEM(kat_naloxone, 12)
        TRANSPORT_ITEM(kat_AED, 1)
        TRANSPORT_ITEM(kat_accuvac, 1)
        TRANSPORT_ITEM(ACE_packingBandage, 30)
        TRANSPORT_ITEM(ACE_elasticBandage, 30)
        TRANSPORT_ITEM(ACE_quikclot, 20)                //Quikclot
        TRANSPORT_ITEM(ACE_chestSeal, 12)                //Hyfin Chest Seal
        TRANSPORT_ITEM(ACE_tourniquet, 10)                //Tourniquet
        TRANSPORT_ITEM(ACE_epinephrine, 12)        //Epinephrine Ampoule
        TRANSPORT_ITEM(ACE_morphine, 12)        //Morphine Ampoule
        TRANSPORT_ITEM(ACE_bloodIV_500, 10)            //Blood
        TRANSPORT_ITEM(ACE_pulseOximeter, 4)            //Pulseoximeter
        TRANSPORT_ITEM(ACE_surgicalKit, 8)            //Surgical Kit
        TRANSPORT_ITEM(ACE_bodyBag, 6)                //Defibrillator
        TRANSPORT_ITEM(ACE_Chemlight_HiWhite, 10) 
        TRANSPORT_ITEM(SmokeShellPurple, 10) 
        TRANSPORT_ITEM(ACE_HandFlare_White, 10) 
    };    
};
class AGE_F2Bergen_Multicam : Bag_Base {
    maximumLoad = 750;
};
class AGE_Camelback_Coyote : Bag_Base {
    maximumLoad = 750;
};
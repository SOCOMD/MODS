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
        TRANSPORT_ITEM(ACE_fieldDressing, 8)          //Israeli Bandage
        TRANSPORT_ITEM(ACE_elasticBandage, 8)            //Elastic Bandage
        TRANSPORT_ITEM(ACE_quikclot, 8)                //Quikclot
        TRANSPORT_ITEM(ACE_chestSeal, 1)                //Hyfin Chest Seal
        TRANSPORT_ITEM(ACE_tourniquet, 2)                //Tourniquet
        TRANSPORT_ITEM(SOCOMD_Epinephrine, 3)        //Epinephrine Ampoule
        TRANSPORT_ITEM(SOCOMD_naloxone, 1)                //Naloxone Ampoule
        TRANSPORT_ITEM(SOCOMD_fentanyl, 1)                //Fentanyl Ampoule
        TRANSPORT_ITEM(SOCOMD_ketamine, 1)                    //Ketamine Ampoule
        TRANSPORT_ITEM(SOCOMD_Apap, 2)                    //Paracetamol
        TRANSPORT_ITEM(SOCOMD_tetra, 0)                //Paracetamol  
        TRANSPORT_ITEM(ACE_bloodIV_500, 4)            //Blood
        TRANSPORT_ITEM(ACE_basicAirway, 2)                    //Nasopharangeal Airway
        TRANSPORT_ITEM(ACE_advancedAirway, 2)                    //Laryngeal Mask Airway
        TRANSPORT_ITEM(ACE_Pulseoximeter, 2)            //Pulseoximeter
        TRANSPORT_ITEM(SOCOMD_VPN, 8)                    //3mL drug Syringe
        TRANSPORT_ITEM(SOCOMD_NDC, 1)                    //14 Gauge needle
        TRANSPORT_ITEM(ACE_surgicalKit, 3)            //Surgical Kit
        TRANSPORT_ITEM(ACE_pocketBVM, 1)                //Medical Suction
    };    
};
class B_TacticalPack_blk;
class SOCOMD_Medical_AO: B_TacticalPack_blk {
    scope = SCOPE_PUBLIC;
    author = AUTHOR_STR;
    displayname = "Aeromedical Resupply Pack";
    maximumLoad = 200;
    class TransportItems {
        TRANSPORT_ITEM(ACE_fieldDressing, 30)          //Israeli Bandage
        TRANSPORT_ITEM(ACE_elasticBandage, 30)            //Elastic Bandage
        TRANSPORT_ITEM(ACE_quikclot, 30)                //Quikclot
        TRANSPORT_ITEM(ACE_chestSeal, 8)                //Hyfin Chest Seal
        TRANSPORT_ITEM(ACE_tourniquet, 10)                //Tourniquet
        TRANSPORT_ITEM(SOCOMD_Epinephrine, 10)        //Epinephrine Ampoule
        TRANSPORT_ITEM(SOCOMD_naloxone, 10)                //Naloxone Ampoule
        TRANSPORT_ITEM(SOCOMD_fentanyl, 10)                //Fentanyl Ampoule
        TRANSPORT_ITEM(SOCOMD_ketamine, 10)                    //Ketamine Ampoule
        TRANSPORT_ITEM(ACE_bloodIV_500, 10)            //Blood
        TRANSPORT_ITEM(ACE_advancedAirway, 4)                    //Laryngeal Mask Airway
        TRANSPORT_ITEM(ACE_Pulseoximeter, 4)            //Pulseoximeter
        TRANSPORT_ITEM(ACE_surgicalKit, 4)            //Surgical Kit
        TRANSPORT_ITEM(ACE_bodyBag, 6)                //Defibrillator
        TRANSPORT_ITEM(SOCOMD_Apap, 10)                    //Paracetamol
        TRANSPORT_ITEM(SOCOMD_VPN, 30)                    //3mL drug Syringe
        TRANSPORT_ITEM(SOCOMD_NDC, 8)                    //14 Gauge needle
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
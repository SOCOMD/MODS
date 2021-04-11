class SOCOMD_BackpackPRC117F : Kit_Bag_R_MC {
	scope = public;
	author = AUTHOR_STR;

	class TransportItems {
		TRANSPORT_ITEM(ACRE_PRC117F, 1)
	};
};

class backpack_OD;
class SOCOMD_Medical_Grabbag: backpack_OD {
    scope = public;
	author = AUTHOR_STR;
    picture = "COS_back_pack\data\icon\sac_fs.paa";
    displayname = "SOCOMD Medical Grab bag";
    maximumLoad = 100;

	class TransportItems {
		TRANSPORT_ITEM(ACE_fieldDressing, 8)  		//Israeli Bandage
		TRANSPORT_ITEM(ACE_elasticBandage, 8)		    //Elastic Bandage
		TRANSPORT_ITEM(ACE_quikclot, 8)				//Quikclot
		TRANSPORT_ITEM(KAT_ChestSeal, 1)				//Hyfin Chest Seal
		TRANSPORT_ITEM(ACE_tourniquet, 2)				//Tourniquet
		TRANSPORT_ITEM(ACE_epinephrine_Medic, 3)		//Epinephrine Ampoule
		TRANSPORT_ITEM(ACE_naloxone, 1)				//Naloxone Ampoule
		TRANSPORT_ITEM(ACE_fentanyl, 1)				//Fentanyl Ampoule
		TRANSPORT_ITEM(SOCOMD_ketamine_6mg, 1)					//Ketamine Ampoule
		TRANSPORT_ITEM(SOCOMD_Apap, 2)					//Paracetamol
		TRANSPORT_ITEM(SOCOMD_tetra, 2)				//Paracetamol  
		TRANSPORT_ITEM(ACE_bloodIV_500, 4)			//Blood
		TRANSPORT_ITEM(KAT_guedel, 2)					//Nasopharangeal Airway
		TRANSPORT_ITEM(KAT_larynx, 2)					//Laryngeal Mask Airway
		TRANSPORT_ITEM(KAT_Pulseoximeter, 2)			//Pulseoximeter
		TRANSPORT_ITEM(SOCOMD_VPN, 8)				    //3mL drug Syringe
		TRANSPORT_ITEM(SOCOMD_NDC, 1)					//14 Gauge needle
		TRANSPORT_ITEM(ACE_surgicalKit, 3)			//Surgical Kit
        TRANSPORT_ITEM(KAT_accuvac, 1)				//Medical Suction
	};    
};
class B_TacticalPack_blk;
class SOCOMD_Medical_AO: B_TacticalPack_blk {
    scope = public;
	author = AUTHOR_STR;
    displayname = "Aeromedical Resupply Pack";
    maximumLoad = 200;
	class TransportItems {
		TRANSPORT_ITEM(ACE_fieldDressing, 30)  		//Israeli Bandage
		TRANSPORT_ITEM(ACE_elasticBandage, 30)		    //Elastic Bandage
		TRANSPORT_ITEM(ACE_quikclot, 30)				//Quikclot
		TRANSPORT_ITEM(KAT_ChestSeal, 8)				//Hyfin Chest Seal
		TRANSPORT_ITEM(ACE_tourniquet, 10)				//Tourniquet
		TRANSPORT_ITEM(SOCOMD_Epinephrine, 10)		//Epinephrine Ampoule
		TRANSPORT_ITEM(SOCOMD_naloxone, 10)				//Naloxone Ampoule
		TRANSPORT_ITEM(SOCOMD_fentanyl, 10)				//Fentanyl Ampoule
		TRANSPORT_ITEM(SOCOMD_ketamine_6mg, 10)					//Ketamine Ampoule
		TRANSPORT_ITEM(ACE_bloodIV_500, 10)			//Blood
		TRANSPORT_ITEM(KAT_larynx, 4)					//Laryngeal Mask Airway
		TRANSPORT_ITEM(KAT_Pulseoximeter, 4)			//Pulseoximeter
		TRANSPORT_ITEM(ACE_surgicalKit, 4)			//Surgical Kit
		TRANSPORT_ITEM(ACE_bodyBag, 6)				//Defibrillator
		TRANSPORT_ITEM(SOCOMD_Apap, 10)					//Paracetamol
		TRANSPORT_ITEM(SOCOMD_VPN, 30)				    //3mL drug Syringe
		TRANSPORT_ITEM(SOCOMD_NDC, 8)					//14 Gauge needle
		TRANSPORT_ITEM(ACE_Chemlight_HiWhite, 10) 
		TRANSPORT_ITEM(SmokeShellPurple, 10) 
		TRANSPORT_ITEM(ACE_HandFlare_White, 10) 
	};    
};
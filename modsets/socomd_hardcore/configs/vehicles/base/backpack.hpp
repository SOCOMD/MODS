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
		TRANSPORT_ITEM(ACE_Epinephrine_Medic, 3)		//Epinephrine Ampoule
		TRANSPORT_ITEM(ACE_naloxone, 1)				//Naloxone Ampoule
		TRANSPORT_ITEM(ACE_fentanyl, 1)				//Fentanyl Ampoule
		TRANSPORT_ITEM(SOCOMD_Ket, 1)					//Ketamine Ampoule
		TRANSPORT_ITEM(ACE_apap, 2)					//Paracetamol
		TRANSPORT_ITEM(SOCOMD_Tetra, 2)				//Paracetamol  
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
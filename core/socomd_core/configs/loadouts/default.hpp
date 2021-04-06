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
	LOADOUT_ITEM(ACE_apap, 3) \
	LOADOUT_ITEM(ACE_packingBandage, 0) \
	LOADOUT_ITEM(ACE_fieldDressing, 4)  \
	LOADOUT_ITEM(KAT_guedel, 2)	

#define LOADOUT_UNIFORM_ESSENTIALS \
	LOADOUT_ITEM(ItemcTabHCam, 1) \
	LOADOUT_ITEM(ACE_EarPlugs, 1) \
	LOADOUT_ITEM(ACE_MapTools, 1) \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(ACE_SpraypaintGreen, 1) \
	LOADOUT_ITEM(murshun_cigs_cigpack, 1) \
	LOADOUT_ITEM(murshun_cigs_lighter, 1) \
	LOADOUT_ITEM(ACWP_18Rnd_9x21_Mag_USP, 3)

#define LOADOUT_UNIFORM_AO_ESSENTIALS \
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
	LOADOUT_ITEM(ACE_apap, 4) \
	LOADOUT_ITEM(ACE_packingBandage, 0) \
	LOADOUT_ITEM(ACE_fieldDressing, 0) 

//////////////////////////////////////////////////////////////////////
//Individual loadout items
//Contents shared by individual loadouts common to every Qstore
//When you want to change the contents of a loadout on every Qstore, change it here
//////////////////////////////////////////////////////////////////////

//HAT
#define LOADOUT_HAT_BACKPACK				\
	LOADOUT_ITEM(CUP_Javelin_M, 1)

////////////////////////////////////////////////////////////////////////////////
// Uniforms

class SOCOMD_Uniforms {
	Arid = "SOCOMD_Uniform_SleevesDown";
	Woodland = "SOCOMD_Uniform_AMCU_SleevesDown";
};

////////////////////////////////////////////////////////////////////////////////
// Unarmed

class SOCOMD_Unarmed {
	headgear  = "AU_02_780000_v1";
	binocular = "";
	maxOptic  = "1x";

	class Uniform {
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Commander

class SOCOMD_Commander {
	primary			= ITEM_PRIMARY_TROOPLEADER;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= ITEM_HEADGEAR_TROOPLEADER;
	binocular		= "Laserdesignator";
	gps				= "ItemAndroid";
	maxOptic		= "4x";

	class Uniform {
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};

	class Vest {
		type = ITEM_VEST_TROOPLEADER;
		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACRE_PRC152, 2)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_TROOPLEADER;
		class Inventory	{
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

class SOCOMD_Leader {
	primary		    = ITEM_PRIMARY_PATROLLEADER;
	secondary		= ITEM_SECONDARY_PATROLLEADER;
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= ITEM_HEADGEAR_PATROLLEADER;
	binocular		= "Laserdesignator";
	gps			    = "ItemAndroid";
	maxOptic		= "4x";

	class Uniform {
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};

	class Vest {
		type = ITEM_VEST_PATROLLEADER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(itc_land_tablet_rover,1)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_PATROLLEADER;
		class Inventory	{
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

class SOCOMD_2IC : SOCOMD_Leader {};

////////////////////////////////////////////////////////////////////////////////
// Rifleman

class SOCOMD_Rifleman {
	primary		    = ITEM_PRIMARY_RIFLEMAN;
	secondary		= ITEM_SECONDARY_RIFLEMAN;
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= ITEM_HEADGEAR_RIFLEMAN;
	binocular		= "";
	gps			    = "ItemMicroDAGR";
	maxOptic		= "4x";

	class Uniform {
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};

	class Vest {
		type = ITEM_VEST_RIFLEMAN;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_RIFLEMAN;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(ACE_EntrenchingTool, 1)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 4)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_762x51_20Rnd, 2)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer,1)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Breacher
class SOCOMD_Breacher {
	primary		    = ITEM_PRIMARY_BREACHER;
	secondary		= ITEM_SECONDARY_BREACHER;
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= ITEM_HEADGEAR_BREACHER;
	binocular		= "";
	gps			    = "ItemMicroDAGR";
	maxOptic		= "4x";

	class Uniform {
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};

	class Vest {
		type = ITEM_VEST_BREACHER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_BREACHER;
		class Inventory	{
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
class SOCOMD_Marksman {
	primary		    = ITEM_PRIMARY_MARKSMAN;
	secondary		= ITEM_SECONDARY_MARKSMAN;
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= ITEM_HEADGEAR_MARKSMAN;
	binocular		= "";
	gps			    = "ItemMicroDAGR";
	maxOptic		= "6x";
	optics[] 		= {"rh_leu_mk4","cup_optic_sb_11_4x20_pm","cup_optic_sb_11_4x20_pm_od","cup_optic_sb_11_4x20_pm_tan","hlc_optic_zf95base","rh_anpvs10","rh_accupoint","cup_optic_leupoldmk4_mrt_tan"};

	class Uniform {
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};

	class Vest {
		type = ITEM_VEST_MARKSMAN;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_762x51_20Rnd, 8)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_MARKSMAN;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Sapper

class SOCOMD_Sapper {
	primary		    = ITEM_PRIMARY_SAPPER;
	secondary		= ITEM_SECONDARY_SAPPER;
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= ITEM_HEADGEAR_SAPPER;
	binocular		= "";
	gps			    = "ItemMicroDAGR";
	maxOptic		= "4x";

	class Uniform {
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};

	class Vest {
		type = ITEM_VEST_SAPPER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_SAPPER;
		class Inventory	{
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
	primary		    = ITEM_PRIMARY_MACHINEGUNNER;
	secondary		= ITEM_SECONDARY_MACHINEGUNNER;
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= ITEM_HEADGEAR_MACHINEGUNNER;
	binocular		= "";
	gps			    = "ItemMicroDAGR";
	maxOptic		= "4x";

	class Uniform {
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};

	class Vest {
		type = ITEM_VEST_MACHINEGUNNER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 2)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_MACHINEGUNNER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 2)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Medic

class SOCOMD_Medic {
	primary		    = ITEM_PRIMARY_MEDIC;
	secondary		= ITEM_SECONDARY_MEDIC;
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= ITEM_HEADGEAR_MEDIC;
	binocular		= "";
	gps			    = "ItemMicroDAGR";
	maxOptic		= "4x";

	class Uniform {
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_MEDIC;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_MEDIC;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_booboo, 1)
			LOADOUT_ITEM(SOCOMD_shears, 1)
			LOADOUT_ITEM(ACE_packingBandage, 0)  		//Remove
			LOADOUT_ITEM(ACE_fieldDressing, 20)  		//Israeli Bandage
			LOADOUT_ITEM(SOCOMD_triangleban, 3)  		//Israeli Bandage
			LOADOUT_ITEM(ACE_epinephrine, 0)  			//Remove
			LOADOUT_ITEM(ACE_morphine, 0)  				//Remove
			LOADOUT_ITEM(ACE_personalAidKit, 0)			//Remove
			LOADOUT_ITEM(ACE_salineIV_500, 0) 			//Remove
			LOADOUT_ITEM(SOCOMD_cascard, 2)
			LOADOUT_ITEM(ACE_elasticBandage, 20)		//Elastic Bandage
			LOADOUT_ITEM(ACE_quikclot, 25)				//Quikclot
			LOADOUT_ITEM(KAT_ChestSeal, 6)				//Hyfin Chest Seal
			LOADOUT_ITEM(SOCOMD_nargloves, 10)
			LOADOUT_ITEM(ACE_tourniquet, 6)				//Tourniquet
			LOADOUT_ITEM(ACE_Epinephrine_Medic, 10)		//Epinephrine Ampoule
			LOADOUT_ITEM(ACE_naloxone, 2)				//Naloxone Ampoule
			LOADOUT_ITEM(ACE_fentanyl, 8)				//Fentanyl Ampoule
			LOADOUT_ITEM(SOCOMD_Ket, 8)					//Ketamine Ampoule
			LOADOUT_ITEM(ACE_apap, 10)					//Paracetamol
			LOADOUT_ITEM(SOCOMD_Tetra, 5)				//Paracetamol  
			LOADOUT_ITEM(ACE_bloodIV_500, 5)			//Blood
			LOADOUT_ITEM(SOCOMD_notes, 0)
			LOADOUT_ITEM(KAT_guedel, 9)					//Nasopharangeal Airway
			LOADOUT_ITEM(KAT_larynx, 6)					//Laryngeal Mask Airway
			LOADOUT_ITEM(KAT_accuvac, 1)				//Medical Suction
			LOADOUT_ITEM(KAT_Pulseoximeter, 4)			//Pulseoximeter
			LOADOUT_ITEM(SOCOMD_VPN, 30)				//3mL drug Syringe
			LOADOUT_ITEM(SOCOMD_NDC, 6)					//14 Gauge needle
			LOADOUT_ITEM(ACE_surgicalKit, 8)			//Surgical Kit
			LOADOUT_ITEM(adv_aceCPR_AED, 1)				//Defibrillator
		};
	};
};

class SOCOMD_AO{
	primary		    = ITEM_PRIMARY_MEDIC;
	secondary		= ITEM_SECONDARY_MEDIC;
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= ITEM_HEADGEAR_MEDIC;
	binocular		= "";
	gps			    = "ItemAndroid";
	maxOptic		= "2x";

	class Uniform {
		class Inventory	{
			LOADOUT_UNIFORM_AO_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_MEDIC;
		class Inventory	{
			LOADOUT_VEST_AO_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 4)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_MEDIC;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_booboo, 1)
			LOADOUT_ITEM(ACE_packingBandage, 0)  		//Remove
			LOADOUT_ITEM(ACE_fieldDressing, 15)  		//Israeli Bandage
			LOADOUT_ITEM(ACE_epinephrine, 0)  			//Remove
			LOADOUT_ITEM(ACE_morphine, 0)  				//Remove
			LOADOUT_ITEM(ACE_personalAidKit, 0)			//Remove
			LOADOUT_ITEM(ACE_salineIV_500, 0) 			//Remove
			LOADOUT_ITEM(ACE_elasticBandage, 5)			//Elastic Bandage
			LOADOUT_ITEM(ACE_quikclot, 20)				//Quikclot
			LOADOUT_ITEM(KAT_ChestSeal, 8)				//Hyfin Chest Seal
			LOADOUT_ITEM(ACE_tourniquet, 6)				//Tourniquet
			LOADOUT_ITEM(ACE_Epinephrine_Medic, 10)		//Epinephrine Ampoule
			LOADOUT_ITEM(ACE_naloxone, 2)				//Naloxone Ampoule
			LOADOUT_ITEM(ACE_fentanyl, 4)				//Fentanyl Ampoule
			LOADOUT_ITEM(SOCOMD_Ket, 4)					//Ketamine Ampoule
			LOADOUT_ITEM(SOCOMD_Ket_S, 0)				//Ketamine (Sedation) Ampoule
			LOADOUT_ITEM(ACE_apap, 10)					//Paracetamol
			LOADOUT_ITEM(SOCOMD_nargloves, 5)
			LOADOUT_ITEM(SOCOMD_Tetra, 0)				//Paracetamol  
			LOADOUT_ITEM(ACE_bloodIV_500, 14)			//Blood
			LOADOUT_ITEM(SOCOMD_shears, 1)
			LOADOUT_ITEM(KAT_guedel, 0)					//Nasopharangeal Airway
			LOADOUT_ITEM(SOCOMD_cascard, 2)
			LOADOUT_ITEM(KAT_larynx, 6)					//Laryngeal Mask Airway
			LOADOUT_ITEM(KAT_accuvac, 1)				//Medical Suction
			LOADOUT_ITEM(KAT_Pulseoximeter, 3)			//Pulseoximeter
			LOADOUT_ITEM(SOCOMD_VPN, 30)				//3mL drug Syringe
			LOADOUT_ITEM(SOCOMD_NDC, 8)					//14 Gauge needle
			LOADOUT_ITEM(ACE_surgicalKit, 4)			//Surgical Kit
			LOADOUT_ITEM(adv_aceCPR_AED, 1)				//Defibrillator
			LOADOUT_ITEM(ACE_bodyBag, 2)				//Defibrillator
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// LAT

class SOCOMD_AT {
	primary		    = ITEM_PRIMARY_AT;
	secondary		= ITEM_SECONDARY_MAT;
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= ITEM_HEADGEAR_AT;
	binocular		= "";
	gps			    = "ItemMicroDAGR";
	maxOptic		= "4x";

	class Uniform {
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};

	class Vest {
		type = ITEM_VEST_AT;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_AT;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

class SOCOMD_AT_Assistant : SOCOMD_AT {
	secondary = "";
	binocular = "Binocular";
};

////////////////////////////////////////////////////////////////////////////////
// Recon

class SOCOMD_Recon {
	primary		    = ITEM_PRIMARY_RECON;
	secondary		= ITEM_SECONDARY_RECON;
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= ITEM_HEADGEAR_RECON;
	binocular		= "ACE_Vector";
	gps			    = "ItemAndroid";
	optics[] 		= {"hlc_optic_DocterV", "hlc_optic_RomeoV", "optic_LRPS", "bnae_scope_blk_virtual", "bnae_scope_snd_virtual", "bnae_scope_mtp_virtual", "bnae_scope_v2_virtual", "optic_KHS_tan", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd", "optic_AMS_khk", "optic_SOS", "RH_anpvs10"};

	class Uniform {
		type = ITEM_UNIFORM_RECON;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACE_Kestrel4500, 1)
			LOADOUT_ITEM(ACE_RangeCard, 1)
		};
	};

	class Vest {
		type = ITEM_VEST_RECON;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(Laserdesignator, 1)
			LOADOUT_ITEM(ACE_ATragMX, 1)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_RECON;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(itc_land_tablet_rover,1)
			LOADOUT_ITEM(ACE_Tripod, 1)
			LOADOUT_ITEM(ACRE_PRC152, 1)
		};
	};
};

class SOCOMD_Recon_Assistant {
	primary		    = ITEM_PRIMARY_MARKSMAN;
	secondary		= ITEM_SECONDARY_MARKSMAN;
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear		= ITEM_HEADGEAR_MARKSMAN;
	binocular		= "ACE_Vector";
	gps			    = "ItemAndroid";
	maxOptic		= "6x";
	optics[] 		= {"hlc_optic_DocterV", "hlc_optic_RomeoV", "optic_LRPS", "bnae_scope_blk_virtual", "bnae_scope_snd_virtual", "bnae_scope_mtp_virtual", "bnae_scope_v2_virtual", "optic_KHS_tan", "optic_KHS_tan", "optic_AMS", "optic_AMS_snd", "optic_AMS_khk", "optic_SOS", "RH_anpvs10"};

	class Uniform {
		type = ITEM_UNIFORM_RECON;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACE_Kestrel4500, 1)
			LOADOUT_ITEM(ACE_RangeCard, 1)
		};
	};

	class Vest {
		type = ITEM_VEST_RECON;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(Laserdesignator, 1)
			LOADOUT_ITEM(ACE_ATragMX, 1)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_RECON;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(itc_land_tablet_rover,1)
			LOADOUT_ITEM(ACE_Tripod, 1)
			LOADOUT_ITEM(ACRE_PRC152, 1)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// LOGISTICIAN

class SOCOMD_Logistician {
	primary 		= "SOCOMD_Weapon_Rifle_556x45";
    secondary 		= "SOCOMD_Weapon_Empty";
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear 		= "SOCOMD_Headgear_HardCover";
	binocular		= "";
	gps 			= "ItemcTab";
	maxOptic		= "2x";

	class Uniform {
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};

	class Vest {
		type = ITEM_VEST_RIFLEMAN;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
			LOADOUT_ITEM(SmokeShell, 3)
			LOADOUT_ITEM(ACRE_PRC152, 2)
			LOADOUT_ITEM(ACRE_PRC343, 1)
			LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_RIFLEMAN;
		class Inventory	{
			LOADOUT_ITEM(ToolKit, 1)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Pilot

class SOCOMD_Pilot {
    primary 		= "SOCOMD_Weapon_Empty";
    secondary 		= "SOCOMD_Weapon_Empty";
	handgun			= "ACWP_USP";
	handgunMagazine = "ACWP_18Rnd_9x21_Mag_USP";
	headgear 		= "SOCOMD_Headgear_Pilot";
	binocular 		= "";
	gps 			= "ItemcTab";
	maxOptic		= "1x";

	class Uniform {
		class Inventory	{
			LOADOUT_PILOT_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};

	class Vest {
		type = ITEM_VEST_PILOT;
		class Inventory	{
			LOADOUT_ITEM(ACE_Chemlight_HiRed, 2)
			LOADOUT_ITEM(ACE_M84, 2)
			LOADOUT_ITEM(SmokeShell, 5)
			LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)
			LOADOUT_ITEM(ACRE_PRC152, 2)
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_PILOT;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_ITEM(ACRE_PRC117F, 1)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Crewman

class SOCOMD_Crewman : SOCOMD_Pilot {
	headgear = "SOCOMD_Headgear_Crew";
};
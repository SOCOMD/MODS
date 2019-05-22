////////////////////////////////////////////////////////////////////////////////
// Unarmed and core loadout class
class SOCOMD_Loadout_Base {};
class SOCOMD_Unarmed : SOCOMD_Loadout_Base {
	headgear  = "AU_02_780000_v1";
	binocular = "";
	maxOptic  = "1x";

	class Uniform {};
	class Vest {};
	class Backpack {};
};

////////////////////////////////////////////////////////////////////////////////
// Soldier Base class's
class SOCOMD_Soldier_Base : SOCOMD_Unarmed {
	gps			    = "ItemMicroDAGR";
	maxOptic		= "2x";

	class Uniform : Uniform {
		type = ITEM_UNIFORM_RIFLEMAN;
		class Inventory	{
			LOADOUT_ITEM(ItemcTabHCam, 1) 
			LOADOUT_ITEM(ACE_EarPlugs, 1) 
			LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) 
			LOADOUT_ITEM(ACE_Chemlight_HiRed, 2) 
			LOADOUT_ITEM(murshun_cigs_cigpack, 1) 
			LOADOUT_ITEM(murshun_cigs_lighter, 1) 
			LOADOUT_ITEM(ACE_DAGR, 1) 
			LOADOUT_ITEM(hlc_acc_DBALPL, 1) // what is this?
			LOADOUT_ITEM(11Rnd_45ACP_Mag, 3)
		};
	};

	class Vest : Vest {
		type = ITEM_VEST_RIFLEMAN;
		class Inventory	{
			LOADOUT_ITEM(ACE_M84, 2)
			LOADOUT_ITEM(SmokeShell, 5)
			LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)
		};
	};
	class Backpack : Backpack {
		type = ITEM_BACKPACK_RIFLEMAN;
		class Inventory	{
			LOADOUT_ITEM(SOCOMD_NVG, 1)
			LOADOUT_ITEM(ACE_MapTools, 1)
			LOADOUT_ITEM(ACE_CableTie, 4)

			LOADOUT_ITEM(ACE_fieldDressing, 6)
			LOADOUT_ITEM(ACE_elasticBandage, 6)
			LOADOUT_ITEM(ACE_packingBandage, 6)
			LOADOUT_ITEM(ACE_quikclot, 6)
			LOADOUT_ITEM(ACE_epinephrine, 2)
			LOADOUT_ITEM(ACE_morphine, 2)
			LOADOUT_ITEM(ACE_tourniquet, 2)
		};
	};
};
// NOTE: we can use this as a base for Redi / 160th / ZSU
class SOCOMD_Soldier_Base_Bluefor : SOCOMD_Soldier_Base {
	class Vest : Vest {
		class Inventory : Inventory {
			LOADOUT_ITEM(ACRE_PRC343, 1)
		};
	}
};

// NOTE: we can use this as a base for monks TAGE and alternative loadouts like undercover etc
class SOCOMD_Soldier_Base_Socomd : SOCOMD_Soldier_Base_Bluefor {
	primary		    = ITEM_PRIMARY_RIFLEMAN;
	secondary		= ITEM_SECONDARY_RIFLEMAN;
	handgun		    = ITEM_HANDGUN_RIFLEMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_RIFLEMAN;
	headgear		= ITEM_HEADGEAR_RIFLEMAN;
};

// RUS classes can derive from this
class SOCOMD_Soldier_Base_Opfor : SOCOMD_Soldier_Base {
	headgear 		= ITEM_HEADGEAR_SOLDIER_BASE;
	class Vest : Vest {
		class Inventory : Inventory {
			//LOADOUT_ITEM(ACRE_PRC343, 1) // Do russian radio here :)
		};
	}
};

////////////////////////////////////////////////////////////////////////////////
// Leader
// This can also be a base for setting overwrites if we drop attributes down to this or make a BlueFor leader base
class SOCOMD_Leader_Base : SOCOMD_Soldier_Base {
	binocular		= "Laserdesignator";
	gps			    = "ItemAndroid";
	class Uniform : Uniform {
		class Inventory : Inventory	{
			LOADOUT_ITEM(Laserbatteries, 2)
			LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
		};
	};	
	class Backpack : Backpack {
		class Inventory	{
			LOADOUT_ITEM(SmokeShellGreen, 2)
			LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
			LOADOUT_ITEM(UGL_FlareRed_F, 2)
			LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
			LOADOUT_ITEM(ACE_HuntIR_M203, 3)
		};
	};
};

class SOCOMD_Leader : SOCOMD_Leader_Base {
	primary		    = ITEM_PRIMARY_PATROLLEADER;
	secondary		= ITEM_SECONDARY_PATROLLEADER;
	handgun		    = ITEM_HANDGUN_PATROLLEADER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_PATROLLEADER;
	headgear		= ITEM_HEADGEAR_PATROLLEADER;

	class Uniform : Uniform {
		type = ITEM_UNIFORM_PATROLLEADER;
	};

	class Vest : Vest {
		type = ITEM_VEST_PATROLLEADER;
		class Inventory	{
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};
	class Backpack : Backpack {
		type = ITEM_BACKPACK_PATROLLEADER;
	};
};

class SOCOMD_2IC : SOCOMD_Leader {};

////////////////////////////////////////////////////////////////////////////////
// Commander

class SOCOMD_Commander : SOCOMD_Leader {
	class Backpack : Backpack {
		class Inventory : Inventory	{
			LOADOUT_ITEM(ACRE_PRC117F, 1)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Rifleman

class SOCOMD_Rifleman : SOCOMD_Soldier_Base_Bluefor {
	primary		    = ITEM_PRIMARY_RIFLEMAN;
	secondary		= ITEM_SECONDARY_RIFLEMAN;
	handgun		    = ITEM_HANDGUN_RIFLEMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_RIFLEMAN;
	headgear		= ITEM_HEADGEAR_RIFLEMAN;

	class Uniform : Uniform {
		type = ITEM_UNIFORM_RIFLEMAN;
	};
	class Vest : Vest {
		type = ITEM_VEST_RIFLEMAN;
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};
	class Backpack : Backpack {
		type = ITEM_BACKPACK_RIFLEMAN;
	};
};

////////////////////////////////////////////////////////////////////////////////
// Marksman
class SOCOMD_marksman : SOCOMD_Soldier_Base_Bluefor {
	primary		    = ITEM_PRIMARY_MARKSMAN;
	secondary		= ITEM_SECONDARY_MARKSMAN;
	handgun		    = ITEM_HANDGUN_MARKSMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MARKSMAN;
	headgear		= ITEM_HEADGEAR_MARKSMAN;
	maxOptic		= "4x";

	class Uniform : Uniform {
		type = ITEM_UNIFORM_MARKSMAN;
	};

	class Vest : Vest {
		type = ITEM_VEST_MARKSMAN;
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_762x51_20Rnd, 7)
		};
	};
	class Backpack : Backpack {
		type = ITEM_BACKPACK_MARKSMAN;
	};
};

////////////////////////////////////////////////////////////////////////////////
// Sapper

class SOCOMD_Sapper : SOCOMD_Soldier_Base_Bluefor {
	primary		    = ITEM_PRIMARY_SAPPER;
	secondary		= ITEM_SECONDARY_SAPPER;
	handgun		    = ITEM_HANDGUN_SAPPER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_SAPPER;
	headgear		= ITEM_HEADGEAR_SAPPER;

	class Uniform : Uniform {
		type = ITEM_UNIFORM_SAPPER;
	};

	class Vest : Vest {
		type = ITEM_VEST_SAPPER;
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};

	class Backpack : Backpack {
		type = ITEM_BACKPACK_SAPPER;
		class Inventory : Inventory	{
			LOADOUT_ITEM(ACE_DefusalKit, 1)
			LOADOUT_ITEM(ACE_Clacker, 1)
			LOADOUT_ITEM(ACE_wirecutter, 1)
			LOADOUT_ITEM(ACE_EntrenchingTool, 1)
			LOADOUT_ITEM(MineDetector, 1)
			LOADOUT_ITEM(DemoCharge_Remote_Mag, 3)
			LOADOUT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 1)
			LOADOUT_ITEM(SatchelCharge_Remote_Mag, 1)
			LOADOUT_ITEM(AMP_Breaching_Charge_Mag, 3)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Machine Gunner

class SOCOMD_MachineGunner : SOCOMD_Soldier_Base_Bluefor {
	primary		    = ITEM_PRIMARY_MACHINEGUNNER;
	secondary		= ITEM_SECONDARY_MACHINEGUNNER;
	handgun		    = ITEM_HANDGUN_MACHINEGUNNER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MACHINEGUNNER;
	headgear		= ITEM_HEADGEAR_MACHINEGUNNER;

	class Uniform : Uniform {
		type = ITEM_UNIFORM_MACHINEGUNNER;

	};

	class Vest : Vest {
		type = ITEM_VEST_MACHINEGUNNER;
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_200Rnd_Tracer, 4)
		};
	};

	class Backpack : Backpack {
		type = ITEM_BACKPACK_MACHINEGUNNER;
	};
};

////////////////////////////////////////////////////////////////////////////////
// Medic

class SOCOMD_Medic : SOCOMD_Soldier_Base_Bluefor {
	primary		    = ITEM_PRIMARY_MEDIC;
	secondary		= ITEM_SECONDARY_MEDIC;
	handgun		    = ITEM_HANDGUN_MEDIC;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MEDIC;
	headgear		= ITEM_HEADGEAR_MEDIC;

	class Uniform : Uniform {
		type = ITEM_UNIFORM_MEDIC;
	};

	class Vest : Vest {
		type = ITEM_VEST_MEDIC;
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};

	class Backpack : Backpack {
		type = ITEM_BACKPACK_MEDIC;
		class Inventory : Inventory	{
			LOADOUT_ITEM(ACE_surgicalKit, 8)
			LOADOUT_ITEM(ACE_fieldDressing, 25)
			LOADOUT_ITEM(ACE_elasticBandage, 20)
			LOADOUT_ITEM(ACE_packingBandage, 25)
			LOADOUT_ITEM(ACE_quikclot, 25)
			LOADOUT_ITEM(ACE_epinephrine, 10)
			LOADOUT_ITEM(ACE_morphine, 10)
			LOADOUT_ITEM(ACE_tourniquet, 6)
			LOADOUT_ITEM(ACE_salineIV_500, 6)
			LOADOUT_ITEM(ACE_personalAidKit, 2)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// LAT

class SOCOMD_AT : SOCOMD_Soldier_Base_Bluefor {
	primary		    = ITEM_PRIMARY_AT;
	secondary		= ITEM_SECONDARY_AT;
	handgun		    = ITEM_HANDGUN_AT;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_AT;
	headgear		= ITEM_HEADGEAR_AT;

	class Uniform : Uniform {
		type = ITEM_UNIFORM_AT;
	};

	class Vest : Vest {
		type = ITEM_VEST_AT;
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
		};
	};

	class Backpack : Backpack {
		type = ITEM_BACKPACK_AT;
	};
};

////////////////////////////////////////////////////////////////////////////////
// Sniper

class SOCOMD_Sniper : SOCOMD_Soldier_Base_Bluefor {
	primary	        = ITEM_PRIMARY_SNIPER;
	secondary		= ITEM_SECONDARY_SNIPER;
	handgun		    = ITEM_HANDGUN_SNIPER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_SNIPER;
	headgear		= ITEM_HEADGEAR_SNIPER;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";
	optics[] 		= {"ace_optic_lrps_2d", "optic_khs_old", "hlc_optic_leupoldm3a", "optic_lrps", "bnae_scope_blk_virtual", "bnae_scope_snd_virtual", "bnae_scope_mtp_virtual", "bnae_scope_v2_virtual", "bnae_truglo_blk_virtual", "bnae_truglo_snd_virtual"};
	maxOptic		= "16x";

	class Uniform : Uniform {
		type = ITEM_UNIFORM_SNIPER;
	};

	class Vest : Vest {
		type = ITEM_VEST_SNIPER;
		class Inventory : Inventory	{
			LOADOUT_ITEM(ACE_Kestrel4500, 1)
			LOADOUT_ITEM(ACE_RangeCard, 1)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_408_7Rnd, 10)
		};
	};

	class Backpack : Backpack {
		type = ITEM_BACKPACK_SNIPER;
	};
};

////////////////////////////////////////////////////////////////////////////////
// Recon

class SOCOMD_Recon : SOCOMD_Soldier_Base_Bluefor {
	primary		    = ITEM_PRIMARY_RECON;
	secondary		= ITEM_SECONDARY_RECON;
	handgun		    = ITEM_HANDGUN_RECON;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_RECON;
	headgear		= ITEM_HEADGEAR_RECON;
	binocular		= "ACE_Vector";
	optics[] 		= {"ace_optic_lrps_2d", "optic_khs_old", "hlc_optic_leupoldm3a", "optic_lrps", "bnae_scope_blk_virtual", "bnae_scope_snd_virtual", "bnae_scope_mtp_virtual", "bnae_scope_v2_virtual", "bnae_truglo_blk_virtual", "bnae_truglo_snd_virtual"};
	maxOptic		= "16x";

	class Uniform : Uniform {
		type = SOCOMD_Uniform_SleevesDown_Recon;
		class Inventory : Inventory	{
			LOADOUT_ITEM(Laserbatteries, 2)
		};
	};

	class Vest : Vest {
		type = ITEM_VEST_RECON;
		class Inventory : Inventory	{
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(ACE_Kestrel4500, 1)
			LOADOUT_ITEM(ACE_RangeCard, 1)
			LOADOUT_ITEM(Laserdesignator, 1)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_408_7Rnd, 9)
			LOADOUT_ITEM(ACE_ATragMX, 1)
		};
	};

	class Backpack : Backpack {
		type = ITEM_BACKPACK_SNIPER;
		class Inventory : Inventory	{
			LOADOUT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 4)
			LOADOUT_ITEM(ACE_DefusalKit, 1)
			LOADOUT_ITEM(ACE_Clacker, 1)
			LOADOUT_ITEM(ACE_FlareTripMine_Mag, 4)
			LOADOUT_ITEM(ACE_Tripod, 1)
		};
	};
};


////////////////////////////////////////////////////////////////////////////////
// MORTAR

class SOCOMD_Mortar : SOCOMD_Soldier_Base_Bluefor {
	primary		    = ITEM_PRIMARY_RIFLEMAN;
	secondary		= ITEM_SECONDARY_RIFLEMAN;
	handgun		    = ITEM_HANDGUN_RIFLEMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_RIFLEMAN;
	headgear		= ITEM_HEADGEAR_RIFLEMAN;
	binocular		= "ACE_Vector";

	class Uniform : Uniform {
		type = ITEM_UNIFORM_RIFLEMAN;
	};

	class Vest : Vest {
		type = ITEM_VEST_RIFLEMAN;
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd, 6)
			LOADOUT_ITEM(SOCOMD_Item_Magazine_556x45_30Rnd_Tracer, 2)
			LOADOUT_ITEM(ACE_1Rnd_82mm_Mo_HE, 2)
			LOADOUT_ITEM(ACE_RangeTable_82mm, 1)			
		};
	};
	class Backpack {
		type = B_Mortar_01_weapon_F;
	};
};

////////////////////////////////////////////////////////////////////////////////
// Pilot
class SOCOMD_Support_Base {
	maxOptic		= "1x";

};

class SOCOMD_Pilot : SOCOMD_Soldier_Base_Bluefor {
    primary 		= ITEM_PRIMARY_PILOT;
    secondary 		= ITEM_SECONDARY_PILOT;
	handgun 		= ITEM_HANDGUN_PILOT;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_PILOT;
	headgear 		= ITEM_HEADGEAR_PILOT;
	gps 			= "ItemcTab";
	maxOptic		= "1x";

	class Uniform : Uniform {
		type = ITEM_UNIFORM_PILOT;
	};

	class Vest : Vest {
		type = ITEM_VEST_PILOT;
		class Inventory : Inventory	{
			LOADOUT_ITEM(SOCOMD_Item_Magazine_9x21_60Rnd, 8)
			LOADOUT_ITEM(ACRE_PRC152, 1)
		};
	};

	class Backpack : Backpack {
		type = ITEM_BACKPACK_PILOT;
		class Inventory : Inventory	{
			LOADOUT_ITEM(ACRE_PRC117F, 1)
		};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Crewman

class SOCOMD_Crewman : SOCOMD_Pilot {
	primary 		= ITEM_PRIMARY_CREWMAN;
    secondary 		= ITEM_SECONDARY_CREWMAN;
	handgun 		= ITEM_HANDGUN_CREWMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAINE_CREWMAN;
	headgear 		= ITEM_HEADGEAR_CREWMAN;
	gps 			= "ItemAndroid";

	class Uniform : Uniform {
		type = ITEM_UNIFORM_CREWMAN;
	};

	class Vest : Vest {
		type = ITEM_VEST_CREWMAN;
	};

	class Backpack : Backpack {
		type = ITEM_BACKPACK_CREWMAN;
	};
};

////////////////////////////////////////////////////////////////////////////////
// PJ

class SOCOMD_PJ : SOCOMD_Crewman {
	primary 		= ITEM_PRIMARY_PJ;
    secondary 		= ITEM_SECONDARY_PJ;
	handgun 		= ITEM_HANDGUN_PJ;
	handgunMagazine = ITEM_HANDGUN_MAGAINE_PJ;
	headgear 		= ITEM_HEADGEAR_PJ;

	class Uniform : Uniform {
		type = ITEM_UNIFORM_PJ;
	};

	class Vest : Vest {
		type = ITEM_VEST_PJ;
	};

	class Backpack : Backpack {
		type = ITEM_BACKPACK_PJ;
		class Inventory : Inventory	{
			LOADOUT_ITEM(ACE_surgicalKit, 8)
			LOADOUT_ITEM(ACE_fieldDressing, 25)
			LOADOUT_ITEM(ACE_elasticBandage, 20)
			LOADOUT_ITEM(ACE_packingBandage, 25)
			LOADOUT_ITEM(ACE_quikclot, 25)
			LOADOUT_ITEM(ACE_epinephrine, 10)
			LOADOUT_ITEM(ACE_morphine, 10)
			LOADOUT_ITEM(ACE_tourniquet, 6)
			LOADOUT_ITEM(ACE_salineIV_500, 6)
			LOADOUT_ITEM(ACE_personalAidKit, 2)
		};
	};
};
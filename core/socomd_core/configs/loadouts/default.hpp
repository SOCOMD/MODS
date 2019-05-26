////////////////////////////////////////////////////////////////////////////////
// Unarmed and core loadout class
class SOCOMD_Loadout_Base {};
class SOCOMD_Unarmed : SOCOMD_Loadout_Base {
	headgear  = "AU_02_780000_v1";
	binocular = "";
	maxOptic  = "1x";

	class Uniform {
		class Inventory {};
	};
	class Vest {
		class Inventory {};
	};
	class Backpack {
		class Inventory {};
	};
};

////////////////////////////////////////////////////////////////////////////////
// Soldier Base class's
class SOCOMD_Soldier_Base : SOCOMD_Unarmed {
	gps			    = "ItemMicroDAGR";
	maxOptic		= "2x";

	class Uniform : Uniform {
		type = ITEM_UNIFORM_RIFLEMAN;
		class Inventory : Inventory	{
			LOADOUT_ITEM(ItemcTabHCam, 1) 
			LOADOUT_ITEM(ACE_EarPlugs, 1) 
			LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) 
			LOADOUT_ITEM(ACE_Chemlight_HiRed, 2) 
			LOADOUT_ITEM(murshun_cigs_cigpack, 1) 
			LOADOUT_ITEM(murshun_cigs_lighter, 1) 
			LOADOUT_ITEM(ACE_DAGR, 1) 
			LOADOUT_ITEM(11Rnd_45ACP_Mag, 3)
		};
	};

	class Vest : Vest {
		type = ITEM_VEST_RIFLEMAN;
		class Inventory : Inventory	{
			LOADOUT_ITEM(ACE_M84, 2)
			LOADOUT_ITEM(SmokeShell, 5)
			LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)
		};
	};
	class Backpack : Backpack {
		type = ITEM_BACKPACK_RIFLEMAN;
		class Inventory : Inventory	{
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
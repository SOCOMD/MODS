
///171 Loadouts

class 171AVN_PJ
{
	primary = "SMA_M4afgSTOCK";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Pilot_helmet";
	binocular = "Binocular";
	gps = "ItemAndroid";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			LOADOUT_ITEM(H_Watchcap_camo, 1)
			LOADOUT_ITEM(11Rnd_45ACP_Mag, 3)				
		};
	};

	class Vest
	{
		type = "VSM_OGA_OD_Vest_2";
		class Inventory
		{
			JAC_STANDARD_MEDICAL
			LOADOUT_ITEM(ACE_salineIV_500, 6)
			LOADOUT_ITEM(ACE_personalAidKit, 2)
			LOADOUT_ITEM(ACE_surgicalKit, 2)
			SASR_VEST_ESSENTIALS
			Rifleman_Vest
			
		};
	};
	class Backpack
	{
		type = "SOG_BAG_med_od";
		class Inventory
		{
			JAC_ESSENTIALS
			Medic_Backpack
		};
	};
};

class 171AVN_Pilot
{
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Pilot_helmet";
	binocular = "Binocular";
	gps = "ItemcTab";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			
			LOADOUT_ITEM(H_Watchcap_camo, 1)
			LOADOUT_ITEM(11Rnd_45ACP_Mag, 3)
			
		};
	};
	
	class Vest
	{
		type = "VSM_OGA_OD_Vest_2";
		class Inventory
		{
			
			JAC_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC152, 1)
		};
	};

	class Backpack
	{
		type = "SOG_BAG_recon_od";
		class Inventory
		{
			LOADOUT_ITEM(ACRE_PRC117F, 1)
			JAC_ESSENTIALS
		};
	};
};

class SUPPORT_Crewman {
	primary = "CUP_smg_MP5A5";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "H_HelmetCrew_I";
	binocular = "Binocular";
	gps = "ItemAndroid";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			
			LOADOUT_ITEM(H_Watchcap_camo, 1)
			LOADOUT_ITEM(11Rnd_45ACP_Mag, 4)
		};
	};
	
	class Vest
	{
		type = "VSM_FAPC_Operator_Multicam";
		class Inventory
		{
			
			JAC_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(CUP_30Rnd_9x19_MP5, 4)
		};
	};

	class Backpack
	{
		type = "KIT_BAG_MC";
		class Inventory
		{
			LOADOUT_ITEM(ACRE_PRC117F, 1)
			JAC_ESSENTIALS
		};
	};
};
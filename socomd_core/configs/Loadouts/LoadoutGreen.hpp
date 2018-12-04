
///Green Auscam Loadouts

class SOCOMD_TroopLeader_Jngl {
	primary = "SMA_M4_GL_SM";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Aus_Boonie";
	binocular = "Laserdesignator";
	gps = "ItemAndroid";

	class Uniform {
		type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS

			LOADOUT_TROOP_LEADER_UNIFORM
		};
	};

	class Vest {
		type = "lbt_comms_od";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_TROOP_LEADER_VEST
		};
	};

	class Backpack {
		type = "Kit_Bag_R_od";
		class Inventory
		{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			
			LOADOUT_TROOP_LEADER_BACKPACK
		};
	};
};

class SOCOMD_PatrolLeader_Jngl {
	primary = "SMA_M4_GL_SM";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Aus_Boonie";
	binocular = "Laserdesignator";
	gps = "ItemAndroid";

	class Uniform {
		type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
		class Inventory
		{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_TROOP_LEADER_UNIFORM
		};
	};

	class Vest {
		type = "lbt_comms_od";

		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_PATROL_LEADER_VEST
		};
	};
	class Backpack	{
		type = "Kit_Bag_R_od";
		class Inventory	{	
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			
			LOADOUT_PATROL_LEADER_BACKPACK
		};
	};
};

class SOCOMD_Rifleman_Jngl {
	primary = "SMA_M4afgSTOCK";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Aus_Boonie";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest
	{
		type = "lbt_tl_od";
		class Inventory
		{
			LOADOUT_VEST_ESSENTIALS

			LOADOUT_RIFLEMAN_VEST
		};
	};
	class Backpack
	{
		type = "SOG_BAG_od";
		class Inventory
		{	
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

class SOCOMD_Grenadier_Jngl {
	primary = "SMA_M4_GL_SM";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Aus_Boonie";
	binocular = "Rangefinder";
	gps = "ItemAndroid";

	class Uniform {
		type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			
		};
	};

	class Vest {
		type = "lbt_weapons_od";

		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_GRENADIER_VEST
		};
	};
	class Backpack	{
		type = "SOG_BAG_recon_od";
		class Inventory	{	
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_GRENADIER_BACKPACK
		};
	};			
};

class SOCOMD_Sapper_Jngl {
	primary = "SMA_M4afgSTOCK";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Aus_Boonie";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			
		};
	};

	class Vest {
		type = "lbt_tl_od";
		class Inventory
		{
			LOADOUT_VEST_ESSENTIALS

			LOADOUT_RIFLEMAN_VEST
		};
	};

	class Backpack {
		type = "Kit_Bag_pince_od";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_SAPPER_BACKPACK
		};
	};
};

class SOCOMD_MachineGunner_Jngl {
	primary = "sma_minimi_mk3_762tsb";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Aus_Boonie";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
		class Inventory
		{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = "VSM_LBT6094_MG_Multicam";
		class Inventory
		{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_MACHINE_GUNNER_VEST
		};
	};
	class Backpack {
		type = "SOG_BAG_od";
		class Inventory
		{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

class SOCOMD_Medic_Jngl {
	primary = "SMA_M4afgSTOCK";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Aus_Boonie";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
		class Inventory
		{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = "lbt_medical_od";
		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};

	class Backpack {
		type = "KIT_BAG_od";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_MEDIC_BACKPACK
		};
	};
};

class SOCOMD_Marksman_Jngl {
	primary = "SMA_HK417_16in";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Aus_Boonie";
	binocular = "Rangefinder";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
		class Inventory {
			LOADOUT_UNIFORM_ESSENTIALS
			
		};
	};

	class Vest {
		type = "lbt_tl_od";
		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_MARKSMAN_VEST
		};
	};
	class Backpack {
		type = "SOG_BAG_od";
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

class SOCOMD_Sniper_Jngl { 
	primary = "hlc_rifle_awmagnum";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Aus_Boonie";
	binocular = "Rangefinder";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_DPCU_OD_SleevesUp";

		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			
		};
	};

	class Vest {
		type = "lbt_tl_od";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_SNIPER_VEST
		};
	};
	
	class Backpack {
		type = "SOG_BAG_od";
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
			
			LOADOUT_SNIPER_BACKPACK
		};
	};
};

class SOCOMD_LAT_Jngl { 
	primary = "SMA_M4afgSTOCK";
	secondary = "HAFM_LAW";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Aus_Boonie";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
		class Inventory
		{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = "lbt_tl_od";
		class Inventory
		{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};
	class Backpack {
		type = "SOG_BAG_od";
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

class SOCOMD_MAT_Jngl
{
	primary = "SMA_M4afgSTOCK";
	secondary = "SOCOMD_Carl_Gustav";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Aus_Boonie";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = "lbt_tl_od";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};

	class Backpack {
		type = "SOG_BAG_od";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_MAT_BACKPACK
		};
	};
};

class SOCOMD_HAT_Jngl {
	primary = "SMA_M4afgSTOCK";
	secondary = "CUP_launch_Javelin";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "SOCOMD_Aus_Boonie";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = "lbt_tl_od";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};

	class Backpack {
		type = "Kit_Bag_od";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_HAT_BACKPACK
		};
	};
};


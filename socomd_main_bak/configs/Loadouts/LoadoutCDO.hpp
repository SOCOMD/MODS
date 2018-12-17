
///Standard SOCOMD

class SASR_Trooper
{
	headgear = "AU_02_780000_v1";
	binocular = "Rangefinder";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			SASR_UNIFORM_ESSENTIALS
		};
	};
};

class SASR_TroopLeader
{
	primary = "SMA_M4_GL_SM";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Laserdesignator";
	gps = "ItemAndroid";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			SASR_UNIFORM_ESSENTIALS
			Troop_Leader_Uniform
		};
	};

	class Vest
	{
		type = "SOCOMD_Leader_Vest";

		class Inventory
		{
			SASR_VEST_ESSENTIALS
			Troop_Leader_Vest
		};
	};

	class Backpack
	{
		type = "Kit_Bag_R_MC";
		class Inventory
		{
			SASR_BACKPACK_ESSENTIALS
			SASR_STANDARD_MEDICAL
			Troop_Leader_Backpack
		};
	};
};

class SASR_PatrolLeader
{
	primary = "SMA_M4_GL_SM";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Laserdesignator";
	gps = "ItemAndroid";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			SASR_UNIFORM_ESSENTIALS
			Troop_Leader_Uniform
		};
	};

	class Vest
	{
		type = "SOCOMD_Leader_Vest";

		class Inventory
		{
			SASR_VEST_ESSENTIALS
			PatrolLeader_Vest
		};
	};
	class Backpack
	{
		type = "Kit_Bag_R_MC";
		class Inventory
		{	
			SASR_BACKPACK_ESSENTIALS
			SASR_STANDARD_MEDICAL
			PatrolLeader_Backpack
		};
	};
};

class SASR_Rifleman
{
	primary = "SMA_M4afgSTOCK";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			SASR_UNIFORM_ESSENTIALS
		};
	};

	class Vest
	{
		type = "SOCOMD_Operator_Vest";
		class Inventory
		{
			SASR_VEST_ESSENTIALS
			Rifleman_Vest
		};
	};
	class Backpack
	{
		type = "SOG_BAG_MC";
		class Inventory
		{	
			SASR_BACKPACK_ESSENTIALS
			SASR_STANDARD_MEDICAL
		};
	};
};

class SASR_Grenadier
{
	primary = "SMA_M4_GL_SM";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Rangefinder";
	gps = "ItemAndroid";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			SASR_UNIFORM_ESSENTIALS
		
		};
	};

	class Vest
	{
		type = "SOCOMD_2IC_Vest";

		class Inventory
		{
			SASR_VEST_ESSENTIALS
			Grenadier_Vest
		};
	};
	class Backpack
	{
		type = "SOG_BAG_recon_MC";
		class Inventory
		{	
			SASR_BACKPACK_ESSENTIALS
			SASR_STANDARD_MEDICAL
			Grenadier_Backpack
		};
	};			
};

class SASR_Sapper
{
	primary = "SMA_M4afgSTOCK";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			SASR_UNIFORM_ESSENTIALS
			
		};
	};

	class Vest
	{
		type = "SOCOMD_Operator_Vest";
		class Inventory
		{
			SASR_VEST_ESSENTIALS
			Rifleman_Vest
		};
	};

	class Backpack
	{
		type = "Kit_Bag_pince_TAN";
		class Inventory
		{
			SASR_BACKPACK_ESSENTIALS
			SASR_STANDARD_MEDICAL
			Sapper_Backpack
		};
	};
};

class SASR_MachineGunner
{
	primary = "sma_minimi_mk3_762tsb";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			SASR_UNIFORM_ESSENTIALS
		};
	};

	class Vest
	{
		type = "VSM_LBT6094_MG_Multicam";
		class Inventory
		{
			SASR_VEST_ESSENTIALS
			MachineGunner_Vest

		};
	};
	class Backpack
	{
		type = "SOG_BAG_MC";
		class Inventory
		{
			SASR_BACKPACK_ESSENTIALS
			SASR_STANDARD_MEDICAL
		};
	};
};

class SASR_Medic
{
	primary = "SMA_M4afgSTOCK";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			SASR_UNIFORM_ESSENTIALS
		};
	};

	class Vest
	{
		type = "SOCOMD_Medic_Vest";
		class Inventory
		{
			SASR_VEST_ESSENTIALS
			Rifleman_Vest
		};
	};

	class Backpack
	{
		type = "SOG_BAG_med_MC";
		class Inventory
		{
			SASR_BACKPACK_ESSENTIALS
			Medic_Backpack
		};
	};
};

class SASR_Marksman
{
	primary = "SMA_HK417_16in";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Rangefinder";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			SASR_UNIFORM_ESSENTIALS

		};
	};

	class Vest
	{
		type = "SOCOMD_Operator_Vest";
		class Inventory
		{
			SASR_VEST_ESSENTIALS
			Marksman_Vest
			
		};
	};
	class Backpack
	{
		type = "SOG_BAG_MC";
		class Inventory
		{
			SASR_STANDARD_MEDICAL
			SASR_BACKPACK_ESSENTIALS
		};
	};
};

class SASR_Sniper
{
	primary = "hlc_rifle_awmagnum";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Rangefinder";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";

		class Inventory
		{
			SASR_UNIFORM_ESSENTIALS
			
		};
	};

	class Vest
	{
		type = "SOCOMD_Operator_Vest";
		class Inventory
		{
			SASR_VEST_ESSENTIALS
			Sniper_Vest
			
		};
	};
	
	class Backpack
	{
		type = "SOG_BAG_MC";
		class Inventory
		{
			SASR_STANDARD_MEDICAL
			SASR_BACKPACK_ESSENTIALS
			Sniper_Backpack
		};
	};
};

class SASR_LAT
{
	primary = "SMA_M4afgSTOCK";
	secondary = "HAFM_LAW";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			SASR_UNIFORM_ESSENTIALS
		};
	};

	class Vest
	{
		type = "SOCOMD_Operator_Vest";
		class Inventory
		{
			SASR_VEST_ESSENTIALS
			Rifleman_Vest
		};
	};
	class Backpack
	{
		type = "SOG_BAG_MC";
		class Inventory
		{
			SASR_STANDARD_MEDICAL
			SASR_BACKPACK_ESSENTIALS
		};
	};
};

class SASR_MAT
{
	primary = "SMA_M4afgSTOCK";
	secondary = "SOCOMD_Carl_Gustav";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Rangefinder";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			SASR_UNIFORM_ESSENTIALS
		};
	};

	class Vest
	{
		type = "SOCOMD_Operator_Vest";
		class Inventory
		{
			SASR_VEST_ESSENTIALS
			Rifleman_Vest
		};
	};

	class Backpack
	{
		type = "SOG_BAG_MC";
		class Inventory
		{
			SASR_BACKPACK_ESSENTIALS
			SASR_STANDARD_MEDICAL
			MAT_Backpack
		};
	};
};

class SASR_HAT
{
	primary = "SMA_M4afgSTOCK";
	secondary = "CUP_launch_Javelin";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform
	{
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory
		{
			SASR_STANDARD_MEDICAL
			SASR_UNIFORM_ESSENTIALS
		};
	};

	class Vest
	{
		type = "SOCOMD_Operator_Vest";
		class Inventory
		{
			SASR_VEST_ESSENTIALS
			Rifleman_Vest
		};
	};

	class Backpack
	{
		type = "Kit_Bag_MC";
		class Inventory
		{
			SASR_BACKPACK_ESSENTIALS
			HAT_Backpack
		};
	};
};


///Standard SOCOMD

class SOCOMD_Trooper
{
	headgear = "AU_02_780000_v1";
	binocular = "Rangefinder";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};
};

class SOCOMD_TroopLeader {
	primary = "SMA_M4_GL_SM";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Laserdesignator";
	gps = "ItemAndroid";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_TROOP_LEADER_UNIFORM
		};
	};

	class Vest {
		type = "SOCOMD_Leader_Vest";

		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_TROOP_LEADER_VEST
		};
	};

	class Backpack {
		type = "Kit_Bag_R_MC";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_TROOP_LEADER_BACKPACK
		};
	};
};

class SOCOMD_PatrolLeader {
	primary = "SMA_M4_GL_SM";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Laserdesignator";
	gps = "ItemAndroid";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_TROOP_LEADER_UNIFORM
		};
	};

	class Vest
	{
		type = "SOCOMD_Leader_Vest";

		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_PATROL_LEADER_VEST
		};
	};
	class Backpack {
		type = "Kit_Bag_R_MC";
		class Inventory	{	
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_PATROL_LEADER_BACKPACK
		};
	};
};

class SOCOMD_Rifleman {
	primary = "SMA_M4afgSTOCK";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest
	{
		type = "SOCOMD_Operator_Vest";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};
	class Backpack {
		type = "SOG_BAG_MC";
		class Inventory	{	
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

class SOCOMD_Grenadier {
	primary = "SMA_M4_GL_SM";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Rangefinder";
	gps = "ItemAndroid";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		
		};
	};

	class Vest {
		type = "SOCOMD_2IC_Vest";

		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_GRENADIER_VEST
		};
	};
	class Backpack {
		type = "SOG_BAG_recon_MC";
		class Inventory	{	
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_GRENADIER_BACKPACK
		};
	};			
};

class SOCOMD_Sapper {
	primary = "SMA_M4afgSTOCK";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			
		};
	};

	class Vest {
		type = "SOCOMD_Operator_Vest";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};

	class Backpack {
		type = "Kit_Bag_pince_TAN";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_SAPPER_BACKPACK
		};
	};
};

class SOCOMD_MachineGunner {
	primary = "sma_minimi_mk3_762tsb";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = "VSM_LBT6094_MG_Multicam";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_MACHINE_GUNNER_VEST

		};
	};
	class Backpack {
		type = "SOG_BAG_MC";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

class SOCOMD_Medic {
	primary = "SMA_M4afgSTOCK";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = "SOCOMD_Medic_Vest";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};

	class Backpack {
		type = "SOG_BAG_med_MC";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_MEDIC_BACKPACK
		};
	};
};

class SOCOMD_Marksman {
	primary = "SMA_HK417_16in";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Rangefinder";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS

		};
	};

	class Vest {
		type = "SOCOMD_Operator_Vest";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_MARKSMAN_VEST
			
		};
	};
	class Backpack {
		type = "SOG_BAG_MC";
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

class SOCOMD_Sniper {
	primary = "hlc_rifle_awmagnum";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Rangefinder";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";

		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			
		};
	};

	class Vest {
		type = "SOCOMD_Operator_Vest";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_SNIPER_VEST
		};
	};
	
	class Backpack
	{
		type = "SOG_BAG_MC";
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_SNIPER_BACKPACK
		};
	};
};

class SOCOMD_LAT {
	primary = "SMA_M4afgSTOCK";
	secondary = "HAFM_LAW";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = "SOCOMD_Operator_Vest";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};
	class Backpack {
		type = "SOG_BAG_MC";
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

class SOCOMD_MAT {
	primary = "SMA_M4afgSTOCK";
	secondary = "SOCOMD_Carl_Gustav";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Rangefinder";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest
	{
		type = "SOCOMD_Operator_Vest";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};

	class Backpack {
		type = "SOG_BAG_MC";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_MAT_BACKPACK
		};
	};
};

class SOCOMD_HAT
{
	primary = "SMA_M4afgSTOCK";
	secondary = "CUP_launch_Javelin";
	handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
	handgunMagazine = "11Rnd_45ACP_Mag";
	headgear = "ADFU_H_Airframe_Cover_03_MC";
	binocular = "Binocular";
	gps = "ItemMicroDAGR";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = "SOCOMD_Operator_Vest";
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};

	class Backpack {
		type = "Kit_Bag_MC";
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_HAT_BACKPACK
		};
	};
};


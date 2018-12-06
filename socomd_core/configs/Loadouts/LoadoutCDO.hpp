///Standard SOCOMD

class SOCOMD_Trooper
{
	headgear = "AU_02_780000_v1";
	binocular = "";

	class Uniform {
		type = "SOCOMD_Commando_SleevesDown";
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};
};

class SOCOMD_TroopLeader {
	primary 		= ITEM_PRIMARY_TROOPLEADER;
	secondary 		= ITEM_SECONDARY_TROOPLEADER;
	handgun 		= ITEM_HANDGUN_TROOPLEADER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_TROOPLEADER;
	headgear 		= ITEM_HEADGEAR_TROOPLEADER;
	binocular 		= ITEM_BINOCULAR_TROOPLEADER;
	gps 			= ITEM_GPS_TROOPLEADER;

	class Uniform {
		type = ITEM_UNIFORM_TROOPLEADER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_TROOP_LEADER_UNIFORM
		};
	};

	class Vest {
		type = ITEM_VEST_TROOPLEADER;

		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_TROOP_LEADER_VEST
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_TROOPLEADER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_TROOP_LEADER_BACKPACK
		};
	};
};

class SOCOMD_PatrolLeader {
	primary 		= ITEM_PRIMARY_PATROLLEADER;
	secondary 		= ITEM_SECONDARY_PATROLLEADER;
	handgun 		= ITEM_HANDGUN_PATROLLEADER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_PATROLLEADER;
	headgear 		= ITEM_HEADGEAR_PATROLLEADER;
	binocular 		= ITEM_BINOCULAR_PATROLLEADER;
	gps 			= ITEM_GPS_PATROLLEADER;

	class Uniform {
		type = ITEM_UNIFORM_PATROLLEADER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_TROOP_LEADER_UNIFORM
		};
	};

	class Vest
	{
		type = ITEM_VEST_PATROLLEADER;

		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_PATROL_LEADER_VEST
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_PATROLLEADER;
		class Inventory	{	
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_PATROL_LEADER_BACKPACK
		};
	};
};

class SOCOMD_Rifleman {
	primary 		= ITEM_PRIMARY_RIFLEMAN;
	secondary 		= ITEM_SECONDARY_RIFLEMAN;
	handgun 		= ITEM_HANDGUN_RIFLEMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_RIFLEMAN;
	headgear 		= ITEM_HEADGEAR_RIFLEMAN;
	binocular 		= ITEM_BINOCULAR_RIFLEMAN;
	gps 			= ITEM_GPS_RIFLEMAN;

	class Uniform {
		type = ITEM_UNIFORM_RIFLEMAN;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest
	{
		type = ITEM_VEST_RIFLEMAN;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_RIFLEMAN;
		class Inventory	{	
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

class SOCOMD_Grenadier {
	primary 		= ITEM_PRIMARY_GRENADIER;
	secondary 		= ITEM_SECONDARY_GRENADIER;
	handgun 		= ITEM_HANDGUN_GRENADIER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_GRENADIER;
	headgear 		= ITEM_HEADGEAR_GRENADIER;
	binocular 		= ITEM_BINOCULAR_GRENADIER;
	gps 			= ITEM_GPS_GRENADIER;

	class Uniform {
		type = ITEM_UNIFORM_GRENADIER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		
		};
	};

	class Vest {
		type = ITEM_VEST_GRENADIER;

		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_GRENADIER_VEST
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_GRENADIER;
		class Inventory	{	
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_GRENADIER_BACKPACK
		};
	};			
};

class SOCOMD_Sapper {
	primary 		= ITEM_PRIMARY_SAPPER;
	secondary 		= ITEM_SECONDARY_SAPPER;
	handgun 		= ITEM_HANDGUN_SAPPER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_SAPPER;
	headgear	 	= ITEM_HEADGEAR_SAPPER;
	binocular 		= ITEM_BINOCULAR_SAPPER;
	gps 			= ITEM_GPS_SAPPER;

	class Uniform {
		type = ITEM_UNIFORM_SAPPER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			
		};
	};

	class Vest {
		type = ITEM_VEST_SAPPER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_SAPPER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_SAPPER_BACKPACK
		};
	};
};

class SOCOMD_MachineGunner {
	primary 		= ITEM_PRIMARY_MACHINEGUNNER;
	secondary 		= ITEM_SECONDARY_MACHINEGUNNER;
	handgun 		= ITEM_HANDGUN_MACHINEGUNNER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MACHINEGUNNER;
	headgear 		= ITEM_HEADGEAR_MACHINEGUNNER;
	binocular 		= ITEM_BINOCULAR_MACHINEGUNNER;
	gps 			= ITEM_GPS_MACHINEGUNNER;

	class Uniform {
		type = ITEM_UNIFORM_MACHINEGUNNER;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_MACHINEGUNNER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_MACHINE_GUNNER_VEST

		};
	};
	class Backpack {
		type = ITEM_BACKPACK_MACHINEGUNNER;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

class SOCOMD_Medic {
	primary 		= ITEM_PRIMARY_MEDIC;
	secondary 		= ITEM_SECONDARY_MEDIC;
	handgun 		= ITEM_HANDGUN_MEDIC;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MEDIC;
	headgear 		= ITEM_HEADGEAR_MEDIC;
	binocular 		= ITEM_BINOCULAR_MEDIC;
	gps 			= ITEM_GPS_MEDIC;

	class Uniform {
		type = ITEM_UNIFORM_MEDIC;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_MEDIC;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_MEDIC;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_MEDIC_BACKPACK
		};
	};
};

class SOCOMD_Marksman {
	primary 		= ITEM_PRIMARY_MARKSMAN;
	secondary 		= ITEM_SECONDARY_MARKSMAN;
	handgun 		= ITEM_HANDGUN_MARKSMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MARKSMAN;
	headgear 		= ITEM_HEADGEAR_MARKSMAN;
	binocular 		= ITEM_BINOCULAR_MARKSMAN;
	gps 			= ITEM_GPS_MARKSMAN;

	class Uniform {
		type = ITEM_UNIFORM_MARKSMAN;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS

		};
	};

	class Vest {
		type = ITEM_VEST_MARKSMAN;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_MARKSMAN_VEST
			
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_MARKSMAN;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

class SOCOMD_Sniper {
	primary 		= ITEM_PRIMARY_SNIPER;
	secondary 		= ITEM_SECONDARY_SNIPER;
	handgun 		= ITEM_HANDGUN_SNIPER;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_SNIPER;
	headgear 		= ITEM_HEADGEAR_SNIPER;
	binocular 		= ITEM_BINOCULAR_SNIPER;
	gps 			= ITEM_GPS_SNIPER;

	class Uniform {
		type = ITEM_UNIFORM_SNIPER;

		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			
		};
	};

	class Vest {
		type = ITEM_VEST_SNIPER;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_SNIPER_VEST
		};
	};
	
	class Backpack
	{
		type = ITEM_BACKPACK_SNIPER;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_SNIPER_BACKPACK
		};
	};
};

class SOCOMD_LAT {
	primary 		= ITEM_PRIMARY_LAT;
	secondary 		= ITEM_SECONDARY_LAT;
	handgun 		= ITEM_HANDGUN_LAT;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_LAT;
	headgear 		= ITEM_HEADGEAR_LAT;
	binocular 		= ITEM_BINOCULAR_LAT;
	gps 			= ITEM_GPS_LAT;

	class Uniform {
		type = ITEM_UNIFORM_LAT;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_LAT;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_LAT;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

class SOCOMD_MAT {
	primary 		= ITEM_PRIMARY_MAT;
	secondary 		= ITEM_SECONDARY_MAT;
	handgun 		= ITEM_HANDGUN_MAT;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_MAT;
	headgear 		= ITEM_HEADGEAR_MAT;
	binocular 		= ITEM_BINOCULAR_MAT;
	gps 			= ITEM_GPS_MAT;

	class Uniform {
		type = ITEM_UNIFORM_MAT;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest
	{
		type = ITEM_VEST_MAT;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_MAT;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_MAT_BACKPACK
		};
	};
};

class SOCOMD_HAT
{
	primary 		= ITEM_PRIMARY_HAT;
	secondary 		= ITEM_SECONDARY_HAT;
	handgun 		= ITEM_HANDGUN_HAT;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_HAT;
	headgear 		= ITEM_HEADGEAR_HAT;
	binocular 		= ITEM_BINOCULAR_HAT;
	gps 			= ITEM_GPS_HAT;

	class Uniform {
		type = ITEM_UNIFORM_HAT;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_VEST_HAT;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_HAT;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_HAT_BACKPACK
		};
	};
};


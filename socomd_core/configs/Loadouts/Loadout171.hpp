
///171 Loadouts

class SOCOMD_PJ
{
	primary = ITEM_PRIMARY_PJ;
    secondary = ITEM_SECONDARY_PJ;
	handgun = ITEM_HANDGUN_PJ;
	handgunMagazine = ITEM_HANDGUN_MAGAINE_PJ;
	headgear = ITEM_HEADGEAR_PJ;
	binocular = ITEM_BINOCULAR_PJ;
	gps = ITEM_GPS_PJ;

	class Uniform {
		type = ITEM_UNIFORM_PJ;
		class Inventory	{
			LOADOUT_ITEM(H_Watchcap_camo, 1)
			LOADOUT_ITEM(11Rnd_45ACP_Mag, 3)
		};
	};

	class Vest {
		type = ITEM_VEST_PJ;
		class Inventory	{
			LOADOUT_SUPPORT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACE_salineIV_500, 6)
			LOADOUT_ITEM(ACE_personalAidKit, 2)
			LOADOUT_ITEM(ACE_surgicalKit, 2)
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_RIFLEMAN_VEST
		};
	};
	class Backpack {
		type = ITEM_BACKPACK_PJ;
		class Inventory	{
			LOADOUT_SUPPORT_ESSENTIALS
			LOADOUT_MEDIC_BACKPACK
		};
	};
};

class SOCOMD_Pilot
{
    primary = ITEM_PRIMARY_PILOT;
    secondary = ITEM_SECONDARY_PILOT;
	handgun = ITEM_HANDGUN_PILOT;
	handgunMagazine = ITEM_HANDGUN_MAGAZINE_PILOT;
	headgear = ITEM_HEADGEAR_PILOT;
	binocular = ITEM_BINOCULAR_PILOT;
	gps = ITEM_GPS_PILOT;

	class Uniform
	{
		type = ITEM_UNIFORM_PILOT;
		class Inventory
		{
			LOADOUT_ITEM(H_Watchcap_camo, 1)
			LOADOUT_ITEM(11Rnd_45ACP_Mag, 3)
		};
	};
	class Vest {
		type = ITEM_VEST_PILOT;
		class Inventory {
			LOADOUT_SUPPORT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC152, 1)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_PILOT;
		class Inventory	{
			LOADOUT_ITEM(ACRE_PRC117F, 1)
			LOADOUT_SUPPORT_ESSENTIALS
		};
	};
};

class SOCOMD_Crewman {
	primary = ITEM_PRIMARY_CREWMAN;
    secondary = ITEM_SECONDARY_CREWMAN;
	handgun = ITEM_HANDGUN_CREWMAN;
	handgunMagazine = ITEM_HANDGUN_MAGAINE_CREWMAN;
	headgear = ITEM_HEADGEAR_CREWMAN;
	binocular = ITEM_BINOCULAR_CREWMAN;
	gps = ITEM_GPS_CREWMAN;

	class Uniform {
		type = ITEM_UNIFORM_CREWMAN;
		class Inventory	{
			LOADOUT_ITEM(H_Watchcap_camo, 1)
			LOADOUT_ITEM(11Rnd_45ACP_Mag, 4)
		};
	};
	class Vest {
		type = ITEM_VEST_CREWMAN;
		class Inventory	{
			LOADOUT_SUPPORT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(CUP_30Rnd_9x19_MP5, 4)
		};
	};

	class Backpack {
		type = ITEM_BACKPACK_CREWMAN;
		class Inventory	{
			LOADOUT_ITEM(ACRE_PRC117F, 1)
			LOADOUT_SUPPORT_ESSENTIALS
		};
	};
};

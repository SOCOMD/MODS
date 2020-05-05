///Russian SSO (DMOCOS)

class SOCOMD_SSO_Commander: SOCOMD_Commander{
	primary			= Item_RUSSIAN_PRIMARY_Troopleader;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_ITEM(Laserbatteries, 2)
			LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST ;
		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_camo_M, 8)
		};
	};

	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_heavy;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC117F, 1)
			LOADOUT_ITEM(SmokeShellGreen, 2)
			LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)
			LOADOUT_ITEM(UGL_FlareRed_F, 2)
			LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
			LOADOUT_ITEM(ACE_HuntIR_M203, 3)
		};
	};
};

class SOCOMD_SSO_Leader: SOCOMD_Leader{
	primary			= Item_RUSSIAN_PRIMARY_PatrolLeader;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
			LOADOUT_ITEM(Laserbatteries, 2)
			LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST ;
		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_camo_M, 8)
		};
	};
	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_heavy;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACRE_PRC152, 1)
			LOADOUT_ITEM(CUP_1Rnd_SmokeGreen_GP25_M, 2)
			LOADOUT_ITEM(CUP_1Rnd_HE_GP25_M, 8)
			LOADOUT_ITEM(CUP_FlareRed_GP25_M, 2)
			LOADOUT_ITEM(CUP_1Rnd_SmokeRed_GP25_M, 2)
			LOADOUT_ITEM(ACE_HuntIR_M203, 3)
		};
	};
};

class SOCOMD_SSO_Rifleman: SOCOMD_Rifleman {
	primary			= Item_RUSSIAN_PRIMARY_Rifleman;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST ;
		class Inventory {
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_camo_M, 8)
		};
	};

	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_light;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

class SOCOMD_SSO_marksman: SOCOMD_Marksman {
	primary			= Item_RUSSIAN_PRIMARY_Marksman;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(ACE_20Rnd_65_Creedmor_mag, 7)
		};
	};
	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_light;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

class SOCOMD_SSO_Sapper: SOCOMD_Sapper {
	primary			= Item_RUSSIAN_PRIMARY_Sapper;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_camo_M, 8)
		};
	};

	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_heavy;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_ITEM(ACE_DefusalKit, 1)
			LOADOUT_ITEM(ACE_M26_Clacker, 1)
			LOADOUT_ITEM(ACE_wirecutter, 1)
			LOADOUT_ITEM(ACE_EntrenchingTool, 1)
			LOADOUT_ITEM(MineDetector, 1)
			LOADOUT_ITEM(DemoCharge_Remote_Mag, 3)
			LOADOUT_ITEM(SatchelCharge_Remote_Mag, 1)
			LOADOUT_ITEM(AMP_Breaching_Charge_Mag, 3)
		};
	};
};


class SOCOMD_SSO_MachineGunner: SOCOMD_MachineGunner {
	primary			= Item_RUSSIAN_PRIMARY_MachineGunner;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M, 6)
		};
	};

	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_light;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
			LOADOUT_STANDARD_MEDICAL
		};
	};
};

class SOCOMD_SSO_Medic: SOCOMD_Medic {
	primary			= Item_RUSSIAN_PRIMARY_Medic;
	secondary		= ITEM_SECONDARY_TROOPLEADER;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_camo_M, 8)
		};
	};

	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_heavy;
		class Inventory	{
			LOADOUT_BACKPACK_ESSENTIALS
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

class SOCOMD_SSO_AT: SOCOMD_AT {
	primary			= Item_RUSSIAN_PRIMARY_AT;
	secondary		= ITEM_RUSSIAN_SECONDARY_AT;
	handgun			= ITEM_RUSSIAN_HANDGUN;
	handgunMagazine = ITEM_RUSSIAN_HANDGUN_MAGAZINE;
	headgear		= ITEM_RUSSIAN_HEADGEAR;
	binocular		= "Binocular";
	gps			    = "ItemMicroDAGR";

	class Uniform {
		type = ITEM_RUSSIAN_UNIFORM;
		class Inventory	{
			LOADOUT_UNIFORM_ESSENTIALS
		};
	};

	class Vest {
		type = ITEM_RUSSIAN_VEST;
		class Inventory	{
			LOADOUT_VEST_ESSENTIALS
			LOADOUT_ITEM(CUP_30Rnd_545x39_AK74M_camo_M, 8)
		};
	};

	class Backpack {
		type = ITEM_RUSSIAN_BACKPACK_heavy;
		class Inventory	{
			LOADOUT_STANDARD_MEDICAL
			LOADOUT_BACKPACK_ESSENTIALS
		};
	};
};

#define SOLDIER_BASE_LINKEDITEMS \
	ITEM01("ItemMap"), \
	ITEM01("ItemCompass"), \
	ITEM01("ItemWatch"), \
	ITEM01("SOCOMD_BERET")

class SOCOMD_Unarmed : B_Soldier_02_f {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Unarmed";
	vehicleclass = "Man";
	camouflage = 2.1; // default 1.4 ( higher values make you easier to spot)

	uniformClass = ITEM_UNIFORM_RIFLEMAN;

	threat[] = {1, 0.7, 0.4};
	weapons[] 					= { };
	respawnWeapons[] 			= { };
	magazines[] 				= { };
	respawnMagazines[] 			= { };
	respawnLinkedItems[] 		= {SOLDIER_BASE_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_BASE_LINKEDITEMS};
	Items[] 					= { };
	RespawnItems[] 				= { };
	backpack					= "";
};

#define SOLDER_HOMESTEAD_ITEMS \
	ITEM01("ACE_EarPlugs"), \
	ITEM01("ACRE_PRC343"), \
	ITEM01("ACRE_PRC152")

#define SOLDIER_HOMESTEAD_LINKEDITEMS \
	SOLDIER_BASE_LINKEDITEMS,\
	ITEM01("SOCOMD_Item_Vest_Homestead"), \
	ITEM01("SOCOMD_BERET")

class SOCOMD_Homestead : SOCOMD_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Homestead";
	vehicleclass = "Man";

	respawnLinkedItems[] 		= {SOLDIER_HOMESTEAD_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_HOMESTEAD_LINKEDITEMS};
	Items[] 					= {SOLDER_HOMESTEAD_ITEMS};
	RespawnItems[] 				= {SOLDER_HOMESTEAD_ITEMS};
	backpack					= "SOCOMD_BackpackPRC117F";
};

#define SOLDER_RIFLEMAN_WEAPONS \
	ITEM01(ITEM_PRIMARY_RIFLEMAN)

#define SOLDER_RIFLEMAN_MAGAZINES \
	ITEM07(ITEM_PRIMARY_MAGAZINE_RIFLEMAN)

#define SOLDIER_RIFLEMAN_LINKEDITEMS \
	SOLDIER_LOADOUT_LINKEDITEMS, \
	ITEM01(ITEM_VEST_RIFLEMAN), \
	ITEM01(ITEM_HEADGEAR_RIFLEMAN)


class SOCOMD_Rifleman : SOCOMD_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Rifleman";
	vehicleclass = "Man";

	weapons[] 					= {SOLDER_RIFLEMAN_WEAPONS};
	respawnWeapons[] 			= {SOLDER_RIFLEMAN_WEAPONS};
	magazines[] 				= {SOLDER_RIFLEMAN_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_RIFLEMAN_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_RIFLEMAN_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RIFLEMAN_LINKEDITEMS};
	backpack					= ITEM_BACKPACK_RIFLEMAN;
};

#define SOLDER_PILOT_WEAPONS \
	ITEM01(ITEM_PRIMARY_PILOT)

#define SOLDER_PILOT_MAGAZINES \
	ITEM07(ITEM_PRIMARY_MAGAZINE_PILOT)

#define SOLDIER_PILOT_LINKEDITEMS \
	SOLDIER_LOADOUT_LINKEDITEMS, \
	ITEM01(ITEM_VEST_PILOT), \
	ITEM01(ITEM_HEADGEAR_PILOT)

class SOCOMD_Pilot : SOCOMD_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Pilot";
	vehicleclass = "Man";

	weapons[] 					= {SOLDER_PILOT_WEAPONS};
	respawnWeapons[] 			= {SOLDER_PILOT_WEAPONS};
	magazines[] 				= {SOLDER_PILOT_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_PILOT_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_PILOT_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_PILOT_LINKEDITEMS};
	backpack					= ITEM_BACKPACK_PILOT;
};

#define SOLDER_CREWMAN_WEAPONS \
	ITEM01(ITEM_PRIMARY_CREWMAN)

#define SOLDER_CREWMAN_MAGAZINES \
	ITEM07(ITEM_PRIMARY_MAGAZINE_CREWMAN)

#define SOLDIER_CREWMAN_LINKEDITEMS \
	SOLDIER_LOADOUT_LINKEDITEMS, \
	ITEM01(ITEM_VEST_CREWMAN), \
	ITEM01(ITEM_HEADGEAR_CREWMAN)

class SOCOMD_Crewman : SOCOMD_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_EdCat_Core;
	editorSubcategory = SOCOMD_EdSubcat_Man;
	side = WEST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Crewman";
	vehicleclass = "Man";

	weapons[] 					= {SOLDER_CREWMAN_WEAPONS};
	respawnWeapons[] 			= {SOLDER_CREWMAN_WEAPONS};
	magazines[] 				= {SOLDER_CREWMAN_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_CREWMAN_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_CREWMAN_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_CREWMAN_LINKEDITEMS};
	backpack					= ITEM_BACKPACK_CREWMAN;
};


class ADFU_Soldier_MC;
class ADFU_Soldier_MC_Rolled;
class SOCOMD_Soldier_BLK_SleevesDown : ADFU_Soldier_MC 
{
	displayName = "SOCOMD Black Role";
	author = "SOCOMD & ADFU";
	uniformClass="SOCOMD_Commando_BLK_SleevesDown";
	hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
	hiddenSelectionsTextures[]=
		{
			"socomd_data_core\CTgear\u_g3_blk_co.paa"
		};
	model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
};
class SOCOMD_Soldier_AMC_SleevesDown : ADFU_Soldier_MC 
{
	displayName = "SOCOMD AMCU";
	author = "SOCOMD & ADFU";
	uniformClass="SOCOMD_Commando_AMCU_SleevesDown";
	hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
	hiddenSelectionsTextures[]=
		{
			"socomd_data_core\CTgear\u_g3_amc_co.paa"
		};
};
class SOCOMD_Soldier_AMC_SleevesUp : ADFU_Soldier_MC_Rolled
{
	displayName = "SOCOMD AMCU (Rolled)";
	author = "SOCOMD & ADFU";
	uniformClass="SOCOMD_Commando_AMCU_SleevesUp";
	hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
	hiddenSelectionsTextures[]=
		{
			"socomd_data_core\CTgear\u_g3_amc_co.paa"
		};
};
class SEAL_AOR1 : ADFU_Soldier_MC 
{
	displayName = "SEAL AOR1";
	author = "SOCOMD & ADFU";
	uniformClass="SEAL_AOR1_U";
	hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
	hiddenSelectionsTextures[]=
		{
			"socomd_data_core\CTgear\VSM_ARD_AOR1_1.paa"
		};
};

class SEAL_AOR2 : SEAL_AOR1
{
	displayName = "SEAL AOR2";
	author = "SOCOMD & ADFU";
	uniformClass="SEAL_AOR2_U";
	hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
	hiddenSelectionsTextures[]=
		{
			"socomd_data_core\CTgear\AOR_2.paa"
		};
};


class B_Soldier_base_F;
class b_soldier_survival_F: B_Soldier_base_F{};
class SOCOMD_Survival: b_soldier_survival_F
{
	author="SOCOMD";
	nameSound="veh_infantry_diver_s";
	_generalMacro="b_soldier_survival_F";
	scope=1;
	displayName="SOCOMD Survival Fatigues";
	model="\A3\Characters_F_EPA\BLUFOR\b_soldier_survival_01.p3d";
	modelSides[]={3,1};
	uniformClass="U_B_survival_uniform";
	hiddenUnderwaterSelections[]=
	{
		"hide"
	};
	shownUnderwaterSelections[]=
	{
		"unhide",
		"unhide2"
	};
	hiddenUnderwaterSelectionsTextures[]=
	{
		"\socomd_data_core\uniform\clothes\black_flipers.paa",
		"\socomd_data_core\uniform\clothes\black_flipers.paa",
		"\A3\characters_f\data\visors_ca.paa"
	};
	hiddenSelections[]=
	{
		"Camo",
		"Camo1",
		"Camo3",
		"Insignia"
	};
	hiddenSelectionsTextures[]=
	{
		"\ADFU_Units_MC\data\u_g3_mc_co.paa",
		"\socomd_data_core\uniform\clothes\black_boots.paa",
		"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\ADFU_Units\data\clothing1_ADFU.rvmat",
		"",
		""
	};
};

class SOCOMD_Survival_AMCU: SOCOMD_Survival {
	displayName="SOCOMD AMCU Survival Fatigues";
	uniformClass="SOCOMD_Uniform_AMCU_Survival";
	hiddenUnderwaterSelections[]=
	{
		"hide"
	};
	shownUnderwaterSelections[]=
	{
		"unhide",
		"unhide2"
	};
	hiddenUnderwaterSelectionsTextures[]=
	{
		"\socomd_data_core\uniform\clothes\black_flipers.paa",
		"\socomd_data_core\uniform\clothes\black_flipers.paa",
		"\A3\characters_f\data\visors_ca.paa"
	};
	hiddenSelections[]=
	{
		"Camo",
		"Camo1",
		"Camo3",
		"Insignia"
	};
	hiddenSelectionsTextures[]=
	{
		"socomd_data_core\CTgear\u_g3_amc_co.paa",
		"\socomd_data_core\uniform\clothes\black_boots.paa",
		"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\ADFU_Units\data\clothing1_ADFU.rvmat",
		"",
		""
	};
};
class B_soldier_AR_F;
class SOCOMD_Tee: B_soldier_AR_F
{
	author="SOCOMD";
	_generalMacro="B_Soldier_F";
	scope=1;
	displayName="SOCOMD G3 (Tee)";
	uniformClass="SOCOMD_Tee_uniform";
	hiddenSelectionsTextures[]=
	{
		"\ADFU_Units_MC\data\u_g3_mc_co.paa"
	};
	hiddenSelectionsMaterials[]=
	{
		"\ADFU_Units\data\clothing1_ADFU.rvmat"
	};
};

class SOCOMD_Tee_AMCU: SOCOMD_Tee
{
	displayName="SOCOMD AMCU (Tee)";
	uniformClass="SOCOMD_Tee_AMCU_uniform";
	hiddenSelectionsTextures[]=
	{
		"socomd_data_core\CTgear\u_g3_amc_co.paa"
	};
};

#define ITEM01(id) id
#define ITEM02(id) id,id
#define ITEM03(id) id,id,id
#define ITEM04(id) id,id,id,id
#define ITEM05(id) id,id,id,id,id
#define ITEM06(id) id,id,id,id,id,id
#define ITEM07(id) id,id,id,id,id,id,id
#define ITEM08(id) id,id,id,id,id,id,id,id
#define ITEM09(id) id,id,id,id,id,id,id,id,id
#define ITEM10(id) id,id,id,id,id,id,id,id,id,id
#define ITEM11(id) id,id,id,id,id,id,id,id,id,id,id
#define ITEM12(id) id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM13(id) id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM14(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM15(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM16(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM17(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM18(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM19(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM20(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id
#define ITEM30(id) id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id,id

////////////////////////////////////////////////////////////////////////////////

#define SOLDIER_RUS_BASE_LINKEDITEMS \
	ITEM01("ItemMap"), \
	ITEM01("ItemCompass"), \
	ITEM01("ItemWatch"), \
	ITEM01("SOCOMD_BERET")

class B_Soldier_02_f;
class SOCOMD_RUS_Unarmed : B_Soldier_02_f {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_RUS_EdCat_Core;
	editorSubcategory = SOCOMD_RUS_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Unarmed";
	vehicleclass = "Man";

	class EventHandlers;

	uniformClass = ITEM_RUSSIAN_UNIFORM;

	weapons[] 					= { };
	respawnWeapons[] 			= { };
	magazines[] 				= { };
	respawnMagazines[] 			= { };
	respawnLinkedItems[] 		= {SOLDIER_RUS_BASE_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RUS_BASE_LINKEDITEMS};
	Items[] 					= { };
	RespawnItems[] 				= { };
	backpack					= "";
};

#define SOLDER_RUS_RIFLEMAN_WEAPONS \
	ITEM01(Item_RUSSIAN_PRIMARY_Rifleman )

#define SOLDER_RUS_RIFLEMAN_MAGAZINES \
	ITEM07(Item_RUSSIAN_PRIMARY_MAGAZINE_Rifleman)

#define SOLDIER_RUS_RIFLEMAN_LINKEDITEMS \
	SOLDIER_LOADOUT_LINKEDITEMS, \
	ITEM01(ITEM_RUSSIAN_VEST), \
	ITEM01(ITEM_RUSSIAN_HEADGEAR), \
	ITEM01(ITEM_RUSSIAN_FACEGEAR)



class SOCOMD_RUS_Rifleman : SOCOMD_RUS_Unarmed {
	scope = public;
	scopeCurator = public;
	editorCategory = SOCOMD_RUS_EdCat_Core;
	editorSubcategory = SOCOMD_RUS_EdSubcat_Man;
	side = EAST;
	author = AUTHOR_STR;
	faction = FACTION_STR;
	displayname = "Rifleman";
	vehicleclass = "Man";
	identityTypes[] = {"Head_Greek", "G_CIVIL_male"};

	weapons[] 					= {SOLDER_RUS_RIFLEMAN_WEAPONS};
	respawnWeapons[] 			= {SOLDER_RUS_RIFLEMAN_WEAPONS};
	magazines[] 				= {SOLDER_RUS_RIFLEMAN_MAGAZINES};
	respawnMagazines[] 			= {SOLDER_RUS_RIFLEMAN_MAGAZINES};
	respawnLinkedItems[] 		= {SOLDIER_RUS_RIFLEMAN_LINKEDITEMS};
	linkedItems[] 				= {SOLDIER_RUS_RIFLEMAN_LINKEDITEMS};
	backpack					= ITEM_RUSSIAN_BACKPACK_light;
};

class ADFU_Soldier_MC; 
class SOCOMD_RUS_Soldier_SleevesDown : ADFU_Soldier_MC 
{
	displayName = "Russian Special Forces";
	author = "SOCOMD & ADFU";
	uniformClass="SOCOMD_RUS_SleevesDown";
	hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
	hiddenSelectionsTextures[]=
		{
			"socomd_data_core\Russian\u_g3_mc_RU_co.paa"
		};
	model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
};
//////////////////////////////////////////////////////////////////////
// VESTS

class Vest_camo_Base : ItemCore
{
	class ItemInfo;
};

class V_PlateCarrier1_rgr : Vest_Camo_Base
{
	class ItemInfo;
};

class VSM_LBT6094_MG_Multicam : Vest_Camo_Base
{
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply400";
	};
};

class SOCOMD_Vest_TL : V_PlateCarrier1_rgr
{
	scope = public;
	_generalMacro = "SOCOMD_Vest_TL";
	author = "SOCOMD & massi";
	picture = "\socomd_data\uniform\icons\icon_V_plate_carrier_1_CA.paa";
	displayName = "SOCOMD Platecarrier TL";
	descriptionShort = "$STR_A3_SP_AL_IV";

	model = "\socomd_data\uniform\mas_plate_carrier_TL.p3d";
	hiddenSelections[] = {"camo","Camo1"};
	hiddenSelectionsTextures[] = {"\socomd_data\uniform\ve\mas_6094a_co.paa","\socomd_data\uniform\ve\armysf_tl_acu_co.paa"};

	class ItemInfo : ItemInfo
	{
		uniformModel = "\socomd_data\uniform\mas_plate_carrier_TL.p3d";
		hiddenSelections[] = {"Camo", "Camo1"};
		containerClass = "Supply400";
		mass = 20;

		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointName = "HitChest";
				armor = 40;
				passThrough = 0.1;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 40;
				passThrough = 0.1;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 40;
				passThrough = 0.1;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.1;
			};
		};
	};
};

class SOCOMD_Vest_CM : SOCOMD_Vest_TL
{
	scope = public;
	_generalMacro = "SOCOMD_Vest_CM";
	author = "SOCOMD & massi";
	picture = "\socomd_data\uniform\icons\icon_V_plate_carrier_1_CA.paa";
	displayName = "SOCOMD Platecarrier CM";
	descriptionShort = "$STR_A3_SP_AL_IV";

	model = "\socomd_data\uniform\mas_plate_carrier_TL.p3d";
	hiddenSelections[] = {"camo","Camo1"};
	hiddenSelectionsTextures[] = {"\socomd_data\uniform\ve\cm_mas_6094a_co.paa","\socomd_data\uniform\ve\cm_armysf_tl_acu_co.paa"};

	class ItemInfo : ItemInfo
	{
		uniformModel = "\socomd_data\uniform\mas_plate_carrier_TL.p3d";
		hiddenSelections[] = {"Camo", "Camo1"};
		containerClass = "Supply400";
		mass = 20;

		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointName = "HitChest";
				armor = 40;
				passThrough = 0.1;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 40;
				passThrough = 0.1;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 40;
				passThrough = 0.1;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.1;
			};
		};
	};
};

class V_PlateCarrier2_rgr : Vest_Camo_Base
{
	class ItemInfo;
};

class SOCOMD_Vest_AR : V_PlateCarrier2_rgr
{
	scope = public;
	_generalMacro = "SOCOMD_Vest_AR";

	author = "SOCOMD & massi";
	picture = "\socomd_data\uniform\icons\icon_V_plate_carrier_2_CA.paa";
	displayName = "SOCOMD Platecarrier AR";
	descriptionShort = "$STR_A3_SP_AL_IV";

	model = "\socomd_data\uniform\mas_plate_carrier_AR";
	hiddenSelections[] = {"camo","Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\socomd_data\uniform\ve\mas_6094a_co.paa","\socomd_data\uniform\ve\armysf_tl_acu_co.paa","\socomd_data\uniform\ve\armysf_saw_dcu_co.paa"};

	class ItemInfo : ItemInfo
	{
		uniformModel = "\socomd_data\uniform\mas_plate_carrier_AR";
		hiddenSelections[] = {"Camo", "Camo1", "Camo2"};
		containerClass = "Supply400";
		mass = 20;
		
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointName = "HitChest";
				armor = 40;
				passThrough = 0.1;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 40;
				passThrough = 0.1;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 40;
				passThrough = 0.1;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.1;
			};
		};
	};
};

class V_PlateCarrierGL_rgr : Vest_Camo_Base
{
	class ItemInfo;
};

class SOCOMD_Vest_OP : V_PlateCarrierGL_rgr
{
	scope = public;
	_generalMacro = "SOCOMD_Vest_OP";
	author = "SOCOMD & massi";
	picture = "\socomd_data\uniform\icons\icon_V_plate_carrier_2_CA.paa";
	displayName = "SOCOMD Platecarrier OP";
	descriptionShort = "$STR_A3_SP_AL_IV";

	model = "\socomd_data\uniform\mas_plate_carrier_OP";
	hiddenSelections[] = {"Camo", "Camo1"};
	hiddenSelectionsTextures[] = {"\socomd_data\uniform\ve\mas_6094a_co.paa","\socomd_data\uniform\ve\armysf_tl_acu_co.paa"};

	class ItemInfo : ItemInfo
	{
		uniformModel = "\socomd_data\uniform\mas_plate_carrier_OP";
		hiddenSelections[] = {"Camo", "Camo1"};
		containerClass = "Supply400";
		mass = 20;
		
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointName = "HitChest";
				armor = 40;
				passThrough = 0.1;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 40;
				passThrough = 0.1;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 40;
				passThrough = 0.1;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.1;
			};
		};
	};
};

class V_Chestrig_khk : Vest_Camo_Base
{
	class ItemInfo;
};

class SOCOMD_Vest_Pilot : V_Chestrig_khk
{
	scope = public;
	_generalMacro = "SOCOMD_Vest_Pilot";
	author = "SOCOMD & massi";
	picture = "\socomd_data\uniform\icons\icon_V_Chestrig_khk_CA.paa";
	displayName = "SOCOMD Pilot Vest";

	hiddenSelections[] = {"Camo1","Camo2"};
	hiddenSelectionsTextures[] = {"\socomd_data\uniform\ve\equip_chestrig_mul_co.paa","\socomd_data\uniform\ve\armor1_cm.paa"};

	class ItemInfo : ItemInfo
	{
		uniformModel = "\A3\Characters_F\Common\equip_chestrig.p3d";
		hiddenSelections[] = {"Camo1", "Camo2"};
		containerClass = "Supply200";
		mass = 20;

		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointName = "HitChest";
				armor = 8;
				passThrough = 0.5;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 8;
				passThrough = 0.5;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 8;
				passThrough = 0.5;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.5;
			};
		};
	};
};

class CUP_Vest_RACS_Camo_Base;
class CUP_V_I_RACS_Carrier_Rig_3: CUP_Vest_RACS_Camo_Base 
{
	class ItemInfo;
};
class SOCOMD_Vest_Pilot_2: CUP_V_I_RACS_Carrier_Rig_3
{
	scope=public;
	displayName="SOCOMD Pilot Vest (Desert - Radio)";
	model="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig_3.p3d";
	picture="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_pouch_harness_ca.paa";
	hiddenSelectionsTextures[]=
	{
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_racs\data\racs_tex1_co.paa",
		"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_racs\data\racs_tex2_co.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelectionsTextures[]=
		{
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_racs\data\racs_tex1_co.paa",
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_racs\data\racs_tex2_co.paa"
		};
		containerClass="Supply200";
		uniformModel="\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig_3.p3d";
		armor=0;
		passThrough=1;
		mass=20;
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointName = "HitChest";
				armor = 8;
				passThrough = 0.5;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 8;
				passThrough = 0.5;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 8;
				passThrough = 0.5;
			};
			class Body
			{
				hitpointName = "HitBody";
				passThrough = 0.5;
			};
		};
	};
};


class V_RebreatherB : Vest_Camo_Base
{
	class ItemInfo;
};

class SOCOMD_Vest_Rebreather : V_RebreatherB
{
	scope = public;
	_generalMacro = "SOCOMD_Vest_Rebreather";
	author = AUTHOR_STR;
	
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply200";
		mass = 20;
	};
};



class lbt_comms_mc;
class SOCOMD_Leader_Vest : lbt_comms_mc
{
	scope = public;
	displayName = "SOCOMD Leader Vest";
};

class lbt_weapons_mc;
class SOCOMD_2IC_Vest : lbt_weapons_mc
{
	scope = public;
	displayName = "SOCOMD 2IC Vest";
};

class lbt_medical_mc;
class SOCOMD_Medic_Vest : lbt_medical_mc
{
	scope = public;
	displayName = "SOCOMD Medic Vest";
};

class lbt_tl_mc;
class SOCOMD_Operator_Vest : lbt_tl_mc
{
	scope = public;
	displayName = "SOCOMD Operator Vest";
};

class lbt_operator_mc;
class SOCOMD_Rifleman_Vest : lbt_operator_mc
{
	scope = public;
	displayName = "SOCOMD Rifleman Vest";
};

class lbt_pouchless_mc;
class SOCOMD_Pouchless_Vest : lbt_pouchless_mc
{
	scope = public;
	displayName = "SOCOMD Pouchless Vest";
};

class lbt_comms_coy;
class SOCOMD_Leader_Vest_coy : lbt_comms_coy
{
	scope = public;
	displayName = "SOCOMD Leader Vest Tan";
};

class lbt_weapons_coy;
class SOCOMD_2IC_Vest_coy : lbt_weapons_coy
{
	scope = public;
	displayName = "SOCOMD 2IC Vest Tan";
};

class lbt_medical_coy;
class SOCOMD_Medic_Vest_coy : lbt_medical_coy
{
	scope = public;
	displayName = "SOCOMD Medic Vest Tan";
};

class lbt_tl_coy;
class SOCOMD_Operator_Vest_coy : lbt_tl_coy
{
	scope = public;
	displayName = "SOCOMD Operator Vest Tan";
};

class lbt_operator_coy;
class SOCOMD_Rifleman_Vest_coy : lbt_operator_coy
{
	scope = public;
	displayName = "SOCOMD Rifleman Vest Tan";
};

class lbt_pouchless_coy;
class SOCOMD_Pouchless_Vest_coy : lbt_pouchless_coy
{
	scope = public;
	displayName = "SOCOMD Pouchless Vest Tan";
};

////
//// COUNTER TERRORISM ITEMS
////

class SOCOMD_Leader_Vest_BLK : lbt_comms_coy
{
	scope = public;
	displayName = "SOCOMD Leader Vest Black";
	hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
	hiddenSelectionsTextures[]=
		{
			"socomd_data\CTgear\lbt_blk.paa",
			"socomd_data\CTgear\gear_blk.paa",
			"socomd_data\CTgear\radio_blk.paa",
			"socomd_data\CTgear\grenade_blk.paa",
			"socomd_data\CTgear\pouch_blk.paa"
		};
};



class SOCOMD_Medic_Vest_BLK : lbt_medical_coy
{
	scope = public;
	displayName = "SOCOMD Medic Vest Black";
	hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
	hiddenSelectionsTextures[]=
		{
			"socomd_data\CTgear\lbt_blk.paa",
			"socomd_data\CTgear\gear_blk.paa",
			"socomd_data\CTgear\radio_blk.paa",
			"socomd_data\CTgear\shears_co.paa",
			"socomd_data\CTgear\pouch_blk.paa"
		};
};


class SOCOMD_Operator_Vest_BLK : lbt_tl_coy
{
	scope = public;
	displayName = "SOCOMD Operator Vest Black";
	hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
	hiddenSelectionsTextures[]=
		{
			"socomd_data\CTgear\lbt_blk.paa",
			"socomd_data\CTgear\gear_blk.paa",
			"socomd_data\CTgear\radio_blk.paa",
			"socomd_data\CTgear\grenade_blk.paa",
			"socomd_data\CTgear\pouch_blk.paa"
		};
};




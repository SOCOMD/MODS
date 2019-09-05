
class VestItem;

#define VEST_ARMOR_LIGHT \
class ItemInfo : VestItem { \
	hitpointName = "HitBody"; \
	containerClass = "Supply170"; \
	armor = 6; \
	passThrough = 0.1; \
	mass = 60; \
	class HitpointsProtectionInfo { \
		class Neck { \
			hitpointName = "HitNeck"; \
			armor = 2; \
			passThrough	= 0.5; \
		}; \
		class Arms { \
			hitpointName = "HitArms"; \
			armor = 2; \
			passThrough	= 0.5; \
		}; \
		class Chest { \
			hitpointName = "HitChest"; \
			armor = 6; \
			passThrough	= 0.1; \
		}; \
		class Diaphragm { \
			hitpointName = "HitDiaphragm"; \
			armor = 6; \
			passThrough	= 0.1; \
		}; \
		class Abdomen { \
			hitpointName = "HitAbdomen"; \
			armor = 6; \
			passThrough	= 0.1; \
		}; \
		class Body { \
			hitpointName = "HitBody"; \
			passThrough	= 0.1; \
		}; \
	}; \
};


#define VEST_ARMOR_HEAVY \
class ItemInfo : VestItem { \
	hitpointName = "HitBody"; \
	containerClass = "Supply170"; \
	armor = 12; \
	passThrough = 0.1; \
	mass = 60; \
	class HitpointsProtectionInfo { \
		class Neck { \
			hitpointName = "HitNeck"; \
			armor = 4; \
			passThrough	= 0.5; \
		}; \
		class Arms { \
			hitpointName = "HitArms"; \
			armor = 4; \
			passThrough	= 0.5; \
		}; \
		class Chest { \
			hitpointName = "HitChest"; \
			armor = 12; \
			passThrough	= 0.1; \
		}; \
		class Diaphragm { \
			hitpointName = "HitDiaphragm"; \
			armor = 12; \
			passThrough	= 0.1; \
		}; \
		class Abdomen { \
			hitpointName = "HitAbdomen"; \
			armor = 12; \
			passThrough	= 0.1; \
		}; \
		class Body { \
			hitpointName = "HitBody"; \
			passThrough	= 0.1; \
		}; \
	}; \
};

class Vest_Camo_Base : ItemCore {
	
};

////////////////////////////////////////////////////////////////////////////////

// LBT COMMS
class lbt_comms_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_comms_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_comms_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_comms_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_comms_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

// LBT LIGHT
class lbt_light_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_light_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_light_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_light_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_light_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

// LBT MEDICAL
class lbt_medical_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_medical_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_medical_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_medical_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_medical_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_medical_blk : lbt_medical_coy {
	scope = public;
	displayName = "[S4] LBT BLK (Medical)";
	hiddenSelections[]= {
		"Camo",
		"Camo2",
		"Camo3",
		"Camo4",
		"Camo5"
	};

	hiddenSelectionsTextures[]= {
		"socomd_data_core\CTgear\lbt_blk.paa",
		"socomd_data_core\CTgear\gear_blk.paa",
		"socomd_data_core\CTgear\radio_blk.paa",
		"socomd_data_core\CTgear\shears_co.paa",
		"socomd_data_core\CTgear\pouch_blk.paa"
	};
};

// LBT OPERATOR
class lbt_operator_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_operator_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_operator_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_operator_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_operator_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_operator_blk : lbt_operator_coy {
	scope = public;
	displayName = "[S4] LBT BLK (Operator)";
	hiddenSelections[]= {
		"Camo",
		"Camo2",
		"Camo3",
		"Camo4",
		"Camo5"
	};

	hiddenSelectionsTextures[]= {
		"socomd_data_core\CTgear\lbt_blk.paa",
		"socomd_data_core\CTgear\gear_blk.paa",
		"socomd_data_core\CTgear\radio_blk.paa",
		"socomd_data_core\CTgear\grenade_blk.paa",
		"socomd_data_core\CTgear\pouch_blk.paa"
	};
};

// LBT POUCHLESS
class lbt_pouchless_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_pouchless_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_pouchless_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_pouchless_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_pouchless_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

// LBT TL
class lbt_tl_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_tl_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_tl_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_tl_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_tl_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_tl_blk : lbt_tl_coy {
	scope = public;
	displayName = "[S4] LBT BLK (Team Leader)";
	hiddenSelections[]= {
		"Camo",
		"Camo2",
		"Camo3",
		"Camo4",
		"Camo5"
	};

	hiddenSelectionsTextures[]= {
		"socomd_data_core\CTgear\lbt_blk.paa",
		"socomd_data_core\CTgear\gear_blk.paa",
		"socomd_data_core\CTgear\radio_blk.paa",
		"socomd_data_core\CTgear\grenade_blk.paa",
		"socomd_data_core\CTgear\pouch_blk.paa"
	};
};

// LBT WEAPONS
class lbt_weapons_aor1 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_weapons_aor2 : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_weapons_coy : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_weapons_mc : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

class lbt_weapons_od : Vest_Camo_Base {
	VEST_ARMOR_HEAVY
};

// Rebreather
class V_RebreatherB : Vest_Camo_Base {
	displayName = "SOCOMD Rebreather";
	shownUnderwaterSelections[]=
	{
		"NOunhide1",
		"NOunhide2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\characters_f\common\data\diver_equip_nato_co.paa"
	};
	model="\A3\Characters_F\Common\equip_rebreather";
	class ItemInfo : VestItem {
		uniformModel="\A3\Characters_F\Common\equip_rebreather";
		hitpointName = "HitBody";
		containerClass = "Supply400";
		armor = 12;
		passThrough = 0.1;
		mass = 90;
		vestType = "Rebreather";
		shownUnderwaterSelections[]=
			{
				"NOunhide1",
				"NOunhide2"
			};
		class HitpointsProtectionInfo {
			class Neck {
				hitpointName = "HitNeck";
				armor = 4;
				passThrough	= 0.5;
			};
			class Arms {
				hitpointName = "HitArms";
				armor = 4;
				passThrough	= 0.5;
			};
			class Chest {
				hitpointName = "HitChest";
				armor = 12;
				passThrough	= 0.1;
			};
			class Diaphragm {
				hitpointName = "HitDiaphragm";
				armor = 12;
				passThrough	= 0.1;
			};
			class Abdomen {
				hitpointName = "HitAbdomen";
				armor = 12;
				passThrough	= 0.1;
			};
			class Body {
				hitpointName = "HitBody";
				passThrough	= 0.1;
			};
		};
	};
};

class lbt_pouchless_amcu: lbt_pouchless_coy
{
	author="Cunico";
	scope=2;
	displayName="TBAS T2 (AMCU - Pouchless)";
	picture="\lbt\UI\lbtod_ca.paa";
	model="\lbt\pouchless";
	hiddenSelections[]=
	{
		"Camo",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"socomd_data_core\CTgear\lbt_amcu.paa",
		"socomd_data_core\CTgear\gear_amcu.paa",
		"insignia"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"socomd_data_core\CTgear\lbt_amcu.paa",
			"socomd_data_core\CTgear\gear_amcu.paa",
			"insignia"
		};
		uniformModel="\lbt\pouchless";
	};
};
class lbt_tl_amcu: lbt_tl_mc
{
	author="Cunico";
	scope=2;
	displayName="TBAS T2 (AMCU - Team Lead)";
	picture="\lbt\UI\lbtcoy_ca.paa";
	model="\lbt\tl";
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
		"socomd_data_core\CTgear\lbt_amcu.paa",
		"socomd_data_core\CTgear\gear_amcu.paa",
		"socomd_data_core\CTgear\radio_AMCU_co.paa",
		"socomd_data_core\CTgear\grenade_AMCU.paa",
		"socomd_data_core\CTgear\pouch_AMCU.paa",
		"insignia"
	};
	class ItemInfo: ItemInfo
	{
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
			"socomd_data_core\CTgear\lbt_amcu.paa",
			"socomd_data_core\CTgear\gear_amcu.paa",
			"socomd_data_core\CTgear\radio_AMCU_co.paa",
			"socomd_data_core\CTgear\grenade_AMCU.paa",
			"socomd_data_core\CTgear\pouch_AMCU.paa",
			"insignia"
		};
		uniformModel="\lbt\tl";
	};
};
class lbt_operator_amcu: lbt_pouchless_coy
{
	author="Cunico";
	scope=2;
	displayName="TBAS T2 (AMCU - Operator)";
	picture="\lbt\UI\lbtcoy_ca.paa";
	model="\lbt\operator";
	containerClass="Supply160";
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
		"socomd_data_core\CTgear\lbt_amcu.paa",
		"socomd_data_core\CTgear\gear_amcu.paa",
		"socomd_data_core\CTgear\radio_AMCU_co.paa",
		"socomd_data_core\CTgear\grenade_AMCU.paa",
		"socomd_data_core\CTgear\pouch_AMCU.paa",
		"insignia"
	};
	class ItemInfo: ItemInfo
	{
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
			"socomd_data_core\CTgear\lbt_amcu.paa",
			"socomd_data_core\CTgear\gear_amcu.paa",
			"socomd_data_core\CTgear\radio_AMCU_co.paa",
			"socomd_data_core\CTgear\grenade_AMCU.paa",
			"socomd_data_core\CTgear\pouch_AMCU.paa",
			"insignia"
		};
		uniformModel="\lbt\operator";
	};
};
class lbt_weapons_amcu: lbt_pouchless_coy
{
	author="Cunico";
	scope=2;
	displayName="TBAS T2 (AMCU - Weapons)";
	picture="\lbt\UI\lbtcoy_ca.paa";
	model="\lbt\weapons";
	containerClass="Supply160";
	hiddenSelections[]=
	{
		"Camo",
		"Camo2",
		"Camo3",
		"Camo4",
		"Camo5",
		"Camo6",
		"Camo7"
	};
	hiddenSelectionsTextures[]=
	{
		"socomd_data_core\CTgear\lbt_amcu.paa",
		"socomd_data_core\CTgear\gear_amcu.paa",
		"socomd_data_core\CTgear\radio_AMCU_co.paa",
		"socomd_data_core\CTgear\grenade_AMCU.paa",
		"socomd_data_core\CTgear\pouch_AMCU.paa",
		"lbt\Data\m203_co.paa",
		"lbt\Data\m203_gn.paa",
		"insignia"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"Camo",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"socomd_data_core\CTgear\lbt_amcu.paa",
			"socomd_data_core\CTgear\gear_amcu.paa",
			"socomd_data_core\CTgear\radio_AMCU_co.paa",
			"socomd_data_core\CTgear\grenade_AMCU.paa",
			"socomd_data_core\CTgear\pouch_AMCU.paa",
			"lbt\Data\m203_co.paa",
			"lbt\Data\m203_gn.paa",
			"insignia"
		};
		uniformModel="\lbt\weapons";
	};
};
class lbt_medical_amcu: lbt_pouchless_coy
{
	author="Cunico";
	scope=2;
	displayName="TBAS T2 (AMCU - Medical)";
	picture="\lbt\UI\lbtcoy_ca.paa";
	model="\lbt\medical";
	containerClass="Supply160";
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
		"socomd_data_core\CTgear\lbt_amcu.paa",
		"socomd_data_core\CTgear\gear_amcu.paa",
		"socomd_data_core\CTgear\radio_AMCU_co.paa",
		"socomd_data_core\CTgear\shears_AMCU.paa",
		"socomd_data_core\CTgear\pouch_AMCU.paa",
		"insignia"
	};
	class ItemInfo: ItemInfo
	{
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
			"socomd_data_core\CTgear\lbt_amcu.paa",
			"socomd_data_core\CTgear\gear_amcu.paa",
			"socomd_data_core\CTgear\radio_AMCU_co.paa",
			"socomd_data_core\CTgear\shears_AMCU.paa",
			"socomd_data_core\CTgear\pouch_AMCU.paa",
			"insignia"
		};
		uniformModel="\lbt\medical";
	};
};
class lbt_comms_amcu: lbt_pouchless_coy
{
	author="Cunico";
	scope=2;
	displayName="TBAS T2 (AMCU - Comms)";
	picture="\lbt\UI\lbtcoy_ca.paa";
	model="\lbt\comms";
	containerClass="Supply160";
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
		"socomd_data_core\CTgear\lbt_amcu.paa",
		"socomd_data_core\CTgear\gear_amcu.paa",
		"socomd_data_core\CTgear\radio_AMCU_co.paa",
		"socomd_data_core\CTgear\grenade_AMCU.paa",
		"socomd_data_core\CTgear\pouch_AMCU.paa",
		"insignia"
	};
	class ItemInfo: ItemInfo
	{
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
			"socomd_data_core\CTgear\lbt_amcu.paa",
			"socomd_data_core\CTgear\gear_amcu.paa",
			"socomd_data_core\CTgear\radio_AMCU_co.paa",
			"socomd_data_core\CTgear\grenade_AMCU.paa",
			"socomd_data_core\CTgear\pouch_AMCU.paa",
			"insignia"
		};
		uniformModel="\lbt\comms";
	};
};
class lbt_light_amcu: lbt_pouchless_coy
{
	author="Cunico";
	scope=2;
	displayName="TBAS T2 (AMCU - Light)";
	picture="\lbt\UI\lbtcoy_ca.paa";
	model="\lbt\light";
	
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
		"socomd_data_core\CTgear\lbt_amcu.paa",
		"socomd_data_core\CTgear\gear_amcu.paa",
		"socomd_data_core\CTgear\radio_AMCU_co.paa",
		"socomd_data_core\CTgear\grenade_AMCU.paa",
		"socomd_data_core\CTgear\pouch_AMCU.paa",
		"insignia"
	};
	class ItemInfo: ItemInfo
	{
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
			"socomd_data_core\CTgear\lbt_amcu.paa",
			"socomd_data_core\CTgear\gear_amcu.paa",
			"socomd_data_core\CTgear\radio_AMCU_co.paa",
			"socomd_data_core\CTgear\grenade_AMCU.paa",
			"socomd_data_core\CTgear\pouch_AMCU.paa",
			"insignia"
		};
		uniformModel="\lbt\light";
		containerClass="Supply160";
		mass=50;
		armor=1;
		passThrough=0.1;
	};
};
class lbt_fast_amcu: lbt_pouchless_coy
{
	author="Cunico";
	scope=2;
	displayName="TBAS T2 (AMCU - Fast)";
	picture="\lbt\UI\lbtcoy_ca.paa";
	model="\lbt\fast";
	hiddenSelections[]=
	{
		"Camo",
		"Camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"socomd_data_core\CTgear\lbt_amcu.paa",
		"socomd_data_core\CTgear\gear_amcu.paa"
	};
	class ItemInfo: ItemInfo
	{
		hiddenSelections[]=
		{
			"Camo",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"socomd_data_core\CTgear\lbt_amcu.paa",
			"socomd_data_core\CTgear\gear_amcu.paa"
		};
		uniformModel="\lbt\fast";
		containerClass="Supply160";
		mass=50;
		armor=1;
		passThrough=0.1;
	};
};
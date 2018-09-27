/*//////////////////////////////////////////////////////////////////////////////

Uses "getUnitLoadout player" to get the loadout of the current unit.

Loadout Format:
[
    [], //0 PRIMARY     | WEAPON FORMAT
    [], //1 SECONDARY   | WEAPON FORMAT
    [], //2 HANDGUN     | WEAPON FORMAT
    [], //3 UNIFORM     | CONTAINER FORMAT
    [], //4 VEST        | CONTAINER FORMAT
    [], //5 BACKPACK    | CONTAINER FORMAT
    ""  //6 HELMET
    ""  //7 FACEWEAR
    []  //8 BINOCULAR   | WEAPON
    []  //9 ITEMS       | EQUIPMENT FORMAT
]

WEAPON FORMAT
[
    "",     //0 WEAPON TYPE
    "",     //1 MUZZLE
    "",     //2 POINTER
    "",     //3 OPTIC
    ["", 0] //4 PRIMARY MAGAZINE (TYPE/COUNT)
    ["", 0] //5 SECONDARY MAGAZINE (TYPE/COUNT)
    "",     //6 BIPOD
]

CONTAINER FORMAT
[
    ""      //0 ITEM TYPE
    [...]   //1 INVENTORY
]

EQUIPMENT FORMAT
[
    "",     //0 MAP
    "",     //1 GPS
    "",     //2 RADIO
    "",     //3 COMPASS
    "",     //4 WATCH
    ""      //5 GOGGLES
]

INVENTORY ITEM
[
    "",     //0 ITEM TYPE
    0       //0 ITEM COUNT
]

////////////////////////////////////////////////////////////////////////////////

** EXAMPLE LOADOUT **
class SASR_StandardTrooper
{
    primary = "";
    secondary = "";
    handgun = "";
    headgear = "";
    facewear = "";
    binocular = "";
    gps = "";
    
    class Uniform
    {
        type = "";
        class Inventory
        {
            LOADOUT_ITEM(ClassName, Quantity)
        };
    };

    class Vest
    {
        type = "";
        class Inventory
        {
            LOADOUT_ITEM(ClassName, Quantity)
        };
    };

    class Backpack
    {
        type = "";
        class Inventory
        {
            LOADOUT_ITEM(ClassName, Quantity)
        };
    };
};

//////////////////////////////////////////////////////////////////////////////*/

#define LOADOUT_ITEM(id, qty) \
	class _xx_##id            \
	{                         \
		type = #id;           \
		count = qty;          \
	};

//////////////////////////////////////////////////////////////////////
// COMMON SASR LOADOUT ITEMS

#define SASR_STANDARD_MEDICAL           \
	LOADOUT_ITEM(ACE_fieldDressing, 6)  \
	LOADOUT_ITEM(ACE_elasticBandage, 6) \
	LOADOUT_ITEM(ACE_packingBandage, 6) \
	LOADOUT_ITEM(ACE_quikclot, 6)       \
	LOADOUT_ITEM(ACE_epinephrine, 2)    \
	LOADOUT_ITEM(ACE_morphine, 2)       \
	LOADOUT_ITEM(ACE_tourniquet, 2)

#define SASR_UNIFORM_ESSENTIALS          \
	LOADOUT_ITEM(ItemcTabHCam, 1)        \
	LOADOUT_ITEM(ACE_EarPlugs, 1)        \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(ACE_Chemlight_HiRed, 2) \
	LOADOUT_ITEM(murshun_cigs_cigpack, 1)\
	LOADOUT_ITEM(murshun_cigs_lighter, 1)\
	LOADOUT_ITEM(ACE_DAGR, 1)			 \
	LOADOUT_ITEM(hlc_acc_DBALPL, 1)		 \
	LOADOUT_ITEM(11Rnd_45ACP_Mag, 3)	 \
	
	//LOADOUT_ITEM(Chemlight_blue, 2)      \
	
#define SASR_BACKPACK_ESSENTIALS		 \
	LOADOUT_ITEM(NVGoggles_OPFOR, 1)        \
	LOADOUT_ITEM(ACE_MapTools, 1)		 \
	LOADOUT_ITEM(ACE_CableTie, 4)        \
	
#define SASR_VEST_ESSENTIALS             \
	LOADOUT_ITEM(CUP_HandGrenade_M67, 2) \
	LOADOUT_ITEM(ACE_M84, 2)             \
	LOADOUT_ITEM(SmokeShell, 5)          \
	LOADOUT_ITEM(ACRE_PRC343, 1)         \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)  \
	//LOADOUT_ITEM(SmokeShellRed, 2)       \
	//LOADOUT_ITEM(SmokeShellGreen, 2)

#define JAC_ESSENTIALS                   \
	LOADOUT_ITEM(ItemcTabHCam, 1)        \
	LOADOUT_ITEM(ACE_EarPlugs, 1)        \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(ACE_NVG_Gen4, 1)        \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)  \
	LOADOUT_ITEM(ACRE_PRC343, 1)         \
	LOADOUT_ITEM(ACE_DAGR, 1)            \
	LOADOUT_ITEM(ACE_MapTools, 1)

#define JAC_STANDARD_MEDICAL            \
	LOADOUT_ITEM(ACE_fieldDressing, 6)  \
	LOADOUT_ITEM(ACE_elasticBandage, 5) \
	LOADOUT_ITEM(ACE_quikclot, 5)       \
	LOADOUT_ITEM(ACE_packingBandage, 5) \
	LOADOUT_ITEM(ACE_morphine, 2)       \
	LOADOUT_ITEM(ACE_epinephrine, 2)
	
	
	
	
	
	
//////////////////////////////////////////////////////////////////////
//SASR Individual loadout common items
//////////////////////////////////////////////////////////////////////
//Troop Leader

#define Troop_Leader_Uniform						\
	LOADOUT_ITEM(Laserbatteries, 2)					\
	
#define Troop_Leader_Vest							\
	LOADOUT_ITEM(ACRE_PRC152, 1)					\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)		\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1_Tracer, 1)	\
	
#define Troop_Leader_Backpack						\
	LOADOUT_ITEM(ACRE_PRC117F, 1)					\
	LOADOUT_ITEM(SmokeShellGreen, 2)				\
	LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)			\
	LOADOUT_ITEM(UGL_FlareRed_F, 2)					\
	LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)	\
	
//////////////////////////////////////////////////////////////////////
//Patrol Leader

#define PatrolLeader_Vest	\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)		\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1_Tracer, 1)	\
	
	
#define PatrolLeader_Backpack\
	LOADOUT_ITEM(ACRE_PRC152, 1)\
	LOADOUT_ITEM(SmokeShellGreen, 2)\
	LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)\
	LOADOUT_ITEM(UGL_FlareRed_F, 2)\
	LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)\

//////////////////////////////////////////////////////////////////////
//Rifleman

#define Rifleman_Vest\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)		\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1_Tracer, 1)	\
	

//////////////////////////////////////////////////////////////////////
//2IC

#define Grenadier_Vest\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)		\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1_Tracer, 1)	\
	
	
#define Grenadier_Backpack\
	LOADOUT_ITEM(ACRE_PRC152, 1)\
	LOADOUT_ITEM(SmokeShellGreen, 2)\
	LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)\
	LOADOUT_ITEM(UGL_FlareRed_F, 2)\
	LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)\

//////////////////////////////////////////////////////////////////////
//Sapper

#define Sapper_Backpack\
	LOADOUT_ITEM(ACE_DefusalKit, 1)\
	LOADOUT_ITEM(ACE_Clacker, 1)\
	LOADOUT_ITEM(ACE_wirecutter, 1)\
	LOADOUT_ITEM(ACE_EntrenchingTool, 1)\
	LOADOUT_ITEM(MineDetector, 1)\
	LOADOUT_ITEM(DemoCharge_Remote_Mag, 3)\
	LOADOUT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 1)\
	LOADOUT_ITEM(SatchelCharge_Remote_Mag, 1)\
	LOADOUT_ITEM(AMP_Breaching_Charge_Mag, 3)\

//////////////////////////////////////////////////////////////////////
//MG

#define MachineGunner_Vest\
	LOADOUT_ITEM(SMA_150Rnd_762_M80A1, 5)\

//////////////////////////////////////////////////////////////////////
//Medic

#define Medic_Backpack\
	LOADOUT_ITEM(ACE_surgicalKit, 8)\
	LOADOUT_ITEM(ACE_fieldDressing, 25)\
	LOADOUT_ITEM(ACE_elasticBandage, 20)\
	LOADOUT_ITEM(ACE_packingBandage, 25)\
	LOADOUT_ITEM(ACE_quikclot, 25)\
	LOADOUT_ITEM(ACE_epinephrine, 10)\
	LOADOUT_ITEM(ACE_morphine, 10)\
	LOADOUT_ITEM(ACE_tourniquet, 6)\
	LOADOUT_ITEM(ACE_salineIV_500, 6)\
	LOADOUT_ITEM(ACE_personalAidKit, 2)\

//////////////////////////////////////////////////////////////////////
//Marksman

#define Marksman_Vest\
	LOADOUT_ITEM(ACE_Kestrel4500, 1)\
	LOADOUT_ITEM(ACE_RangeCard, 1)\
	LOADOUT_ITEM(20Rnd_762x51_Mag, 8)\

//////////////////////////////////////////////////////////////////////
//Sniper

#define Sniper_Vest\
	LOADOUT_ITEM(ACE_Kestrel4500, 1)\
	LOADOUT_ITEM(ACE_RangeCard, 1)\
	LOADOUT_ITEM(ACRE_PRC152, 1)\
	LOADOUT_ITEM(hlc_5rnd_300WM_FMJ_AWM, 9)\

#define Sniper_Backpack\
	LOADOUT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 4)\
	LOADOUT_ITEM(ACE_DefusalKit, 1)\
	LOADOUT_ITEM(ACE_Clacker, 1)\
	LOADOUT_ITEM(ACE_FlareTripMine_Mag, 4)\


//////////////////////////////////////////////////////////////////////
//MAT

#define MAT_Backpack\
	LOADOUT_ITEM(tf47_m3maaws_HEAT, 1)\
	LOADOUT_ITEM(tf47_m3maaws_HE, 1)\

//////////////////////////////////////////////////////////////////////
//HAT

#define HAT_Backpack\
	LOADOUT_ITEM(CUP_Javelin_M, 1)	\
	
	
//////////////////////////////////////////////////////////////////////
// COMMON TAGE LOADOUT ITEMS
	
#define TAGE_BACKPACK_ESSENTIALS		 \
	LOADOUT_ITEM(A3_GPNVG18b_BLK_F, 1)   \
	LOADOUT_ITEM(ACE_MapTools, 1)		 \
	LOADOUT_ITEM(ACE_CableTie, 8)        \
	
#define TAGE_VEST_ESSENTIALS             \
	LOADOUT_ITEM(ACE_M84, 4)             \
	LOADOUT_ITEM(SmokeShell, 5)          \
	LOADOUT_ITEM(ACRE_PRC343, 1)         \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)  \
	//LOADOUT_ITEM(SmokeShellRed, 2)       \
	//LOADOUT_ITEM(SmokeShellGreen, 2)
	
	
	
	
//////////////////////////////////////////////////////////////////////
// COMMON 2CDO LOADOUT ITEMS

#define CDO_STANDARD_MEDICAL            \
	LOADOUT_ITEM(ACE_fieldDressing, 6)  \
	LOADOUT_ITEM(ACE_elasticBandage, 6) \
	LOADOUT_ITEM(ACE_packingBandage, 6) \
	LOADOUT_ITEM(ACE_quikclot, 6)       \
	LOADOUT_ITEM(ACE_epinephrine, 2)    \
	LOADOUT_ITEM(ACE_morphine, 2)       \
	LOADOUT_ITEM(ACE_tourniquet, 1)

#define CDO_UNIFORM_ESSENTIALS            \
	LOADOUT_ITEM(ACRE_PRC343, 1)          \
	LOADOUT_ITEM(ItemcTabHCam, 1)         \
	LOADOUT_ITEM(murshun_cigs_lighter, 1) \
	LOADOUT_ITEM(ACE_EarPlugs, 1)         \
	LOADOUT_ITEM(ACE_CableTie, 4)         \
	LOADOUT_ITEM(ACE_NVG_Gen4, 1)         \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1)  \
	LOADOUT_ITEM(B_IR_Grenade, 1)

#define CDO_VEST_ESSENTIALS      \
	LOADOUT_ITEM(HandGrenade, 2) \
	LOADOUT_ITEM(ACE_M84, 2)     \
	LOADOUT_ITEM(SmokeShell, 2)  \
	LOADOUT_ITEM(SmokeShellGreen, 2)






class CfgLoadouts
{
	class SOCOMD
	{
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
			gps = "ItemcTab";

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
				type = "KIT_BAG_TAN";
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

		////////////////////////////////////////////////////////////////////////////////
		//JAC LOADOUTS

		class 171AVN_PJ
		{
			primary = "SMA_M4MOE_Tan";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "VSM_oga_OPS_2";
			binocular = "Binocular";
			gps = "ItemAndroid";

			class Uniform
			{
				type = "VSM_M81_Crye_tan_shirt_Camo";
				class Inventory
				{
					JAC_ESSENTIALS
					JAC_STANDARD_MEDICAL

					LOADOUT_ITEM(RH_15Rnd_9x19_M9, 2)
					LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 4)
					LOADOUT_ITEM(SmokeShellRed, 2)
				};
			};

			class Vest
			{
				type = "VSM_OGA_Vest_3";
				class Inventory
				{
					LOADOUT_ITEM(ACE_surgicalKit, 6)
					LOADOUT_ITEM(ACE_fieldDressing, 20)
					LOADOUT_ITEM(ACE_elasticBandage, 20)
					LOADOUT_ITEM(ACE_quikclot, 20)
					LOADOUT_ITEM(ACE_epinephrine, 7)
					LOADOUT_ITEM(ACE_morphine, 7)
					LOADOUT_ITEM(ACE_packingBandage, 20)
					LOADOUT_ITEM(ACE_tourniquet, 4)
					LOADOUT_ITEM(ACE_salineIV_500, 6)
				};
			};
		};

		class 171AVN_Pilot
		{
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Pilot_helmet";
			binocular = "Binocular";
			gps = "ItemcTab";

			class Uniform
			{
				type = "SOCOMD_Uniform_GSuit";
				class Inventory
				{
					JAC_ESSENTIALS
					JAC_STANDARD_MEDICAL

					LOADOUT_ITEM(H_Watchcap_camo, 1)
					LOADOUT_ITEM(11Rnd_45ACP_Mag, 3)
					LOADOUT_ITEM(ACRE_PRC152, 1)
				};
			};

			class Backpack
			{
				type = "Kit_Bag_R_Tan";
				class Inventory
				{
					LOADOUT_ITEM(ACRE_PRC117F, 1)
				};
			};
		};

		////////////////////////////////////////////////////////////////////////////////
		// TAGEAST
		
		class TAGE_TroopLeader
		{
			primary = "SMG_05_F";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "ADFU_H_OpsCore_08_BLK";
			facewear = "Mask_M40";
			binocular = "Laserdesignator";
			gps = "ItemcTab";

			class Uniform
			{
				type = "SOCOMD_Commando_BLK_SleevesDown";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS

					LOADOUT_ITEM(Laserbatteries, 2)
				};
			};

			class Vest
			{
				type = "SOCOMD_Leader_Vest_BLK";

				class Inventory
				{
					TAGE_VEST_ESSENTIALS

					LOADOUT_ITEM(ACRE_PRC152, 1)
					LOADOUT_ITEM(30Rnd_9x21_Mag_SMG_02, 12)

				};
			};

			class Backpack
			{
				type = "SOG_BAG_recon_blk";
				class Inventory
				{
					TAGE_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
					
					LOADOUT_ITEM(ACRE_PRC117F, 1)
				};
			};
		};
		
		class TAGE_Medic
		{
			primary = "SMG_05_F";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "ADFU_H_OpsCore_08_BLK";
			facewear = "Mask_M40";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_BLK_SleevesDown";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "SOCOMD_Medic_Vest_BLK";
				class Inventory
				{
					TAGE_VEST_ESSENTIALS

					LOADOUT_ITEM(30Rnd_9x21_Mag_SMG_02, 12)
				};
			};

			class Backpack
			{
				type = "SOG_BAG_med_blk";
				class Inventory
				{
					TAGE_BACKPACK_ESSENTIALS
					
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
					//LOADOUT_ITEM(ACE_bodyBag, 6)
				};
			};
		};

		class TAGE_Sapper
		{
			primary = "SMG_05_F";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "ADFU_H_OpsCore_08_BLK";
			facewear = "Mask_M40";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_BLK_SleevesDown";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS

				};
			};

			class Vest
			{
				type = "SOCOMD_Operator_Vest_BLK";
				class Inventory
				{
					TAGE_VEST_ESSENTIALS

					LOADOUT_ITEM(30Rnd_9x21_Mag_SMG_02, 12)
				};
			};

			class Backpack
			{
				type = "SOG_BAG_BREACHER_BLK";
				class Inventory
				{
					TAGE_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
					
					LOADOUT_ITEM(ACE_DefusalKit, 1)
					LOADOUT_ITEM(ACE_Clacker, 1)
					LOADOUT_ITEM(ACE_wirecutter, 1)
					LOADOUT_ITEM(MineDetector, 1)
					LOADOUT_ITEM(AMP_Breaching_Charge_Mag, 3)
				};
			};
		};
		
		class TAGE_Sniper
		{
			primary = "hlc_rifle_awcovert_BL";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "CUP_H_PMC_Cap_Grey";
			facewear = "milgp_f_face_shield_tactical_shemagh_BLK";
			binocular = "Rangefinder";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_BLK_SleevesDown";

				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
					LOADOUT_ITEM(ACE_Kestrel4500, 1)
					LOADOUT_ITEM(ACE_RangeCard, 1)
				};
			};

			class Vest
			{
				type = "SOCOMD_Operator_Vest_BLK";
				class Inventory
				{
					TAGE_VEST_ESSENTIALS

					LOADOUT_ITEM(ACRE_PRC152, 1)
					LOADOUT_ITEM(hlc_5rnd_300WM_FMJ_AWM, 9)

				};
			};
			
			class Backpack
			{
				type = "SOG_BAG_blk";
				class Inventory
				{
					SASR_STANDARD_MEDICAL
					TAGE_BACKPACK_ESSENTIALS
					
					LOADOUT_ITEM(ACE_DefusalKit, 1)
					LOADOUT_ITEM(ACE_Clacker, 1)
					LOADOUT_ITEM(ACE_FlareTripMine_Mag, 4)
				};
			};
		};
		
		
		
		////////////////////////////////////////////////////////////////////////////////
		//OldSchool
		class SASR_TroopLeader_Old
		{
			primary = "SMA_M4_GL_SM";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "CUP_H_PMC_Cap_Tan";
			binocular = "Laserdesignator";
			gps = "ItemcTab";

			class Uniform
			{
				type = "SOCOMD_Commando_DPDU_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
					Troop_Leader_Uniform
				};
			};

			class Vest
			{
				type = "SOCOMD_Leader_Vest_coy";

				class Inventory
				{
					SASR_VEST_ESSENTIALS
					Troop_Leader_Vest
				};
			};

			class Backpack
			{
				type = "Kit_Bag_R_tan";
				class Inventory
				{
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
					Troop_Leader_Backpack
				};
			};
		};

		class SASR_PatrolLeader_Old
		{
			primary = "SMA_M4_GL_SM";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "CUP_H_PMC_Cap_Tan";
			binocular = "Laserdesignator";
			gps = "ItemAndroid";

			class Uniform
			{
				type = "SOCOMD_Commando_DPDU_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
					Troop_Leader_Uniform
				};
			};

			class Vest
			{
				type = "SOCOMD_Leader_Vest_coy";

				class Inventory
				{
					SASR_VEST_ESSENTIALS
					PatrolLeader_Vest
				};
			};
			class Backpack
			{
				type = "Kit_Bag_R_tan";
				class Inventory
				{	
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
					PatrolLeader_Backpack
				};
			};
		};

		class SASR_Rifleman_Old
		{
			primary = "SMA_M4afgSTOCK";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "H_Booniehat_khk";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPDU_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS

				};
			};

			class Vest
			{
				type = "SOCOMD_Operator_Vest_coy";
				class Inventory
				{
					SASR_VEST_ESSENTIALS
					Rifleman_Vest
				};
			};
			class Backpack
			{
				type = "SOG_BAG_tan";
				class Inventory
				{	
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
				};
			};
		};

		class SASR_Grenadier_Old
		{
			primary = "SMA_M4_GL_SM";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "CUP_H_PMC_Cap_Tan";
			binocular = "Rangefinder";
			gps = "ItemAndroid";

			class Uniform
			{
				type = "SOCOMD_Commando_DPDU_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS

					
				};
			};

			class Vest
			{
				type = "SOCOMD_2IC_Vest_coy";

				class Inventory
				{
					SASR_VEST_ESSENTIALS
					Grenadier_Vest
				};
			};
			class Backpack
			{
				type = "SOG_BAG_recon_tan";
				class Inventory
				{	
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
					Grenadier_Backpack
				};
			};			
		};

		class SASR_Sapper_Old
		{
			primary = "SMA_M4afgSTOCK";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "ADFU_H_OpsCore_08_TAN";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPDU_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
					
				};
			};

			class Vest
			{
				type = "SOCOMD_Operator_Vest_coy";
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

		class SASR_MachineGunner_Old
		{
			primary = "sma_minimi_mk3_762tsb";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "ADFU_H_OpsCore_08_TAN";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPDU_SleevesUp";
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
				type = "SOG_BAG_tan";
				class Inventory
				{
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
				};
			};
		};

		class SASR_Medic_Old
		{
			primary = "SMA_M4afgSTOCK";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "CUP_H_PMC_Cap_Tan";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPDU_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "SOCOMD_Medic_Vest_coy";
				class Inventory
				{
					SASR_VEST_ESSENTIALS

					Rifleman_Vest
				};
			};

			class Backpack
			{
				type = "KIT_BAG_TAN";
				class Inventory
				{
					SASR_BACKPACK_ESSENTIALS
					
					Medic_Backpack
				};
			};
		};

		class SASR_Marksman_Old
		{
			primary = "SMA_HK417_16in";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "H_Booniehat_khk";
			binocular = "Rangefinder";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPDU_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
					
				};
			};

			class Vest
			{
				type = "SOCOMD_Operator_Vest_coy";
				class Inventory
				{
					SASR_VEST_ESSENTIALS

					Marksman_Vest
				};
			};
			class Backpack
			{
				type = "SOG_BAG_tan";
				class Inventory
				{
					SASR_STANDARD_MEDICAL
					SASR_BACKPACK_ESSENTIALS
				};
			};
		};

		class SASR_Sniper_Old
		{
			primary = "hlc_rifle_awmagnum";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "H_Booniehat_khk";
			binocular = "Rangefinder";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPDU_SleevesUp";

				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
					LOADOUT_ITEM(ACE_Kestrel4500, 1)
					LOADOUT_ITEM(ACE_RangeCard, 1)
				};
			};

			class Vest
			{
				type = "SOCOMD_Operator_Vest_coy";
				class Inventory
				{
					SASR_VEST_ESSENTIALS

					Sniper_Vest
				};
			};
			
			class Backpack
			{
				type = "SOG_BAG_tan";
				class Inventory
				{
					SASR_STANDARD_MEDICAL
					SASR_BACKPACK_ESSENTIALS
					
					Sniper_Backpack
				};
			};
		};

		class SASR_LAT_Old
		{
			primary = "SMA_M4afgSTOCK";
			secondary = "HAFM_LAW";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "H_Booniehat_khk";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPDU_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "SOCOMD_Operator_Vest_coy";
				class Inventory
				{
					SASR_VEST_ESSENTIALS

					Rifleman_Vest
				};
			};
			class Backpack
			{
				type = "SOG_BAG_tan";
				class Inventory
				{
					SASR_STANDARD_MEDICAL
					SASR_BACKPACK_ESSENTIALS
				};
			};
		};

		class SASR_MAT_Old
		{
			primary = "SMA_M4afgSTOCK";
			secondary = "SOCOMD_Carl_Gustav";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "CUP_H_PMC_Cap_Tan";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPDU_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "SOCOMD_Operator_Vest_coy";
				class Inventory
				{
					SASR_VEST_ESSENTIALS

					Rifleman_Vest
				};
			};

			class Backpack
			{
				type = "SOG_BAG_tan";
				class Inventory
				{
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
					MAT_Backpack
				};
			};
		};

		class SASR_HAT_Old
		{
			primary = "SMA_M4afgSTOCK";
			secondary = "CUP_launch_Javelin";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "CUP_H_PMC_Cap_Tan";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPDU_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "SOCOMD_Operator_Vest_coy";
				class Inventory
				{
					SASR_VEST_ESSENTIALS
					Rifleman_Vest
				};
			};

			class Backpack
			{
				type = "Kit_Bag_tan";
				class Inventory
				{
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
					HAT_Backpack
				};
			};
		};
		
		////////////////////////////////////////////////////////////////////////////////
		//Green
		class SASR_TroopLeader_Jngl
		{
			primary = "SMA_M4_GL_SM";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Aus_Boonie";
			binocular = "Laserdesignator";
			gps = "ItemcTab";

			class Uniform
			{
				type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS

					Troop_Leader_Uniform
				};
			};

			class Vest
			{
				type = "lbt_comms_od";
				class Inventory
				{
					SASR_VEST_ESSENTIALS
					Troop_Leader_Vest
				};
			};

			class Backpack
			{
				type = "Kit_Bag_R_od";
				class Inventory
				{
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
					
					Troop_Leader_Backpack
				};
			};
		};

		class SASR_PatrolLeader_Jngl
		{
			primary = "SMA_M4_GL_SM";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Aus_Boonie";
			binocular = "Laserdesignator";
			gps = "ItemAndroid";

			class Uniform
			{
				type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS

					Troop_Leader_Uniform
				};
			};

			class Vest
			{
				type = "lbt_comms_od";

				class Inventory
				{
					SASR_VEST_ESSENTIALS

					PatrolLeader_Vest
				};
			};
			class Backpack
			{
				type = "Kit_Bag_R_od";
				class Inventory
				{	
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
					
					PatrolLeader_Backpack
				};
			};
		};

		class SASR_Rifleman_Jngl
		{
			primary = "SMA_M4afgSTOCK";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Aus_Boonie";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
					
				};
			};

			class Vest
			{
				type = "lbt_tl_od";
				class Inventory
				{
					SASR_VEST_ESSENTIALS

					Rifleman_Vest
				};
			};
			class Backpack
			{
				type = "SOG_BAG_od";
				class Inventory
				{	
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
				};
			};
		};

		class SASR_Grenadier_Jngl
		{
			primary = "SMA_M4_GL_SM";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Aus_Boonie";
			binocular = "Rangefinder";
			gps = "ItemAndroid";

			class Uniform
			{
				type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
					
				};
			};

			class Vest
			{
				type = "lbt_weapons_od";

				class Inventory
				{
					SASR_VEST_ESSENTIALS
					Grenadier_Vest
				};
			};
			class Backpack
			{
				type = "SOG_BAG_recon_od";
				class Inventory
				{	
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
					Grenadier_Backpack
				};
			};			
		};

		class SASR_Sapper_Jngl
		{
			primary = "SMA_M4afgSTOCK";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Aus_Boonie";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
					
				};
			};

			class Vest
			{
				type = "SOCOMD_Operator_Vest_coy";
				class Inventory
				{
					SASR_VEST_ESSENTIALS

					Rifleman_Vest
				};
			};

			class Backpack
			{
				type = "Kit_Bag_pince_od";
				class Inventory
				{
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
					Sapper_Backpack
				};
			};
		};

		class SASR_MachineGunner_Jngl
		{
			primary = "sma_minimi_mk3_762tsb";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Aus_Boonie";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
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
				type = "SOG_BAG_od";
				class Inventory
				{
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
				};
			};
		};

		class SASR_Medic_Jngl
		{
			primary = "SMA_M4afgSTOCK";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Aus_Boonie";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "lbt_medical_od";
				class Inventory
				{
					SASR_VEST_ESSENTIALS
					Rifleman_Vest
				};
			};

			class Backpack
			{
				type = "KIT_BAG_od";
				class Inventory
				{
					SASR_BACKPACK_ESSENTIALS
					Medic_Backpack
				};
			};
		};

		class SASR_Marksman_Jngl
		{
			primary = "SMA_HK417_16in";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Aus_Boonie";
			binocular = "Rangefinder";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
					
				};
			};

			class Vest
			{
				type = "lbt_tl_od";
				class Inventory
				{
					SASR_VEST_ESSENTIALS
					Marksman_Vest
				};
			};
			class Backpack
			{
				type = "SOG_BAG_od";
				class Inventory
				{
					SASR_STANDARD_MEDICAL
					SASR_BACKPACK_ESSENTIALS
				};
			};
		};

		class SASR_Sniper_Jngl
		{
			primary = "hlc_rifle_awmagnum";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Aus_Boonie";
			binocular = "Rangefinder";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPCU_OD_SleevesUp";

				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
					
				};
			};

			class Vest
			{
				type = "lbt_tl_od";
				class Inventory
				{
					SASR_VEST_ESSENTIALS
					Sniper_Vest
				};
			};
			
			class Backpack
			{
				type = "SOG_BAG_od";
				class Inventory
				{
					SASR_STANDARD_MEDICAL
					SASR_BACKPACK_ESSENTIALS
					
					Sniper_Backpack
				};
			};
		};

		class SASR_LAT_Jngl
		{
			primary = "SMA_M4afgSTOCK";
			secondary = "HAFM_LAW";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Aus_Boonie";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "lbt_tl_od";
				class Inventory
				{
					SASR_VEST_ESSENTIALS
					Rifleman_Vest
				};
			};
			class Backpack
			{
				type = "SOG_BAG_od";
				class Inventory
				{
					SASR_STANDARD_MEDICAL
					SASR_BACKPACK_ESSENTIALS
				};
			};
		};

		class SASR_MAT_Jngl
		{
			primary = "SMA_M4afgSTOCK";
			secondary = "SOCOMD_Carl_Gustav";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Aus_Boonie";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
				class Inventory
				{
					SASR_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "lbt_tl_od";
				class Inventory
				{
					SASR_VEST_ESSENTIALS
					Rifleman_Vest
				};
			};

			class Backpack
			{
				type = "SOG_BAG_od";
				class Inventory
				{
					SASR_BACKPACK_ESSENTIALS
					SASR_STANDARD_MEDICAL
					MAT_Backpack
				};
			};
		};

		class SASR_HAT_Jngl
		{
			primary = "SMA_M4afgSTOCK";
			secondary = "CUP_launch_Javelin";
			handgun = "DSO_hgun_Pistol_heavy_01_blk_F";
			handgunMagazine = "11Rnd_45ACP_Mag";
			headgear = "SOCOMD_Aus_Boonie";
			binocular = "Binocular";
			gps = "ItemMicroDAGR";

			class Uniform
			{
				type = "SOCOMD_Commando_DPCU_OD_SleevesUp";
				class Inventory
				{
					SASR_STANDARD_MEDICAL
					SASR_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "lbt_tl_od";
				class Inventory
				{
					SASR_VEST_ESSENTIALS
					Rifleman_Vest
				};
			};

			class Backpack
			{
				type = "Kit_Bag_od";
				class Inventory
				{
					SASR_BACKPACK_ESSENTIALS
					HAT_Backpack
				};
			};
		};
		
		////////////////////////////////////////////////////////////////////////////////
		//2CDO LOADOUTS

		class CDO_Leader
		{
			primary = "SMA_HK416GLCQB";
			binocular = "Laserdesignator";
			handgun = "RH_usp";
			handgunMagazine = "RH_12Rnd_45cal_usp";
			headgear = "SOCOMD_MICH_Multi";
			gps = "ItemAndroid";

			class Uniform
			{
				type = "SOCOMD_Commando_SleevesDown";
				class Inventory
				{
					CDO_STANDARD_MEDICAL
					CDO_UNIFORM_ESSENTIALS

					LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
				};
			};

			class Vest
			{
				type = "SOCOMD_Vest_TL";
				class Inventory
				{
					CDO_VEST_ESSENTIALS

					LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 5)
					LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
					LOADOUT_ITEM(ACE_HuntIR_M203, 2)
					LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)
					LOADOUT_ITEM(Laserbatteries, 2)
					LOADOUT_ITEM(ACRE_PRC152, 1)
				};
			};
		};

		class CDO_2IC
		{
			primary = "SMA_HK416GLCQB";
			binocular = "Rangefinder";
			handgun = "RH_usp";
			handgunMagazine = "RH_12Rnd_45cal_usp";
			headgear = "SOCOMD_MICH_Multi";
			gps = "ItemAndroid";

			class Uniform
			{
				type = "SOCOMD_Commando_SleevesDown";
				class Inventory
				{
					CDO_STANDARD_MEDICAL
					CDO_UNIFORM_ESSENTIALS

					LOADOUT_ITEM(ACE_HuntIR_monitor, 1)
				};
			};

			class Vest
			{
				type = "SOCOMD_Vest_TL";
				class Inventory
				{
					CDO_VEST_ESSENTIALS

					LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 5)
					LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)
					LOADOUT_ITEM(ACE_HuntIR_M203, 2)
					LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)
					LOADOUT_ITEM(ACRE_PRC152, 1)
				};
			};
			class Backpack
			{
				type = "SOG_BAG_recon_MC";
				class Inventory
				{
				LOADOUT_ITEM(ACRE_PRC152, 1)	
				};
			};
		};

		class CDO_Sapper
		{
			primary = "SMA_HK416CUSTOMCQBvfg";
			handgun = "RH_usp";
			handgunMagazine = "RH_12Rnd_45cal_usp";
			headgear = "SOCOMD_MICH_Multi";

			class Uniform
			{
				type = "SOCOMD_Commando_SleevesDown";
				class Inventory
				{
					CDO_STANDARD_MEDICAL
					CDO_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "SOCOMD_Vest_OP";
				class Inventory
				{
					CDO_VEST_ESSENTIALS

					LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)
					LOADOUT_ITEM(ACE_EntrenchingTool, 1)
					LOADOUT_ITEM(MineDetector, 1)
				};
			};

			class Backpack
			{
				type = "SOCOMD_Sapper_Backpack";
				class Inventory
				{
					LOADOUT_ITEM(ACE_DefusalKit, 1)
					LOADOUT_ITEM(ACE_M26_Clacker, 1)
					LOADOUT_ITEM(ACE_wirecutter, 1)
					LOADOUT_ITEM(DemoCharge_Remote_Mag, 5)
					LOADOUT_ITEM(SatchelCharge_Remote_Mag, 1)
				};
			};
		};

		class CDO_Gunner
		{
			primary = "sma_minimi_mk3_762tsb";
			handgun = "RH_usp";
			handgunMagazine = "RH_12Rnd_45cal_usp";
			headgear = "SOCOMD_MICH_Multi";

			class Uniform
			{
				type = "SOCOMD_Commando_SleevesDown";
				class Inventory
				{
					CDO_STANDARD_MEDICAL
					CDO_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "SOCOMD_Vest_AR";
				class Inventory
				{
					CDO_VEST_ESSENTIALS

					LOADOUT_ITEM(SMA_150Rnd_762_M80A1, 4)
				};
			};
		};

		class CDO_Rifleman
		{
			primary = "SMA_HK416GLCQB";
			handgun = "RH_usp";
			handgunMagazine = "RH_12Rnd_45cal_usp";
			headgear = "SOCOMD_MICH_Multi";

			class Uniform
			{
				type = "SOCOMD_Commando_SleevesDown";
				class Inventory
				{
					CDO_STANDARD_MEDICAL
					CDO_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "SOCOMD_Vest_OP";
				class Inventory
				{
					CDO_VEST_ESSENTIALS

					LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)
				};
			};
		};

		class CDO_Marksman
		{
			primary = "SMA_HK417_16in";
			handgun = "RH_usp";
			handgunMagazine = "RH_12Rnd_45cal_usp";
			headgear = "SOCOMD_MICH_Multi";
			binocular = "Rangefinder";

			class Uniform
			{
				type = "SOCOMD_Commando_SleevesDown";
				class Inventory
				{
					CDO_STANDARD_MEDICAL
					CDO_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "SOCOMD_Vest_OP";
				class Inventory
				{
					CDO_VEST_ESSENTIALS

					LOADOUT_ITEM(SMA_20Rnd_762x51mm_M80A1_EPR, 9)
				};
			};
			class Backpack
			{
				type = "SOG_BAG_MC";
				class Inventory
				{	
				};
			};
		};

		class CDO_AT
		{
			primary = "SMA_HK416CUSTOMCQBvfg";
			secondary = "CUP_launch_M72A6" secondaryMagazine = "CUP_M72A6_M";
			handgun = "RH_usp";
			handgunMagazine = "RH_12Rnd_45cal_usp";
			headgear = "SOCOMD_MICH_Multi";

			class Uniform
			{
				type = "SOCOMD_Commando_SleevesDown";
				class Inventory
				{
					CDO_STANDARD_MEDICAL
					CDO_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "SOCOMD_Vest_CM";
				class Inventory
				{
					CDO_VEST_ESSENTIALS

					LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)
				};
			};
			class Backpack
			{
				type = "SOG_BAG_MC";
				class Inventory
				{	
				};
			};
		};

		class CDO_Medic
		{
			primary = "SMA_HK416CUSTOMCQBvfg";
			handgun = "RH_usp";
			handgunMagazine = "RH_12Rnd_45cal_usp";
			headgear = "SOCOMD_MICH_Multi";

			class Uniform
			{
				type = "SOCOMD_Commando_SleevesDown";
				class Inventory
				{
					CDO_STANDARD_MEDICAL
					CDO_UNIFORM_ESSENTIALS
				};
			};

			class Vest
			{
				type = "SOCOMD_Vest_OP";
				class Inventory
				{
					CDO_VEST_ESSENTIALS

					LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 18)
					LOADOUT_ITEM(ACE_fieldDressing, 18)
					LOADOUT_ITEM(ACE_quikclot, 18)
					LOADOUT_ITEM(ACE_elasticBandage, 18)
					LOADOUT_ITEM(ACE_packingBandage, 18)
					LOADOUT_ITEM(ACE_morphine, 8)
					LOADOUT_ITEM(ACE_epinephrine, 8)
					LOADOUT_ITEM(ACE_tourniquet, 4)
					LOADOUT_ITEM(ACE_salineIV_500, 8)
					LOADOUT_ITEM(ACE_bodyBag, 2)
				};
			};
		};
	};
};
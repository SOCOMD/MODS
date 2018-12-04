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
//Common loadout items
//Contents shared by every loadout
//////////////////////////////////////////////////////////////////////
// COMMON SASR LOADOUT ITEMS

#define LOADOUT_STANDARD_MEDICAL           \
	LOADOUT_ITEM(ACE_fieldDressing, 6)  \
	LOADOUT_ITEM(ACE_elasticBandage, 6) \
	LOADOUT_ITEM(ACE_packingBandage, 6) \
	LOADOUT_ITEM(ACE_quikclot, 6)       \
	LOADOUT_ITEM(ACE_epinephrine, 2)    \
	LOADOUT_ITEM(ACE_morphine, 2)       \
	LOADOUT_ITEM(ACE_tourniquet, 2)

#define LOADOUT_UNIFORM_ESSENTIALS          \
	LOADOUT_ITEM(ItemcTabHCam, 1)        \
	LOADOUT_ITEM(ACE_EarPlugs, 1)        \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(ACE_Chemlight_HiRed, 2) \
	LOADOUT_ITEM(murshun_cigs_cigpack, 1)\
	LOADOUT_ITEM(murshun_cigs_lighter, 1)\
	LOADOUT_ITEM(ACE_DAGR, 1)			 \
	LOADOUT_ITEM(hlc_acc_DBALPL, 1)		 \
	LOADOUT_ITEM(11Rnd_45ACP_Mag, 3)	 
	
#define LOADOUT_BACKPACK_ESSENTIALS		 \
	LOADOUT_ITEM(NVGoggles_WP, 1)        \
	LOADOUT_ITEM(ACE_MapTools, 1)		 \
	LOADOUT_ITEM(ACE_CableTie, 4)        
	
#define LOADOUT_VEST_ESSENTIALS             \
	LOADOUT_ITEM(CUP_HandGrenade_M67, 2) \
	LOADOUT_ITEM(ACE_M84, 2)             \
	LOADOUT_ITEM(SmokeShell, 5)          \
	LOADOUT_ITEM(ACRE_PRC343, 1)         \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)  
	
// COMMON JAC LOADOUT ITEMS

#define LOADOUT_SUPPORT_ESSENTIALS                   \
	LOADOUT_ITEM(ItemcTabHCam, 1)        \
	LOADOUT_ITEM(ACE_EarPlugs, 1)        \
	LOADOUT_ITEM(ACE_Flashlight_KSF1, 1) \
	LOADOUT_ITEM(SOCOMD_GPNVG18b_BLK_F, 1)   \
	LOADOUT_ITEM(NVGoggles_WP, 1)        \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 1)  \
	LOADOUT_ITEM(ACRE_PRC343, 1)         \
	LOADOUT_ITEM(ACE_DAGR, 1)            \
	LOADOUT_ITEM(ACE_MapTools, 1)

#define LOADOUT_SUPPORT_STANDARD_MEDICAL            \
	LOADOUT_ITEM(ACE_fieldDressing, 6)  \
	LOADOUT_ITEM(ACE_elasticBandage, 5) \
	LOADOUT_ITEM(ACE_quikclot, 5)       \
	LOADOUT_ITEM(ACE_packingBandage, 5) \
	LOADOUT_ITEM(ACE_morphine, 2)       \
	LOADOUT_ITEM(ACE_epinephrine, 2)
	
// COMMON TAGE LOADOUT ITEMS
	
#define TAGE_BACKPACK_ESSENTIALS		 \
	LOADOUT_ITEM(SOCOMD_GPNVG18b_BLK_F, 1)   \
	LOADOUT_ITEM(ACE_MapTools, 1)		 \
	LOADOUT_ITEM(ACE_CableTie, 8)        
	
#define TAGE_VEST_ESSENTIALS             \
	LOADOUT_ITEM(ACE_M84, 4)             \
	LOADOUT_ITEM(SmokeShell, 5)          \
	LOADOUT_ITEM(ACRE_PRC343, 1)         \
	LOADOUT_ITEM(ACE_IR_Strobe_Item, 2)  
	
//////////////////////////////////////////////////////////////////////
//Individual loadout items
//Contents shared by individual loadouts common to every Qstore
//When you want to change the contents of a loadout on every Qstore, change it here
//////////////////////////////////////////////////////////////////////
//
//Troop Leader

#define LOADOUT_TROOP_LEADER_UNIFORM				\
	LOADOUT_ITEM(Laserbatteries, 2)					
	
#define LOADOUT_TROOP_LEADER_VEST					\
	LOADOUT_ITEM(ACRE_PRC152, 1)					\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)		\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1_Tracer, 1)	
	
#define LOADOUT_TROOP_LEADER_BACKPACK				\
	LOADOUT_ITEM(ACRE_PRC117F, 1)					\
	LOADOUT_ITEM(SmokeShellGreen, 2)				\
	LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)			\
	LOADOUT_ITEM(UGL_FlareRed_F, 2)					\
	LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)	

//Patrol Leader

#define LOADOUT_PATROL_LEADER_VEST	                \
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)		\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1_Tracer, 1)	
	
	
#define LOADOUT_PATROL_LEADER_BACKPACK 				\
	LOADOUT_ITEM(ACRE_PRC152, 1)					\
	LOADOUT_ITEM(SmokeShellGreen, 2) 				\
	LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)			\
	LOADOUT_ITEM(UGL_FlareRed_F, 2)					\
	LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)

//Rifleman

#define LOADOUT_RIFLEMAN_VEST						\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)		\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1_Tracer, 1)	

//2IC

#define LOADOUT_GRENADIER_VEST						\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1, 7)		\
	LOADOUT_ITEM(SMA_30Rnd_556x45_M855A1_Tracer, 1)	
	
	
#define LOADOUT_GRENADIER_BACKPACK					\
	LOADOUT_ITEM(ACRE_PRC152, 1)					\
	LOADOUT_ITEM(SmokeShellGreen, 2)				\
	LOADOUT_ITEM(1Rnd_HE_Grenade_shell, 8)			\
	LOADOUT_ITEM(UGL_FlareRed_F, 2)					\
	LOADOUT_ITEM(1Rnd_SmokeRed_Grenade_shell, 2)

//Sapper

#define LOADOUT_SAPPER_BACKPACK							\
	LOADOUT_ITEM(ACE_DefusalKit, 1)						\
	LOADOUT_ITEM(ACE_Clacker, 1)						\
	LOADOUT_ITEM(ACE_wirecutter, 1)						\
	LOADOUT_ITEM(ACE_EntrenchingTool, 1)				\
	LOADOUT_ITEM(MineDetector, 1)						\
	LOADOUT_ITEM(DemoCharge_Remote_Mag, 3)				\
	LOADOUT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 1)	\
	LOADOUT_ITEM(SatchelCharge_Remote_Mag, 1)			\
	LOADOUT_ITEM(AMP_Breaching_Charge_Mag, 3)

//MG

#define LOADOUT_MACHINE_GUNNER_VEST					\
	LOADOUT_ITEM(SMA_150Rnd_762_M80A1, 5)

//Medic

#define LOADOUT_MEDIC_BACKPACK					\
	LOADOUT_ITEM(ACE_surgicalKit, 8)			\
	LOADOUT_ITEM(ACE_fieldDressing, 25)			\
	LOADOUT_ITEM(ACE_elasticBandage, 20)		\
	LOADOUT_ITEM(ACE_packingBandage, 25)		\
	LOADOUT_ITEM(ACE_quikclot, 25)				\
	LOADOUT_ITEM(ACE_epinephrine, 10)			\
	LOADOUT_ITEM(ACE_morphine, 10)				\
	LOADOUT_ITEM(ACE_tourniquet, 6)				\
	LOADOUT_ITEM(ACE_salineIV_500, 6)			\
	LOADOUT_ITEM(ACE_personalAidKit, 2)

//Marksman

#define LOADOUT_MARKSMAN_VEST			\
	LOADOUT_ITEM(ACE_Kestrel4500, 1)	\
	LOADOUT_ITEM(ACE_RangeCard, 1)		\
	LOADOUT_ITEM(20Rnd_762x51_Mag, 8)

//Sniper

#define LOADOUT_SNIPER_VEST								\
	LOADOUT_ITEM(ACE_Kestrel4500, 1)			\
	LOADOUT_ITEM(ACE_RangeCard, 1)				\
	LOADOUT_ITEM(ACRE_PRC152, 1)				\
	LOADOUT_ITEM(hlc_5rnd_300WM_FMJ_AWM, 9)

#define LOADOUT_SNIPER_BACKPACK									\
	LOADOUT_ITEM(ClaymoreDirectionalMine_Remote_Mag, 4)	\
	LOADOUT_ITEM(ACE_DefusalKit, 1)						\
	LOADOUT_ITEM(ACE_Clacker, 1)						\
	LOADOUT_ITEM(ACE_FlareTripMine_Mag, 4)

//MAT

#define LOADOUT_MAT_BACKPACK					\
	LOADOUT_ITEM(tf47_m3maaws_HEAT, 1)	\
	LOADOUT_ITEM(tf47_m3maaws_HE, 1)

//HAT

#define LOADOUT_HAT_BACKPACK				\
	LOADOUT_ITEM(CUP_Javelin_M, 1)	

class CfgLoadouts
{
	class SOCOMD
	{	
		#include "Loadouts\Loadout171.hpp"
		#include "Loadouts\LoadoutCDO.hpp"
		#include "Loadouts\LoadoutDesert.hpp"
		#include "Loadouts\LoadoutGreen.hpp"
		#include "Loadouts\LoadoutTAGE.hpp"
	};
};
	


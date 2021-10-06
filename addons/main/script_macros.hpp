#include "\z\ace\addons\main\script_macros.hpp"

//Scope
#define SCOPE_PRIVATE    0
#define SCOPE_PROTECTED 1
#define SCOPE_PUBLIC 2

//Side
#define NO_SIDE -1
#define EAST 0
#define WEST 1
#define RESISTANCE 2
#define CIVILIAN 3
#define NEUTRAL 4
#define ENEMY 5
#define FRIENDLY 6
#define LOGIC 7

//SOCOMD
#define AUTHOR_STR "SOCOMD J4"
#define FACTION_STR "SOCOMD"

#define UNIT_SOCOMD_UNARMED "SOCOMD_Unarmed"
#define UNIT_SOCOMD_HOMESTEAD "SOCOMD_Homestead"
#define UNIT_SOCOMD_RIFLEMAN "SOCOMD_Rifleman"
#define UNIT_SOCOMD_PILOT "SOCOMD_Pilot"
#define UNIT_SOCOMD_CREWMAN "SOCOMD_Crewman"

//#define true            1
//#define false            0


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
// LOADOUT DEFINES

#define TRANSPORT_MAGAZINE(id,qty) class _xx_##id { magazine = #id; count = qty; };
#define TRANSPORT_ITEM(id,qty) class _xx_##id { name = #id; count = qty; };
#define TRANSPORT_WEAPON(id,qty) class _xx_##id { weapon = #id; count = qty; };
#define TRANSPORT_BACKPACK(id,qty) class _xx_##id { backpack = #id; count = qty; };

#define LOADOUT_ITEM(id, qty) \
class _xx_##id { \
    type = #id; \
    count = qty; \
};



// Rifles
#define ITEM_VEHICLE_M4                         ACWP_M4A5_145_troy_AFG_kit

#define ITEM_PRIMARY_GL                         "ACWP_M4A5_145_7rail_GL"
#define ITEM_PRIMARY_M4                         "ACWP_M4A5_145_troy_base"
#define ITEM_PRIMARY_MARKSMAN                   "ACWP_sr25"
#define ITEM_PRIMARY_MACHINEGUN                 "CUP_lmg_L110A1_railed"
#define ITEM_PRIMARY_RECON                      "bnae_falkor_camo1_virtual"
#define ITEM_PRIMARY_SOLS                      "ACWP_M4A5_145_ris_base"
#define ITEM_MAGAZINE_556                       ACWP_30rnd_556x45_EPR_PMAG
#define ITEM_MAGAZINE_556_TRACER                ACWP_30rnd_556x45_M_PMAG
#define ITEM_MAGAZINE_556_BELT                  CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch
#define ITEM_MAGAZINE_762                       20Rnd_762x51_Mag
#define ITEM_MAGAZINE_762_BELT                  CUP_150Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
#define ITEM_MAGAZINE_GPMG_BELT                 SOCOMD_200Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M
#define ITEM_MAGAZINE_300WM                     hlc_5rnd_300WM_FMJ_AWM
#define ITEM_MAGAZINE_BARRET                    Recon_Barret_mag
#define ITEM_MAGAZINE_9MM                       CUP_30Rnd_9x19_MP5

#define ITEM_DEFAULT_HANDGUN                    "ACWP_USP"
#define ITEM_DEFAULT_HANDGUN_MAGAZINE           ACWP_18Rnd_9x21_Mag_USP

#define LEADER_BINOCS                           "ACE_Vector"

// Secondary i.e launchers
#define ITEM_DEFAULT_LAUNCHER                   "SOCOMD_Carl_Gustav"

// headgear
#define ITEM_DEFAULT_HEADGEAR                   "acwp_airframe_mc"
#define ITEM_PILOT_HEADGEAR                     "SOCOMD_Pilot_helmet"
#define ITEM_CREW_HEADGEAR                      "SOCOMD_Ground_Crew_helmet"

// uniforms
#define ITEM_DEFAULT_UNIFORM                    "USP_G3C_KP_MC_SOCOMD"
#define ITEM_SNOW_UNIFORM                       "USP_OVERWHITE_G3C_KP_MC_SOCOMD"
#define ITEM_RECON_UNIFORM                      "USP_G3C_KP_MC_RECON"
#define ITEM_RECON_SNOW_UNIFORM                 "USP_OVERWHITE_G3C_KP_MC_RECON"

// vests
#define ITEM_VEST_TROOPLEADER                   "lbt_comms_mc"
#define ITEM_VEST_PATROLLEADER                  "lbt_comms_mc"
#define ITEM_VEST_RIFLEMAN                      "lbt_tl_mc"
#define ITEM_VEST_BREACHER                      "lbt_tl_mc"
#define ITEM_VEST_MARKSMAN                      "lbt_tl_mc"
#define ITEM_VEST_MEDIC                         "lbt_medical_mc"
#define ITEM_VEST_SAPPER                        "lbt_tl_mc"
#define ITEM_VEST_MACHINEGUNNER                 "acwp_pc_mg_nod"
#define ITEM_VEST_RECON                         "lbt_comms_mc"
#define ITEM_VEST_AT                            "lbt_tl_mc"
#define ITEM_VEST_PILOT                         "lbt_tl_mc"
#define ITEM_VEST_CREWMAN                       "lbt_tl_mc"
#define ITEM_VEST_HOMESTEAD                     "lbt_pouchless_mc"

// bags
#define ITEM_BACKPACK_TROOPLEADER                "Kit_Bag_R_MC"
#define ITEM_BACKPACK_PATROLLEADER               "Kit_Bag_R_MC"
#define ITEM_BACKPACK_RIFLEMAN                   "SOG_BAG_MC"
#define ITEM_BACKPACK_BREACHER                   "Kit_Bag_pince_MC"
#define ITEM_BACKPACK_MARKSMAN                   "SOG_BAG_MC"
#define ITEM_BACKPACK_SAPPER                     "SOG_BAG_med_MC"
#define ITEM_BACKPACK_MACHINEGUNNER              "Kit_Bag_pince_MC"
#define ITEM_BACKPACK_MEDIC                      "SOG_BAG_MC"
#define ITEM_BACKPACK_RECON                      "Kit_Bag_R_MC"
#define ITEM_BACKPACK_AT                         "SOG_BAG_MC"
#define ITEM_BACKPACK_PILOT                      "SOG_BAG_recon_od"
#define ITEM_BACKPACK_CREWMAN                    "KIT_BAG_MC"

#define PILOT_MAGNIFICATION_LIMIT                "1x"
#define LOW_MAGNIFICATION_LIMIT                  "2x"
#define STANDARD_MAGNIFICATION_LIMIT             "4x"
#define MARKSMAN_MAGNIFICATION_LIMIT             "6x"


// headgear macros
    
#define HELMET_ARMOR(ARMOR,PASS) \
class ItemInfo : ItemInfo { \
    class HitpointsProtectionInfo { \
        class Head { \
            armor = ARMOR; \
            hitPointName = "HitHead"; \
            passThrough = PASS; \
        }; \
    }; \
};

#define HELMET_ARMOR_STRONG HELMET_ARMOR(12,0.1)
#define HELMET_SOLS_ARMOR HELMET_ARMOR(12,0.1)
#define HELMET_BOONIE_ARMOR HELMET_ARMOR(0,1)
#define HEARING_PROTECTION_VICCREW ace_hearing_lowerVolume = 0.5;ace_hearing_protection = 1;advanced_peltors_protection = 1;


#define HEARING_PROTECTION_EARMUFF ace_hearing_lowerVolume = 0.75;ace_hearing_protection = 0.5;


#define HEARING_PROTECTION_PELTOR ace_hearing_lowerVolume = 0.0;ace_hearing_protection = 0.5;advanced_peltors_protection = 1;

#define INVENTORY_VEHICLE_DEFAULT_WEAPONS \
    TRANSPORT_WEAPON(SOCOMD_Item_Primary_Rifleman, 1)

#define INVENTORY_VEHICLE_DEFAULT_MAGAZINES \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556, 12) \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_762, 3) \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556_BELT, 2) \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_762_BELT, 1) \
    TRANSPORT_MAGAZINE(SmokeShellBlue, 2) \
    TRANSPORT_MAGAZINE(B_IR_Grenade, 2)

#define INVENTORY_VEHICLE_DEFAULT_ITEMS \
    TRANSPORT_ITEM(ACRE_PRC152, 1) \
    TRANSPORT_ITEM(ToolKit, 1) \
    TRANSPORT_ITEM(ACE_wirecutter, 1) \
    TRANSPORT_ITEM(ACE_DefusalKit, 1) \
    TRANSPORT_ITEM(ACE_bodyBag, 6) \
    TRANSPORT_ITEM(ACE_CableTie, 6) \
    TRANSPORT_ITEM(ACE_tourniquet, 0)    \
    TRANSPORT_ITEM(ACE_fieldDressing, 0) \
    TRANSPORT_ITEM(ACE_quikclot, 0) \
    TRANSPORT_ITEM(ACE_elasticBandage, 0) \
    TRANSPORT_ITEM(ACE_packingBandage, 0) \
    TRANSPORT_ITEM(ACE_morphine, 0) \
    TRANSPORT_ITEM(ACE_epinephrine, 0) \
    TRANSPORT_ITEM(ACE_surgicalKit, 0)\
    TRANSPORT_ITEM(ACE_bloodIV_500, 0)

#define INVENTORY_VEHICLE_DEFAULT_BACKPACKS \
    TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 2)\
    TRANSPORT_BACKPACK(ACE_TacticalLadder_Pack, 1)

// ======================================================
// size dependant inventories, doesn't make sense a quad bike carries the same as a Bushmaster

// small
#define INVENTORY_VEHICLE_SMALL_WEAPONS \
    TRANSPORT_WEAPON(ITEM_VEHICLE_M4, 1) 

#define INVENTORY_VEHICLE_SMALL_MAGAZINES \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556, 4) \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_762, 2) \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556_BELT, 2) \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_762_BELT, 1) \
    TRANSPORT_MAGAZINE(SmokeShellBlue, 1) \
    TRANSPORT_MAGAZINE(B_IR_Grenade, 2)

#define INVENTORY_VEHICLE_SMALL_ITEMS \
    TRANSPORT_ITEM(ToolKit, 1) \
    TRANSPORT_ITEM(ACRE_PRC152, 1) \
    TRANSPORT_ITEM(ACE_bodyBag, 2) \
    TRANSPORT_ITEM(ACE_CableTie, 6) 

#define INVENTORY_VEHICLE_SMALL_BACKPACKS \
    TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 1)

// Medium
#define INVENTORY_VEHICLE_MEDIUM_WEAPONS \
    TRANSPORT_WEAPON(ITEM_VEHICLE_M4, 1) \
    TRANSPORT_WEAPON(SOCOMD_LAW, 1) 

#define INVENTORY_VEHICLE_MEDIUM_MAGAZINES \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556, 8) \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_762, 4) \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556_BELT, 3) \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_762_BELT, 2) \
    TRANSPORT_MAGAZINE(SmokeShellBlue, 2) \
    TRANSPORT_MAGAZINE(B_IR_Grenade, 2)

#define INVENTORY_VEHICLE_MEDIUM_ITEMS \
    TRANSPORT_ITEM(ToolKit, 1) \
    TRANSPORT_ITEM(ACRE_PRC152, 1) \
    TRANSPORT_ITEM(ACE_bodyBag, 2) \
    TRANSPORT_ITEM(ACE_CableTie, 6) 

#define INVENTORY_VEHICLE_MEDIUM_BACKPACKS \
    TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 2)

// large
#define INVENTORY_VEHICLE_LARGE_WEAPONS \
    TRANSPORT_WEAPON(ITEM_VEHICLE_M4, 2) \
    TRANSPORT_WEAPON(SOCOMD_LAW, 2) 

#define INVENTORY_VEHICLE_LARGE_MAGAZINES \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556, 12) \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_762, 8) \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_556_BELT, 6) \
    TRANSPORT_MAGAZINE(ITEM_MAGAZINE_762_BELT, 4) \
    TRANSPORT_MAGAZINE(SmokeShellBlue, 4) \
    TRANSPORT_MAGAZINE(B_IR_Grenade, 4)

#define INVENTORY_VEHICLE_LARGE_ITEMS \
    TRANSPORT_ITEM(ToolKit, 1) \
    TRANSPORT_ITEM(ACRE_PRC152, 1) \
    TRANSPORT_ITEM(ACE_bodyBag, 2) \
    TRANSPORT_ITEM(ACE_CableTie, 6) 

#define INVENTORY_VEHICLE_LARGE_BACKPACKS \
    TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 2)\
    TRANSPORT_BACKPACK(ACE_TacticalLadder_Pack, 1)

// ======================================================
//  vehicle specific loadouts

// 6x6 ATV

#define INVENTORY_VEHICLE_6X6_ITEMS \
    TRANSPORT_ITEM(ToolKit, 1) \
    TRANSPORT_ITEM(ACRE_PRC117F, 1) \
    TRANSPORT_ITEM(ACE_bodyBag, 2) \
    TRANSPORT_ITEM(ACE_CableTie, 6) 

#define INVENTORY_VEHICLE_HELO_BAGS \
    TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 2)\
    TRANSPORT_BACKPACK(SOCOMD_Medical_AO, 2)

#define INVENTORY_VEHICLE_CAS_HELO_BAGS \
    TRANSPORT_BACKPACK(SOCOMD_Medical_Grabbag, 1)

#define SHIP_FAST_TURRETS \
maxHorizontalRotSpeed = 8; \
maxVerticalRotSpeed = 8;

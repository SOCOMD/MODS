//Scope
#define private	0
#define protected 1
#define public 2

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
#define AUTHOR_STR "SOCOMD Mod"
#define FACTION_STR "SOCOMD"
#define SOCOMD_PILOT "SOCOMD_Pilot"
#define SOCOMD_MEDIC "SOCOMD_Medic"

//#define true			1
//#define false			0

#define QUOTE(var1) #var1

////////////////////////////////////////////////////////////////////////////////
// LOADOUT DEFINES

#define TRANSPORT_MAGAZINE(id,qty) class _xx_##id { magazine = #id; count = qty; };
#define TRANSPORT_ITEM(id,qty) class _xx_##id { name = #id; count = qty; };
#define TRANSPORT_WEAPON(id,qty) class _xx_##id { weapon = #id; count = qty; };
#define TRANSPORT_BACKPACK(id,qty) class _xx_##id { backpack = #id; count = qty; };

#include "settings/inventories.hpp"

////////////////////////////////////////////////////////////////////////////////
// MODULAR LOADOUT

#define TI_DefaultCommon \
	TRANSPORT_ITEM(SOCOMD_Boonie, 1) \
	TRANSPORT_ITEM(ACE_CableTie, 2) \
	TRANSPORT_ITEM(ACE_Earplugs, 1)

#define TI_DefaultMeds \
	TRANSPORT_ITEM(ACE_fieldDressing, 6) \
	TRANSPORT_ITEM(ACE_quikclot, 6) \
	TRANSPORT_ITEM(ACE_elasticBandage, 6) \
	TRANSPORT_ITEM(ACE_packingBandage, 6) \
	TRANSPORT_ITEM(ACE_morphine, 2) \
	TRANSPORT_ITEM(ACE_epinephrine, 2) \
	TRANSPORT_ITEM(ACE_tourniquet, 1)

#define TI_MedicMeds\
	TRANSPORT_ITEM(ACE_fieldDressing, 30) \
	TRANSPORT_ITEM(ACE_quikclot, 30) \
	TRANSPORT_ITEM(ACE_morphine, 20) \
	TRANSPORT_ITEM(ACE_epinephrine, 6) \
	TRANSPORT_ITEM(ACE_tourniquet, 4) \
	TRANSPORT_ITEM(ACE_elasticBandage, 30) \
	TRANSPORT_ITEM(ACE_packingBandage, 30) \
	TRANSPORT_ITEM(ACE_salineIV_500, 8) \
	TRANSPORT_ITEM(ACE_personalAidKit, 5) \
	TRANSPORT_ITEM(ACE_bodyBag, 2)

#define TI_SapperItems\
	 TRANSPORT_ITEM(ACE_DefusalKit, 1) \
	 TRANSPORT_ITEM(ACE_M26_Clacker, 1) \
	 TRANSPORT_ITEM(ACE_wirecutter, 1) \
	 TRANSPORT_ITEM(DemoCharge_Remote_Mag, 5) \
	 TRANSPORT_ITEM(SatchelCharge_Remote_Mag, 1)

#define TM_GunnerAmmo\
	TRANSPORT_MAGAZINE(CUP_200Rnd_TE4_Red_Tracer_556x45_M249, 2)

#define TM_SniperAmmo\
	TRANSPORT_MAGAZINE(30Rnd_556x45_Stanag, 3) \
	TRANSPORT_MAGAZINE(30Rnd_556x45_Stanag_Tracer_Red, 3) \
	TRANSPORT_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 2) \
	TRANSPORT_MAGAZINE(1Rnd_HE_Grenade_shell, 8) \
	TRANSPORT_MAGAZINE(ClaymoreDirectionalMine_Remote_Mag, 4)


// Rifles
#define ITEM_PRIMARY_TROOPLEADER	"SOCOMD_Item_Primary_TroopLeader"
#define ITEM_PRIMARY_PATROLLEADER	"SOCOMD_Item_Primary_PatrolLeader"
#define ITEM_PRIMARY_RIFLEMAN		"SOCOMD_Item_Primary_Rifleman"
#define ITEM_PRIMARY_GRENADIER		"SOCOMD_Item_Primary_Grenadier"
#define ITEM_PRIMARY_SAPPER		    "SOCOMD_Item_Primary_Sapper"
#define ITEM_PRIMARY_MACHINEGUNNER	"SOCOMD_Item_Primary_MachineGunner"
#define ITEM_PRIMARY_MEDIC			"SOCOMD_Item_Primary_Medic"
#define ITEM_PRIMARY_MARKSMAN		"SMA_HK417_16in"
#define ITEM_PRIMARY_SNIPER		    "hlc_rifle_awmagnum"
#define ITEM_PRIMARY_LAT			"SMA_M4afgSTOCK"
#define ITEM_PRIMARY_MAT			"SMA_M4afgSTOCK"
#define ITEM_PRIMARY_HAT			"SMA_M4afgSTOCK"
#define ITEM_PRIMARY_PJ             "SMA_M4afgSTOCK"
#define ITEM_PRIMARY_PILOT          ""
#define ITEM_PRIMARY_CREWMAN        "CUP_smg_MP5A5"

#define ITEM_PRIMARY_MAGAZINE_TROOPLEADER	"SOCOMD_Item_Primary_Magazine_TroopLeader"
#define ITEM_PRIMARY_MAGAZINE_PATROLLEADER	"SOCOMD_Item_Primary_Magazine_PatrolLeader"
#define ITEM_PRIMARY_MAGAZINE_RIFLEMAN		"SOCOMD_Item_Primary_Magazine_TroopLeader"
#define ITEM_PRIMARY_MAGAZINE_GRENADIER		"SOCOMD_Item_Primary_Magazine_Grenadier"
#define ITEM_PRIMARY_MAGAZINE_SAPPER		"SOCOMD_Item_Primary_Magazine_Sapper"
#define ITEM_PRIMARY_MAGAZINE_MACHINEGUNNER	"SOCOMD_Item_Primary_Magazine_MachineGunner"
#define ITEM_PRIMARY_MAGAZINE_MEDIC			"SOCOMD_Item_Primary_Magazine_Medic"
#define ITEM_PRIMARY_MAGAZINE_MARKSMAN		""
#define ITEM_PRIMARY_MAGAZINE_SNIPER		""
#define ITEM_PRIMARY_MAGAZINE_LAT			""
#define ITEM_PRIMARY_MAGAZINE_MAT			""
#define ITEM_PRIMARY_MAGAZINE_HAT			""
#define ITEM_PRIMARY_MAGAZINE_PJ            ""
#define ITEM_PRIMARY_MAGAZINE_PILOT         ""
#define ITEM_PRIMARY_MAGAZINE_CREWMAN       ""

// pistols
#define ITEM_HANDGUN_TROOPLEADER	"SOCOMD_Item_Handgun_TroopLeader"
#define ITEM_HANDGUN_PATROLLEADER	"SOCOMD_Item_Handgun_PatrolLeader"
#define ITEM_HANDGUN_RIFLEMAN		"SOCOMD_Item_Handgun_Rifleman"
#define ITEM_HANDGUN_GRENADIER		"SOCOMD_Item_Handgun_Grenadier"
#define ITEM_HANDGUN_SAPPER		    "SOCOMD_Item_Handgun_Sapper"
#define ITEM_HANDGUN_MACHINEGUNNER	"SOCOMD_Item_Handgun_MachineGunner"
#define ITEM_HANDGUN_MEDIC			"SOCOMD_Item_Handgun_Medic"
#define ITEM_HANDGUN_MARKSMAN		"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_SNIPER		    "DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_LAT			"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_MAT			"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_HAT			"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_PJ             "DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_PILOT          "DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_CREWMAN        "DSO_hgun_Pistol_heavy_01_blk_F"

// pistol Mag
#define ITEM_HANDGUN_MAGAZINE_TROOPLEADER		"SOCOMD_Item_Handgun_Magazine_TroopLeader"
#define ITEM_HANDGUN_MAGAZINE_PATROLLEADER		"SOCOMD_Item_Handgun_Magazine_PatrolLeader"
#define ITEM_HANDGUN_MAGAZINE_RIFLEMAN			"SOCOMD_Item_Handgun_Magazine_Rifleman"
#define ITEM_HANDGUN_MAGAZINE_GRENADIER		    "SOCOMD_Item_Handgun_Magazine_Grenadier"
#define ITEM_HANDGUN_MAGAZINE_SAPPER			"SOCOMD_Item_Handgun_Magazine_Sapper"
#define ITEM_HANDGUN_MAGAZINE_MACHINEGUNNER	    "SOCOMD_Item_Handgun_Magazine_MachineGunner"
#define ITEM_HANDGUN_MAGAZINE_MEDIC			    "SOCOMD_Item_Handgun_Magazine_Medic"
#define ITEM_HANDGUN_MAGAZINE_MARKSMAN			"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_SNIPER			"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_LAT				"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_MAT				"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_HAT				"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAINE_PJ                 "11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAINE_PILOT              "11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAINE_CREWMAN            "11Rnd_45ACP_Mag"

// Secondary i.e launchers
#define ITEM_SECONDARY_TROOPLEADER		"SOCOMD_Item_Secondary_TroopLeader"
#define ITEM_SECONDARY_PATROLLEADER	    "SOCOMD_Item_Secondary_PatrolLeader"
#define ITEM_SECONDARY_RIFLEMAN		    "SOCOMD_Item_Secondary_Rifleman"
#define ITEM_SECONDARY_GRENADIER		"SOCOMD_Item_Secondary_Grenadier"
#define ITEM_SECONDARY_SAPPER			"SOCOMD_Item_Secondary_Sapper"
#define ITEM_SECONDARY_MACHINEGUNNER	"SOCOMD_Item_Secondary_MachineGunner"
#define ITEM_SECONDARY_MEDIC			"SOCOMD_Item_Secondary_Medic"
#define ITEM_SECONDARY_MARKSMAN		    ""
#define ITEM_SECONDARY_SNIPER			""
#define ITEM_SECONDARY_LAT				"HAFM_LAW"
#define ITEM_SECONDARY_MAT				"SOCOMD_Carl_Gustav"
#define ITEM_SECONDARY_HAT				"CUP_launch_Javelin"
#define ITEM_SECONDARY_PJ               ""
#define ITEM_SECONDARY_PILOT            ""
#define ITEM_SECONDARY_CREWMAN          ""


#define ITEM_HEADGEAR_TROOPLEADER		"SOCOMD_Item_Headgear_TroopLeader"
#define ITEM_HEADGEAR_PATROLLEADER		"SOCOMD_Item_Headgear_PatrolLeader"
#define ITEM_HEADGEAR_RIFLEMAN		    "SOCOMD_Item_Headgear_Rifleman"
#define ITEM_HEADGEAR_GRENADIER		    "SOCOMD_Item_Headgear_Grenadier"
#define ITEM_HEADGEAR_SAPPER			"SOCOMD_Item_Headgear_Sapper"
#define ITEM_HEADGEAR_MACHINEGUNNER	    "SOCOMD_Item_Headgear_MachineGunner"
#define ITEM_HEADGEAR_MEDIC			    "SOCOMD_Item_Headgear_Medic"
#define ITEM_HEADGEAR_MARKSMAN			"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_SNIPER			"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_LAT				"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_MAT				"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_HAT				"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_PJ                "SOCOMD_Pilot_helmet"
#define ITEM_HEADGEAR_PILOT             "SOCOMD_Pilot_helmet"
#define ITEM_HEADGEAR_CREWMAN           "H_HelmetCrew_I"

#define ITEM_BINOCULAR_TROOPLEADER		"SOCOMD_Item_Binocular_TroopLeader"
#define ITEM_BINOCULAR_PATROLLEADER	    "SOCOMD_Item_Binocular_PatrolLeader"
#define ITEM_BINOCULAR_RIFLEMAN		    "SOCOMD_Item_Binocular_Rifleman"
#define ITEM_BINOCULAR_GRENADIER		"SOCOMD_Item_Binocular_Grenadier"
#define ITEM_BINOCULAR_SAPPER			"SOCOMD_Item_Binocular_Sapper"
#define ITEM_BINOCULAR_MACHINEGUNNER	"SOCOMD_Item_Binocular_MachineGunner"
#define ITEM_BINOCULAR_MEDIC			"SOCOMD_Item_Binocular_Medic"
#define ITEM_BINOCULAR_MARKSMAN		    "Binocular"
#define ITEM_BINOCULAR_SNIPER			"Binocular"
#define ITEM_BINOCULAR_LAT				""
#define ITEM_BINOCULAR_MAT				""
#define ITEM_BINOCULAR_HAT				""
#define ITEM_BINOCULAR_PJ               "Binocular"
#define ITEM_BINOCULAR_PILOT            "Binocular"
#define ITEM_BINOCULAR_CREWMAN          "Binocular"

#define ITEM_GPS_TROOPLEADER		"SOCOMD_Item_GPS_TroopLeader"
#define ITEM_GPS_PATROLLEADER		"SOCOMD_Item_GPS_PatrolLeader"
#define ITEM_GPS_RIFLEMAN			"SOCOMD_Item_GPS_Rifleman"
#define ITEM_GPS_GRENADIER			"SOCOMD_Item_GPS_Grenadier"
#define ITEM_GPS_SAPPER			    "SOCOMD_Item_GPS_Sapper"
#define ITEM_GPS_MACHINEGUNNER		"SOCOMD_Item_GPS_MachineGunner"
#define ITEM_GPS_MEDIC			    "SOCOMD_Item_GPS_Medic"
#define ITEM_GPS_MARKSMAN			"ItemMicroDAGR"
#define ITEM_GPS_SNIPER			    "ItemMicroDAGR"
#define ITEM_GPS_LAT				"ItemMicroDAGR"
#define ITEM_GPS_MAT				"ItemMicroDAGR"
#define ITEM_GPS_HAT				"ItemMicroDAGR"
#define ITEM_GPS_PJ                 "ItemAndroid"
#define ITEM_GPS_PILOT              "ItemcTab"
#define ITEM_GPS_CREWMAN            "ItemAndroid"

#define ITEM_UNIFORM_TROOPLEADER	"SOCOMD_Item_Uniform_TroopLeader"
#define ITEM_UNIFORM_PATROLLEADER	"SOCOMD_Item_Uniform_PatrolLeader"
#define ITEM_UNIFORM_RIFLEMAN		"SOCOMD_Item_Uniform_Rifleman"
#define ITEM_UNIFORM_GRENADIER		"SOCOMD_Item_Uniform_Grenadier"
#define ITEM_UNIFORM_SAPPER		    "SOCOMD_Item_Uniform_Sapper"
#define ITEM_UNIFORM_MACHINEGUNNER	"SOCOMD_Item_Uniform_MachineGunner"
#define ITEM_UNIFORM_MEDI			"SOCOMD_Item_Uniform_Medic"
#define ITEM_UNIFORM_MARKSMAN		"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_SNIPER		    "SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_LAT			"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_MAT			"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_HAT			"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_PJ             "SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_PILOT          "SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_CREWMAN        "SOCOMD_Commando_SleevesDown"

#define ITEM_VEST_TROOPLEADER		"SOCOMD_Item_Vest_TroopLeader"
#define ITEM_VEST_PATROLLEADER		"SOCOMD_Item_Vest_PatrolLeader"
#define ITEM_VEST_RIFLEMAN			"SOCOMD_Item_Vest_Rifleman"
#define ITEM_VEST_GRENADIER		    "SOCOMD_Item_Vest_Grenadier"
#define ITEM_VEST_SAPPER			"SOCOMD_Item_Vest_Sapper"
#define ITEM_VEST_MACHINEGUNNER	    "SOCOMD_Item_Vest_MachineGunner"
#define ITEM_VEST_MEDIC			    "SOCOMD_Item_Vest_Medic"
#define ITEM_VEST_MARKSMAN			"SOCOMD_Operator_Vest"
#define ITEM_VEST_SNIPER			"SOCOMD_Operator_Vest"
#define ITEM_VEST_LAT				"SOCOMD_Operator_Vest"
#define ITEM_VEST_MAT				"SOCOMD_Operator_Vest"
#define ITEM_VEST_HAT				"SOCOMD_Operator_Vest"
#define ITEM_VEST_PJ                "VSM_OGA_OD_Vest_2"
#define ITEM_VEST_PILOT             "VSM_OGA_OD_Vest_2"
#define ITEM_VEST_CREWMAN           "VSM_FAPC_Operator_Multicam"

#define ITEM_BACKPACK_TROOPLEADER		"SOCOMD_Item_Backpack_TroopLeader"
#define ITEM_BACKPACK_PATROLLEADER		"SOCOMD_Item_Backpack_PatrolLeader"
#define ITEM_BACKPACK_RIFLEMAN			"SOCOMD_Item_Uniform_Rifleman"
#define ITEM_BACKPACK_GRENADIER		    "SOCOMD_Item_Backpack_Grenadier"
#define ITEM_BACKPACK_SAPPER			"SOCOMD_Item_Backpack_Sapper"
#define ITEM_BACKPACK_MACHINEGUNNER	    "SOCOMD_Item_Backpack_MachineGunner"
#define ITEM_BACKPACK_MEDIC			    "SOCOMD_Item_Backpack_Medic"
#define ITEM_BACKPACK_MARKSMAN			"SOG_BAG_MC"
#define ITEM_BACKPACK_SNIPER			"SOG_BAG_MC"
#define ITEM_BACKPACK_LAT				"SOG_BAG_MC"
#define ITEM_BACKPACK_MAT				"SOG_BAG_MC"
#define ITEM_BACKPACK_HAT				"Kit_Bag_MC"
#define ITEM_BACKPACK_PJ                "SOG_BAG_med_od"
#define ITEM_BACKPACK_PILOT             "SOG_BAG_recon_od"
#define ITEM_BACKPACK_CREWMAN           "KIT_BAG_MC"

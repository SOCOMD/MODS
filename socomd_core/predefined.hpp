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

////////////////////////////////////////////////////////////////////////////////
// LAND LOADOUT

#define LOADOUT_LAND_TRANSPORT_MAGAZINES \
	TRANSPORT_MAGAZINE(SMA_30Rnd_556x45_M855A1, 12) \
	TRANSPORT_MAGAZINE(SMA_20Rnd_762x51mm_M80A1_EPR, 3) \
	TRANSPORT_MAGAZINE(SMA_150Rnd_762_M80A1, 2) \
	TRANSPORT_MAGAZINE(SmokeShellBlue, 2) \
	TRANSPORT_MAGAZINE(B_IR_Grenade, 2)

#define LOADOUT_LAND_TRANSPORT_ITEMS \
	TRANSPORT_ITEM(ACRE_PRC152, 1) \
	TRANSPORT_ITEM(ToolKit, 1) \
	TRANSPORT_ITEM(ACE_wirecutter, 1) \
	TRANSPORT_ITEM(ACE_DefusalKit, 1) \
	TRANSPORT_ITEM(ACE_bodyBag, 6) \
	TRANSPORT_ITEM(ACE_CableTie, 6) \
	TRANSPORT_ITEM(ACE_tourniquet, 6)	\
	TRANSPORT_ITEM(ACE_fieldDressing, 20) \
	TRANSPORT_ITEM(ACE_quikclot, 20) \
	TRANSPORT_ITEM(ACE_elasticBandage, 20) \
	TRANSPORT_ITEM(ACE_packingBandage, 20) \
	TRANSPORT_ITEM(ACE_morphine, 10) \
	TRANSPORT_ITEM(ACE_epinephrine, 10) \
	TRANSPORT_ITEM(ACE_surgicalKit, 8)\
	TRANSPORT_ITEM(ACE_bloodIV_500, 5)

#define LOADOUT_LAND_TRANSPORT_BACKPACKS \
	TRANSPORT_BACKPACK(SOCOMD_Backpack_Empty, 1)

#define LOADOUT_LAND_TRANSPORT_WEAPONS \
	TRANSPORT_WEAPON(SMA_M4afgSTOCK, 1)

////////////////////////////////////////////////////////////////////////////////
// AIR LOADOUT	

#define LOADOUT_AIR \
	class TransportMagazines \
	{ \
		TRANSPORT_MAGAZINE(SMA_30Rnd_556x45_M855A1, 12) \
		TRANSPORT_MAGAZINE(SMA_20Rnd_762x51mm_M80A1_EPR, 3) \
		TRANSPORT_MAGAZINE(SMA_150Rnd_762_M80A1, 2) \
		TRANSPORT_MAGAZINE(Chemlight_blue, 2) \
		TRANSPORT_MAGAZINE(SmokeShellBlue, 2) \
		TRANSPORT_MAGAZINE(B_IR_Grenade, 2) \
	}; \
	class TransportItems \
	{ \
		TRANSPORT_ITEM(ACRE_PRC152, 1) \
		TRANSPORT_ITEM(ToolKit, 1) \
		TRANSPORT_ITEM(ACE_bodyBag, 6) \
		TRANSPORT_ITEM(ACE_CableTie, 6) \
		TRANSPORT_ITEM(ACE_tourniquet, 6)	\
		TRANSPORT_ITEM(ACE_fieldDressing, 20) \
		TRANSPORT_ITEM(ACE_quikclot, 20) \
		TRANSPORT_ITEM(ACE_elasticBandage, 20) \
		TRANSPORT_ITEM(ACE_packingBandage, 20) \
		TRANSPORT_ITEM(ACE_morphine, 10) \
		TRANSPORT_ITEM(ACE_epinephrine, 10) \
		TRANSPORT_ITEM(ACE_surgicalKit, 8)\
		TRANSPORT_ITEM(ACE_bloodIV_500, 10) \
	}; \
	class TransportWeapons \
	{ \
		TRANSPORT_WEAPON(SMA_M4afgSTOCK, 1) \
	};

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
#define ITEM_PRIMARY_TROOPLEADER 	"SMA_M4_GL_SM"
#define ITEM_PRIMARY_PATROLLEADER 	"SMA_M4_GL_SM"
#define ITEM_PRIMARY_RIFLEMAN 		"SMA_M4afgSTOCK"
#define ITEM_PRIMARY_GRENADIER 		"SMA_M4_GL_SM"
#define ITEM_PRIMARY_SAPPER 		"SMA_M4afgSTOCK"
#define ITEM_PRIMARY_MACHINEGUNNER 	"sma_minimi_mk3_762tsb"
#define ITEM_PRIMARY_MEDIC 			"SMA_M4afgSTOCK"
#define ITEM_PRIMARY_MARKSMAN 		"SMA_HK417_16in"
#define ITEM_PRIMARY_SNIPER 		"hlc_rifle_awmagnum"
#define ITEM_PRIMARY_LAT 			"SMA_M4afgSTOCK"
#define ITEM_PRIMARY_MAT 			"SMA_M4afgSTOCK"
#define ITEM_PRIMARY_HAT 			"SMA_M4afgSTOCK"

// pistols
#define ITEM_HANDGUN_TROOPLEADER 	"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_PATROLLEADER 	"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_RIFLEMAN 		"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_GRENADIER 		"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_SAPPER 		"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_MACHINEGUNNER 	"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_MEDIC 			"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_MARKSMAN 		"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_SNIPER 		"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_LAT 			"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_MAT 			"DSO_hgun_Pistol_heavy_01_blk_F"
#define ITEM_HANDGUN_HAT 			"DSO_hgun_Pistol_heavy_01_blk_F"

// pistol Mag
#define ITEM_HANDGUN_MAGAZINE_TROOPLEADER 		"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_PATROLLEADER 		"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_RIFLEMAN 			"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_GRENADIER 		"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_SAPPER 			"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_MACHINEGUNNER 	"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_MEDIC 			"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_MARKSMAN 			"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_SNIPER 			"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_LAT 				"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_MAT 				"11Rnd_45ACP_Mag"
#define ITEM_HANDGUN_MAGAZINE_HAT 				"11Rnd_45ACP_Mag"

// Secondary i.e launchers
#define ITEM_SECONDARY_TROOPLEADER 		""
#define ITEM_SECONDARY_PATROLLEADER 	""
#define ITEM_SECONDARY_RIFLEMAN 		""
#define ITEM_SECONDARY_GRENADIER 		""
#define ITEM_SECONDARY_SAPPER 			""
#define ITEM_SECONDARY_MACHINEGUNNER 	""
#define ITEM_SECONDARY_MEDIC 			""
#define ITEM_SECONDARY_MARKSMAN 		""
#define ITEM_SECONDARY_SNIPER 			""
#define ITEM_SECONDARY_LAT 				"HAFM_LAW"
#define ITEM_SECONDARY_MAT 				"SOCOMD_Carl_Gustav"
#define ITEM_SECONDARY_HAT 				"CUP_launch_Javelin"


#define ITEM_HEADGEAR_TROOPLEADER 		"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_PATROLLEADER 		"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_RIFLEMAN 			"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_GRENADIER 		"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_SAPPER 			"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_MACHINEGUNNER 	"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_MEDIC 			"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_MARKSMAN 			"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_SNIPER 			"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_LAT 				"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_MAT 				"ADFU_H_Airframe_Cover_03_MC"
#define ITEM_HEADGEAR_HAT 				"ADFU_H_Airframe_Cover_03_MC"

#define ITEM_BINOCULAR_TROOPLEADER 		"Laserdesignator"
#define ITEM_BINOCULAR_PATROLLEADER 	"Laserdesignator"
#define ITEM_BINOCULAR_RIFLEMAN 		"Binocular"
#define ITEM_BINOCULAR_GRENADIER 		""
#define ITEM_BINOCULAR_SAPPER 			""
#define ITEM_BINOCULAR_MACHINEGUNNER 	""
#define ITEM_BINOCULAR_MEDIC 			"Binocular"
#define ITEM_BINOCULAR_MARKSMAN 		"Binocular"
#define ITEM_BINOCULAR_SNIPER 			"Binocular"
#define ITEM_BINOCULAR_LAT 				""
#define ITEM_BINOCULAR_MAT 				""
#define ITEM_BINOCULAR_HAT 				""

#define ITEM_GPS_TROOPLEADER 		"ItemAndroid"
#define ITEM_GPS_PATROLLEADER 		"ItemAndroid"
#define ITEM_GPS_RIFLEMAN 			"ItemMicroDAGR"
#define ITEM_GPS_GRENADIER 			"ItemMicroDAGR"
#define ITEM_GPS_SAPPER 			"ItemMicroDAGR"
#define ITEM_GPS_MACHINEGUNNER 		"ItemMicroDAGR"
#define ITEM_GPS_MEDIC 				"ItemMicroDAGR"
#define ITEM_GPS_MARKSMAN 			"ItemMicroDAGR"
#define ITEM_GPS_SNIPER 			"ItemMicroDAGR"
#define ITEM_GPS_LAT 				"ItemMicroDAGR"
#define ITEM_GPS_MAT 				"ItemMicroDAGR"
#define ITEM_GPS_HAT 				"ItemMicroDAGR"

#define ITEM_UNIFORM_TROOPLEADER 	"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_PATROLLEADER 	"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_RIFLEMAN 		"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_GRENADIER 		"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_SAPPER 		"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_MACHINEGUNNER 	"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_MEDIC 			"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_MARKSMAN 		"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_SNIPER 		"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_LAT 			"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_MAT 			"SOCOMD_Commando_SleevesDown"
#define ITEM_UNIFORM_HAT 			"SOCOMD_Commando_SleevesDown"

#define ITEM_VEST_TROOPLEADER 		"SOCOMD_Leader_Vest"
#define ITEM_VEST_PATROLLEADER 		"SOCOMD_Leader_Vest"
#define ITEM_VEST_RIFLEMAN 			"SOCOMD_Operator_Vest"
#define ITEM_VEST_GRENADIER 		"SOCOMD_2IC_Vest"
#define ITEM_VEST_SAPPER 			"SOCOMD_Operator_Vest"
#define ITEM_VEST_MACHINEGUNNER 	"VSM_LBT6094_MG_Multicam"
#define ITEM_VEST_MEDIC 			"SOCOMD_Medic_Vest"
#define ITEM_VEST_MARKSMAN 			"SOCOMD_Operator_Vest"
#define ITEM_VEST_SNIPER 			"SOCOMD_Operator_Vest"
#define ITEM_VEST_LAT 				"SOCOMD_Operator_Vest"
#define ITEM_VEST_MAT 				"SOCOMD_Operator_Vest"
#define ITEM_VEST_HAT 				"SOCOMD_Operator_Vest"

#define ITEM_BACKPACK_TROOPLEADER 		"Kit_Bag_R_MC"
#define ITEM_BACKPACK_PATROLLEADER 		"Kit_Bag_R_MC"
#define ITEM_BACKPACK_RIFLEMAN 			"SOG_BAG_MC"
#define ITEM_BACKPACK_GRENADIER 		"SOG_BAG_recon_MC"
#define ITEM_BACKPACK_SAPPER 			"Kit_Bag_pince_TAN"
#define ITEM_BACKPACK_MACHINEGUNNER 	"SOG_BAG_MC"
#define ITEM_BACKPACK_MEDIC 			"SOG_BAG_med_MC"
#define ITEM_BACKPACK_MARKSMAN 			"SOG_BAG_MC"
#define ITEM_BACKPACK_SNIPER 			"SOG_BAG_MC"
#define ITEM_BACKPACK_LAT 				"SOG_BAG_MC"
#define ITEM_BACKPACK_MAT 				"SOG_BAG_MC"
#define ITEM_BACKPACK_HAT 				"Kit_Bag_MC"
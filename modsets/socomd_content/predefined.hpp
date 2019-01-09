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

#define UNIT_SOCOMD_UNARMED "SOCOMD_Unarmed"
#define UNIT_SOCOMD_HOMESTEAD "SOCOMD_Homestead"
#define UNIT_SOCOMD_RIFLEMAN "SOCOMD_Rifleman"
#define UNIT_SOCOMD_PILOT "SOCOMD_Pilot"
#define UNIT_SOCOMD_CREWMAN "SOCOMD_Crewman"

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

#define TM_ReconAmmo\
	TRANSPORT_MAGAZINE(30Rnd_556x45_Stanag, 3) \
	TRANSPORT_MAGAZINE(30Rnd_556x45_Stanag_Tracer_Red, 3) \
	TRANSPORT_MAGAZINE(1Rnd_SmokeRed_Grenade_shell, 2) \
	TRANSPORT_MAGAZINE(1Rnd_HE_Grenade_shell, 8) \
	TRANSPORT_MAGAZINE(ClaymoreDirectionalMine_Remote_Mag, 4)


// Rifles
#define ITEM_PRIMARY_TROOPLEADER	            "SOCOMD_Item_Primary_TroopLeader"
#define ITEM_PRIMARY_PATROLLEADER	            "SOCOMD_Item_Primary_PatrolLeader"
#define ITEM_PRIMARY_RIFLEMAN		            "SOCOMD_Item_Primary_Rifleman"
#define ITEM_PRIMARY_SAPPER		                "SOCOMD_Item_Primary_Sapper"
#define ITEM_PRIMARY_MACHINEGUNNER	            "SOCOMD_Item_Primary_MachineGunner"
#define ITEM_PRIMARY_MEDIC			            "SOCOMD_Item_Primary_Medic"
#define ITEM_PRIMARY_SNIPER                     "SOCOMD_Item_Primary_Sniper"
#define ITEM_PRIMARY_RECON		                "SOCOMD_Item_Primary_Recon"
#define ITEM_PRIMARY_AT			                "SOCOMD_ITEM_PRIMARY_AT"
#define ITEM_PRIMARY_PJ                         "SOCOMD_Item_Primary_PJ"
#define ITEM_PRIMARY_PILOT                      "SOCOMD_Item_Primary_Pilot"
#define ITEM_PRIMARY_CREWMAN                    "SOCOMD_Item_Primary_Crewman"

#define ITEM_PRIMARY_MAGAZINE_TROOPLEADER	    "SOCOMD_Item_Magazine_556x45_30Rnd"
#define ITEM_PRIMARY_MAGAZINE_PATROLLEADER	    "SOCOMD_Item_Magazine_556x45_30Rnd"
#define ITEM_PRIMARY_MAGAZINE_RIFLEMAN		    "SOCOMD_Item_Magazine_556x45_30Rnd"
#define ITEM_PRIMARY_MAGAZINE_SAPPER		    "SOCOMD_Item_Magazine_556x45_30Rnd"
#define ITEM_PRIMARY_MAGAZINE_MACHINEGUNNER	    "SOCOMD_Item_Magazine_556x45_200Rnd_Tracer"
#define ITEM_PRIMARY_MAGAZINE_MEDIC			    "SOCOMD_Item_Magazine_556x45_30Rnd"
#define ITEM_PRIMARY_MAGAZINE_SNIPER		    "SOCOMD_Item_Magazine_300_5Rnd"
#define ITEM_PRIMARY_MAGAZINE_RECON		        "SOCOMD_Item_Magazine_408_7Rnd"
#define ITEM_PRIMARY_MAGAZINE_AT			    "SOCOMD_Item_Magazine_556x45_30Rnd"
#define ITEM_PRIMARY_MAGAZINE_MAT			    "SOCOMD_Item_Magazine_556x45_30Rnd"
#define ITEM_PRIMARY_MAGAZINE_HAT			    "SOCOMD_Item_Magazine_556x45_30Rnd"
#define ITEM_PRIMARY_MAGAZINE_PJ                "SOCOMD_Item_Magazine_9x21_60Rnd"
#define ITEM_PRIMARY_MAGAZINE_PILOT             "SOCOMD_Item_Magazine_9x21_60Rnd"
#define ITEM_PRIMARY_MAGAZINE_CREWMAN           "SOCOMD_Item_Magazine_9x21_60Rnd"

// pistols
#define ITEM_HANDGUN_TROOPLEADER	            "SOCOMD_Item_Handgun_TroopLeader"
#define ITEM_HANDGUN_PATROLLEADER	            "SOCOMD_Item_Handgun_PatrolLeader"
#define ITEM_HANDGUN_RIFLEMAN		            "SOCOMD_Item_Handgun_Rifleman"
#define ITEM_HANDGUN_SAPPER		                "SOCOMD_Item_Handgun_Sapper"
#define ITEM_HANDGUN_MACHINEGUNNER	            "SOCOMD_Item_Handgun_MachineGunner"
#define ITEM_HANDGUN_MEDIC			            "SOCOMD_Item_Handgun_Medic"
#define ITEM_HANDGUN_SNIPER		                "SOCOMD_Item_Handgun_Sniper"
#define ITEM_HANDGUN_RECON		                "SOCOMD_Item_Handgun_Recon"
#define ITEM_HANDGUN_AT			                "SOCOMD_Item_Handgun_AT"
#define ITEM_HANDGUN_MAT			            "SOCOMD_Item_Handgun_MAT"
#define ITEM_HANDGUN_HAT			            "SOCOMD_Item_Handgun_HAT"
#define ITEM_HANDGUN_PJ                         "SOCOMD_Item_Handgun_PJ"
#define ITEM_HANDGUN_PILOT                      "SOCOMD_Item_Handgun_Pilot"
#define ITEM_HANDGUN_CREWMAN                    "SOCOMD_Item_Handgun_Crewman"

// pistol Mag
#define ITEM_HANDGUN_MAGAZINE_TROOPLEADER		"SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAZINE_PATROLLEADER		"SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAZINE_RIFLEMAN			"SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAZINE_SAPPER			"SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAZINE_MACHINEGUNNER	    "SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAZINE_MEDIC			    "SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAZINE_SNIPER			"SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAZINE_RECON				"SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAZINE_AT				"SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAZINE_MAT				"SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAZINE_HAT				"SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAINE_PJ                 "SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAINE_PILOT              "SOCOMD_Item_Magazine_45ACP_11Rnd"
#define ITEM_HANDGUN_MAGAINE_CREWMAN            "SOCOMD_Item_Magazine_45ACP_11Rnd"

// Secondary i.e launchers
#define ITEM_SECONDARY_TROOPLEADER		        "SOCOMD_Item_Secondary_TroopLeader"
#define ITEM_SECONDARY_PATROLLEADER	            "SOCOMD_Item_Secondary_PatrolLeader"
#define ITEM_SECONDARY_RIFLEMAN		            "SOCOMD_Item_Secondary_Rifleman"
#define ITEM_SECONDARY_SAPPER			        "SOCOMD_Item_Secondary_Sapper"
#define ITEM_SECONDARY_MACHINEGUNNER	        "SOCOMD_Item_Secondary_MachineGunner"
#define ITEM_SECONDARY_MEDIC			        "SOCOMD_Item_Secondary_Medic"
#define ITEM_SECONDARY_SNIPER		            "SOCOMD_Item_Secondary_Sniper"
#define ITEM_SECONDARY_RECON			        "SOCOMD_Item_Secondary_Recon"
#define ITEM_SECONDARY_AT				        "SOCOMD_Item_Secondary_AT"
#define ITEM_SECONDARY_MAT				        "SOCOMD_Item_Secondary_MAT"
#define ITEM_SECONDARY_HAT				        "SOCOMD_Item_Secondary_HAT"
#define ITEM_SECONDARY_PJ                       "SOCOMD_Item_Secondary_PJ"
#define ITEM_SECONDARY_PILOT                    "SOCOMD_Item_Secondary_Pilot"
#define ITEM_SECONDARY_CREWMAN                  "SOCOMD_Item_Secondary_Crewman"


#define ITEM_HEADGEAR_TROOPLEADER		        "SOCOMD_Item_Headgear_TroopLeader"
#define ITEM_HEADGEAR_PATROLLEADER		        "SOCOMD_Item_Headgear_PatrolLeader"
#define ITEM_HEADGEAR_RIFLEMAN		            "SOCOMD_Item_Headgear_Rifleman"
#define ITEM_HEADGEAR_SAPPER			        "SOCOMD_Item_Headgear_Sapper"
#define ITEM_HEADGEAR_MACHINEGUNNER	            "SOCOMD_Item_Headgear_MachineGunner"
#define ITEM_HEADGEAR_MEDIC			            "SOCOMD_Item_Headgear_Medic"
#define ITEM_HEADGEAR_SNIPER			        "SOCOMD_Item_Headgear_Sniper"
#define ITEM_HEADGEAR_RECON			            "SOCOMD_Item_Headgear_Recon"
#define ITEM_HEADGEAR_AT				        "SOCOMD_Item_Headgear_AT"
#define ITEM_HEADGEAR_MAT				        "SOCOMD_Item_Headgear_MAT"
#define ITEM_HEADGEAR_HAT				        "SOCOMD_Item_Headgear_HAT"
#define ITEM_HEADGEAR_PJ                        "SOCOMD_Item_Headgear_PJ"
#define ITEM_HEADGEAR_PILOT                     "SOCOMD_Item_Headgear_Pilot"
#define ITEM_HEADGEAR_CREWMAN                   "SOCOMD_Item_Headgear_Crewman"

#define ITEM_BINOCULAR_TROOPLEADER		        "SOCOMD_Item_Binocular_TroopLeader"
#define ITEM_BINOCULAR_PATROLLEADER	            "SOCOMD_Item_Binocular_PatrolLeader"
#define ITEM_BINOCULAR_RIFLEMAN		            "SOCOMD_Item_Binocular_Rifleman"
#define ITEM_BINOCULAR_SAPPER			        "SOCOMD_Item_Binocular_Sapper"
#define ITEM_BINOCULAR_MACHINEGUNNER	        "SOCOMD_Item_Binocular_MachineGunner"
#define ITEM_BINOCULAR_MEDIC			        "SOCOMD_Item_Binocular_Medic"
#define ITEM_BINOCULAR_SNIPER		            "SOCOMD_Item_Binocular_Sniper"
#define ITEM_BINOCULAR_RECON			        "SOCOMD_Item_Binocular_Recon"
#define ITEM_BINOCULAR_AT				        "SOCOMD_Item_Binocular_AT"
#define ITEM_BINOCULAR_MAT				        "SOCOMD_Item_Binocular_MAT"
#define ITEM_BINOCULAR_HAT				        "SOCOMD_Item_Binocular_HAT"
#define ITEM_BINOCULAR_PJ                       "SOCOMD_Item_Binocular_PJ"
#define ITEM_BINOCULAR_PILOT                    "SOCOMD_Item_Binocular_Pilot"
#define ITEM_BINOCULAR_CREWMAN                  "SOCOMD_Item_Binocular_Crewman"

#define ITEM_GPS_TROOPLEADER		            "SOCOMD_Item_GPS_TroopLeader"
#define ITEM_GPS_PATROLLEADER		            "SOCOMD_Item_GPS_PatrolLeader"
#define ITEM_GPS_RIFLEMAN			            "SOCOMD_Item_GPS_Rifleman"
#define ITEM_GPS_SAPPER			                "SOCOMD_Item_GPS_Sapper"
#define ITEM_GPS_MACHINEGUNNER		            "SOCOMD_Item_GPS_MachineGunner"
#define ITEM_GPS_MEDIC			                "SOCOMD_Item_GPS_Medic"
#define ITEM_GPS_SNIPER			                "SOCOMD_Item_GPS_Sniper"
#define ITEM_GPS_RECON			                "SOCOMD_Item_GPS_Recon"
#define ITEM_GPS_AT				                "SOCOMD_Item_GPS_AT"
#define ITEM_GPS_MAT				            "SOCOMD_Item_GPS_MAT"
#define ITEM_GPS_HAT				            "SOCOMD_Item_GPS_HAT"
#define ITEM_GPS_PJ                             "SOCOMD_Item_GPS_PJ"
#define ITEM_GPS_PILOT                          "SOCOMD_Item_GPS_Pilot"
#define ITEM_GPS_CREWMAN                        "SOCOMD_Item_GPS_Crewman"

#define ITEM_UNIFORM_TROOPLEADER	            "SOCOMD_Item_Uniform_TroopLeader"
#define ITEM_UNIFORM_PATROLLEADER	            "SOCOMD_Item_Uniform_PatrolLeader"
#define ITEM_UNIFORM_RIFLEMAN		            "SOCOMD_Item_Uniform_Rifleman"
#define ITEM_UNIFORM_SAPPER		                "SOCOMD_Item_Uniform_Sapper"
#define ITEM_UNIFORM_MACHINEGUNNER	            "SOCOMD_Item_Uniform_MachineGunner"
#define ITEM_UNIFORM_MEDIC			            "SOCOMD_Item_Uniform_Medic"
#define ITEM_UNIFORM_SNIPER		                "SOCOMD_Item_Uniform_Sniper"
#define ITEM_UNIFORM_RECON		                "SOCOMD_Item_Uniform_Recon"
#define ITEM_UNIFORM_AT			                "SOCOMD_Item_Uniform_AT"
#define ITEM_UNIFORM_MAT			            "SOCOMD_Item_Uniform_MAT"
#define ITEM_UNIFORM_HAT			            "SOCOMD_Item_Uniform_HAT"
#define ITEM_UNIFORM_PJ                         "SOCOMD_Item_Uniform_PJ"
#define ITEM_UNIFORM_PILOT                      "SOCOMD_Item_Uniform_Pilot"
#define ITEM_UNIFORM_CREWMAN                    "SOCOMD_Item_Uniform_Crewman"

#define ITEM_VEST_TROOPLEADER		            "SOCOMD_Item_Vest_TroopLeader"
#define ITEM_VEST_PATROLLEADER		            "SOCOMD_Item_Vest_PatrolLeader"
#define ITEM_VEST_RIFLEMAN			            "SOCOMD_Item_Vest_Rifleman"
#define ITEM_VEST_SAPPER			            "SOCOMD_Item_Vest_Sapper"
#define ITEM_VEST_MACHINEGUNNER	                "SOCOMD_Item_Vest_MachineGunner"
#define ITEM_VEST_MEDIC			                "SOCOMD_Item_Vest_Medic"
#define ITEM_VEST_SNIPER			            "SOCOMD_Item_Vest_Sniper"
#define ITEM_VEST_RECON			                "SOCOMD_Item_Vest_Recon"
#define ITEM_VEST_AT				            "SOCOMD_Item_Vest_AT"
#define ITEM_VEST_MAT				            "SOCOMD_Item_Vest_MAT"
#define ITEM_VEST_HAT				            "SOCOMD_Item_Vest_HAT"
#define ITEM_VEST_PJ                            "SOCOMD_Item_Vest_PJ"
#define ITEM_VEST_PILOT                         "SOCOMD_Item_Vest_Pilot"
#define ITEM_VEST_CREWMAN                       "SOCOMD_Item_Vest_Crewman"

#define ITEM_BACKPACK_TROOPLEADER		        "SOCOMD_Item_Backpack_TroopLeader"
#define ITEM_BACKPACK_PATROLLEADER		        "SOCOMD_Item_Backpack_PatrolLeader"
#define ITEM_BACKPACK_RIFLEMAN			        "SOCOMD_Item_Backpack_Rifleman"
#define ITEM_BACKPACK_SAPPER			        "SOCOMD_Item_Backpack_Sapper"
#define ITEM_BACKPACK_MACHINEGUNNER	            "SOCOMD_Item_Backpack_MachineGunner"
#define ITEM_BACKPACK_MEDIC			            "SOCOMD_Item_Backpack_Medic"
#define ITEM_BACKPACK_SNIPER			        "SOCOMD_Item_Backpack_Sniper"
#define ITEM_BACKPACK_Recon			            "SOCOMD_Item_Backpack_Recon"
#define ITEM_BACKPACK_AT				        "SOCOMD_Item_Backpack_AT"
#define ITEM_BACKPACK_MAT				        "SOCOMD_Item_Backpack_MAT"
#define ITEM_BACKPACK_HAT				        "SOCOMD_Item_Backpack_HAT"
#define ITEM_BACKPACK_PJ                        "SOCOMD_Item_Backpack_PJ"
#define ITEM_BACKPACK_PILOT                     "SOCOMD_Item_Backpack_Pilot"
#define ITEM_BACKPACK_CREWMAN                   "SOCOMD_Item_Backpack_Crewman"

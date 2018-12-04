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
#define FACTION_STR "SOCOMD_CMD"
#define SOCOMD_PILOT "SOCOMD_Pilot"

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

#define LandTransportMagazines \
	TRANSPORT_MAGAZINE(SMA_30Rnd_556x45_M855A1, 12) \
	TRANSPORT_MAGAZINE(SMA_20Rnd_762x51mm_M80A1_EPR, 3) \
	TRANSPORT_MAGAZINE(SMA_150Rnd_762_M80A1, 2) \
	TRANSPORT_MAGAZINE(SmokeShellBlue, 2) \
	TRANSPORT_MAGAZINE(B_IR_Grenade, 2)

#define LandTransportItems \
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

#define LandTransportBackpacks \
	TRANSPORT_BACKPACK(SOCOMD_Backpack_Empty, 1)

#define LandTransportWeapons \
	TRANSPORT_WEAPON(SMA_M4afgSTOCK, 1)

////////////////////////////////////////////////////////////////////////////////
// AIR LOADOUT	

#define AirLoadout \
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
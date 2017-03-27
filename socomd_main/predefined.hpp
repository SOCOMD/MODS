#define private	0
#define protected 1
#define public 2

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
	TRANSPORT_MAGAZINE(30Rnd_556x45_Stanag, 30) \
	TRANSPORT_MAGAZINE(CUP_200Rnd_TE4_Red_Tracer_556x45_M249, 5) \
	TRANSPORT_MAGAZINE(20Rnd_762x51_Mag, 10) \
	TRANSPORT_MAGAZINE(tf47_m3maaws_hedp, 2) \
	TRANSPORT_MAGAZINE(tf47_m3maaws_illum, 2) \
	TRANSPORT_MAGAZINE(DemoCharge_Remote_Mag, 6) \
	TRANSPORT_MAGAZINE(Laserbatteries, 6) \
	TRANSPORT_MAGAZINE(HandGrenade, 5) \
	TRANSPORT_MAGAZINE(SmokeShell, 10)

#define LandTransportItems \
	TRANSPORT_ITEM(ToolKit, 1) \
	TRANSPORT_ITEM(ACE_wirecutter, 1) \
	TRANSPORT_ITEM(ACE_fieldDressing, 20) \
	TRANSPORT_ITEM(ACE_quikclot, 20) \
	TRANSPORT_ITEM(ACE_elasticBandage, 20) \
	TRANSPORT_ITEM(ACE_packingBandage, 20) \
	TRANSPORT_ITEM(ACE_morphine, 10) \
	TRANSPORT_ITEM(ACE_epinephrine, 10) \
	TRANSPORT_ITEM(ACE_bloodIV_500, 5) \
	TRANSPORT_ITEM(ACE_bodyBag, 5) \
	TRANSPORT_ITEM(ACE_CableTie, 10) \
	TRANSPORT_ITEM(ACE_DefusalKit, 1) \
	TRANSPORT_ITEM(Mask_M40, 20)

#define LandTransportBackpacks \
	TRANSPORT_BACKPACK(tf_rt1523g_rhs, 2)

#define LandTransportWeapons \
	TRANSPORT_WEAPON(SOCOMD_Carl_Gustav, 1)

////////////////////////////////////////////////////////////////////////////////
// AIR LOADOUT	

#define AirLoadout \
	class TransportMagazines \
	{ \
		TRANSPORT_MAGAZINE(30Rnd_556x45_Stanag, 10) \
		TRANSPORT_MAGAZINE(tf47_m3maaws_he, 2) \
		TRANSPORT_MAGAZINE(tf47_m3maaws_hedp, 2) \
		TRANSPORT_MAGAZINE(tf47_m3maaws_illum, 2) \
		TRANSPORT_MAGAZINE(DemoCharge_Remote_Mag, 2) \
		TRANSPORT_MAGAZINE(HandGrenade, 4) \
		TRANSPORT_MAGAZINE(SmokeShell, 10) \
	}; \
	class TransportItems \
	{ \
		TRANSPORT_ITEM(ToolKit, 1) \
		TRANSPORT_ITEM(ACE_fieldDressing, 20) \
		TRANSPORT_ITEM(ACE_quikclot, 20) \
		TRANSPORT_ITEM(ACE_elasticBandage, 20) \
		TRANSPORT_ITEM(ACE_packingBandage, 20) \
		TRANSPORT_ITEM(ACE_morphine, 10) \
		TRANSPORT_ITEM(ACE_epinephrine, 10) \
		TRANSPORT_ITEM(ACE_bloodIV_500, 5) \
		TRANSPORT_ITEM(ACE_bodyBag, 5) \
		TRANSPORT_ITEM(ACE_CableTie, 10) \
	}; \
	class TransportWeapons \
	{ \
		TRANSPORT_WEAPON(RH_Hk416c, 2) \
		TRANSPORT_WEAPON(SOCOMD_Carl_Gustav, 1) \
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
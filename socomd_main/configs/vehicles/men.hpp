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
//COMMON DEFINES

#define UNIT_COMMON_AMMO 		ITEM04("RH_12rnd_45cal_usp"), \
								ITEM02("SmokeShell"), \
								ITEM02("SmokeShellGreen"), \
								ITEM02("HandGrenade"), \
								ITEM02("ACE_M84"), \
								ITEM01("B_IR_Grenade")

#define UNIT_COMMON_WEAPONS 	ITEM01("SOCOMD_Pistol"), \
								ITEM01("Throw"), \
								ITEM01("Put")

#define UNIT_COMMON_LINKEDITEMS ITEM01("ItemMap"), \
								ITEM01("ItemCompass"), \
								ITEM01("ItemWatch"), \
								ITEM01("tf_anprc152")

#define UNIT_COMMON_ITEMS 		ITEM01("ItemcTabHCam"), \
								ITEM01("ACE_Flashlight_KSF1"), \
								ITEM01("murshun_cigs_lighter"), \
								ITEM01("ACE_NVG_Gen4"), \
								ITEM04("ACE_CableTie"), \
								ITEM01("ACE_Earplugs")
								
#define UNIT_COMMON_MEDS 		ITEM06("ACE_fieldDressing"), \
								ITEM06("ACE_quikclot"), \
								ITEM06("ACE_elasticBandage"), \
								ITEM06("ACE_packingBandage"), \
								ITEM02("ACE_morphine"), \
								ITEM02("ACE_epinephrine"), \
								ITEM01("ACE_tourniquet")
								
#define UNIT_MEDIC_MEDS 		ITEM18("ACE_fieldDressing"), \
								ITEM18("ACE_quikclot"), \
								ITEM18("ACE_elasticBandage"), \
								ITEM18("ACE_packingBandage"), \
								ITEM08("ACE_morphine"), \
								ITEM04("ACE_epinephrine"), \
								ITEM04("ACE_tourniquet"), \
								ITEM08("ACE_salineIV_500"), \
								ITEM04("ACE_personalAidKit"), \
								ITEM02("ACE_bodyBag")
								
////////////////////////////////////////////////////////////////////////////////
// AMMO DEFINES

#define UNIT_AMMO_RIFLEMAN 		ITEM07("30Rnd_556x45_Stanag"), \
								ITEM02("30Rnd_556x45_Stanag_Tracer_Red")

#define UNIT_AMMO_UNDERSLUNG 	ITEM05("1Rnd_HE_Grenade_shell"), \
								ITEM02("1Rnd_SmokeRed_Grenade_shell"), \
								ITEM02("ACE_HuntIR_M203")

#define UNIT_AMMO_MARKSMAN 		ITEM09("20Rnd_762x51_Mag")

#define UNIT_AMMO_GUNNER		ITEM04("CUP_200Rnd_TE4_Red_Tracer_556x45_M249")

////////////////////////////////////////////////////////////////////////////////
// BASE CLASSES

class SOCOMD_Soldier_LongSleeve : B_Soldier_02_f
{
	scope 						= protected;
	side 						= 1;
	faction 					= "SOCOMD";
	author						= "SOCOMD";
	displayName 				= "SOCOMD Solider (Sleeve Down)";

	uniformClass				= "SOCOMD_Uniform_LongSleeve";
	model 						= "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d"; 
	hiddenSelections[]			= { "Camo", "Insignia" };
	hiddenSelectionsTextures[] 	= { "socomd_data\uniform\clothes\ia_soldier_01_clothing_co.paa" };
	
	weapons[] 					= { UNIT_COMMON_WEAPONS };
	respawnWeapons[] 			= { UNIT_COMMON_WEAPONS };
	magazines[] 				= { UNIT_COMMON_AMMO };
	respawnMagazines[] 			= { UNIT_COMMON_AMMO };
	respawnLinkedItems[] 		= { UNIT_COMMON_LINKEDITEMS };
	linkedItems[] 				= { UNIT_COMMON_LINKEDITEMS };
	Items[] 					= { UNIT_COMMON_ITEMS };
	RespawnItems[] 				= { UNIT_COMMON_ITEMS };
	backpack					= "";
};

class SOCOMD_Diver : B_diver_F
{
	scope 						= protected;
	author						= "SOCOMD";
	displayName 				= "SOCOMD Diver";
	uniformClass				= "SOCOMD_Uniform_Diver";

	weapons[] 					= {	UNIT_COMMON_WEAPONS };
	respawnWeapons[] 			= { UNIT_COMMON_WEAPONS };
	magazines[] 				= { UNIT_COMMON_AMMO };
	respawnMagazines[] 			= { UNIT_COMMON_AMMO };
	linkedItems[] 				= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_Rebreather", "zeus_earpiece" };
	respawnLinkedItems[] 		= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_Rebreather", "zeus_earpiece" };
	Items[] 					= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools" };
	RespawnItems[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools" };
	backpack					= "";
};

class SOCOMD_Soldier_ShortSleeve : SOCOMD_Soldier_LongSleeve
{
	scope 						= protected;
	displayName 				= "SOCOMD Solider (Sleeve Up)";
	uniformClass				= "SOCOMD_Uniform_ShortSleeve";
	model 						= "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d"; 

	hiddenSelections[]			= { "Camo", "Insignia" };
	hiddenSelectionsTextures[] 	= { "socomd_data\uniform\clothes\ia_soldier_01_clothing_co.paa" };
};

class SOCOMD_Officer_LongSleeve : SOCOMD_Soldier_LongSleeve
{
	scope 						= protected;
	displayName 				= "SOCOMD Officer (Sleeve Down)";
	uniformClass				= "SOCOMD_Uniform_Officer_LongSleeve";
	model 						= "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d"; 

	hiddenSelections[]			= { "Camo", "Insignia" };
	hiddenSelectionsTextures[] 	= { "socomd_data\uniform\clothes\ia_officer_01_clothing_co.paa" };
};

class SOCOMD_Officer_ShortSleeve : SOCOMD_Soldier_ShortSleeve
{
	scope 						= protected;
	displayName 				= "SOCOMD Officer (Sleeve Up)";
	uniformClass				= "SOCOMD_Officer_Uniform_ShortSleeve";
	model 						= "\A3\Characters_F_Beta\INDEP\ia_soldier_02.p3d"; 

	hiddenSelections[]			= { "Camo", "Insignia" };
	hiddenSelectionsTextures[] 	= { "socomd_data\uniform\clothes\ia_officer_01_clothing_co.paa" };
};

class SOCOMD_Rifleman : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Rifleman";
	displayName 			= "Rifleman";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconMan";
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemMicroDAGR" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemMicroDAGR" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS };
	//backpack 				= "SOCOMD_Backpack";
};

////////////////////////////////////////////////////////////////////////////////
// PLATOON GROUP
	
class SOCOMD_PlatoonLeader : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_PlatoonLeader";
	displayName 			= "Platoon Leader";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManLeader";

	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris_M203s", "Laserdesignator" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris_M203s", "Laserdesignator" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, UNIT_AMMO_UNDERSLUNG, "Laserbatteries" };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, UNIT_AMMO_UNDERSLUNG, "Laserbatteries" };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemcTab" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemcTab" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACE_MapTools" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACE_MapTools" };
	backpack 				= "SOCOMD_LongRange_Radio";
};

class SOCOMD_PlatoonSergeant : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_PlatoonSergeant";
	displayName 			= "Platoon Sergeant";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManExplosive";

	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris_M203s", "Rangefinder" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris_M203s", "Rangefinder" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, UNIT_AMMO_UNDERSLUNG, ITEM04("SmokeShell") };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, UNIT_AMMO_UNDERSLUNG, ITEM04("SmokeShell") };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_MapTools" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_MapTools" };
	//backpack 				= "SOCOMD_Backpack";		
};

class SOCOMD_PlatoonMedic : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_PlatoonMedic";
	displayName 			= "Platoon Medic";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManMedic";

	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris", "Rangefinder" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris", "Rangefinder" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, ITEM04("SmokeShell") };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, ITEM04("SmokeShell") };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_CM", "SOCOMD_MICH_Tan", "ItemMicroDAGR" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_CM", "SOCOMD_MICH_Tan", "ItemMicroDAGR" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_MEDIC_MEDS, "ACE_MapTools" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_MEDIC_MEDS, "ACE_MapTools" };
	//backpack 				= "SOCOMD_Medic_Backpack";
};

class SOCOMD_PlatoonSignaller : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_PlatoonSignaller";
	displayName 			= "Platoon Signaller";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconMan";

	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris", "Laserdesignator" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris", "Laserdesignator" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools" };
	backpack 				= "SOCOMD_LongRange_Radio";
};

////////////////////////////////////////////////////////////////////////////////
// SECTION GROUP

class SOCOMD_SectionLeader : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_SectionLeader";
	displayName 			= "Section Leader";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManLeader";
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris_M203s", "Rangefinder" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris_M203s", "Rangefinder" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, UNIT_AMMO_UNDERSLUNG };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, UNIT_AMMO_UNDERSLUNG };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_FAST_Tan", "ItemAndroid" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_FAST_Tan", "ItemAndroid" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACE_MapTools" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACE_MapTools" };
	//backpack 				= "SOCOMD_Backpack";	
};

class SOCOMD_2IC : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_2IC";
	displayName				= "Section 2IC";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManExplosive";
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris_M203s", "Rangefinder" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris_M203s", "Rangefinder" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, UNIT_AMMO_UNDERSLUNG };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, UNIT_AMMO_UNDERSLUNG };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACE_MapTools" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACE_MapTools" };
	//backpack 				= "SOCOMD_Backpack";	
};

class SOCOMD_Light_Anti_Tank_Marksman : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Light_Anti_Tank_Marksman";
	displayName 			= "Light Anti-Tank Marksman";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManAT";
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_SR25EC", "HAFM_LAW", "Rangefinder" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_SR25EC", "HAFM_LAW", "Rangefinder" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_MARKSMAN };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_MARKSMAN };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemMicroDAGR" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemMicroDAGR" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS };
	//backpack 				= "SOCOMD_Backpack";	
};

class SOCOMD_Gunner : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Gunner";
	displayName 			= "Gunner";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManMG";
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "CUP_lmg_minimi_railed" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "CUP_lmg_minimi_railed" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_GUNNER };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_GUNNER };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_AR", "SOCOMD_MICH_Multi", "ItemMicroDAGR" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_AR", "SOCOMD_MICH_Multi", "ItemMicroDAGR" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS };
	//backpack 				= "SOCOMD_Gunner_Backpack";		
};

class SOCOMD_Sapper : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Sapper";
	displayName 			= "Sapper";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManEngineer";
	engineer 				= 1;
	detectSkill 			= 100;
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemMicroDAGR" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemMicroDAGR" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "MineDetector" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "MineDetector" };
	backpack 				= "SOCOMD_Sapper_Backpack";	
};

class SOCOMD_Medic : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Medic";
	displayName 			= "Medic";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManMedic";
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_CM", "SOCOMD_MICH_Tan", "ItemMicroDAGR" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_CM", "SOCOMD_MICH_Tan", "ItemMicroDAGR" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_MEDIC_MEDS };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_MEDIC_MEDS };
	//backpack 				= "SOCOMD_Medic_Backpack";
};

////////////////////////////////////////////////////////////////////////////////
// SNIPER TEAM GROUP

class SOCOMD_Recon_TeamLeader : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Recon_TeamLeader";
	displayName 			= "Sniper Team Leader";
	vehicleclass 			= "SOCOMD_Sniper";
	icon 					= "iconManLeader";
	camouflage 				= 0.4;
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris", "Laserdesignator" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris", "Laserdesignator" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools", "ACE_M26_Clacker" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools", "ACE_M26_Clacker" };
	//backpack 				= "SOCOMD_Sniper_Backpack";
};

class SOCOMD_Sniper_Spotter : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Sniper_Spotter";
	displayName 			= "Sniper Team Spotter";
	vehicleclass 			= "SOCOMD_Sniper";
	icon 					= "iconManAT";
	camouflage 				= 0.4;
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris", "Rangefinder" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris", "Rangefinder" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools", "ACE_M26_Clacker" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools", "ACE_M26_Clacker" };
	backpack 				= "SOCOMD_SniperLR";
};
	
////////////////////////////////////////////////////////////////////////////////
// WEAPONS TEAM GROUP
	
class SOCOMD_Weapons_TeamLeader : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Weapons_TeamLeader";
	displayName 			= "Weapons Team Leader";
	vehicleclass 			= "SOCOMD_Weapons";
	icon 					= "iconManLeader";

	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris_M203s", "Laserdesignator" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris_M203s", "Laserdesignator" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, UNIT_AMMO_UNDERSLUNG, "Laserbatteries" };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN, UNIT_AMMO_UNDERSLUNG, "Laserbatteries" };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_MapTools" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_MapTools" };
	backpack 				= "SOCOMD_Weapons_Radio";
};

class SOCOMD_Weapons_Specialist : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Weapons_Specialist";
	displayName 			= "Weapons Team Specialist";
	vehicleclass 			= "SOCOMD_Weapons";
	icon 					= "iconManEngineer";
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris", "Binocular" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris", "Binocular" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_EntrenchingTool" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_EntrenchingTool" };
	backpack 				= "SOCOMD_Weapons_Backpack";
};

class SOCOMD_Weapons_Assistant : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Weapons_Assistant";
	displayName 			= "Weapons Team Assistant";
	vehicleclass 			= "SOCOMD_Weapons";
	icon 					= "iconManEngineer";
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_M4A1_ris", "Binocular" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_M4A1_ris", "Binocular" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_EntrenchingTool" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_EntrenchingTool" };
	backpack 				= "SOCOMD_Weapons_Backpack";
};

////////////////////////////////////////////////////////////////////////////////
// SPECIAL UNITS

class SOCOMD_Pilot : SOCOMD_Officer_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Pilot";
	vehicleclass 			= "SOCOMD_Core";
	displayName 			= "Heli-Pilot";
	icon 					= "iconMan";
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_Hk416c", "Binocular" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_Hk416c", "Binocular" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_Pilot_helmet", "ItemcTab" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_Pilot_helmet", "ItemcTab" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools" };
	backpack 				= "SOCOMD_LongRange_Radio";
};

class SOCOMD_Crew : SOCOMD_Officer_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Crew";
	vehicleclass 			= "SOCOMD_Core";
	displayName 			= "Heli-Crew";
	icon 					= "iconMan";
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS, "RH_Hk416c", "Binocular" };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS, "RH_Hk416c", "Binocular" };
	magazines[] 			= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO, UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_Crew_helmet", "ItemcTab" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_Crew_helmet", "ItemcTab" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools" };
	backpack 				= "SOCOMD_LongRange_Radio";
};

class SOCOMD_Homestead: SOCOMD_Soldier_LongSleeve
{
	scope = public;
	vehicleclass = "SOCOMD_Core";
	_generalMacro = "SOCOMD_Homestead";
	displayName = "Homestead";
	icon = "iconMan";
	
	weapons[] 				= {	UNIT_COMMON_WEAPONS };
	respawnWeapons[] 		= { UNIT_COMMON_WEAPONS };
	magazines[] 			= { UNIT_COMMON_AMMO };
	respawnMagazines[] 		= { UNIT_COMMON_AMMO };
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "ItemMap", "ItemGPS", "SOCOMD_Vest_TL", "SOCOMD_BERET", "zeus_earpiece" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "ItemMap", "ItemGPS", "SOCOMD_Vest_TL", "SOCOMD_BERET", "zeus_earpiece" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools" };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS, "ACE_MapTools" };
	backpack 				= "SOCOMD_LongRange_Radio";
};

class SOCOMD_Journalist : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Journalist";
	displayName 			= "Section Journalist";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManExplosive";
	
	uniformClass 			= "U_BG_Guerilla2_1";
	linkedItems[] 			= { UNIT_COMMON_LINKEDITEMS, "V_Press_F", "LOP_H_6B27M_UN" };
	respawnLinkedItems[] 	= { UNIT_COMMON_LINKEDITEMS, "V_Press_F", "LOP_H_6B27M_UN" };
	Items[] 				= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS };
	RespawnItems[] 			= { UNIT_COMMON_ITEMS, UNIT_COMMON_MEDS };
};
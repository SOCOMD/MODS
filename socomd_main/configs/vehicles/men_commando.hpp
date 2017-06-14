////////////////////////////////////////////////////////////////////////////////
//COMMON DEFINES
 
#define CMD_UNIT_COMMON_AMMO 		ITEM04("CUP_17Rnd_9x19_glock17"), \
									ITEM02("SmokeShell"), \
									ITEM02("SmokeShellGreen"), \
									ITEM02("HandGrenade"), \
									ITEM02("ACE_M84"), \
									ITEM01("B_IR_Grenade")
	
#define CMD_UNIT_COMMON_WEAPONS 	ITEM01("SOCOMD_Pistol"), \
									ITEM01("Throw"), \
									ITEM01("Put")
 
#define CMD_UNIT_COMMON_LINKEDITEMS	ITEM01("ItemMap"), \
									ITEM01("ItemCompass"), \
									ITEM01("ItemWatch"), \
									ITEM01("tf_anprc152")
 
#define CMD_UNIT_COMMON_ITEMS 		ITEM01("ItemcTabHCam"), \
									ITEM01("ACE_Flashlight_KSF1"), \
									ITEM01("murshun_cigs_lighter"), \
									ITEM01("ACE_NVG_Gen4"), \
									ITEM04("ACE_CableTie"), \
									ITEM01("ACE_Earplugs")
 								
#define CMD_UNIT_COMMON_MEDS 		ITEM06("ACE_fieldDressing"), \
									ITEM06("ACE_quikclot"), \
									ITEM06("ACE_elasticBandage"), \
									ITEM06("ACE_packingBandage"), \
									ITEM02("ACE_morphine"), \
									ITEM02("ACE_epinephrine"), \
									ITEM01("ACE_tourniquet")
 								
#define CMD_UNIT_MEDIC_MEDS 		ITEM18("ACE_fieldDressing"), \
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
 
#define CMD_UNIT_AMMO_RIFLEMAN 		ITEM07("SMA_30Rnd_556x45_Mk318"), \
									ITEM02("SMA_30Rnd_556x45_Mk318_Tracer")
 
#define CMD_UNIT_AMMO_UNDERSLUNG 	ITEM05("1Rnd_HE_Grenade_shell"), \
									ITEM02("1Rnd_SmokeRed_Grenade_shell"), \
									ITEM02("ACE_HuntIR_M203")
 
#define CMD_UNIT_AMMO_MARKSMAN 		ITEM09("SMA_20Rnd_762x51mm_M80A1_EPR_IR")

#define CMD_UNIT_AMMO_GUNNER		ITEM04("SMA_150Rnd_762_M80A1")
 
////////////////////////////////////////////////////////////////////////////////
// BASE CLASSES
 
class SOCOMD_Soldier_LongSleeve : B_Soldier_02_f
{
	scope 						= protected;
	side 						= 1;
	faction 					= "SOCOMD_CMD";
	author						= "SOCOMD";
	displayName 				= "SOCOMD Solider (Sleeve Down)";

	uniformClass				= "SOCOMD_Uniform_LongSleeve";
	model 						= "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d"; 
	hiddenSelections[]			= { "Camo", "Insignia" };
	hiddenSelectionsTextures[] 	= { "socomd_data\uniform\clothes\ia_soldier_01_clothing_co.paa" };

	weapons[] 					= { CMD_UNIT_COMMON_WEAPONS };
	respawnWeapons[] 			= { CMD_UNIT_COMMON_WEAPONS };
	magazines[] 				= { CMD_UNIT_COMMON_AMMO };
	respawnMagazines[] 			= { CMD_UNIT_COMMON_AMMO };
	respawnLinkedItems[] 		= { CMD_UNIT_COMMON_LINKEDITEMS };
	linkedItems[] 				= { CMD_UNIT_COMMON_LINKEDITEMS };
	Items[] 					= { CMD_UNIT_COMMON_ITEMS };
	RespawnItems[] 				= { CMD_UNIT_COMMON_ITEMS };
	backpack					= "";
};
 
class SOCOMD_Diver : B_diver_F
{
	scope 						= protected;
	author						= "SOCOMD";
	displayName 				= "SOCOMD Diver";
	uniformClass				= "SOCOMD_Uniform_Diver";

	weapons[] 					= {	CMD_UNIT_COMMON_WEAPONS };
	respawnWeapons[] 			= { CMD_UNIT_COMMON_WEAPONS };
	magazines[] 				= { CMD_UNIT_COMMON_AMMO };
	respawnMagazines[] 			= { CMD_UNIT_COMMON_AMMO };
	linkedItems[] 				= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_Rebreather", "zeus_earpiece" };
	respawnLinkedItems[] 		= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_Rebreather", "zeus_earpiece" };
	Items[] 					= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools" };
	RespawnItems[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools" };
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

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemMicroDAGR" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemMicroDAGR" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
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

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_MK16_EGLM_Green", "Laserdesignator" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_MK16_EGLM_Green", "Laserdesignator" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, "Laserbatteries" };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, "Laserbatteries" };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemcTab" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemcTab" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACE_MapTools" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACE_MapTools" };
	backpack 				= "SOCOMD_LongRange_Radio";
};
 
class SOCOMD_PlatoonSergeant : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_PlatoonSergeant";
	displayName 			= "Platoon Sergeant";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManExplosive";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_MK16_EGLM_Green", "Rangefinder" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_MK16_EGLM_Green", "Rangefinder" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, ITEM04("SmokeShell") };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, ITEM04("SmokeShell") };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_MapTools" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_MapTools" };
	//backpack 				= "SOCOMD_Backpack";		
};
 
class SOCOMD_PlatoonMedic : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_PlatoonMedic";
	displayName 			= "Platoon Medic";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManMedic";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Rangefinder" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Rangefinder" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, ITEM04("SmokeShell") };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, ITEM04("SmokeShell") };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_CM", "SOCOMD_MICH_Tan", "ItemMicroDAGR" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_CM", "SOCOMD_MICH_Tan", "ItemMicroDAGR" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, UNIT_MEDIC_MEDS, "ACE_MapTools" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, UNIT_MEDIC_MEDS, "ACE_MapTools" };
	//backpack 				= "SOCOMD_Medic_Backpack";
};
 
class SOCOMD_PlatoonSignaller : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_PlatoonSignaller";
	displayName 			= "Platoon Signaller";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconMan";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Laserdesignator" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Laserdesignator" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools" };
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

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_MK16_EGLM_Green", "Rangefinder" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_MK16_EGLM_Green", "Rangefinder" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_FAST_Tan", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_FAST_Tan", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACE_MapTools" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACE_MapTools" };	
};

class SOCOMD_2IC : SOCOMD_Soldier_LongSleeve
{
	scope = public;
	_generalMacro 			= "SOCOMD_2IC";
	displayName				= "Section 2IC";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManExplosive";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_MK16_EGLM_Green", "Rangefinder" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_MK16_EGLM_Green", "Rangefinder" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACE_MapTools" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_HuntIR_monitor", "ACE_MapTools" };
};
 
class SOCOMD_Light_Anti_Tank_Marksman : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Light_Anti_Tank_Marksman";
	displayName 			= "Light Anti-Tank Marksman";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManAT";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_MK18MOEBLK", "HAFM_LAW", "Rangefinder" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_MK18MOEBLK", "HAFM_LAW", "Rangefinder" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_MARKSMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_MARKSMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemMicroDAGR" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemMicroDAGR" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
};

class SOCOMD_Gunner : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Gunner";
	displayName 			= "Gunner";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManMG";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "sma_minimi_mk3_762tsb" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "sma_minimi_mk3_762tsb" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_GUNNER };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_GUNNER };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_AR", "SOCOMD_MICH_Multi", "ItemMicroDAGR" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_AR", "SOCOMD_MICH_Multi", "ItemMicroDAGR" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };	
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

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemMicroDAGR" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemMicroDAGR" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "MineDetector" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "MineDetector" };
	backpack 				= "SOCOMD_Sapper_Backpack";	
};

class SOCOMD_Medic : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Medic";
	displayName 			= "Medic";
	vehicleclass 			= "SOCOMD_Core";
	icon 					= "iconManMedic";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_CM", "SOCOMD_MICH_Tan", "ItemMicroDAGR" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_CM", "SOCOMD_MICH_Tan", "ItemMicroDAGR" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, UNIT_MEDIC_MEDS };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, UNIT_MEDIC_MEDS };
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

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Laserdesignator" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Laserdesignator" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools", "ACE_M26_Clacker" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools", "ACE_M26_Clacker" };
};
 
class SOCOMD_Sniper_Spotter : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Sniper_Spotter";
	displayName 			= "Sniper Team Spotter";
	vehicleclass 			= "SOCOMD_Sniper";
	icon 					= "iconManAT";
	camouflage 				= 0.4;

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Rangefinder" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Rangefinder" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, "Laserbatteries" };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_FAST_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools", "ACE_M26_Clacker" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools", "ACE_M26_Clacker" };
	backpack 				= "SOCOMD_LongRange_Radio";
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

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_MK16_EGLM_Green", "Laserdesignator" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_MK16_EGLM_Green", "Laserdesignator" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, "Laserbatteries" };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN, CMD_UNIT_AMMO_UNDERSLUNG, "Laserbatteries" };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_MapTools" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool", "ACE_HuntIR_monitor", "ACE_MapTools" };
	backpack 				= "SOCOMD_LongRange_Radio";
};

class SOCOMD_Weapons_Specialist : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Weapons_Specialist";
	displayName 			= "Weapons Team Specialist";
	vehicleclass 			= "SOCOMD_Weapons";
	icon 					= "iconManEngineer";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Binocular" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Binocular" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool" };
	backpack 				= "SOCOMD_Weapons_Backpack";
};
 
class SOCOMD_Weapons_Assistant : SOCOMD_Soldier_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Weapons_Assistant";
	displayName 			= "Weapons Team Assistant";
	vehicleclass 			= "SOCOMD_Weapons";
	icon 					= "iconManEngineer";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Binocular" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Binocular" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_OP", "SOCOMD_MICH_Multi", "ItemAndroid" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_EntrenchingTool" };
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

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Binocular" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_M4CQBR", "Binocular" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_Pilot_helmet", "ItemcTab" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_Pilot_helmet", "ItemcTab" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools" };
	backpack 				= "SOCOMD_LongRange_Radio";
};
 
class SOCOMD_Crew : SOCOMD_Officer_LongSleeve
{
	scope 					= public;
	_generalMacro 			= "SOCOMD_Crew";
	vehicleclass 			= "SOCOMD_Core";
	displayName 			= "Heli-Crew";
	icon 					= "iconMan";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS, "SMA_HK416", "Binocular" };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS, "SMA_HK416", "Binocular" };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO, CMD_UNIT_AMMO_RIFLEMAN };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_Crew_helmet", "ItemcTab" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "SOCOMD_Vest_TL", "SOCOMD_Crew_helmet", "ItemcTab" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools" };
	backpack 				= "SOCOMD_LongRange_Radio";
};
 
class SOCOMD_Homestead: SOCOMD_Soldier_LongSleeve
{
	scope = public;
	vehicleclass = "SOCOMD_Core";
	_generalMacro = "SOCOMD_Homestead";
	displayName = "Homestead";
	icon = "iconMan";

	weapons[] 				= {	CMD_UNIT_COMMON_WEAPONS };
	respawnWeapons[] 		= { CMD_UNIT_COMMON_WEAPONS };
	magazines[] 			= { CMD_UNIT_COMMON_AMMO };
	respawnMagazines[] 		= { CMD_UNIT_COMMON_AMMO };
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "ItemMap", "ItemGPS", "SOCOMD_Vest_TL", "SOCOMD_BERET", "zeus_earpiece" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "ItemMap", "ItemGPS", "SOCOMD_Vest_TL", "SOCOMD_BERET", "zeus_earpiece" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools" };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS, "ACE_MapTools" };
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
	linkedItems[] 			= { CMD_UNIT_COMMON_LINKEDITEMS, "V_Press_F", "LOP_H_6B27M_UN" };
	respawnLinkedItems[] 	= { CMD_UNIT_COMMON_LINKEDITEMS, "V_Press_F", "LOP_H_6B27M_UN" };
	Items[] 				= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
	RespawnItems[] 			= { CMD_UNIT_COMMON_ITEMS, CMD_UNIT_COMMON_MEDS };
};
//ASORGS_Debug = true;

//EXPERIMENTAL - not recommended. Causes errors if mods aren't in Arma3 folder.
ASORGS_ShowModIcons = false;
ASORGS_NoModIcons = ["kart", "@HAFM_FIX", "@fhq_accessories"];
//========================================================Added in v1.4
 //Wait this many seconds for TFAR/ACRE to assign a radio before adding items. Can not re-open ASORGS during this time.
ASORGS_UniqueRadioWaitTime = 6;


//========================================================Changed in v1.3
//Disable loading unique TFAR/ACRE radios to prevent duplicate IDs being created (was ASORGS_DisableLoadingTFARRadios). 
ASORGS_DisableLoadingUniqueRadios = true;


ASORGS_ShowUniform = false;
ASORGS_ShowVest = false;
ASORGS_ShowBackpack = false;
ASORGS_ShowPrimaryWeapon = false;
ASORGS_ShowPrimaryAddons = true;
ASORGS_ShowLauncher= false;
ASORGS_ShowLauncherAddons = false;
ASORGS_ShowHeadgear = false;
ASORGS_ShowHandgun = false;
ASORGS_ShowHandgunAddons = true;
ASORGS_ShowExplosives = false;
ASORGS_ShowGrenades = false;
ASORGS_ShowExtraAmmo = false;
ASORGS_ShowExtraAttachments = false;
ASORGS_ShowGoggles = true;
ASORGS_ShowNightvision = false;
ASORGS_ShowBinoculars = false;
ASORGS_ShowMedical = false;
ASORGS_ShowMisc = false;

//========================================================New in v1.2
//Stop BTC revive from changing your gear.
ASORGS_BTCReviveWorkaround = true;

//========================================================New in v1.1
//Reapply gear that was selected when ASORGS was closed when respawning.
ASORGS_ReapplyOnRespawn = false;

//Weapons that get ASDG_JointRails attachments that don't work. ASORGS loads any ASDG_JointRails attachments for these guns. Doesn't effect anything if ASDG_JointRails isn't enabled.
ASORGS_IgnoreJointRails = ["caf_AK47", "caf_AK74", "caf_AK74gl", "caf_pkm", "caf_rpg7", "caf_rpk74", "caf_Strela", "caf_svd"];

//Uses the unit insignia as the background logo if they have one.
ASORGS_UnitInsigniaAsBackground = false;

//Allows player to choose/load insignia.
ASORGS_UnitInsigniaOption = true;

//========================================================New in v1.0
//VAS prefix to use for making saves compatible. default = "VAS"
ASORGS_VAS_Prefix = "NULL";

//Maximum number of save slots
ASORGS_SaveSlots = 0;
 
//Show the "weights" (backpack space taken) for relevant objects
ASORGS_ShowWeights = false;

//Items that belong in the grenades category
ASORGS_throwable =["HandGrenade_Stone","HandGrenade","MiniGrenade","SmokeShell","SmokeShellYellow","SmokeShellGreen","SmokeShellRed","SmokeShellPurple","SmokeShellOrange","SmokeShellBlue","Chemlight_green","Chemlight_red","Chemlight_yellow","Chemlight_blue","B_IR_Grenade","O_IR_Grenade","I_IR_Grenade","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_black","rhs_mag_nspd","rhs_mag_nspn_yellow","rhs_mag_nspn_red","rhs_mag_nspn_green","rhs_mag_fakel","rhs_mag_fakels","rhs_mag_zarya2","rhs_mag_plamyam","rhs_mag_mk84","AGM_HandFlare_White","AGM_HandFlare_Red","AGM_HandFlare_Green","AGM_HandFlare_Yellow","AGM_M84","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Yellow","ACE_M84"];

//Items that belong in the explosives category
ASORGS_explosives = ["ATMine_Range_Mag","APERSMine_Range_Mag","APERSBoundingMine_Range_Mag","SLAMDirectionalMine_Wire_Mag","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag","SatchelCharge_Remote_Mag","DemoCharge_Remote_Mag","IEDUrbanBig_Remote_Mag","IEDLandBig_Remote_Mag","IEDUrbanSmall_Remote_Mag","IEDLandSmall_Remote_Mag","rhs_mine_pmn2_mag","rhs_mine_tm62m_mag","rhs_mine_M19_mag"];

//Items that belong in the medical category
ASORGS_medical = ["x39_medikit", "x39_medikit2", "x39_medikit3", "x39_medikit4", "x39_medikit5", "x39_bloodbag", "x39_morphine", "x39_epinephrine", "x39_defibrillator", "x39_tourniquet", "x39_earplug", "x39_bandage", "FirstAidKit", "Medikit", "AGM_Bandage", "AGM_Bloodbag", "AGM_EarBuds", "AGM_Epipen", "AGM_Morphine", "x39_xms2_adrenaline", "x39_xms2_bandage", "x39_xms2_coldSpray", "x39_xms2_defibrillator", "x39_xms2_earplugs", "x39_xms2_heatPack", "x39_xms2_IVBag", "x39_xms2_mediPack", "x39_xms2_morphine", "x39_xms2_naloxone", "x39_xms2_sphygmomanometer", "x39_xms2_tourniquet","ACE_atropine","ACE_fieldDressing","ACE_elasticBandage","ACE_quikclot","ACE_bloodIV","ACE_bloodIV_500","ACE_bloodIV_250","ACE_bodyBag","ACE_bodyBagObject","ACE_epinephrine","ACE_morphine","ACE_packingBandage","ACE_personalAidKit","ACE_plasmaIV","ACE_plasmaIV_500","ACE_plasmaIV_250","ACE_salineIV","ACE_salineIV_500","ACE_salineIV_250","ACE_surgicalKit","ACE_tourniquet"];

//Items that for some reason get detected as something else (minedetector = launcher?). Forces them into Misc.
ASORGS_forceMisc = ["MineDetector", "AGM_SpareBarrel", "AGM_UAVBattery", "AGM_CableTie", "AGM_IR_Strobe_Item", "AGM_MapTools", "ToolKit", "AGM_Clacker", "AGM_DefusalKit", "AGM_ExplosiveItem", "AGM_ItemKestrel", "AGM_DeadManSwitch", "AGM_M26_Clacker", "cw_item_9liner_cas","cw_item_9liner_medivac","cw_item_notepad","cw_item_5liner_gcff","cw_item_cas_check_in_breef","ACE_ATragMX","ACE_IR_Strobe_Item","ACE_CableTie","ACE_Clacker","ACE_M26_Clacker","ACE_DefusalKit","ACE_DeadManSwitch","ACE_Cellphone","ACE_EarPlugs","ACE_Kestrel4500","ACE_UAVBattery","ACE_wirecutter","ACE_MapTools","ACE_microDAGR","ACE_RangeTable_82m","ACE_Altimeter","ACE_RangeCard" ];

//World names for maps that show the light too bright at night. Check the names with the 'worldName' command.
ASORGS_brightMaps = []; //pja305 v6 or less

//Prevent uniforms from the wrong side(s) being shown
ASORGS_UniformSideRestriction = true;

//Background logo. Can be in a mod or in a mission. .paa (recommended) or .jpg
ASORGS_BackgroundLogo = "A3\ui_f\data\Logos\arma3_expansion_ca.paa";
//ASORGS_BackgroundLogo = "clan_logo.jpg"; //Image in your mission folder.
//ASORGS_BackgroundLogo = "clan-textures\clan_logo.paa"; //Image in clan-textures.pbo addon

//Background tile (Arma 3 loading screen noise)
ASORGS_BackgroundTile = "A3\ui_f\data\GUI\cfg\LoadingScreens\loadingnoise_ca.paa";

ASORGS_Blacklist = [
	"rhsusf_acc_SFMB556",
	"rhsusf_acc_SF3P556",
	"rhsusf_acc_anpeq15_light",
	"acc_flashlight",
	"FHQ_optic_TWS3050",
	"optic_tws_mg",
	"optic_tws",
	"optic_Nightstalker",
	"UK3CB_BAF_SFFH",
	"UK3CB_BAF_BFA_L110",
	"G_Balaclava_blk",
	"G_Balaclava_combat",
	"G_Balaclava_lowprofile",
	"G_Balaclava_oli",
	"Balaclava_Black",
	"Kio_Balaclava_hex",
	"Kio_Balaclava_wcam",
	"R3F_OB50",
	"R3F_FELIN_DES",
	"R3F_FELIN",
	"Kio_Balaclava_blk",
	"Kio_Balaclava_blkSkull",
	"Kio_Balaclava_des",
	"Kio_Balaclava_grn",
	"Kio_Balaclava_multicam",
	"Kio_Balaclava_urbcam",
	"G_Goggles_VR",
	"G_Respirator_blue_F",
	"G_Respirator_white_F",
	"G_Respirator_yellow_F",
	"G_EyeProtectors_F",
	"G_EyeProtectors_Earpiece_F",
	"G_WirelessEarpiece_F",
	"VSM_FaceMask_black",
	"VSM_FaceMask_Ghost",
	"VSM_FaceMask_Ghost_olive",
	"VSM_FaceMask_Ghost_tan",
	"VSM_FaceMask_olive",
	"VSM_FaceMask_tan",
	"VSM_FaceMask_black_glasses",
	"VSM_FaceMask_OD_glasses",
	"VSM_FaceMask_tan_glasses",
	"VSM_FaceMask_black_goggles",
	"VSM_FaceMask_OD_goggles",
	"VSM_FaceMask_tan_goggles",
	"VSM_Shemagh_OD",
	"VSM_Shemagh_tan",
	"EWK_Cig1",
	"EWK_Cig2",
	"EWK_Cig3",
	"EWK_Cig4",
	"EWK_Glasses_Cig1",
	"EWK_Glasses_Cig2",
	"EWK_Glasses_Cig3",
	"EWK_Glasses_Cig4",
	"EWK_Cigar1",
	"EWK_Cigar2",
	"EWK_CigPack_Helmet",
	"EWK_CigPack_Helmet_OCP",
	"EWK_CigPack_Helmet2",
	"EWK_CigPack_Helmet2_OCP",
	"EWK_Glasses_Shemag_GRE_Cig6",
	"EWK_Glasses_Shemag_NB_Cig6",
	"EWK_Glasses_Shemag_tan_Cig6",
	"EWK_Shemag_tan_Cig6",
	"EWK_Shemag_NB_Cig6",
	"EWK_Shemag_GRE_Cig6",
	"EWK_Shemag_LULZ",
	"EWK_Shemag_GRE",
	"EWK_Shemag_tan",
	"EWK_Shemag_NB",
	"CUP_RUS_Balaclava_blk",
	"CUP_RUS_Balaclava_grn",
	"VSM_Shemagh_Facemask_OD",
	"VSM_Shemagh_Facemask_tan",
	"VSM_Shemagh_Facemask_OD_Glasses",
	"VSM_Shemagh_Facemask_tan_Glasses",
	"VSM_Shemagh_Facemask_OD_Goggles",
	"VSM_Shemagh_Facemask_tan_Goggles",
	"VSM_Shemagh_Facemask_OD_Peltor",
	"VSM_Shemagh_Facemask_tan_Peltor",
	"VSM_Shemagh_Facemask_OD_Peltor_Glasses",
	"VSM_Shemagh_Facemask_tan_Peltor_Glasses",
	"VSM_Shemagh_Facemask_OD_Peltor_Goggles",
	"VSM_Shemagh_Facemask_tan_Peltor_Goggles",
	"VSM_Shemagh_Glasses_OD",
	"VSM_Shemagh_Glasses_tan",
	"VSM_Shemagh_Goggles_OD",
	"VSM_Shemagh_Goggles_tan",
	"VSM_Thermal",
	"VSM_SkiMask_Black",
	"G_Lady_Blue",
	"50Suppressor_ej",
	"CUP_PMC_Facewrap_Black",
	"CUP_PMC_Facewrap_Red",
	"CUP_PMC_Facewrap_Ranger",
	"CUP_PMC_Facewrap_Skull",
	"CUP_PMC_Facewrap_Smilie",
	"CUP_PMC_Facewrap_Tan",
	"CUP_PMC_Facewrap_Tropical",
	"CUP_PMC_Facewrap_Winter"

];

//ASORGS_Blacklist_BLU_F = []; //hide items for all NATO (class name BLU_F) units

//You can also add a whitelist or blacklist per side, per faction and/or per unit type. Items in this list MUST also be in ASORGS_Whitelist if it exists.
//ASORGS_Whitelist_WEST = [];
//ASORGS_Whitelist_EAST = [];
//ASORGS_Whitelist_GUER = [];
//ASORGS_Whitelist_BLU_F = []; //show items for all NATO (class name BLU_F) units
//ASORGS_Whitelist_B_Soldier_F = []; //only for B_Soldier_F

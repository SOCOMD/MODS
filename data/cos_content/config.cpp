////////////////////////////////////////////////////////////////////
//DeRap: cos_content\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Sun Mar 01 22:04:10 2020 : 'file' last modified on Sat Apr 07 07:58:32 2018
////////////////////////////////////////////////////////////////////

#define _ARMA_

class DefaultEventhandlers;
class CfgPatches
{
	class cos_content
	{
		requiredAddons[] = {"A3_Air_F"};
		requiredVersion = 0.1;
		units[] = {"NonSteerable_Parachute_F","Steerable_Parachute_F"};
		version = "20-05-2016";
		author = "Sakuraba_and_author_in_credits";
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class CfgVehicles
{
	class B_Kitbag_Base;
	class B_AssaultPack_mcamo;
	class B_Bergen_Base_F;
	class Steerable_Parachute_F;
	class ParachuteBase;
	class B_Parachute;
	class SOCOMD_PARA_VOILE: Steerable_Parachute_F
	{
		author = "Sakuraba";
		_generalMacro = "SOCOMD_PARA_VOILE";
		scope = 1;
		displayName = "PARACHUTE";
		model = "\cos_content\PARA_VOILE";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"cos_content\data\parachute\Parachute_co.paa"};
	};
	class SOCOMD_COS_PARACHUTE: B_Parachute
	{
		author = "";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		_generalMacro = "SOCOMD_COS_PARACHUTE";
		displayName = "SOCOMD PARACHUTE";
		model = "\cos_content\COS_PARACHUTE";
		ParachuteClass = "SOCOMD_PARA_VOILE";
		descriptionShort = "Parachute Backpack";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		editorPreview = "\Mod\ui\para_preview.jpg";
	};
	class SOCOMD_COS_PARACHUTE_RESERVE: SOCOMD_COS_PARACHUTE {
		_generalMacro = "SOCOMD_COS_PARACHUTE_RESRVE";
		displayName = "RESERVE PARACHUTE";
	};
	class Weapon_Bag_Base;
	class B_Bergen_Base;
	class SOCOMD_drybag_od: B_Bergen_Base
	{
		author = ".../modifiedbySakuraba";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		icon = "iconBackpack";
		transportMaxWeapons = 2;
		transportMaxMagazines = 30;
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		vehicleClass = "Backpacks";
		allowedSlots[] = {901};
		_generalMacro = "drybag_od ";
		displayName = ".drybag_od ";
		picture = "cos_content\data\icon\ic_drybag_OD.ca.paa";
		model = "cos_content\drybag";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"cos_content\data\drybag\DryBag_od_co.paa"};
		hiddenSelectionsMaterials[] = {"cos_content\data\drybag\drybag.rvmat"};
		hiddenUnderwaterSelections[] = {"hide"};
		shownUnderwaterSelections[] = {"unhide","unhide2"};
		hiddenUnderwaterSelectionsTextures[] = {"cos_content\data\halo\diver_kit_co.paa","cos_content\data\halo\diver_kit_co.paa","A3\characters_f\data\visors_ca.paa"};
		
		mass = 33;
	};
	class SOCOMD_drybag_blk: SOCOMD_drybag_od
	{
		displayName = ".drybag_blk";
		picture = "cos_content\data\icon\ic_drybag_blk.ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"cos_content\data\drybag\DryBag_blk_co.paa"};
		hiddenSelectionsMaterials[] = {"cos_content\data\drybag\drybag.rvmat"};
		hiddenUnderwaterSelections[] = {"hide"};
		shownUnderwaterSelections[] = {"unhide","unhide2"};
		hiddenUnderwaterSelectionsTextures[] = {"cos_content\data\halo\diver_kit_co.paa","cos_content\data\halo\diver_kit_co.paa","A3\characters_f\data\visors_ca.paa"};
		
		mass = 33;
	};
};
class cfgMods
{
	author = "sakuraba";
	timepacked = "1523060912";
};

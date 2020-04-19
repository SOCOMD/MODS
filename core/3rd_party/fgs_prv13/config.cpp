////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.35
//Produced on Thu Apr 02 19:39:59 2020 : last modified on Thu Apr 02 19:39:59 2020
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_
#include "predefined.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgEditorSubcategories.hpp"
//Class fgs_prv13 : config.bin{
class BIS_AddonInfo
{
	author = "LuckyShowTV";
	timepacked = "1585569940";
};
class CfgPatches
{
	class FgS_prv13
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Structures_F"};
	};
};
class CfgSounds
{
	class Engines13
	{
		name = "$STR_Engines13";
		sound[] = {"\FgS_prv13\Sounds\Engines13.wav",1.9952624,1,250};
		titles[] = {};
	};
	class Engines13_3
	{
		name = "$STR_Engines13_3";
		sound[] = {"\FgS_prv13\Sounds\Engines13_3.wav",1.9952624,1,250};
		titles[] = {};
	};
	class Engines13_4
	{
		name = "$STR_Engines13_4";
		sound[] = {"\FgS_prv13\Sounds\Engines13_4.wav",1.9952624,1,250};
		titles[] = {};
	};
};
class CfgVehicleClasses
{
	class RadarPRV13
	{
		DisplayName = "$STR_PRV13_radar";
	};
};
class CfgVehicles
{
	class Static;
	class Radar_System_02_base_F;
	class FgS_prv13ver1: Static
	{
		scope = 0;
		vehicleClass = "RadarPRV13";
		destrType = "DestructWreck";
		model = "\FgS_prv13\PRV13v1.p3d";
		icon = "\FgS_prv13\Textures\Icon\icon.paa";
		mapsize = 23;
		ladders[] = {{"start1","end1"},{"start2","end2"}};
		displayName = "$STR_PRV13_Radar1";
	};
	class FgS_prv13ver2: Static
	{
		scope = 0;
		destrType = "DestructWreck";
		vehicleClass = "RadarPRV13";
		model = "\FgS_prv13\prv13v2.p3d";
		displayName = "$STR_PRV13_radar2";
		icon = "\FgS_prv13\Textures\Icon\icon2.paa";
		mapsize = 23;
		ladders[] = {{"start1","end1"},{"start2","end2"}};
		class EventHandlers
		{
			//init = "(_this select 0) execVM '\FgS_prv13\Engines13_sound.sqf'";
		};
	};
	class FgS_prv13ver3: Radar_System_02_base_F
	{
		scope=public;
		scopeCurator=public;
		author="SOCOMD Radar";
		displayName = "$STR_PRV13_radar3";
		faction = "SOCOMD";
		side=EAST;
		editorCategory = SOCOMD_EdCat_Core;
		editorSubcategory = SOCOMD_EdSubcat_Radar_Obj;
		destrType = "DestructWreck";
		vehicleClass = "RadarPRV13";
		model = "\FgS_prv13\prv13v3.p3d";
		icon = "\FgS_prv13\Textures\Icon\icon3.paa";
		mapsize = 23;
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		//ladders[] = {{""}};
		ladders[] = {{"start1","end1"},{"start2","end2"}};
		class EventHandlers
		{
			//init = "(_this select 0) execVM '\FgS_prv13\Engines13_3_sound.sqf'";
		};
		class Components {
			class SensorsManagerComponent {
				class Components {
					class ActiveRadarSensorComponent {
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = 0.5;
						maxGroundNoiseDistance = 200;
						maxSpeedThreshold = 27.7778;
						maxTrackableATL = 10000000000;
						maxTrackableSpeed = 1388.89;
						minSpeedThreshold = 20.8333;
						minTrackableATL = -10000000000;
						minTrackableSpeed = -10000000000;
						typeRecognitionDistance = 6000;
						class AirTarget {
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class DataLinkSensorComponent {
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "DataLinkSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 10000000000;
						maxTrackableSpeed = 10000000000;
						minSpeedThreshold = 0;
						minTrackableATL = -10000000000;
						minTrackableSpeed = -10000000000;
						typeRecognitionDistance = 0;
						class AirTarget {
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class PassiveRadarSensorComponent {
						aimDown = 0;
						allowsMarking = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0.5,1,0.5,0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 10000000000;
						maxTrackableSpeed = 10000000000;
						minSpeedThreshold = 0;
						minTrackableATL = -10000000000;
						minTrackableSpeed = -10000000000;
						typeRecognitionDistance = 6000;
						class AirTarget {
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class FgS_prv13ver4: Radar_System_02_base_F
	{
		scope=public;
		scopeCurator=public;
		author="SOCOMD Radar";
		displayName = "$STR_PRV13_radar4";
		faction = "SOCOMD";
		side=EAST;
		typicalCargo[] = {"O_UAV_AI"};
		crew = "O_UAV_AI";
		editorCategory = SOCOMD_EdCat_Core;
		editorSubcategory = SOCOMD_EdSubcat_Radar_Obj;
		destrType = "DestructWreck";
		vehicleClass = "RadarPRV13";
		model = "\FgS_prv13\prv13v4.p3d";
		icon = "\FgS_prv13\Textures\Icon\icon4.paa";
		mapsize = 23;
		//ladders[] = {{""}};
		ladders[] = {{"start1","end1"},{"start2","end2"}};
		class EventHandlers
		{
			//init = "(_this select 0) execVM '\FgS_prv13\Engines13_4_sound.sqf'";
		};
		class Components {
			class SensorsManagerComponent {
				class Components {
					class ActiveRadarSensorComponent {
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = 0.5;
						maxGroundNoiseDistance = 200;
						maxSpeedThreshold = 27.7778;
						maxTrackableATL = 10000000000;
						maxTrackableSpeed = 1388.89;
						minSpeedThreshold = 20.8333;
						minTrackableATL = -10000000000;
						minTrackableSpeed = -10000000000;
						typeRecognitionDistance = 9000;
						class AirTarget {
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class DataLinkSensorComponent {
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "DataLinkSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 10000000000;
						maxTrackableSpeed = 10000000000;
						minSpeedThreshold = 0;
						minTrackableATL = -10000000000;
						minTrackableSpeed = -10000000000;
						typeRecognitionDistance = 0;
						class AirTarget {
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
					class PassiveRadarSensorComponent {
						aimDown = 0;
						allowsMarking = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0.5,1,0.5,0.5};
						componentType = "PassiveRadarSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 10000000000;
						maxTrackableSpeed = 10000000000;
						minSpeedThreshold = 0;
						minTrackableATL = -10000000000;
						minTrackableSpeed = -10000000000;
						typeRecognitionDistance = 9000;
						class AirTarget {
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							maxRange = 9000;
							minRange = 9000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
};
class cfgMods
{
	author = "LuckyShowTV";
	timepacked = "1585827599";
};
//};

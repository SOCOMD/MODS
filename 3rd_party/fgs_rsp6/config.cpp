#include "predefined.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgEditorSubcategories.hpp"

class CfgPatches
{
	class FgS_rsp6
	{
		units[]={"FgS_rsp6"};
		weapons[]={};
		requiredAddons[]={};
	};
};
class CfgSounds
{
	class Engines
	{
		name="$STR_Engines";
		sound[]=
		{
			"\FgS_rsp6\Sounds\Engines.wav",
			1.9952624,
			1,
			250
		};
		titles[]={};
	};
	class Generator
	{
		name="$STR_Generator";
		sound[]=
		{
			"\FgS_rsp6\Sounds\Generator.wav",
			1.9952624,
			1,
			250
		};
		titles[]={};
	};
};
class CfgVehicleClasses
{
	class RadarRsp6
	{
		DisplayName="$STR_rsp6_main";
	};
};
class CfgVehicles
{
	class Static;
	class Radar_System_02_base_F;
	class FgS_rsp6: Radar_System_02_base_F
	{
		scope=public;
		scopeCurator=public;
		author="SOCOMD Radar";
		displayName="$STR_Rsp6_Radar";
		faction = "SOCOMD";
		side=EAST;
		editorCategory = SOCOMD_EdCat_Core;
		editorSubcategory = SOCOMD_EdSubcat_Radar_Obj;
		model="\FgS_rsp6\RSP6.p3d";
		icon="\FgS_rsp6\Icon_a.paa";
		armor=100;
		destrType="DestructWreck";
		vehicleClass="RadarRsp6";
		typicalCargo[] = {"O_UAV_AI"};
		crew = "O_UAV_AI";
		mapsize=23;
		
		ladders[]=
		{
			
			{
				"lad1_beg",
				"lad1_end"
			}
		};
		class EventHandlers
		{
			//init="(_this select 0) execVM '\FgS_rsp6\Engines_sound.sqf'";
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
						typeRecognitionDistance = 12000;
						class AirTarget {
							maxRange = 12000;
							minRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							maxRange = 12000;
							minRange = 12000;
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
							maxRange = 12000;
							minRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							maxRange = 12000;
							minRange = 12000;
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
						typeRecognitionDistance = 12000;
						class AirTarget {
							maxRange = 12000;
							minRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget {
							maxRange = 12000;
							minRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		};
	};
	class FgS_rsp6_2: Static
	{
		scope=0;
		armor=100;
		vehicleClass="RadarRsp6";
		icon="\FgS_rsp6\Icon_b.paa";
		mapsize=23;
		model="\FgS_rsp6\RSP6_2.p3d";
		displayName="$STR_Rsp6_Generator";
		ladders[]=
		{
			
			{
				"lad1_beg",
				"lad1_end"
			}
		};
		class EventHandlers
		{
			//init="(_this select 0) execVM '\FgS_rsp6\generator_sound.sqf'";
		};
	};
};
class cfgMods
{
	author="LuckyShowTV";
	timepacked="1585591295";
};

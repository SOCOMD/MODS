////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.35
//Produced on Sun Nov 18 03:17:52 2018 : last modified on Sun Nov 18 03:17:52 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class vtn_armorw_lav25_cf : config.bin{
class EventHandlers;
class DefaultEventhandlers;
class CfgPatches
{
	class vtn_armorw_lav25_cf
	{
		units[] = {"VTN_LAV25A1_DES","VTN_LAV25A1_WDL"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Armor_F_AMV","A3_Armor_F","A3_Soft_F"};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class ViewOptics;
class ViewGunner;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		LAV25_Driver = "LAV25_Driver";
		LAV25_Gunner = "LAV25_Gunner";
		LAV25_Commander = "LAV25_Commander";
		LAV25_Driver_out = "LAV25_Driver_out";
		LAV25_Gunner_out = "LAV25_Gunner_out";
		LAV25_Commander_out = "LAV25_Commander_out";
		Stryker_Cargo01 = "Stryker_Cargo01";
		Stryker_Cargo01_V5 = "Stryker_Cargo01_V5";
		Stryker_Cargo01_V6 = "Stryker_Cargo01_V6";
	};
	class Actions
	{
		class CargoActions;
		class LAV25DriverActions: CargoActions
		{
			Die = "KIA_LAV25_Driver";
			Unconscious = "KIA_LAV25_Driver";
		};
		class LAV25GunnerActions: CargoActions
		{
			Die = "KIA_LAV25_Gunner";
			Unconscious = "KIA_LAV25_Gunner";
		};
		class LAV25CommanderActions: CargoActions
		{
			Die = "KIA_LAV25_commander";
			Unconscious = "KIA_LAV25_commander";
		};
		class LAV25CargoActions: CargoActions
		{
			Die = "KIA_Stryker_Cargo01";
			Unconscious = "KIA_Stryker_Cargo01";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class KIA_LAV25_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\vtn_armorw_lav25_cf\anim\kia_lav25_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LAV25_Driver: Crew
		{
			actions = "LAV25DriverActions";
			file = "\vtn_armorw_lav25_cf\Anim\lav25_driver.rtm";
			interpolateTo[] = {"KIA_LAV25_Driver",1};
		};
		class LAV25_Driver_out: Crew
		{
			actions = "LAV25DriverActions";
			file = "vtn_armorw_lav25_cf\Anim\lav25_driver_turnout.rtm";
			interpolateTo[] = {"KIA_LAV25_Driver",1};
		};
		class KIA_LAV25_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\vtn_armorw_lav25_cf\anim\kia_lav25_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LAV25_Gunner: Crew
		{
			actions = "LAV25GunnerActions";
			file = "\vtn_armorw_lav25_cf\Anim\lav25_Gunner.rtm";
			interpolateTo[] = {"KIA_LAV25_Gunner",1};
		};
		class LAV25_Gunner_out: Crew
		{
			actions = "LAV25GunnerActions";
			file = "\vtn_armorw_lav25_cf\Anim\lav25_gunner_turnout.rtm";
			interpolateTo[] = {"KIA_LAV25_Gunner",1};
		};
		class KIA_LAV25_commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\vtn_armorw_lav25_cf\anim\kia_lav25_commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LAV25_commander: Crew
		{
			actions = "LAV25CommanderActions";
			file = "\vtn_armorw_lav25_cf\Anim\lav25_commander.rtm";
			interpolateTo[] = {"KIA_LAV25_commander",1};
		};
		class LAV25_commander_out: Crew
		{
			actions = "LAV25CommanderActions";
			file = "\vtn_armorw_lav25_cf\Anim\lav25_commander_turnout.rtm";
			interpolateTo[] = {"KIA_LAV25_commander",1};
		};
		class KIA_Stryker_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\vtn_armorw_lav25_cf\Anim\KIA_Stryker_Cargo01.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class Stryker_Cargo01: Crew
		{
			actions = "LAV25CargoActions";
			file = "\vtn_armorw_lav25_cf\Anim\Stryker_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1,"Stryker_Cargo01_V1",0.1,"Stryker_Cargo01_V2",0.1,"Stryker_Cargo01_V3",0.1,"Stryker_Cargo01_V4",0.1};
			equivalentTo = "Stryker_Cargo01";
			variantsAI[] = {"Stryker_Cargo01",0.6,"Stryker_Cargo01_V1",0.1,"Stryker_Cargo01_V2",0.1,"Stryker_Cargo01_V3",0.1,"Stryker_Cargo01_V4",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class Stryker_Cargo01_V1: Stryker_Cargo01
		{
			file = "\vtn_armorw_lav25_cf\Anim\Stryker_Cargo01_V1.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.236;
			variantAfter[] = {4,4,4};
		};
		class Stryker_Cargo01_V2: Stryker_Cargo01
		{
			file = "\vtn_armorw_lav25_cf\Anim\Stryker_Cargo01_V2.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.169;
			variantAfter[] = {6,6,6};
		};
		class Stryker_Cargo01_V3: Stryker_Cargo01
		{
			file = "\vtn_armorw_lav25_cf\Anim\Stryker_Cargo01_V3.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class Stryker_Cargo01_V4: Stryker_Cargo01
		{
			file = "\vtn_armorw_lav25_cf\Anim\Stryker_Cargo01_V4.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class Stryker_Cargo01_V5: Crew
		{
			actions = "LAV25CargoActions";
			file = "\vtn_armorw_lav25_cf\Anim\Stryker_Cargo01_V5.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
		};
		class Stryker_Cargo01_V6: Crew
		{
			actions = "LAV25CargoActions";
			file = "\vtn_armorw_lav25_cf\Anim\Stryker_Cargo01_V6.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
		};
	};
};
class Mode_SemiAuto
{
	displayName = "Semi Auto";
	textureType = "semi";
	recoil = "recoil_single_primary_3outof10";
	recoilProne = "recoil_single_primary_prone_3outof10";
	aiDispersionCoefY = 1.7;
	aiDispersionCoefX = 1.4;
	soundBurst = 0;
	requiredOpticType = -1;
	aiRateOfFire = 2;
	aiRateOfFireDistance = 500;
};
class Mode_Burst: Mode_SemiAuto
{
	displayName = "Burst Mode";
	textureType = "burst";
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	aiDispersionCoefY = 2.4;
	aiDispersionCoefX = 1.9;
	soundBurst = 0;
};
class Mode_FullAuto: Mode_SemiAuto
{
	displayName = "Full Auto";
	textureType = "fullAuto";
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	aiDispersionCoefY = 3;
	aiDispersionCoefX = 2;
	soundBurst = 0;
};
class CfgWeapons {
	class MGun;
	class SmokeLauncher;
	class VTN_M257SGL: SmokeLauncher {
		scope = 2;
		autofire = 0;
		canlock = 0;
		displayName = "M257S GL";
		displayNameShort = "M257S GL";
		magazines[] = {"VTN_M81","VTN_M82","VTN_M90"};
		magazinereloadtime = 0;
		reloadtime = 1;
		maxrange = 50;
		minrange = 0;
		showtoplayer = 1;
		simulation = "cmlauncher";
		sound[] = {"A3\sounds_f\Weapons\grenades\ugl_shot_4",1.12202,1,200};
		texturetype = "semi";
		weaponsoundeffect = "DefaultRifle";
	};

	class autocannon_Base_F;
	class VTN_M242: autocannon_Base_F {
		displayname = "M242 Bushmaster";
		displaynameShort = "M242 Bushmaster";
		class GunParticles
		{
			class Effect1
			{
				positionName = "Cloud3";
				directionName = "Cloud";
				effectName = "MachineGun1";
			};
			class Effect2
			{
				positionName = "Cloud2";
				directionName = "Cloud";
				effectName = "MachineGun1";
			};
			class Effect3
			{
				positionName = "Cloud1";
				directionName = "Cloud";
				effectName = "MachineGunCloud";
			};
			class Effect4
			{
				positionName = "Cloud3";
				directionName = "Cloud";
				effectName = "MachineGun1";
			};
			class Effect5
			{
				positionName = "Cloud2";
				directionName = "Cloud";
				effectName = "MachineGun1";
			};
			class Effect6
			{
				positionName = "Cloud1";
				directionName = "Cloud";
				effectName = "MachineGunCloud";
			};
			class Shell
			{
				positionName = "shell_eject_pos";
				directionName = "shell_eject_dir";
				effectName = "";
			};
		};
		muzzles[] = {"VTN_M242"};
		class VTN_M242: autocannon_Base_F
		{
			displayname = "M242 Bushmaster";
			displaynameShort = "M242 Bushmaster";
			magazines[] = {"VTN_M242_150_APDST","VTN_M242_150_APFSDST","VTN_M242_60_HEIT"};
			modes[] = {"SingleROF","LowROF","HighROF","close","short","medium","far"};
			namesound = "cannon";
			reloadtime = 0.02;
			magazineReloadTime = "60/50";
			scope = 1;
			class GunParticles
			{
				class Effect1
				{
					positionName = "Cloud2";
					directionName = "Cloud3";
					effectName = "MachineGunCloud";
				};
				class Effect2
				{
					positionName = "Cloud3";
					directionName = "Cloud2";
					effectName = "MachineGunCloud";
				};
				class Effect3
				{
					positionName = "Cloud";
					directionName = "Cloud1";
					effectName = "MachineGunCloud";
				};
				class effect4
				{
					directionname = "konec hlavne";
					effectname = "PistolCloud";
					positionname = "usti hlavne";
				};
			};
			shotfromturret = 1;
			class SingleROF: Mode_SemiAuto
			{
				aidispersioncoefx = 6;
				aidispersioncoefy = 6;
				dispersion = 0.0005;
				ffcount = 6;
				fffrequency = 11;
				ffmagnitude = 0.5;
				flash = "gunfire";
				flashsize = 0.1;
				maxrange = 3;
				maxrangeprobab = 0.004;
				midrange = 2;
				midrangeprobab = 0.06;
				minrange = 1;
				minrangeprobab = 0.06;
				recoil = "Empty";
				reloadtime = "60/50";
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					weaponSoundEffect = "DefaultRifle";
					closure1[] = {"vtn_armorw_lav25_cf\sounds\x_bis_30mm_022.wav",5.32202,0.9,220};
					closure2[] = {"vtn_armorw_lav25_cf\sounds\x_bis_30mm_022.wav",5.32202,0.95,220};
					soundclosure[] = {"closure1",1};
					soundcontinuous = 0;
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"vtn_armorw_lav25_cf\sounds\fm_m230_s7.wav",5.32202,1.2,3000};
					soundBegin[] = {"begin1",1};
				};
			};
			class LowROF: Mode_FullAuto
			{
				aidispersioncoefx = 6;
				aidispersioncoefy = 6;
				textureType = "fullAuto";
				dispersion = 0.005;
				ffcount = 6;
				fffrequency = 11;
				ffmagnitude = 0.5;
				flash = "gunfire";
				flashsize = 0.1;
				maxrange = 3;
				maxrangeprobab = 0.004;
				midrange = 2;
				midrangeprobab = 0.06;
				minrange = 1;
				minrangeprobab = 0.06;
				recoil = "Empty";
				reloadtime = "60/100";
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					weaponSoundEffect = "DefaultRifle";
					closure1[] = {"vtn_armorw_lav25_cf\sounds\x_bis_30mm_022.wav",5.32202,0.9,220};
					closure2[] = {"vtn_armorw_lav25_cf\sounds\x_bis_30mm_022.wav",5.32202,0.95,220};
					soundclosure[] = {"closure1",1};
					soundcontinuous = 0;
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"vtn_armorw_lav25_cf\sounds\fm_m230_s7.wav",5.32202,1.2,3000};
					soundBegin[] = {"begin1",1};
				};
			};
			class HighROF: Mode_FullAuto
			{
				textureType = "fastAuto";
				displayname = "2A42 TEMPB";
				displaynameShort = "2A42 TEMPB";
				dispersion = 0.0075;
				maxrange = 3;
				maxrangeprobab = 0.004;
				midrange = 2;
				midrangeprobab = 0.058;
				minrange = 1;
				minrangeprobab = 0.08;
				reloadtime = "60/200";
				sounds[] = {"StandardSound"};
				class BaseSoundModeType
				{
					weaponSoundEffect = "DefaultRifle";
					closure1[] = {"vtn_armorw_lav25_cf\sounds\x_bis_30mm_022.wav",5.32202,0.9,220};
					closure2[] = {"vtn_armorw_lav25_cf\sounds\x_bis_30mm_022.wav",5.32202,0.95,220};
					soundclosure[] = {"closure1",1};
					soundcontinuous = 0;
				};
				class StandardSound: BaseSoundModeType
				{
					begin1[] = {"vtn_armorw_lav25_cf\sounds\fm_m230_s7.wav",5.32202,1.2,3000};
					soundBegin[] = {"begin1",1};
				};
			};
			class close: HighROF
			{
				airateoffire = 3;
				airateoffiredistance = 50;
				burst = 3;
				reloadtime = 0.6;
				maxrange = 1000;
				maxrangeprobab = 0.04;
				midrange = 500;
				midrangeprobab = 0.58;
				minrange = 0;
				minrangeprobab = 0.05;
				showtoplayer = 0;
				soundburst = 0;
			};
			class short: close
			{
				airateoffire = 4;
				airateoffiredistance = 300;
				burst = 4;
				maxrange = 1500;
				maxrangeprobab = 0.04;
				midrange = 1000;
				midrangeprobab = 0.58;
				minrange = 500;
				minrangeprobab = 0.05;
			};
			class medium: LowROF
			{
				airateoffire = 5;
				airateoffiredistance = 600;
				burst = 5;
				maxrange = 2000;
				maxrangeprobab = 0.04;
				midrange = 1500;
				midrangeprobab = 0.58;
				minrange = 1000;
				minrangeprobab = 0.05;
				showtoplayer = 0;
				soundburst = 0;
			};
			class far: medium
			{
				airateoffire = 7;
				airateoffiredistance = 1000;
				burst = 7;
				maxrange = 3000;
				maxrangeprobab = 0.01;
				midrange = 2500;
				midrangeprobab = 0.4;
				minrange = 1500;
				minrangeprobab = 0.05;
			};
		};
	};
	class LMG_M200;
	class VTN_M240: LMG_M200
	{
		scope = 1;
		bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\bullets\7_62-metal2",1,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\bullets\7_62-metal3",1,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\bullets\7_62-metal4",1,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\bullets\7_62-metal1",1,1,15};
		displayname = "M240";
		displaynameShort = "M240";
		magazinereloadtime = 5;
		magazines[] = {"VTN_M240_440_AP","VTN_M240_220_AP"};
		modes[] = {"manual","close","short","medium","far"};
		soundbullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class GunClouds{};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne1";
				directionName = "konec hlavne1";
				effectName = "MachineGunCloud";
			};
		};
		class manual: MGun
		{
			displayname = "M240";
			displaynameShort = "M240";
			reloadTime = 0.1;
			dispersion = 0.0035;
			burst = 1;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
			aiBurstTerminable = 1;
			soundContinuous = 0;
			soundBurst = 0;
		};
		class short: close
		{
			burst = 4;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
			aiBurstTerminable = 1;
			soundContinuous = 0;
			soundBurst = 0;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiBurstTerminable = 1;
			soundContinuous = 0;
			soundBurst = 0;
		};
		class far: close
		{
			burst = 7;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 850;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
			aiBurstTerminable = 1;
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	class VTN_M240C: VTN_M240
	{
		magazines[] = {"VTN_M240_440_AP","VTN_M240_220_AP"};
		class GunParticles
		{
			class SecondEffect
			{
				positionName = "nabojnicestart2";
				directionName = "nabojniceend2";
				effectName = "MachineGunEject1";
			};
			class SecondEffect1
			{
				positionName = "nabojnicestart1";
				directionName = "nabojniceend1";
				effectname = "MachineGunCartridge2";
			};
			class effect1
			{
				positionName = "usti hlavne1";
				directionName = "konec hlavne1";
				effectName = "MachineGunCloud";
			};
		};
	};
};
class CfgMagazines {
	class SmokeLauncherMag;
	class VTN_M81: SmokeLauncherMag
	{
		scope = 2;
		displayname = "M81";
		displaynameShort = "M81";
		ammo = "VTN_M81_IRR";
		count = 1;
		nameSound = "smokeshell";
		initSpeed = 36;
	};
	class VTN_M82: VTN_M81
	{
		displayname = "M82";
		displaynameShort = "M82";
		ammo = "VTN_M82_SMW";
	};
	class VehicleMagazine;
	class VTN_M240_440_AP: VehicleMagazine
	{
		author = "SOCOMD";
		scope = 2;
		displayName = "762x51 AP";
		displaynameShort = "762x51 AP";
		ammo = "VTN_762x51_Ball_AP";
		count = 440;
		
		tracersEvery = 5;
		lastRoundsTracer = 5;
		initSpeed = 820;
	};
	class VTN_M240_220_AP: VTN_M240_440_AP
	{
		author = "SOCOMD";
		count = 220;
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red;
	class VTN_M242_150_APDST: 60Rnd_30mm_APFSDS_shells_Tracer_Red
	{
		scope = 2;
		ammo = "VTN_25x137_Ball_AP1";
		count = 150;
		displayname = "M791 APDS-T";
		displaynameShort = "M791 APDS-T";
		initspeed = 1345;
		namesound = "cannon";
		tracersevery = 1;
	};
	class VTN_M242_150_APFSDST: VTN_M242_150_APDST
	{
		ammo = "VTN_25x137_Ball_AP2";
		displayname = "M919 APFSDST";
		displaynameShort = "M919 APFSDST";
		initspeed = 1420;
	};
	class VTN_M242_60_HEIT: VTN_M242_150_APDST
	{
		ammo = "VTN_25x137_Ball_HE";
		count = 60;
		displayname = "M792 HEIT";
		displaynameShort = "M792 HEIT";
		initspeed = 1100;
	};
};

class CfgAmmo {
	class SmokeLauncherAmmo;
	class VTN_M81_IRR: SmokeLauncherAmmo
	{
		airfriction = -0.1;
		effectssmoke = "EmptyEffect";
		hit = 1;
		indirecthit = 0;
		indirecthitrange = 0;
		explosionTime = 0.001;
		initTime = 0;
		maxcontrolrange = 50;
		model = "\A3\weapons_f\empty";
		muzzleeffect = "BIS_fnc_effectSmokeM81";
		simulation = "shotCM";
		thrusttime = 0;
		timetolive = 20;
		weaponlocksystem = "1 + 4";
	};
	class VTN_M82_SMW: VTN_M81_IRR
	{
		timetolive = 52.5;
		muzzleeffect = "BIS_fnc_effectSmokeM90";
	};

	class B_762x51_Ball;
	class VTN_762x51_Ball_SC: B_762x51_Ball {
		airFriction = -0.000955;
		waterFriction = -0.35;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64";
		hit = 12;
		caliber = 1.575;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_m240";
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 760;
		timeToLive = 30;
		dangerRadiusBulletClose = 0.5;
		dangerRadiusHit = -1;
		suppressionRadiusBulletClose = 0.5;
		suppressionRadiusHit = 0.5;
		class CamShakeExplode
		{
			power = "(8^0.5)";
			duration = "((round (8^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class VTN_762x51_Ball_TRCD: VTN_762x51_Ball_SC
	{
		airFriction = -0.000925;
		hit = 10;
		caliber = 1.5;
		model = "\vtn_armorw_lav25_md\vtn_tracer_red";
		tracerScale = 0.37;
		tracerStartTime = 0.01;
		tracerEndTime = 1.42;
		nvgOnly = 1;
	};
	class VTN_762x51_Ball_TRC: VTN_762x51_Ball_SC
	{
		airFriction = -0.000925;
		hit = 11;
		caliber = 1.525;
		model = "\vtn_armorw_lav25_md\vtn_tracer_red";
		tracerScale = 0.8;
		tracerStartTime = 0.085;
		tracerEndTime = 1.55;
		nvgOnly = 0;
		explosive = 0.0001;
		explosioneffects = "";
		cratereffects = "ExploAmmoCrater";
	};
	class VTN_762x51_Ball_AP: VTN_762x51_Ball_TRC
	{
		airFriction = -0.000985;
		waterFriction = -0.4;
		hit = 15;
		caliber = 1.725;
	};
	class B_30mm_AP;
	class VTN_25x137_Ball_AP1: B_30mm_AP
	{
		airfriction = -1e-005;
		airlock = 1;
		audiblefire = 32;
		allowAgainstInfantry = 0;
		aiAmmoUsageFlags = "128 + 512";
		cost = 20;
		explosive = 0;
		hit = 75;
		indirecthit = 10;
		indirecthitrange = 0.05;
		caliber = 4.5;
		model = "\vtn_armorw_lav25_md\vtn_tracer_red_ball";
		multisoundhit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.1,"soundHit5",0.15,"soundHit6",0.15};
		muzzleeffect = "";
		soundhit1[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_1",3.16228,1,1800};
		soundhit2[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_2",3.16228,1,1800};
		soundhit3[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_3",3.16228,1,1800};
		soundhit4[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_4",3.16228,1,1800};
		soundhit5[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_5",3.16228,1,1800};
		soundhit6[] = {"A3\Sounds_F\weapons\Explosion\gr_explosion_6",3.16228,1,1800};
		tracerscale = 1.2;
		tracerstarttime = 0.05;
		tracerendtime = 1.75;
		nvgOnly = 0;
		typicalspeed = 1345;
		visiblefire = 32;
		visiblefiretime = 4;
		craterEffects = "ImpactEffectsMedium";
		craterWaterEffects = "ImpactEffectsWater";
		timeToLive = 30;
		class HitEffects
		{
			default_mat = "ImpactEffectsGroundSabot";
			hit_foliage_dead = "ImpactLeavesDead";
			hit_foliage_green = "ImpactLeavesGreen";
			hit_foliage_green_big = "ImpactLeavesGreenBig";
			hit_foliage_palm = "ImpactLeavesPalm";
			hit_foliage_pine = "ImpactLeavesPine";
			hitbuilding = "ImpactConcreteSabotSmall";
			hitconcrete = "ImpactConcreteSabotSmall";
			hitfoliage = "ImpactLeaves";
			hitglass = "ImpactGlass";
			hitglassarmored = "ImpactGlassThin";
			hitgroundhard = "ImpactEffectsGroundSabot";
			hitgroundsoft = "ImpactEffectsGroundSabot";
			hitman = "ImpactEffectsBlood";
			hitmetal = "ImpactMetalSabotSmall";
			hitmetalplate = "ImpactMetalSabotSmall";
			hitplastic = "ImpactPlastic";
			hitrubber = "ImpactRubber";
			hitwater = "ImpactEffectsWater";
			hitwood = "ImpactWood";
		};
		class CamShakeExplode
		{
			distance = 1;
			duration = 1;
			frequency = 20;
			power = 5;
		};
		class CamShakeFire
		{
			distance = 1;
			duration = 0.5;
			frequency = 20;
			power = 5;
		};
	};
	class VTN_25x137_Ball_AP2: VTN_25x137_Ball_AP1
	{
		hit = 80;
		indirecthit = 10;
		indirecthitrange = 0.05;
		typicalspeed = 1345;
		model = "\vtn_armorw_lav25_md\vtn_tracer_red_ball";
		tracerendtime = 1.85;
	};
	class B_30mm_HE;
	class VTN_25x137_Ball_HE: B_30mm_HE
	{
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 512";
		hit = 55;
		indirecthit = 30;
		indirecthitrange = 2;
		caliber = 2.5;
		airfriction = -0.00036;
		airlock = 1;
		model = "\vtn_armorw_lav25_md\vtn_tracer_red_ball";
		tracerscale = 1.2;
		tracerstarttime = 0.05;
		tracerendtime = 1.75;
		nvgOnly = 0;
		typicalspeed = 1100;
		visiblefire = 32;
		visiblefiretime = 4;
		timeToLive = 30;
		class CamShakeExplode
		{
			distance = 1;
			duration = 1;
			frequency = 20;
			power = 10;
		};
		class CamShakeFire
		{
			distance = 1;
			duration = 0.5;
			frequency = 20;
			power = 5;
		};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class NewTurret;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F{};
	class VTN_LAV25_BASE: APC_Wheeled_01_base_F
	{
		scope = 0;
		_generalMacro = "VTN_LAV25_BASE";
		author = "$STR_DN_VTN";
		normalSpeedForwardCoef = 0.6;
		slowSpeedForwardCoef = 0.45;
		numberPhysicalWheels = 8;
		simulation = "carX";
		maxSpeed = 100;
		wheelCircumference = 3.277;
		dampersBumpCoef = 5;
		brakeIdleSpeed = 1.78;
		terrainCoef = 0.8;
		turnCoef = 3;
		canFloat = 1;
		waterresistance = 5;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.225;
		waterAngularDampingCoef = 10;
		waterLinearDampingCoefY = 2;
		waterLinearDampingCoefX = 2;
		engineShiftY = 1.05;
		fuelCapacity = 300;
		rudderForceCoef = 1.5;
		rudderForceCoefAtMaxSpeed = 0.3;
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		torqueCurve[] = {{"(550/2500)","(0/770)"},{"(1000/2500)","(498/770)"},{"(1250/2500)","(635/770)"},{"(1500/2500)","(746/770)"},{"(1800/2500)","(770/770)"},{"(2000/2500)","(743/770)"},{"(2250/2500)","(712/770)"},{"(2764/2500)","(0/770)"}};
		maxOmega = 268.8;
		enginePower = 275;
		peakTorque = 770;
		idleRPM = 550;
		redRPM = 2500;
		thrustDelay = 0.35;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.84,"N",0,"D1",8.05,"D2",3.58,"D3",2.09,"D4",1.39,"D5",1};
			TransmissionRatios[] = {"High",3.04};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[] = {0.5,0,0.9,0.9,0.9,0.9,0.9};
		switchTime = 0.35;
		latency = 1.4;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 35;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 65;
		class wheels
		{
			class L1
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 100;
				MOI = 60;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 13000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.2;
				mMaxDroop = 0.2;
				sprungMass = 1500;
				springStrength = 70000;
				springDamperRate = 18000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 1;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class L3: L1
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class L4: L1
			{
				boneName = "wheel_1_4_damper";
				steering = 0;
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
				suspForceAppPointOffset = "wheel_1_4_axis";
				tireForceAppPointOffset = "wheel_1_4_axis";
				maxHandBrakeTorque = 300000;
			};
			class R1: L1
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class R2: R1
			{
				boneName = "wheel_2_2_damper";
				steering = 1;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
			class R3: R1
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class R4: R1
			{
				boneName = "wheel_2_4_damper";
				steering = 0;
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
				suspForceAppPointOffset = "wheel_2_4_axis";
				tireForceAppPointOffset = "wheel_2_4_axis";
				maxHandBrakeTorque = 300000;
			};
		};
		side = 1;
		transportSoldier = 4;
		getInRadius = 0.85;
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};
		viewDriverInExternal = 1;
		DriverForceOptics = 0;
		hideWeaponsDriver = 1;
		LODDriverOpticsIn = 1000;
		canHidedriver = 1;
		driverOpticsModel = "\vtn_armore_whl_brdm2_opt\Driver_opt";
		memoryPointSupply = "InventoryPoint";
		supplyRadius = 0.555;
		cargoProxyIndexes[] = {1,2,3,4};
		getInProxyOrder[] = {1,2,3,4,5,6};
		LODTurnedIn = 1100;
		LODTurnedOut = 1;
		LODDriverTurnedOut = 1;
		unitInfoType = "RscUnitInfo";
		class MFD{};
		class Components
		{
			class AICarSteeringComponent
			{
				steeringPIDWeights[] = {2.9,0.1,0.2};
				speedPIDWeights[] = {0.7,0.2,0};
				convoyPIDWeights[] = {1,0.01,0.01};
				doRemapSpeed = 1;
				remapSpeedRange[] = {30,70};
				remapSpeedScalar[] = {1,0.35};
				doPredictForward = 1;
				predictForwardRange[] = {1,20};
				steerAheadSaturation[] = {0.01,0.4};
				speedPredictionMethod = 2;
				wheelAngleCoef = 0.7;
				forwardAngleCoef = 0.7;
				steeringAngleCoef = 1;
				differenceAngleCoef = 0.4;
				stuckMaxTime = 3;
				allowOvertaking = 1;
				allowDrifting = 0;
				allowCollisionAvoidance = 1;
				maxWheelAngleDiff = 0.2616;
				minSpeedToKeep = 0.1;
				commandTurnFactor = 1;
			};
			class TransportCountermeasuresComponent{};
		};
		class ViewPilot
		{
			initAngleX = 0;
			minAngleX = -50;
			maxAngleX = 50;
			initAngleY = 0;
			minAngleY = -140;
			maxAngleY = 140;
			initFov = "0.75";
			minFov = "0.75";
			maxFov = "0.75";
			visionMode[] = {};
		};
		class Viewcargo
		{
			initAngleX = 0;
			minAngleX = -40;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -140;
			maxAngleY = 140;
			initFov = "0.75";
			minFov = "0.75";
			maxFov = "0.75";
			visionMode[] = {};
		};
		class ViewOptics
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = "0.75";
			minFov = "0.75";
			maxFov = "0.75";
			visionMode[] = {"Normal"};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Components{};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class Components{};
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minOutElev = -30;
						maxOutElev = 60;
						initOutElev = 0;
						minOutTurn = -100;
						maxOutTurn = 100;
						initOutTurn = 0;
						gunBeg = "usti hlavne";
						gunEnd = "konec hlavne";
						body = "MainTurret";
						gun = "MainGun";
						minElev = -40;
						maxElev = 40;
						initElev = 0;
						minTurn = -100;
						maxTurn = 100;
						initTurn = 0;
						primaryGunner = 0;
						primaryObserver = 1;
						class ViewGunner
						{
							initAngleX = 0;
							minAngleX = -40;
							maxAngleX = 40;
							initAngleY = 0;
							minAngleY = -150;
							maxAngleY = 150;
							initFov = "0.75";
							minFov = "0.75";
							maxFov = "0.75";
							visionMode[] = {"Normal","NVG"};
						};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = "0.75";
							minFov = "0.75";
							maxFov = "0.75";
							visionMode[] = {"Normal","NVG"};
						};
						showCrewAim = 1;
						startEngine = 0;
						LODTurnedIn = 1000;
						LODTurnedOut = 1;
						hideWeaponsCommander = 1;
						gunnerCompartments = "Compartment1";
						weapons[] = {"VTN_M257SGL"};
						magazines[] = {"VTN_M82","VTN_M82"};
						soundServo[] = {"A3\sounds_f\dummysound",0.01,1,30};
						soundServoVertical[] = {"A3\sounds_f\dummysound",0.01,1,30};
						soundElevation[] = {"A3\sounds_f\dummysound",0.01,1,30};
						gunnerInAction = "LAV25_Commander";
						gunnerAction = "Commander_MBT_01_cannon_F_out";
						personTurretAction = "vehicle_turnout_2";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						gunnerOpticsModel = "";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						hideWeaponsgunner = 1;
						class OpticsIn
						{
							class m36th_day_2x
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = "0.46 / 1";
								minFov = "0.46 / 1";
								maxFov = "0.46 / 1";
								visionMode[] = {"Normal","NVG"};
								gunnerOpticsModel = "\vtn_armorw_lav25_opt\m36th_day";
								gunnerOpticsEffect[] = {};
							};
							class m36th_day_7x
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = "0.46 / 7";
								minFov = "0.46 / 7";
								maxFov = "0.46 / 7";
								visionMode[] = {"Normal","NVG"};
								gunnerOpticsModel = "\vtn_armorw_lav25_opt\m36th_day";
								gunnerOpticsEffect[] = {};
							};
						};
						turretInfoType = "RscWeaponZeroing";
						isPersonTurret = 1;
						gunnerHasFlares = 1;
						viewGunnerInExternal = 1;
						inGunnerMayFire = 1;
						outGunnerMayFire = 0;
						gunnerForceOptics = 0;
					};
				};
				memoryPointGun = "Usti hlavne1";
				turretInfoType = "RscWeaponZeroing";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				body = "MainTurret";
				gun = "MainGun";
				hideWeaponsgunner = 1;
				isPersonTurret = 0;
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				weapons[] = {"VTN_M242","VTN_M240C"};
				magazines[] = {"VTN_M242_150_APDST","VTN_M242_150_APDST","VTN_M242_60_HEIT","VTN_M242_60_HEIT","VTN_M240_440_AP","VTN_M240_440_AP","VTN_M240_440_AP","VTN_M240_440_AP"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1,1,30};
				soundElevation[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1,1,30};
				minElev = -5;
				initElev = 0;
				maxElev = 30;
				minOutElev = -30;
				maxOutElev = 60;
				minOutTurn = -110;
				maxOutTurn = 110;
				initOutTurn = 0;
				gunnerCompartments = "Compartment1";
				LODTurnedIn = 1000;
				LODTurnedOut = 1;
				gunnerAction = "LAV25_Gunner_out";
				personTurretAction = "vehicle_turnout_2";
				gunnerInAction = "LAV25_Gunner";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				animationSourceStickX = "turret_control_x";
				animationSourceStickY = "turret_control_y";
				gunnerRightHandAnimName = "turret_control";
				viewGunnerInExternal = 1;
				gunnerForceOptics = 0;
				inGunnerMayFire = 1;
				outGunnerMayFire = 0;
				maxHorizontalRotSpeed = 6;
				maxVerticalRotSpeed = 1.3;
				startEngine = 0;
				primaryGunner = 1;
				primaryObserver = 0;
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -40;
					maxAngleX = 40;
					initAngleY = 0;
					minAngleY = -120;
					maxAngleY = 120;
					initFov = "0.75";
					minFov = "0.75";
					maxFov = "0.75";
					visionMode[] = {"Normal","NVG"};
				};
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesBoth";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				gunnerOpticsModel = "";
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.5;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.2;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.4;
						radius = 0.25;
					};
				};
				memoryPointGunnerOptics = "Usti hlavne1";
				selectionFireAnim = "zasleh";
				class OpticsIn
				{
					class m36th_day_2x
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.46 / 1";
						minFov = "0.46 / 1";
						maxFov = "0.46 / 1";
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "\vtn_armorw_lav25_opt\m36th_day";
						gunnerOpticsEffect[] = {};
					};
					class m36th_day_7x
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.46 / 7";
						minFov = "0.46 / 7";
						maxFov = "0.46 / 7";
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "\vtn_armorw_lav25_opt\m36th_day";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Proxy
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Backpack
			{
				displayName = "Br";
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
				mass = -20;
			};
			class Br
			{
				displayName = "$STR_DN_LAV25_CARGO_SPTA";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -20;
			};
			class Br1
			{
				displayName = "$STR_DN_LAV25_CARGO_SUPPLY";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -20;
			};
			class tabl
			{
				displayName = "$STR_DN_LAV25_CARGO_CIP";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -20;
			};
			class ammo_belt
			{
				source = "Reload";
				weapon = "VTN_M240C";
			};
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "VTN_M242";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "VTN_M242";
			};
			class plate_front
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class turbine_cover
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Doors1
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class Doors2
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2
			{
				source = "Hit";
				hitpoint = "HitGlass2";
				raw = 1;
			};
			class HitGlass3
			{
				source = "Hit";
				hitpoint = "HitGlass3";
				raw = 1;
			};
			class HitGlass4
			{
				source = "Hit";
				hitpoint = "HitGlass4";
				raw = 1;
			};
			class HitGlass5
			{
				source = "Hit";
				hitpoint = "HitGlass5";
				raw = 1;
			};
			class HitGlass6
			{
				source = "Hit";
				hitpoint = "HitGlass6";
				raw = 1;
			};
			class HitGlass7
			{
				source = "Hit";
				hitpoint = "HitGlass7";
				raw = 1;
			};
			class HitGlass8
			{
				source = "Hit";
				hitpoint = "HitGlass8";
				raw = 1;
			};
			class HitGlass9
			{
				source = "Hit";
				hitpoint = "HitGlass9";
				raw = 1;
			};
			class HitGlass10
			{
				source = "Hit";
				hitpoint = "HitGlass10";
				raw = 1;
			};
			class HitGlass11
			{
				source = "Hit";
				hitpoint = "HitGlass11";
				raw = 1;
			};
			class HitGlass12
			{
				source = "Hit";
				hitpoint = "HitGlass12";
				raw = 1;
			};
			class HitGlass13
			{
				source = "Hit";
				hitpoint = "HitGlass13";
				raw = 1;
			};
			class HitGlass14
			{
				source = "Hit";
				hitpoint = "HitGlass14";
				raw = 1;
			};
			class HitGlass15
			{
				source = "Hit";
				hitpoint = "HitGlass15";
				raw = 1;
			};
			class HitGlass16
			{
				source = "Hit";
				hitpoint = "HitGlass16";
				raw = 1;
			};
			class HitGlass17
			{
				source = "Hit";
				hitpoint = "HitGlass17";
				raw = 1;
			};
			class HitGlass18
			{
				source = "Hit";
				hitpoint = "HitGlass18";
				raw = 1;
			};
			class HitGlass19
			{
				source = "Hit";
				hitpoint = "HitGlass19";
				raw = 1;
			};
			class HitGlass20
			{
				source = "Hit";
				hitpoint = "HitGlass20";
				raw = 1;
			};
			class HitGlass21
			{
				source = "Hit";
				hitpoint = "HitGlass21";
				raw = 1;
			};
			class showBags
			{
				displayName = "";
			};
			class showCamonetHull
			{
				displayName = "";
			};
			class showCamonetCannon
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class showCamonetTurret
			{
				displayName = "";
			};
			class showSLATHull
			{
				displayName = "";
			};
			class showSLATTurret
			{
				displayName = "";
			};
		};
		explosionEffect = "FuelExplosion";
		secondaryExplosion = -1;
		fuelExplosionPower = 1;
		damageTexDelay = 0;
		engineEffectSpeed = 5;
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		/*class EventHandlers: EventHandlers
		{
			//Init = "(_this select 0) execVM ""vtn_core_init\Modules\EH\Init.sqf"";";
		};*/
		class VTN_EEH_INIT
		{
			av_init = "[_this select 0,_this select 1] exec ""\vtn_armorw_lav25_cf\scripts\num.sqs"";";
			audiofx_init = "_this spawn compile preprocessFile ""\vtn_core_wpn_config\scripts\x_init.sqf"";";
			functions_init = " _this spawn compile preprocessFile ""\vtn_armorw_lav25_cf\scripts\functions_init.sqf"";";
			/*vtn_core_at_init = "[(_this select 0)] spawn compile preprocessFile ""vtn_core_at\scripts\vehicle\init.sqf"";";*/
		};
		class VTN_EEH_FIRED
		{
			audiofx_handler = "_this call X_Veh_Snds_Chk;";
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectAMV";
			};
			class Exhaust2
			{
				position = "vyfuk2 start";
				direction = "vyfuk2 konec";
				effect = "ExhaustEffectTankBack";
			};
		};
		class HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = -1;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				visual = "zbytek";
				passThrough = 0.5;
				minimalHit = 0.15;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitEngine
			{
				armor = 1;
				material = -1;
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				visual = "-";
				passThrough = 0.5;
				minimalHit = 0.015;
				explosionShielding = 0.2;
				radius = 0.4;
			};
			class HitFuel
			{
				armor = 1.5;
				material = -1;
				armorComponent = "hit_fuel";
				name = "hit_fuel_point";
				visual = "-";
				passThrough = 0.5;
				minimalHit = 0.015;
				explosionShielding = 0.6;
				radius = 0.3;
			};
			class HitLFWheelDir
			{
				visual = "wheel_1_1_hide";
				armor = 0.25;
				minimalHit = 0;
				material = -1;
				name = "";
				armorComponent = "wheel_1_1_hide";
				passThrough = 0;
				explosionShielding = 0;
				radius = 0.2;
			};
			class HitLFWheel: HitLFWheelDir
			{
				armor = 0.25;
				minimalHit = 0.05;
				name = "wheel_1_1_steering";
				armorComponent = "";
				explosionShielding = 10;
				depends = "HitLFWheelDir - 0.25";
			};
			class HitLF2WheelDir: HitLFWheelDir
			{
				visual = "wheel_1_2_hide";
				armorComponent = "wheel_1_2_hide";
			};
			class HitLF2Wheel: HitLFWheel
			{
				name = "wheel_1_2_steering";
				depends = "HitLF2WheelDir - 0.25";
			};
			class HitLMWheelDir: HitLFWheelDir
			{
				visual = "wheel_1_3_hide";
				armorComponent = "wheel_1_3_hide";
			};
			class HitLMWheel: HitLFWheel
			{
				name = "wheel_1_3_steering";
				depends = "HitLMWheelDir - 0.25";
			};
			class HitLBWheelDir: HitLFWheelDir
			{
				visual = "wheel_1_4_hide";
				armorComponent = "wheel_1_4_hide";
			};
			class HitLBWheel: HitLFWheel
			{
				name = "wheel_1_4_steering";
				depends = "HitLBWheelDir - 0.25";
			};
			class HitRFWheelDir: HitLFWheelDir
			{
				visual = "wheel_2_1_hide";
				armorComponent = "wheel_2_1_hide";
			};
			class HitRFWheel: HitLFWheel
			{
				name = "wheel_2_1_steering";
				depends = "HitRFWheelDir - 0.25";
			};
			class HitRF2WheelDir: HitLFWheelDir
			{
				visual = "wheel_2_2_hide";
				armorComponent = "wheel_2_2_hide";
			};
			class HitRF2Wheel: HitLFWheel
			{
				name = "wheel_2_2_steering";
				depends = "HitRF2WheelDir - 0.25";
			};
			class HitRMWheelDir: HitLFWheelDir
			{
				visual = "wheel_2_3_hide";
				armorComponent = "wheel_2_3_hide";
			};
			class HitRMWheel: HitLFWheel
			{
				name = "wheel_2_3_steering";
				depends = "HitRMWheelDir - 0.25";
			};
			class HitRBWheelDir: HitLFWheelDir
			{
				visual = "wheel_2_4_hide";
				armorComponent = "wheel_2_4_hide";
			};
			class HitRBWheel: HitLFWheel
			{
				name = "wheel_2_4_steering";
				depends = "HitRBWheelDir - 0.25";
			};
			class HitGlass1
			{
				visual = "glass1";
				name = "glass1";
				armorComponent = "glass1";
				material = -1;
				armor = 0.015;
				minimalHit = 0.5;
				explosionShielding = 0.1;
				passThrough = 1;
				radius = 0.001;
			};
			class HitGlass2: HitGlass1
			{
				visual = "glass2";
				name = "glass2";
				armorComponent = "glass2";
			};
			class HitGlass3: HitGlass1
			{
				visual = "glass3";
				name = "glass3";
				armorComponent = "glass3";
			};
			class HitGlass4: HitGlass1
			{
				visual = "glass4";
				name = "glass4";
				armorComponent = "glass4";
			};
			class HitGlass5: HitGlass1
			{
				visual = "glass5";
				name = "glass5";
				armorComponent = "glass5";
			};
			class HitGlass6: HitGlass1
			{
				visual = "glass6";
				name = "glass6";
				armorComponent = "glass6";
			};
			class HitGlass7: HitGlass1
			{
				visual = "glass7";
				name = "glass7";
				armorComponent = "glass7";
			};
			class HitGlass8: HitGlass1
			{
				visual = "glass8";
				name = "glass8";
				armorComponent = "glass8";
			};
			class HitGlass9: HitGlass1
			{
				visual = "glass9";
				name = "glass9";
				armorComponent = "glass9";
			};
			class HitGlass10: HitGlass1
			{
				visual = "glass10";
				name = "glass10";
				armorComponent = "glass10";
			};
			class HitGlass11: HitGlass1
			{
				visual = "glass11";
				name = "glass11";
				armorComponent = "glass11";
			};
			class HitGlass12: HitGlass1
			{
				visual = "glass12";
				name = "glass12";
				armorComponent = "glass12";
			};
			class HitGlass13: HitGlass1
			{
				visual = "glass13";
				name = "glass13";
				armorComponent = "glass13";
			};
			class HitGlass14: HitGlass1
			{
				visual = "glass14";
				name = "glass14";
				armorComponent = "glass14";
			};
			class HitGlass15: HitGlass1
			{
				visual = "glass15";
				name = "glass15";
				armorComponent = "glass15";
			};
			class HitGlass16: HitGlass1
			{
				visual = "glass16";
				name = "glass16";
				armorComponent = "glass16";
			};
			class HitGlass17: HitGlass1
			{
				visual = "glass17";
				name = "glass17";
				armorComponent = "glass17";
			};
			class HitGlass18: HitGlass1
			{
				visual = "glass18";
				name = "glass18";
				armorComponent = "glass18";
			};
			class HitGlass19: HitGlass1
			{
				visual = "glass19";
				name = "glass19";
				armorComponent = "glass19";
			};
			class HitGlass20: HitGlass1
			{
				visual = "glass20";
				name = "glass20";
				armorComponent = "glass20";
			};
			class HitGlass21: HitGlass1
			{
				visual = "glass21";
				name = "glass21";
				armorComponent = "glass21";
			};
		};
		class Damage
		{
			tex[] = {"vtn_armorw_lav25_tx\lav_int_2_ca.paa","vtn_armorw_lav25_tx\lavalfa_destruct_ca.paa","vtn_armorw_lav25_tx\lavalfa_ca.paa","vtn_armorw_lav25_tx\lavalfa_destruct_ca.paa"};
			mat[] = {"vtn_armorw_lav25_tx\steklo.rvmat","A3\data_f\Glass_veh_armored_damage.rvmat","A3\data_f\Glass_veh_armored_damage.rvmat","vtn_armorw_lav25_tx\lavalfa.rvmat","vtn_armorw_lav25_tx\lavalfa_damage.rvmat","vtn_armorw_lav25_tx\lavalfa_destruct.rvmat","vtn_armorw_lav25_tx\lavalfa_p.rvmat","vtn_armorw_lav25_tx\lavalfa_damage.rvmat","vtn_armorw_lav25_tx\lavalfa_destruct.rvmat","vtn_armorw_lav25_tx\lavbody.rvmat","vtn_armorw_lav25_tx\lavbody_damage.rvmat","vtn_armorw_lav25_tx\lavbody_destruct.rvmat","vtn_armorw_lav25_tx\lavbody_camo.rvmat","vtn_armorw_lav25_tx\lavbody_damage.rvmat","vtn_armorw_lav25_tx\lavbody_destruct.rvmat","vtn_armorw_lav25_tx\lavbody_des.rvmat","vtn_armorw_lav25_tx\lavbody_damage.rvmat","vtn_armorw_lav25_tx\lavbody_destruct.rvmat","vtn_armorw_lav25_tx\lavbody2.rvmat","vtn_armorw_lav25_tx\lavbody2_damage.rvmat","vtn_armorw_lav25_tx\lavbody2_destruct.rvmat","vtn_armorw_lav25_tx\lavbody2_camo.rvmat","vtn_armorw_lav25_tx\lavbody2_damage.rvmat","vtn_armorw_lav25_tx\lavbody2_destruct.rvmat","vtn_armorw_lav25_tx\lavbody2_des.rvmat","vtn_armorw_lav25_tx\lavbody2_damage.rvmat","vtn_armorw_lav25_tx\lavbody2_destruct.rvmat"};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right
			{
				position = "light_R_flare";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				useFlare = 1;
			};
		};
		aggregateReflectors[] = {{"Left","Right","Left2","Right2"}};
		class RenderTargets
		{
			class Mirror_L
			{
				renderTarget = "rendertarget1";
				class Camera1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
			};
			class Mirror_R
			{
				renderTarget = "rendertarget2";
				class Camera2
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.7;
				};
			};
			class display1
			{
				renderTarget = "rendertarget3";
				class CameraView3
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.7;
				};
			};
		};
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 10;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 82;
		memoryPointTrackFLL = "Stopa PLL";
		memoryPointTrackFLR = "Stopa PLP";
		memoryPointTrackBLL = "Stopa ZLL";
		memoryPointTrackBLR = "Stopa ZLP";
		memoryPointTrackFRL = "Stopa PPL";
		memoryPointTrackFRR = "Stopa PPP";
		memoryPointTrackBRL = "Stopa ZPL";
		memoryPointTrackBRR = "Stopa ZPP";
		tf_hasLRradio = 1;
		tf_hasLRradio_api = "true";
		tf_RadioType_api = "tf_rt1523g";
	};
	class VTN_LAV25A1_BASE: VTN_LAV25_BASE
	{
		scope = 0;
		_generalMacro = "VTN_LAV25A1_BASE";
		DLC = "VTN";
		author = "$STR_DN_VTN";
		displayname = "$STR_DN_VTN_LAV25A1";
		descriptionShort = "$STR_DS_VTN_LAV25A1_WDL";
		model = "vtn_armorw_lav25_md\LAV25";
		icon = "vtn_armorw_lav25_cf\ico\icon_lav25_ca.paa";
		picture = "vtn_armorw_lav25_cf\ico\picture_lav25_ca.paa";
		faction = "SOCOMD";
		crew = "SOCOMD_Crewman";
		insideSoundCoef = 0.9;
		outsideSoundFilter = 0;
		radarType = 0;
		driverCanSee = "2+4";
		gunnerCanSee = "2+4";
		commanderCanSee = "2+4";
		showCrewAim = 0;
		armor = 450;
		armorStructural = 1;
		armorWheels = 0.05;
		crewVulnerable = 1;
		driverRightLegAnimName = "pedalG";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		hideWeaponsDriver = 1;
		typicalCargo[] = {"SOCOMD_Crewman","SOCOMD_Crewman","SOCOMD_Crewman"};
		class AnimationSources: AnimationSources
		{
			class Proxy
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Backpack
			{
				displayName = "$STR_DN_LAV25_CARGO_BACKPACKS";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -20;
			};
			class Br
			{
				displayName = "$STR_DN_LAV25_CARGO_SPTA";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -20;
			};
			class Br1
			{
				displayName = "$STR_DN_LAV25_CARGO_SUPPLY";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -20;
			};
			class tabl
			{
				displayName = "$STR_DN_LAV25_CARGO_CIP";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -20;
			};
			class ammo_belt
			{
				source = "Reload";
				weapon = "VTN_M240C";
			};
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "VTN_M242";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "VTN_M242";
			};
			class reloadanim
			{
				source = "reload";
				weapon = "VTN_M242";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "VTN_M242";
			};
			class plate_front
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class turbine_cover
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Door1
			{
				mass = 1;
				source = "door";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class Door2
			{
				mass = 1;
				source = "door";
				animPeriod = 0.6;
				initPhase = 0;
			};
		};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment1","Compartment1","Compartment1"};
		mapsize = 7;
		side = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[] = {"VTN_M81","VTN_M81"};
						hideWeaponsCommander = "false";
					};
				};
				hideWeaponsGunner = "true";
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerinAction = "Stryker_Cargo01_V6";
				animationSourceHatch = "Door1";
				isPersonTurret = 1;
				enabledByAnimationSource = "Door1";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos cargo rr";
				memoryPointsGetInGunnerDir = "pos cargo rr dir";
				gunnerName = "$STR_DN_LAV25_RIGHT_BOARD_GUNNER";
				gunnerCompartments = "Compartment1";
				gunnerDoor = "Door1";
				allowLauncherIn = 0;
				allowLauncherOut = 1;
				canHideGunner = 1;
				forceHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				proxyIndex = 6;
				class TurnOut
				{
					limitsArrayTop[] = {{3.5373,-1.3438}};
					limitsArrayBottom[] = {{-55.8132,-78.701},{-55.695,-42.9749},{-20.5349,-8.1766},{-18.5114,7.3282},{-19.9175,18.9012},{-20.0625,26.8051},{-19.9485,37.7768},{-34.0815,67.2254},{-48.6922,80.0348},{-47.6331,90.4505}};
				};
				inGunnerMayFire = 0;
				class dynamicViewLimits{};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerinAction = "Stryker_Cargo01_V6";
				animationSourceHatch = "Door2";
				isPersonTurret = 1;
				enabledByAnimationSource = "Door2";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos cargo lr";
				memoryPointsGetInGunnerDir = "pos cargo lr dir";
				gunnerName = "$STR_DN_LAV25_LEFT_BOARD_GUNNER";
				gunnerCompartments = "Compartment1";
				gunnerDoor = "Door2";
				allowLauncherIn = 0;
				allowLauncherOut = 1;
				canHideGunner = 1;
				forceHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				proxyIndex = 5;
				inGunnerMayFire = 0;
				class dynamicViewLimits{};
			};
		};
		smokeLauncherGrenadePos = "basic_damper_destruct_axis";
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 10;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 82;
		class RenderTargets
		{
			class Mirror_L
			{
				renderTarget = "rendertarget1";
				class Camera1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.1;
				};
			};
			class Mirror_R
			{
				renderTarget = "rendertarget2";
				class Camera2
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.1;
				};
			};
			class display1
			{
				renderTarget = "rendertarget3";
				class CameraView3
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.1;
				};
			};
			class display2
			{
				renderTarget = "rendertarget4";
				class CameraView3
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.1;
				};
			};
			class display3
			{
				renderTarget = "rendertarget5";
				class CameraView3
				{
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.1;
				};
			};
			class display4
			{
				renderTarget = "rendertarget6";
				class CameraView3
				{
					pointPosition = "PIP5_pos";
					pointDirection = "PIP5_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.1;
				};
			};
			class display5
			{
				renderTarget = "rendertarget7";
				class CameraView3
				{
					pointPosition = "PIP6_pos";
					pointDirection = "PIP6_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.1;
				};
			};
		};
		hiddenselections[] = {"Camo1","Camo2","z1","Camo3"};
		hiddenselectionstextures[] = {"vtn_armorw_lav25_tx\lavbody_co.paa","vtn_armorw_lav25_tx\lavbody2_co.paa","vtn_armorw_lav25_tx\znaki\z01_ca.paa","vtn_armorw_lav25_tx\lavalfa_co.paa"};
		class textureSources
		{
			class Desert
			{
				displayName = "$STR_DN_VTN_LAV25_CAMO_SAND";
				author = "$STR_DN_VTN";
				textures[] = {"vtn_armorw_lav25_tx\lavbody_des_co.paa","vtn_armorw_lav25_tx\lavbody2_des_co.paa","vtn_armorw_lav25_tx\znaki\z01_ca.paa","vtn_armorw_lav25_tx\lavalfa_des_ca.paa"};
				materials[] = {"vtn_armorw_lav25_tx\lavbody_des.rvmat","vtn_armorw_lav25_tx\lavbody2_des.rvmat","","vtn_armorw_lav25_tx\lavalfa.rvmat"};
			};
			class Green
			{
				displayName = "$STR_DN_VTN_LAV25_GREEN";
				author = "$STR_DN_VTN";
				textures[] = {"vtn_armorw_lav25_tx\lavbody_co.paa","vtn_armorw_lav25_tx\lavbody2_co.paa","vtn_armorw_lav25_tx\znaki\z01_ca.paa","vtn_armorw_lav25_tx\lavalfa_co.paa"};
				materials[] = {"vtn_armorw_lav25_tx\lavbody.rvmat","vtn_armorw_lav25_tx\lavbody2.rvmat","","vtn_armorw_lav25_tx\lavalfa.rvmat"};
			};
			class Woodland
			{
				displayName = "$STR_DN_VTN_LAV25_CAMO_WOODLAND";
				author = "$STR_DN_VTN";
				textures[] = {"vtn_armorw_lav25_tx\lavbody_camo_co.paa","vtn_armorw_lav25_tx\lavbody2_camo_co.paa","vtn_armorw_lav25_tx\znaki\z01_ca.paa","vtn_armorw_lav25_tx\lavalfa_co.paa"};
				materials[] = {"vtn_armorw_lav25_tx\lavbody_camo.rvmat","vtn_armorw_lav25_tx\lavbody2_camo.rvmat","","vtn_armorw_lav25_tx\lavalfa.rvmat"};
			};
			textureList[] = {"Desert",1,"Camo",1,"Woodland",1};
		};
		DriverAction = "LAV25_Driver_out";
		DriverInAction = "LAV25_Driver";
		CargoAction[] = {"Stryker_Cargo01"};
		hideWeaponsCargo = 0;
		class Library
		{
			libtextdesc = "";
		};
		maximumLoad = 50000;
		transportMaxWeapons = 50;
		transportMaxMagazines = 500;
		transportMaxBackpacks = 20;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		class TransportMagazines
		{

		};
		class TransportWeapons
		{
			
		};
		class TransportBackpacks{};
		class TransportItems{};
	};
	class VTN_LAV25A1_DES: VTN_LAV25A1_BASE
	{
		scope = 0;
		scopeCurator = 0;
		_generalMacro = "VTN_LAV25A1_DES";
		DLC = "VTN";
		author = "$STR_DN_VTN";
		displayname = "$STR_DN_VTN_LAV25A1";
		descriptionShort = "$STR_DS_VTN_LAV25A1_DES";
		editorPreview = "\vtn_armorw_lav25_cf\ico\vtn_lav25a1_des_preview.paa";
		model = "vtn_armorw_lav25_md\LAV25";
		driverRightLegAnimName = "pedalG";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		hiddenselections[] = {"Camo1","Camo2","z1","Camo3"};
		hiddenselectionstextures[] = {"vtn_armorw_lav25_tx\lavbody_des_co.paa","vtn_armorw_lav25_tx\lavbody2_des_co.paa","vtn_armorw_lav25_tx\znaki\z01_ca.paa","vtn_armorw_lav25_tx\lavalfa_des_ca.paa"};
		vehicleclass = "06VTN_ARMOR";
		crew = "SOCOMD_Crewman";
		faction = "SOCOMD";
		typicalCargo[] = {"SOCOMD_Crewman","SOCOMD_Crewman","SOCOMD_Crewman"};
		smokeLauncherGrenadePos = "basic_damper_destruct_axis";
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 10;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 82;
	};
	class VTN_LAV25A1_WDL: VTN_LAV25A1_BASE
	{
		scope = 0;
		scopeCurator = 0;
		_generalMacro = "VTN_LAV25A1_WDL";
		DLC = "VTN";
		author = "$STR_DN_VTN";
		displayname = "$STR_DN_VTN_LAV25A1";
		descriptionShort = "$STR_DS_VTN_LAV25A1_DES";
		editorPreview = "\vtn_armorw_lav25_cf\ico\vtn_lav25a1_wdl_preview.paa";
		model = "vtn_armorw_lav25_md\LAV25";
		driverRightLegAnimName = "pedalG";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		hiddenselections[] = {"Camo1","Camo2","z1","Camo3"};
		hiddenselectionstextures[] = {"vtn_armorw_lav25_tx\lavbody_camo_co.paa","vtn_armorw_lav25_tx\lavbody2_camo_co.paa","vtn_armorw_lav25_tx\znaki\z01_ca.paa","vtn_armorw_lav25_tx\lavalfa_co.paa"};
		vehicleclass = "06VTN_ARMOR";
		faction = "SOCOMD";
		crew = "SOCOMD_Crewman";
		typicalCargo[] = {"SOCOMD_Crewman","SOCOMD_Crewman","SOCOMD_Crewman","SOCOMD_Crewman"};
		smokeLauncherGrenadePos = "basic_damper_destruct_axis";
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 10;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 82;
	};
};
class cfgMods
{
	author = "";
	timepacked = "1542482272";
};
//};

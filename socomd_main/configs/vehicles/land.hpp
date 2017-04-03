////////////////////////////////////////////////////////////////////////////////
// BUSHMASTER

class SOCOMD_BUSHMASTER_HMG : bma3_bushmaster_pws127mm_ecm_F
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD Bushmaster HMG";
	faction = "SOCOMD";
	vehicleclass = "Car";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines 
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

class SOCOMD_BUSHMASTER_TRANS : bma3_bushmaster_unarmed_ecm_F
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD Bushmaster Transport";
	faction = "SOCOMD";
	vehicleclass = "Car";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

////////////////////////////////////////////////////////////////////////////////
// JACKAL
	
class CUP_B_Jackal2_L2A1_GB_D;
class SOCOMD_JACKAL_HMG_D : CUP_B_Jackal2_L2A1_GB_D
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD Jackal HMG (Desert)";
	faction = "SOCOMD";
	vehicleclass = "Car";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines 
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

class CUP_B_Jackal2_GMG_GB_D;
class SOCOMD_JACKAL_AGL_D : CUP_B_Jackal2_GMG_GB_D
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD Jackal GMG (Desert)";
	faction = "SOCOMD";
	vehicleclass = "Car";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines 
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};
	
	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

class CUP_B_Jackal2_L2A1_GB_W;
class SOCOMD_JACKAL_HMG_W : CUP_B_Jackal2_L2A1_GB_W
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD Jackal HMG (Woodland)";
	faction = "SOCOMD";
	vehicleclass = "Car";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines 
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

class CUP_B_Jackal2_GMG_GB_W;
class SOCOMD_JACKAL_AGL_W : CUP_B_Jackal2_GMG_GB_W
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD Jackal GMG (Woodland)";
	faction = "SOCOMD";
	vehicleclass = "Car";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines 
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};
	
	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

////////////////////////////////////////////////////////////////////////////////
// COYOTE
class CUP_B_BAF_Coyote_L2A1_D;
class SOCOMD_SUPPORT_HMG_D : CUP_B_BAF_Coyote_L2A1_D
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD Coyote Support HMG (Desert)";
	faction = "SOCOMD";
	vehicleclass = "Car";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};
	transportMaxBackpacks = "30";
	transportMaxWeapons = "60";
	transportMaxMagazines = "600";
	
	class TransportMagazines 
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

class CUP_B_BAF_Coyote_L2A1_W;
class SOCOMD_SUPPORT_HMG_W : CUP_B_BAF_Coyote_L2A1_W
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD Coyote Support HMG (Woodland)";
	faction = "SOCOMD";
	vehicleclass = "Car";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};
	transportMaxBackpacks = "30";
	transportMaxWeapons = "60";
	transportMaxMagazines = "600";
	class TransportMagazines
	{
		LandTransportMagazines
	};

	class TransportItems
	{
		LandTransportItems
	};

	class TransportBackpacks
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

////////////////////////////////////////////////////////////////////////////////
// ASLAV
	
class CUP_B_LAV25_USMC;
class SOCOMD_ASLAV : CUP_B_LAV25_USMC
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD ASLAV";
	faction = "SOCOMD";
	vehicleclass = "Armored";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportMagazines 
	{
		LandTransportMagazines
	};

	class TransportItems 
	{
		LandTransportItems
	};

	class TransportBackpacks 
	{
		LandTransportBackpacks
	};

	class TransportWeapons 
	{
		LandTransportWeapons
	};
};

////////////////////////////////////////////////////////////////////////////////
// QUADBIKE
class SOCOMD_QUADBIKE : B_Quadbike_01_F 
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD Quadbike";
	faction = "SOCOMD";
	vehicleclass = "Car";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};

	class TransportItems 
	{
		TI_DefaultMeds
	};
};

////////////////////////////////////////////////////////////////////////////////
// BICYCLE

class BIKE_BASE : Bicycle
{
	expansion = 1;
	htMin = 60;
	htMax = 1800;
	afMax = 100;
	mfMax = 80;
	mFact = 0;
	tBody = 0;
	scope = public;
	weapons[] = {"Bicycle_Horn"};
	wheelCircumference = 2.28;
	model = "\socomd_data\models\dbo_CIV_new_bike.p3d";
	Picture = "\socomd_data\icon\icon_mmt_ca.paa";
	Icon = "\socomd_data\icon\picture_mmt_ca";
	mapSize = 3;
	class Library
	{
		libTextDesc = "hossass";
	};
	vehicleClass = "Car";
	rarityUrban = -1;
	transportMaxBackpacks = 1;
	transportMaxWeapons = 2;
	transportMaxMagazines = 90;
	class DestructionEffects{};
	attenuationEffectType = "OpenCarAttenuation";
	maxSpeed = 60;
	isBicycle = 1;
	extCameraPosition[] = {0,0,-3};
	class HitPoints
	{
		class HitRGlass
		{
			armor = 0.3;
			material = -1;
			name = "sklo predni P";
			passThrough = 0;
		};
		class HitLGlass
		{
			armor = 0.3;
			material = -1;
			name = "sklo predni L";
			passThrough = 0;
		};
		class HitBody
		{
			armor = 1;
			material = 51;
			name = "karoserie";
			visual = "";
			passThrough = 1;
		};
		class HitFuel
		{
			armor = 0.3;
			material = 51;
			name = "palivo";
			passThrough = 0;
		};
		class HitFWheel
		{
			armor = 1;
			material = -1;
			name = "wheel_1_damper";
			visual = "wheel_1";
			passThrough = 0;
		};
		class HitBWheel
		{
			armor = 1;
			material = -1;
			name = "wheel_2_damper";
			visual = "wheel_2";
			passThrough = 0;
		};
		class HitEngine
		{
			armor = 0.4;
			material = -1;
			name = "motor";
			visual = "";
			passThrough = 0;
		};
	};
	class AnimationSources
	{
		class Hit_wheel_1
		{
			source = "Hit";
			hitpoint = "HitFWheel";
			raw = 1;
		};
		class Hit_wheel_2: Hit_wheel_1
		{
			hitpoint = "HitBWheel";
		};
	};
	threat[] = {0,0,0};
	armor = 5;
	turnCoef = 2;
	driverAction = "MMT_Driver";
	transportSoldier = 0;
	driverInAction = "MMT_Driver";
	cargoAction[] = {"MMT_Driver"};
	secondaryExplosion = 0;
	leftDustEffect = "NoDust";
	rightDustEffect = "NoDust";
	outsideSoundFilter = 0;
	soundGear[] = {"",0.00056234124,1};
	SoundGetIn[] = {"",0.0177828,1};
	SoundGetOut[] = {"",0.0177828,1};
	soundEngineOnInt[] = {"",0.354813,1};
	soundEngineOnExt[] = {"",0.354813,1};
	soundEngineOffInt[] = {"",0.354813,1};
	soundEngineOffExt[] = {"",0.354813,1};
	buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1,1,200};
	buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1,1,200};
	buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1,1,200};
	buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1,1,200};
	soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
	WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1,1,200};
	WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1,1,200};
	WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1,1,200};
	WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1,1,200};
	WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1,1,200};
	WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1,1,200};
	soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
	ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1,1,200};
	ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1,1,200};
	ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1,1,200};
	ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1,1,200};
	soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
	class SoundEvents
	{
		class AccelerationIn
		{
			sound[] = {"",0.562341,1};
			limit = 0.2;
			expression = "(engineOn*(1-camPos))*thrust";
		};
		class AccelerationOut
		{
			sound[] = {"",0.562341,1};
			limit = 0.2;
			expression = "(engineOn*camPos)*thrust";
		};
	};
	dammageHalf[] = {};
	dammageFull[] = {};
	class Sounds
	{
		class Idle_ext
		{
			sound[] = {"",0.316228,1,100};
			frequency = 1;
			volume = "engineOn*camPos*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
		};
		class Engine
		{
			sound[] = {"",0.3548134,1,200};
			frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
			volume = "engineOn*camPos*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
		};
		class Engine1_ext
		{
			sound[] = {"",0.39810717,1,200};
			frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
			volume = "engineOn*camPos*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
		};
		class Engine2_ext
		{
			sound[] = {"",0.446684,1,250};
			frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
			volume = "engineOn*camPos*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
		};
		class Engine3_ext
		{
			sound[] = {"",0.5011872,1,250};
			frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
			volume = "engineOn*camPos*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
		};
		class Engine4_ext
		{
			sound[] = {"",0.56234133,1,300};
			frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)]) *0.2";
			volume = "engineOn*camPos*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
		};
		class IdleThrust
		{
			sound[] = {"",0.56234133,1,150};
			frequency = 1;
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
		};
		class EngineThrust
		{
			sound[] = {"",0.63095737,1,200};
			frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
		};
		class Engine1_Thrust_ext
		{
			sound[] = {"",0.707946,1,250};
			frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
		};
		class Engine2_Thrust_ext
		{
			sound[] = {"",0.7943282,1,300};
			frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
		};
		class Engine3_Thrust_ext
		{
			sound[] = {"",0.891251,1,350};
			frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
		};
		class Engine4_Thrust_ext
		{
			sound[] = {"",1,1,400};
			frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)]) *0.2";
			volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
		};
		class Idle_int
		{
			sound[] = {"",0.251189,1};
			frequency = 1;
			volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
		};
		class Engine_int
		{
			sound[] = {"",0.2818383,1};
			frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
		};
		class Engine1_int
		{
			sound[] = {"",0.316228,1};
			frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
		};
		class Engine2_int
		{
			sound[] = {"",0.3548134,1};
			frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
		};
		class Engine3_int
		{
			sound[] = {"",0.39810717,1};
			frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
			volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
		};
		class Engine4_int
		{
			sound[] = {"",0.446684,1};
			frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)]) *0.2";
			volume = "engineOn*(1-camPos)*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
		};
		class IdleThrust_Int
		{
			sound[] = {"",0.56234133,1};
			frequency = 1;
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
		};
		class EngineThrust_Int
		{
			sound[] = {"",0.63095737,1};
			frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
		};
		class Engine1_Thrust_int
		{
			sound[] = {"",0.707946,1};
			frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
		};
		class Engine2_Thrust_int
		{
			sound[] = {"",0.7943282,1};
			frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
		};
		class Engine3_Thrust_int
		{
			sound[] = {"",0.891251,1};
			frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
		};
		class Engine4_Thrust_int
		{
			sound[] = {"",1,1};
			frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)]) *0.2";
			volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
		};
		class TiresRockOut
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1,1,60};
			frequency = "1";
			volume = "camPos*rock*(speed factor[2, 20])";
		};
		class TiresSandOut
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1,1,60};
			frequency = "1";
			volume = "camPos*sand*(speed factor[2, 20])";
		};
		class TiresGrassOut
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1,1,60};
			frequency = "1";
			volume = "camPos*grass*(speed factor[2, 20])";
		};
		class TiresMudOut
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1,1,60};
			frequency = "1";
			volume = "camPos*mud*(speed factor[2, 20])";
		};
		class TiresGravelOut
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1,1,60};
			frequency = "1";
			volume = "camPos*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltOut
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1,1,60};
			frequency = "1";
			volume = "camPos*asphalt*(speed factor[2, 20])";
		};
		class NoiseOut
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.891251,1,90};
			frequency = "1";
			volume = "camPos*(damper0 max 0.02)*(speed factor[0, 15])";
		};
		class TiresRockIn
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.63095737,1};
			frequency = "1";
			volume = "(1-camPos)*rock*(speed factor[2, 20])";
		};
		class TiresSandIn
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand2",0.63095737,1};
			frequency = "1";
			volume = "(1-camPos)*sand*(speed factor[2, 20])";
		};
		class TiresGrassIn
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.63095737,1};
			frequency = "1";
			volume = "(1-camPos)*grass*(speed factor[2, 20])";
		};
		class TiresMudIn
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.63095737,1};
			frequency = "1";
			volume = "(1-camPos)*mud*(speed factor[2, 20])";
		};
		class TiresGravelIn
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.63095737,1};
			frequency = "1";
			volume = "(1-camPos)*gravel*(speed factor[2, 20])";
		};
		class TiresAsphaltIn
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.5011872,1};
			frequency = "1";
			volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
		};
		class NoiseIn
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.56234133,1};
			frequency = "1";
			volume = "(damper0 max 0.1)*(speed factor[0, 15])*(1-camPos)";
		};
		class breaking_ext_road
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.707946,1,80};
			frequency = 1;
			volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
		};
		class acceleration_ext_road
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.707946,1,80};
			frequency = 1;
			volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
		};
		class turn_left_ext_road
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.707946,1,80};
			frequency = 1;
			volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
		};
		class turn_right_ext_road
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.707946,1,80};
			frequency = 1;
			volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
		};
		class breaking_ext_dirt
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.707946,1,60};
			frequency = 1;
			volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
		};
		class acceleration_ext_dirt
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",0.707946,1,60};
			frequency = 1;
			volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
		};
		class turn_left_ext_dirt
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.707946,1,60};
			frequency = 1;
			volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
		};
		class turn_right_ext_dirt
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.707946,1,60};
			frequency = 1;
			volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
		};
		class breaking_int_road
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.5011872,1};
			frequency = 1;
			volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
		};
		class acceleration_int_road
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.5011872,1};
			frequency = 1;
			volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
		};
		class turn_left_int_road
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.5011872,1};
			frequency = 1;
			volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
		};
		class turn_right_int_road
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.5011872,1};
			frequency = 1;
			volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
		};
		class breaking_int_dirt
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.5011872,1};
			frequency = 1;
			volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
		};
		class acceleration_int_dirt
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",0.5011872,1};
			frequency = 1;
			volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
		};
		class turn_left_int_dirt
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.5011872,1};
			frequency = 1;
			volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
		};
		class turn_right_int_dirt
		{
			sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.5011872,1};
			frequency = 1;
			volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
		};
	};

	class UserActions
	{
		class situpright
		{
			displayName = "Straighten Bike";
			position = "";
			radius = 5;
			condition = "(player==driver this)&&(((vectorUp this select 0) > 0.6)||((vectorUp this select 0) < -0.6)||((vectorUp this select 1) > 0.6)||((vectorUp this select 1) < -0.6))";
			statement = "this setVectorUp [0,0,1];";
			onlyforplayer = 1;
			priority = 5;
			showWindow = 1;
		};
	};

	driverLeftHandAnimName = "volant";
	driverRightHandAnimName = "volant";
	soundEngine[] = {"",1,1};
	soundEnviron[] = {"",1,1};
	class Reflectors{};
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
};

class SOCOMD_BIKE : BIKE_BASE
{
	scope = public;
	scopeCurator = public;
	forceInGarage = 1;
	side = 1;
	author = AUTHOR_STR;
	displayname = "SOCOMD Tactical Bike";
	faction = "SOCOMD";
	vehicleclass = "Car";
	crew = "SOCOMD_Medic";
	typicalCargo[] = {"SOCOMD_Medic"};
};
#include "basicDefines_A3.hpp"

class CfgPatches{
	class VQI_Aircraft {
		units[] = {"VQI_C130_NIGHTMARE"};
		weapons[] = {};
		requiredVersion = 1.0;
		//requiredAddons[] = {"A3_Air_F", "A3_Characters_F_Gamma"};
	};
};

class CfgAddons {
	class VQI_Aircraft {
		list[]={VQI_C130_NIGHTMARE};
	};
};

class CfgVehicleClasses {
	class VQI_Aircraft {
	displayName="VQI Aircraft"; // menu name in editor
	};
};



class ViewPilot;

class CfgVehicles {

class Air;



// base		
	class Plane: Air {
	class NewTurret;
	class Sounds;
	class AnimationSources;	
	class HitPoints		
		{
			class HitHull;		
		};
		class MarkerLights;
	};

// base				
	class VQI_C130_NIGHTMARE_base : Plane {
	
		model = "\vqi_c130\C130\vqi_c130_x.p3d";
		displayName = "XC-130 Nightmare";												
		icon = "\vqi_c130\C130\data\icon_c130j_ca"; 
		picture = "\vqi_c130\C130\data\picture_c130j_ca"; 
		mapSize = 25;	

		// general
		extCameraPosition[] = {0,5,-30};
		gearRetracting  = true;
		cabinOpening = true;
		fuelCapacity = 2000;  		// 2000
		maxFordingDepth = 1.5;
		
		// Driver 
		driverAction = "driver_Truck_02"; 
		hascommander = false; 
		driverIsCommander = true;		
		ejectDeadDriver = true;
		hideWeaponsDriver = true;
		getInRadius = 12;
		driverCompartments = "Compartment1";
		 
		getinaction = "GetInLow";
		getoutaction = "GetInLow";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		enableManualFire = 0;
		driverLeftHandAnimName = "stick_leftwheel";
		driverRightHandAnimName = "stick_leftwheel";
		
		// Passengers + cargo
		hasGunner = true;
		cargoCompartments[] = {"Compartment1"};
		transportSoldier = 24;
		hideWeaponsCargo = false;
		// cargoProxyIndexes[] = {1,2};
				
		class Turrets {
			
			class MainTurret : NewTurret {
	
				body = "";gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				weapons[] = {};
				magazines[] = {};
				
				proxyType = "CPGunner";
				proxyIndex = 1;
				
				commanding = -1;
				primaryObserver = true;
				primaryGunner = false;
				isCopilot = true;
				startEngine = false;
				ejectDeadGunner = false;
				caneject = true;
						
				gunnerName = "Co-Pilot";
				gunnerCompartments = "Compartment1";
				gunnerUsesPilotView = true;
				gunnergetinaction = "GetInLow";
				gunnergetoutaction = "GetOutHigh";
				gunnerForceOptics = false;
				gunnerAction = "driver_Truck_02";
				gunnerlefthandanimname = "";
				gunnerrighthandanimname = "";
				gunnerLeftLegAnimName = "";
				gunnerRightLegAnimName = "";
				memoryPointsGetInGunner = "pos driver";
				memoryPointsGetInGunnerDir = "pos driver dir";
				
				minElev = -60;
				maxElev = 10;
				initElev = 0;
				minTurn = -70;
				maxTurn = 70;
				initTurn = 0;
				
				class ViewPilot : ViewPilot {
					initFov = 1;
					minFov = 0.3;
					maxFov = 1.2;
					initAngleX = 0;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -170;
					maxAngleY = 170;
				};
			};
		};	
		
		
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		crewVulnerable = "true";
		cargocaneject = 1;	
		ejectDeadCargo = true;
		transportMaxWeapons = 15;
		transportMaxMagazines = 45;
		transportMaxBackpacks = 10;
		cargoGetInAction[] = {"GetOutLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[]={"passenger_generic01_foldhands"};
		
		// Flight Model, Driving
		simulation = "airplaneX";	// redo as BUILDING?
		driveOnComponent[] = {"wheel_1_1","wheel_2_1","wheel_2_2","wheel_3_1","wheel_3_2"}; 
		//wheelComponentSteerL[] = {"wheel_1_1","wheel_1_1_damper"};
		//wheelComponentSteerR[] = {}; // typically nose wheel + main undercarriage
		//wheelComponentFixedL[] = {"wheel_2_1","wheel_2_1_damper"};
		//wheelComponentFixedR[] = {"wheel_2_2","wheel_2_2_damper"};
		flapsFrictionCoef = 2;
		wheelSteeringSensitivity = 2.0;
		aileronSensitivity = 0.55;
		elevatorSensitivity = 1;
		noseDownCoef = 1;
		gearUpTime = 4.5;
		gearDownTime = 4;	
		landingSpeed = 180;		
		acceleration = 200; 	
		maxSpeed = 643;		
		landingAoa = "rad 10"; 			
		thrustCoef[]= {1.8, 1.6, 1.5, 1.2, 1.1, 1.0, 0.9, 0.8, 0.7, 0.6, 0.4, 0.3, 0.2, 0.1, 0.0, 0.0};
		envelope[]=	{ 0.3,0.5,1.0,1.8,2.8,3.3,3.5,3.2,2.6,2.0,1.5,1.0,0.5,0.0 };
		rudderInfluence = 0.25;
		angleOfIndicence = 0.05235987;
		draconicForceXCoef = 2.5;
		draconicForceYCoef = 1;
		draconicForceZCoef = 0.5;
		draconicTorqueXCoef = 8;
		draconicTorqueYCoef = 1.5;
		altFullForce = 12000;
		altNoForce = 16000;
		
		// can float, water
		canFloat = 1;
		WaterLeakiness = 0;
		waterResistanceCoef = 0.004;
		
		
		// Weapons, Armor, damage, Eject, etc
		irScanRangeMin = 500;		
		irScanRangeMax = 5000;		
		irScanToEyeFactor = 2;		
		accuracy = 0.15;		
		armor = 65;					
		damageResistance = 0.00278;	
		destrType = DestructWreck;	
		threat[] = {1, 1, 1};		
		ejectSpeed[] = {0, 0, 0};
		laserScanner = 0;		
		gunAimDown = 0.029000;	
		headAimDown = 0.0000;		
		minFireTime = 30;		
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine"};
		damageEffect = "DamageSmokePlane";
				
		// Sounds + other
		soundgetin[] = {"\vqi_c130\c130\data\sounds\close",db--15, 1.0};
		soundgetout[] = {"\vqi_c130\c130\data\sounds\open",db--15, 1.0};
		soundengineonint[] = {"\vqi_c130\c130\data\sounds\int_start_1", db-15, 1.0};
		soundengineonext[] = {"\vqi_c130\c130\data\sounds\ext_start_1", db-8, 1.0, 600};
		soundengineoffint[] = {"\vqi_c130\c130\data\sounds\int_stop_1", db-15, 1.0};
		soundengineoffext[] = {"\vqi_c130\c130\data\sounds\ext_stop_1", db-8, 1.0, 600};
	
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 1.5};
		
		audible = 7;
		
		// Camo
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"\vqi_c130\c130\data\c130j_body_co.paa", "\vqi_c130\c130\data\c130j_wings_co.paa"};
		
		// Sounds
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_02\gear_up", 0.794328, 1.0, 150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_02\gear_down", 0.794328, 1.0, 150};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Up", 0.630957, 1.0, 100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Down", 0.630957, 1.0, 100};
		
		class Sounds
		{
			class EngineLowOut
			{
			sound[] =  {"\vqi_c130\C130\data\sounds\ext_engine_low", db5, 1, 900};
			frequency = "1.0 min (rpm + 0.5)";
			volume = "camPos*engineOn*(rpm factor[0.85, 0])";
			};
			class EngineHighOut
			{
			sound[] =  {"\vqi_c130\C130\data\sounds\ext_engine_hi", db5, 1, 1100};
			frequency = "1";
			volume = "camPos*engineOn*(rpm factor[0.25, 1.0])";
			};
			class ForsageOut
			{
			sound[] =  {"\vqi_c130\C130\data\sounds\ext_forsage_1", db3, 1.2, 1100};
			frequency = "1";
			volume = "camPos*engineOn*(thrust factor[0.5, 1.0])";
			cone[] = {1.14, 3.92, 2.5, 0.4};
			};
			class WindNoiseOut {
				sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise", 0.562341, 1.0, 150};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};

	 		class EngineLowIn
			{
				sound[] =  {"\vqi_c130\C130\data\sounds\int_engine_low", db5, 1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.65, 0]))";
			};
			class EngineHighIn
			{
				sound[] =  {"\vqi_c130\C130\data\sounds\int_engine_hi", db5, 1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(rpm factor[0.25, 1.0]))";
			};
			class ForsageIn
			{
				sound[] =  {"\vqi_c130\C130\data\sounds\int_forsage_1", db5, 1.2};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
			};
			class WindNoiseIn 
			{
				sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise", db-6, 1.0};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};
		
		class Exhausts 
		{
			class Exhaust1 
			{
				position = "exhaust1";  	
				direction = "exhaust1_dir";	
				effect = "ExhaustsEffectPlane";	
			};
			class Exhaust2
			{
				position = "exhaust2";  	
				direction = "exhaust2_dir";	
				effect = "ExhaustsEffectPlane";
			};			
			class Exhaust3
			{
				position = "exhaust3";  	
				direction = "exhaust3_dir";	
				effect = "ExhaustsEffectPlane";
			};			
			class Exhaust4
			{
				position = "exhaust4";  	
				direction = "exhaust4_dir";	
				effect = "ExhaustsEffectPlane";
			};			
		};
		
		class MFD {
			class AirplaneHUD {
				// Neophron HUD
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.0, 1.0, 0.0, 0.1};
				enableParallax = 0;
				
				class Bones {
					class PlaneOrientation {
						type = "fixed";
						pos[] = {0.5, 0.53};
					};
					
					class WeaponAim {
						type = "vector";
						source = "weapon";
						pos0[] = {0.5, 0.53};
						pos10[] = {1.5, 1.53};
					};
					
					class Velocity {
						type = "vector";
						source = "velocity";
						pos0[] = {0.5, 0.53};
						pos10[] = {1.5, 1.53};
					};
					
					class Level0 {
						type = "horizon";
						pos0[] = {0.5, 0.53};
						pos10[] = {1.5, 1.53};
						angle = 0;
					};
					
					class TerrainBone {
						type = "linear";
						source = "altitudeAGL";
						sourceScale = 1.0;
						min = 0;
						max = 200;
						minPos[] = {0.0, 0.666};
						maxPos[] = {0.0, 0.4};
					};
				};
				
				class Draw {
					color[] = {0.0, 1.0, 0.0};
					alpha = 0.9;
					condition = "on";
					
					class Horizont {
						clipTL[] = {0.25, 0.25};
						clipBR[] = {0.75, 0.75};
						
						class Dimmed {
							class Level00 {
								type = "line";
								width = 4.0;
								points[] = {{"Level0", {-0.200 * 1.4, 0 * 1.4}, 1}, {"Level0", {-0.125 * 1.4, 0 * 1.4}, 1}, {}, {"Level0", {-0.045 * 1.4, 0 * 1.4}, 1}, {"Level0", {-0.005 * 1.4, 0 * 1.4}, 1}, {}, {"Level0", {0.005 * 1.4, 0 * 1.4}, 1}, {"Level0", {0.045 * 1.4, 0 * 1.4}, 1}, {}, {"Level0", {0.125 * 1.4, 0 * 1.4}, 1}, {"Level0", {0.200 * 1.4, 0 * 1.4}, 1}};
							};
							
							class Level2M5 : Level00 {
								type = "line";
								points[] = {{"Level0", {-0.200 * 1.4, -1.0 / 10 * 5}, 1}, {"Level0", {-0.125 * 1.4, -1.0 / 10 * 5}, 1}, {}, {"Level0", {+0.125 * 1.4, -1.0 / 10 * 5}, 1}, {"Level0", {+0.200 * 1.4, -1.0 / 10 * 5}, 1}};
							};
							
							class VALM2_1_5 {
								type = "text";
								source = "static";
								text = 5;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0", {0.000 * 1.4, -0.020 * 1.4 - 1.0 / 10 * 5}, 1};
								right[] = {"Level0", {0.050 * 1.4, -0.020 * 1.4 - 1.0 / 10 * 5}, 1};
								down[] = {"Level0", {0.000 * 1.4, +0.020 * 1.4 - 1.0 / 10 * 5}, 1};
							};
							
							class Level2P5 : Level00 {
								type = "line";
								points[] = {{"Level0", {-0.200 * 1.4, +1.0 / 10 * 5}, 1}, {"Level0", {-0.125 * 1.4, +1.0 / 10 * 5}, 1}, {}, {"Level0", {+0.125 * 1.4, +1.0 / 10 * 5}, 1}, {"Level0", {+0.200 * 1.4, +1.0 / 10 * 5}, 1}};
							};
							
							class VALP2_1_5 {
								type = "text";
								source = "static";
								text = -5;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0", {0.000 * 1.4, -0.020 * 1.4 + 1.0 / 10 * 5}, 1};
								right[] = {"Level0", {0.050 * 1.4, -0.020 * 1.4 + 1.0 / 10 * 5}, 1};
								down[] = {"Level0", {0.000 * 1.4, +0.020 * 1.4 + 1.0 / 10 * 5}, 1};
							};
							
							class Level2M10 : Level00 {
								type = "line";
								points[] = {{"Level0", {-0.200 * 1.4, -1.0 / 10 * 10}, 1}, {"Level0", {-0.125 * 1.4, -1.0 / 10 * 10}, 1}, {}, {"Level0", {+0.125 * 1.4, -1.0 / 10 * 10}, 1}, {"Level0", {+0.200 * 1.4, -1.0 / 10 * 10}, 1}};
							};
							
							class VALM2_1_10 {
								type = "text";
								source = "static";
								text = 10;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0", {0.000 * 1.4, -0.020 * 1.4 - 1.0 / 10 * 10}, 1};
								right[] = {"Level0", {0.050 * 1.4, -0.020 * 1.4 - 1.0 / 10 * 10}, 1};
								down[] = {"Level0", {0.000 * 1.4, +0.020 * 1.4 - 1.0 / 10 * 10}, 1};
							};
							
							class Level2P10 : Level00 {
								type = "line";
								points[] = {{"Level0", {-0.200 * 1.4, +1.0 / 10 * 10}, 1}, {"Level0", {-0.125 * 1.4, +1.0 / 10 * 10}, 1}, {}, {"Level0", {+0.125 * 1.4, +1.0 / 10 * 10}, 1}, {"Level0", {+0.200 * 1.4, +1.0 / 10 * 10}, 1}};
							};
							
							class VALP2_1_10 {
								type = "text";
								source = "static";
								text = -10;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0", {0.000 * 1.4, -0.020 * 1.4 + 1.0 / 10 * 10}, 1};
								right[] = {"Level0", {0.050 * 1.4, -0.020 * 1.4 + 1.0 / 10 * 10}, 1};
								down[] = {"Level0", {0.000 * 1.4, +0.020 * 1.4 + 1.0 / 10 * 10}, 1};
							};
							
							class Level2M15 : Level00 {
								type = "line";
								points[] = {{"Level0", {-0.200 * 1.4, -1.0 / 10 * 15}, 1}, {"Level0", {-0.125 * 1.4, -1.0 / 10 * 15}, 1}, {}, {"Level0", {+0.125 * 1.4, -1.0 / 10 * 15}, 1}, {"Level0", {+0.200 * 1.4, -1.0 / 10 * 15}, 1}};
							};
							
							class VALM2_1_15 {
								type = "text";
								source = "static";
								text = 15;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0", {0.000 * 1.4, -0.020 * 1.4 - 1.0 / 10 * 15}, 1};
								right[] = {"Level0", {0.050 * 1.4, -0.020 * 1.4 - 1.0 / 10 * 15}, 1};
								down[] = {"Level0", {0.000 * 1.4, +0.020 * 1.4 - 1.0 / 10 * 15}, 1};
							};
							
							class Level2P15 : Level00 {
								type = "line";
								points[] = {{"Level0", {-0.200 * 1.4, +1.0 / 10 * 15}, 1}, {"Level0", {-0.125 * 1.4, +1.0 / 10 * 15}, 1}, {}, {"Level0", {+0.125 * 1.4, +1.0 / 10 * 15}, 1}, {"Level0", {+0.200 * 1.4, +1.0 / 10 * 15}, 1}};
							};
							
							class VALP2_1_15 {
								type = "text";
								source = "static";
								text = -15;
								align = "center";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0", {0.000 * 1.4, -0.020 * 1.4 + 1.0 / 10 * 15}, 1};
								right[] = {"Level0", {0.050 * 1.4, -0.020 * 1.4 + 1.0 / 10 * 15}, 1};
								down[] = {"Level0", {0.000 * 1.4, +0.020 * 1.4 + 1.0 / 10 * 15}, 1};
							};
						};
					};
					
					class PlaneOrientationCrosshair {
						type = "line";
						width = 4.0;
						points[] = {{"PlaneOrientation", {-0.125, 0.0}, 1}, {"PlaneOrientation", {-0.05, 0.0}, 1}, {"PlaneOrientation", {-0.025, 0.05}, 1}, {"PlaneOrientation", {0.0, 0.0}, 1}, {"PlaneOrientation", {0.025, 0.05}, 1}, {"PlaneOrientation", {0.05, 0.0}, 1}, {"PlaneOrientation", {0.125, 0.0}, 1}};
					};
					
					class PlaneMovementCrosshair {
						type = "line";
						width = 4.0;
						points[] = {{"Velocity", {0, -0.02}, 1}, {"Velocity", {0.01, -0.01732}, 1}, {"Velocity", {0.01732, -0.01}, 1}, {"Velocity", {0.02, 0}, 1}, {"Velocity", {0.01732, 0.01}, 1}, {"Velocity", {0.01, 0.01732}, 1}, {"Velocity", {0, 0.02}, 1}, {"Velocity", {-0.01, 0.01732}, 1}, {"Velocity", {-0.01732, 0.01}, 1}, {"Velocity", {-0.02, 0}, 1}, {"Velocity", {-0.01732, -0.01}, 1}, {"Velocity", {-0.01, -0.01732}, 1}, {"Velocity", {0, -0.02}, 1}, {}, {"Velocity", {0.04, 0}, 1}, {"Velocity", {0.02, 0}, 1}, {}, {"Velocity", {-0.04, 0}, 1}, {"Velocity", {-0.02, 0}, 1}, {}, {"Velocity", {0, -0.04}, 1}, {"Velocity", {0, -0.02}, 1}};
					};
					
					class WeaponName {
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.03, 0.94}, 1};
						right[] = {{0.08, 0.94}, 1};
						down[] = {{0.03, 0.98}, 1};
					};
					
					class AmmoCount {
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.03, 0.89}, 1};
						right[] = {{0.08, 0.89}, 1};
						down[] = {{0.03, 0.93}, 1};
					};
					
					class FlapsGroup {
						type = "group";
						condition = "flaps";
						
						class FlapsText {
							type = "text";
							source = "static";
							text = FLAPS;
							align = "right";
							scale = 1;
							pos[] = {{0.03, 0.53 - 0.045}, 1};
							right[] = {{0.08, 0.53 - 0.045}, 1};
							down[] = {{0.03, 0.53 - 0.005}, 1};
						};
					};
					
					class GearGroup {
						type = "group";
						condition = "ils";
						
						class GearText {
							type = "text";
							source = "static";
							text = GEAR;
							align = "right";
							scale = 1;
							pos[] = {{0.03, 0.53 + 0.005}, 1};
							right[] = {{0.08, 0.53 + 0.005}, 1};
							down[] = {{0.03, 0.53 + 0.045}, 1};
						};
					};
					
					class StallGroup {
						type = "group";
						condition = "stall";
						color[] = {1.0, 0.0, 0.0};
						blinkingPattern[] = {0.2, 0.2};
						blinkingStartsOn = 1;
						
						class StallText {
							type = "text";
							source = "static";
							text = STALL;
							align = "center";
							scale = 1;
							pos[] = {{0.5, 0.53 - 0.25}, 1};
							right[] = {{0.55, 0.53 - 0.25}, 1};
							down[] = {{0.5, 0.53 - 0.21}, 1};
						};
					};
					
					class LightsGroup {
						type = "group";
						condition = "lights";
						
						class LightsText {
							type = "text";
							source = "static";
							text = LIGHTS;
							align = "right";
							scale = 1;
							pos[] = {{0.03, 0.53 + 0.055}, 1};
							right[] = {{0.08, 0.53 + 0.055}, 1};
							down[] = {{0.03, 0.53 + 0.095}, 1};
						};
					};
					
					class CollisionLightsGroup {
						type = "group";
						condition = "collisionlights";
						
						class CollisionLightsText {
							type = "text";
							source = "static";
							text = "A-COL";
							align = "right";
							scale = 1;
							pos[] = {{0.03, 0.53 + 0.105}, 1};
							right[] = {{0.08, 0.53 + 0.105}, 1};
							down[] = {{0.03, 0.53 + 0.145}, 1};
						};
					};
					
					class PitchNumber {
						type = "text";
						source = "horizonDive";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = {{0.51, 0.89}, 1};
						right[] = {{0.56, 0.89}, 1};
						down[] = {{0.51, 0.93}, 1};
					};
					
					class PitchText {
						type = "text";
						source = "static";
						text = PITCH;
						align = "left";
						scale = 1;
						pos[] = {{0.49, 0.89}, 1};
						right[] = {{0.54, 0.89}, 1};
						down[] = {{0.49, 0.93}, 1};
					};
					
					class RollNumber {
						type = "text";
						source = "horizonBank";
						sourceScale = 57.2958;
						align = "right";
						scale = 1;
						pos[] = {{0.51, 0.94}, 1};
						right[] = {{0.56, 0.94}, 1};
						down[] = {{0.51, 0.98}, 1};
					};
					
					class RollText {
						type = "text";
						source = "static";
						text = ROLL;
						align = "left";
						scale = 1;
						pos[] = {{0.49, 0.94}, 1};
						right[] = {{0.54, 0.94}, 1};
						down[] = {{0.49, 0.98}, 1};
					};
					
					class SpeedNumber {
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						scale = 1;
						pos[] = {{0.13, 0.14}, 1};
						right[] = {{0.18, 0.14}, 1};
						down[] = {{0.13, 0.18}, 1};
					};
					
					class SpeedText {
						type = "text";
						source = "static";
						text = SPD;
						align = "left";
						scale = 1;
						pos[] = {{0.11, 0.14}, 1};
						right[] = {{0.16, 0.14}, 1};
						down[] = {{0.11, 0.18}, 1};
					};
					
					class TerrainGroup {
						type = "group";
						clipTL[] = {0.0, 0.0};
						clipBR[] = {1.0, 0.6};
						
						class TerrainArrow {
							type = "line";
							width = 4.0;
							points[] = {{{0.86 - 0.018, 0.4}, 1}, {{0.86, 0.4}, 1}, {}, {"TerrainBone", {0.86 - 0.018, 0.0 - 0.016}, 1}, {"TerrainBone", {0.86, 0.0}, 1}, {"TerrainBone", {0.86 - 0.018, 0.0 + 0.016}, 1}};
						};
					};
					
					class TerrainText {
						type = "text";
						source = "static";
						text = ATL;
						align = "left";
						scale = 1;
						pos[] = {{0.85, 0.1}, 1};
						right[] = {{0.9, 0.1}, 1};
						down[] = {{0.85, 0.14}, 1};
					};
					
					class TerrainNumber {
						type = "text";
						source = "altitudeAGL";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{0.85, 0.14}, 1};
						right[] = {{0.9, 0.14}, 1};
						down[] = {{0.85, 0.18}, 1};
					};
					
					class AltitudeNumber {
						type = "text";
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.89, 0.14}, 1};
						right[] = {{0.94, 0.14}, 1};
						down[] = {{0.89, 0.18}, 1};
					};
					
					class AltitudeText {
						type = "text";
						source = "static";
						text = ASL;
						align = "right";
						scale = 1;
						pos[] = {{0.89, 0.1}, 1};
						right[] = {{0.94, 0.1}, 1};
						down[] = {{0.89, 0.14}, 1};
					};
					
					class AltitudeArrow {
						type = "line";
						width = 4.0;
						points[] = {{{0.88 + 0.018, 0.40 - 0.016}, 1}, {{0.88, 0.4}, 1}, {{0.88 + 0.018, 0.40 + 0.016}, 1}};
					};
					
					class AltitudeLine {
						type = "line";
						width = 4.0;
						points[] = {{{0.87, 0.6}, 1}, {{0.87, 0.2}, 1}};
					};
					
					class AltitudeScale {
						type = "scale";
						horizontal = 0;
						source = "altitudeASL";
						sourceScale = 1;
						width = 4.0;
						top = 0.6;
						center = 0.4;
						bottom = 0.2;
						lineXleft = 0.88;
						lineYright = 0.89;
						lineXleftMajor = 0.88;
						lineYrightMajor = 0.9;
						majorLineEach = 5;
						numberEach = 5;
						step = 20;
						stepSize = (0.60 - 0.20) / 15;
						align = "right";
						scale = 1;
						pos[] = {0.91, 0.58};
						right[] = {0.96, 0.58};
						down[] = {0.91, 0.62};
					};
					
					class ClimbNumber {
						type = "text";
						source = "vspeed";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.89, 0.94}, 1};
						right[] = {{0.94, 0.94}, 1};
						down[] = {{0.89, 0.98}, 1};
					};
					
					class ClimbText {
						type = "text";
						source = "static";
						text = CLIMB;
						align = "left";
						scale = 1;
						pos[] = {{0.87, 0.94}, 1};
						right[] = {{0.92, 0.94}, 1};
						down[] = {{0.87, 0.98}, 1};
					};
					
					class ClimbArrow {
						type = "line";
						width = 4.0;
						points[] = {{{0.88 + 0.018, 0.80 - 0.016}, 1}, {{0.88, 0.8}, 1}, {{0.88 + 0.018, 0.80 + 0.016}, 1}};
					};
					
					class ClimbLine {
						type = "line";
						width = 4.0;
						points[] = {{{0.87, 0.925}, 1}, {{0.87, 0.675}, 1}};
					};
					
					class ClimbScale {
						type = "scale";
						horizontal = 0;
						source = "vspeed";
						sourceScale = 1;
						width = 4.0;
						top = 0.925;
						center = 0.8;
						bottom = 0.675;
						lineXleft = 0.88;
						lineYright = 0.89;
						lineXleftMajor = 0.88;
						lineYrightMajor = 0.9;
						majorLineEach = 2;
						numberEach = 4;
						step = 5;
						stepSize = (0.925 - 0.675) / 15;
						align = "right";
						scale = 1;
						pos[] = {0.91, 0.905};
						right[] = {0.96, 0.905};
						down[] = {0.91, 0.945};
					};
					
					class HeadingArrow {
						type = "line";
						width = 3.0;
						points[] = {{{0.5 - 0.02, 0.11 - 0.02}, 1}, {{0.5, 0.11}, 1}, {{0.5 + 0.02, 0.11 - 0.02}, 1}};
					};
					
					class HeadingLine {
						type = "line";
						width = 4.0;
						points[] = {{{0.3, 0.12}, 1}, {{0.7, 0.12}, 1}};
					};
					
					class HeadingScale {
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1.0;
						width = 4.0;
						top = 0.3;
						center = 0.5;
						bottom = 0.7;
						lineXleft = 0.06 + 0.05;
						lineYright = 0.05 + 0.05;
						lineXleftMajor = 0.06 + 0.05;
						lineYrightMajor = 0.04 + 0.05;
						majorLineEach = 5;
						numberEach = 5;
						step = 18 / 9;
						stepSize = (0.70 - 0.3) / 15;
						align = "center";
						scale = 1.0;
						pos[] = {0.3, 0.0 + 0.05};
						right[] = {0.35, 0.0 + 0.05};
						down[] = {0.3, 0.04 + 0.05};
					};
					
					class AAMissileCrosshairGroup {
						type = "group";
						condition = "AAmissile";
						
						class AAMissileCrosshair {
							type = "line";
							width = 4.0;
							points[] = {{"WeaponAim", {0, -0.25}, 1}, {"WeaponAim", {0.0434, -0.2462}, 1}, {"WeaponAim", {0.0855, -0.234925}, 1}, {"WeaponAim", {0.125, -0.2165}, 1}, {"WeaponAim", {0.1607, -0.1915}, 1}, {"WeaponAim", {0.1915, -0.1607}, 1}, {"WeaponAim", {0.2165, -0.125}, 1}, {"WeaponAim", {0.234925, -0.0855}, 1}, {"WeaponAim", {0.2462, -0.0434}, 1}, {"WeaponAim", {0.25, 0}, 1}, {"WeaponAim", {0.2462, 0.0434}, 1}, {"WeaponAim", {0.234925, 0.0855}, 1}, {"WeaponAim", {0.2165, 0.125}, 1}, {"WeaponAim", {0.1915, 0.1607}, 1}, {"WeaponAim", {0.1607, 0.1915}, 1}, {"WeaponAim", {0.125, 0.2165}, 1}, {"WeaponAim", {0.0855, 0.234925}, 1}, {"WeaponAim", {0.0434, 0.2462}, 1}, {"WeaponAim", {0, 0.25}, 1}, {"WeaponAim", {-0.0434, 0.2462}, 1}, {"WeaponAim", {-0.0855, 0.234925}, 1}, {"WeaponAim", {-0.125, 0.2165}, 1}, {"WeaponAim", {-0.1607, 0.1915}, 1}, {"WeaponAim", {-0.1915, 0.1607}, 1}, {"WeaponAim", {-0.2165, 0.125}, 1}, {"WeaponAim", {-0.234925, 0.0855}, 1}, {"WeaponAim", {-0.2462, 0.0434}, 1}, {"WeaponAim", {-0.25, 0}, 1}, {"WeaponAim", {-0.2462, -0.0434}, 1}, {"WeaponAim", {-0.234925, -0.0855}, 1}, {"WeaponAim", {-0.2165, -0.125}, 1}, {"WeaponAim", {-0.1915, -0.1607}, 1}, {"WeaponAim", {-0.1607, -0.1915}, 1}, {"WeaponAim", {-0.125, -0.2165}, 1}, {"WeaponAim", {-0.0855, -0.234925}, 1}, {"WeaponAim", {-0.0434, -0.2462}, 1}, {"WeaponAim", {0, -0.25}, 1}};
						};
					};
					
					class ATMissileCrosshairGroup {
						condition = "ATmissile";
						type = "group";
						
						class ATMissileCrosshair {
							type = "line";
							width = 4.0;
							points[] = {{"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {-0.15, -0.15 + 0.02}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {-0.15, 0.15 - 0.02}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {0.15, -0.15 + 0.02}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {0.15, 0.15 - 0.02}, 1}, {}, {"WeaponAim", {-0.15, -0.15}, 1}, {"WeaponAim", {-0.15 + 0.02, -0.15}, 1}, {}, {"WeaponAim", {-0.15, 0.15}, 1}, {"WeaponAim", {-0.15 + 0.02, 0.15}, 1}, {}, {"WeaponAim", {0.15, -0.15}, 1}, {"WeaponAim", {0.15 - 0.02, -0.15}, 1}, {}, {"WeaponAim", {0.15, 0.15}, 1}, {"WeaponAim", {0.15 - 0.02, 0.15}, 1}};
						};
					};
					
					class BombCrosshairGroup {
						type = "group";
						condition = "bomb";
						
						class BombCrosshair {
							type = "line";
							width = 4.0;
							points[] = {{"WeaponAim", {0, -0.1}, 1}, {"WeaponAim", {0.01736, -0.09848}, 1}, {"WeaponAim", {0.0342, -0.09397}, 1}, {"WeaponAim", {0.05, -0.0866}, 1}, {"WeaponAim", {0.06428, -0.0766}, 1}, {"WeaponAim", {0.0766, -0.06428}, 1}, {"WeaponAim", {0.0866, -0.05}, 1}, {"WeaponAim", {0.09397, -0.0342}, 1}, {"WeaponAim", {0.09848, -0.01736}, 1}, {"WeaponAim", {0.1, 0}, 1}, {"WeaponAim", {0.09848, 0.01736}, 1}, {"WeaponAim", {0.09397, 0.0342}, 1}, {"WeaponAim", {0.0866, 0.05}, 1}, {"WeaponAim", {0.0766, 0.06428}, 1}, {"WeaponAim", {0.06428, 0.0766}, 1}, {"WeaponAim", {0.05, 0.0866}, 1}, {"WeaponAim", {0.0342, 0.09397}, 1}, {"WeaponAim", {0.01736, 0.09848}, 1}, {"WeaponAim", {0, 0.1}, 1}, {"WeaponAim", {-0.01736, 0.09848}, 1}, {"WeaponAim", {-0.0342, 0.09397}, 1}, {"WeaponAim", {-0.05, 0.0866}, 1}, {"WeaponAim", {-0.06428, 0.0766}, 1}, {"WeaponAim", {-0.0766, 0.06428}, 1}, {"WeaponAim", {-0.0866, 0.05}, 1}, {"WeaponAim", {-0.09397, 0.0342}, 1}, {"WeaponAim", {-0.09848, 0.01736}, 1}, {"WeaponAim", {-0.1, 0}, 1}, {"WeaponAim", {-0.09848, -0.01736}, 1}, {"WeaponAim", {-0.09397, -0.0342}, 1}, {"WeaponAim", {-0.0866, -0.05}, 1}, {"WeaponAim", {-0.0766, -0.06428}, 1}, {"WeaponAim", {-0.06428, -0.0766}, 1}, {"WeaponAim", {-0.05, -0.0866}, 1}, {"WeaponAim", {-0.0342, -0.09397}, 1}, {"WeaponAim", {-0.01736, -0.09848}, 1}, {"WeaponAim", {0, -0.1}, 1}, {}, {"Velocity", 0.001, "WeaponAim", {0.0, 0.0}, 1}, {"Velocity", {0.0, 0.0}, 1}};
						};
					};
				};
			};
		};
		
		class ViewPilot : ViewPilot 
		{
			initFov = 1; 	  	
			minFov = 0.3;	
			maxFov = 1.2;		
			initAngleX = 0;	 	
			minAngleX = -75; 	
			maxAngleX = 85;	
			initAngleY = 0;	 
			minAngleY = -170;	
			maxAngleY = 170;	
			
		
		}; 
		
		class HitPoints: HitPoints
		{
			class HitTurret
			   {
				armor = 0.8;
				material = 51;
				name = "turret";
				visual = "turret";
				passThrough = 1;
			   };
			   class HitGun
			   {
				armor = 0.6;
				material = 52;
				name = "gun";
				visual = "gun";
				passThrough = 1;
			   };
		};
		
		class AnimationSources
		{
			class door_2_2
			{
				source=user;
				animPeriod = 10;
			};
			
			class door_2_1:door_2_2{};
			class door_1:door_2_2{};
			class ramp_top:door_2_2{};
			class ramp_bottom:door_2_2{};
	
			class proxies_seats
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};			

		};
		
		class UserActions	
		{							
			class opendoor
			{
				displayName="Open Front Door";
				position="pos cargo";
				radius=15;
				showWindow = 0;
				onlyforplayer = true;
				hideOnUse = 1;
				condition="this animationPhase ""door_1"" < 0.5";
//						statement="this animate [""door_1"", 1]; this say ""FlapsUp""";
				statement="this animate [""door_1"", 1];";
			};
			
			class closedoor
			{
				displayName="Close Front Door";
				position="pos cargo";
				radius=15;
				showWindow = 0;
				onlyforplayer = true;
				hideOnUse = 1;
				condition="this animationPhase ""door_1"" >= 0.5 ";
				statement="this animate [""door_1"", 0];";
			};

			
			class opendoor_aft
			{
				displayName="Open Rear Side Doors";
				position="pos cargo";
				radius=15;
				showWindow = 0;
				onlyforplayer = true;
				hideOnUse = 1;
				condition="this animationPhase ""door_2_1"" < 0.5";
				statement="this animate [""door_2_1"", 1]; this animate [""door_2_2"", 1]";
			};
			
			class closedoor_aft
			{
				displayName="Close Rear Side Doors";
				position="pos cargo";
				radius=15;
				showWindow = 0;
				onlyforplayer = true;
				hideOnUse = 1;
				condition="this animationPhase ""door_2_1"" >= 0.5 ";
				statement="this animate [""door_2_1"", 0],this animate [""door_2_2"", 0]";
			};


			class openramp
			{
				displayName="Open Cargo Ramp";
				position="pos cargo";
				radius=15;
				showWindow = 0;
				onlyforplayer = true;
				hideOnUse = 1;
				condition="this animationPhase ""ramp_top"" < 0.5";
				statement="this animate [""ramp_top"", 1]; this animate [""ramp_bottom"", 1]";
				
			};
			
			class closeramp
			{
				displayName="Close Cargo Ramp";
				position="pos cargo";
				radius=15;
				showWindow = 0;
				onlyforplayer = true;
				hideOnUse = 1;
				condition="this animationPhase ""ramp_top"" >= 0.5 ";
				statement="this animate [""ramp_top"", 0]; this animate [""ramp_bottom"", 0]";						
			};
		};


		class Reflectors
		{
			class sab_Left
			{
				color[] 		= {1900, 1800, 1700};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				
				position = "L svetlo";			
				direction = "L svetlo dir";			
				hitpoint = "L svetlo";			
				selection = "L svetlo";		
				
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 70;						/// angle of full light
				outerAngle 		= 120;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 1;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 1.0;						/// how big is the flare
				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0; 
					linear 			= 0; 
					quadratic 		= 0.25; 
					hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 60;		/// this allows adding more lights into scene
				};
			};
			
			class sab_Right: sab_Left
			{
				position = "P svetlo";
				direction = "P svetlo dir";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};	
			class sab_Left2: sab_Left
			{
			
				position = "L2 svetlo";
				direction = "L svetlo dir";
				hitpoint = "L2 svetlo";
				selection = "L2 svetlo";
				
			};
			class sab_Right2: sab_Left
			{
				
				position = "P2 svetlo";
				direction = "P svetlo dir";
				hitpoint = "P2 svetlo";
				selection = "P2 svetlo";
				
			};
		};	
		
		class MarkerLights
		{
			class sab_RedStill
			{
				name = "PositionLight_red";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.05;
				blinking = false;
			};
			class sab_GreenStill
			{
				name = "PositionLight_green";
				color[] = {0.1, 1.0, 0.1, 1};
				ambient[] = {0.01, 0.1, 0.01, 1};
				brightness = 0.05;
				blinking = false;
			};
			class sab_WhiteStill
			{
				name = "PositionLight_white";
				color[] = {1.0, 1.0, 1.0, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.05;
				blinking = false;
			};
			
			class sab_WhiteCollision
			{
				name = "CollisionLight";
				color[] = {1.0, 1.0, 1.0, 1};
				ambient[] = {0.1, 0.1, 0.1, 1};
				brightness = 0.1;
				blinking = true;
			};
		};
		
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"vqi_c130\c130\data\c130j_sklo.rvmat",
				"vqi_c130\c130\data\c130j_sklo_damage.rvmat",

				"vqi_c130\c130\data\c130j_sklo_in.rvmat",
				"vqi_c130\c130\data\c130j_sklo_in_damage.rvmat",

				"vqi_c130\c130\data\c130j_body.rvmat",
				"vqi_c130\c130\data\c130j_body_damage.rvmat",
				"vqi_c130\c130\data\c130j_body_destruct.rvmat",

				"vqi_c130\c130\data\c130j_interior.rvmat",
				"vqi_c130\c130\data\c130j_interior_damage.rvmat",
				"vqi_c130\c130\data\c130j_interior_destruct.rvmat",

				"vqi_c130\c130\data\c130j_wings.rvmat",
				"vqi_c130\c130\data\c130j_wings_damage.rvmat",
				"vqi_c130\c130\data\c130j_wings_destruct.rvmat",

				"vqi_c130\c130\data\default.rvmat",
				"vqi_c130\c130\data\default_destruct.rvmat",
			};
		};
				
		class TransportBackpacks 
		{
			class _xx_B_Parachute {
				backpack = "B_Parachute";
				count = 3;
			};
		};
	};

	
	// variations
	class VQI_C130_NIGHTMARE : VQI_C130_NIGHTMARE_Base 
	{
		side= 1; faction= BLU_F; crew = "B_Pilot_F"; vehicleClass = "VQI_Aircraft"; author = "Von Quest / Sabre[Dust]"; scope = public;	
		displayName = "XC-130: Nightmare";
	
		
	};
};



/////////////////////////////
/*

Special Thanks to Sabre[Dust]


*/
/////////////////////////////

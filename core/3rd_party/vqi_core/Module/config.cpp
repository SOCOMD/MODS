// : : : CORE Module System : : :
// 
#define private		0
#define protected	1
#define public		2


class CfgPatches 
{	
	class VQI_CORE // multi allowed?
	{	
		units[] = {"VQI_ModuleCORE"};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Modules_F"};
		author = "R. Von Quest";
	};
};



class CfgFunctions 
{
	class VQI
	{
		class CORESystem
		{
			class COREmod1    { file = "\vqi_core\module\fn_module.sqf"; };
			class COREmod2    { file = "\vqi_core\module\fn_module_sr.sqf"; };
			class COREinit    { file = "\vqi_core\init.sqf"; };
		};
	};
};



class CfgFactionClasses 
{	
	class NO_CATEGORY;
	class VQI_CORE : NO_CATEGORY
	{
		displayName = "=VQI= C. O. R. E";
	};
	class VQI_ZERODARKTHIRTY : NO_CATEGORY
	{
		displayName = "[ Zero Dark Thirty ]";
	};
};



class CfgVehicles {
	
	class Logic;	// internal game class reference
	
	class Module_F : Logic {
				class ArgumentsBaseUnits {
				 class Units; };
				class ModuleDescription {
				 class AnyBrain; };
	};


	class VQI_ModuleCORE : Module_F {
	icon = "\vqi_core\module\iconCORE.paa";
		scope = public;
		author = "R. Von Quest";
		category = "VQI_ZERODARKTHIRTY";
		displayName = "Starting & Gameplay Options";
		function = "VQI_fnc_COREMod1";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		
		class Arguments: ArgumentsBaseUnits
		{
			//class Units: Units {};
			class vqi_module_core_debughints { //Debug, Info, Hints
				displayName = "Debug/Hints/Info";
				description = "Recommend: OFF - For Testing & Experimentation ONLY";
				typeName = NUMBER;
				
				class Values
				{
					class 1core	{name = "OFF";  value = 0; default = 0;}; // ListBox Items
					class 2core	{name = "ON";   value = 1; };
				};
			};
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer1 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			
			
			class vqi_module_core_datetime_sm { //season/moon
				displayName = "Start Season/FullMoon";
				description = "Select Time of Year (winter, spring, summer, fall), DATE will be set to a FULL MOON Date to allow brighter nights.";
				typeName = NUMBER;
				
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; //
					class 2core	{name = "Winter";  value = 1; };
					class 3core	{name = "Spring";  value = 2; };
					class 4core	{name = "Summer";  value = 3; };
					class 5core	{name = "Autumn";  value = 4; };

				};
			};
			
			class vqi_module_core_datetime_daylight { //daylight
				displayName = "Random Start Time";
				description = "Random Start Time with HIGH probability of DAYTIME (sun up). This gives Night Ops a LOW probability if you prefer mostly Day Ops.";
				typeName = NUMBER;
				
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; //
					class 2core	{name = "99% of DayTime Start";  value = 1; };
					class 3core	{name = "90% of DayTime Start";  value = 2; };
					class 4core	{name = "80% of DayTime Start";  value = 3; };
					class 5core	{name = "70% of DayTime Start";  value = 4; };
					class 6core	{name = "Random StartTime: Day or Night";  value = 5; };
				};
			};
			
			class vqi_module_core_playerstart_location { //
				displayName = "Starting Location";
				description = "Select Start Location (see DOCs for more details on how the TOCs work). The TOCs are Custom Compositions (included), and need to be placed manually. BEFORE you place them, set the VERTICAL MODE to SEA LEVEL (straight line), or they will break. You MUST set the TOC to ON if using them of they will NOT work. Will Teleport all Players into the TOC.";
				typeName = NUMBER;
				
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; //
					class 2core	{name = "CampSite: Small (random location)";  value = 1; };
					class 3core	{name = "TOC 1: Basic (Office Building)";  value = 2; };
					class 4core	{name = "TOC 2: Advanced (Warehouse)";  value = 3; };
				};
			};
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer2 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////	
			
			class vqi_module_core_climate { //
				displayName = "Weather: Climate/Type";
				description = "Select Map/Region Weather. Currently ONLY used for Temperature/Season. MUST be ON for serveral addon equipment and options to run properly.";
				typeName = NUMBER;
				
				class Values
				{
					class 0core	{name = "Off";  value = 0; };
					class 1core	{name = "Polar/Ice/Sub-Zero";  value = 1; };
					class 2core	{name = "Tundra/Cold/Alpine";  value = 2; };
					class 3core	{name = "Temperate/Moderate";  value = 3; };
					class 4core	{name = "Mediterranean";  value = 4; default = 4;};
					class 5core	{name = "Jungle/Tropical";  value = 5; };
					class 6core	{name = "Arid/Desert";  value = 6; };
				};
			};
			
			class vqi_module_core_coldsnow { //
				displayName = "Weather: Snow Type";
				description = "Turn ON for Snowfall around player. AutoDetect checks for Temps below 32°F if CLIMATE is turned ON (above).";
				typeName = NUMBER;
				
				class Values
				{
					class 0core	{name = "Off";  value = 0; default = 0; }; //
					class 1core	{name = "Snow: Sparse"; value = 1; };
					class 2core	{name = "Snow: Light";  value = 2; };
					class 3core	{name = "Snow: Medium"; value = 3; };
					class 4core	{name = "Snow: Heavy";  value = 4; };
					class 5core	{name = "Snow: Storm";  value = 5; };
					class 6core	{name = "Snow: RANDOM"; value = 6; };
				};
			};
			class vqi_module_core_coldsnow_chance { //
				displayName = "Weather: Snow Chance";
				description = "Enter the probability (0-100%) of Snowfall selected above.";
				typeName = NUMBER;
				defaultValue = "33";
			};			
			
			class vqi_module_core_coldbreath { //
				displayName = "Weather: Cold Breath";
				description = "Turn ON to simuate a cold environment, and see the player's breath. Player ONLY. AutoDetect checks for Temps below 45°F if CLIMATE is turned ON (above).";
				typeName = NUMBER;
				
				class Values
				{
					class 0core	{name = "Off";  value = 0; default = 0; }; //
					class 1core	{name = "Breath: ON, AutoDetect";  value = 1; };
				};
			};			
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer3 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			
			
			class vqi_module_core_weaponsgear_player { //random single weapon, any
				displayName = "Starting Random Weapon";
				description = "Starting Weapons/Gear for Player (P=Primary, S=Sidearm, L=Launcher), see DOCs for Info/Mods";
				typeName = NUMBER;
				
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; //
					class 2core	{name = "1 Weapon, Random (P/S/L)";  value = 1; };
				};
			};
			
			class vqi_module_core_covert_unarmed { // Unarmed, Stealth
				displayName = "Covert / Black-Ops";
				description = "Viewed as a 'Non-Threat' when ALL conditions are met (see DOCs for details). Black-Ops Style Gameplay. NO Vest or VISIBLE Weapons Spotted by the Enemy. You can also Turn this option ON, via the default CORE Menu.";
				typeName = NUMBER;
				
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; //
					class 2core	{name = "ON - Stealth if Unarmed: Black-Ops";  value = 1; };
				};
			};
			
			class vqi_module_core_dragcarry { //
				displayName = "Drag & Carry Bodies";
				description = "Turns ON the ability to DRAG Bodies, CARRY Bodies and even LOAD Bodies of both Dead and Alive Units. VERY CLUNKY! (Credit: Original system donated by BangaBob with help from Das Attorney).";
				typeName = NUMBER;
				
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; //
					class 2core	{name = "ON - Drag/Carry"; value = 1; };
				};
			};	

			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer4 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			
			
			class vqi_module_core_startscreen { //
				displayName = "Starting Screen";
				description = "Select Image to display while Map/Game/Addons load. Blocks the player from seeing the setup, teleporting, etc. Starting immersion.";
				typeName = NUMBER;
				
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; //
					class 2core	{name = "World Map - Black/Plain";  value = 1; };
				};
			};			
			
			class vqi_module_core_msg_on { //
				displayName = "Starting Intro Message";
				description = "Displays Custom Starting Message (typed below) at Game Start.";
				typeName = NUMBER;
				
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; //
					class 2core	{name = "ON - Starting Text";  value = 1; };
				};
			};
			class vqi_module_core_msg_timed { //
				displayName = "Intro Msg Start";
				description = "Select the DELAY (seconds) before Message is displayed";
				typeName = NUMBER;
				defaultValue = "120";
			};	
			class vqi_module_core_msg_1 { //
				displayName = "Intro Msg Line 1";
				description = "Enter small Text for Top Line";
				typeName = STRING;
				defaultValue = "SECTION 20, BRITISH INTELLIGENCE";
			};
			class vqi_module_core_msg_2 { //
				displayName = "Intro Msg Line 2";
				description = "Enter small Text for Middle Line";
				typeName = STRING;
				defaultValue = "OPS CENTER, WAREHOUSE #213";
			};
			class vqi_module_core_msg_3 { //
				displayName = "Intro Msg Line 3";
				description = "Enter small Text for Bottom Line";
				typeName = STRING;
				defaultValue = "MIDDLE EAST - ISTANBUL, TURKEY";
			};
			class vqi_module_core_msg_x { //
				displayName = "Msg Loc X";
				description = "Enter the X (horizontal) value to adjust for your Screen/Interface size: +R/L - adding will push Text RIGHT";
				typeName = NUMBER;
				defaultValue = "0.6";
			};
			class vqi_module_core_msg_y { //
				displayName = "Msg Y Loc";
				description = "Enter the Y (vertical) value to adjust for your Screen/Interface size: +D/U - adding will push Text DOWN";
				typeName = NUMBER;
				defaultValue = "1.1";
			};	
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer5 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			

			class vqi_module_core_weaponsway { //
				displayName = "Custom WeaponSway";
				description = "Enter Number (0-1) for Aiming CoEfficient Modifer; 0 for Rock-Steady always, 1 for Default Weak-Ass Rookie; Recommend 0.1 - 0.3. Or use -1 for Game Default.";
				typeName = NUMBER;
				defaultValue = "0.1";
			};
			class vqi_module_core_stamina { //
				displayName = "Custom Stamina";
				description = "Turns On/Off the Stamina System. Stamina processes the physical limitations of a human within reasonable game limits. OFF is Game Default, ON turn 'ON' the Addon Override which is STAMINA OFF.";
				typeName = NUMBER;
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; //
					class 2core	{name = "ON - Override; Stamina OFF";  value = 1; };
				};
			};
			class vqi_module_core_holster { //
				displayName = "Holster Weapon";
				description = "Starts Player in a normal/casual stance, with Weapon on-back or holstered Sidearm.";
				typeName = NUMBER;
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; //
					class 2core	{name = "ON - Holster Weapon";  value = 1; };
				};
			};	
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer6 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer6a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };			
			class vqi_module_core_spacer6b { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer6c { displayName = " "; description = " "; typeName = STRING; defaultValue = " -- SUPPORT HELI: INFIL/EXFIL -- "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			
			
			class vqi_module_core_support_heli { //
				displayName = "Heli Support";
				description = "Select the Starting DEFAULT Type of Helicopter Support for Transport, Infil, etc. The Heli is assigned for the entire mission. You can change the Heli Type on standby in the TOCs as well.";
				typeName = NUMBER;
				class Values
				{
					class 1core	{name = "Off";  value = 0;  }; //
					class 2core	{name = "User Custom Heli #1 (civ stealth)";  value = 1; };
					class 3core	{name = "User Custom Heli #2 (mil stealth)";  value = 2; default = 2; };
					class 4core	{name = "User Custom Heli #3 w/ Door Gunners";  value = 3; };
					class 5core	{name = "User Custom Heli #4 w/ Door Gunners + CAS";  value = 4; };
				};
			};
			class vqi_module_core_heli_infil_1 { //
				displayName = "Support Heli #1";
				description = "Enter the CLASSNAME of the Infil/Exfil Helicopter. Heli #1 is the DEFAULT. You can change the Heli assigned, in-game from INSIDE a TOC (included composition). We usually use HELI #1 as our CIA Black-Ops undercover Transport.";
				typeName = STRING;
				defaultValue = "C_Heli_Light_01_civil_F";
			};
			class vqi_module_core_heli_infil_1_altL { //
				displayName = "Flight Alt - Land";
				description = "Enter the Flight Altitude over LAND";
				typeName = NUMBER;
				defaultValue = "400";
			};
			class vqi_module_core_heli_infil_1_altS { //
				displayName = "Flight Alt - Sea";
				description = "Enter the Flight Altitude over SEA";
				typeName = NUMBER;
				defaultValue = "400";
			};			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////		
			class vqi_module_core_spacer6d { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////				
			class vqi_module_core_heli_infil_2 { //
				displayName = "Support Heli #2";
				description = "Enter the CLASSNAME of the Infil/Exfil Helicopter. You can change the Heli assigned, in-game from INSIDE a TOC (included composition). We usually use HELI #2 as our small stealthy Spec-Ops Transport. Small Weapons Loadout is added to Cargo.";
				typeName = STRING;
				defaultValue = "B_Heli_Light_01_F";
			};
			class vqi_module_core_heli_infil_2_altL { //
				displayName = "Flight Alt - Land";
				description = "Enter the Flight Altitude over LAND";
				typeName = NUMBER;
				defaultValue = "50";
			};
			class vqi_module_core_heli_infil_2_altS { //
				displayName = "Flight Alt - Sea";
				description = "Enter the Flight Altitude over SEA";
				typeName = NUMBER;
				defaultValue = "5";
			};			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////		
			class vqi_module_core_spacer6e { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////				
			class vqi_module_core_heli_infil_3 { //
				displayName = "Support Heli #3";
				description = "Enter the CLASSNAME of the Infil/Exfil Helicopter. You can change the Heli assigned, in-game from INSIDE a TOC (included composition). We usually use HELI #3 as our Full Spec-Ops Transport. Medium Heli w/ Door Gunners. Weapons Loadout added to Cargo. CRRC Zodiac also availible on Heli #3";
				typeName = STRING;
				defaultValue = "B_Heli_Transport_01_camo_F";
			};
			class vqi_module_core_heli_infil_3_altL { //
				displayName = "Flight Alt - Land";
				description = "Enter the Flight Altitude over LAND";
				typeName = NUMBER;
				defaultValue = "50";
			};
			class vqi_module_core_heli_infil_3_altS { //
				displayName = "Flight Alt - Sea";
				description = "Enter the Flight Altitude over SEA";
				typeName = NUMBER;
				defaultValue = "5";
			};			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////		
			class vqi_module_core_spacer6f { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////				
			class vqi_module_core_heli_infil_4 { //
				displayName = "Support Heli #4";
				description = "Enter the CLASSNAME of the Infil/Exfil Helicopter. You can change the Heli assigned, in-game from INSIDE a TOC (included composition). We usuualy use HELI #4 as our Large Squad Deployment Transport. Large Heli w/ Door Gunners + Escort CAS Heli can also be Added. Large Weapons & Gear added to Cargo.";
				typeName = STRING;
				defaultValue = "B_Heli_Transport_03_F";
			};		
			class vqi_module_core_heli_infil_4_cas { //
				displayName = "Support Heli #4 CAS";
				description = "Enter the CLASSNAME of the CAS Helicopter Escort.";
				typeName = STRING;
				defaultValue = "B_Heli_Attack_01_dynamicLoadout_F";
			};			
			class vqi_module_core_heli_infil_4_altL { //
				displayName = "Flight Alt - Land";
				description = "Enter the Flight Altitude over LAND";
				typeName = NUMBER;
				defaultValue = "200";
			};
			class vqi_module_core_heli_infil_4_altS { //
				displayName = "Flight Alt - Sea";
				description = "Enter the Flight Altitude over SEA";
				typeName = NUMBER;
				defaultValue = "200";
			};			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////		
			class vqi_module_core_spacer6g { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////				
			class vqi_module_core_support_item { //
				displayName = "Heli Call Item";
				description = "Select what is REQUIRED to Call for the Support Heli. Player Menu allows L-Click on Map. Some Maps (8-digit) may not support the Gypsy Long Range Radio.";
				typeName = NUMBER;
				class Values
				{
					class 1core	{name = "Off";  value = 0;  }; //
					class 2core	{name = "Gypsy Radio";  value = 1; default = 1; };
					class 3core	{name = "Gypsy Radio or Player Menu";  value = 2; };
				};
			};	

			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer7 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer7a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer7b { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			
			
			class vqi_module_core_tacreload { //
				displayName = "Tactical Reload";
				description = "No Reloading Mags from your Backpack. Mag MUST be in your Vest or Uniform. Backpack is transport only.";
				typeName = NUMBER;
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; // 
					class 2core	{name = "ON - Tactical Reload";  value = 1; };
				};
			};		
		
			class vqi_module_core_tacthrow { //
				displayName = "Tactical Throw";
				description = "No Throwing (Grenades, etc) from your Backpack. Item MUST be in your Vest or Uniform. Backpack is transport only.";
				typeName = NUMBER;
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; // 
					class 2core	{name = "ON - Tactical Throw";  value = 1; };
				};
			};
			class vqi_module_core_tacexplosives { //
				displayName = "Tactical Explosives";
				description = "DISABLE PLACING Explosives from the Scrollwheel. Explosive MUST be Placed and Set Manually. DISARM, TURN OFF, and allow PICK-UP of most Explosives (Claymore, C4, etc) without needing to be EOD. The ONLY excluded explosives (EOD required) are APERS and AT Mines.";
				typeName = NUMBER;
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; // 
					class 2core	{name = "ON - Tactical Explosives";  value = 1; };
				};
			};	
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer8 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			
			
			class vqi_module_core_screensplatter { //
				displayName = "Blood Screen Splatter";
				description = "Adds Effects to player's screen if player takes damage. Simulates getting hurt with blood, blurred vision, pain, etc.";
				typeName = NUMBER;
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; // 
					class 2core	{name = "ON - Blood Spatter";  value = 1; };
				};
			};	
			class vqi_module_core_injuryreport { //
				displayName = "Medical Injury Report";
				description = "Displays a graphic showing how severe your wounds are, and the locations when selected in Player Menu, SHIFT + C (default)";
				typeName = NUMBER;
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; // 
					class 2core	{name = "ON - Injury Report";  value = 1; };
				};
			};
			
			
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer9 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			
			
			class vqi_module_core_holeinmypocket { //
				displayName = "Gear Lost: Random";
				description = "Lose some gear thru the chaos of combat. Randomly selects Map, GPS, Radio, Compass.";
				typeName = NUMBER;
				class Values
				{
					class 1core	{name = "Off";  value = 0; default = 0; }; // 
					class 2core	{name = "ON";  value = 1; };
				};
			};	
			class vqi_module_core_holeinmypocket_timer { //
				displayName = "Gear Lost: Timer";
				description = "Enter the Timer Loop (seconds) to check if something gets lost.";
				typeName = NUMBER;
				defaultValue = "900";
			};
			class vqi_module_core_holeinmypocket_chance { //
				displayName = "Gear Lost: Chance";
				description = "Enter the percent (0-100) chance you lose an item of gear each loop.";
				typeName = NUMBER;
				defaultValue = "3";
			};
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer10 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer10a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer10b { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////				

		
		};
		
		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription {
			description = "Place Module to turn ON System. Select STARTING options as desired.";
			//sync[] = {};
		};
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	class VQI_ModuleCORE_SupportRadio : Module_F {
	icon = "\vqi_core\module\iconCORE.paa";
		scope = public;
		author = "R. Von Quest";
		category = "VQI_SPOOKWARCOM";
		displayName = "Support Radio";
		function = "VQI_fnc_COREMod2";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		
		class Arguments: ArgumentsBaseUnits
		{
			//class Units: Units {};
			class vqi_module_core_sr_hq { // HQ
				displayName = "HQ / OPs Callsign";
				description = "Enter the Callsign/Codename of the HQ, Ops Center, Support, etc";
				typeName = STRING;
				defaultValue = "NIGHTSHADE";
			};
		
		
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer1a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer2a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
			/////////////////////////////////
			class vqi_module_core_sr_ch1 { //
				displayName = "CH.1 - Type";
				description = "Select the Type of Support assigned to Channel 1. See DOC if using Custom User File for this channel.";
				typeName = NUMBER;
				class Values
				{
					class 0CSR	{name = "OFF";  value = 0;  }; // ListBox Items
					class 1CSR	{name = "Support & Transport Heli";  value = 1; default = 1; };
					class 2CSR	{name = "Arty or Naval Guns";  value = 2; };
					class 3CSR	{name = "FighterJet Strike";  value = 3; };
					class 4CSR	{name = "QRF NATO ParaTroops";  value = 4; };
					class 5CSR	{name = "Support & Transport APC";  value = 5; };
					class 6CSR	{name = "CAS AH-99 Blackfoot";  value = 6; };
					class 7CSR	{name = "Satellite: NROL-47";  value = 7; };
					class 8CSR	{name = "UAV: X-47B";  value = 8; };
					class 9CSR	{name = "CUSTOM USER FILE";  value = 9; };
				};
			};
			class vqi_module_core_sr_ch1_callsign { //
				displayName = "CH.1 - Callsign";
				description = "Enter the callsign of this Support Assest";
				typeName = STRING;
				defaultValue = "ECHO ONE";
			};
			class vqi_module_core_sr_ch1_range { //
				displayName = "CH.1 - Range";
				description = "Set the DISTANCE (meters) to simulate the Range of the Asset or Radio. Use -1 for unlimited, or enter the Marker Name below to use as the Distance Check Reference Point. Distance is from MARKER to PLAYER.";
				typeName = NUMBER;
				defaultValue = "-1";
			};
			class vqi_module_core_sr_ch1_marker { //
				displayName = "CH.1 - Marker";
				description = "Enter the MARKER NAME to use as a simulated DISTANCE CHECK. Leave BLANK if using Unlimited Range.";
				typeName = STRING;
				defaultValue = " ";
			};
			class vqi_module_core_sr_ch1_limit { //
				displayName = "CH.1 - Limit";
				description = "Enter the Call/Ammo Count Limit for the Channel. Simulates Ammo, Calls, Flights, Fuel, Paperwork, etc.";
				typeName = NUMBER;
				defaultValue = "20";
			};		

			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer3a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer4a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////

			/////////////////////////////////
			class vqi_module_core_sr_ch2 { //
				displayName = "CH.2 - Type";
				description = "Select the Type of Support assigned to Channel 2. See DOC if using Custom User File for this channel.";
				typeName = NUMBER;
				class Values
				{
					class 0CSR	{name = "OFF";  value = 0; default = 0; }; // ListBox Items
					class 1CSR	{name = "Support & Transport Heli";  value = 1; };
					class 2CSR	{name = "Arty or Naval Guns";  value = 2; };
					class 3CSR	{name = "FighterJet Strike";  value = 3; };
					class 4CSR	{name = "QRF NATO ParaTroops";  value = 4; };
					class 5CSR	{name = "Support & Transport APC";  value = 5; };
					class 6CSR	{name = "CAS AH-99 Blackfoot";  value = 6; };
					class 7CSR	{name = "Satellite: NROL-47";  value = 7; };
					class 8CSR	{name = "UAV: X-47B";  value = 8; };					
					class 9CSR	{name = "CUSTOM USER FILE";  value = 9; };
				};
			};
			class vqi_module_core_sr_ch2_callsign { //
				displayName = "CH.2 - Callsign";
				description = "Enter the callsign of this Support Assest";
				typeName = STRING;
				defaultValue = "--";
			};
			class vqi_module_core_sr_ch2_range { //
				displayName = "CH.2 - Range";
				description = "Set the DISTANCE (meters) to simulate the Range of the Asset or Radio. Use -1 for unlimited, or enter the Marker Name below to use as the Distance Check Reference Point. Distance is from MARKER to PLAYER.";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch2_marker { //
				displayName = "CH.2 - Marker";
				description = "Enter the MARKER NAME to use as a simulated DISTANCE CHECK. Leave BLANK if using Unlimited Range.";
				typeName = STRING;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch2_limit { //
				displayName = "CH.2 - Limit";
				description = "Enter the Call/Ammo Count Limit for the Channel. Simulates Ammo, Calls, Flights, Fuel, Paperwork, etc.";
				typeName = NUMBER;
				defaultValue = "0";
			};	


			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer5a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer6a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			
			
			/////////////////////////////////
			class vqi_module_core_sr_ch3 { //
				displayName = "CH.3 - Type";
				description = "Select the Type of Support assigned to Channel 3. See DOC if using Custom User File for this channel.";
				typeName = NUMBER;
				class Values
				{
					class 0CSR	{name = "OFF";  value = 0; default = 0; }; // ListBox Items
					class 1CSR	{name = "Support & Transport Heli";  value = 1; };
					class 2CSR	{name = "Arty or Naval Guns";  value = 2; };
					class 3CSR	{name = "FighterJet Strike";  value = 3; };
					class 4CSR	{name = "QRF NATO ParaTroops";  value = 4; };
					class 5CSR	{name = "Support & Transport APC";  value = 5; };
					class 6CSR	{name = "CAS AH-99 Blackfoot";  value = 6; };
					class 7CSR	{name = "Satellite: NROL-47";  value = 7; };
					class 8CSR	{name = "UAV: X-47B";  value = 8; };					
					class 9CSR	{name = "CUSTOM USER FILE";  value = 9; };
				};
			};
			class vqi_module_core_sr_ch3_callsign { //
				displayName = "CH.3 - Callsign";
				description = "Enter the callsign of this Support Assest";
				typeName = STRING;
				defaultValue = "--";
			};
			class vqi_module_core_sr_ch3_range { //
				displayName = "CH.3 - Range";
				description = "Set the DISTANCE (meters) to simulate the Range of the Asset or Radio. Use -1 for unlimited, or enter the Marker Name below to use as the Distance Check Reference Point. Distance is from MARKER to PLAYER.";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch3_marker { //
				displayName = "CH.3 - Marker";
				description = "Enter the MARKER NAME to use as a simulated DISTANCE CHECK. Leave BLANK if using Unlimited Range.";
				typeName = STRING;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch3_limit { //
				displayName = "CH.3 - Limit";
				description = "Enter the Call/Ammo Count Limit for the Channel. Simulates Ammo, Calls, Flights, Fuel, Paperwork, etc.";
				typeName = NUMBER;
				defaultValue = "0";
			};		

			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer7a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer8a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			
			
			/////////////////////////////////
			class vqi_module_core_sr_ch4 { //
				displayName = "CH.4 - Type";
				description = "Select the Type of Support assigned to Channel 4. See DOC if using Custom User File for this channel.";
				typeName = NUMBER;
				class Values
				{
					class 0CSR	{name = "OFF";  value = 0; default = 0; }; // ListBox Items
					class 1CSR	{name = "Support & Transport Heli";  value = 1; };
					class 2CSR	{name = "Arty or Naval Guns";  value = 2; };
					class 3CSR	{name = "FighterJet Strike";  value = 3; };
					class 4CSR	{name = "QRF NATO ParaTroops";  value = 4; };
					class 5CSR	{name = "Support & Transport APC";  value = 5; };
					class 6CSR	{name = "CAS AH-99 Blackfoot";  value = 6; };
					class 7CSR	{name = "Satellite: NROL-47";  value = 7; };
					class 8CSR	{name = "UAV: X-47B";  value = 8; };					
					class 9CSR	{name = "CUSTOM USER FILE";  value = 9; };
				};
			};
			class vqi_module_core_sr_ch4_callsign { //
				displayName = "CH.4 - Callsign";
				description = "Enter the callsign of this Support Assest";
				typeName = STRING;
				defaultValue = "--";
			};
			class vqi_module_core_sr_ch4_range { //
				displayName = "CH.4 - Range";
				description = "Set the DISTANCE (meters) to simulate the Range of the Asset or Radio. Use -1 for unlimited, or enter the Marker Name below to use as the Distance Check Reference Point. Distance is from MARKER to PLAYER.";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch4_marker { //
				displayName = "CH.4 - Marker";
				description = "Enter the MARKER NAME to use as a simulated DISTANCE CHECK. Leave BLANK if using Unlimited Range.";
				typeName = STRING;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch4_limit { //
				displayName = "CH.4 - Limit";
				description = "Enter the Call/Ammo Count Limit for the Channel. Simulates Ammo, Calls, Flights, Fuel, Paperwork, etc.";
				typeName = NUMBER;
				defaultValue = "0";
			};		

			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer9a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer10a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			
			
			/////////////////////////////////
			class vqi_module_core_sr_ch5 { //
				displayName = "CH.5 - Type";
				description = "Select the Type of Support assigned to Channel 5. See DOC if using Custom User File for this channel.";
				typeName = NUMBER;
				class Values
				{
					class 0CSR	{name = "OFF";  value = 0;  default = 0; }; // ListBox Items
					class 1CSR	{name = "Support & Transport Heli";  value = 1; };
					class 2CSR	{name = "Arty or Naval Guns";  value = 2; };
					class 3CSR	{name = "FighterJet Strike";  value = 3; };
					class 4CSR	{name = "QRF NATO ParaTroops";  value = 4; };
					class 5CSR	{name = "Support & Transport APC";  value = 5; };
					class 6CSR	{name = "CAS AH-99 Blackfoot";  value = 6; };
					class 7CSR	{name = "Satellite: NROL-47";  value = 7; };
					class 8CSR	{name = "UAV: X-47B";  value = 8; };					
					class 9CSR	{name = "CUSTOM USER FILE";  value = 9; };
				};
			};
			class vqi_module_core_sr_ch5_callsign { //
				displayName = "CH.5 - Callsign";
				description = "Enter the callsign of this Support Assest";
				typeName = STRING;
				defaultValue = "--";
			};
			class vqi_module_core_sr_ch5_range { //
				displayName = "CH.5 - Range";
				description = "Set the DISTANCE (meters) to simulate the Range of the Asset or Radio. Use -1 for unlimited, or enter the Marker Name below to use as the Distance Check Reference Point. Distance is from MARKER to PLAYER.";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch5_marker { //
				displayName = "CH.5 - Marker";
				description = "Enter the MARKER NAME to use as a simulated DISTANCE CHECK. Leave BLANK if using Unlimited Range.";
				typeName = STRING;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch5_limit { //
				displayName = "CH.5 - Limit";
				description = "Enter the Call/Ammo Count Limit for the Channel. Simulates Ammo, Calls, Flights, Fuel, Paperwork, etc.";
				typeName = NUMBER;
				defaultValue = "0";
			};			
			
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer11a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer12a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			
			
			/////////////////////////////////
			class vqi_module_core_sr_ch6 { //
				displayName = "CH.6 - Type";
				description = "Select the Type of Support assigned to Channel 6. See DOC if using Custom User File for this channel.";
				typeName = NUMBER;
				class Values
				{
					class 0CSR	{name = "OFF";  value = 0;  default = 0; }; // ListBox Items
					class 1CSR	{name = "Support & Transport Heli";  value = 1; };
					class 2CSR	{name = "Arty or Naval Guns";  value = 2; };
					class 3CSR	{name = "FighterJet Strike";  value = 3; };
					class 4CSR	{name = "QRF NATO ParaTroops";  value = 4; };
					class 5CSR	{name = "Support & Transport APC";  value = 5; };
					class 6CSR	{name = "CAS AH-99 Blackfoot";  value = 6; };
					class 7CSR	{name = "Satellite: NROL-47";  value = 7; };
					class 8CSR	{name = "UAV: X-47B";  value = 8; };					
					class 9CSR	{name = "CUSTOM USER FILE";  value = 9; };
				};
			};
			class vqi_module_core_sr_ch6_callsign { //
				displayName = "CH.6 - Callsign";
				description = "Enter the callsign of this Support Assest";
				typeName = STRING;
				defaultValue = "--";
			};
			class vqi_module_core_sr_ch6_range { //
				displayName = "CH.6 - Range";
				description = "Set the DISTANCE (meters) to simulate the Range of the Asset or Radio. Use -1 for unlimited, or enter the Marker Name below to use as the Distance Check Reference Point. Distance is from MARKER to PLAYER.";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch6_marker { //
				displayName = "CH.6 - Marker";
				description = "Enter the MARKER NAME to use as a simulated DISTANCE CHECK. Leave BLANK if using Unlimited Range.";
				typeName = STRING;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch6_limit { //
				displayName = "CH.6 - Limit";
				description = "Enter the Call/Ammo Count Limit for the Channel. Simulates Ammo, Calls, Flights, Fuel, Paperwork, etc.";
				typeName = NUMBER;
				defaultValue = "0";
			};	


			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer13a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer14a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			
			
			/////////////////////////////////
			class vqi_module_core_sr_ch7 { //
				displayName = "CH.7 - Type";
				description = "Select the Type of Support assigned to Channel 7. See DOC if using Custom User File for this channel.";
				typeName = NUMBER;
				class Values
				{
					class 0CSR	{name = "OFF";  value = 0;  default = 0; }; // ListBox Items
					class 1CSR	{name = "Support & Transport Heli";  value = 1; };
					class 2CSR	{name = "Arty or Naval Guns";  value = 2; };
					class 3CSR	{name = "FighterJet Strike";  value = 3; };
					class 4CSR	{name = "QRF NATO ParaTroops";  value = 4; };
					class 5CSR	{name = "Support & Transport APC";  value = 5; };
					class 6CSR	{name = "CAS AH-99 Blackfoot";  value = 6; };
					class 7CSR	{name = "Satellite: NROL-47";  value = 7; };
					class 8CSR	{name = "UAV: X-47B";  value = 8; };					
					class 9CSR	{name = "CUSTOM USER FILE";  value = 9; };
				};
			};
			class vqi_module_core_sr_ch7_callsign { //
				displayName = "CH.7 - Callsign";
				description = "Enter the callsign of this Support Assest";
				typeName = STRING;
				defaultValue = "--";
			};
			class vqi_module_core_sr_ch7_range { //
				displayName = "CH.7 - Range";
				description = "Set the DISTANCE (meters) to simulate the Range of the Asset or Radio. Use -1 for unlimited, or enter the Marker Name below to use as the Distance Check Reference Point. Distance is from MARKER to PLAYER.";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch7_marker { //
				displayName = "CH.7 - Marker";
				description = "Enter the MARKER NAME to use as a simulated DISTANCE CHECK. Leave BLANK if using Unlimited Range.";
				typeName = STRING;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch7_limit { //
				displayName = "CH.7 - Limit";
				description = "Enter the Call/Ammo Count Limit for the Channel. Simulates Ammo, Calls, Flights, Fuel, Paperwork, etc.";
				typeName = NUMBER;
				defaultValue = "0";
			};	

			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer16a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer17a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			

			/////////////////////////////////
			class vqi_module_core_sr_ch8 { //
				displayName = "CH.8 - Type";
				description = "Select the Type of Support assigned to Channel 8. See DOC if using Custom User File for this channel.";
				typeName = NUMBER;
				class Values
				{
					class 0CSR	{name = "OFF";  value = 0;  default = 0; }; // ListBox Items
					class 1CSR	{name = "Support & Transport Heli";  value = 1; };
					class 2CSR	{name = "Arty or Naval Guns";  value = 2; };
					class 3CSR	{name = "FighterJet Strike";  value = 3; };
					class 4CSR	{name = "QRF NATO ParaTroops";  value = 4; };
					class 5CSR	{name = "Support & Transport APC";  value = 5; };
					class 6CSR	{name = "CAS AH-99 Blackfoot";  value = 6; };
					class 7CSR	{name = "Satellite: NROL-47";  value = 7; };
					class 8CSR	{name = "UAV: X-47B";  value = 8; };					
					class 9CSR	{name = "CUSTOM USER FILE";  value = 9; };
				};
			};
			class vqi_module_core_sr_ch8_callsign { //
				displayName = "CH.8 - Callsign";
				description = "Enter the callsign of this Support Assest";
				typeName = STRING;
				defaultValue = "--";
			};
			class vqi_module_core_sr_ch8_range { //
				displayName = "CH.8 - Range";
				description = "Set the DISTANCE (meters) to simulate the Range of the Asset or Radio. Use -1 for unlimited, or enter the Marker Name below to use as the Distance Check Reference Point. Distance is from MARKER to PLAYER.";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch8_marker { //
				displayName = "CH.8 - Marker";
				description = "Enter the MARKER NAME to use as a simulated DISTANCE CHECK. Leave BLANK if using Unlimited Range.";
				typeName = STRING;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch8_limit { //
				displayName = "CH.8 - Limit";
				description = "Enter the Call/Ammo Count Limit for the Channel. Simulates Ammo, Calls, Flights, Fuel, Paperwork, etc.";
				typeName = NUMBER;
				defaultValue = "0";
			};	

			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer18a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer19a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			

			/////////////////////////////////
			class vqi_module_core_sr_ch9 { //
				displayName = "CH.9 - Type";
				description = "Select the Type of Support assigned to Channel 9. See DOC if using Custom User File for this channel.";
				typeName = NUMBER;
				class Values
				{
					class 0CSR	{name = "OFF";  value = 0;  default = 0; }; // ListBox Items
					class 1CSR	{name = "Support & Transport Heli";  value = 1; };
					class 2CSR	{name = "Arty or Naval Guns";  value = 2; };
					class 3CSR	{name = "FighterJet Strike";  value = 3; };
					class 4CSR	{name = "QRF NATO ParaTroops";  value = 4; };
					class 5CSR	{name = "Support & Transport APC";  value = 5; };
					class 6CSR	{name = "CAS AH-99 Blackfoot";  value = 6; };
					class 7CSR	{name = "Satellite: NROL-47";  value = 7; };
					class 8CSR	{name = "UAV: X-47B";  value = 8; };					
					class 9CSR	{name = "CUSTOM USER FILE";  value = 9; };
				};
			};
			class vqi_module_core_sr_ch9_callsign { //
				displayName = "CH.9 - Callsign";
				description = "Enter the callsign of this Support Assest";
				typeName = STRING;
				defaultValue = "--";
			};
			class vqi_module_core_sr_ch9_range { //
				displayName = "CH.9 - Range";
				description = "Set the DISTANCE (meters) to simulate the Range of the Asset or Radio. Use -1 for unlimited, or enter the Marker Name below to use as the Distance Check Reference Point. Distance is from MARKER to PLAYER.";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch9_marker { //
				displayName = "CH.9 - Marker";
				description = "Enter the MARKER NAME to use as a simulated DISTANCE CHECK. Leave BLANK if using Unlimited Range.";
				typeName = STRING;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch9_limit { //
				displayName = "CH.9 - Limit";
				description = "Enter the Call/Ammo Count Limit for the Channel. Simulates Ammo, Calls, Flights, Fuel, Paperwork, etc.";
				typeName = NUMBER;
				defaultValue = "0";
			};		

			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_core_spacer20a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_core_spacer21a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////			
			

			/////////////////////////////////
			class vqi_module_core_sr_ch0 { //
				displayName = "CH.0 - Type";
				description = "Select the Type of Support assigned to Channel 0. See DOC if using Custom User File for this channel.";
				typeName = NUMBER;
				class Values
				{
					class 0CSR	{name = "OFF";  value = 0;  default = 0; }; // ListBox Items
					class 1CSR	{name = "Support & Transport Heli";  value = 1; };
					class 2CSR	{name = "Arty or Naval Guns";  value = 2; };
					class 3CSR	{name = "FighterJet Strike";  value = 3; };
					class 4CSR	{name = "QRF NATO ParaTroops";  value = 4; };
					class 5CSR	{name = "Support & Transport APC";  value = 5; };
					class 6CSR	{name = "CAS AH-99 Blackfoot";  value = 6; };
					class 7CSR	{name = "Satellite: NROL-47";  value = 7; };
					class 8CSR	{name = "UAV: X-47B";  value = 8; };					
					class 9CSR	{name = "CUSTOM USER FILE";  value = 9; };
				};
			};
			class vqi_module_core_sr_ch0_callsign { //
				displayName = "CH.0 - Callsign";
				description = "Enter the callsign of this Support Assest";
				typeName = STRING;
				defaultValue = "--";
			};
			class vqi_module_core_sr_ch0_range { //
				displayName = "CH.0 - Range";
				description = "Set the DISTANCE (meters) to simulate the Range of the Asset or Radio. Use -1 for unlimited, or enter the Marker Name below to use as the Distance Check Reference Point. Distance is from MARKER to PLAYER.";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch0_marker { //
				displayName = "CH.0 - Marker";
				description = "Enter the MARKER NAME to use as a simulated DISTANCE CHECK. Leave BLANK if using Unlimited Range.";
				typeName = STRING;
				defaultValue = "0";
			};
			class vqi_module_core_sr_ch0_limit { //
				displayName = "CH.0 - Limit";
				description = "Enter the Call/Ammo Count Limit for the Channel. Simulates Ammo, Calls, Flights, Fuel, Paperwork, etc.";
				typeName = NUMBER;
				defaultValue = "0";
			};			
		};
	};
};
// : : : HALO/PARA Module System : : :
// 
#define private		0
#define protected	1
#define public		2

class CfgPatches {
	
	class VQI_HALO {
		name = "LEAP";
		author = "R. Von Quest";
		requiredVersion = 1.68;
		requiredAddons[] = {"A3_Modules_F"};
		units[] = {"VQI_ModuleHALO"};
	};
};



class CfgFunctions 
{
	class VQI
	{
		class HALOSystem
		{
			class HALOmod1    { file = "\vqi_halo\Module\fn_module.sqf"; };
			class HALOinit    { file = "\vqi_halo\init.sqf"; };
		};
	};
};



class CfgFactionClasses {
	class NO_CATEGORY;
	class VQI_LEAP: NO_CATEGORY
	{
		displayName = "=VQI= L. E. A. P";
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
	
	class VQI_ModuleHALO : Module_F {
	icon = "\vqi_halo\Module\iconLEAP.paa";
		scope = public;
		author = "R.Von Quest aka 'Goblin'";
		category = "VQI_ZERODARKTHIRTY";
		displayName = "HALO/ParaJump";
		function = "VQI_fnc_HALOmod1";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		
		class Arguments: ArgumentsBaseUnits
		{
			//class Units: Units {};
			class vqi_module_halo_debughints { //Debug, Info, Hints
				displayName = "Debug/Hints/Info";
				description = "Recommend: OFF";
				typeName = NUMBER;
				
				class Values
				{
					class 0OFF	{name = "OFF";  value = 0; default = 0;}; // ListBox Items
					class 1ON	{name = "ON";   value = 1; };
				};
			};
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_leap_spacer1 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////	
			
			class vqi_module_halo_tempmarker { //
				displayName = "HALO/Aircraft Marker";
				description = "Select Permanent or Temporary (20 min) displayed Marker";
				typeName = NUMBER;
				
				class Values
				{
					class 0HTMKR	{name = "Permanent - Marker stays ON";  value = 0; }; // ListBox Items
					class 1HTMKR	{name = "Temporary - Marker ON for 20 Minutes Only"; value = 1; default = 1;};
				};
			};
			class vqi_module_halo_hidenav { //
				displayName = "Hide Map/GPS/Compass";
				description = "Simulates they are packed away while geared-up for Jump. Better Immersion.";
				typeName = NUMBER;
				
				class Values
				{
					class 1NAV	{name = "YES - Hide Items during Jump";  value = 1; default = 1;}; // ListBox Items
					class 0NAV	{name = "NO - I can read Maps while flying!";   value = 0; };
				};
			};
			class vqi_module_halo_jb1watch { //
				displayName = "Altimeter (watch)";
				description = "Adds 'Watch' Key option, (3rd option) See KeyBinding README for more info. Display Time of Altimeter on screen when pressed.";
				typeName = NUMBER;
				
				class Values
				{
					class 0JB1	{name = "OFF - Not needed, Using other"; value = 0; }; // ListBox Items
					class 1JB1	{name = "Watch Key - Temp, Quick On/Off"; value = 1; };
					class 2JB1	{name = "Watch Key - Temp, 10sec"; value = 2; };
					class 3JB1	{name = "Watch Key - Temp, 20sec"; value = 3; default = 3;};
					class 4JB1	{name = "Watch Key - Temp, 30sec"; value = 4; };
					class 5JB1	{name = "Watch Key - Temp, 60sec"; value = 5; };
					class 6JB1	{name = "Watch Key - Temp, 90sec"; value = 6; };
				};
			};

			class vqi_module_halo_trans_audio { //
				displayName = "Transition Audio";
				description = "Set the Audio when teleporting into the airborne aircraft";
				typeName = NUMBER;
				
				class Values
				{
					class 0TA0	{name = "OFF - No Audio";  value = 0; }; // ListBox Items
					class 1TA1	{name = "ON - Short Music Clip 1";  value = 1; default = 1;};

				};
			};
			class vqi_module_halo_plane_travel { //
				displayName = "Aircraft Travel Time";
				description = "Simulates travel and climb of the JumpPlane BEFORE Jump Point (Advances Game Time)";
				typeName = NUMBER;
				
				class Values
				{
					class 0HTT	{name = "None, Teleport Instantly";  value = 0; default = 0;}; // ListBox Items
					class 1HTT	{name = "Advance Game Time 1 Hour";  value = 1; };
					class 2HTT	{name = "Advance Game Time 1-3 Hours, Random";  value = 2; };
					class 3HTT	{name = "Advance Game Time 2-6 Hours, Random";  value = 3; };
				};
			};
			/*
			class vqi_module_leap_ao_ack_sites { //
				displayName = "Enemy ACK Sites";
				description = "Adds Simulated Enemy Ack-Ack (Flak) Batteries to Maps. Effective Range is within 2KM. Flak error rate is 200m (random). Low-Alt AA, 100m floor. Designed for Anti-Heli Ops.";
				typeName = NUMBER;
				
				class Values
				{
					class 0ACK	{name = "OFF / NONE";  value = 0; }; // ListBox Items
					class 1ACK	{name = "ON - ACTIVE";  value = 1; default = 1; };
				};
			};
			class vqi_module_leap_ao_ack_num { //
				displayName = "Enemy ACK A.O.s #";
				description = "How many Ack-Ack SITES for the Map. Enter 0, Positive, or a Negative Number. Positive is EXACTLY that many AOs. A Negative number is RANDOM upto that Number.";
				typeName = NUMBER;
				defaultValue = "-30";
			};
			class vqi_module_leap_ao_sam_sites { //
				displayName = "Enemy SAM Sites";
				description = "Adds Simulated Enemy SAM Sites to Maps. HALO Jumps are usually safe within SAM Site Areas of 7km (23,000') or higher. You should be out-of-range. Designed for Higher-Alt Aircraft.";
				typeName = NUMBER;
				
				class Values
				{
					class 0SAM	{name = "OFF / NONE";  value = 0; }; // ListBox Items
					class 1SAM	{name = "ON - ACTIVE";  value = 1; default = 1; };
				};
			};
			class vqi_module_leap_ao_sam_num { //
				displayName = "Enemy SAM A.O.s #";
				description = "How many SAM SITES for the Map. Enter 0, Positive, or a Negative Number. Positive is EXACTLY that many AOs. A Negative number is RANDOM upto that Number.";
				typeName = NUMBER;
				defaultValue = "-10";
			};
			/*
			class vqi_module_halo_sam_team { //
				displayName = "Enemy S.A.M Team";
				description = "Adds random SAM Teams to operate/guard the Missile Sites";
				typeName = NUMBER;
				
				class Values
				{
					class 0SAMT	{name = "OFF - None";  value = 0; }; // ListBox Items
					class 1SAMT	{name = "RED / OPF / CSAT";  value = 1; default = 1;};
					class 2SAMT	{name = "GRN / IND / A.A.F";  value = 2; };
				};
			};
			class vqi_module_halo_sam_team_p { //
				displayName = "Enemy S.A.M Team %";
				description = "Enter the chance (0-100%) of SAM Team at the Site";
				typeName = NUMBER;
				defaultValue = "30";
			};
			
			class vqi_module_leap_ao_radar_sites { //
				displayName = "Enemy RADAR Sites";
				description = "Adds Simulated RADAR Sites to Maps. Hi-Res Tracking/Intel. Enemy QRF Teams may respond if detected within RADAR Ranges of 50m AGL upto the Max-Radius in Height.";
				typeName = NUMBER;
				
				class Values
				{
					class 0RAD	{name = "OFF / NONE";  value = 0; }; // ListBox Items
					class 1RAD	{name = "ON - ACTIVE";  value = 1; default = 2; };
				};
			};
			class vqi_module_leap_ao_radar_num { //
				displayName = "Enemy RADAR A.O.s";
				description = "How many RADAR STATIONS for the Map. Enter 0, Positive, or a Negative Number. Positive is EXACTLY that many AOs. A Negative number is RANDOM upto that Number.";
				typeName = NUMBER;
				defaultValue = "-3";
			};
			class vqi_module_leap_ao_radar_qrf { //
				displayName = "RADAR QRF Team";
				description = "Select the Faction Side that Responds to a successful RADAR Ping.";
				typeName = NUMBER;
				
				class Values
				{
					class 1RADT	{name = "RED / OPF / CSAT";  value = 1; default = 1;};
					class 2RADT	{name = "GRN / IND / A.A.F";  value = 2; };
					class 3RADT	{name = "BLU / BLU / NATO";  value = 3; };
					class 4RADT	{name = "RED / OPF / RHS Russians";  value = 4; };
				};
			};
			*/
			class vqi_module_halo_viewdist { //
				displayName = "HALO View Distance";
				description = "Sets Visual Range of Ground (not units) during HALO Freefall (Recommend 4800m)";
				typeName = NUMBER;
				
				class Values
				{
					class 0VIEW	{name = "Off - Game Default";  value = 0; }; // ListBox Items
					class 1VIEW	{name = "1600m / 5000ft";    value = 1600; };
					class 2VIEW	{name = "3200m / 10,000ft";  value = 3200; };
					class 3VIEW	{name = "4800m / 15,000ft";  value = 4800; default = 4800;};
					class 4VIEW	{name = "6400m / 20,000ft";  value = 6400; };
					class 5VIEW	{name = "9000m / 30,000ft";  value = 9000; };
				};
			};
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_leap_spacer2 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////	
			
			class vqi_module_halo_chute_fail { //
				displayName = "Parachute Fail Rate";
				description = "Set the probability of Chute Failure (0-100%)";
				typeName = NUMBER;
				defaultValue = "5";
			};

			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_leap_spacer3 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////				
			
			
			class vqi_module_halo_aircraft { //list of aircraft available
				displayName = "Select Aircraft";
				description = "Note: ONLY the XC-130 Nightmare and XHR-1 Vampyre are INCLUDED in this Mod. SYSTEM ONLY is for Starting/Using an Ops Center (like in my CORE Addon).";
				typeName = NUMBER;
				
				class Values
				{
					class 2XC130 {name = "XC-130: Nightmare";  value = 2; default = 2;};
				};
			};
			class vqi_module_halo_aircraft_alt { //set height, USS Nimitz, etc
				displayName = "Aircraft Height";
				description = "Sets the Ground Aircraft Spawn Height; C-130 & XHR-1 ONLY";
				typeName = NUMBER;
				
				class Values
				{
					class 1ASH	{name = "On Ground";  value = 1; default = 1;}; // ListBox Items
					class 2ASH	{name = "USS Nimitz Deck";  value = 2; };
				};
			};
			class vqi_module_halo_flightpath_mkrs { //
				displayName = "Flight Path Markers";
				description = "Shows Flight Path of HALO Aircraft";
				typeName = NUMBER;
				
				class Values
				{
					class 0FPM	{name = "OFF / None";  value = 0; default = 1;}; // ListBox Items
					class 1FPM	{name = "ON - Show Path";  value = 1; };
				};
			};
			
			
			
			class vqi_module_halo_flight_fow { //
				displayName = "HALO Flight Error";
				description = "HALO - Enter Error Rate (Wind, Pilot Error, Map Variance, etc) of TRUE Flight Path";
				typeName = NUMBER;
				defaultValue = "0000";
			};
			
			
			
			class vqi_module_halo_aircraft_crate_gen { //crate
				displayName = "Crate: General/Ops";
				description = "Adds Xtra Weapons & Equipment Crate to Ground Plane";
				typeName = NUMBER;
				
				class Values
				{
					class 0NXCG	{name = "NO";  value = 0;}; // ListBox Items
					class 1YXCG	{name = "YES - Add Weapons Crate";  value = 1; default = 1;};
				};
			};
			class vqi_module_halo_aircraft_crate_va { //crate
				displayName = "Crate: Virtual Arsenal";
				description = "Adds the 'Virtual Arsenal' Crate to Ground Plane";
				typeName = NUMBER;
				
				class Values
				{
					class 0NXCV	{name = "NO";  value = 0; }; // ListBox Items
					class 1YXCV	{name = "YES - Add Virtual Arsenal";  value = 1; default = 1;};
				};
			};
			class vqi_module_halo_ai { //crate
				displayName = "A.I. Support";
				description = "Allows A.I. to Jump with Player";
				typeName = NUMBER;
				
				class Values
				{
					class 0AI	{name = "NO";  value = 0; default = 0; }; // ListBox Items
					class 1AI	{name = "YES - A.I. Supported";  value = 1; };
				};
			};
			class vqi_module_halo_aircraft_delete { //set height, USS Nimitz, etc
				displayName = "Delete JumpPlane";
				description = "Deletes the Airborne JumpPlane after Server/Player lands";
				typeName = NUMBER;
				
				class Values
				{
					class 0DJP	{name = "NO - Keep Aircraft Airborne";  value = 0; }; // ListBox Items
					class 1DJP	{name = "Yes - Delete the Jump Plane";  value = 1; default = 1;};
				};
			};
			
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_leap_spacer4 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			class vqi_module_leap_spacer4a { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////				
			
			class vqi_module_leap_msg_on { //
				displayName = "Airspace Message ON";
				description = "Select ON/OFF to display Msg (typed below) AFTER you are teleported into the JumpPlane";
				typeName = NUMBER;
				
				class Values
				{
					class 0CM	{name = "OFF/NONE";  value = 0;  }; // ListBox Items
					class 1CM	{name = "ON - Display Text";  value = 1; default = 1; };
				};
			};
			class vqi_module_leap_msg_timed { //
				displayName = "Airspace Msg Start";
				description = "Select the DELAY (seconds) before Message is displayed";
				typeName = NUMBER;
				defaultValue = "5";
			};	
			class vqi_module_leap_msg_1 { //
				displayName = "Airspace Msg Line 1";
				description = "Enter small Text for Top Line";
				typeName = STRING;
				defaultValue = "XC-130 NIGHTMARE : 32,000'ft";
			};
			class vqi_module_leap_msg_2 { //
				displayName = "Airspace Msg Line 2";
				description = "Enter small Text for Middle Line";
				typeName = STRING;
				defaultValue = "SOMEWHERE OVER ENEMY AIRSPACE";
			};
			class vqi_module_leap_msg_3 { //
				displayName = "Airspace Msg Line 3";
				description = "Enter small Text for Bottom Line";
				typeName = STRING;
				defaultValue = "";
			};
			class vqi_module_leap_msg_x { //
				displayName = "Msg Loc X";
				description = "Enter the X (horizontal) value to adjust for your Screen/Interface size: +R/L - adding will push Text RIGHT";
				typeName = NUMBER;
				defaultValue = "0.6";
			};
			class vqi_module_leap_msg_y { //
				displayName = "Msg Y Loc";
				description = "Enter the Y (vertical) value to adjust for your Screen/Interface size: +D/U - adding will push Text DOWN";
				typeName = NUMBER;
				defaultValue = "1.1";
			};
			
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_leap_spacer5 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////		
			
			class vqi_module_leap_burychute { //
				displayName = "Bury/Hide Chute";
				description = "Enter the % chance (0-100) that the Enemy will send a QRF Team to track you IF they find your Parachute after landing";
				typeName = NUMBER;
				defaultValue = "0";
			};		

			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_leap_spacer6 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////

			class vqi_module_leap_damage_opt { //
				displayName = "Damaged Optic";
				description = "Enter the probability (0-100%) of Damaged/Lost Sensitive Scopes on Jumps. Effects 3x power scopes and higher ONLY (low power scopes are more rugged). You must protect your sensitive equipment. Pack your Gear to avoid losing it.";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class vqi_module_leap_damage_lit { //
				displayName = "Damaged Light";
				description = "Enter the probability (0-100%) of Damaged/Lost Lights on Jumps. You must protect your sensitive equipment. Pack your Gear to avoid losing it.";
				typeName = NUMBER;
				defaultValue = "0";
			};
			class vqi_module_leap_damage_sup { //
				displayName = "Damaged Silencer";
				description = "Enter the probability (0-100%) of Damaged/Lost Silencers on Jumps. You must protect your sensitive equipment. Pack your Gear to avoid losing it.";
				typeName = NUMBER;
				defaultValue = "0";
			};	
			class vqi_module_leap_damage_bip { //
				displayName = "Damaged Bipod";
				description = "Enter the probability (0-100%) of Damaged/Lost Bi-Pods on Jumps. You must protect your sensitive equipment. Pack your Gear to avoid losing it.";
				typeName = NUMBER;
				defaultValue = "0";
			};		

			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			class vqi_module_leap_spacer8 { displayName = " "; description = " "; typeName = STRING; defaultValue = " "; };
			///////////////////////////////////////////////////////////////////////////////////////////////////////////////
			
			class vqi_module_leap_rqd_headgear_h { //
				displayName = "HALO - Required Headgear";
				description = "Enter the Classname(s) of the REQUIRED HEADGEAR (Helmet, etc) to Pass Inspection, leave Blank if NONE. (Separate each classname with comma and/or space. No quotes.)";
				typeName = STRING;
				defaultValue = "ADFU_H_OpsCore_08_BLK, ADFU_H_OpsCore_02_BLK, ADFU_H_Airframe_Cover_10_MC, ADFU_H_Airframe_Cover_11_MC, ADFU_H_Airframe_02_tan, ADFU_H_Airframe_03_tan, ADFU_H_Airframe_10_tan, ADFU_H_Airframe_11_tan, ADFU_H_Airframe_02_AMCU, ADFU_H_Airframe_03_AMCU, ADFU_H_Airframe_10_AMCU, ADFU_H_Airframe_11_AMCU, SOCOMD_Item_Headgear_TroopLeader, SOCOMD_Item_Headgear_PatrolLeader, SOCOMD_Item_Headgear_Rifleman, SOCOMD_Item_Headgear_Marksman, SOCOMD_Item_Headgear_Medic ,SOCOMD_Item_Headgear_Sapper ,SOCOMD_Item_Headgear_MachineGunner, SOCOMD_Item_Headgear_Recon, SOCOMD_Item_Headgear_AT, SOCOMD_Item_Headgear_Pilot, SOCOMD_Item_Headgear_Crewman";
			};	
			class vqi_module_leap_rqd_facewear_h { //
				displayName = "HALO - Required Facewear";
				description = "Enter the Classname(s) of the REQUIRED FACEWEAR (Goggles, Mask, etc) to Pass Inspection, leave Blank if NONE. (Separate each classname with comma and/or space. No quotes.)";
				typeName = STRING;
				defaultValue = "Mask_M50";
			};
			class vqi_module_leap_rqd_o2system_h { //
				displayName = "HALO - Required Oxygen";
				description = "Enter the Classname(s) of the REQUIRED o2 SYSTEM (Dragonfly Vest Rig, etc) to Pass Inspection, leave Blank if NONE. (Separate each classname with comma and/or space. No quotes.) WARNNG - DRAGONFLY IS CURRENTLY ALWAYS REQUIRED, NO NOT CHANGE";
				typeName = STRING;
				defaultValue = "VQI_Vest_Dragonfly, VQI_Vest_Dragonfly_GAS, VQI_Vest_Dragonfly_OFF";
			};
			class vqi_module_leap_rqd_jumpsuit_h { //
				displayName = "HALO - Required JumpSuit";
				description = "Enter the Classname(s) of the REQUIRED JUMPSUIT (Uniform, etc) to Pass Inspection, leave Blank if NONE. (Separate each classname with comma and/or space. No quotes.)";
				typeName = STRING;
				defaultValue = "SOCOMD_Uniform_Snow_HoodDown, CUP_U_CRYE_ATACSFG_Full, SOCOMD_Vympel_Uniform_Full, SOCOMD_Uniform_SleevesUp, SOCOMD_Uniform_SleevesUp_Recon, SOCOMD_Uniform_SleevesDown, SOCOMD_Uniform_SleevesDown_Recon, SOCOMD_Uniform_AMCU_SleevesUp, SOCOMD_Uniform_AMCU_SleevesUp_Recon. SOCOMD_Uniform_Wetsuit, SOCOMD_Commando_BLK_SleevesDown, SOCOMD_Uniform_AMCU_SleevesDown, SOCOMD_Uniform_AMCU_SleevesDown_Recon, SEAL_AOR1_U";
			};
			class vqi_module_leap_rqd_miscgear_h { //
				displayName = "HALO - Required Gear";
				description = "Enter the Classname(s) of the REQUIRED MISC GEAR (Reserve Chute, AAD, O2 Bottle, etc) to Pass Inspection, leave Blank if NONE. (Separate each classname with comma and/or space. No quotes.)";
				typeName = STRING;
				defaultValue = "VQI_ReserveChute, VQI_Sentinel, VQI_BOTTLE_DF1_GAS";
			};				
		};
	
		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription {
			description = "Place Module to turn ON System and Spawn Aircraft HERE. Select Options as desired. Highly recommend you keep Map/GPS/Compass packed away during jump. Better Immersion. Plan your jump ahead of time and take notes! The Altimeter has a GPS built in. HOLD 'watch' Key to display Altimeter. Select Aircraft and Options. ONLY the 'Vampyre' Drone is included. IF using other supported aircraft, you must download that specific addon. ONLY 1 Aircraft supported at one time.";
			//sync[] = {};
		};
	};
};




			
class CfgPatches{
	class VQI_Aircraft {
		units[] = {"VQI_XHR1_Vampyre"};
		weapons[] = {};
		requiredVersion = 1.0;
	};
};

class CfgAddons {
	class VQI_Aircraft {
		list[]={VQI_XHR1_Vampyre};
	};
};

class CfgVehicleClasses {
	class VQI_Aircraft {
	displayName="VQI Aircraft"; // menu name in editor
	};
};

class CfgVehicles {
	class Air;
	class Plane : Air {
	
		class HitPoints {
			class HitHull {
				armor = 900;
				material = 50;
				name = "telo";
				visual = "trup";
				passThrough = false;
			};
		};
	};
	
	//class Sounds;
	class VQI_XHR1_Vampyre: Plane {
		scope = public;
		author = "R.Von Quest aka 'Goblin'";
		model = "\vqi_halo\VQI-DemonDropper\3D\Vampyre\vqi_vampyre.p3d"; //note: for image path in O2/OB, remove the first dash
		icon = "\vqi_halo\VQI-DemonDropper\3D\Vampyre\ICON_XHR1.paa";
		armor = 9999;
		displayName = "XHR-1: Vampyre";
		vehicleClass = "VQI_Aircraft";
		destrType = "DestructBuilding";
		
			
			class AnimationSources
			{
				class  UserRamp1
				{
					source = "user";
					animPeriod =7;
					initPhase=0;
				};
			};


			class UserActions
			{
				class OpenRamp
				{
					displayName="Open Ramp";
					position="CargoDoorSwitch";
					onlyforplayer=0;
					radius=3;
					condition="(this animationPhase ""AnimateRAMP1"" == 0)";
					statement="this animate [""AnimateRAMP1"",1];";
				};
				class CloseRamp
				{
					displayName="Close Ramp";
					position="CargoDoorSwitch";
					onlyforplayer=0;
					radius=3;
					condition="(this animationPhase ""AnimateRAMP1"" == 1)";
					statement="this animate [""AnimateRAMP1"",0];";
				};
			};
			

		
		
	};
};














//////////////////////
/*
		animated=1;
		class AnimationSources
		{
			// 
			class ani_CargoDoor
			{
				type="rotation";
				source="user";
				animPeriod=5;
				selection="CargoDoor";
				axis="CargoDoorAxis";
				memory=1;
				angle0=0;
				angle1=-1.5;
			};
		};	// Animation class end

	
		// UserAction class 
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName="Cargo Hold: OPEN";
				position="CargoDoorSwitch";
				onlyforplayer = 1;
				radius = 4;
				condition="this animationPhase ""ani_CargoDoor"" < 0.5";
				statement="this animate [""ani_CargoDoor"", 1]";
			};
			
			class CloseCargoDoor
			{
				displayName="Cargo Hold: CLOSE";
				position="CargoDoorSwitch";
				onlyforplayer = 1;
				radius = 4;
				condition="this animationPhase ""ani_CargoDoor"" >= 0.5";
				statement="this animate [""ani_CargoDoor"", 0]";
			};
		};		// UserAction class end
*/
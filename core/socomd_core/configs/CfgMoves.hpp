class CfgMovesBasic {
	class DefaultDie;
	class ManActions {
		//SOCOMD Bike Driver
		MMT_Driver = "MMT_Driver";
		AnimInspectAssaultrifle[]=
		{
			"AnimInspectAssaultrifle",
			"gesture"
		};
		AnimInspectHandgun[]=
		{
			"AnimInspectHandgun",
			"gesture"
		};
	};
};

class CfgMovesMaleSdr : CfgMovesBasic {
	class default;
	class States {

		//SOCOMD Bike Anim States
		class MMT_Dead : DefaultDie {
			actions = "DeadActions";
			file = "\socomd_data_core\bike\MMT_Driver.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
		};

		class Crew;
		class MMT_Driver : Crew {
			file = "\socomd_data_core\bike\MMT_Driver.rtm";
			connectTo[] = {"MMT_Dead",1};
			speed = 2;
			looped = 1;
		};

		class LadderCivilStatic;
		class LadderCivilUpLoop: LadderCivilStatic {
			speed="1.05/(2/3)";
		};
		class AnimInspectAssaultrifle: default
		{
			file="\socomd_core\functions\bnae_functions\anim_inspect_assaultrifle.rtm";
			looped=0;
			speed=0.23;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKCurve[]={1};
			leftHandIKCurve[]={0,1,0.44999999,1,0.5,0,0.94999999,0,0.98000002,1,1,1};
		};
		class AnimInspectHandgun: default
		{
			file="\socomd_core\functions\bnae_functions\anim_inspect_handgun.rtm";
			looped=0;
			speed=0.23;
			mask="handsWeapon_pst";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKCurve[]={0};
			leftHandIKCurve[]={0};
		};
	};
};

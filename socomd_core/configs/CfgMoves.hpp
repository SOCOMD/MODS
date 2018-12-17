class CfgMovesBasic {
	class DefaultDie;
	class ManActions {
		//SOCOMD Bike Driver
		MMT_Driver = "MMT_Driver";
	};
};

class CfgMovesMaleSdr : CfgMovesBasic {
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
	};
};

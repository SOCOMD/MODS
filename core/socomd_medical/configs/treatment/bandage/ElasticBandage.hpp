class ElasticBandage: fieldDressing {
	class Abrasion{
		effectiveness=0.2;
		reopeningChance=0.5;
		reopeningMinDelay=300;
		reopeningMaxDelay=600;
	};
	class AbrasionMinor: Abrasion{
		effectiveness=4.4;
	};
	class AbrasionMedium: Abrasion{
		effectiveness=2.4;
		reopeningChance=0.60000002;
	};
	class AbrasionLarge: Abrasion{
		effectiveness=0.2;
		reopeningChance=0.69999999;
	};

	class Avulsions: Abrasion{
		effectiveness=0.2;
		reopeningChance=0.1;
		reopeningMinDelay=1000;
		reopeningMaxDelay=1600;
	};
	class AvulsionsMinor: Avulsions{
		effectiveness=4.4;
	};
	class AvulsionsMedium: Avulsions{
		effectiveness=2.4;
	};
	class AvulsionsLarge: Avulsions{
		effectiveness=0.2;
	};

	class Contusion: Abrasion{
		effectiveness=0.2;
		reopeningChance=0;
		reopeningMinDelay=0;
		reopeningMaxDelay=0;
	};
	class ContusionMinor: Contusion{
		effectiveness=4.4;
	};
	class ContusionMedium: Contusion{
		effectiveness=2.4;
	};
	class ContusionLarge: Contusion{
		effectiveness=0.2;
	};

	class Crush: Abrasion{
		effectiveness=4.4;
		reopeningChance=0.1;
		reopeningMinDelay=600;
		reopeningMaxDelay=1000;
	};
	class CrushMinor: Crush{
		effectiveness=4.4;
		reopeningChance=0.1;
	};
	class CrushMedium: Crush{
		effectiveness=4.4;
		reopeningChance=0.15000001;
	};
	class CrushLarge: Crush{
		effectiveness=4.4;
		reopeningChance=0.2;
	};

	class Cut: Abrasion{
		effectiveness=0.2;
		reopeningChance=0.5;
		reopeningMinDelay=70;
		reopeningMaxDelay=100;
	};
	class CutMinor: Cut{
		effectiveness=4.4;
		reopeningChance=0.5;
	};
	class CutMedium: Cut{
		effectiveness=2.4;
		reopeningChance=0.60000002;
	};
	class CutLarge: Cut{
		effectiveness=0.2;
		reopeningChance=0.69999999;
	};

	class Laceration: Abrasion{
		effectiveness=0.2;
		reopeningChance=0.60000002;
		reopeningMinDelay=300;
		reopeningMaxDelay=600;
	};
	class LacerationMinor: Laceration{
		effectiveness=4.4;
		reopeningChance=0.60000002;
	};
	class LacerationMedium: Laceration{
		effectiveness=2.4;
		reopeningChance=0.69999999;
	};
	class LacerationLarge: Laceration{
		effectiveness=0.2;
		reopeningChance=0.80000001;
	};

	class VelocityWound: Abrasion{
		effectiveness=0.2;
		reopeningChance=0.60000002;
		reopeningMinDelay=600;
		reopeningMaxDelay=1000;
	};
	class VelocityWoundMinor: VelocityWound{
		effectiveness=4.4;
	};
	class VelocityWoundMedium: VelocityWound{
		effectiveness=2.4;
	};
	class VelocityWoundLarge: VelocityWound{
		effectiveness=0.2;
	};
	
	class PunctureWound: Abrasion{
		effectiveness=0.2;
		reopeningChance=0.40000001;
		reopeningMinDelay=360;
		reopeningMaxDelay=900;
	};
	class PunctureWoundMinor: PunctureWound{
		effectiveness=4.4;
	};
	class PunctureWoundMedium: PunctureWound{
		effectiveness=2.4;
	};
	class PunctureWoundLarge: PunctureWound{
		effectiveness=0.2;
	};
};
class PackingBandage: fieldDressing {
	class Abrasion{
		effectiveness=4;
		reopeningChance=0.5;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class AbrasionMinor: Abrasion{
		effectiveness=4;
	};
	class AbrasionMedium: Abrasion{
		effectiveness=3;
		reopeningChance=0.60000002;
	};
	class AbrasionLarge: Abrasion{
		effectiveness=2;
		reopeningChance=0.69999999;
	};

	class Avulsions: Abrasion{
		effectiveness=4;
		reopeningChance=0.5;
		reopeningMinDelay=1000;
		reopeningMaxDelay=1600;
	};
	class AvulsionsMinor: Avulsions{
		effectiveness=4;
	};
	class AvulsionsMedium: Avulsions{
		effectiveness=3;
	};
	class AvulsionsLarge: Avulsions{
		effectiveness=2;
	};

	class Contusion: Abrasion{
		effectiveness=4;
		reopeningChance=0;
		reopeningMinDelay=0;
		reopeningMaxDelay=0;
	};
	class ContusionMinor: Contusion{
	};
	class ContusionMedium: Contusion{
	};
	class ContusionLarge: Contusion{
	};

	class Crush: Abrasion{
		effectiveness=4;
		reopeningChance=0.40000001;
		reopeningMinDelay=600;
		reopeningMaxDelay=1000;
	};
	class CrushMinor: Crush{
		effectiveness=4;
		reopeningChance=0.40000001;
	};
	class CrushMedium: Crush{
		effectiveness=3;
		reopeningChance=0.5;
	};
	class CrushLarge: Crush{
		effectiveness=2;
		reopeningChance=0.60000002;
	};

	class Cut: Abrasion{
		effectiveness=4;
		reopeningChance=0.40000001;
		reopeningMinDelay=700;
		reopeningMaxDelay=1000;
	};
	class CutMinor: Cut{
		effectiveness=4;
		reopeningChance=0.40000001;
	};
	class CutMedium: Cut{
		effectiveness=3;
		reopeningChance=0.5;
	};
	class CutLarge: Cut{
		effectiveness=2;
		reopeningChance=0.60000002;
	};

	class Laceration: Abrasion{
		effectiveness=4;
		reopeningChance=0.60000002;
		reopeningMinDelay=500;
		reopeningMaxDelay=2000;
	};
	class LacerationMinor: Laceration{
		effectiveness=4;
		reopeningChance=0.69999999;
	};
	class LacerationMedium: Laceration{
		effectiveness=3;
		reopeningChance=0.80000001;
	};
	class LacerationLarge: Laceration{
		effectiveness=2;
		reopeningChance=0.89999998;
	};

	class VelocityWound: Abrasion{
		effectiveness=10;
		reopeningChance=0.30000001;
		reopeningMinDelay=1000;
		reopeningMaxDelay=2000;
	};
	class VelocityWoundMinor: VelocityWound{
		effectiveness=10;
	};
	class VelocityWoundMedium: VelocityWound{
		effectiveness=9;
	};
	class VelocityWoundLarge: VelocityWound{
		effectiveness=8;
	};
	
	class PunctureWound: Abrasion{
		effectiveness=10;
		reopeningChance=0.30000001;
		reopeningMinDelay=1000;
		reopeningMaxDelay=3000;
	};
	class PunctureWoundMinor: PunctureWound{
		effectiveness=10;
	};
	class PunctureWoundMedium: PunctureWound{
		effectiveness=9;
	};
	class PunctureWoundLarge: PunctureWound{
		effectiveness=8;
	};
};
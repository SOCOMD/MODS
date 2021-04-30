class PackingBandage: FieldDressing {
	class Abrasion {
		effectiveness=4;
		reopeningChance=0.5;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class AbrasionMinor: Abrasion {
		effectiveness=4;
	};
	class AbrasionMedium: Abrasion {
		effectiveness=3;
		reopeningChance=0.6;
	};
	class AbrasionLarge: Abrasion {
		effectiveness=2;
		reopeningChance=0.69999999;
	};
	class Avulsion: Abrasion {
		effectiveness=4;
		reopeningChance=0.5;
		reopeningMinDelay=1000;
		reopeningMaxDelay=1600;
	};
	class AvulsionMinor: Avulsion {
		effectiveness=4;
	};
	class AvulsionMedium: Avulsion {
		effectiveness=3;
	};
	class AvulsionLarge: Avulsion {
		effectiveness=2;
	};
	class Contusion: Abrasion {
		effectiveness=4;
		reopeningChance=0;
		reopeningMinDelay=0;
		reopeningMaxDelay=0;
	};
	class ContusionMinor: Contusion {
	};
	class ContusionMedium: Contusion {
	};
	class ContusionLarge: Contusion {
	};
	class Crush: Abrasion {
		effectiveness=4;
		reopeningChance=0.4;
		reopeningMinDelay=600;
		reopeningMaxDelay=1000;
	};
	class CrushMinor: Crush {
		effectiveness=4;
		reopeningChance=0.4;
	};
	class CrushMedium: Crush {
		effectiveness=3;
		reopeningChance=0.5;
	};
	class CrushLarge: Crush {
		effectiveness=2;
		reopeningChance=0.6;
	};
	class Cut: Abrasion {
		effectiveness=4;
		reopeningChance=0.4;
		reopeningMinDelay=700;
		reopeningMaxDelay=1000;
	};
	class CutMinor: Cut {
		effectiveness=4;
		reopeningChance=0.4;
	};
	class CutMedium: Cut {
		effectiveness=3;
		reopeningChance=0.5;
	};
	class CutLarge: Cut {
		effectiveness=2;
		reopeningChance=0.6;
	};
	class Laceration: Abrasion {
		effectiveness=4;
		reopeningChance=0.6;
		reopeningMinDelay=500;
		reopeningMaxDelay=2000;
	};
	class LacerationMinor: Laceration {
		effectiveness=4;
		reopeningChance=0.7;
	};
	class LacerationMedium: Laceration {
		effectiveness=3;
		reopeningChance=0.8;
	};
	class LacerationLarge: Laceration {
		effectiveness=2;
		reopeningChance=0.9;
	};
	class velocityWound: Abrasion {
		effectiveness=10;
		reopeningChance=0.3;
		reopeningMinDelay=1000;
		reopeningMaxDelay=2000;
	};
	class velocityWoundMinor: velocityWound {
		effectiveness=10;
	};
	class velocityWoundMedium: velocityWound {
		effectiveness=9;
	};
	class velocityWoundLarge: velocityWound {
		effectiveness=8;
	};
	class punctureWound: Abrasion {
		effectiveness=10;
		reopeningChance=0.3;
		reopeningMinDelay=1000;
		reopeningMaxDelay=3000;
	};
	class punctureWoundMinor: punctureWound {
		effectiveness=10;
	};
	class punctureWoundMedium: punctureWound {
		effectiveness=9;
	};
	class punctureWoundLarge: punctureWound {
		effectiveness=8;
	};
};
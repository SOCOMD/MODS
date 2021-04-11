class QuikClot: fieldDressing {
	class Abrasion{
		effectiveness=21;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class AbrasionMinor: Abrasion{
		effectiveness=21;
	};
	class AbrasionMedium: Abrasion{
		effectiveness=21;
	};
	class AbrasionLarge: Abrasion{
		effectiveness=21;
	};

	class Avulsions: Abrasion{
		effectiveness=21;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class AvulsionsMinor: Avulsions{
		effectiveness=21;
	};
	class AvulsionsMedium: Avulsions{
		effectiveness=21;
	};
	class AvulsionsLarge: Avulsions{
		effectiveness=21;
	};

	class Contusion: Abrasion{
		effectiveness=21;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class ContusionMinor: Contusion{
		effectiveness=21;
	};
	class ContusionMedium: Contusion{
		effectiveness=21;
	};
	class ContusionLarge: Contusion{
		effectiveness=21;
	};

	class Crush: Abrasion{
		effectiveness=21;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class CrushMinor: Crush{
		effectiveness=21;
		reopeningChance=0.30000001;
	};
	class CrushMedium: Crush{
		effectiveness=21;
	};
	class CrushLarge: Crush{
		effectiveness=21;
	};

	class Cut: Abrasion{
		effectiveness=21;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class CutMinor: Cut{
		effectiveness=21;
	};
	class CutMedium: Cut{
		effectiveness=21;
	};
	class CutLarge: Cut{
		effectiveness=21;
	};

	class Laceration: Abrasion{
		effectiveness=21;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class LacerationMinor: Laceration{
		effectiveness=21;
	};
	class LacerationMedium: Laceration{
		effectiveness=21;
	};
	class LacerationLarge: Laceration{
		effectiveness=21;
	};

	class VelocityWound: Abrasion{
		effectiveness=21;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class VelocityWoundMinor: VelocityWound{
		effectiveness=21;
	};
	class VelocityWoundMedium: VelocityWound{
		effectiveness=21;
	};
	class VelocityWoundLarge: VelocityWound{
		effectiveness=21;
	};
	
	class PunctureWound: Abrasion{
		effectiveness=21;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class PunctureWoundMinor: PunctureWound{
		effectiveness=21;
	};
	class PunctureWoundMedium: PunctureWound{
		effectiveness=21;
	};
	class PunctureWoundLarge: PunctureWound{
		effectiveness=21;
	};
};
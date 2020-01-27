class QuikClot: fieldDressing {
	class Abrasion{
		effectiveness=7;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class AbrasionMinor: Abrasion{
		effectiveness=7;
	};
	class AbrasionMedium: Abrasion{
		effectiveness=7;
	};
	class AbrasionLarge: Abrasion{
		effectiveness=7;
	};

	class Avulsions: Abrasion{
		effectiveness=7;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class AvulsionsMinor: Avulsions{
		effectiveness=7;
	};
	class AvulsionsMedium: Avulsions{
		effectiveness=7;
	};
	class AvulsionsLarge: Avulsions{
		effectiveness=7;
	};

	class Contusion: Abrasion{
		effectiveness=7;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class ContusionMinor: Contusion{
		effectiveness=7;
	};
	class ContusionMedium: Contusion{
		effectiveness=7;
	};
	class ContusionLarge: Contusion{
		effectiveness=7;
	};

	class Crush: Abrasion{
		effectiveness=7;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class CrushMinor: Crush{
		effectiveness=7;
		reopeningChance=0.30000001;
	};
	class CrushMedium: Crush{
		effectiveness=7;
	};
	class CrushLarge: Crush{
		effectiveness=7;
	};

	class Cut: Abrasion{
		effectiveness=7;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class CutMinor: Cut{
		effectiveness=7;
	};
	class CutMedium: Cut{
		effectiveness=7;
	};
	class CutLarge: Cut{
		effectiveness=7;
	};

	class Laceration: Abrasion{
		effectiveness=7;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class LacerationMinor: Laceration{
		effectiveness=7;
	};
	class LacerationMedium: Laceration{
		effectiveness=7;
	};
	class LacerationLarge: Laceration{
		effectiveness=7;
	};

	class VelocityWound: Abrasion{
		effectiveness=7;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class VelocityWoundMinor: VelocityWound{
		effectiveness=7;
	};
	class VelocityWoundMedium: VelocityWound{
		effectiveness=7;
	};
	class VelocityWoundLarge: VelocityWound{
		effectiveness=7;
	};
	
	class PunctureWound: Abrasion{
		effectiveness=7;
		reopeningChance=0.3;
		reopeningMinDelay=100;
		reopeningMaxDelay=300;
	};
	class PunctureWoundMinor: PunctureWound{
		effectiveness=7;
	};
	class PunctureWoundMedium: PunctureWound{
		effectiveness=7;
	};
	class PunctureWoundLarge: PunctureWound{
		effectiveness=7;
	};
};
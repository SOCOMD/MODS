class FieldDressing {
	effectiveness = 1;

	reopeningChance = 0.1;
	reopeningMinDelay = 120;
	reopeningMaxDelay = 200;

	class Abrasion{
		effectiveness=9;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class AbrasionMinor: Abrasion{
		effectiveness=9;
	};
	class AbrasionMedium: Abrasion{
		effectiveness=9;
	};
	class AbrasionLarge: Abrasion{
		effectiveness=9;
	};

	class Avulsions: Abrasion{
		effectiveness=9;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class AvulsionsMinor: Avulsions{
		effectiveness=9;
	};
	class AvulsionsMedium: Avulsions{
		effectiveness=9;
	};
	class AvulsionsLarge: Avulsions{
		effectiveness=9;
	};

	class Contusion: Abrasion{
		effectiveness=9;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class ContusionMinor: Contusion{
		effectiveness=9;
	};
	class ContusionMedium: Contusion{
		effectiveness=9;
	};
	class ContusionLarge: Contusion{
		effectiveness=9;
	};

	class Crush: Abrasion{
		effectiveness=9;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class CrushMinor: Crush{
		effectiveness=9;
		reopeningChance=0.30000001;
	};
	class CrushMedium: Crush{
		effectiveness=9;
	};
	class CrushLarge: Crush{
		effectiveness=9;
	};

	class Cut: Abrasion{
		effectiveness=9;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class CutMinor: Cut{
		effectiveness=9;
	};
	class CutMedium: Cut{
		effectiveness=9;
	};
	class CutLarge: Cut{
		effectiveness=9;
	};

	class Laceration: Abrasion{
		effectiveness=9;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class LacerationMinor: Laceration{
		effectiveness=9;
	};
	class LacerationMedium: Laceration{
		effectiveness=9;
	};
	class LacerationLarge: Laceration{
		effectiveness=9;
	};

	class VelocityWound: Abrasion{
		effectiveness=9;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class VelocityWoundMinor: VelocityWound{
		effectiveness=9;
	};
	class VelocityWoundMedium: VelocityWound{
		effectiveness=9;
	};
	class VelocityWoundLarge: VelocityWound{
		effectiveness=9;
	};

	class PunctureWound: Abrasion{
		effectiveness=9;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class PunctureWoundMinor: PunctureWound{
		effectiveness=9;
	};
	class PunctureWoundMedium: PunctureWound{
		effectiveness=9;
	};
	class PunctureWoundLarge: PunctureWound{
		effectiveness=9;
	};
};
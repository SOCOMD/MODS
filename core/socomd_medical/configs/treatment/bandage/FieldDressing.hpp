class FieldDressing {
	// How effect is the bandage for treating one wounds type injury
            effectiveness = 3;
            // What is the chance and delays (in seconds) of the treated default injury reopening
            reopeningChance=0.3;
			reopeningMinDelay=800;
			reopeningMaxDelay=1500;
	class Abrasion{
		effectiveness=27;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class AbrasionMinor: Abrasion{
		effectiveness=27;
	};
	class AbrasionMedium: Abrasion{
		effectiveness=27;
	};
	class AbrasionLarge: Abrasion{
		effectiveness=27;
	};

	class Avulsions: Abrasion{
		effectiveness=27;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class AvulsionsMinor: Avulsions{
		effectiveness=27;
	};
	class AvulsionsMedium: Avulsions{
		effectiveness=27;
	};
	class AvulsionsLarge: Avulsions{
		effectiveness=27;
	};

	class Contusion: Abrasion{
		effectiveness=27;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class ContusionMinor: Contusion{
		effectiveness=27;
	};
	class ContusionMedium: Contusion{
		effectiveness=27;
	};
	class ContusionLarge: Contusion{
		effectiveness=27;
	};

	class Crush: Abrasion{
		effectiveness=27;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class CrushMinor: Crush{
		effectiveness=27;
		reopeningChance=0.30000001;
	};
	class CrushMedium: Crush{
		effectiveness=27;
	};
	class CrushLarge: Crush{
		effectiveness=27;
	};

	class Cut: Abrasion{
		effectiveness=27;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class CutMinor: Cut{
		effectiveness=27;
	};
	class CutMedium: Cut{
		effectiveness=27;
	};
	class CutLarge: Cut{
		effectiveness=27;
	};

	class Laceration: Abrasion{
		effectiveness=27;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class LacerationMinor: Laceration{
		effectiveness=27;
	};
	class LacerationMedium: Laceration{
		effectiveness=27;
	};
	class LacerationLarge: Laceration{
		effectiveness=27;
	};

	class VelocityWound: Abrasion{
		effectiveness=27;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class VelocityWoundMinor: VelocityWound{
		effectiveness=27;
	};
	class VelocityWoundMedium: VelocityWound{
		effectiveness=27;
	};
	class VelocityWoundLarge: VelocityWound{
		effectiveness=27;
	};

	class PunctureWound: Abrasion{
		effectiveness=27;
		reopeningChance=0.3;
		reopeningMinDelay=800;
		reopeningMaxDelay=1500;
	};
	class PunctureWoundMinor: PunctureWound{
		effectiveness=27;
	};
	class PunctureWoundMedium: PunctureWound{
		effectiveness=27;
	};
	class PunctureWoundLarge: PunctureWound{
		effectiveness=27;
	};
};
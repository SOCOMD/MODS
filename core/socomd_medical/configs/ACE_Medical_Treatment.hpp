class ace_medical_treatment {
	class Bandaging
		{
			class Bandage
			{
				effectiveness=10;
				reopeningChance=0;
				reopeningMinDelay=0;
				reopeningMaxDelay=0;
			};
			class FieldDressing
			{
				class Abrasion
				{
					effectiveness=9;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness=9;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness=9;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness=9;
				};
				class Avulsion: Abrasion
				{
					effectiveness=9;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class AvulsionMinor: Avulsion
				{
					effectiveness=9;
				};
				class AvulsionMedium: Avulsion
				{
					effectiveness=9;
				};
				class AvulsionLarge: Avulsion
				{
					effectiveness=9;
				};
				class Contusion: Abrasion
				{
					effectiveness=9;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class ContusionMinor: Contusion
				{
					effectiveness=9;
				};
				class ContusionMedium: Contusion
				{
					effectiveness=9;
				};
				class ContusionLarge: Contusion
				{
					effectiveness=9;
				};
				class Crush: Abrasion
				{
					effectiveness=9;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class CrushMinor: Crush
				{
					effectiveness=9;
					reopeningChance=0.30000001;
				};
				class CrushMedium: Crush
				{
					effectiveness=9;
				};
				class CrushLarge: Crush
				{
					effectiveness=9;
				};
				class Cut: Abrasion
				{
					effectiveness=9;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class CutMinor: Cut
				{
					effectiveness=9;
				};
				class CutMedium: Cut
				{
					effectiveness=9;
				};
				class CutLarge: Cut
				{
					effectiveness=9;
				};
				class Laceration: Abrasion
				{
					effectiveness=9;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class LacerationMinor: Laceration
				{
					effectiveness=9;
				};
				class LacerationMedium: Laceration
				{
					effectiveness=9;
				};
				class LacerationLarge: Laceration
				{
					effectiveness=9;
				};
				class velocityWound: Abrasion
				{
					effectiveness=9;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness=9;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness=9;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness=9;
				};
				class punctureWound: Abrasion
				{
					effectiveness=9;
					reopeningChance=0.3;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness=9;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness=9;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness=9;
				};
			};
			class PackingBandage: FieldDressing
			{
				class Abrasion
				{
					effectiveness=4;
					reopeningChance=0.5;
					reopeningMinDelay=800;
					reopeningMaxDelay=1500;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness=4;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness=3;
					reopeningChance=0.60000002;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness=2;
					reopeningChance=0.69999999;
				};
				class Avulsion: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.5;
					reopeningMinDelay=1000;
					reopeningMaxDelay=1600;
				};
				class AvulsionMinor: Avulsion
				{
					effectiveness=4;
				};
				class AvulsionMedium: Avulsion
				{
					effectiveness=3;
				};
				class AvulsionLarge: Avulsion
				{
					effectiveness=2;
				};
				class Contusion: Abrasion
				{
					effectiveness=4;
					reopeningChance=0;
					reopeningMinDelay=0;
					reopeningMaxDelay=0;
				};
				class ContusionMinor: Contusion
				{
				};
				class ContusionMedium: Contusion
				{
				};
				class ContusionLarge: Contusion
				{
				};
				class Crush: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.40000001;
					reopeningMinDelay=600;
					reopeningMaxDelay=1000;
				};
				class CrushMinor: Crush
				{
					effectiveness=4;
					reopeningChance=0.40000001;
				};
				class CrushMedium: Crush
				{
					effectiveness=3;
					reopeningChance=0.5;
				};
				class CrushLarge: Crush
				{
					effectiveness=2;
					reopeningChance=0.60000002;
				};
				class Cut: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.40000001;
					reopeningMinDelay=700;
					reopeningMaxDelay=1000;
				};
				class CutMinor: Cut
				{
					effectiveness=4;
					reopeningChance=0.40000001;
				};
				class CutMedium: Cut
				{
					effectiveness=3;
					reopeningChance=0.5;
				};
				class CutLarge: Cut
				{
					effectiveness=2;
					reopeningChance=0.60000002;
				};
				class Laceration: Abrasion
				{
					effectiveness=4;
					reopeningChance=0.60000002;
					reopeningMinDelay=500;
					reopeningMaxDelay=2000;
				};
				class LacerationMinor: Laceration
				{
					effectiveness=4;
					reopeningChance=0.69999999;
				};
				class LacerationMedium: Laceration
				{
					effectiveness=3;
					reopeningChance=0.80000001;
				};
				class LacerationLarge: Laceration
				{
					effectiveness=2;
					reopeningChance=0.89999998;
				};
				class velocityWound: Abrasion
				{
					effectiveness=10;
					reopeningChance=0.30000001;
					reopeningMinDelay=1000;
					reopeningMaxDelay=2000;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness=10;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness=9;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness=8;
				};
				class punctureWound: Abrasion
				{
					effectiveness=10;
					reopeningChance=0.30000001;
					reopeningMinDelay=1000;
					reopeningMaxDelay=3000;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness=10;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness=9;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness=8;
				};
			};
			class ElasticBandage: FieldDressing
			{
				class Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.5;
					reopeningMinDelay=300;
					reopeningMaxDelay=600;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness=4.4;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness=2.4;
					reopeningChance=0.60000002;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.69999999;
				};
				class Avulsion: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.1;
					reopeningMinDelay=1000;
					reopeningMaxDelay=1600;
				};
				class AvulsionMinor: Avulsion
				{
					effectiveness=4.4;
				};
				class AvulsionMedium: Avulsion
				{
					effectiveness=2.4;
				};
				class AvulsionLarge: Avulsion
				{
					effectiveness=0.2;
				};
				class Contusion: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0;
					reopeningMinDelay=0;
					reopeningMaxDelay=0;
				};
				class ContusionMinor: Contusion
				{
					effectiveness=4.4;
				};
				class ContusionMedium: Contusion
				{
					effectiveness=2.4;
				};
				class ContusionLarge: Contusion
				{
				};
				class Crush: Abrasion
				{
					effectiveness=4.4;
					reopeningChance=0.1;
					reopeningMinDelay=600;
					reopeningMaxDelay=1000;
				};
				class CrushMinor: Crush
				{
					effectiveness=4.4;
					reopeningChance=0.1;
				};
				class CrushMedium: Crush
				{
					effectiveness=4.4;
					reopeningChance=0.15000001;
				};
				class CrushLarge: Crush
				{
					effectiveness=4.4;
					reopeningChance=0.2;
				};
				class Cut: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.5;
					reopeningMinDelay=70;
					reopeningMaxDelay=100;
				};
				class CutMinor: Cut
				{
					effectiveness=4.4;
					reopeningChance=0.5;
				};
				class CutMedium: Cut
				{
					effectiveness=2.4;
					reopeningChance=0.60000002;
				};
				class CutLarge: Cut
				{
					effectiveness=0.2;
					reopeningChance=0.69999999;
				};
				class Laceration: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.60000002;
					reopeningMinDelay=300;
					reopeningMaxDelay=600;
				};
				class LacerationMinor: Laceration
				{
					effectiveness=4.4;
					reopeningChance=0.60000002;
				};
				class LacerationMedium: Laceration
				{
					effectiveness=2.4;
					reopeningChance=0.69999999;
				};
				class LacerationLarge: Laceration
				{
					effectiveness=0.2;
					reopeningChance=0.80000001;
				};
				class velocityWound: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.60000002;
					reopeningMinDelay=600;
					reopeningMaxDelay=1000;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness=4.4;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness=2.4;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness=0.2;
				};
				class punctureWound: Abrasion
				{
					effectiveness=0.2;
					reopeningChance=0.40000001;
					reopeningMinDelay=360;
					reopeningMaxDelay=900;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness=4.4;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness=2.4;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness=0.2;
				};
			};
			class QuikClot: FieldDressing
			{
				class Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=100;
					reopeningMaxDelay=300;
				};
				class AbrasionMinor: Abrasion
				{
					effectiveness=7;
				};
				class AbrasionMedium: Abrasion
				{
					effectiveness=7;
				};
				class AbrasionLarge: Abrasion
				{
					effectiveness=7;
				};
				class Avulsion: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=100;
					reopeningMaxDelay=300;
				};
				class AvulsionMinor: Avulsion
				{
					effectiveness=7;
				};
				class AvulsionMedium: Avulsion
				{
					effectiveness=7;
				};
				class AvulsionLarge: Avulsion
				{
					effectiveness=7;
				};
				class Contusion: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=100;
					reopeningMaxDelay=300;
				};
				class ContusionMinor: Contusion
				{
					effectiveness=7;
				};
				class ContusionMedium: Contusion
				{
					effectiveness=7;
				};
				class ContusionLarge: Contusion
				{
					effectiveness=7;
				};
				class Crush: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=100;
					reopeningMaxDelay=300;
				};
				class CrushMinor: Crush
				{
					effectiveness=7;
					reopeningChance=0.30000001;
				};
				class CrushMedium: Crush
				{
					effectiveness=7;
				};
				class CrushLarge: Crush
				{
					effectiveness=7;
				};
				class Cut: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=100;
					reopeningMaxDelay=300;
				};
				class CutMinor: Cut
				{
					effectiveness=7;
				};
				class CutMedium: Cut
				{
					effectiveness=7;
				};
				class CutLarge: Cut
				{
					effectiveness=7;
				};
				class Laceration: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=100;
					reopeningMaxDelay=300;
				};
				class LacerationMinor: Laceration
				{
					effectiveness=7;
				};
				class LacerationMedium: Laceration
				{
					effectiveness=7;
				};
				class LacerationLarge: Laceration
				{
					effectiveness=7;
				};
				class velocityWound: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=100;
					reopeningMaxDelay=300;
				};
				class velocityWoundMinor: velocityWound
				{
					effectiveness=7;
				};
				class velocityWoundMedium: velocityWound
				{
					effectiveness=7;
				};
				class velocityWoundLarge: velocityWound
				{
					effectiveness=7;
				};
				class punctureWound: Abrasion
				{
					effectiveness=7;
					reopeningChance=0.3;
					reopeningMinDelay=100;
					reopeningMaxDelay=300;
				};
				class punctureWoundMinor: punctureWound
				{
					effectiveness=7;
				};
				class punctureWoundMedium: punctureWound
				{
					effectiveness=7;
				};
				class punctureWoundLarge: punctureWound
				{
					effectiveness=7;
				};
			};
		};
	};

	class Medication {
		// How much does the pain get reduced?
        painReduce = 0;
        // How much will the heart rate be increased when the HR is low (below 55)? {minIncrease, maxIncrease}
        hrIncreaseLow[] = {0, 0};    // _heartRate < 55
        hrIncreaseNormal[] = {0, 0}; // 55 <= _heartRate <= 110
        hrIncreaseHigh[] = {0, 0};   // 110 < _heartRate

        // How long until this medication has disappeared
        timeInSystem = 120;
        // How long until the maximum effect is reached
        timeTillMaxEffect = 30;
        // How many of this type of medication can be in the system before the patient overdoses?
        maxDose = 4;
        // Function to execute upon overdose. Arguments passed to call back are 0: unit <OBJECT>, 1: medicationClassName <STRING>
        onOverDose = "";
        // The viscosity of a fluid is a measure of its resistance to gradual deformation by shear stress or tensile stress. For liquids, it corresponds to the informal concept of "thickness". This value will increase/decrease the viscoty of the blood with the percentage given. Where 100 = max. Using the minus will decrease viscosity
        viscosityChange = 0;

		#include "treatment\medication.hpp"
	};

	class IV {
		// volume is in millileters
        volume = 1000;
        ratio[] = {};
        type = "Blood";

		#include "treatment\iv.hpp"
	};
};
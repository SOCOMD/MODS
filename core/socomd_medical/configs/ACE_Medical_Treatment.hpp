class ace_medical_treatment {
	class Bandaging {
		class Bandage {
			effectiveness=10;
			reopeningChance=0;
			reopeningMinDelay=0;
			reopeningMaxDelay=0;
		};
		
		#include "treatment\bandage\FieldDressing.hpp"
		#include "treatment\bandage\ElasticBandage.hpp"
		#include "treatment\bandage\PackingBandage.hpp"
		#include "treatment\bandage\QuickClot.hpp"


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
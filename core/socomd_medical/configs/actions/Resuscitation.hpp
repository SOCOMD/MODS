class CPR: BasicBandage {
	treatmentTime = 10;
};

class DefibrillatorSuccess : CPR {
	treatmentTime = 10;
	displayName = "Defibrillate";
	displayNameProgress = "Stand Clear";
	items[] = {
		"SOCOMD_Defibrillator"
	};

	callbackProgress = "SOCOMD_Medical_fnc_DefibrillatorProgress";
	callbackSuccess = "SOCOMD_Medical_fnc_DefibrillatorSuccess";
};
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

	callbackStart = "SOCOMD_Medical_fnc_DefibrillatorStart";
	callbackSuccess = "SOCOMD_Medical_fnc_DefibrillatorSuccess";
	callbackFailure = "SOCOMD_Medical_fnc_DefibrillatorFailure";
};
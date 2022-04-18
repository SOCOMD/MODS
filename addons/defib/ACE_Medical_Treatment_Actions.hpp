class ACE_Medical_Treatment_Actions {
   
    class CPR;
	
	class SOCOMD_Defibrillator: CPR {
		displayName = CSTRING(Defib_Action_Use);
		displayNameProgress = "preparing to shock...";
        treatmentTime = 10;
		icon = "\z\socomd\addons\data\icon\AED.paa";		
		callbackStart = "";
		callbackProgress = "call socomd_defib_fnc_AED_sound;";
		callbackSuccess = "[_medic, _patient] call socomd_defib_fnc_AEDSuccess";
		callbackFailure = ""; 
        category = "advanced";
        treatmentLocations = TREATMENT_LOCATIONS_ALL;
        allowedSelections[] = {"Body"};
        allowSelfTreatment = 0;
        medicRequired = 0;
        items[] = {"socomd_defib_AED"};
        consumeItem = 0;
        condition = "ace_medical_treatment_fnc_canCPR";
        litter[] = {};
	};
};

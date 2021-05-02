
class SOCOMD_Morphine {
	allowSelfTreatment = 1;
	
	medicRequired = 0;
	treatmentTimeSelfCoef = 1; // todo: this isn't used anywhere, remove?
	consumeItem = 1;
	allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
	treatmentTime = ace_medical_treatment_treatmentTimeAutoinjector;
	displayName = "Morphine 10mg/1mL";
	displayNameProgress = "Injecting Morphine";
	icon = "\socomd_medical\tex\VPN.paa";
	category = "medication";
	condition = "SOCOMD_Medical_fnc_vpnMedicationCondition";
	callbackStart = "";
	callbackProgress = "";
	callbackSuccess = "SOCOMD_Medical_fnc_vpnMedicationSuccess";
	callbackFailure = "";
	items[] = {
		"SOCOMD_morphine"
	};
	
	animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
	animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
	animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
	animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
	sounds[] = {{"z\ace\addons\medical_treatment\sounds\Inject.ogg",1,1,50}};
	litter[] = {{}};
};

class SOCOMD_Epinephrine: SOCOMD_Morphine {
	displayName = "Adrenaline 1mg/1mL";
	displayNameProgress = "Injecting Adrenaline";
	icon = "\socomd_medical\tex\VPN.paa";
	condition = "SOCOMD_Medical_fnc_vpnMedicationCondition";
	callbackSuccess = "SOCOMD_Medical_fnc_vpnMedicationSuccess";
	requiresAll=true;
	items[] = {
		"SOCOMD_epinephrine"
	};
	litter[] = {{}};
};


////////////////////////////////////////////////////////////////////////////////

class Naloxone : SOCOMD_Morphine {
	displayName="Naloxone 1.6mg/4mL";
	displayNameProgress="Injecting Naloxone";
	icon="\socomd_medical\tex\VPN.paa";
	condition = "SOCOMD_Medical_fnc_vpnMedicationCondition";
	callbackSuccess = "SOCOMD_Medical_fnc_naloxoneSuccess";
	requiresAll=true;
	items[] = {
		"SOCOMD_naloxone"
	};
	litter[] = {{}};
};

class Fentanyl: SOCOMD_Morphine{
	displayName="Fentanyl 100mcg/2mL";
	displayNameProgress="Injecting Fentanyl";
	icon = "\socomd_medical\tex\VPN.paa";
	condition = "SOCOMD_Medical_fnc_vpnMedicationCondition";
	callbackSuccess = "SOCOMD_Medical_fnc_vpnMedicationSuccess";
	requiresAll=true;
	items[]={
		"SOCOMD_fentanyl"
	};
	litter[] = {{}};
};

class Ketamine_6mg : SOCOMD_Morphine {
	displayName="Ketamine 6mg/2mL";
	displayNameProgress="Injecting Ketamine 6mg/2mL";
	icon = "\socomd_medical\tex\VPN.paa";
	requiresAll=true;
	items[] = {
		"SOCOMD_ketamine"
	};
	callbackStart = "";
	callbackProgress = "";
	callbackSuccess = "SOCOMD_Medical_fnc_ketamineSuccess";
	litter[] = {{}};
};

class Ketamine_200mg : SOCOMD_Morphine {
	displayName="Ketamine 200mg/2mL";
	displayNameProgress="Injecting Ketamine 200mg/2mL";
	icon = "\socomd_medical\tex\VPN.paa";
	requiresAll=true;
	items[] = {
		"SOCOMD_ketamine"
	};
	callbackStart = "";
	callbackProgress = "";
	callbackSuccess = "SOCOMD_Medical_fnc_ketamineSuccess";
	litter[] = {{}};
};

////////////////////////////////////////////////////////////////////////////////

class NonVPNMedication : SOCOMD_Morphine {
	condition = "";
	callbackSuccess = "";
};

class Tetra : NonVPNMedication {
	displayName="Tetracycline 250mg";
	displayNameProgress="Giving Tetracycline";
	icon="\socomd_medical\tex\tetra.paa";
	items[]={
		"SOCOMD_tetra"
	};
	allowedSelections[]={
		"Head"
	};
};

class Apap : NonVPNMedication {
	displayName="Paracetemol 1g";
	displayNameProgress="Giving Paracetemol 1g";
	icon="\socomd_medical\tex\apap.paa";
	condition = "";
	callbackStart = "";

	items[] = {
		"SOCOMD_Apap"
	};
	allowedSelections[] = {
		"Head"
	};
	treatmentTime=1;
	litter[]={
		{"All","",{"SOCOMD_ApapLitter"}}
	};
};
class Morphine;
class SOCOMD_Morphine: Morphine {
	displayName = "Morphine 10mg/1mL";
	displayNameProgress = "Injecting Morphine";
	icon = "\socomd_medical\tex\VPN.paa";
	condition = "SOCOMD_Medical_fnc_vpnMedicationCondition";
	callbackSuccess = "SOCOMD_Medical_fnc_vpnMedicationSuccess";
	items[] = {
		"SOCOMD_morphine"
	};
	litter[] = {{}};
};

class SOCOMD_Epinephrine: Morphine {
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

class Naloxone : Morphine {
	displayName="Naloxone 1.6mg/4mL";
	displayNameProgress="Injecting Naloxone";
	icon="\socomd_medical\tex\VPN.paa";
	condition = "SOCOMD_Medical_fnc_vpnMedicationCondition";
	callbackSuccess = "SOCOMD_Medical_fnc_vpnMedicationSuccess";
	requiresAll=true;
	items[] = {
		"SOCOMD_naloxone"
	};
	litter[] = {{}};
};

class Fentanyl: Morphine{
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

class Ketamine_6mg : Morphine {
	displayName="Ketamine 6mg/2mL";
	displayNameProgress="Injecting Ketamine 6mg/2mL";
	icon = "\socomd_medical\tex\VPN.paa";
	requiresAll=true;
	items[] = {
		"SOCOMD_ketamine_6mg"
	};
	callbackStart = "";
	callbackProgress = "";
	callbackSuccess = "SOCOMD_Medical_fnc_ketamineSuccess";
	litter[] = {{}};
};

class Ketamine_200mg : Morphine {
	displayName="Ketamine 200mg/2mL";
	displayNameProgress="Injecting Ketamine 200mg/2mL";
	icon = "\socomd_medical\tex\VPN.paa";
	requiresAll=true;
	items[] = {
		"SOCOMD_ketamine_6mg"
	};
	callbackStart = "";
	callbackProgress = "";
	callbackSuccess = "SOCOMD_Medical_fnc_ketamineSuccess";
	litter[] = {{}};
};

////////////////////////////////////////////////////////////////////////////////

class NonVPNMedication : Morphine {
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
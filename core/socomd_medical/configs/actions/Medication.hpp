class Morphine: FieldDressing {
	displayName = "Morphine 10mg/1mL";
	displayNameProgress = "Injecting Morphine";
	icon = "socomd_data_core\icon\VPN.paa";
	condition = "SOCOMD_Medical_fnc_vpnMedicationCondition";
	callbackSuccess = "SOCOMD_Medical_fnc_vpnMedicationSuccess";
	items[] = {
		"ACE_morphine"
	};
};

class Epinephrine: Morphine {
	displayName = "Epinephrine 1mg/1mL";
	displayNameProgress = "Injecting Epinephrine";
	icon = "socomd_data_core\icon\VPN.paa";
	items[] = {
		"ACE_epinephrine"
	};
};

class Adenosine : Morphine {};
class Atropine : Morphine {};

////////////////////////////////////////////////////////////////////////////////

class Naloxone : Morphine {
	displayName="Naloxone 1.6mg/4mL";
	displayNameProgress="Injecting Naloxone";
	icon="socomd_data_core\icon\VPN.paa";
	items[] = {
		"SOCOMD_naloxone"
	};
};

class Fentanyl: Morphine{
	displayName="Fentanyl 100mcg/2mL";
	displayNameProgress="Injecting Fentanyl";
	items[]={
		"SOCOMD_fentanyl"
	};
};

class Ketamine_6mg : Morphine {
	displayName="Ketamine 6mg/2mL";
	displayNameProgress="Injecting Ketamine 6mg/2mL";
	items[] = {
		"SOCOMD_ketamine_6mg"
	};
	callbackStart = "";
	callbackProgress = "";
	callbackSuccess = "SOCOMD_Medical_fnc_ketamineSuccess";
};

class Ketamine_200mg : Morphine {
	displayName="Ketamine 200mg/2mL";
	displayNameProgress="Injecting Ketamine 200mg/2mL";
	items[] = {
		"SOCOMD_ketamine_200mg"
	};
	callbackStart = "";
	callbackProgress = "";
	callbackSuccess = "SOCOMD_Medical_fnc_ketamineSuccess";
};

////////////////////////////////////////////////////////////////////////////////

class NonVPNMedication : Morphine {
	condition = "";
	callbackSuccess = "";
};

class Tetra : NonVPNMedication {
	displayName="Tetracycline 250mg";
	displayNameProgress="Giving Tetracycline";
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
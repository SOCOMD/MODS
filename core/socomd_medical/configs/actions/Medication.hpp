class Morphine: FieldDressing {
	displayName = "Morphine 10mg/1mL";
	displayNameProgress = "Injecting Morphine";
	icon = "socomd_data_core\icon\VPN.paa";
	items[] = {
		"ACE_Morphine"
		//"SOCOMD_VPN"
	};
};
class Epinephrine: Morphine {
	displayName = "Epinephrine 1mg/1mL";
	displayNameProgress = "Injecting Epinephrine";
	icon = "socomd_data_core\icon\VPN.paa";
	items[] = {
		"ACE_epinephrine"
		//"SOCOMD_VPN"
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
		"SOCOMD_Naloxone"
		//"SOCOMD_VPN"
	};
};

class Fentanyl: Morphine{
	displayName="Fentanyl 100mcg/2mL";
	displayNameProgress="Injecting Fentanyl";
	items[]={
		"ACE_fentanyl"
		//"SOCOMD_VPN"
	};
};

class Ketamine_6mg : Morphine {
	displayName="Ketamine 6mg/2mL";
	displayNameProgress="Injecting Ketamine 6mg/2mL";
	items[] = {
		"SOCOMD_Ketamine_6mg"
		//"SOCOMD_VPN"
	};
	callbackSuccess = "SOCOMD_Medical_fnc_ketamine";
};

class Ketamine_200mg : Morphine {
	displayName="Ketamine 200mg/2mL";
	displayNameProgress="Injecting Ketamine 200mg/2mL";
	items[] = {
		"SOCOMD_Ketamine_200mg"
		//"SOCOMD_VPN"
	};
	callbackSuccess = "SOCOMD_Medical_fnc_ketamine";
};

class Tetra : Morphine {
	displayName="Tetracycline 250mg";
	displayNameProgress="Giving Tetracycline";
	items[]={
		"SOCOMD_Tetra"
	};
	allowedSelections[]={
		"Head"
	};
};

class Apap : Morphine{
	displayName="Paracetemol 1g";
	displayNameProgress="Giving Paracetemol 1g";
	items[] = {
		"ACE_apap"
	};
	allowedSelections[] = {
		"Head"
	};
	treatmentTime=1;
	litter[]={
		{"All","",{"ACE_MedicalLitter_apap"}}
	};
};
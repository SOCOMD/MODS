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
class Adenosine: Morphine {};
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
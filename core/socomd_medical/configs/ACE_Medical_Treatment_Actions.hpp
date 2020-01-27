class ACE_Medical_Treatment_Actions {
	class FieldDressing;
    class Morphine: FieldDressing {
        displayName = "Morphine 10mg/1mL";
        icon = "socomd_data_core\icon\VPN.paa";
    };

    class Epinephrine : Morphine {
        displayName="Epinephrine 1mg/1mL";
        displayNameProgress="Injecting Epinephrine";
        icon="socomd_data_core\icon\VPN.paa";
    };
};
class Extended_PostInit_EventHandlers {
    class socomd_core {
        clientinit = "[_this select 0] call socomd_fnc_XEH_postInit";
    };
	class SOCOMD_medical_postInit
	{
		init="call SOCOMD_fnc_events";
	};
};
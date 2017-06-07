class CfgVehicles
{
    class All;
	class Thing : All {};
	class ModuleEmpty_F : Thing {};

    class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyPlayer;
			class AnyBrain;
			class EmptyDetector;
		};
    };

    class SOCOMD_Module_Base : Module_F
    {
        mapSize = 1;
        side = 7;

        scope = 1;
        scopeCurator = 1;

        author = AUTHOR_STR;
        displayName = "SOCOMD Module Base";
        vehicleClass = "Modules";
        category = "SOCOMD_Zeus_Modules";
        
        function = "";
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 0;

        class Arguments 
        {

        };

        class ModuleDescription: ModuleDescription
        {
            description = "SOCOMD Module Base";
        };
    };

    class SOCOMD_Module_ToggleUndercover : SOCOMD_Module_Base
    {
        scopeCurator = 2;
        isGlobal = 1;

        _generalMacro = "SOCOMD_Module_ToggleUndercover";
        displayName = "Toggle Undercover";
        function = "SOCOMD_fnc_ModuleToggleUndercover";
    };
};
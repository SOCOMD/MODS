#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"socomd_main","cTab"};
        author = "";
        authors[] = {""};
        VERSION_CONFIG;
    };
};

class CfgFunctions
{
	class ace_medical_statemachine
	{
        tag = "ctab";
		class Functions
		{
			class drawBftMarkers{
                
			file="z\socomd\addons\ctab_fix\function_overwrites\fn_drawBftMarkers.sqf";
            };
        };
    };
};
class CfgPatches
{
    class SA_AdvancedSlingLoading
    {
        //Internal Version
        version = 1.1.0;
        versionStr = "1.1.0";
        versionAr[] = { 1,1,0 };

        units[] = {"SA_AdvancedSlingLoading"};
        requiredVersion = 1;
        requiredAddons[] = {
            "A3_Modules_F",
            "ace_interaction",
            //SOCOMD Requirments
            "socomd_core"
        };
    };
};
class CfgNetworkMessages
{
    class AdvancedSlingLoadingRemoteExecClient
    {
        module = "AdvancedSlingLoading";
        parameters[] = {"ARRAY","STRING","OBJECT","BOOL"};
    };
    class AdvancedSlingLoadingRemoteExecServer
    {
        module = "AdvancedSlingLoading";
        parameters[] = {"ARRAY","STRING","BOOL"};
    };
};
class CfgFunctions
{
    class SA
    {
        class AdvancedSlingLoading
        {
            file = "\SA_AdvancedSlingLoading\functions";
            class advancedSlingLoadingInit
            {
                postInit = 1;
            };
        };
    };
};

//Custom SOCOMD ACE 3 Interaction Config
#include "configs\CfgVehicles.hpp"
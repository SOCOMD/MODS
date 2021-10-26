#include "gcam_component.hpp"

class CfgPatches
{
    class socomd_gcam
    {
        //Internal Version
        version = 1.1.0;
        versionStr = "1.1.0";
        versionAr[] = { 1,1,0 };

        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            //SOCOMD Requirments
            "socomd_core"
        };
    };
};

class CfgFunctions
{
    class SOCOMD
    {
        class GCam
        {
            file = "\socomd_gcam\functions";
            class OpenGCam {};
        };
    };
};
#include "gcam_component.hpp"

class CfgPatches
{
	class socomd_gcam
	{
		//Internal Version
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = { 1,0,0 };

		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
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
#include "gcam_component.hpp"

class CfgPatches
{
	class socomd_gcam
	{
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
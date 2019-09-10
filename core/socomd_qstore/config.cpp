/* RESOURCES
Dialog Overview - https://community.bistudio.com/wiki/Dialog_Control
Control Event Handlers - https://community.bistudio.com/wiki/User_Interface_Event_Handlers
*/

#include "predefined.hpp"

class CfgPatches {
	class socomd_qstore {
		//Internal Version
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = { 1,0,0 };

		//Required A3 Version
		requiredVersion = 1.2;

		requiredAddons[] = {};
		units[] = {};
	    weapons[] = {};
		ammo[] = {};
		magazines[] = {};
	};
};

#include "configs\BISControls.hpp"
#include "configs\CfgFunctions.hpp"
#include "configs\CfgDialogs.hpp"
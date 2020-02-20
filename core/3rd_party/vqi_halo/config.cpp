// 	: : : L.E.A.P Master Config : : :
//	MUST include \ from master config

#define TEast				0
#define TWest				1
#define TGuerrila			2
#define TCivilian			3
#define TSideUnknown		4
#define TEnemy				5
#define TFriendly			6
#define TLogic				7

#define private				0
#define protected			1
#define public				2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly			2
#define ReadOnlyVerified	3

#define true				1
#define false				0

enum {
	 //  = 2,	// Error parsing: Empty enum name
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};


class CfgPatches {
	
	class VQI_DemonDropper {
		name = "LEAP";
		author = "R. Von Quest";
		requiredVersion = 1.68;
		requiredAddons[] = {"Extended_EventHandlers"};
		units[] = {};
		weapons[] = {"VQI_Jumpsuit_Icarus","VQI_Vest_Dragonfly","VQI_Vest_Dragonfly_OFF","VQI_Vest_Dragonfly_GAS","VQI_Helmet_HALO"};
	};
};



//
class cfgWeapons {
	#include "\vqi_halo\VQI-DemonDropper\Equipment\cfg_includes.hpp"
};




//
class cfgVehicles {

	class B_Pilot_F;								// B_Soldier_04_F
	class VQI_HALO_Cadet : B_Pilot_F {				// Assign Unit (other config)
		uniformClass = "VQI_Jumpsuit_Icarus";
		scope = 1; 									//1,2,public,private? 1 will hide Unit!
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\vqi_halo\VQI-DemonDropper\Equipment\Jumpsuit\Icarus.paa"};
	};
};


#include "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gui_defines.hpp"

class rscTitles {
	#include "\vqi_halo\VQI-DemonDropper\Equipment\Altimeter\gui_altimeter.hpp"
	#include "\vqi_halo\VQI-DemonDropper\Equipment\Helmet\gui_helmet.hpp"
	#include "\vqi_halo\VQI-DemonDropper\JumpCraft\gfx\gui_worldmap.hpp"
};


class cfgSounds {
	#include "\vqi_halo\VQI-DemonDropper\Sounds\cfgSounds.hpp"
	sounds[] = {};
}; 
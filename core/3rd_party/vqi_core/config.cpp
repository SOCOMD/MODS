// : : : CORE Master Config : : :

#define TEast			0
#define TWest			1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown	4
#define TEnemy			5
#define TFriendly		6
#define TLogic			7

#define private			0
#define protected		1
#define public			2

#define ReadAndWrite	0
#define ReadAndCreate	1
#define ReadOnly		2
#define ReadOnlyVerified	3

#define true	1
#define false	0

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
	
	class VQI_CORE {
		units[] = {}; 					//
		weapons[] = {}; 				//
		requiredVersion = 0.1; 			//
		requiredAddons[] = {}; 			//
		author = "R. Von Quest";
	};
};




// Items
class cfgWeapons {

	#include "\vqi_core\VQI-StartingOptions\Support\cfg_includes.hpp"
};


// Misc & Dialogs
#include "\vqi_core\VQI-StartingOptions\Support\SupportRadio\def_supportradio.hpp"
#include "\vqi_core\VQI-StartingOptions\Support\SupportRadio\inc_supportradio.hpp"
//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_x.hpp"


// Resources
class rscTitles {
	#include "\vqi_core\VQI-StartingOptions\StartEFX\gui_worldmap.hpp"
	#include "\vqi_core\VQI-StartingOptions\Support\SupportRadio\gui_supportradio.hpp"
	#include "\vqi_core\VQI-StartingOptions\Damage\gui_bloodss.hpp"
	
	#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_x.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_head.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_chest.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_gut.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_rightarm.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_leftarm.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_rightforearm.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_leftforearm.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_rightleg.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_leftleg.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_rightupleg.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_leftupleg.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_rightfoot.hpp"
	//#include "\vqi_core\VQI-StartingOptions\Medical\dia_injuryreport_leftfoot.hpp"
};


// Sound Setup
class cfgSounds {
	#include "\vqi_core\VQI-StartingOptions\Sounds\cfgSounds.hpp"
	sounds[] = {};
}; 









////////////////////////////////////////////////////////////
/* NOTES:







// Thanks to Larrow
class cfgFunctions {
	#include "\vqi_core\VQI-StartingOptions\StartLocation\X-CORE\LARs\LARs_spawnComp.hpp"
};

#include "\vqi_core\VQI-StartingOptions\StartLocation\X-CORE\compositions\compositions.hpp"


*/
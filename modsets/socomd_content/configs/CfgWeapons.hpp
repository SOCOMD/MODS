class mode_semiauto;
class CfgWeapons {

	class Rifle;
	class RifleCore; 
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
    	class GunParticles;
	};
	class ItemCore;
	class CBA_MiscItem;
	class CBA_MiscItem_ItemInfo;

	//Item Defines
	#include "weapons\base\primary.hpp"
	#include "weapons\base\pointer.hpp"
	#include "weapons\base\secondary.hpp"
	#include "weapons\base\handgun.hpp"
	#include "weapons\base\uniform.hpp"
	#include "weapons\base\vest.hpp"
	#include "weapons\base\items.hpp"
	
	//Item SOCOMD Defines
	#include "weapons\override\socomd_men_items.hpp"
	#include "weapons\override\optic.hpp"
	#include "weapons\override\malfunctions.hpp"
};

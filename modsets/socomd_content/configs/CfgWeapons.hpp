class mode_semiauto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CUP_PicatinnyTopMount;
class CUP_PicatinnyTopShortMount;
class CUP_PicatinnySideMount;
class ItemCore;
class InventoryItem_Base_F;
class InventoryMuzzleItem_Base_F;
class InventoryFlashLightItem_Base_F;
class InventoryOpticsItem_Base_F;
class GrenadeLauncher;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
// class asdg_MuzzleSlot;
class CfgRecoils
{
	class recoil_default;
	class recoil_saw: recoil_default
	{
		muzzleOuter[]={0.2,0.60000002,0.2,0.2};
		kickBack[]={0.0049999999,0.02};
		temporary=0.0049999999;
	};
};
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
	class asdg_MuzzleSlot_556;

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

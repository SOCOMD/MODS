class CfgWeapons {
    
	class Default;
	class ItemCore: Default{};
	class UniformItem: ItemCore
	{
		class ItemInfo;
	};
	class InventoryItem_Base_F;
	class VestItem: ItemCore
	{
		class ItemInfo;
	};
    #include "weapons\binocular.hpp"
    #include "weapons\headgear_hard.hpp"
    #include "weapons\headgear_soft.hpp"
    #include "weapons\gps.hpp"
    #include "weapons\items.hpp"
    #include "weapons\nvg.hpp"
    #include "weapons\vests.hpp"
    #include "uniforms\CfgWeapons.hpp"
};
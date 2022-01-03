class CfgWeapons {
    
    class Default;
    class ItemCore: Default{
        class ItemInfo;
    };
    class InventoryItem_Base_F;
    class UniformItem: InventoryItem_Base_F
    {
        class ItemInfo;
    };
    class VestItem: ItemCore
    {
        class ItemInfo;
    };
    #include "weapons\binocular.hpp"
    #include "weapons\headgear_hard.hpp"
    #include "weapons\headgear_soft.hpp"
    #include "weapons\gps.hpp"
    #include "weapons\items.hpp"
    // #include "weapons\lasers.hpp"
    #include "weapons\nvg.hpp"
    #include "weapons\vests.hpp"
    #include "uniforms\CfgWeapons.hpp"
};
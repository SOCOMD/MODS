class InventoryItem_Base_F;
class SOCOMD_itemcore: ItemCore {
    type=4096;
    detectRange=-1;
    simulation="ItemMineDetector";
    scope=0;
    author="SOCOMD";
};
 
class SOCOMD_tent_item: SOCOMD_itemcore {
    displayName="Camo net Green (Small)";
    scope=2;
    author="SOCOMD";
    picture="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
    model = "\NDS_6x6_ATV\6x6_ATV_camnet\NDS_SOV_camnet";
    icon="iconObject_circle";
    descriptionShort="Deployable Camo net";
    
    class ItemInfo: InventoryItem_Base_F {
        mass=15;
    };
};

class SOCOMD_tent_item_des: SOCOMD_itemcore {
    displayName="Camo net Desert (Small)";
    scope=2;
    author="SOCOMD";
    picture="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
    model = "\NDS_6x6_ATV\6x6_ATV_camnet\NDS_SOV_camnet";
    icon="iconObject_circle";
    descriptionShort="Deployable Camo net";

    class ItemInfo: InventoryItem_Base_F {
        mass=15;
    };
};

class SOCOMD_tent_item_sno: SOCOMD_itemcore {
    displayName="Camo net Snow (Small)";
    scope=2;
    author="SOCOMD";
    picture="\A3\Structures_F\Mil\Shelters\Data\UI\map_CamoNet_CA.paa";
    model = "\NDS_6x6_ATV\6x6_ATV_camnet\NDS_SOV_camnet";
    icon="iconObject_circle";
    descriptionShort="Deployable Camo net";

    class ItemInfo: InventoryItem_Base_F {
        mass=15;
    };
};
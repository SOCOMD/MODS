class Vest_Camo_Base;

class lbt_pouchless_coy: Vest_Camo_Base{
    class ItemInfo: VestItem
    {
        containerClass="Supply150";
        mass=10;
        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName="HitChest";
                armor=30;
                passThrough=0.1;
            };
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=30;
                passThrough=0.1;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=30;
                passThrough=0.1;
            };
            class Body
            {
                hitpointName="HitBody";
                passThrough=0.1;
            };
        };
    };
};
class lbt_tl_mc: Vest_Camo_Base{
    class ItemInfo: VestItem
    {
        containerClass="Supply150";
        mass=10;
        class HitpointsProtectionInfo
        {
            class Chest
            {
                hitpointName="HitChest";
                armor=30;
                passThrough=0.1;
            };
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=30;
                passThrough=0.1;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=30;
                passThrough=0.1;
            };
            class Body
            {
                hitpointName="HitBody";
                passThrough=0.1;
            };
        };
    };
};
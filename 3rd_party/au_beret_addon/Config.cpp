#include "BIS_AddonInfo.hpp"
enum {
     //  = 2,    
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
       class AU_Beret_addon {
              units[] = {};
              weapons[] = {};
              requiredVersion = 0.1;
              requiredAddons[] = {"A3_Characters_F_EPB"};
              version = "1.0.0";
              author = "OmniscientPompey";
              authorUrl = "";
       };
};

class cfgWeapons {
       class ItemCore;
       class HeadgearItem;
       class H_Beret_blk;
       
       class AU_01_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret (RAMP)";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_01_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              };
       };
       
       class AU_02_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret (SASR) ";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_02_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              };
       };
       
       class AU_03_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret 2CDO(4RAR)";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_03_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              };
       };
       
       class AU_04_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret(1CDO)";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_04_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              };
       };
       
       class AU_05_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret(SOER)";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_05_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              };
       };
       
       class AU_06_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret(SOLS)";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_06_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              };
       };

       class AU_07_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret(3RAR)";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_07_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              };
       };
       
class AU_08_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret(RAR)";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_08_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              };
       };
       
class AU_10_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret(AAAvn)";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_10_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              };
       };
       
class AU_11_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret(RAANC)";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_11_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              };
    };

class AU_12_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret(MFO)";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_12_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              };
        };

class AU_13_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret(UN)";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_UN_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              }; 
        };

class AU_14_780000_v1 : ItemCore {
              author = "OmniscientPompey";
              scope = 2;
              weaponPoolAvailable = 1;
              displayName = "Beret(RAAC)";
              picture = "\AU_Beret_addon\beret\icon\AU_01_780000_coloured.paa";
              model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
              hiddenSelections[] = {"camo"};
              hiddenSelectionsTextures[] = {"\AU_Beret_addon\beret\data\AU_RAAC_780000_v1.paa"};
              
              class ItemInfo : HeadgearItem {
                     mass = 6;
                     uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
                     modelSides[] = {3, 1};
                     armor = 0;
                     passThrough = 1;
                     hiddenSelections[] = {"camo"};
              };
        };
};

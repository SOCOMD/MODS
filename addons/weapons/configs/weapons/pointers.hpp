
class acc_flashlight;
class InventoryFlashLightItem_Base_F;
class S_flashlightbase: acc_flashlight {
    scope=1;
    picture = "\ACWP_core\tex\LOGO.paa";
    dlc="Troy_4A5_Acc";
    displayName="WMLX (Tan)";
    descriptionshort = "Flashlight";
    model="M4A5_Troy_Acc\mesh\ACC_test.p3d";
    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass=4;
        class FlashLight {
            color[]={7000,7500,10000};
            ambient[]={6,9,9};
            intensity=2.5;
            size=1;
            innerAngle=20;
            outerAngle=80;
            coneFadeCoef=10;
            position="light";
            direction="light_dir";
            useFlare=1;
            flareSize=1.5;
            flareMaxDistance="600.0f";
            dayLight=1;
            class Attenuation
            {
                start=0.5;
                constant=0;
                linear=0;
                quadratic=1;
                hardLimitStart=200;
                hardLimitEnd=300;
            };
            scale[]={0};
        };
    };
};
class S_ILL_flash_base: acc_flashlight {
    scope=1;
    picture = "\ACWP_core\tex\LOGO.paa";
    dlc="Troy_4A5_Acc";
    displayName="WMLX (Tan)";
    descriptionshort = "Flashlight";
    model="M4A5_Troy_Acc\mesh\ACC_test.p3d";
    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass=4;
        class FlashLight {
            color[]={7000,7500,10000};
            ambient[]={6,9,9};
            intensity=1;
            size=1;
            innerAngle=20;
            outerAngle=80;
            coneFadeCoef=10;
            position="light";
            direction="light_dir";
            useFlare=1;
            flareSize=1.5;
            flareMaxDistance="600.0f";
            irLight = 1;
            class Attenuation
            {
                start=0.5;
                constant=0;
                linear=0;
                quadratic=1;
                hardLimitStart=200;
                hardLimitEnd=300;
            };
            scale[]={0};
        };
    };
};

class S_ILL_base: acc_flashlight {
    scope=1;
    picture = "\ACWP_core\tex\LOGO.paa";
    dlc="Troy_4A5_Acc";
    displayName="WMLX (Tan)";
    descriptionshort = "Flashlight";
    model="M4A5_Troy_Acc\mesh\ACC_test.p3d";
    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass=4;
        class Flashlight {
            color[] = {1, 1, 1, 1};
            ambient[] = {1, 1, 1, 1};
            size = 1;
            innerAngle = 7.5;
            outerAngle = 10;
            position = "laser";
            direction = "laser_dir";
            useFlare = 1;
            flareSize = 1;
            flareMaxDistance = 20;
            scale[] = {0};
            coneFadeCoef = 5;
            intensity = 500;
            irLight = 1;

            class Attenuation {
                constant = 0.5;
                linear = 0.1;
                quadratic = 0.2;
                start = 0;
                hardLimitStart = 27;
                hardLimitEnd = 2500;
            };
        };
    };
};
class S_IR_ILL_base: acc_flashlight {
    scope=1;
    picture = "\ACWP_core\tex\LOGO.paa";
    dlc="Troy_4A5_Acc";
    displayName="WMLX (Tan)";
    descriptionshort = "Flashlight";
    model="M4A5_Troy_Acc\mesh\ACC_test.p3d";
    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass=4;
        class Pointer
        {
            irLaserPos = "laser";
            irLaserEnd = "laser_dir";
            irDistance = 5;
            dotSize = 1.2;
        };
        class Flashlight {
            color[] = {1, 1, 1, 1};
            ambient[] = {1, 1, 1, 1};
            size = 1;
            innerAngle = 7.5;
            outerAngle = 10;
            position = "laser";
            direction = "laser_dir";
            useFlare = 1;
            flareSize = 1;
            flareMaxDistance = 20;
            scale[] = {0};
            coneFadeCoef = 8;
            intensity = 500;
            irLight = 1;
            class Attenuation {
                constant = 0.5;
                linear = 0.1;
                quadratic = 0.2;
                start = 0;
                hardLimitStart = 27;
                hardLimitEnd = 1500;
            };
        };
    };
};
class S_IRbase: ItemCore {
    scope=1;
    picture = "\ACWP_core\tex\LOGO.paa";
    dlc="Troy_4A5_Acc";
    displayName="WMLX-2 IR";
    descriptionshort = "IR Laser";
    model="M4A5_Troy_Acc\mesh\ACC_test.p3d";
    class ItemInfo: InventoryFlashLightItem_Base_F {
        mass = 4;
        class Pointer
        {
            irLaserPos = "laser";
            irLaserEnd = "laser_dir";
            irDistance = 5;
            dotSize = 1.2;
        };
        class FlashLight{};
    };
};

#define PEQ_MACRO(NAME, BASECLASS, COLOUR, MODEL) \
class DOUBLES(BASECLASS,COLOUR) : S_IRbase {\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,ILL,COLOUR));\
    MRT_SwitchItemNextClass = QUOTE(TRIPLES(BASECLASS,IR_ILL,COLOUR));\
    MRT_switchItemHintText = "IR(Laser)";\
    scope=1;\
    dlc="Troy_4A5_Acc";\
    displayName= NAME;\
    model= MODEL;\
};\
class TRIPLES(BASECLASS,IR_ILL,COLOUR) : S_IR_ILL_base {\
    MRT_SwitchItemPrevClass = QUOTE(DOUBLES(BASECLASS,COLOUR));\
    MRT_SwitchItemNextClass = QUOTE(TRIPLES(BASECLASS,ILL,COLOUR));\
    MRT_switchItemHintText = "IR(Laser + Illuminator)";\
    scope=2;\
    dlc="Troy_4A5_Acc";\
    displayName= NAME;\
    model= MODEL;\
};\
class TRIPLES(BASECLASS,ILL,COLOUR) : S_ILL_base {\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,IR_ILL,COLOUR));\
    MRT_SwitchItemNextClass = QUOTE(DOUBLES(BASECLASS,COLOUR));\
    MRT_switchItemHintText = "IR(Illuminator)";\
    scope=1;\
    dlc="Troy_4A5_Acc";\
    displayName= NAME;\
    model= MODEL;\
};

#define PEQ_LIGHT_MACRO(NAME, BASECLASS, COLOUR, MODEL) \
class TRIPLES(BASECLASS,IR,COLOUR) : S_IRbase {\
    MRT_SwitchItemPrevClass = QUOTE(DOUBLES(BASECLASS,COLOUR));\
    MRT_SwitchItemNextClass = QUOTE(TRIPLES(BASECLASS,IR_ILL,COLOUR));\
    MRT_switchItemHintText = "IR(Laser)";\
    scope=1;\
    dlc="Troy_4A5_Acc";\
    displayName= NAME;\
    model= MODEL;\
};\
class TRIPLES(BASECLASS,IR_ILL,COLOUR) : S_IR_ILL_base {\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,IR,COLOUR));\
    MRT_SwitchItemNextClass = QUOTE(TRIPLES(BASECLASS,ILL,COLOUR));\
    MRT_switchItemHintText = "IR(Laser + Illuminator)";\
    scope=2;\
    dlc="Troy_4A5_Acc";\
    displayName= NAME;\
    model= MODEL;\
};\
class TRIPLES(BASECLASS,ILL,COLOUR) : S_ILL_base {\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,IR_ILL,COLOUR));\
    MRT_SwitchItemNextClass = QUOTE(DOUBLES(BASECLASS,COLOUR));\
    MRT_switchItemHintText = "IR(Illuminator)";\
    scope=1;\
    dlc="Troy_4A5_Acc";\
    displayName= NAME;\
    model= MODEL;\
};\
class DOUBLES(BASECLASS,COLOUR) : S_flashlightbase {\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,ILL,COLOUR));\
    MRT_SwitchItemNextClass = QUOTE(TRIPLES(BASECLASS,IR,COLOUR));\
    MRT_switchItemHintText = "VIS(Flashlight)";\
    scope=1;\
    dlc="Troy_4A5_Acc";\
    displayName= NAME;\
    model= MODEL;\
};

#define IR_LIGHT_MACRO(NAME, BASECLASS, COLOUR, MODEL) \
class DOUBLES(BASECLASS,COLOUR) : S_flashlightbase {\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,ILL,COLOUR));\
    MRT_SwitchItemNextClass = QUOTE(TRIPLES(BASECLASS,ILL,COLOUR));\
    MRT_switchItemHintText = "VIS(Flashlight)";\
    scope=2;\
    dlc="Troy_4A5_Acc";\
    displayName= NAME;\
    model= MODEL;\
};\
class TRIPLES(BASECLASS,ILL,COLOUR) : S_ILL_flash_base {\
    MRT_SwitchItemPrevClass = QUOTE(DOUBLES(BASECLASS,COLOUR));\
    MRT_SwitchItemNextClass = QUOTE(DOUBLES(BASECLASS,COLOUR));\
    MRT_switchItemHintText = "IR(Illuminator)";\
    scope=1;\
    dlc="Troy_4A5_Acc";\
    displayName= NAME;\
    model= MODEL;\
};

PEQ_MACRO("TEST PEQ",SOCOMD_TEST_PEQ,Tan,"M4A5_Troy_Acc\mesh\LLM\tan\PEQ_T.p3d")
PEQ_LIGHT_MACRO("TEST PEQ+Light",SOCOMD_TEST_PEQ_LIGHT,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M620_B_PEQ_T.p3d")
IR_LIGHT_MACRO("TEST Light",SOCOMD_TEST_LIGHT,Tan,"M4A5_Troy_Acc\mesh\LLM\tan\M620_L.p3d")

// Single PEQ boxes
// Tan
PEQ_MACRO("PEQ top (Tan)",PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\PEQ_T.p3d")
PEQ_MACRO("PEQ side (Tan)",PEQ_R,tan,"M4A5_Troy_Acc\mesh\LLM\tan\PEQ_R.p3d")
PEQ_MACRO("PEQ top (Tan)",SBR_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\SBR_PEQ_T.p3d")
// Black
PEQ_MACRO("PEQ top (Black)",PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\PEQ_T.p3d")
PEQ_MACRO("PEQ side (Black)",PEQ_R,black,"M4A5_Troy_Acc\mesh\LLM\black\PEQ_R.p3d")
PEQ_MACRO("PEQ top (Black)",SBR_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\SBR_PEQ_T.p3d")
// Tan + Tan Paint
PEQ_MACRO("PEQ top (Tan, Paint Tan)",PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\PEQ_T.p3d")
PEQ_MACRO("PEQ side (Tan, Paint Tan)",PEQ_R,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\PEQ_R.p3d")
PEQ_MACRO("PEQ top (Tan, Paint Tan)",SBR_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\SBR_PEQ_T.p3d")
// Black + Tan Paint
PEQ_MACRO("PEQ top (Paint Tan)",PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\PEQ_T.p3d")
PEQ_MACRO("PEQ side (Paint Tan)",PEQ_R,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\PEQ_R.p3d")
PEQ_MACRO("PEQ top (Paint Tan)",SBR_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\SBR_PEQ_T.p3d")
// Black + Don Paint
PEQ_MACRO("PEQ top (Paint Don)",PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\PEQ_T.p3d")
PEQ_MACRO("PEQ side (Paint Don)",PEQ_R,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\PEQ_R.p3d")
PEQ_MACRO("PEQ top (Paint Don)",SBR_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\SBR_PEQ_T.p3d")

// PEQ + WLMX
// Tan
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Tan)",WMLX_L_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\WMLX_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Tan)",WMLX_L_PEQ_R,tan,"M4A5_Troy_Acc\mesh\LLM\tan\WMLX_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Tan)",WMLX_T_PEQ_R,tan,"M4A5_Troy_Acc\mesh\LLM\tan\WMLX_T_PEQ_R.p3d")
// Black
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Black)",WMLX_L_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\WMLX_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Black)",WMLX_L_PEQ_R,black,"M4A5_Troy_Acc\mesh\LLM\black\WMLX_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Black)",WMLX_T_PEQ_R,black,"M4A5_Troy_Acc\mesh\LLM\black\WMLX_T_PEQ_R.p3d")
// Tan + Tan Paint
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Tan, Paint Tan)",WMLX_L_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\WMLX_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Tan, Paint Tan)",WMLX_L_PEQ_R,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\WMLX_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Tan, Paint Tan)",WMLX_T_PEQ_R,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\WMLX_T_PEQ_R.p3d")
// Black + Tan Paint
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Paint Tan)",WMLX_L_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\WMLX_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Paint Tan)",WMLX_L_PEQ_R,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\WMLX_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Paint Tan)",WMLX_T_PEQ_R,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\WMLX_T_PEQ_R.p3d")
// Black + Don Paint
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Paint Don)",WMLX_L_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\WMLX_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Paint Don)",WMLX_L_PEQ_R,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\WMLX_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("Inforce WMLx + AN/PEQ-15 (Paint Don)",WMLX_T_PEQ_R,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\WMLX_T_PEQ_R.p3d")

// PEQ + M300c
// Tan
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Tan)",M300_L_PEQ_R,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M300_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Tan)",M300_B_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M300_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Tan)",M300_L_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M300_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Tan)",M300_R_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M300_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Tan)",SBR_M300_R_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\SBR_M300_R_PEQ_T.p3d")
// Tan
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Black)",M300_L_PEQ_R,black,"M4A5_Troy_Acc\mesh\LLM\black\M300_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Black)",M300_B_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\M300_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Black)",M300_L_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\M300_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Black)",M300_R_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\M300_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Black)",SBR_M300_R_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\SBR_M300_R_PEQ_T.p3d")
// Tan
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Tan, Paint Tan)",M300_L_PEQ_R,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\M300_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Tan, Paint Tan)",M300_B_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\M300_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Tan, Paint Tan)",M300_L_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\M300_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Tan, Paint Tan)",M300_R_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\M300_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Tan, Paint Tan)",SBR_M300_R_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\SBR_M300_R_PEQ_T.p3d")
// Paint Tan
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Paint Tan)",M300_L_PEQ_R,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M300_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Paint Tan)",M300_B_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M300_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Paint Tan)",M300_L_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M300_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Paint Tan)",M300_R_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M300_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Paint Tan)",SBR_M300_R_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\SBR_M300_R_PEQ_T.p3d")
// Paint Don
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Paint Don)",M300_L_PEQ_R,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M300_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Paint Don)",M300_B_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M300_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Paint Don)",M300_L_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M300_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Paint Don)",M300_R_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M300_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M300c Scout Light + AN/PEQ-15 (Paint Don)",SBR_M300_R_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\SBR_M300_R_PEQ_T.p3d")

// M600v
// Tan
IR_LIGHT_MACRO("M600v Scout Light (Tan)",M600_L,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M600_L.p3d")
IR_LIGHT_MACRO("M600v Scout Light (Tan)",M600_R,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M600_R.p3d")
IR_LIGHT_MACRO("M600v Scout Light (Tan)",M600_B,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M600_B.p3d")
// Black
IR_LIGHT_MACRO("M600v Scout Light (Black)",M600_L,black,"M4A5_Troy_Acc\mesh\LLM\black\M600_L.p3d")
IR_LIGHT_MACRO("M600v Scout Light (Black)",M600_R,black,"M4A5_Troy_Acc\mesh\LLM\black\M600_R.p3d")
IR_LIGHT_MACRO("M600v Scout Light (Black)",M600_B,black,"M4A5_Troy_Acc\mesh\LLM\black\M600_B.p3d")
// Paint Tan
IR_LIGHT_MACRO("M600v Scout Light (Paint Tan)",M600_L,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M600_L.p3d")
IR_LIGHT_MACRO("M600v Scout Light (Paint Tan)",M600_R,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M600_R.p3d")
IR_LIGHT_MACRO("M600v Scout Light (Paint Tan)",M600_B,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M600_B.p3d")
// Paint Don
IR_LIGHT_MACRO("M600v Scout Light (Paint Don)",M600_L,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M600_L.p3d")
IR_LIGHT_MACRO("M600v Scout Light (Paint Don)",M600_R,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M600_R.p3d")
IR_LIGHT_MACRO("M600v Scout Light (Paint Don)",M600_B,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M600_B.p3d")

// PEQ + M600v
// Tan
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Tan)",M600_L_PEQ_R,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M600_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Tan)",M600_B_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M600_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Tan)",M600_L_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M600_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Tan)",M600_R_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M600_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Tan)",SBR_M600_R_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\SBR_M600_R_PEQ_T.p3d")
// Tan
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Black)",M600_L_PEQ_R,black,"M4A5_Troy_Acc\mesh\LLM\black\M600_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Black)",M600_B_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\M600_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Black)",M600_L_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\M600_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Black)",M600_R_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\M600_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Black)",SBR_M600_R_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\SBR_M600_R_PEQ_T.p3d")
// Tan
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Tan, Paint Tan)",M600_L_PEQ_R,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\M600_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Tan, Paint Tan)",M600_B_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\M600_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Tan, Paint Tan)",M600_L_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\M600_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Tan, Paint Tan)",M600_R_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\M600_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Tan, Paint Tan)",SBR_M600_R_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\SBR_M600_R_PEQ_T.p3d")
// Paint Tan
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Paint Tan)",M600_L_PEQ_R,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M600_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Paint Tan)",M600_B_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M600_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Paint Tan)",M600_L_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M600_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Paint Tan)",M600_R_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M600_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Paint Tan)",SBR_M600_R_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\SBR_M600_R_PEQ_T.p3d")
// Paint Don
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Paint Don)",M600_L_PEQ_R,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M600_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Paint Don)",M600_B_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M600_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Paint Don)",M600_L_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M600_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Paint Don)",M600_R_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M600_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M600v Scout Light + AN/PEQ-15 (Paint Don)",SBR_M600_R_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\SBR_M600_R_PEQ_T.p3d")

// M620v
// Tan
IR_LIGHT_MACRO("M620v Scout Light (Tan)",M620_L,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M620_L.p3d")
IR_LIGHT_MACRO("M620v Scout Light (Tan)",M620_R,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M620_R.p3d")
IR_LIGHT_MACRO("M620v Scout Light (Tan)",M620_B,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M620_B.p3d")
// Black
IR_LIGHT_MACRO("M620v Scout Light (Black)",M620_L,black,"M4A5_Troy_Acc\mesh\LLM\black\M620_L.p3d")
IR_LIGHT_MACRO("M620v Scout Light (Black)",M620_R,black,"M4A5_Troy_Acc\mesh\LLM\black\M620_R.p3d")
IR_LIGHT_MACRO("M620v Scout Light (Black)",M620_B,black,"M4A5_Troy_Acc\mesh\LLM\black\M620_B.p3d")
// Paint Tan
IR_LIGHT_MACRO("M620v Scout Light (Paint Tan)",M620_L,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M620_L.p3d")
IR_LIGHT_MACRO("M620v Scout Light (Paint Tan)",M620_R,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M620_R.p3d")
IR_LIGHT_MACRO("M620v Scout Light (Paint Tan)",M620_B,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M620_B.p3d")
// Paint Don
IR_LIGHT_MACRO("M620v Scout Light (Paint Don)",M620_L,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M620_L.p3d")
IR_LIGHT_MACRO("M620v Scout Light (Paint Don)",M620_R,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M620_R.p3d")
IR_LIGHT_MACRO("M620v Scout Light (Paint Don)",M620_B,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M620_B.p3d")

// PEQ + M620v
// Tan
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Tan)",M620_L_PEQ_R,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M620_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Tan)",M620_B_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M620_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Tan)",M620_L_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M620_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Tan)",M620_R_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M620_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Tan)",SBR_M620_R_PEQ_T,tan,"M4A5_Troy_Acc\mesh\LLM\tan\SBR_M620_R_PEQ_T.p3d")
// Tan
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Black)",M620_L_PEQ_R,black,"M4A5_Troy_Acc\mesh\LLM\black\M620_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Black)",M620_B_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\M620_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Black)",M620_L_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\M620_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Black)",M620_R_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\M620_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Black)",SBR_M620_R_PEQ_T,black,"M4A5_Troy_Acc\mesh\LLM\black\SBR_M620_R_PEQ_T.p3d")
// Tan
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Tan, Paint Tan)",M620_L_PEQ_R,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\M620_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Tan, Paint Tan)",M620_B_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\M620_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Tan, Paint Tan)",M620_L_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\M620_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Tan, Paint Tan)",M620_R_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\M620_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Tan, Paint Tan)",SBR_M620_R_PEQ_T,tan_camo_tan,"M4A5_Troy_Acc\mesh\LLM\tan_camo_tan\SBR_M620_R_PEQ_T.p3d")
// Paint Tan
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Paint Tan)",M620_L_PEQ_R,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M620_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Paint Tan)",M620_B_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M620_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Paint Tan)",M620_L_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M620_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Paint Tan)",M620_R_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\M620_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Paint Tan)",SBR_M620_R_PEQ_T,camo_tan,"M4A5_Troy_Acc\mesh\LLM\camo_tan\SBR_M620_R_PEQ_T.p3d")
// Paint Don
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Paint Don)",M620_L_PEQ_R,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M620_L_PEQ_R.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Paint Don)",M620_B_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M620_B_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Paint Don)",M620_L_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M620_L_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Paint Don)",M620_R_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\M620_R_PEQ_T.p3d")
PEQ_LIGHT_MACRO("M620v Scout Light + AN/PEQ-15 (Paint Don)",SBR_M620_R_PEQ_T,camo_don,"M4A5_Troy_Acc\mesh\LLM\camo_don\SBR_M620_R_PEQ_T.p3d")
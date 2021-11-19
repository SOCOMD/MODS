
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
            intensity = 10000;
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
            intensity = 10000;
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
	MRT_SwitchItemNextClass = QUOTE(TRIPLES(BASECLASS,IR_ILL,COLOUR));\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,ILL,COLOUR));\
    MRT_switchItemHintText = "IR(Laser)";\
	scope=2;\
	dlc="Troy_4A5_Acc";\
	displayName= NAME;\
	model= MODEL;\
};\
class TRIPLES(BASECLASS,IR_ILL,COLOUR) : S_IR_ILL_base {\
	MRT_SwitchItemNextClass = QUOTE(TRIPLES(BASECLASS,ILL,COLOUR));\
    MRT_SwitchItemPrevClass = QUOTE(DOUBLES(BASECLASS,COLOUR));\
    MRT_switchItemHintText = "IR(Laser + Illuminator)";\
	scope=1;\
	dlc="Troy_4A5_Acc";\
	displayName= NAME;\
	model= MODEL;\
};\
class TRIPLES(BASECLASS,ILL,COLOUR) : S_ILL_base {\
	MRT_SwitchItemNextClass = QUOTE(DOUBLES(BASECLASS,COLOUR));\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,IR_ILL,COLOUR));\
    MRT_switchItemHintText = "IR(Illuminator)";\
	scope=1;\
	dlc="Troy_4A5_Acc";\
	displayName= NAME;\
	model= MODEL;\
};
#define PEQ_LIGHT_MACRO(NAME, BASECLASS, COLOUR, MODEL) \
class TRIPLES(BASECLASS,IR,COLOUR) : S_IRbase {\
	MRT_SwitchItemNextClass = QUOTE(TRIPLES(BASECLASS,IR_ILL,COLOUR));\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,COLOUR));\
    MRT_switchItemHintText = "IR(Laser)";\
	scope=2;\
	dlc="Troy_4A5_Acc";\
	displayName= NAME;\
	model= MODEL;\
};\
class TRIPLES(BASECLASS,IR_ILL,COLOUR) : S_IR_ILL_base {\
	MRT_SwitchItemNextClass = QUOTE(TRIPLES(BASECLASS,ILL,COLOUR));\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,IR,COLOUR));\
    MRT_switchItemHintText = "IR(Laser + Illuminator)";\
	scope=1;\
	dlc="Troy_4A5_Acc";\
	displayName= NAME;\
	model= MODEL;\
};\
class TRIPLES(BASECLASS,ILL,COLOUR) : S_ILL_base {\
	MRT_SwitchItemNextClass = QUOTE(DOUBLES(BASECLASS,COLOUR));\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,IR_ILL,COLOUR));\
    MRT_switchItemHintText = "IR(Illuminator)";\
	scope=1;\
	dlc="Troy_4A5_Acc";\
	displayName= NAME;\
	model= MODEL;\
};\
class DOUBLES(BASECLASS,COLOUR) : S_flashlightbase {\
	MRT_SwitchItemNextClass = QUOTE(TRIPLES(BASECLASS,IR,COLOUR));\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,ILL,COLOUR));\
    MRT_switchItemHintText = "VIS(Flashlight)";\
	scope=12;\
	dlc="Troy_4A5_Acc";\
	displayName= NAME;\
	model= MODEL;\
};
#define IR_LIGHT_MACRO(NAME, BASECLASS, COLOUR, MODEL) \
class DOUBLES(BASECLASS,COLOUR) : S_flashlightbase {\
	MRT_SwitchItemNextClass = QUOTE(TRIPLES(BASECLASS,IR,COLOUR));\
    MRT_SwitchItemPrevClass = QUOTE(TRIPLES(BASECLASS,ILL,COLOUR));\
    MRT_switchItemHintText = "VIS(Flashlight)";\
	scope=2;\
	dlc="Troy_4A5_Acc";\
	displayName= NAME;\
	model= MODEL;\
};\
class TRIPLES(BASECLASS,ILL,COLOUR) : S_ILL_flash_base {\
	MRT_SwitchItemNextClass = QUOTE(DOUBLES(BASECLASS,COLOUR));\
    MRT_SwitchItemPrevClass = QUOTE(DOUBLES(BASECLASS,COLOUR));\
    MRT_switchItemHintText = "IR(Illuminator)";\
	scope=1;\
	dlc="Troy_4A5_Acc";\
	displayName= NAME;\
	model= MODEL;\
};

PEQ_MACRO("TEST PEQ",SOCOMD_TEST_PEQ,Tan,"M4A5_Troy_Acc\mesh\LLM\tan\PEQ_T.p3d")
PEQ_LIGHT_MACRO("TEST PEQ+Light",SOCOMD_TEST_PEQ_LIGHT,tan,"M4A5_Troy_Acc\mesh\LLM\tan\M620_B_PEQ_T.p3d")
IR_LIGHT_MACRO("TEST Light",SOCOMD_TEST_LIGHT,Tan,"M4A5_Troy_Acc\mesh\LLM\tan\M620_L.p3d")
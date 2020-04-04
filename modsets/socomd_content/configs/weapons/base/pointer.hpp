class acc_flashlight;
class InventoryFlashLightItem_Base_F;
class SMA_SFLIGHT_TOPM4: acc_flashlight {
	scope=1;
	dlc="SMA";
	displayName="Surefire flash light";
	picture="\SMA_PEQ15\data\UI\SFflashblk.paa";
	model="SMA_PEQ15\sma_peqFlash_top_m4.p3d";
	class ItemInfo: InventoryFlashLightItem_Base_F
	{
		mass=4;
		class FlashLight
		{
			color[]={7000,7500,10000};
			ambient[]={6,9,9};
			intensity=2.5;
			size=1;
			innerAngle=20;
			outerAngle=80;
			coneFadeCoef=10;
			position="light_dir";
			direction="light";
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
class S_WMLX: acc_flashlight {
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="WMLX";
	model="M4A5_Troy_Acc\mesh\wmlxdbal.p3d";
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
			position="light_dir";
			direction="light";
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

class ACE_acc_pointer_red;
class S_flashlightbase;
class S_IRbase;

class PEQ_R_tan: S_IRbase {
    MRT_SwitchItemNextClass = "PEQ_R_point_tan";
    MRT_SwitchItemPrevClass = "PEQ_R_point_tan";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="PEQ top (tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\PEQ_R.p3d";
};
class PEQ_T_black: S_IRbase {
    MRT_SwitchItemNextClass = "PEQ_T_point_black";
    MRT_SwitchItemPrevClass = "PEQ_T_point_black";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="PEQ top (black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\PEQ_T.p3d";
};
class PEQ_T_tan: S_IRbase {
    MRT_SwitchItemNextClass = "PEQ_T_point_tan";
    MRT_SwitchItemPrevClass = "PEQ_T_point_tan";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="PEQ top (tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\PEQ_T.p3d";
};

class PEQ_T_point_tan: ACE_acc_pointer_red {
    MRT_SwitchItemNextClass = "PEQ_T_tan";
    MRT_SwitchItemPrevClass = "PEQ_T_tan";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="PEQ top (tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\PEQ_T.p3d";
};

class PEQ_R_point_tan: ACE_acc_pointer_red {
    MRT_SwitchItemNextClass = "PEQ_R_tan";
    MRT_SwitchItemPrevClass = "PEQ_R_tan";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="PEQ top (tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\PEQ_R.p3d";
};
class PEQ_T_point_black: ACE_acc_pointer_red {
    MRT_SwitchItemNextClass = "PEQ_T_black";
    MRT_SwitchItemPrevClass = "PEQ_T_black";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="PEQ top (black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\PEQ_T.p3d";
};

class PEQ_R_point_black: ACE_acc_pointer_red {
    MRT_SwitchItemNextClass = "PEQ_R_black";
    MRT_SwitchItemPrevClass = "PEQ_R_black";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="PEQ top (black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\PEQ_R.p3d";
};

class WMLX_L_PEQ_T_black: S_flashlightbase {
	MRT_SwitchItemNextClass = "WMLX_L_PEQ_T_point_black";
    MRT_SwitchItemPrevClass = "WMLX_L_PEQ_T_IR_black";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\WMLX_L_PEQ_T.p3d";
};

class WMLX_L_PEQ_R_black: S_flashlightbase {
	MRT_SwitchItemNextClass = "WMLX_L_PEQ_R_point_black";
    MRT_SwitchItemPrevClass = "WMLX_L_PEQ_R_IR_black";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\WMLX_L_PEQ_R.p3d";
};

class WMLX_T_PEQ_R_black: S_flashlightbase {
	MRT_SwitchItemNextClass = "WMLX_T_PEQ_R_point_black";
    MRT_SwitchItemPrevClass = "WMLX_T_PEQ_R_IR_black";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\WMLX_T_PEQ_R.p3d";
};

class WMLX_L_PEQ_T_IR_black: S_IRbase {
	MRT_SwitchItemNextClass = "WMLX_L_PEQ_T_black";
    MRT_SwitchItemPrevClass = "WMLX_L_PEQ_T_point_black";
    MRT_switchItemHintText = "IR(Laser)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\WMLX_L_PEQ_T.p3d";
};

class WMLX_T_PEQ_R_IR_black: S_IRbase {
	MRT_SwitchItemNextClass = "WMLX_T_PEQ_R_black";
    MRT_SwitchItemPrevClass = "WMLX_T_PEQ_R_point_black";
    MRT_switchItemHintText = "IR(Laser)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\WMLX_T_PEQ_R.p3d";
};

class WMLX_L_PEQ_R_IR_black: S_flashlightbase {
	MRT_SwitchItemNextClass = "WMLX_L_PEQ_R_black";
    MRT_SwitchItemPrevClass = "WMLX_L_PEQ_R_point_black";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\WMLX_L_PEQ_R.p3d";
};
class WMLX_L_PEQ_T_point_black: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "WMLX_L_PEQ_T_IR_black";
    MRT_SwitchItemPrevClass = "WMLX_L_PEQ_T_black";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\WMLX_L_PEQ_T.p3d";
};

class WMLX_T_PEQ_R_point_black: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "WMLX_T_PEQ_R_IR_black";
    MRT_SwitchItemPrevClass = "WMLX_T_PEQ_R_black";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\WMLX_T_PEQ_R.p3d";
};

class WMLX_L_PEQ_R_point_black: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "WMLX_L_PEQ_R_IR_black";
    MRT_SwitchItemPrevClass = "WMLX_L_PEQ_R_black";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\WMLX_L_PEQ_R.p3d";
};


class WMLX_L_PEQ_T_tan: S_flashlightbase {
	MRT_SwitchItemNextClass = "WMLX_L_PEQ_T_point_tan";
    MRT_SwitchItemPrevClass = "WMLX_L_PEQ_T_IR_tan";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\WMLX_L_PEQ_T.p3d";
};

class WMLX_L_PEQ_R_tan: S_flashlightbase {
	MRT_SwitchItemNextClass = "WMLX_L_PEQ_R_point_tan";
    MRT_SwitchItemPrevClass = "WMLX_L_PEQ_R_IR_tan";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\WMLX_L_PEQ_R.p3d";
};


class WMLX_T_PEQ_R_tan: S_flashlightbase {
	MRT_SwitchItemNextClass = "WMLX_T_PEQ_R_point_tan";
    MRT_SwitchItemPrevClass = "WMLX_T_PEQ_R_IR_tan";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\WMLX_T_PEQ_R.p3d";
};

class WMLX_L_PEQ_T_IR_tan: S_IRbase {
	MRT_SwitchItemNextClass = "WMLX_L_PEQ_T_tan";
    MRT_SwitchItemPrevClass = "WMLX_L_PEQ_T_point_tan";
    MRT_switchItemHintText = "IR(Laser)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\WMLX_L_PEQ_T.p3d";
};

class WMLX_T_PEQ_R_IR_tan: S_IRbase {
	MRT_SwitchItemNextClass = "WMLX_T_PEQ_R_tan";
    MRT_SwitchItemPrevClass = "WMLX_T_PEQ_R_point_tan";
    MRT_switchItemHintText = "IR(Laser)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\WMLX_T_PEQ_R.p3d";
};

class WMLX_L_PEQ_R_IR_tan: S_flashlightbase {
	MRT_SwitchItemNextClass = "WMLX_L_PEQ_R_tan";
    MRT_SwitchItemPrevClass = "WMLX_L_PEQ_R_point_tan";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\WMLX_L_PEQ_R.p3d";
};
class WMLX_L_PEQ_T_point_tan: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "WMLX_L_PEQ_T_IR_tan";
    MRT_SwitchItemPrevClass = "WMLX_L_PEQ_T_tan";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\WMLX_L_PEQ_T.p3d";
};

class WMLX_T_PEQ_R_point_tan: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "WMLX_T_PEQ_R_IR_tan";
    MRT_SwitchItemPrevClass = "WMLX_T_PEQ_R_tan";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\WMLX_T_PEQ_R.p3d";
};

class WMLX_L_PEQ_R_point_tan: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "WMLX_L_PEQ_R_IR_tan";
    MRT_SwitchItemPrevClass = "WMLX_L_PEQ_R_tan";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="Inforce WMLx/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\WMLX_L_PEQ_R.p3d";
};


class M300_L_PEQ_R_black: S_flashlightbase {
	MRT_SwitchItemNextClass = "M300_L_PEQ_R_point_black";
    MRT_SwitchItemPrevClass = "M300_L_PEQ_R_IR_black";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M300c Scout Light/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\M300_L_PEQ_R.p3d";
};

class M300_B_PEQ_T_black: S_flashlightbase {
	MRT_SwitchItemNextClass = "M300_B_PEQ_T_point_black";
    MRT_SwitchItemPrevClass = "M300_B_PEQ_T_IR_black";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M300c Scout Light/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\M300_B_PEQ_T.p3d";
};

class M300_L_PEQ_R_IR_black: S_IRbase {
	MRT_SwitchItemNextClass = "M300_L_PEQ_R_black";
    MRT_SwitchItemPrevClass = "M300_L_PEQ_R_point_black";
    MRT_switchItemHintText = "IR(Laser)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="M300c Scout Light/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\M300_L_PEQ_R.p3d";
};

class M300_B_PEQ_T_IR_black: S_IRbase {
	MRT_SwitchItemNextClass = "M300_B_PEQ_T_black";
    MRT_SwitchItemPrevClass = "M300_B_PEQ_T_point_black";
    MRT_switchItemHintText = "IR(Laser)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="M300c Scout Light/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\M300_B_PEQ_T.p3d";
};
class M300_L_PEQ_R_point_black: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "M300_L_PEQ_R_IR_black";
    MRT_SwitchItemPrevClass = "M300_L_PEQ_R_black";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M300c Scout Light/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\M300_L_PEQ_R.p3d";
};

class M300_B_PEQ_T_point_black: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "M300_B_PEQ_T_IR_black";
    MRT_SwitchItemPrevClass = "M300_B_PEQ_T_black";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M300c Scout Light/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\M300_B_PEQ_T.p3d";
};

class M300_L_PEQ_R_tan: S_flashlightbase {
	MRT_SwitchItemNextClass = "M300_L_PEQ_R_point_tan";
    MRT_SwitchItemPrevClass = "M300_L_PEQ_R_IR_tan";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M300c Scout Light/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\M300_L_PEQ_R.p3d";
};

class M300_B_PEQ_T_tan: S_flashlightbase {
	MRT_SwitchItemNextClass = "M300_B_PEQ_T_point_tan";
    MRT_SwitchItemPrevClass = "M300_B_PEQ_T_IR_tan";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M300c Scout Light/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\M300_B_PEQ_T.p3d";
};

class M300_L_PEQ_R_IR_tan: S_IRbase {
	MRT_SwitchItemNextClass = "M300_L_PEQ_R_tan";
    MRT_SwitchItemPrevClass = "M300_L_PEQ_R_point_tan";
    MRT_switchItemHintText = "IR(Laser)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="M300c Scout Light/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\M300_L_PEQ_R.p3d";
};

class M300_B_PEQ_T_IR_tan: S_IRbase {
	MRT_SwitchItemNextClass = "M300_B_PEQ_T_tan";
    MRT_SwitchItemPrevClass = "M300_B_PEQ_T_point_tan";
    MRT_switchItemHintText = "IR(Laser)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="M300c Scout Light/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\M300_B_PEQ_T.p3d";
};
class M300_L_PEQ_R_point_tan: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "M300_L_PEQ_R_IR_tan";
    MRT_SwitchItemPrevClass = "M300_L_PEQ_R_tan";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M300c Scout Light/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\M300_L_PEQ_R.p3d";
};

class M300_B_PEQ_T_point_tan: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "M300_B_PEQ_T_IR_tan";
    MRT_SwitchItemPrevClass = "M300_B_PEQ_T_tan";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M300c Scout Light/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\M300_B_PEQ_T.p3d";
};


class M600_L_PEQ_R_black: S_flashlightbase {
	MRT_SwitchItemNextClass = "M600_L_PEQ_R_point_black";
    MRT_SwitchItemPrevClass = "M600_L_PEQ_R_IR_black";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M600 Ultra Scout Light/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\M600_L_PEQ_R.p3d";
};

class M600_B_PEQ_T_black: S_flashlightbase {
	MRT_SwitchItemNextClass = "M600_B_PEQ_T_point_black";
    MRT_SwitchItemPrevClass = "M600_B_PEQ_T_IR_black";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M600 Ultra Scout Light/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\M600_B_PEQ_T.p3d";
};

class M600_L_PEQ_R_IR_black: S_IRbase {
	MRT_SwitchItemNextClass = "M600_L_PEQ_R_black";
    MRT_SwitchItemPrevClass = "M600_L_PEQ_R_point_black";
    MRT_switchItemHintText = "IR(Laser)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="M600 Ultra Scout Light/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\M600_L_PEQ_R.p3d";
};

class M600_B_PEQ_T_IR_black: S_IRbase {
	MRT_SwitchItemNextClass = "M600_B_PEQ_T_black";
    MRT_SwitchItemPrevClass = "M600_B_PEQ_T_point_black";
    MRT_switchItemHintText = "IR(Laser)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="M600 Ultra Scout Light/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\M600_B_PEQ_T.p3d";
};
class M600_L_PEQ_R_point_black: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "M600_L_PEQ_R_IR_black";
    MRT_SwitchItemPrevClass = "M600_L_PEQ_R_black";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M600 Ultra Scout Light/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\M600_L_PEQ_R.p3d";
};

class M600_B_PEQ_T_point_black: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "M600_B_PEQ_T_IR_black";
    MRT_SwitchItemPrevClass = "M600_B_PEQ_T_black";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M600 Ultra Scout Light/ATPIAL (AN/PEQ-15)(black)";
	model="M4A5_Troy_Acc\mesh\LLM\black\M600_B_PEQ_T.p3d";
};

class M600_L_PEQ_R_tan: S_flashlightbase {
	MRT_SwitchItemNextClass = "M600_L_PEQ_R_point_tan";
    MRT_SwitchItemPrevClass = "M600_L_PEQ_R_IR_tan";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M600 Ultra Scout Light/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\M600_L_PEQ_R.p3d";
};

class M600_B_PEQ_T_tan: S_flashlightbase {
	MRT_SwitchItemNextClass = "M600_B_PEQ_T_point_tan";
    MRT_SwitchItemPrevClass = "M600_B_PEQ_T_IR_tan";
    MRT_switchItemHintText = "VIS(Flashlight)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M600 Ultra Scout Light/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\M600_B_PEQ_T.p3d";
};

class M600_L_PEQ_R_IR_tan: S_IRbase {
	MRT_SwitchItemNextClass = "M600_L_PEQ_R_tan";
    MRT_SwitchItemPrevClass = "M600_L_PEQ_R_point_tan";
    MRT_switchItemHintText = "IR(Laser)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="M600 Ultra Scout Light/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\M600_L_PEQ_R.p3d";
};

class M600_B_PEQ_T_IR_tan: S_IRbase {
	MRT_SwitchItemNextClass = "M600_B_PEQ_T_tan";
    MRT_SwitchItemPrevClass = "M600_B_PEQ_T_point_tan";
    MRT_switchItemHintText = "IR(Laser)";
	scope=2;
	dlc="Troy_4A5_Acc";
	displayName="M600 Ultra Scout Light/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\M600_B_PEQ_T.p3d";
};
class M600_L_PEQ_R_point_tan: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "M600_L_PEQ_R_IR_tan";
    MRT_SwitchItemPrevClass = "M600_L_PEQ_R_tan";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M600 Ultra Scout Light/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\M600_L_PEQ_R.p3d";
};

class M600_B_PEQ_T_point_tan: ACE_acc_pointer_red {
	MRT_SwitchItemNextClass = "M600_B_PEQ_T_IR_tan";
    MRT_SwitchItemPrevClass = "M600_B_PEQ_T_tan";
    MRT_switchItemHintText = "VIS(Laser)";
	scope=1;
	dlc="Troy_4A5_Acc";
	displayName="M600 Ultra Scout Light/ATPIAL (AN/PEQ-15)(tan)";
	model="M4A5_Troy_Acc\mesh\LLM\tan\M600_B_PEQ_T.p3d";
};
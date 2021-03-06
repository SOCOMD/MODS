#define OPTIC_FOV(FOVMAX,FOVMIN,FOVINIT,ZOOM_MIN,ZOOM_MAX)\
opticsZoomMin = FOVMIN;\
opticsZoomMax = FOVMAX;\
opticsZoomInit = FOVINIT; \
distanceZoomMin = ZOOM_MIN; \
distanceZoomMax = ZOOM_MAX;

#define OPTIC_Holo OPTIC_FOV(1.25,0.4,0.75,100,100)
#define OPTIC_HoloM OPTIC_FOV(0.75,0.25,0.5,100,100)
#define OPTIC_T1 OPTIC_FOV(1.25,0.25,0.75,100,100)
#define OPTIC_SMA_ELCAN OPTIC_FOV(0.75,0.25,0.4,100,100)
#define OPTIC_4X_OPTIC OPTIC_FOV(0.125,0.125,0.125,100,100)

class InventoryOpticsItem_Base_F;

class RH_t1 : ItemCore {
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class T1 {
				OPTIC_T1
			};
		};
	};
};

class RH_t1_tan : RH_t1 {};

class SMA_eotech: ItemCore {};

// EXPS magnification changes

class SMA_eotechG33_3XDOWN: SMA_eotech {
	class ItemInfo: InventoryOpticsItem_Base_F {
		class OpticsModes {
			class AIM {
				OPTIC_Holo
			};
		};
	};
};

class SMA_eotechG33_3XUP: SMA_eotechG33_3XDOWN {
	class ItemInfo: InventoryOpticsItem_Base_F {
		class OpticsModes {
			class Magnified {
				OPTIC_HoloM
			};
		};
	};
};

class SMA_eotechG33_grn_3XDOWN: SMA_eotech {
	class ItemInfo: InventoryOpticsItem_Base_F {
		class OpticsModes {
			class AIM {
				OPTIC_Holo
			};
		};
	};
};

class SMA_eotechG33_grn_3XUP: SMA_eotechG33_3XDOWN {
	class ItemInfo: InventoryOpticsItem_Base_F {
		class OpticsModes {
			class Magnified {
				OPTIC_HoloM
			};
		};
	};
};

class SMA_eotechG33_tan_3XDOWN: SMA_eotech {
	class ItemInfo: InventoryOpticsItem_Base_F {
		class OpticsModes {
			class AIM {
				OPTIC_Holo
			};
		};
	};
};

class SMA_eotechG33_tan_3XUP: SMA_eotechG33_3XDOWN {
	class ItemInfo: InventoryOpticsItem_Base_F {
		class OpticsModes {
			class Magnified {
				OPTIC_HoloM
			};
		};
	};
};


class CUP_optic_ACOG_3D : ItemCore {
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG {
				OPTIC_4X_OPTIC
				memoryPointCamera = "opticView";
			};
		};
	};
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
}
class CUP_optic_ACOG_Reflex_Desert_3D:  CUP_optic_ACOG_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_Reflex_Wood_3D:  CUP_optic_ACOG_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG2_3D:  CUP_optic_ACOG_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA31_KF_3D:  CUP_optic_ACOG_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA31_KF_Desert_3D:  CUP_optic_ACOG_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA31_KF_Wood_3D:  CUP_optic_ACOG_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};

class CUP_optic_ACOG_TA01NSN_Black_3D: ItemCore{
	scope=public;
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG {
				OPTIC_4X_OPTIC
				memoryPointCamera = "opticView";
			};
		};
	};
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA01NSN_Coyote_3D: CUP_optic_ACOG_TA01NSN_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA01NSN_Tan_3D: CUP_optic_ACOG_TA01NSN_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA01NSN_OD_3D: CUP_optic_ACOG_TA01NSN_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA01NSN_Tropic_3D: CUP_optic_ACOG_TA01NSN_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};

class CUP_optic_ACOG_TA01NSN_RMR_Black_3D: ItemCore{
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG {
				OPTIC_4X_OPTIC
				memoryPointCamera = "opticView";
			};
		};
	};
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;	
};
class CUP_optic_ACOG_TA01NSN_RMR_Coyote_3D: CUP_optic_ACOG_TA01NSN_RMR_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;	
};
class CUP_optic_ACOG_TA01NSN_RMR_Tan_3D: CUP_optic_ACOG_TA01NSN_RMR_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;	
};
class CUP_optic_ACOG_TA01NSN_RMR_OD_3D: CUP_optic_ACOG_TA01NSN_RMR_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;	
};
class CUP_optic_ACOG_TA01NSN_RMR_Tropic_3D: CUP_optic_ACOG_TA01NSN_RMR_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;	
};

class CUP_optic_ACOG_TA01B_Black_3D:ItemCore{
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG {
				OPTIC_4X_OPTIC
				memoryPointCamera = "opticView";
			};
		};
	};
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA01B_Coyote_3D: CUP_optic_ACOG_TA01B_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA01B_Tan_3D: CUP_optic_ACOG_TA01B_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA01B_OD_3D: CUP_optic_ACOG_TA01B_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA01B_Tropic_3D: CUP_optic_ACOG_TA01B_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};

class CUP_optic_ACOG_TA01B_RMR_Black_3D:ItemCore{
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG {
				OPTIC_4X_OPTIC
				memoryPointCamera = "opticView";
			};
		};
	};
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA01B_RMR_Coyote_3D: CUP_optic_ACOG_TA01B_RMR_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA01B_RMR_Tan_3D: CUP_optic_ACOG_TA01B_RMR_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA01B_RMR_OD_3D: CUP_optic_ACOG_TA01B_RMR_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class CUP_optic_ACOG_TA01B_RMR_Tropic_3D: CUP_optic_ACOG_TA01B_RMR_Black_3D{
	scope=public;
	delete MRT_switchItemHintText;
	delete MRT_SwitchItemNextClass;
	delete MRT_SwitchItemPrevClass;
};
class acwp_t2;
class acwp_t2_g33: acwp_t2 {
	MRT_SwitchItemNextClass = "acwp_t2_g33_down";
    MRT_SwitchItemPrevClass = "acwp_t2_g33_down";
    MRT_switchItemHintText = "Up";
	scope = 1;
	displayname = "Micro T2 G33";
	model = "M4A5_Troy_Acc\mesh\t2\t2_g33.p3d";
		class ItemInfo : InventoryOpticsItem_Base_F {
	    	mass = 4;
	    	modelOptics = "\A3\Weapons_F\empty";
	    	optics = 0;
	    	class OpticsModes {
	    	class ACO {
	    	    opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				memoryPointCamera = "RDeye";
				discretedistance[] = {200};
				discreteDistanceInitIndex = 1;
				visionMode[] = {};
				OPTIC_4X_OPTIC
	    	};
	    };
 	};
};
class acwp_eotech;
class acwp_eotech_g33: acwp_eotech {
	MRT_SwitchItemNextClass = "acwp_eotech_g33_down";
    MRT_SwitchItemPrevClass = "acwp_eotech_g33_down";
    MRT_switchItemHintText = "Up";
	scope = 1;
	displayname = "EOTech EXPS3 G33";
	model = "M4A5_Troy_Acc\mesh\exps\exps_g33.p3d";
		class ItemInfo : InventoryOpticsItem_Base_F {
	    	mass = 4;
	    	modelOptics = "\A3\Weapons_F\empty";
	    	optics = 0;
	    	class OpticsModes {
	    	class ACO {
	    	    opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				memoryPointCamera = "RDeye";
				discretedistance[] = {200};
				discreteDistanceInitIndex = 1;
				visionMode[] = {};
				OPTIC_4X_OPTIC
	    	};
	    };
 	};
};
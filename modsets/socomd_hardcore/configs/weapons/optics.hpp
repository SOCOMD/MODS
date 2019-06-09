#define OPTIC_FOV(FOV,FOVMIN,ZOOM_MIN,ZOOM_MAX,FLARE)\
opticsZoomMin = FOVMIN;\
opticsZoomMax = FOV;\
opticsZoomInit = FOV; \
distanceZoomMin = ZOOM_MIN; \
distanceZoomMax = ZOOM_MAX; \
opticsFlare = FLARE; \
opticsDisablePeripherialVision = 0; \
opticsID = 1; \
opticsPPEffects[] = {""};

#define OPTIC_X1 OPTIC_FOV(0.65,0.55,100,100,false)
#define OPTIC_X2 OPTIC_FOV(0.42,0.35,100,200,false)
#define OPTIC_X3 OPTIC_FOV(0.24,0.20,100,300,true)
#define OPTIC_X4 OPTIC_FOV(0.16,0.15,100,400,true)

#define OPTIC_NAME(FOV,NAME) displayName = QUOTE([#FOVx] #NAME);

class InventoryOpticsItem_Base_F;

// 1x optics are literally a red dot / holo only
// 2x are small looking optics with thin shells
// 3x's are optics same sorta size as 2x but must have flaps.
// 4x's are more bulky than 3x optics

// Cmore Green Dot
class optic_ACO_grn : ItemCore {
	displayName = "[1x] ACO green dot [BLK]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACO {
				OPTIC_X1
			};
		};
	};
};

// Cmore Red Dot
class optic_Aco : ItemCore {
	displayName = "[1x] ACO red dot [BLK]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACO {
				OPTIC_X1
			};
		};
	};
};

// HoloSight
class SMA_eotech : ItemCore {
	displayName = "[1x] Holosight [BLK]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class AIM {
				OPTIC_X1
			};
		};
	};
};

// HoloSight
class SMA_eotech_T : ItemCore {
	displayName = "[1x] Holosight [TAN]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class AIM {
				OPTIC_X1
			};
		};
	};
};

class RH_t1 : ItemCore {
	displayName = "[2x] Aimpoint T1 [BLK]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class T1 {
				OPTIC_X2
			};
		};
	};
};

class RH_t1_tan : RH_t1 {
	displayName = "[2x] Aimpoint T1 [TAN]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class T1 {
				OPTIC_X2
			};
		};
	};
};

// this scope was aids, just let it be
class sma_spitfire_01_sc_black;
class sma_spitfire_01_black : sma_spitfire_01_sc_black {
	displayName = "[2x] Vortex Spitfire [BLK]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		mass = 4;
		memoryPointCamera = "eyeAim";
		modelOptics = "\A3\Weapons_F\empty";
		optics = 1;
		RMBhint = "Aim-Point Optics";
		class OpticsModes {
			class AIM {
				OPTIC_X2
				useModelOptics = 0;
				visionMode[] = {};
				memoryPointCamera = "eyeAim";
			};
		};
	};
};

class RH_compM2 : ItemCore {
	displayName = "[3x] Aimpoint Compm2 [BLK]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class AIM {
				OPTIC_X3
			};
		};
	};
};

class RH_compM2_tan : RH_compM2 {
	displayName = "[3x] Aimpoint Compm2 [TAN]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class AIM {
				OPTIC_X3
			};
		};
	};
};

class sma_spitfire_03_sc_black : ItemCore {
	displayName = "[3x] Vortex Spitfire [BLK]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class Magnified {
				OPTIC_X3
			};
		};
	};
};

class RH_ta31rco : ItemCore {
	displayName = "[4x] ACOG TA31RCO [BLK]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class acogscope {
				OPTIC_X4
			};
			delete acogcqb;
		};
	};
};

class RH_ta31rco_tan : RH_ta31rco {
	displayName = "[4x] ACOG TA31RCO [TAN]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class acogscope {
				OPTIC_X4
			};
			delete acogcqb;
		};
	};
};

class SMA_ELCAN_SPECTER : ItemCore {
	displayName = "[4x] ELCAN SpecterDR [BLK]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG4x {
				OPTIC_X4
			};

			class IronSight {
				OPTIC_X4
				memoryPointCamera = "opticView";
			};

			delete RedDotSight;
		};
	};
};

class SMA_ELCAN_SPECTER_TAN : ItemCore {
	displayName = "[4x] ELCAN SpecterDR [TAN]";
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG4x {
				OPTIC_X4
			};

			class IronSight {
				OPTIC_X4
				memoryPointCamera = "opticView";
			};

			delete RedDotSight;
		};
	};
};
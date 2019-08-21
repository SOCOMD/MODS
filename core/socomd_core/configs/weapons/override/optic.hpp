#define OPTIC_FOV(FOVMAX,FOVMIN,FOVINIT,ZOOM_MIN,ZOOM_MAX,FLARE)\
opticsZoomMin = FOVMIN;\
opticsZoomMax = FOVMAX;\
opticsZoomInit = FOVINIT; \
distanceZoomMin = ZOOM_MIN; \
distanceZoomMax = ZOOM_MAX; \
memoryPointCamera="eye"; \
opticsFlare = FLARE; \
opticsDisablePeripherialVision = 0; \
opticsID = 1; \
opticsPPEffects[] = {""};

#define OPTIC_RifleM OPTIC_FOV(1.25,0.25,0.75,100,100,false)
/*
#define OPTIC_MarkM OPTIC_FOV(0.16,0.15,100,400,true)*/

#define OPTIC_NAME(FOV,NAME) displayName = QUOTE([#FOVx] #NAME);

class InventoryOpticsItem_Base_F;

class RH_t1 : ItemCore {
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class T1 {
				OPTIC_RifleM
			};
		};
	};
};

class RH_t1_tan : RH_t1 {};

class SMA_ELCAN_SPECTER : ItemCore {
	scope=1;
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG4x {
				OPTIC_RifleM
			};

			class IronSight {
				OPTIC_RifleM
			};

			delete RedDotSight;
		};
	};
};

class SMA_ELCAN_SPECTER5: SMA_ELCAN_SPECTER {
	scope=2;
};

class SMA_ELCAN_SPECTER_GREEN : ItemCore {
	scope=1;
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG4x {
				OPTIC_RifleM
			};

			class IronSight {
				OPTIC_RifleM
			};

			delete RedDotSight;
		};
	};
};

class SMA_ELCAN_SPECTER_GREEN5: SMA_ELCAN_SPECTER_GREEN {
	scope=2;
};

class SMA_ELCAN_SPECTER_TAN : ItemCore {
	scope=1;
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG4x {
				OPTIC_RifleM
			};

			class IronSight {
				OPTIC_RifleM
			};

			delete RedDotSight;
		};
	};
};

class SMA_ELCAN_SPECTER_TAN5: SMA_ELCAN_SPECTER_TAN {
	scope=2;
};
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
#define OPTIC_RH_ACOG OPTIC_FOV(0.75,0.25,0.4,100,100)

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

class SMA_ELCAN_SPECTER : ItemCore {
	scope = protected;
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG4x {
				OPTIC_SMA_ELCAN
			};

			class IronSight {
				OPTIC_SMA_ELCAN
				memoryPointCamera = "opticView";
			};

			delete RedDotSight;
		};
	};
};

class SMA_ELCAN_SPECTER5: SMA_ELCAN_SPECTER {
	scope=public;
};

class SMA_ELCAN_SPECTER_GREEN : ItemCore {
	scope=protected;
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG4x {
				OPTIC_SMA_ELCAN
			};

			class IronSight {
				OPTIC_SMA_ELCAN
				memoryPointCamera = "opticView";
			};

			delete RedDotSight;
		};
	};
};

class SMA_ELCAN_SPECTER_GREEN5: SMA_ELCAN_SPECTER_GREEN {
	scope=public;
};

class SMA_ELCAN_SPECTER_TAN : ItemCore {
	scope=protected;
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class ACOG4x {
				OPTIC_SMA_ELCAN
			};

			class IronSight {
				OPTIC_SMA_ELCAN
				memoryPointCamera = "opticView";
			};

			delete RedDotSight;
		};
	};
};

class SMA_ELCAN_SPECTER_TAN5: SMA_ELCAN_SPECTER_TAN {
	scope=public;
};

class RH_ta31rmr : ItemCore {
	scope=public;
	class ItemInfo : InventoryOpticsItem_Base_F {
		class OpticsModes {
			class acogcqb {
				OPTIC_RH_ACOG
				memoryPointCamera = "opticView";
			};

			class acogscope {
				OPTIC_RH_ACOG
			};
		};
	};
};
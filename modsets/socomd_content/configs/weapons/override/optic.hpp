#define OPTIC_FOV(FOVMAX,FOVMIN,FOVINIT,ZOOM_MIN,ZOOM_MAX,FLARE)\
opticsZoomMin = FOVMIN;\
opticsZoomMax = FOVMAX;\
opticsZoomInit = FOVINIT; \
distanceZoomMin = ZOOM_MIN; \
distanceZoomMax = ZOOM_MAX; \

#define OPTIC_Holo OPTIC_FOV(1.25,0.4,0.75,100,100,false)
#define OPTIC_HoloM OPTIC_FOV(0.75,0.25,0.5,100,100,false)
#define OPTIC_T1 OPTIC_FOV(1.25,0.25,0.75,100,100,false)
#define OPTIC_SMA_ELCAN OPTIC_FOV(0.75,0.25,0.4,100,100,false)
/*
#define OPTIC_MarkM OPTIC_FOV(0.16,0.15,100,400,true)*/

#define OPTIC_NAME(FOV,NAME) displayName = QUOTE([#FOVx] #NAME);

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

class SMA_eotechG33_3XDOWN: SMA_eotech
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class AIM
				{
					OPTIC_Holo
				};
			};
		};
	};
class SMA_eotechG33_3XUP: SMA_eotechG33_3XDOWN
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Magnified
				{
					OPTIC_HoloM
				};
			};
		};
	};
class SMA_eotechG33_grn_3XDOWN: SMA_eotech
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class AIM
				{
					OPTIC_Holo
				};
			};
		};
	};
class SMA_eotechG33_grn_3XUP: SMA_eotechG33_3XDOWN
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Magnified
				{
					OPTIC_HoloM
				};
			};
		};
	};
class SMA_eotechG33_tan_3XDOWN: SMA_eotech
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class AIM
				{
					OPTIC_Holo
				};
			};
		};
	};
class SMA_eotechG33_tan_3XUP: SMA_eotechG33_3XDOWN
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Magnified
				{
					OPTIC_HoloM
				};
			};
		};
	};

class SMA_ELCAN_SPECTER : ItemCore {
	scope = 1;
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
	scope=2;
};

class SMA_ELCAN_SPECTER_GREEN : ItemCore {
	scope=1;
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
	scope=2;
};

class SMA_ELCAN_SPECTER_TAN : ItemCore {
	scope=1;
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
	scope=2;
};
//////////////////////////////////////////////////////////////////////
// NVGS

class NVGoggles;
class zeus_earpiece : NVGoggles
{
	author = "Pomigit";
	displayName = "Zeus Radio Earpiece";
	picture = "\socomd_data\icon\icon_H_earpiece.paa";
	model = "\socomd_data\models\earpiece.p3d";
	modelOptics = "-";
	visionMode[] = {"Normal", "NVG", "TI"};
	thermalMode[] = {0,1};

	class ItemInfo
	{
		type = 616;
		hmdType = 0;
		uniformModel = "\socomd_data\models\earpiece.p3d";
		modelOff = "\socomd_data\models\earpiece.p3d";
		mass = 4;
	};
};
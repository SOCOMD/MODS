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

class ACE_NVG_Gen4;
class SOCOMD_Invis_NVG : ACE_NVG_Gen4 
{
	model="\A3\Weapons_F\DummyItem.p3d";
	class ItemInfo
	{
		type = 616;
		//hmdType = 0;
		uniformModel = "";
		modelOff = "";
		mass = 0;
	};

};

//class CUP_NVG_HMNVS;
//class SOCOMD_Mono_NVG: CUP_NVG_HMNVS
//{
//	displayname="SOCOMD Mono NOD";
//	modelOptics = "\A3\weapons_f\reticle\optics_night";
//};
	



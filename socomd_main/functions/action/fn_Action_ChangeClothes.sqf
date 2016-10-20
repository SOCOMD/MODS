_args = _this;
_player = _this select 0;
_type = _this select 1;

_uniform = "";
_vest = "";

switch(_type) do
{
	case "Regular":
	{
		_uniform 	= "SOCOMD_Uniform_LongSleeve";
		_vest 		= "SOCOMD_Vest_OP";
	};

	case "Diving":
	{
		_uniform 	= "SOCOMD_Uniform_Diver";
		_vest 		= "SOCOMD_Vest_Rebreather";
	};
};

_unitLoadout = getUnitLoadout _player;

_uniformLoadout = _unitLoadout select 3;
_vestLoadout = _unitLoadout select 4;

_uniformLoadout set [0, _uniform];
_vestLoadout set [0, _vest];

_unitLoadout set [3, _uniformLoadout];
_unitLoadout set [4, _vestLoadout];

_player setUnitLoadout _unitLoadout;

//[
//	["RH_M4A1_ris","","","",["30Rnd_556x45_Stanag",30],[],""],
//	[],
//	["SOCOMD_Pistol","","RH_X300","",["RH_12Rnd_45cal_usp",12],[],""],
//	["SOCOMD_Uniform_LongSleeve",[["ItemcTabHCam",1],["ACE_Flashlight_KSF1",1],["murshun_cigs_lighter",1],["ACE_NVG_Gen4",1],["ACE_CableTie",4],["ACE_EarPlugs",1],["ACE_fieldDressing",6],["ACE_quikclot",6]]],
//	["SOCOMD_Vest_OP",[["RH_12Rnd_45cal_usp",12,2],["SmokeShell",1,1],["SmokeShellGreen",1,2],["HandGrenade",1,2]]],
//	[],
//	"SOCOMD_MICH_Multi",
//	"G_Aviator",
//	[],
//	["ItemMap","ItemMicroDAGR","tf_anprc152_1","ItemCompass","tf_microdagr",""]
//]
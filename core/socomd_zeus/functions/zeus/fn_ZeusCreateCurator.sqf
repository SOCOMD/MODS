_curatorLogicGroup = createGroup sideLogic;

//Create curator module
_curatorModule = _curatorLogicGroup  createUnit ["ModuleCurator_F", [0,0,0], [], 0.5, "NONE"];
_curatorModule setVariable ["bis_fnc_moduleexecute_activate", true, true];
_curatorModule setVariable ["bis_fnc_moduleinit_iscuratorplaced", false, true];
_curatorModule setVariable ["forced", 0, true];
_curatorModule setVariable ["bis_fnc_moduleinit_status", true, true];
_curatorModule setVariable ["bis_fnc_initmodules_activate", true, true];
_curatorModule setVariable ["bis_fnc_initmodules_priroty", 1, true];
_curatorModule setVariable ["bis_fnc_moduleexecute_first", false, true];
_curatorModule setVariable ["addons", 3, true];

//Add addons to curator
_cfgAddons = "true" configClasses (configFile >> "CfgPatches");
_addons = [];
{
	_addons = _addons + [configName _x];
}forEach(_cfgAddons);
_curatorModule addCuratorAddons _addons;

_curatorModule remoteExec ["SOCOMD_fnc_ZeusRefreshCurator", 2];

_curatorModule
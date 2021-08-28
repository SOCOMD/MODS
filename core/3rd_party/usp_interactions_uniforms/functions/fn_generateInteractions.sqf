params [ "_player"];

/**
	Generates all interactions for the uniforms dynamically
	done in this way to prevent massive overhead in adding new combinations
 */

_isPrevInit = _player getVariable ["usp_actions","FALSE"];

if ( typeName _isPrevInit == "ARRAY") then {
	{
		diag_log format ["removing %1", _x];
		
		[player, 1, _x] call ace_interact_menu_fnc_removeActionFromObject;
	} forEach _isPrevInit;
};
_uniformPlayer = uniform _player;
if ( _uniformPlayer != "") then {

	_classComp = _uniformPlayer splitString "_";
	_uniformList = []; 
	_camoUniformList = []; 
	//  format for array entry {"className", "requiredItem"}
	// G3c specific items
	_rolled = ["RS","RS2"];  
	_collar = ["CU"];
	// All uniforms
	_kneepad = [["KP",""]];  
	_gloves = [["MX","USP_MECHANIX"],["MX2","USP_MECHANIX_GRN"],["MX3","USP_MECHANIX_CBR"],["MX4","USP_MECHANIX_CBR2"],["MX5","USP_MECHANIX_MC"],["MX6","USP_MECHANIX_BLK2"],["MX7","USP_MECHANIX_GRY"],["OR","USP_OVERLORD"],["OR2","USP_OVERLORD_CBR"],["OR3","USP_OVERLORD_GRN"],["OR4","USP_OVERLORD_MC"],["OR5","USP_OVERLORD_MIX"],["OR6","USP_OVERLORD_TAN"]];  
	_shoes = [["VQ",""], ["IST",""]];
	_camos = ["AOR1","AOR2","BLK","KHK","M81","MC","MB","MCD","MCT","RGR"];
	_currentRolled = '';
	_currentKneepad = '';
	_currentCollar = '';
	_currentGloves = '';
	_currentCamo =''; 
	_currentShoes = '';
	_camoPos = 2;
	
	_player setVariable ["usp_show_kneepad",_actionsNames];

	// state; the index of the string from the above arrays
	["_rolledState"];
	["_collarState"];
	["_kneepadState"];
	["_glovesState"];
	["_shoesState"];
	_rolledState = -1;
	_collarState = -1;
	_kneepadState = -1;
	_glovesState = -1;
	_shoesState = -1;

	// indexes; the index in the uniform string
	["_rolledIndex"];
	["_collarIndex"];
	["_kneepadIndex"];
	["_glovesIndex"];
	["_camoIndex"];
	["_shoesIndex"];
	_rolledIndex = 2;
	_collarIndex = 3;
	_kneepadIndex = 4;
	_glovesIndex = 5;
	_shoesIndex = 6;
	_camoIndex = 7;

	// if not a full G3 set, reduce all starting indexes by one,
	// remove the indexes for shirt specific actions
	if( (_classComp select 1) != "G3C" && (_classComp select 2) == "G3C") then {
	_rolledIndex = -1;
	_collarIndex = -1;
	_kneepadIndex = 3;
	_glovesIndex = 4;
	_shoesIndex = 5;
	_camoIndex = 6;
	};

	// loop through each uniform option, lower each remaining index if empty
	// Rolled Sleeves
	if ( _rolledIndex > -1) then {
		{
			if(_x in _classComp) then{
			
				_currentRolled = _x;
				_rolledState = _forEachIndex;
			};
		} forEach _rolled;
		if(_rolledState == -1) then {
		_collarIndex = _collarIndex - 1;
		_kneepadIndex = _kneepadIndex - 1;
		_glovesIndex = _glovesIndex - 1;
		_camoIndex = _camoIndex - 1;
		_shoesIndex = _shoesIndex - 1;
		};
	};
	if (_collarIndex > -1) then {
		// Collar
		{
			if(_x in _classComp) then{
			
				_currentCollar = _x;
				_collarState = _forEachIndex;
			};
		} forEach _collar;
		if(_collarState == -1) then {
		_kneepadIndex = _kneepadIndex - 1;
		_glovesIndex = _glovesIndex - 1;
		_camoIndex = _camoIndex - 1;
		_shoesIndex = _shoesIndex - 1;
		};
	};
	// Kneepad
	{
		if((_x select 0) in _classComp) then{
		
			_currentKneepad = _x select 0;
			_kneepadState = _forEachIndex;
		};
	} forEach _kneepad;
	if(_kneepadState == -1) then {
	_glovesIndex = _glovesIndex - 1;
	_camoIndex = _camoIndex - 1;
	_shoesIndex = _shoesIndex - 1;
	};

	// Gloves
	{
		if((_x select 0) in _classComp) then{
		
			_currentGloves = _x  select 0;
			_glovesState = _forEachIndex;
		};
	} forEach _gloves;
	if(_glovesState == -1) then {
	_camoIndex = _camoIndex - 1;
	_shoesIndex = _shoesIndex - 1;
	};
	{
		if((_x select 0) in _classComp) then {
		
			_currentShoes = _x  select 0;
			_shoesState = _forEachIndex;
		};
	} forEach _shoes;
	if(_shoesState == -1) then {
	_camoIndex = _camoIndex - 1;
	};

	private _actions = [];
	private _actionsNames = [];
	_tempClass = [];

	// to keep things in the same order, we generate the add and remove for each section sequentially, instead of grouping by add/remove

	// sleeves
	// add
	if (_rolledIndex > -1 && _rolledState == -1) then {
		diag_log '============';
		diag_log format ["%1, %2",_rolledState,_rolledIndex];
		_namear = format ["%1_add_%2",_uniformPlayer, "RS"];
		diag_log format ["%1",_namear];
		_tempClassar = (uniform _player) splitString "_";
		_tempClassar = [_tempClassar, _rolledIndex, ["RS"]] call CBA_fnc_insert;
		_tempClassar = _tempClassar joinString "_";
		if( isClass (configFile >> "CfgVehicles" >> _tempClassar)) then {
			_statement = format ["[player, '%1'] call usp_fnc_ReplaceUniform;", _tempClassar];
			diag_log format ["%1",_statement];
			_actionar = [_namear, "Roll up sleeves","\usp_interactions_uniforms\icons\arrow_up",(compile _statement),{true},{},[], [0,0,0], 100] call ace_interact_menu_fnc_createAction;
			[player, 1, ["ACE_SelfActions", "USP_main", "USP_uniform"], _actionar] call ace_interact_menu_fnc_addActionToObject;
			_actionsNames pushBack ["ACE_SelfActions", "USP_main", "USP_uniform",_namear];
		};
		diag_log '============';
	};
	// remove
	if ( _rolledIndex > -1 && _rolledState != -1) then {
		if (_currentRolled == "RS") then {
			diag_log '============';
			diag_log format ["%1, %2",_rolledState,_rolledIndex];
			_namear = format ["%1_add_%2",_uniformPlayer, "RS2"];
			diag_log format ["%1",_namear];
			_tempClassar = (uniform _player) splitString "_";
			_tempClassar set [ _rolledIndex, "RS2"];
			_tempClassar = _tempClassar joinString "_";
			diag_log format ["%1",_tempClassar];
			if( isClass (configFile >> "CfgVehicles" >> _tempClassar)) then {
				_statement = format ["[player, '%1'] call usp_fnc_ReplaceUniform;", _tempClassar];
				diag_log format ["%1",_statement];
				_actionar = [_namear, "Roll up sleeves","\usp_interactions_uniforms\icons\arrow_up",(compile _statement),{true},{},[], [0,0,0], 100] call ace_interact_menu_fnc_createAction;
				[player, 1, ["ACE_SelfActions", "USP_main", "USP_uniform"], _actionar] call ace_interact_menu_fnc_addActionToObject;
				_actionsNames pushBack ["ACE_SelfActions", "USP_main", "USP_uniform",_namear];
			};
			diag_log '============';
			
			diag_log '============';
			diag_log format ["%1",_tempClassrr];
			diag_log format ["%1, %2",_rolledState,_rolledIndex];
			_namerr = format ["%1_remove_%2",_uniformPlayer, _currentRolled];
			diag_log format ["%1",_namerr];
			_tempClassrr = (uniform _player) splitString "_";
			_tempClassrr deleteAt _rolledIndex;
			_tempClassrr = _tempClassrr joinString "_";
			if( isClass (configFile >> "CfgVehicles" >> _tempClassrr)) then {
				_statement = format ["[player, '%1'] call usp_fnc_ReplaceUniform;", _tempClassrr];
				diag_log format ["%1",_statement];
				_actionrr = [_namerr, "Roll down sleeves","\usp_interactions_uniforms\icons\arrow_down",(compile _statement),{true},{},[], [0,0,0], 101] call ace_interact_menu_fnc_createAction;
				[player, 1, ["ACE_SelfActions", "USP_main", "USP_uniform"], _actionrr] call ace_interact_menu_fnc_addActionToObject;
				_actionsNames pushBack ["ACE_SelfActions", "USP_main", "USP_uniform",_namerr];
			};
			diag_log '============';
		} else {
			diag_log '============';
			diag_log format ["%1, %2",_rolledState,_rolledIndex];
			_namear = format ["%1_add_%2",_uniformPlayer, "RS"];
			diag_log format ["%1",_namear];
			_tempClassar = (uniform _player) splitString "_";
			_tempClassar set [ _rolledIndex, "RS"];
			_tempClassar = _tempClassar joinString "_";
			diag_log format ["%1",_tempClassar];
			if( isClass (configFile >> "CfgVehicles" >> _tempClassar)) then {
				_statement = format ["[player, '%1'] call usp_fnc_ReplaceUniform;", _tempClassar];
				diag_log format ["%1",_statement];
				_actionar = [_namear, "Roll down sleeves","\usp_interactions_uniforms\icons\arrow_down",(compile _statement),{true},{},[], [0,0,0], 100] call ace_interact_menu_fnc_createAction;
				[player, 1, ["ACE_SelfActions", "USP_main", "USP_uniform"], _actionar] call ace_interact_menu_fnc_addActionToObject;
				_actionsNames pushBack ["ACE_SelfActions", "USP_main", "USP_uniform",_namear];
				diag_log '============';
			};
		};
	};


	// collar
	// add
	if (_collarIndex > -1 && _collarState == -1) then {
		diag_log '============';
		diag_log format ["%1, %2",_rolledState,_collarIndex];
		_nextCollar = _collar select 0;
		_nameac = format ["%1_add_%2",_uniformPlayer, _nextCollar];
		diag_log format ["%1",_nameac];
		_tempClassac = (uniform _player) splitString "_";
		diag_log format ["%1",_tempClassac];
		diag_log format ["%1",_collarIndex];
		_tempClassac = [_tempClassac, _collarIndex,[_nextCollar]] call CBA_fnc_insert;
		_tempClassac = _tempClassac joinString "_";
		if( isClass (configFile >> "CfgVehicles" >> _tempClassac)) then {
			_statement = format ["[player, '%1'] call usp_fnc_ReplaceUniform;", _tempClassac];
			diag_log format ["%1",_statement];
			_actionac = [_nameac, "Roll up Collar","\usp_interactions_uniforms\icons\arrow_up",(compile _statement),{true},{},[], [0,0,0], 200] call ace_interact_menu_fnc_createAction;
			[player, 1, ["ACE_SelfActions", "USP_main", "USP_uniform"], _actionac] call ace_interact_menu_fnc_addActionToObject;
			_actionsNames pushBack ["ACE_SelfActions", "USP_main", "USP_uniform",_nameac];
		};
		diag_log '============';
	};
	// remove
	if (_collarIndex > -1 && _collarState != -1) then {
		diag_log '============';
		diag_log format ["%1",_tempClassrc];
		diag_log format ["%1, %2",_collarState,_collarIndex];
		_namerc = format ["%1_remove_%2",_uniformPlayer, _currentCollar];
		diag_log format ["%1",_namerc];
		_tempClassrc = (uniform _player) splitString "_";
		_tempClassrc deleteAt _collarIndex;
		_tempClassrc = _tempClassrc joinString "_";
		if( isClass (configFile >> "CfgVehicles" >> _tempClassrc)) then {
			_statement = format ["[player, '%1'] call usp_fnc_ReplaceUniform;", _tempClassrc];
			diag_log format ["%1",_statement];
			_actionrc = [_namerc, "Roll down Collar","\usp_interactions_uniforms\icons\arrow_down",(compile _statement),{true},{},[], [0,0,0], 200] call ace_interact_menu_fnc_createAction;
			[player, 1, ["ACE_SelfActions", "USP_main", "USP_uniform"], _actionrc] call ace_interact_menu_fnc_addActionToObject;
			_actionsNames pushBack ["ACE_SelfActions", "USP_main", "USP_uniform",_namerc];
		};
		diag_log '============';
	};


	// Kneepads
	// add
	if (_kneepadState == -1) then {
		{
			diag_log '============';
			diag_log format ["%1, %2",_kneepadState,_kneepadIndex];
			_nameak = format ["%1_add_KP",_uniformPlayer, (_x select 0)];
			diag_log format ["%1",_nameak];
			_tempClassak = (uniform _player) splitString "_";
			diag_log format ["%1",_tempClassak];
			_tempClassak = [_tempClassak,_kneepadIndex,[(_x select 0)]] call CBA_fnc_insert;
			_tempClassak = _tempClassak joinString "_";
			if( isClass (configFile >> "CfgVehicles" >> _tempClassak)) then {
				_statement = format ["[player, '%1'] call usp_fnc_ReplaceUniform;", _tempClassak];
				diag_log format ["%1",_statement];
				_actionak = [_nameak, "put on kneepads","",(compile _statement),{true},{},[], [0,0,0], 300] call ace_interact_menu_fnc_createAction;
				[player, 1, ["ACE_SelfActions", "USP_main", "USP_uniform"], _actionak] call ace_interact_menu_fnc_addActionToObject;
				_actionsNames pushBack ["ACE_SelfActions", "USP_main", "USP_uniform",_nameak];
			};
			diag_log '============';
		} forEach _kneepad;
	};
	// remove
	if (_kneepadState != -1) then {
		diag_log '============';
		diag_log format ["%1",_tempClassrk];
		diag_log format ["%1, %2",_kneepadState,_kneepadIndex];
		_namerk = format ["%1_remove_%2",_uniformPlayer, _currentKneepad];
		diag_log format ["%1",_namerk];
		_tempClassrk = (uniform _player) splitString "_";
		_tempClassrk deleteAt _kneepadIndex;
		_tempClassrk = _tempClassrk joinString "_";
		if( isClass (configFile >> "CfgVehicles" >> _tempClassrk)) then {
			_statement = format ["[player, '%1'] call usp_fnc_ReplaceUniform;", _tempClassrk];
			diag_log format ["%1",_statement];
			_actionrk = [_namerk, "Take out kneepads","",(compile _statement),{true},{},[], [0,0,0], 300] call ace_interact_menu_fnc_createAction;
			[player, 1, ["ACE_SelfActions", "USP_main", "USP_uniform"], _actionrk] call ace_interact_menu_fnc_addActionToObject;
			_actionsNames pushBack ["ACE_SelfActions", "USP_main", "USP_uniform",_namerk];
		};
		diag_log '============';
	};


	// Gloves
	// add
	if (_glovesState == -1) then {
		{
		_glove = _x;
		diag_log '============';
		_nameag = format ["%1_add_%2",_uniformPlayer, (_x select 0)];
		diag_log format ["%1",_tempClassag];
		diag_log format ["%1",_nameag];
		diag_log format ["%1, %2",_glovesState,_glovesIndex];        
		_tempClassag = (uniform _player) splitString "_";
		_tempClassag = [_tempClassag, _glovesIndex, [(_x select 0)]] call CBA_fnc_insert;
		_tempClassag = _tempClassag joinString "_";
		
		if( isClass (configFile >> "CfgVehicles" >> _tempClassag)) then {

			_optionClass = _x select 1;
			_statement = format ["[player, '%1'] call usp_fnc_ReplaceUniform;", _tempClassag];
			_condition = format ["['%1'] call usp_fnc_hasItem", _optionClass];
			diag_log format ["%1",_statement];
			_gloveName = "";
			_gloveIcon = "";
			if( isClass (configFile >> "CfgWeapons" >> _optionClass)) then {
				_gloveName = getText(configFile >> "CfgWeapons" >> _optionClass >> 'displayName');
				_gloveIcon = getText(configFile >> "CfgWeapons" >> _optionClass >> 'picture');
				_gloveName = _gloveName splitString "[USP] ";
				_gloveName = _gloveName joinString " ";
				_gloveName = format ["Put on %1", _gloveName];
			} else {
				_optionClass = _optionClass splitString "_";
				
				_gloveName = (_optionClass select 1);
				toLower _gloveName;
				if ((count _optionsClass) > 2) then {
					_gloveName = _gloveName + " (" + (_optionClass select 2) + ")";
				};
				_gloveName = format ["Put on %1", _gloveName];
				_gloveIcon = "";
			};
			_actionag = [_nameag, _gloveName,_gloveIcon,(compile _statement),(compile _condition),{},[], [0,0,0], 500] call ace_interact_menu_fnc_createAction;
			[player, 1, ["ACE_SelfActions", "USP_main", "USP_uniform", "USP_uniform_gloves"], _actionag] call ace_interact_menu_fnc_addActionToObject;
			_actionsNames pushBack ["ACE_SelfActions", "USP_main", "USP_uniform", "USP_uniform_gloves", _nameag];
		}; 
		diag_log '============';
		} forEach _gloves;
	};
	// remove
	if (_glovesState != -1) then {
		diag_log '============';
		_namerg = format ["%1_remove_%2",_uniformPlayer, _currentGloves];
		diag_log format ["%1",_tempClassrg];
		diag_log format ["%1",_namerg];
		diag_log format ["%1, %2",_rolledState,_glovesIndex];        
		_tempClassrg = (uniform _player) splitString "_";
		_tempClassrg deleteAt _glovesIndex;
		_tempClassrg = _tempClassrg joinString "_";
		
		if( isClass (configFile >> "CfgVehicles" >> _tempClassrg)) then {
			_statement = format ["[player, '%1'] call usp_fnc_ReplaceUniform;", _tempClassrg];
			diag_log format ["%1",_statement];
			_actionrg = [_namerg, "Take off gloves","",(compile _statement),{true},{},[], [0,0,0], 000] call ace_interact_menu_fnc_createAction;
			
			[player, 1, ["ACE_SelfActions", "USP_main", "USP_uniform"], _actionrg] call ace_interact_menu_fnc_addActionToObject;
			_actionsNames pushBack ["ACE_SelfActions", "USP_main", "USP_uniform",_namerg];
		};
		diag_log '============';
	};

	
	_player setVariable ["usp_actions",_actionsNames];
};
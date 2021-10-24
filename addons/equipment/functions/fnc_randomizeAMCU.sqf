#include "script_component.hpp"
params["_player", "_new"];
if(GVAR(randomUniformWear) == 1) then {
	
	if ("usp_g3c_shirt_amcu" in ((getObjectTextures _player) select 0 )) then { 
		_player setObjectTextureGlobal [0, GVAR(selectedShirt)]; \
	};	
	if ("usp_g3c_pants_amcu" in ((getObjectTextures _player) select 1 )) then { 
		_player setObjectTextureGlobal [1, GVAR(selectedPants)];
	};
} else {
	if ("usp_g3c_shirt_amcu" in ((getObjectTextures _player) select 0 )) then { 
		private _path = "\z\socomd\addons\data\uniform\clothes\usp_g3c_shirt_amcu_co.paa"; 
		private _random = random [0,0.5,1]; 
		private _definedTexture = _player getVariable ["socomd_random_shirt", false]; 

		if (_definedTexture isEqualTo false) then { 
			switch true do{ 
				case (_random < 0.25): {_path = "\z\socomd\addons\data\uniform\clothes\usp_g3c_shirt_amcu_well_worn_co.paa"}; 
				case (_random < 0.4): {_path = "\z\socomd\addons\data\uniform\clothes\usp_g3c_shirt_amcu_well_worn_co.paa"}; 
			}; 
			_player setVariable ["socomd_random_shirt", _path];
		} else { 
			_path = _definedTexture; 
		};
		_player setObjectTextureGlobal [0, _path]; 
	}; 
	
	if ("usp_g3c_pants_amcu" in ((getObjectTextures _player) select 1 )) then { 
		private _path = "\z\socomd\addons\data\uniform\clothes\usp_g3c_pants_amcu_co.paa"; 
		private _random = random [0,0.5,1]; 
		private _definedTexture = _player getVariable ["socomd_random_pants", false]; 
		if (_definedTexture isEqualTo false) then { 
			switch true do{ 
				case (_random < 0.25): {_path = "\z\socomd\addons\data\uniform\clothes\usp_g3c_pants_amcu_well_worn_co.paa"}; 
				case (_random < 0.4): {_path = "\z\socomd\addons\data\uniform\clothes\usp_g3c_pants_amcu_well_worn_co.paa"}; 
			}; 
			_player setVariable ["socomd_random_pants", _path];
		} else { 
			_path = _definedTexture; 
		}; 
		_player setObjectTextureGlobal [1, _path]; 
	};
};
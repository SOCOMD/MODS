#include "script_component.hpp"
params["_player", "_new"];
    private _textures = getObjectTextures _player;
    private _defaultShirt = _textures select 0;
    private _defaultPants = _textures select 1;
if(GVAR(randomUniformWear) == 1) then {    
    if ("usp_g3c_shirt_amcu" in _defaultShirt) then { 
        _player setObjectTextureGlobal [0, GVAR(selectedShirt)]; \
    };    
    if ("usp_g3c_pants_amcu" in _defaultPants) then { 
        _player setObjectTextureGlobal [1, GVAR(selectedPants)];
    };
} else {
    if ("usp_g3c_shirt_amcu" in _defaultShirt) then { 
        private _path = "\z\socomd\addons\data\uniform\clothes\usp_g3c_shirt_amcu_co.paa"; 
        private _random = random [0,0.5,1];
        private _definedTexture = _player getVariable ["socomd_random_shirt", false]; 

        if (_definedTexture isEqualTo false) then { 
            switch true do{ 
                case (_random < 0.15): {_path = "\z\socomd\addons\data\uniform\clothes\usp_g3c_shirt_amcu_well_worn_co.paa"}; 
                case (_random < 0.4): {_path = "\z\socomd\addons\data\uniform\clothes\usp_g3c_shirt_amcu_half_worn_co.paa"}; 
            }; 
            _player setVariable ["socomd_random_shirt", _path];
        } else { 
            _path = _definedTexture; 
        };
        _player setObjectTextureGlobal [0, _path]; 
    } else {
        _player setObjectTextureGlobal [0, _defaultShirt]; 
    }; 
    
    if ("usp_g3c_pants_amcu" in _defaultPants) then { 
        private _path = "\z\socomd\addons\data\uniform\clothes\usp_g3c_pants_amcu_co.paa"; 
        private _random = random [0,0.5,1];
        private _definedTexture = _player getVariable ["socomd_random_pants", false]; 
        if (_definedTexture isEqualTo false) then { 
            switch true do{ 
                case (_random < 0.15): {_path = "\z\socomd\addons\data\uniform\clothes\usp_g3c_pants_amcu_well_worn_co.paa"}; 
                case (_random < 0.4): {_path = "\z\socomd\addons\data\uniform\clothes\usp_g3c_pants_amcu_half_worn_co.paa"}; 
            }; 
            _player setVariable ["socomd_random_pants", _path];
        } else { 
            _path = _definedTexture; 
        }; 
        _player setObjectTextureGlobal [1, _path]; 
    } else {
        _player setObjectTextureGlobal [1, _defaultPants]; 
    }; 
};
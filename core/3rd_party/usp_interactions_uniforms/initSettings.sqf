// check for items in inventory
if (isClass (configFile >> "CfgPatches" >> "USP_Gear_Acc")) then {
    [
        "usp_uniforms_require_items",
        "CHECKBOX",
        ["Require items in inventory","Require the specific item in the player's inventory to be able to add it to their uniform"],
        "USP Uniforms",
        false, 
        true,
        {
            params ["_this"];
            usp_uniforms_require_items = _this;
        } 
    ] call CBA_fnc_addSetting;
};
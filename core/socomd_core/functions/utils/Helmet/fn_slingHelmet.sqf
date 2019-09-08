_unit = _this select 0;
_side = _this select 1;
_helmetAttached = _unit getVariable ["GEARF_HelmetAttached", false];

if (headgear _unit == "")  then {
  systemChat "No headgear to sling.";
  } else {
    _headgear = headgear _unit;
    removeHeadgear _unit;
    _helmetHolder = "GroundWeaponHolder" createVehicle [0,0,0];
    _helmetHolder addItemCargoGlobal [_headgear, 1];
    _unit setVariable ["GEARF_HelmetAttachedClass", _headgear];
    _unit setVariable ["GEARF_HelmetAttached", true];

    _additional = [];

    (backpackItems _unit) apply {
        _parents = [configFile >> "CfgWeapons" >> _x >> "ItemInfo", true] call BIS_fnc_returnParents;
        if("HeadgearItem" in _parents) then {
            _additional append [_x];
        };
    };

    _additionalClass = _additional select 0;
    _unit addHeadgear _additionalClass;
    _unit removeItemFromBackpack _additionalClass;

    switch (_side) do {
      case "left": {
        _helmetHolder attachTo [_unit, [0.61,-0.08,0.62],"lfemur"];
        [_helmetHolder, [0,5,90]] call GEARF_fnc_rotateObject;
      };
      case "right": {
        _helmetHolder attachTo [_unit, [-0.61,0.15,0.62],"rfemur"];
        [_helmetHolder, [0,-5,-90]] call GEARF_fnc_rotateObject;
      };
    };
  };

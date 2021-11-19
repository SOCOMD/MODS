private["_item", "_class", "_wpnItems", "_type"];
_item = _this select 0;
_class = _item call ASORGS_fnc_GetClass;
_wpnItems = call ASORGS_fnc_GetHandgunItems;
_type = getNumber(configFile >> "cfgWeapons" >> _class >> "ItemInfo" >> "type");
for[{_i = (count _wpnItems)-1}, {_i >= 0 }, {_i = _i - 1}] do {
    
    if (getNumber(configFile >> "cfgWeapons" >> (_wpnItems select _i) >> "ItemInfo" >> "type") == _type) then  {
        _wpnItems deleteAt _i; 
    };    
};
_wpnItems pushBack _class;
ASORGS_WeightChanged = true;
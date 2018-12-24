_args = _this;
_type = _args select 0;
_classNames = [];

_asorvsConfig = (configFile >> "CfgASORVS" >> _type);

if(isNull(_asorvsConfig)) exitWith {_classNames};

for "_i" from 0 to (count _asorvsConfig) - 1 do {
	_classNames = _classNames + getArray(_asorvsConfig select _i);
};

_classNames;
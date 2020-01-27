_args = _this;
_player = _this select 0;
_isAdmin = false;

if(isNull(_player)) exitWith {_isAdmin};

_guid = getPlayerUID _player;

_whitelist = [
	"76561197970310529", //Seth
	"76561198003228911", //ChambersAUS
	"76561198006262884", //Token
	"76561198010862505", //Johno
	"76561197998817370" //Zanven
];

if(_guid in _whitelist) then {
	_isAdmin = true;
};

_isAdmin;
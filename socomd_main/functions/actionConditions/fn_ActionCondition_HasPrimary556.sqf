_args = _this;
_player = _this select 0;
_primary = primaryWeapon _player;

_weaponWhitelist = [
	"RH_m4a1_ris",
	"RH_m4a1_ris_m203s",
	"RH_m4a1_ris_des",
	"RH_m4a1_ris_m203s_des",
	"RH_Hk416",
	"RH_hk416_des"
];

_allowed = false;
{
	if(_primary == _x) then
	{
		_allowed = true;
	};
}forEach _weaponWhitelist;

_allowed
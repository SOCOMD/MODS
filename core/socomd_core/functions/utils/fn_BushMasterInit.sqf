_veh = _this select 0;
_smoke = objNull;
_run = true;
_veh addEventHandler ["Deleted", {  
 if ( ! isNull _smoke) then {
 	deleteVehicle _smoke; 
	 _run = false;
 };
}];

while{ _run } do {
	_motor = _veh getHit "motor";
	_body = _veh getHit "body";
	_turret = linearConversion[0,1,_motor,0,0.8] + _body;
	if (_turret > 1) then {
		_turret = 1;
	};
	if (_turret < 1 && _turret > 0.45) then {
		_turret = 0.45;
	};
	_veh setHitPointDamage ["hitturret",_turret];
	_veh setHitPointDamage ["hitgun",_turret];
	if (_motor == 1 && isNull _smoke) then {
		_smoke = "#particlesource" createVehicleLocal position _veh;
		_smoke setParticleClass "AirObjectDestructionSmoke";
		_smoke attachTo [_veh,[0,2.8,0.5]];
	};
	if( _motor < 1.0 && ! isNull _smoke ) then {
		deleteVehicle _smoke;
	};
	sleep 1;
};
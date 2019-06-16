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
 if (_motor == 1 && isNull _smoke) then { 
  _smoke = "test_EmptyObjectForSmoke" createVehicle position _veh; 
  _smoke attachTo [_veh,[0,0,0.8]]; 
 }; 
 if( _motor < 1.0 && ! isNull _smoke ) then { 
  deleteVehicle _smoke; 
 }; 
 sleep 1; 
};
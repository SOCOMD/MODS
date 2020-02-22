_args = _this;
_player = _this select 0;
_type = _this select 1;
_colour = _this select 2;


jumpSignal = _colour createVehicle (position _player); 
jumpSignal attachTo [vehicle _player,[-0.05,-0.09,0.1],"lankle"];

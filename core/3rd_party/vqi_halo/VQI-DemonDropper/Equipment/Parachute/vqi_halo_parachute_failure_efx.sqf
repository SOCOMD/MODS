// Parachute Failure EFX (looped)
//



private ["_csP","_csF","_ffX","_ffY","_ffZ"];

//_unit = _this select 0;

while {(((getPos player select 2) > 10) && (animationState player == "para_pilot"))} do {	

	_csP = 10 + random 25;
	_csF = random 10;

	addCamShake [_csP, 3, _csF];

	_ffX = random 100;
	_ffY = random 100;
	_ffZ = random 450;

	vehicle player setVelocity [_ffX,_ffY,(-500 + _ffZ)];
	sleep 1;
};




/////////////////////////
/* NOTES:




*/
// Cold, see player's breath
//
sleep 1820;




private ["_unit","_breath","_cold"];

_unit = _this select 0;

_breath = "Land_HelipadEmpty_F" createVehiclelocal (getpos _unit);	// Helipad?????  - Interfere with Heli EVACs?
_breath attachto [_unit,[0,0.17,0], "neck"];



while {alive _unit} do {

	sleep 4;

	_cold = "#particlesource" createVehicleLocal getpos _breath;
	_cold setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 13,0],"","Billboard",0.5,0.5,[0,0,0],[0, 0.5, -0.2],1, 1.275,1, 0,[0, 0.2,0],[[1,1,1, random 0.02], [1,1,1, 0.01], [1,1,1, 0]],[1000],1,0.04,"","",_breath];
	_cold setParticleRandom [2, [0, 0, 0], [0.25, 0.25, 0.25], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
	_cold setDropInterval 0.001;
	
	sleep 0.2 + (random 0.5);	// ?
	deleteVehicle _cold;
};
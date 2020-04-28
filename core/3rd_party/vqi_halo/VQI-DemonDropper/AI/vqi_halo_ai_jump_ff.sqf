// TESTING
// -W-I-P-

private ["_rPosX","_rPosY","_rJump"];



_rPosX = random 20;
_rPosY = random 20;
_rJump = _rPosX - _rPosY;

_this setPos (player modelToWorld [_rJump,_rJump,-5]);





//////////////////
/* NOTES:


*/
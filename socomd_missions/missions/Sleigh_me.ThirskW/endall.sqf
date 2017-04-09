
cutText ["","BLACK OUT",0];


//set camera on santa
_cam = "camera" camCreate [3414.03,4797.73,1.6];
_cam camPreload 5;
_cam camSetTarget fc1;
showCinemaBorder false;
camUseNVG false;

sleep 1;

cutText ["","BLACK IN",8];
	_cam camsetpos [3413.86,4793.4,1.6];
	_cam cameraEffect ["internal", "BACK"];
	cutText ["","BLACK FADED",999999];
	cutText ["","BLACK IN",4];
	_cam camCommit 4;
waitUntil {camcommitted _cam};

1 fademusic 1; 
playmusic "music1";
sleep 5.7;

1 fademusic 1; 
playmusic "music3";
cutText ["","BLACK OUT",1];
sleep 1;



// move to picturesc scene for ending

_cam camsetpos [3478.72,4853.35,44];
_cam camSetTarget cone2;
_cam cameraEffect ["internal", "BACK"];
	cutText ["","BLACK FADED",999999];
	cutText ["","BLACK IN",8];
	_cam camCommit 0;
waitUntil {camcommitted _cam};

sleep 3.2;

// xmas message

[      [format            
["From all of us in SOCOMD HQ and J Sections, we wish you a MERRY CHRISTMAS!!!","<t align = 'center' shadow = '1' size = '0.5' 
font='TahomaB'>%1</t><br/><br/><br/>"],      
["Thanks for a great 2016!!","<t align = 'center' shadow = '1' size = 
'0.5'>%1</t>"]    ], 0, 0, "<t align = 'center' 
shadow = '1' size = '1.0'>%1</t>" ] spawn 
BIS_fnc_typeText;
waitUntil {camcommitted _cam};

sleep 14;
cutText ["","BLACK OUT",4];
sleep 5;


// cam to soup kitchen
_cam camsetpos [1310.84,1998.89,50];
_cam camSetTarget tent1;
_cam camCommit 0;
waitUntil {camcommitted _cam};
_cam cameraEffect ["internal", "BACK"];
	cutText ["","BLACK FADED",999999];
	cutText ["","BLACK IN",5];

Camrunning = true; // set to false to stop the camera
cameratarget = tent1;
_radius = 50; // circle radius
_angle = 135; // starting angle
_altitude = 50; // camera altitude
_dir = 1; //Direction of camera movement 0: anti-clockwise, 1: clockwise
_speed = 0.05; //lower is faster

_coords = [cameratarget, _radius, _angle] call BIS_fnc_relPos;
_coords set [2, _altitude];
_cam cameraEffect ["INTERNAL","BACK"];
_cam camPrepareFOV 0.700;
_cam camPrepareTarget cameratarget;
_cam camCommitPrepared 0;

while {Camrunning} do {
_coords = [cameratarget, _radius, _angle] call BIS_fnc_relPos;
_coords set [2, _altitude];

_cam camPreparePos _coords;
_cam camCommitPrepared _speed;

waitUntil {camCommitted _cam || !(Camrunning)};

_cam camPreparePos _coords;
_cam camCommitPrepared 0;

_angle = if (_dir == 0) then {_angle - 1} else {_angle + 1};
if (_angle == 400) then {camrunning = false;};
};

_cam camsetpos [1310.84,1998.89,70];
_cam camCommit 4;
cutText ["","BLACK OUT",4];
sleep 5;


// cam over base
_cam camsetpos [186.086,652.374,64];
_cam camSetTarget cone3;
_cam camCommit 0;
waitUntil {camcommitted _cam};

_cam cameraEffect ["internal", "BACK"];
	cutText ["","BLACK FADED",999999];
	cutText ["","BLACK IN",5];
_cam camsetpos [1086.086,652.374,45];
_cam camCommit 14;
sleep 11;
cutText ["","BLACK OUT",3];
sleep 4;




// back to socomd logo for ending

_cam camsetpos [4647.5,2844,4.2];
_cam camSetTarget screen;
	_cam cameraEffect ["internal", "BACK"];
	cutText ["","BLACK FADED",999999];
	cutText ["","BLACK IN",5];
	_cam camCommit 0;
	waitUntil {camcommitted _cam};
sleep 3;

[      [format            
["Looking forward to seeing you for SOCOMD 3.0 in 2017!!","<t align = 'center' shadow = '1' size = '0.5' 
font='TahomaB'>%1</t><br/><br/><br/>"],      
["1-0 to all sections - DISMISSED - OUT!","<t align = 'center' shadow = '1' size = 
'0.5'>%1</t>"]    ], 0, 0, "<t align = 'center' 
shadow = '1' size = '1.0'>%1</t>" ] spawn 
BIS_fnc_typeText;
sleep 5;

["end1",true,20] call BIS_fnc_endMission;

//	player cameraEffect ["terminate","back"];
// 	camDestroy _cam;

	showCinemaBorder false;
//setup and move to 1
	cutText ["","BLACK OUT",1];
	sleep 1;
	_cam = "camera" camCreate [11034,11524,2];
	_cam camPreload 5;
	_cam camSetTarget nm3;
	_cam camsetpos [11034,11524,2];
	_cam cameraEffect ["internal", "BACK"];

	cutText ["","BLACK FADED",999999];
	cutText ["","BLACK IN",8];
	_cam camCommit 8;
	waitUntil {camcommitted _cam};
	cutText ["Silent Shield PMC - A SOCOMD Company (Pty Ltd)", "Plain", 4];
	0 cutFadeOut 4;
	
//Move 2 - set target player and move to new position
	_cam camSetPos [(position nm3 select 0) -80, position nm3 select 1, position nm3 select 2];
	_cam camCommit 8;
	cutText ["200NM Southwest of Altis", "Plain", 4];
	0 cutFadeOut 3;
	waitUntil {camcommitted _cam};

// set target and move to pos to watch choppers
	_cam camSetTarget nm3;
	_cam camCommit 2;
	waitUntil {camcommitted _cam};
	_cam camsetpos [10977.6,11533,54];
	_cam camCommit 8;
	waitUntil {camcommitted _cam};
	cutText ["Operation Dark Hammer - by Sharkie", "Plain", 4];
	0 cutFadeOut 3;
	sleep 6;

// back to watcher pos
	_cam camsettarget nm2;
	_cam camsetpos [11035,11524,2];
	_cam camCommit 10;
	waitUntil {camcommitted _cam};
//	sleep 6;

	
// back to player and terminate
	_cam camsettarget player;
	_cam camCommit 3;
	waitUntil {camcommitted _cam};
	_cam camSetPos [position player select 0, position player select 1, position player select 2];
	_cam camCommit 3;
	waitUntil {camcommitted _cam};
	_cam camSetPos [position player select 0, position player select 1, position player select 2];
	_cam camCommit 2;
	waitUntil {camcommitted _cam};
	_cam camSetPos [position player select 0, position player select 1, position player select 2];
	_cam camCommit 0;
	waitUntil {camcommitted _cam};
	player cameraEffect ["terminate","back"];
 	camDestroy _cam;
 	sleep 300;
 	skipTime 6;

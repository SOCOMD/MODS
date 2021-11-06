/*
*	Author: LAxemann
*
*	Desc: 
*   
*
*	Params:
*	None
*
*	Returns:
*	Nothing
*
*	Example: 
*   
* =================================================*/
private _currentWeapon = (currentWeapon player);
private ["_gesture"];

if (L_pReady_reloadDone && {vehicle player == player} && {_currentWeapon == primaryWeapon player}) then {
	if (inputAction "reloadMagazine" > 0) then {
		L_pReady_reloadDone = false;
	} else {
		if (time >= L_pReady_nextCheck) then {
			L_pReady_nextCheck = time + L_pReady_checkInterval; // Only check in specified intervals to save performance
			if (L_pReady_enabled && {!(weaponLowered player)} && {stance player != "PRONE"} && {!(isWeaponDeployed player)} && {(time - L_pReady_lastSwitch) >= 0.30}) then {
				private _bCheck1	= player getVariable ["ph_bCheck1",false];
				private _manual		= player getVariable ["ph_manual",false];
				if (L_pReady_lastWeapon != _currentWeapon) then {
					L_pReady_lastWeapon = _currentWeapon;
					private _inertia 	= getNumber (ConfigFile >> "CfgWeapons" >> _currentWeapon >> "inertia");
					L_pReady_checkDist 	= 0.505 + (_inertia min 0.85);
					// player sideChat str L_pReady_checkDist;
				};
				
				private _startPos 	= eyePos player;
				private _playerDir 	= vectorDir player;
				private _endPos		= _startPos vectorAdd (_playerDir vectorMultiply  L_pReady_checkDist);
				private _checkPosLeft = player modelToWorldWorld [0 - L_pReady_lookAhead,0,0];
				_checkPosLeft = [_checkPosLeft select 0, _checkPosLeft select 1, _startPos select 2];
				private _endPosLeft = _checkPosLeft vectorAdd (_playerDir vectorMultiply  (L_pReady_checkDist + (L_pReady_lookAhead * 0.75)));
				
				private _checkPosRight = player modelToWorldWorld [L_pReady_lookAhead,0,0];
				_checkPosRight = [_checkPosRight select 0, _checkPosRight select 1, _startPos select 2];
				private _endPosRight = _checkPosRight vectorAdd (_playerDir vectorMultiply  (L_pReady_checkDist + (L_pReady_lookAhead * 0.75)));
				
				// Main check starting from the player's eyes. If wall ahead, set the variable, check if the player is ...
				// ...already in a stance and play the animation if he's not. If no wall ahead, change the variable and check if the player has manually played the animation.
				if ((lineIntersects [_startPos, _endPos, player])  &&  {lineIntersects [_checkPosLeft, _endPosLeft, player]}  &&   {lineIntersects [_checkPosRight, _endPosRight, player]}) then {
				
					// Ignore Bushes
					private _pass = true;
					private _foliage = (nearestTerrainObjects [player,["bush"],7]);
					private _arr = (lineIntersectsWith [_startPos, _endPos, player, objNull, true]);
					private _obstacle = "";
					if (count _arr > 0) then {
						_obstacle = _arr select 0;
						if (_obstacle in _foliage) then {
							_pass = false;
						};
					};
					
					if (_pass) then {
						if (!(player getVariable ["ph_wallAhead", false])) then {player setVariable ["ph_wallAhead", true];};
						if (!_bCheck1 && {alive player} && {!_manual}) then {
							if ((count L_pReady_animArray) > 0) then {
								_gesture = selectRandom L_pReady_animArray;
							} else {
								private _wDir = player weaponDirection _currentWeapon;
								_wDir = _wDir params ["","","_z"];
								if (_z >= 0) then {
									_gesture = "ph_high_ready";
								} else {
									_gesture = "ph_low_ready";
								};
							};
							[[ player,_gesture],"playActionNow"] call BIS_fnc_MP;
							L_pReady_lastSwitch = time;
							player setVariable ["ph_bCheck1", true];
						};
					};
				} else {
					if ((player getVariable ["ph_wallAhead", false])) then {player setVariable ["ph_wallAhead", false];};
					if (_bCheck1 && {!_manual} && {alive player}) then {
						[[ player,"ph_empty_ready"],"playActionNow"] call BIS_fnc_MP;
						L_pReady_lastSwitch = time;
						player setVariable ["ph_bCheck1", false];
					};
				};
			};
		};
	};
};
if (player getVariable ["ph_bCheck1",false]  && {(stance player) == "PRONE"}) then {
	player playActionNow "ph_empty_ready"; 
	player setVariable["ph_bCheck1", false];
	player setVariable["ph_manual", false];
};

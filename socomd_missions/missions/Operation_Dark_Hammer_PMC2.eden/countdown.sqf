//countdown.sqs originally by Palyamerc
//nul = execvm "countdown.sqf"
if(isServer) then {

timer = 30;  
publicvariable "timer";
 
waitUntil {!isnil "timer"};
 
while {(timer >= 0)} do {
hintSilent parsetext format ["<t size='1.5' align='center'>%1</t>",(timer / 3600) call compile loadfile "time.sqf"];
      timer = timer - 1;
      publicvariable "timer";
      sleep 1;
 
};
timer = 0;
 
newvariable = true;
publicvariable "newvariable";
[[[], "cams.sqf"], "BIS_fnc_execVM", true, false] call BIS_fnc_MP;
};

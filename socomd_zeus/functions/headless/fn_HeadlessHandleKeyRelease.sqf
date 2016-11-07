private['_handled'];

_handled = false;

switch (_this select 1) do 
{
	//Shift Key Code
	case 42: 
	{
		missionNamespace setVariable ["SOCOMD_ZEUS_ShiftDown", false];
	};
};

_handled;
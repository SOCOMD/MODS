private['_handled'];

_handled = false;

switch (_this select 1) do 
{
	//Mouse Left Key Code
	case 0: 
	{
		if (missionNamespace getVariable ["SOCOMD_ZEUS_ShiftDown", false]) then 
		{
			missionNamespace setVariable ["SOCOMD_ZEUS_AllowRotate", true];
		} 
		else 
		{
			missionNamespace setVariable ["SOCOMD_ZEUS_AllowRotate", false];
		};
	};
};

_handled;
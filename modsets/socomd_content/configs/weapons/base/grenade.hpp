class GrenadeLauncher;
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle: GrenadeLauncher
		{
		};
		class HandGrenadeMuzzle: ThrowMuzzle
		{
			magazines[]+=
			{
				"SOCOMD_Grenade"
			};
		};
	};
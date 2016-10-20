class FLAG_ADFU_F: FLAG_NATO_F
{
	scope = public;
	displayName = "Australian Flag";
	class eventHandlers
	{
		init = "(_this select 0) setFlagTexture '\socomd_data\data\ADFU_flag_co.paa'";
	};
};

class FLAG_ADFOPFOR_F: FLAG_CSAT_F
{
	scope = public;
	displayName = "Colonial Australian Flag";
	class eventHandlers
	{
		init = "(_this select 0) setFlagTexture '\socomd_data\data\adfopfor_flag_co.paa'";
	};
};
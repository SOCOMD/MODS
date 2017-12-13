[_this] spawn {
	_args = _this select 0;
	_player = _args select 0;

	waitUntil { missionNamespace getVariable["SOCOMD_InitComplete", 0] == 1 };

	["en", "English"] call acre_api_fnc_babelAddLanguageType;
	["ru", "Russian"] call acre_api_fnc_babelAddLanguageType;
	["ar", "Arabic"] call acre_api_fnc_babelAddLanguageType;

	_languagesPlayerSpeaks = ["en"];
	_type = typeOf _player;
	switch(_type) do {
		case "SOCOMD_PlatoonSignaller": {
			_languagesPlayerSpeaks = _languagesPlayerSpeaks + ["ru", "ar"];
		};

		case "SOCOMD_Homestead": {
			_languagesPlayerSpeaks = _languagesPlayerSpeaks + ["ru", "ar"];
		};
	};

	systemChat format["Unit Languages : %1", _languagesPlayerSpeaks];
	_languagesPlayerSpeaks call acre_api_fnc_babelSetSpokenLanguages;
};
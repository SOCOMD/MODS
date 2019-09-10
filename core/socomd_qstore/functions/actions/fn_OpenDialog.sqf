_dialogHandle = [] spawn {
	_dialog = createDialog "SOCOMD_DisplayQStore";
	waitUntil { !dialog };
};
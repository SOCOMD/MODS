if(!isServer) exitWith {};

_curator = _this;

_addedObjects = missionNamespace getVariable["SOCOMD_ZEUSOBJECTS", []];
_curator addCuratorEditableObjects [_addedObjects, true];
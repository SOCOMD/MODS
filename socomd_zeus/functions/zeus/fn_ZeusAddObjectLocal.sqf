if(!isServer) exitWith {};

_args = _this;
_curator = _args select 0;
_entity = _args select 1;

//Add Object to Zeus Object Collection
_addedObjects = missionNamespace getVariable["SOCOMD_ZEUSOBJECTS", []];
_addedObjects = _addedObjects + [_entity];
missionNamespace setVariable["SOCOMD_ZEUSOBJECTS", _addedObjects];

//Delta Add Object to Zeus Curators
{
	if(_x != _curator) then
	{
		_x addCuratorEditableObjects [[_entity], true];
	}
}foreach(allCurators);

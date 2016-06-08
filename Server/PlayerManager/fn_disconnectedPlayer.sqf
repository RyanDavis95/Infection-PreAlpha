params ["_unit","_id","_uid","_name"];

waitUntil {!isPlayer _unit};
_unit setDammage 1;

//_unit enableSimulationGlobal false;
[] call INFS_fnc_updateTeams;
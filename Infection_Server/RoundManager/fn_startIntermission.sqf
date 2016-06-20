private ["_time"];

_time = serverTime + INFS_Settings_IntermissionTime;

remoteExec ["INF_fnc_Intermission",INFS_Lists_Players,false];

/* Spawn Players */
[] call INFS_fnc_updateTeams;
{
    _x remoteExec ["INF_fnc_spawnPlayer",_x,false];
    _x remoteExec ["INF_fnc_initSurvivor",_x,false];
} forEach INFS_Lists_Players;

waitUntil { sleep 1; (serverTime >= _time)};
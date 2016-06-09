params["_client","_jip"];

waitUntil {
    missionNamespace getVariable ["INF_Settings_ServerStarted",false] 
    && getClientState == "BRIEFING READ"
};

/* Setup Player Backend */
_handle = _client spawn compile preProcessFileLineNumbers "Core\init.sqf";

/* Setup Player Stats */
INFS_Settings_ScoreVars = getArray (missionConfigFile >> "INF_Settings" >> "playerStats");
{
    profileNamespace setVariable [_x,nil];
    _client setVariable [_x,0,true];
} forEach INFS_Settings_ScoreVars;

waitUntil {scriptDone _handle && _client getVariable ["INF_Client_Ready",false]};

_inProgress = missionNamespace getVariable ["INF_Round_InProgress",false];

if (_inProgress) then {
    _client call INF_fnc_initZombie;   
} else {
    _client call INF_fnc_initSurvivor;
};

_client call INF_fnc_spawnPlayer;

_client remoteExec ["INFS_fnc_updateTeams",0,true];
params ["_id","_uid","_name","_jip","_owner"];


_client = objNull;
sleep 1; // Needed so allPlayers can update

waitUntil { sleep .1; 
    {
        if (owner _x == _owner) then {_client = _x;};
    } forEach playableUnits;
    (_client != objNull && isPlayer _client)
};

waitUntil {INFS_Settings_ServerStarted && getClientState == "BRIEFING READ"};

/* Setup Player Backend */
{_client setVariable [_x,0,true];} forEach INFS_Settings_ScoreVars;
_handle = _client spawn compile preProcessFileLineNumbers "Core\init.sqf";
waitUntil {scriptDone _handle && _client getVariable ["INF_Client_Ready",false]};

/* Add Player to Game */
if (!INFS_Round_InProgress) then {
    _client remoteExec ["INF_fnc_initSurvivor",_client,false];
} else {
    _client remoteExec ["INF_fnc_initZombie",_client,false];
};

_client remoteExec ["INF_fnc_spawnPlayer",_client,false];

/* Update Server Vars */
[] call INFS_fnc_updateTeams;

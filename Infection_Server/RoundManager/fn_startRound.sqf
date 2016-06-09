/* Wait for Sufficient # of players */
private ["_tmpPlayers","_readyPlayers","_start"];

_handle = [] spawn INFS_fnc_aquirePlayers;
waitUntil { scriptDone _handle; };

/* Start the Round */
INFS_Round_InProgress = True;
missionNamespace setVariable ["INF_Round_InProgress",true,true];
diag_log "Round Status - Started";

/* Check if round-end conditions met */
_handle = [] spawn INFS_fnc_stopRound;
waitUntil { scriptDone _handle; };

/* End Round */
INFS_Round_InProgress = False;
missionNamespace setVariable ["INF_Round_InProgress",false,true];
diag_log "Round Status - Ended";
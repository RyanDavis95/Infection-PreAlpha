//Event Bug Fix
["INF_FIX", "onPlayerConnected", {}] call BIS_fnc_addStackedEventHandler;
["INF_FIX", "onPlayerConnected"] call BIS_fnc_removeStackedEventHandler;

//addMissionEventHandler ["PlayerConnected",{_this spawn INFS_fnc_connectedPlayer}];
addMissionEventHandler ["HandleDisconnect",{_this call INFS_fnc_disconnectedPlayer}];
addMissionEventHandler ["EntityKilled",{_this call INFS_fnc_unitKilled}];
addMissionEventHandler ["EntityRespawned",{_this call INFS_fnc_unitRespawned}];
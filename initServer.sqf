if (isServer) then {
    INFS_Settings_ServerStarted = False;
    diag_log "****************************************";
    diag_log "Infection Server - Starting Server";
    
    [] call compile preProcessFileLineNumbers "Infection_Server\init.sqf";
    
    diag_log "Infection Server - Initialization Complete";
    diag_log "****************************************";
    
    INFS_Settings_ServerStarted = True;
    missionNamespace setVariable ["INF_Settings_ServerStarted", INFS_Settings_ServerStarted, true];
};
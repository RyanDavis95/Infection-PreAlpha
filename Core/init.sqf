params ["_client"];

diag_log "****************************************";
diag_log "Infection Client - Setting Up Client";

waitUntil {!isNull (findDisplay 46)};
_client call compile PreprocessFileLineNumbers "core\configuration.sqf";
(findDisplay 46) displayAddEventHandler ["KeyDown", {_this call INF_fnc_keyDown;}];
(findDisplay 46) displayAddEventHandler ["KeyUp", {_this call INF_fnc_keyUpHandler;}];
(findDisplay 46) displayAddEventHandler ["MouseButtonDown", {_this call INF_fnc_mouseDown;}];
_client call INF_fnc_setupEVH;

/* Setup Music */
addMusicEventHandler ["MusicStop",{[] call INF_fnc_playMusic}];
[] call INF_fnc_playMusic;

_client setVariable ["INF_Client_Ready",true,true];
diag_log "Infection Client - Setup Complete";
diag_log "****************************************";
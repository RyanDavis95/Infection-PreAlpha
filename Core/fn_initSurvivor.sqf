params ["_client"];

/* Set Team */
_client setVariable ["INF_Client_Team","SURVIVOR",true];

/* Setup Survivor */
_client call INF_fnc_setupEVH;
_client call INF_fnc_setupGear;
_client call INF_fnc_BloodEffects;
_client setAnimSpeedCoef INF_Settings_SurvivorSpeed;

/* Reset Vars */
[_client,"NORMAL"] spawn INF_fnc_modIcon;
_client setVariable ["INF_Client_GraveSpawned",false,true];

// Stats
removeAllActions player;
player addAction ["Show Stats", INFS_fnc_showStats];
params ["_client"];

/* Set Team */
_client setVariable ["INF_Client_Team","ZOMBIE",true];

/* Setup Zombie*/
_client call INF_fnc_setupEVH;
_client call INF_fnc_setupGear;
_client call INF_fnc_BloodEffects;
_client call INF_fnc_glowEffects;
_client setAnimSpeedCoef INF_Settings_ZombieSpeed;

/* Reset Vars */
_client setVariable ["INF_Client_HeadDamage",0,true];
_client setVariable ["INF_Client_OtherDamage",0,true];
[_client,"NORMAL"] spawn INF_fnc_modIcon;

// Stats
player addAction ["Show Stats", INF_fnc_showStats];
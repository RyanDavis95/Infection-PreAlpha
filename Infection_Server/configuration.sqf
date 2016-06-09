/* Round Variables */
INFS_Round_InProgress = False;
INFS_Round_Number = 0;
INFS_Round_StartTime = serverTime;
INFS_Round_Location = "";
INFS_Round_PickingZombie = False;

/* Lists Of Things */
INFS_Lists_Players = [];
INFS_Lists_Zombies = [];
INFS_Lists_Survivors = [];
INFS_Lists_Unassigned = [];
INFS_Lists_DeadPlayers = [];
INFS_Lists_Graves = [];
INFS_Lists_Drops = [];

/* Backend Vars */
missionNamespace setVariable ["INF_Settings_Zone","",true];
missionNamespace setVariable ["INF_Round_InProgress",false,true];
INFS_Settings_MinPlayers = getNumber (missionConfigFile >> "INF_Settings" >> "minPlayers");
INFS_Settings_ItemDrops = getArray (missionConfigFile >> "INF_Settings" >> "itemDrops");
INFS_Settings_IntermissionTime = getNumber (missionConfigFile >> "INF_Settings" >> "intermissionTime");
INFS_Settings_TimeLimit = getNumber (missionConfigFile >> "INF_Settings" >> "MaxRoundTime");

/* Stats Config */
INFS_Stats_KillXP = getNumber (missionConfigFile >> "INF_Settings" >> "KillXP");
INFS_Stats_AssistXP = getNumber (missionConfigFile >> "INF_Settings" >> "AssistXP");
INFS_Stats_HeadshotXP = getNumber (missionConfigFile >> "INF_Settings" >> "HeadshotXP");
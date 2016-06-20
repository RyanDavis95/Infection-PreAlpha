params ["_client"];

/* Backend Variables */               
INF_Settings_MissionRoot = parsingNamespace getVariable "MISSION_ROOT";
//INF_Settings_MissionRoot = format ["mpmissions\%1.%2\", missionName, worldName];
INF_Settings_FrameCount = 0;
INF_Settings_SurvivorSpeed = getNumber (missionConfigFile >> "INF_Settings" >> "Survivor_Speed");
INF_Settings_ZombieSpeed = getNumber (missionConfigFile >> "INF_Settings" >> "Zombie_Speed");
INF_Settings_ZombieAttackDamage = getNumber (missionConfigFile >> "INF_Settings" >> "Zombie_AttackDamage");
INF_Settings_Glow = objNull;
INF_Settings_CurrentMessage = [] spawn {};
INF_Settings_Songs = getArray (missionConfigFile >> "CfgMusic" >> "tracks");
INF_Settings_PlayedSongs = [];

/* Player Variables */
_client setVariable ["INF_Client_Ready",false,true];
_client setVariable ["INF_Client_ZombieAttack",false,true];
_client setVariable ["INF_Client_Team","",true];
_client setVariable ["INF_Client_ItemDropped",false];
_client setVariable ["INF_Client_Jumping",false,true];
_client setVariable ["INF_Client_HeadDamage",0,true];
_client setVariable ["INF_Client_OtherDamage",0,true];
_client setVariable ["INF_Client_GraveSpawned",false,true];

/* Stats Config */
INF_Stats_Current = [] spawn {};
_client setVariable ["INF_Stats_ShowStats",false,true];
_client setVariable ["INF_Stats_Attackers",[],true];

// Icon Config
INF_Icons_KilledIconColor = getArray (missionConfigFile >> "INF_Settings" >> "KilledIconColor");
INF_Icons_EngagedIconColor = getArray (missionConfigFile >> "INF_Settings" >> "EngagedIconColor");
INF_Icons_DefaultIconColor = getArray (missionConfigFile >> "INF_Settings" >> "DefaultIconColor");
INF_Icons_RefreshRate = getNumber (missionConfigFile >> "INF_Settings" >> "IconRefreshRate");
INF_Icons_FadeTime = getNumber (missionConfigFile >> "INF_Settings" >> "IconFadeTime");
INF_Icons_FadeThread = [] spawn {};
_client setVariable ["INF_Icons_Texture","",true];
_client setVariable ["INF_Icons_Color",[0,0,0,0],true];
_client setVariable ["INF_Icons_Text",name _client,true];

INF_Weapons_Categories = [];
INF_Weapons_CurrentList = [];
INF_Weapons_AssaultRifles = getArray (missionConfigFile >> "INF_Weapons" >> "Assault_Rifles" >> "Weapons");
INF_Weapons_MachineGuns = getArray (missionConfigFile >> "INF_Weapons" >> "Machine_Guns" >> "Weapons");
INF_Weapons_Pistols = [];
INF_Weapons_SMGs = [];
INF_Weapons_Snipers = [];
INF_Weapons_Unlocked = [];

_weaponConfigs = "true" configClasses (missionConfigFile >> "INF_Weapons");
{ INF_Weapons_Categories pushBackUnique (getText (_x >> "name")) } forEach _weaponConfigs;


/* Setup Loadout Screen Vars */
INF_Loadout_WeaponCategory = -1;
INF_Loadout_SelectedWeapon = -1;
INF_Loadout_WeaponVariant = -1;
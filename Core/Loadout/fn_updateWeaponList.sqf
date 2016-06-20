params ["_ctrl","_index","_weapons"];
_loadoutDisplay = findDisplay 1337;
_weaponSelectionCtrl = _loadoutDisplay displayCtrl 1510;

/* Get weapons from category */
_category = _ctrl lbData _index;

switch (toLower _category) do {
    case "assault rifles": { INF_Weapons_CurrentList = INF_Weapons_AssaultRifles };
    case "machine guns": { INF_Weapons_CurrentList = INF_Weapons_MachineGuns };
    case "pistols": { INF_Weapons_CurrentList = INF_Weapons_Pistols };
    case "sniper rifles": { INF_Weapons_CurrentList = INF_Weapons_SMGs };
    case "sub-machine guns": { INF_Weapons_CurrentList = INF_Weapons_Snipers };
    default { };
};

/* Update List with weapons*/
lbClear _weaponSelectionCtrl;
_i = 0;
{
    _weaponSelectionCtrl lbAdd (_x select 0);
    _weaponSelectionCtrl lbSetData [_i,_x select 0];
    _i = _i + 1;
} forEach INF_Weapons_CurrentList;
lbSort _weaponSelectionCtrl;

/* Init Selection */
if(INF_Loadout_SelectedWeapon == -1) then {
    INF_Loadout_SelectedWeapon = 0;
    _weaponSelectionCtrl lbSetCurSel INF_Loadout_SelectedWeapon;
} else {
    _weaponSelectionCtrl lbSetCurSel INF_Loadout_SelectedWeapon;
};
params ["_ctrl","_index"];
_loadoutDisplay = findDisplay 1337;
_primaryWeaponModelCtrl = _loadoutDisplay displayCtrl 1203;

INF_Loadout_WeaponVariant = lbCurSel _ctrl;
_weaponCfg = _ctrl lbData INF_Loadout_WeaponVariant;

/* Show Weapon Picture */
_weaponModel = getText (configFile >> "CfgWeapons" >> _weaponCfg >> "picture");
_primaryWeaponModelCtrl ctrlSetText _weaponModel;


_weaponCfg call INF_fnc_updateAttachmentList;
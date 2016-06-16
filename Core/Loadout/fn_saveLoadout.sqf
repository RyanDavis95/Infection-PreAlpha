_loadoutDisplay = findDisplay 1337;
_weaponLBCtrl = _loadoutDisplay displayCtrl 1510;

_primaryWeapon = _weaponLBCtrl lbData (lbCurSel _weaponLBCtrl);

removeAllWeapons player;
_primaryWeapon call INF_fnc_giveAmmo;
player addWeapon _primaryWeapon;
closeDialog 1337;
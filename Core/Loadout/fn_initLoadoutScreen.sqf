createDialog 'LoadoutScreen';
_loadoutDisplay = findDisplay 1337;
_weaponSelectionCtrl = _loadoutDisplay displayCtrl 1510;
_weaponCategoryCtrl = _loadoutDisplay displayCtrl 2100;
_primaryWeaponVariantCtrl = _loadoutDisplay displayCtrl 1601;

_weaponSelectionCtrl ctrlAddEventHandler ["LBSelChanged",{_this call INF_fnc_updateWeapon}];
_weaponCategoryCtrl ctrlAddEventHandler ["LBSelChanged",{_this call INF_fnc_updateWeaponList}];
_primaryWeaponVariantCtrl ctrlAddEventHandler ["LBSelChanged",{_this call INF_fnc_updateVariant}];

_i = 0;
{
    _weaponCategoryCtrl lbAdd _x;
    _weaponCategoryCtrl lbSetData [_i,_x];
    _i = _i + 1;
} forEach INF_Weapons_Categories;
lbSort _weaponCategoryCtrl;

/* Initial List Fill */
if (INF_Loadout_WeaponCategory == -1) then {
    INF_Loadout_WeaponCategory = 0;
    _weaponCategoryCtrl lbSetCurSel INF_Loadout_WeaponCategory;  
} else {
    _weaponCategoryCtrl lbSetCurSel INF_Loadout_WeaponCategory;
};
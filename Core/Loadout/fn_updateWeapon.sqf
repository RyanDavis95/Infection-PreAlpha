params ["_ctrl","_index"];
_loadoutDisplay = findDisplay 1337;
_primaryWeaponPicCtrl = _loadoutDisplay displayCtrl 1203;
_primaryWeaponVariantCtrl = _loadoutDisplay displayCtrl 1601;

_variants = [];
{
    if ((_ctrl lbData _index) == _x select 0) exitWith {
        _variants = _x select 1;      
    };
} forEach INF_Weapons_CurrentList;

/* Init Variants Weapon */
_i = 0;
lbClear _primaryWeaponVariantCtrl;
{
    _primaryWeaponVariantCtrl lbAdd (_x select 1);
    _primaryWeaponVariantCtrl lbSetData [_i,_x select 0];
    _i = _i + 1;
} forEach _variants;

if (INF_Loadout_WeaponVariant == -1) then {
    INF_Loadout_WeaponVariant = 0;
    _primaryWeaponVariantCtrl lbSetCurSel INF_Loadout_WeaponVariant;
} else {
    _primaryWeaponVariantCtrl lbSetCurSel INF_Loadout_WeaponVariant;
};
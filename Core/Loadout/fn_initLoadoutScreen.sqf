createDialog 'LoadoutScreen';
_loadoutDisplay = findDisplay 1337;
_weaponSelectionCtrl = _loadoutDisplay displayCtrl 1510;
_weaponCategoryCtrl = _loadoutDisplay displayCtrl 2100;
_primaryWeaponVariantCtrl = _loadoutDisplay displayCtrl 1601;
_appearancePic = _loadoutDisplay displayCtrl 1220;
_rankPic = _loadoutDisplay displayCtrl 1227;
_hatPic = _loadoutDisplay displayCtrl 1221;
_backpackPic = _loadoutDisplay displayCtrl 1222;
_vestPic = _loadoutDisplay displayCtrl 1224;
_attachmentPic = _loadoutDisplay displayCtrl 1218;
_secondaryWeaponPic = _loadoutDisplay displayCtrl 1204;

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





_exOutfit = getText (configFile >> "CfgWeapons" >> "U_KerryBody" >> "picture");
_appearancePic ctrlSetText _exOutfit;

_rank = "Resources\Images\Ranks\General.paa";
_rankPic ctrlSetText _rank;

_backpack = getText (configFile >> "CfgVehicles" >> "B_FieldPack_ghex_F" >> "picture");
_backpackPic ctrlSetText _backpack;

_hat = getText (configFile >> "CfgWeapons" >> "H_HelmetB_camo" >> "picture");
_hatPic ctrlSetText _hat;

_vest = getText (configFile >> "CfgWeapons" >> "V_TacVestCamo_khk" >> "picture");
_vestPic ctrlSetText _vest;

_attachment = getText (configFile >> "CfgWeapons" >> "optic_ACO_grn" >> "picture");
_attachmentPic ctrlSetText _attachment;

_secondaryWeapon = getText (configFile >> "CfgWeapons" >> "hgun_ACPC2_F" >> "picture");
_secondaryWeaponPic ctrlSetText _secondaryWeapon;
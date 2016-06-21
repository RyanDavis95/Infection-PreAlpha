params ["_weaponCfg"];
_loadoutDisplay = findDisplay 1337;
_attachmentComboCtrl = _loadoutDisplay displayCtrl 2101;

_attachments = _weaponCfg call BIS_fnc_CompatibleItems;
_attachmentTypes = [];
{
    _raw = _x splitString "_";
    _attachmentTypes pushBackUnique (_raw select 0);
} forEach _attachments;

_attachmentCategories = [];
{
    switch (toLower _x) do {
        case "optic": { _attachmentCategories pushBack ["Scopes",_x]};
        case "acc": { _attachmentCategories pushBack ["Accessories",_x]};
        case "muzzle": { _attachmentCategories pushBack ["Muzzles",_x]};
        case "bipod": { _attachmentCategories pushBack ["Bipods",_x]};
        default { };
    };
} forEach _attachmentTypes;

lbClear _attachmentComboCtrl;
_i = 0;
{
    _attachmentComboCtrl lbAdd (_x select 0);
    _attachmentComboCtrl lbSetData [_i,_x select 1];
    _i = _i + 1;
} forEach _attachmentCategories;

_index = lbCurSel _attachmentComboCtrl;
_type = _attachmentComboCtrl lbData _index;

[_attachments,_type] call INF_fnc_updateAttachment;
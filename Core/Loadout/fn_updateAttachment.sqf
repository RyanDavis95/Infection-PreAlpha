params ["_attachments","_type"];
_loadoutDisplay = findDisplay 1337;
_attachmentSelectionCtrl = _loadoutDisplay displayCtrl 1501;
_attachmentSelectionPicture = _loadoutDisplay displayCtrl 1218;

lbClear _attachmentSelectionCtrl;
_i = 0;
{
    _currItem = _x splitString "_";
    if (_type in _currItem) then {
        _name = getText (configFile >> "CfgWeapons" >> _x >> "displayName");
        _attachmentSelectionCtrl lbAdd _name;
        _attachmentSelectionCtrl lbSetData [_i,_x];
        _i = _i + 1;
    };  
} forEach _attachments;

lbSort _attachmentSelectionCtrl;

_index = lbCurSel _attachmentSelectionCtrl;
_item = _attachmentSelectionCtrl lbData _index;

_itemPic = getText (configFile >> "CfgWeapons" >> _item >> "picture");
_attachmentSelectionPicture ctrlSetText _itemPic;
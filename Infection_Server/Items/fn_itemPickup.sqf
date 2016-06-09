params ["_client","_item"];

switch (_item) do {
    case "Land_Ammobox_rounds_F": { _client call INFS_fnc_giveAmmo };
    case "Item_MediKit": { _client call INFS_fnc_giveHealth };
    case "Endurance": { _client call INFS_fnc_giveEndurance };
    case "DemoCharge_F": { _client call INFS_fnc_giveMine };
    default { };
};
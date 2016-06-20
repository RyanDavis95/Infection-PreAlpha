class INF_Weapons {
    class Assault_Rifles {
        name = "Assault Rifles";
        //[_class] call BIS_fnc_compatableItems;
        weapons[] = {
            {
                "AK-12",
                {
                    {"arifle_AK12_F","Base Weapon"},
                    {"arifle_AK12_GL_F","Grenade Launcher"}
                }
            },

            {
                "AKM",
                {
                    {"arifle_AKM_F","Base Weapon"}
                }
            },

            {
                "AKS-74U",
                {
                    {"arifle_AKS_F","Base Weapon"}
                }
            },

            {
                "CAR-95",
                {
                    {"arifle_CTAR_blk_F","Base Weapon"},
                    {"arifle_CTAR_GL_blk_F", "Grenade Launcher (Black)"},
                    {"arifle_CTARS_blk_F", "Black"}
                }
            },

            {
                "Katiba",
                {
                    {"arifle_Katiba_F","Base Weapon"},
                    {"arifle_Katiba_C_F","Carbine"},
                    {"arifle_Kabiba_GL_F","Grenade Launcher"}
                }

            },

            {
                "Mk20",
                {
                    {"arifle_Mk20_plain_F","Base Weapon"},
                    {"arifle_Mk20_F","Camo"},
                    {"arifle_Mk20_GL_plain_F","Grenade Launcher"},
                    {"arifle_Mk20_GL_F", "Grenade Launcher (Camo)"},
                    {"arifle_Mk20C_plain_F", "Carbine"},
                    {"arifle_Mk20C_F", "Carbine (Camo)"}
                }
            }
        };
    };

    class Machine_Guns {
        name = "Machine Guns";
        weapons[] = {
            {
                "LIM-85",
                {
                    {"LMG_03_F","Base Weapon"}
                }
            }
        };
    };
    class Pistols {
        name = "Pistols";
    };
    class SMGs {
        name = "Sub-Machine Guns";
    };
    class Snipers {
        name = "Sniper Rifles";
    };
};
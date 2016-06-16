class LoadoutScreen {
        idd = 1337;
        movingEnable = 0;
        

        controls[]=
        {
            Loadout_MainScreen_Background,
            Loadout_MainScreen_Header,
            Loadout_LeftColumn_Background,
            Loadout_MiddleColumn_WeaponSelectionListBox,
            Loadout_RightColumn_PrimaryWeaponPictureBox,
            Loadout_RightColumn_SecondaryWeaponPictureBox,
            Loadout_Footer_SaveButton,
            Loadout_LeftColumn_HeaderBar,
            Loadout_RightColumn_PrimaryWeaponHeader,
            Loadout_RightColumn_SecondaryWeaponHeader,
            Loadout_RightColumn_PrimaryWeaponMagComboBox,
            Loadout_RightColumn_SecondaryWeaponMagComboBox,
            Loadout_MiddleColumn_WeaponSelectionComboBox,
            Loadout_MiddleColumn_WeaponSelectionHeader,
            Loadout_MiddleColumn_AttachmentSelectionListBox,
            Loadout_MiddleColumn_AttachmentSelectionHeader,
            Loadout_MiddleColumn_AttachmentSelectionComboBox,
            Loadout_RightColumn_Perk1Header,
            Loadout_RightColumn_Perk2Header,
            Loadout_RightColumn_Perk3Header,
            Loadout_RightColumn_Perk1DecreaseButton,
            Loadout_RightColumn_Perk1IncreaseButton,
            Loadout_RightColumn_Perk2DecreaseButton,
            Loadout_RightColumn_Perk2IncreaseButton,
            Loadout_RightColumn_Perk3DecreaseButton,
            Loadout_RightColumn_Perk3IncreaseButton,
            Loadout_Footer_ExitButton,
            Loadout_LeftColumn_PrimaryWeaponButton,
            Loadout_LeftColumn_SecondaryWeaponButton,
            Loadout_RightColumn_Perk1PictureBox,
            Loadout_RightColumn_Perk2PictureBox,
            Loadout_RightColumn_Perk3PictureBox,
            Loadout_MiddleColumn_WeaponSelectionFrame,
            Loadout_MiddleColumn_AttachmentSelectionFrame,
            Loadout_RightColumn_PrimaryWeaponFrame,
            Loadout_RightColumn_SecondaryWeaponFrame,
            Loadout_RightColumn_PerksFrame,
            Loadout_LeftColumn_WeaponSelectFrame,
            Loadout_MiddleColumn_AttachmentSelectionPicture,
            Loadout_MiddleColumn_AttachmentSelectionRemoveButton,
            Loadout_MiddleColumn_AttachmentSelectionAttachButton,
            Loadout_LeftColumn_AppearanceHeader,
            Loadout_LeftColumn_AppearanceMenu,
            Loadout_LeftColumn_AppearanceHatPictureBox,
            Loadout_LeftColumn_AppearanceBackPackPictureBox
        };

        class Loadout_MainScreen_Background: INF_RscBackground
        {
            idc = 1200;
            x = 0.275 * safezoneW + safezoneX;
            y = 0.225 * safezoneH + safezoneY;
            w = 0.45 * safezoneW;
            h = 0.5750 * safezoneH;
        };
        class Loadout_MainScreen_Header: RscText
        {
            idc = 1201;
            text = "Infection Loadout";
            x = 0.275 * safezoneW + safezoneX;
            y = 0.2 * safezoneH + safezoneY;
            w = 0.45 * safezoneW;
            h = 0.02 * safezoneH;
            colorText[] = {0,0,0,1};
            colorBackground[] = {1,1,0,1};
        };
        class Loadout_LeftColumn_Background: RscPicture
        {
            idc = 12020;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.28776 * safezoneW + safezoneX;
            y = 0.28 * safezoneH + safezoneY;
            w = 0.0877604 * safezoneW;
            h = 0.143796 * safezoneH;
            colorText[] = {1,-1,-1,1};
        };
        class Loadout_MiddleColumn_WeaponSelectionListBox: INF_RscListbox
        {
            idc = 1510;
            x = 0.40 * safezoneW + safezoneX;
            y = 0.275 * safezoneH + safezoneY;
            w = 0.13 * safezoneW;
            h = 0.2 * safezoneH;
            onLoad = "hint 'hi'"; //_this call INF_fnc_updateWeapons
        };
        class Loadout_RightColumn_PrimaryWeaponPictureBox: RscPicture
        {
            idc = 1203;
            text = "#(argb,8,8,3)color(0,0,0,1)";
            x = 0.5500 * safezoneW + safezoneX;
            y = 0.2750 * safezoneH + safezoneY;
            w = 0.1600 * safezoneW;
            h = 0.1200 * safezoneH;
        };
        class Loadout_RightColumn_SecondaryWeaponPictureBox: RscPicture
        {
            idc = 1204;
            text = "#(argb,8,8,3)color(0,0,0,1)";
            x = 0.5500 * safezoneW + safezoneX;
            y = 0.4750 * safezoneH + safezoneY;
            w = 0.1600 * safezoneW;
            h = 0.1200 * safezoneH;
        };
        class Loadout_Footer_SaveButton: RscButton
        {
            idc = 1600;
            text = "Save Loadout"; //--- ToDo: Localize;
            onButtonClick = "call INF_fnc_saveLoadout";
            x = 0.6325 * safezoneW + safezoneX;
            y = 0.8050 * safezoneH + safezoneY;
            w = 0.0775 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {.1,.1,.1,.9};
        };
        class Loadout_LeftColumn_HeaderBar: RscPicture
        {
            idc = 1205;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.287521 * safezoneW + safezoneX;
            y = 0.257767 * safezoneH + safezoneY;
            w = 0.0875 * safezoneW;
            h = 0.02 * safezoneH;
        };
        class Loadout_RightColumn_PrimaryWeaponHeader: RscText
        {
            idc = 1206;
            text = "Primary Weapon";
            x = 0.5500 * safezoneW + safezoneX;
            y = 0.25 * safezoneH + safezoneY;
            w = 0.16 * safezoneW;
            h = 0.02 * safezoneH;
            ColorBackground[] = {0,.8,.24,1};
        };
        class Loadout_RightColumn_SecondaryWeaponHeader: RscText
        {
            idc = 1207;
            text = "Sidearm";
            x = 0.5500 * safezoneW + safezoneX;
            y = 0.4500 * safezoneH + safezoneY;
            w = 0.1600 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {0,.8,.24,1};
        };

        class Loadout_RightColumn_PrimaryWeaponMagComboBox: RscCombo
        {
            idc = 1601;
            x = 0.55 * safezoneW + safezoneX;
            y = 0.40 * safezoneH + safezoneY;
            w = 0.16 * safezoneW;
            h = 0.02 * safezoneH;
        };
        class Loadout_RightColumn_SecondaryWeaponMagComboBox: RscCombo
        {
            idc = 1209;
            x = 0.5500 * safezoneW + safezoneX;
            y = 0.6000 * safezoneH + safezoneY;
            w = 0.1600 * safezoneW;
            h = 0.0200 * safezoneH;
        };
        class Loadout_MiddleColumn_WeaponSelectionComboBox: RscCombo
        {
            idc = 2100;
            x = 0.40 * safezoneW + safezoneX;
            y = 0.48 * safezoneH + safezoneY;
            w = 0.13 * safezoneW;
            h = 0.02 * safezoneH;
        };
        class Loadout_MiddleColumn_WeaponSelectionHeader: RscText
        {
            idc = 1210;
            text = "Firearms";
            x = 0.40 * safezoneW + safezoneX;
            y = 0.25 * safezoneH + safezoneY;
            w = 0.13 * safezoneW;
            h = 0.02 * safezoneH;
            ColorBackground[] = {0,.8,.24,1};
        };
        class Loadout_MiddleColumn_AttachmentSelectionListBox: INF_RscListbox
        {
            idc = 1501;
            x = 0.40 * safezoneW + safezoneX;
            y = 0.5525 * safezoneH + safezoneY;
            w = 0.13 * safezoneW;
            h = 0.1 * safezoneH;
        };
        class Loadout_MiddleColumn_AttachmentSelectionHeader: RscText
        {
            idc = 1211;
            text = "Attachments";
            x = 0.40 * safezoneW + safezoneX;
            y = 0.5275 * safezoneH + safezoneY;
            w = 0.13 * safezoneW;
            h = 0.02 * safezoneH;
            ColorBackground[] = {0,.8,.24,1};
        };
        class Loadout_MiddleColumn_AttachmentSelectionComboBox: RscCombo
        {
            idc = 2101;
            x = 0.40 * safezoneW + safezoneX;
            y = 0.7375 * safezoneH + safezoneY;
            w = 0.13 * safezoneW;
            h = 0.02 * safezoneH;
        };
        class Loadout_RightColumn_Perk1Header: RscPicture
        {
            idc = 1212;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.55 * safezoneW + safezoneX;
            y = 0.66 * safezoneH + safezoneY;
            w = 0.0411458 * safezoneW;
            h = 0.020463 * safezoneH;
        };
        class Loadout_RightColumn_Perk2Header: RscPicture
        {
            idc = 1213;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.605209 * safezoneW + safezoneX;
            y = 0.66 * safezoneH + safezoneY;
            w = 0.0411457 * safezoneW;
            h = 0.02 * safezoneH;
        };
        class Loadout_RightColumn_Perk3Header: RscPicture
        {
            idc = 1214;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.658771 * safezoneW + safezoneX;
            y = 0.660463 * safezoneH + safezoneY;
            w = 0.0414063 * safezoneW;
            h = 0.020463 * safezoneH;
        };
        class Loadout_RightColumn_Perk1DecreaseButton: RscButton
        {
            idc = 1605;
            text = "-"; //--- ToDo: Localize;
            x = 0.549999 * safezoneW + safezoneX;
            y = 0.736203 * safezoneH + safezoneY;
            w = 0.0192709 * safezoneW;
            h = 0.0153704 * safezoneH;
        };
        class Loadout_RightColumn_Perk1IncreaseButton: RscButton
        {
            idc = 1606;
            text = "+"; //--- ToDo: Localize;
            x = 0.571615 * safezoneW + safezoneX;
            y = 0.736297 * safezoneH + safezoneY;
            w = 0.0192708 * safezoneW;
            h = 0.0158333 * safezoneH;
        };
        class Loadout_RightColumn_Perk2DecreaseButton: RscButton
        {
            idc = 1607;
            text = "-"; //--- ToDo: Localize;
            x = 0.605552 * safezoneW + safezoneX;
            y = 0.735741 * safezoneH + safezoneY;
            w = 0.0195312 * safezoneW;
            h = 0.0158333 * safezoneH;
        };
        class Loadout_RightColumn_Perk2IncreaseButton: RscButton
        {
            idc = 1608;
            text = "+"; //--- ToDo: Localize;
            x = 0.626542 * safezoneW + safezoneX;
            y = 0.735678 * safezoneH + safezoneY;
            w = 0.0197917 * safezoneW;
            h = 0.0158335 * safezoneH;
        };
        class Loadout_RightColumn_Perk3DecreaseButton: RscButton
        {
            idc = 1609;
            text = "-"; //--- ToDo: Localize;
            x = 0.65851 * safezoneW + safezoneX;
            y = 0.735678 * safezoneH + safezoneY;
            w = 0.0197917 * safezoneW;
            h = 0.0158333 * safezoneH;
        };
        class Loadout_RightColumn_Perk3IncreaseButton: RscButton
        {
            idc = 1610;
            text = "+"; //--- ToDo: Localize;
            x = 0.680448 * safezoneW + safezoneX;
            y = 0.735615 * safezoneH + safezoneY;
            w = 0.0197917 * safezoneW;
            h = 0.0162963 * safezoneH;
        };
        class Loadout_Footer_ExitButton: RscButton
        {
            idc = 1611;
            text = "Cancel"; //--- ToDo: Localize;
            onButtonClick = "closeDialog 1337";
            x = 0.5500 * safezoneW + safezoneX;
            y = 0.8050 * safezoneH + safezoneY;
            w = 0.0775 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {.1,.1,.1,.9};
        };
        class Loadout_LeftColumn_PrimaryWeaponButton: RscButton
        {
            idc = 1612;
            text = "Primary Weapon"; //--- ToDo: Localize;
            x = 0.291407 * safezoneW + safezoneX;
            y = 0.301945 * safezoneH + safezoneY;
            w = 0.0802083 * safezoneW;
            h = 0.0353703 * safezoneH;
        };
        class Loadout_LeftColumn_SecondaryWeaponButton: RscButton
        {
            idc = 1613;
            text = "Secondary Weapon"; //--- ToDo: Localize;
            x = 0.291406 * safezoneW + safezoneX;
            y = 0.363333 * safezoneH + safezoneY;
            w = 0.0802083 * safezoneW;
            h = 0.0353703 * safezoneH;
        };
        class Loadout_RightColumn_Perk1PictureBox: RscPicture
        {
            idc = 1215;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.550261 * safezoneW + safezoneX;
            y = 0.683241 * safezoneH + safezoneY;
            w = 0.0408855 * safezoneW;
            h = 0.0474999 * safezoneH;
        };
        class Loadout_RightColumn_Perk2PictureBox: RscPicture
        {
            idc = 1216;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.605469 * safezoneW + safezoneX;
            y = 0.683796 * safezoneH + safezoneY;
            w = 0.0408854 * safezoneW;
            h = 0.0469444 * safezoneH;
        };
        class Loadout_RightColumn_Perk3PictureBox: RscPicture
        {
            idc = 1217;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.658855 * safezoneW + safezoneX;
            y = 0.683334 * safezoneH + safezoneY;
            w = 0.0414062 * safezoneW;
            h = 0.0483333 * safezoneH;
        };
        class Loadout_MiddleColumn_WeaponSelectionFrame: RscFrame
        {
            idc = 1800;
            x = 0.3990 * safezoneW + safezoneX;
            y = 0.2475 * safezoneH + safezoneY;
            w = 0.1320 * safezoneW;
            h = 0.2550 * safezoneH;
        };
        class Loadout_MiddleColumn_AttachmentSelectionFrame: RscFrame
        {
            idc = 1801;
            x = 0.3990 * safezoneW + safezoneX;
            y = 0.5250 * safezoneH + safezoneY;
            w = 0.1320 * safezoneW;
            h = 0.2350 * safezoneH;
        };
        class Loadout_RightColumn_PrimaryWeaponFrame: RscFrame
        {
            idc = 1802;
            x = 0.5475 * safezoneW + safezoneX;
            y = 0.2475 * safezoneH + safezoneY;
            w = 0.1650 * safezoneW;
            h = 0.1750 * safezoneH;
        };
        class Loadout_RightColumn_SecondaryWeaponFrame: RscFrame
        {
            idc = 1803;
            x = 0.5475 * safezoneW + safezoneX;
            y = 0.4475 * safezoneH + safezoneY;
            w = 0.1650 * safezoneW;
            h = 0.1750 * safezoneH;
        };
        class Loadout_RightColumn_PerksFrame: RscFrame
        {
            idc = 1804;
            x = 0.5450 * safezoneW + safezoneX;
            y = 0.6225 * safezoneH + safezoneY;
            w = 0.1650 * safezoneW;
            h = 0.0962037 * safezoneH;
        };
        class Loadout_LeftColumn_WeaponSelectFrame: RscFrame
        {
            idc = 1805;
            x = 0.285938 * safezoneW + safezoneX;
            y = 0.256018 * safezoneH + safezoneY;
            w = 0.0908856 * safezoneW;
            h = 0.171297 * safezoneH;
        };
        class Loadout_MiddleColumn_AttachmentSelectionPicture: RscPicture
        {
            idc = 1218;
            text = "#(argb,8,8,3)color(0,0,0,1)";
            x = 0.40 * safezoneW + safezoneX;
            y = 0.6575 * safezoneH + safezoneY;
            w = 0.13 * safezoneW;
            h = 0.075 * safezoneH;
        };
        class Loadout_MiddleColumn_AttachmentSelectionRemoveButton: RscButton
        {
            idc = 1614;
            text = "Remove"; //--- ToDo: Localize;
            x = 0.40 * safezoneW + safezoneX;
            y = 0.7750 * safezoneH + safezoneY;
            w = 0.05 * safezoneW;
            h = 0.02 * safezoneH;
            ColorBackground[] = {.1,.1,.1,.9};
        };
        class Loadout_MiddleColumn_AttachmentSelectionAttachButton: RscButton
        {
            idc = 1615;
            text = "Attach"; //--- ToDo: Localize;
            x = 0.48 * safezoneW + safezoneX;
            y = 0.7750 * safezoneH + safezoneY;
            w = 0.05 * safezoneW;
            h = 0.02 * safezoneH;
            ColorBackground[] = {.1,.1,.1,.9};
        };
        class Loadout_LeftColumn_AppearanceHeader: RscPicture
        {
            idc = 1219;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.288021 * safezoneW + safezoneX;
            y = 0.43037 * safezoneH + safezoneY;
            w = 0.0875 * safezoneW;
            h = 0.02 * safezoneH;
        };
        class Loadout_LeftColumn_AppearanceMenu: RscPicture
        {
            idc = 1220;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.28776 * safezoneW + safezoneX;
            y = 0.453241 * safezoneH + safezoneY;
            w = 0.0876042 * safezoneW;
            h = 0.288796 * safezoneH;
            colorText[] = {-1,1,-1,1};
        };
        class Loadout_LeftColumn_AppearanceHatPictureBox: RscPicture
        {
            idc = 1221;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.3 * safezoneW + safezoneX;
            y = 0.48 * safezoneH + safezoneY;
            w = 0.0625 * safezoneW;
            h = 0.08 * safezoneH;
        };
        class Loadout_LeftColumn_AppearanceBackPackPictureBox: RscPicture
        {
            idc = 1222;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.3 * safezoneW + safezoneX;
            y = 0.6 * safezoneH + safezoneY;
            w = 0.0625 * safezoneW;
            h = 0.08 * safezoneH;
        };
};

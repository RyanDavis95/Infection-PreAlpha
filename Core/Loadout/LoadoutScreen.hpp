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
            Loadout_RightColumn_PrimaryWeaponVariantComboBox,
            Loadout_RightColumn_SecondaryWeaponVariantComboBox,
            Loadout_MiddleColumn_WeaponSelectionComboBox,
            Loadout_MiddleColumn_WeaponSelectionHeader,
            Loadout_MiddleColumn_AttachmentSelectionListBox,
            Loadout_MiddleColumn_AttachmentSelectionHeader,
            Loadout_MiddleColumn_AttachmentSelectionComboBox,
            Loadout_RightColumn_Perk1Header,
            Loadout_RightColumn_Perk2Header,
            Loadout_RightColumn_Perk3Header,
            Loadout_RightColumn_Perk1Button,
            Loadout_RightColumn_Perk2Button,
            Loadout_RightColumn_Perk3Button,
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
            Loadout_LeftColumn_AppearanceFrame,
            Loadout_MiddleColumn_AttachmentSelectionPicture,
            Loadout_MiddleColumn_AttachmentSelectionRemoveButton,
            Loadout_MiddleColumn_AttachmentSelectionAttachButton,
            Loadout_LeftColumn_AppearanceHeader,
            Loadout_LeftColumn_AppearanceMenu,
            Loadout_LeftColumn_AppearanceMenuButton,
            Loadout_LeftColumn_AppearanceHatPictureBox,
            Loadout_LeftColumn_AppearanceBackPackPictureBox,
            Loadout_LeftColumn_AppearanceVestPictureBox
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
            idc = 1227;
            text = "";
            x = 0.2900 * safezoneW + safezoneX;
            y = 0.2750 * safezoneH + safezoneY;
            w = 0.0900 * safezoneW;
            h = 0.1500 * safezoneH;
        };
        class Loadout_MiddleColumn_WeaponSelectionListBox: INF_RscListbox
        {
            idc = 1510;
            x = 0.40 * safezoneW + safezoneX;
            y = 0.275 * safezoneH + safezoneY;
            w = 0.13 * safezoneW;
            h = 0.2 * safezoneH;
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
            x = 0.6450 * safezoneW + safezoneX;
            y = 0.8050 * safezoneH + safezoneY;
            w = 0.0800 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {.1,.1,.1,.9};
        };
        class Loadout_LeftColumn_HeaderBar: RscText
        {
            idc = 1205;
            text = "Rank";
            x = 0.2900 * safezoneW + safezoneX;
            y = 0.2500 * safezoneH + safezoneY;
            w = 0.0900 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {0,.8,.24,1};
        };
        class Loadout_RightColumn_PrimaryWeaponHeader: RscText
        {
            idc = 1206;
            text = "Primary Weapon";
            x = 0.5500 * safezoneW + safezoneX;
            y = 0.2500 * safezoneH + safezoneY;
            w = 0.1600 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {0,.8,.24,1};
        };
        class Loadout_RightColumn_SecondaryWeaponHeader: RscText
        {
            idc = 1207;
            text = "Secondary Weapon";
            x = 0.5500 * safezoneW + safezoneX;
            y = 0.4500 * safezoneH + safezoneY;
            w = 0.1600 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {0,.8,.24,1};
        };

        class Loadout_RightColumn_PrimaryWeaponVariantComboBox: RscCombo
        {
            idc = 1601;
            x = 0.55 * safezoneW + safezoneX;
            y = 0.40 * safezoneH + safezoneY;
            w = 0.16 * safezoneW;
            h = 0.02 * safezoneH;
        };
        class Loadout_RightColumn_SecondaryWeaponVariantComboBox: RscCombo
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
        class Loadout_RightColumn_Perk1Header: RscText
        {
            idc = 1212;
            text = "Perk 1";
            x = 0.5500 * safezoneW + safezoneX;
            y = 0.6450 * safezoneH + safezoneY;
            w = 0.0500 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {0,.8,.24,1};
        };
        class Loadout_RightColumn_Perk2Header: RscText
        {
            idc = 1213;
            text = "Perk 2";
            x = 0.6050 * safezoneW + safezoneX;
            y = 0.6450 * safezoneH + safezoneY;
            w = 0.0500 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {0,.8,.24,1};
        };
        class Loadout_RightColumn_Perk3Header: RscText
        {
            idc = 1214;
            text = "Perk 3";
            x = 0.6600 * safezoneW + safezoneX;
            y = 0.6450 * safezoneH + safezoneY;
            w = 0.0500 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {0,.8,.24,1};
        };
        class Loadout_RightColumn_Perk1Button: RscButton
        {
            idc = 1605;
            text = "Select"; //--- ToDo: Localize;
            x = 0.5500 * safezoneW + safezoneX;
            y = 0.7500 * safezoneH + safezoneY;
            w = 0.0500 * safezoneW;
            h = 0.0200 * safezoneH;
        };
        class Loadout_RightColumn_Perk2Button: RscButton
        {
            idc = 1607;
            text = "Select"; //--- ToDo: Localize;
            x = 0.6050 * safezoneW + safezoneX;
            y = 0.7500 * safezoneH + safezoneY;
            w = 0.0500 * safezoneW;
            h = 0.0200 * safezoneH;
        };
        class Loadout_RightColumn_Perk3Button: RscButton
        {
            idc = 1609;
            text = "Select"; //--- ToDo: Localize;
            x = 0.6600 * safezoneW + safezoneX;
            y = 0.7500 * safezoneH + safezoneY;
            w = 0.0500 * safezoneW;
            h = 0.0200 * safezoneH;
        };
        class Loadout_Footer_ExitButton: RscButton
        {
            idc = 1611;
            text = "Cancel"; //--- ToDo: Localize;
            onButtonClick = "closeDialog 1337";
            x = 0.5800 * safezoneW + safezoneX;
            y = 0.8050 * safezoneH + safezoneY;
            w = 0.0600 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {.1,.1,.1,.9};
        };
        class Loadout_LeftColumn_PrimaryWeaponButton: RscButton
        {
            idc = 1612;
            text = "Primary Weapon"; //--- ToDo: Localize;
            x = 0.2750 * safezoneW + safezoneX;
            y = 0.8050 * safezoneH + safezoneY;
            w = 0.0800 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {.1,.1,.1,.9};
        };
        class Loadout_LeftColumn_SecondaryWeaponButton: RscButton
        {
            idc = 1613;
            text = "Secondary Weapon"; //--- ToDo: Localize;
            x = 0.3600 * safezoneW + safezoneX;
            y = 0.8050 * safezoneH + safezoneY;
            w = 0.0800 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {.1,.1,.1,.9};
        };
        class Loadout_RightColumn_Perk1PictureBox: RscPicture
        {
            idc = 1215;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.5500 * safezoneW + safezoneX;
            y = 0.6700 * safezoneH + safezoneY;
            w = 0.0500 * safezoneW;
            h = 0.0750 * safezoneH;
        };
        class Loadout_RightColumn_Perk2PictureBox: RscPicture
        {
            idc = 1216;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.6050 * safezoneW + safezoneX;
            y = 0.6700 * safezoneH + safezoneY;
            w = 0.0500 * safezoneW;
            h = 0.0750 * safezoneH;
        };
        class Loadout_RightColumn_Perk3PictureBox: RscPicture
        {
            idc = 1217;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.6600 * safezoneW + safezoneX;
            y = 0.6700 * safezoneH + safezoneY;
            w = 0.0500 * safezoneW;
            h = 0.0750 * safezoneH;
        };
        class Loadout_MiddleColumn_WeaponSelectionFrame: RscFrame
        {
            idc = 1800;
            x = 0.3965 * safezoneW + safezoneX;
            y = 0.2450 * safezoneH + safezoneY;
            w = 0.1370 * safezoneW;
            h = 0.2600 * safezoneH;
        };
        class Loadout_MiddleColumn_AttachmentSelectionFrame: RscFrame
        {
            idc = 1801;
            x = 0.3965 * safezoneW + safezoneX;
            y = 0.5225 * safezoneH + safezoneY;
            w = 0.1370 * safezoneW;
            h = 0.2675 * safezoneH;
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
            x = 0.5475 * safezoneW + safezoneX;
            y = 0.6425 * safezoneH + safezoneY;
            w = 0.1650 * safezoneW;
            h = 0.1325 * safezoneH;
        };
        class Loadout_LeftColumn_WeaponSelectFrame: RscFrame
        {
            idc = 1805;
            x = 0.2875 * safezoneW + safezoneX;
            y = 0.2475 * safezoneH + safezoneY;
            w = 0.0950 * safezoneW;
            h = 0.1825 * safezoneH;
        };
        class Loadout_LeftColumn_AppearanceFrame: RscFrame
        {
            idc = 1225;
            x = 0.2875 * safezoneW + safezoneX;
            y = 0.4475 * safezoneH + safezoneY;
            w = 0.0950 * safezoneW;
            h = 0.3425 * safezoneH;
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
            y = 0.7650 * safezoneH + safezoneY;
            w = 0.05 * safezoneW;
            h = 0.02 * safezoneH;
            ColorBackground[] = {.1,.1,.1,.9};
        };
        class Loadout_MiddleColumn_AttachmentSelectionAttachButton: RscButton
        {
            idc = 1615;
            text = "Attach"; //--- ToDo: Localize;
            x = 0.48 * safezoneW + safezoneX;
            y = 0.7650 * safezoneH + safezoneY;
            w = 0.05 * safezoneW;
            h = 0.02 * safezoneH;
            ColorBackground[] = {.1,.1,.1,.9};
        };
        class Loadout_LeftColumn_AppearanceHeader: RscText
        {
            idc = 1219;
            text = "Appearance";
            x = 0.2900 * safezoneW + safezoneX;
            y = 0.4500 * safezoneH + safezoneY;
            w = 0.0900 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {0,.8,.24,1};
        };
        class Loadout_LeftColumn_AppearanceMenu: RscPicture
        {
            idc = 1220;
            text = "#(argb,8,8,3)color(0,0,0,1)";
            x = 0.2900 * safezoneW + safezoneX;
            y = 0.4750 * safezoneH + safezoneY;
            w = 0.0900 * safezoneW;
            h = 0.2400 * safezoneH;
            
        };
        class Loadout_LeftColumn_AppearanceMenuButton: RscButton
        {
            idc = 1223;
            text = "Customize";
            x = 0.2900 * safezoneW + safezoneX;
            y = 0.7650 * safezoneH + safezoneY;
            w = 0.0900 * safezoneW;
            h = 0.0200 * safezoneH;
            ColorBackground[] = {.1,.1,.1,.9};
        };
        class Loadout_LeftColumn_AppearanceHatPictureBox: RscPicture
        {
            idc = 1221;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.29 * safezoneW + safezoneX;
            y = 0.72 * safezoneH + safezoneY;
            w = 0.03 * safezoneW;
            h = 0.04 * safezoneH;
        };
        class Loadout_LeftColumn_AppearanceBackPackPictureBox: RscPicture
        {
            idc = 1222;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.32 * safezoneW + safezoneX;
            y = 0.72 * safezoneH + safezoneY;
            w = 0.03 * safezoneW;
            h = 0.04 * safezoneH;
        };
        class Loadout_LeftColumn_AppearanceVestPictureBox: RscPicture
        {
            idc = 1224;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = 0.35 * safezoneW + safezoneX;
            y = 0.72 * safezoneH + safezoneY;
            w = 0.03 * safezoneW;
            h = 0.04 * safezoneH;
        };
};

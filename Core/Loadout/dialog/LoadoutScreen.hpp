#include "LoadoutScreenDefines.hpp"

class LoadoutScreen {
        idd = Loadout_Menu_DIALOG;
        movingEnable = 0;
        
        class ControlsBackground 
        {
            class Loadout_Menu_Header: RscText
            {
                idc = Loadout_Menu_Header;
                text = "Infection Loadout";
                x = 0.275 * safezoneW + safezoneX;
                y = 0.2 * safezoneH + safezoneY;
                w = 0.45 * safezoneW;
                h = 0.02 * safezoneH;
                colorText[] = {0,0,0,1};
                colorBackground[] = {1,1,0,1};
            };
            class Loadout_Menu_Background: INF_RscBackground
            {
                idc = Loadout_Menu_Background;
                x = 0.275 * safezoneW + safezoneX;
                y = 0.225 * safezoneH + safezoneY;
                w = 0.45 * safezoneW;
                h = 0.5750 * safezoneH;
            };
            class Loadout_LeftColumn_RankHeader: RscText
            {
                idc = Loadout_LeftColumn_RankHeader;
                text = "Rank";
                x = 0.2900 * safezoneW + safezoneX;
                y = 0.2500 * safezoneH + safezoneY;
                w = 0.0900 * safezoneW;
                h = 0.0200 * safezoneH;
                ColorBackground[] = {0,.8,.24,1};
            };
            class Loadout_LeftColumn_RankFrame: RscFrame
            {
                idc = Loadout_LeftColumn_RankFrame;
                x = 0.2875 * safezoneW + safezoneX;
                y = 0.2475 * safezoneH + safezoneY;
                w = 0.0950 * safezoneW;
                h = 0.1825 * safezoneH;
            };
            class Loadout_LeftColumn_AppearanceHeader: RscText
            {
                idc = Loadout_LeftColumn_AppearanceHeader;
                text = "Appearance";
                x = 0.2900 * safezoneW + safezoneX;
                y = 0.4500 * safezoneH + safezoneY;
                w = 0.0900 * safezoneW;
                h = 0.0200 * safezoneH;
                ColorBackground[] = {0,.8,.24,1};
            };
            class Loadout_LeftColumn_AppearanceFrame: RscFrame
            {
                idc = Loadout_LeftColumn_AppearanceFrame;
                x = 0.2875 * safezoneW + safezoneX;
                y = 0.4475 * safezoneH + safezoneY;
                w = 0.0950 * safezoneW;
                h = 0.3425 * safezoneH;
            };
            class Loadout_MiddleColumn_WeaponSelHeader: RscText
            {
                idc = Loadout_MiddleColumn_WeaponSelHeader;
                text = "Firearms";
                x = 0.40 * safezoneW + safezoneX;
                y = 0.25 * safezoneH + safezoneY;
                w = 0.13 * safezoneW;
                h = 0.02 * safezoneH;
                ColorBackground[] = {0,.8,.24,1};
            };
            class Loadout_MiddleColumn_WeaponSelFrame: RscFrame
            {
                idc = Loadout_MiddleColumn_WeaponSelFrame;
                x = 0.3965 * safezoneW + safezoneX;
                y = 0.2450 * safezoneH + safezoneY;
                w = 0.1370 * safezoneW;
                h = 0.2600 * safezoneH;
            };
            class Loadout_MiddleColumn_AttachmentSelHeader: RscText
            {
                idc = Loadout_MiddleColumn_AttachmentSelHeader;
                text = "Attachments";
                x = 0.40 * safezoneW + safezoneX;
                y = 0.5275 * safezoneH + safezoneY;
                w = 0.13 * safezoneW;
                h = 0.02 * safezoneH;
                ColorBackground[] = {0,.8,.24,1};
            };
            class Loadout_MiddleColumn_AttachmentSelFrame: RscFrame
            {
                idc = Loadout_MiddleColumn_AttachmentSelFrame;
                x = 0.3965 * safezoneW + safezoneX;
                y = 0.5225 * safezoneH + safezoneY;
                w = 0.1370 * safezoneW;
                h = 0.2675 * safezoneH;
            };
            class Loadout_RightColumn_PrimaryWeaponHeader: RscText
            {
                idc = Loadout_RightColumn_PrimaryWeaponHeader;
                text = "Primary Weapon";
                x = 0.5500 * safezoneW + safezoneX;
                y = 0.2500 * safezoneH + safezoneY;
                w = 0.1600 * safezoneW;
                h = 0.0200 * safezoneH;
                ColorBackground[] = {0,.8,.24,1};
            };
            class Loadout_RightColumn_PrimaryWeaponFrame: RscFrame
            {
                idc = Loadout_RightColumn_PrimaryWeaponFrame;
                x = 0.5475 * safezoneW + safezoneX;
                y = 0.2475 * safezoneH + safezoneY;
                w = 0.1650 * safezoneW;
                h = 0.1750 * safezoneH;
            };
            class Loadout_RightColumn_SecondaryWeaponHeader: RscText
            {
                idc = Loadout_RightColumn_SecondaryWeaponHeader;
                text = "Secondary Weapon";
                x = 0.5500 * safezoneW + safezoneX;
                y = 0.4500 * safezoneH + safezoneY;
                w = 0.1600 * safezoneW;
                h = 0.0200 * safezoneH;
                ColorBackground[] = {0,.8,.24,1};
            };
            class Loadout_RightColumn_SecondaryWeaponFrame: RscFrame
            {
                idc = Loadout_RightColumn_SecondaryWeaponFrame;
                x = 0.5475 * safezoneW + safezoneX;
                y = 0.4475 * safezoneH + safezoneY;
                w = 0.1650 * safezoneW;
                h = 0.1750 * safezoneH;
            };
            class Loadout_RightColumn_Perk1Header: RscText
            {
                idc = Loadout_RightColumn_Perk1Header;
                text = "Perk 1";
                x = 0.5500 * safezoneW + safezoneX;
                y = 0.6450 * safezoneH + safezoneY;
                w = 0.0500 * safezoneW;
                h = 0.0200 * safezoneH;
                ColorBackground[] = {0,.8,.24,1};
            };
            class Loadout_RightColumn_Perk2Header: RscText
            {
                idc = Loadout_RightColumn_Perk2Header;
                text = "Perk 2";
                x = 0.6050 * safezoneW + safezoneX;
                y = 0.6450 * safezoneH + safezoneY;
                w = 0.0500 * safezoneW;
                h = 0.0200 * safezoneH;
                ColorBackground[] = {0,.8,.24,1};
            };
            class Loadout_RightColumn_Perk3Header: RscText
            {
                idc = Loadout_RightColumn_Perk3Header;
                text = "Perk 3";
                x = 0.6600 * safezoneW + safezoneX;
                y = 0.6450 * safezoneH + safezoneY;
                w = 0.0500 * safezoneW;
                h = 0.0200 * safezoneH;
                ColorBackground[] = {0,.8,.24,1};
            };
            class Loadout_RightColumn_PerksFrame: RscFrame
            {
                idc = Loadout_RightColumn_PerksFrame;
                x = 0.5475 * safezoneW + safezoneX;
                y = 0.6425 * safezoneH + safezoneY;
                w = 0.1650 * safezoneW;
                h = 0.1325 * safezoneH;
            };
        };
        class Controls
        {
            class Loadout_Menu_PrimaryWeaponButton: RscButton
            {
                idc = Loadout_Menu_PrimaryWeaponButton;
                text = "Primary Weapon"; 
                x = 0.2750 * safezoneW + safezoneX;
                y = 0.8050 * safezoneH + safezoneY;
                w = 0.0800 * safezoneW;
                h = 0.0200 * safezoneH;
                ColorBackground[] = {.1,.1,.1,.9};
            }; 
            class Loadout_Menu_SecondaryWeaponButton: RscButton
            {
                idc = Loadout_Menu_SecondaryWeaponButton;
                text = "Secondary Weapon"; 
                x = 0.3600 * safezoneW + safezoneX;
                y = 0.8050 * safezoneH + safezoneY;
                w = 0.0800 * safezoneW;
                h = 0.0200 * safezoneH;
                ColorBackground[] = {.1,.1,.1,.9};
            };
            class Loadout_Menu_ExitButton: RscButton
            {
                idc = Loadout_Menu_ExitButton;
                text = "Cancel";
                onButtonClick = "closeDialog 1337";
                x = 0.5800 * safezoneW + safezoneX;
                y = 0.8050 * safezoneH + safezoneY;
                w = 0.0600 * safezoneW;
                h = 0.0200 * safezoneH;
                ColorBackground[] = {.1,.1,.1,.9};
            };
            class Loadout_Menu_SaveButton: RscButton
            {
                idc = Loadout_Menu_SaveButton;
                text = "Save Loadout";
                onButtonClick = "call INF_fnc_saveLoadout";
                x = 0.6450 * safezoneW + safezoneX;
                y = 0.8050 * safezoneH + safezoneY;
                w = 0.0800 * safezoneW;
                h = 0.0200 * safezoneH;
                ColorBackground[] = {.1,.1,.1,.9};
            };          
            class Loadout_LeftColumn_RankPic: RscPicture
            {
                idc = Loadout_LeftColumn_RankPic;
                text = "";
                x = 0.2900 * safezoneW + safezoneX;
                y = 0.2750 * safezoneH + safezoneY;
                w = 0.0900 * safezoneW;
                h = 0.1500 * safezoneH;
            };
            class Loadout_LeftColumn_AppearanceOutfitPic: RscPicture
            {
                idc = Loadout_LeftColumn_AppearanceOutfitPic;
                text = "#(argb,8,8,3)color(0,0,0,1)";
                x = 0.2900 * safezoneW + safezoneX;
                y = 0.4750 * safezoneH + safezoneY;
                w = 0.0900 * safezoneW;
                h = 0.2400 * safezoneH;         
            };
            class Loadout_LeftColumn_AppearanceHatPic: RscPicture
            {
                idc = Loadout_LeftColumn_AppearanceHatPic;
                text = "#(argb,8,8,3)color(1,1,1,1)";
                x = 0.29 * safezoneW + safezoneX;
                y = 0.72 * safezoneH + safezoneY;
                w = 0.03 * safezoneW;
                h = 0.04 * safezoneH;
            };
            class Loadout_LeftColumn_AppearanceBackPackPic: RscPicture
            {
                idc = Loadout_LeftColumn_AppearanceBackPackPic;
                text = "#(argb,8,8,3)color(1,1,1,1)";
                x = 0.32 * safezoneW + safezoneX;
                y = 0.72 * safezoneH + safezoneY;
                w = 0.03 * safezoneW;
                h = 0.04 * safezoneH;
            };
            class Loadout_LeftColumn_AppearanceVestPic: RscPicture
            {
                idc = Loadout_LeftColumn_AppearanceVestPic;
                text = "#(argb,8,8,3)color(1,1,1,1)";
                x = 0.35 * safezoneW + safezoneX;
                y = 0.72 * safezoneH + safezoneY;
                w = 0.03 * safezoneW;
                h = 0.04 * safezoneH;
            };
            class Loadout_LeftColumn_AppearanceButton: RscButton
            {
                idc = Loadout_LeftColumn_AppearanceButton;
                text = "Customize";
                x = 0.2900 * safezoneW + safezoneX;
                y = 0.7650 * safezoneH + safezoneY;
                w = 0.0900 * safezoneW;
                h = 0.0200 * safezoneH;
                ColorBackground[] = {.1,.1,.1,.9};
            };
            class Loadout_MiddleColumn_WeaponSelLB: INF_RscListbox
            {
                idc = Loadout_MiddleColumn_WeaponSelLB;
                x = 0.40 * safezoneW + safezoneX;
                y = 0.275 * safezoneH + safezoneY;
                w = 0.13 * safezoneW;
                h = 0.2 * safezoneH;
            };
            class Loadout_MiddleColumn_WeaponSelCB: RscCombo
            {
                idc = Loadout_MiddleColumn_WeaponSelCB;
                x = 0.40 * safezoneW + safezoneX;
                y = 0.48 * safezoneH + safezoneY;
                w = 0.13 * safezoneW;
                h = 0.02 * safezoneH;
            };
            class Loadout_MiddleColumn_AttachmentSelLB: INF_RscListbox
            {
                idc = Loadout_MiddleColumn_AttachmentSelLB;
                x = 0.40 * safezoneW + safezoneX;
                y = 0.5525 * safezoneH + safezoneY;
                w = 0.13 * safezoneW;
                h = 0.1 * safezoneH;
            };
            class Loadout_MiddleColumn_AttachmentSelCB: RscCombo
            {
                idc = Loadout_MiddleColumn_AttachmentSelCB;
                x = 0.40 * safezoneW + safezoneX;
                y = 0.7375 * safezoneH + safezoneY;
                w = 0.13 * safezoneW;
                h = 0.02 * safezoneH;
            };
            class Loadout_MiddleColumn_AttachmentSelPic: RscPicture
            {
                idc = Loadout_MiddleColumn_AttachmentSelPic;
                text = "#(argb,8,8,3)color(0,0,0,1)";
                x = 0.40 * safezoneW + safezoneX;
                y = 0.6575 * safezoneH + safezoneY;
                w = 0.13 * safezoneW;
                h = 0.075 * safezoneH;
            };
            class Loadout_MiddleColumn_AttachmentSelAttachButton: RscButton
            {
                idc = Loadout_MiddleColumn_AttachmentSelAttachButton;
                text = "Attach"; 
                x = 0.48 * safezoneW + safezoneX;
                y = 0.7650 * safezoneH + safezoneY;
                w = 0.05 * safezoneW;
                h = 0.02 * safezoneH;
                ColorBackground[] = {.1,.1,.1,.9};
            };
            class Loadout_MiddleColumn_AttachmentSelRemoveButton: RscButton
            {
                idc = Loadout_MiddleColumn_AttachmentSelRemoveButton;
                text = "Remove"; 
                x = 0.40 * safezoneW + safezoneX;
                y = 0.7650 * safezoneH + safezoneY;
                w = 0.05 * safezoneW;
                h = 0.02 * safezoneH;
                ColorBackground[] = {.1,.1,.1,.9};
            };
            class Loadout_RightColumn_PrimaryWeaponPic: RscPicture
            {
                idc = Loadout_RightColumn_PrimaryWeaponPic;
                text = "#(argb,8,8,3)color(0,0,0,1)";
                x = 0.5500 * safezoneW + safezoneX;
                y = 0.2750 * safezoneH + safezoneY;
                w = 0.1600 * safezoneW;
                h = 0.1200 * safezoneH;
            };
            class Loadout_RightColumn_PrimaryWeaponVariantCB: RscCombo
            {
                idc = Loadout_RightColumn_PrimaryWeaponVariantCB;
                x = 0.55 * safezoneW + safezoneX;
                y = 0.40 * safezoneH + safezoneY;
                w = 0.16 * safezoneW;
                h = 0.02 * safezoneH;
            };
            class Loadout_RightColumn_SecondaryWeaponPic: RscPicture
            {
                idc = Loadout_RightColumn_SecondaryWeaponPic;
                text = "#(argb,8,8,3)color(0,0,0,1)";
                x = 0.5500 * safezoneW + safezoneX;
                y = 0.4750 * safezoneH + safezoneY;
                w = 0.1600 * safezoneW;
                h = 0.1200 * safezoneH;
            };
            class Loadout_RightColumn_SecondaryWeaponVariantCB: RscCombo
            {
                idc = Loadout_RightColumn_SecondaryWeaponVariantCB;
                x = 0.5500 * safezoneW + safezoneX;
                y = 0.6000 * safezoneH + safezoneY;
                w = 0.1600 * safezoneW;
                h = 0.0200 * safezoneH;
            };
            class Loadout_RightColumn_Perk1Pic: RscPicture
            {
                idc = Loadout_RightColumn_Perk1Pic;
                text = "#(argb,8,8,3)color(1,1,1,1)";
                x = 0.5500 * safezoneW + safezoneX;
                y = 0.6700 * safezoneH + safezoneY;
                w = 0.0500 * safezoneW;
                h = 0.0750 * safezoneH;
            };
            class Loadout_RightColumn_Perk1Button: RscButton
            {
                idc = Loadout_RightColumn_Perk1Button;
                text = "Select"; 
                x = 0.5500 * safezoneW + safezoneX;
                y = 0.7500 * safezoneH + safezoneY;
                w = 0.0500 * safezoneW;
                h = 0.0200 * safezoneH;
            };
            class Loadout_RightColumn_Perk2Pic: RscPicture
            {
                idc = Loadout_RightColumn_Perk2Pic;
                text = "#(argb,8,8,3)color(1,1,1,1)";
                x = 0.6050 * safezoneW + safezoneX;
                y = 0.6700 * safezoneH + safezoneY;
                w = 0.0500 * safezoneW;
                h = 0.0750 * safezoneH;
            };
            class Loadout_RightColumn_Perk2Button: RscButton
            {
                idc = Loadout_RightColumn_Perk2Button;
                text = "Select"; 
                x = 0.6050 * safezoneW + safezoneX;
                y = 0.7500 * safezoneH + safezoneY;
                w = 0.0500 * safezoneW;
                h = 0.0200 * safezoneH;
            };
            class Loadout_RightColumn_Perk3Pic: RscPicture
            {
                idc = Loadout_RightColumn_Perk3Pic;
                text = "#(argb,8,8,3)color(1,1,1,1)";
                x = 0.6600 * safezoneW + safezoneX;
                y = 0.6700 * safezoneH + safezoneY;
                w = 0.0500 * safezoneW;
                h = 0.0750 * safezoneH;
            };
            class Loadout_RightColumn_Perk3Button: RscButton
            {
                idc = Loadout_RightColumn_Perk3Button;
                text = "Select"; 
                x = 0.6600 * safezoneW + safezoneX;
                y = 0.7500 * safezoneH + safezoneY;
                w = 0.0500 * safezoneW;
                h = 0.0200 * safezoneH;
            };
        };
};

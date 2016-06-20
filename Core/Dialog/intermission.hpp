class Intermission {
        duration = "11+2";
        fadeIn = 0.2;
        idd = -1;
        onLoad = "["onLoad",_this,"RscDisplayDebriefing",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
        onUnload = "["onUnload",_this,"RscDisplayDebriefing",'GUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
        scriptName = "RscDisplayDebriefing";
        scriptPath = "GUI";

        controls[]={};

        class Picture : RscPicture {
                access = 0;
                colorBackground[] = {0,0,0,0};
                colorText[] = {0,0.3,0.6,1};
                deletable = 0;
                fade = 0;
                fixedWidth = 0;
                font = "TahomaB";
                h = "4 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                idc = 20793;
                lineSpacing = 0;
                shadow = 0;
                sizeEx = 0;
                style = "0x30 + 0x800";
                text = "";
                tooltipColorBox[] = {1,1,1,1};
                tooltipColorShade[] = {0,0,0,0.65};
                tooltipColorText[] = {1,1,1,1};
                type = 0;
                w = "4 * (((safezoneW / safezoneH) min 1.2) / 40)";
                x = "18 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
                y = "5.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
        };

        class Title : RscText {
                access = 0;
                colorBackground[] = {0,0,0,1};
                colorShadow[] = {0,0,0,0.5};
                colorText[] = {1,1,1,1};
                deletable = 0;
                fade = 0;
                fixedWidth = 0;
                font = "RobotoCondensed";
                h = "2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                idc = 20600;
                linespacing = 1;
                shadow = 1;
                sizeEx = "2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
                style = 2;
                text = "Mission Completed";
                tooltipColorBox[] = {1,1,1,1};
                tooltipColorShade[] = {0,0,0,0.65};
                tooltipColorText[] = {1,1,1,1};
                type = 0;
                w = "21 * (((safezoneW / safezoneH) min 1.2) / 40)";
                x = "9.5 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
                y = "10 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
        };
}

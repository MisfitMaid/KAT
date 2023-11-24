class CfgPatches
{
    class KAT_M56S_Jaeger_Helmet
    {
        author = "wlan0";
        addonRootClass = "KAT_Armor";
        requiredAddons[] =
        {
            "KAT_Armor",
            "19thODSTArmor"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] =
        {
            "KAT_M56S_Jaeger_Helmet_Default",
            "KAT_M56S_Jaeger_Helmet_Red",
            "KAT_M56S_Jaeger_Helmet_Orange",
            "KAT_M56S_Jaeger_Helmet_Green",
            "KAT_M56S_Jaeger_Helmet_Blue",
            "KAT_M56S_Jaeger_Helmet_Yellow",
            "KAT_M56S_Jaeger_Helmet_Purple",

        };
    };
};
class XtdGearModels
{
    class CfgWeapons
    {
        class KAT_M56S_Jaeger_Helmets
        {
            label = "Jaeger";
            options[] =
            {
                "helmmodel",
                "color"
            };
            class helmmodel
            {
                label = "Model";
                alwaysSelectable = 1;
                values[] =
                {
                    "default",
                    "oneill"
                };
                class default
                {
                    label = "Default";
                }
                class oneill
                {
                    label = "O'Neill";
                };
            };
            class color
            {
                label = "Color";
                alwaysSelectable = 1;
                values[] =
                {
                    "default",
                    "red",
                    "orange",
                    "green",
                    "blue",
                    "yellow",
                    "purple"
                };
                class default
                {
                    label = "Default";
                    image = "#(rgb,8,8,3)color(0,0,0,1)";
                };
                class red
                {
                    label = "Red";
                    image = "#(rgb,8,8,3)color(0.8,0,0,1)";
                };
                class orange
                {
                    label = "Orange";
                    image = "#(rgb,8,8,3)color(0.81,0.58,0.03,1)";
                };
                class green
                {
                    label = "Green";
                    image = "#(rgb,8,8,3)color(0.0,0.51,0,1)";
                };
                class blue
                {
                    label = "Blue";
                    image = "#(rgb,8,8,3)color(0.0,0,0.51,1)";
                };
                class yellow
                {
                    label = "Yellow";
                    image = "#(rgb,8,8,3)color(0.80,0.8,0,1)";
                };
                class purple
                {
                    label = "Purple";
                    image = "#(rgb,8,8,3)color(0.263,0.067,0.718,1)";
                };
            };
        };
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        /* Colors */
        class KAT_M56S_Jaeger_Helmet_Default
        {
            model = "KAT_M56S_Jaeger_Helmets";
            helmmodel = "default";
            color = "default";
        };
        class KAT_M56S_Jaeger_Helmet_Red
        {
            model = "KAT_M56S_Jaeger_Helmets";
            helmmodel = "default";
            color = "red";
        };
        class KAT_M56S_Jaeger_Helmet_Orange
        {
            model = "KAT_M56S_Jaeger_Helmets";
            helmmodel = "default";
            color = "orange";
        };
        class KAT_M56S_Jaeger_Helmet_Green
        {
            model = "KAT_M56S_Jaeger_Helmets";
            helmmodel = "default";
            color = "green";
        };
        class KAT_M56S_Jaeger_Helmet_Blue
        {
            model = "KAT_M56S_Jaeger_Helmets";
            helmmodel = "default";
            color = "blue";
        };
        class KAT_M56S_Jaeger_Helmet_Yellow
        {
            model = "KAT_M56S_Jaeger_Helmets";
            helmmodel = "default";
            color = "yellow";
        };
        class KAT_M56S_Jaeger_Helmet_Purple
        {
            model = "KAT_M56S_Jaeger_Helmets";
            helmmodel = "default";
            color = "purple";
        };
        /* Customs */
        class KAT_M56S_Jaeger_Helmet_ONeill_Blue
        {
            model = "KAT_M56S_Jaeger_Helmets";
            helmmodel = "oneill";
            color = "blue";
        };
    };
};
class CfgWeapons
{
    class ItemInfo;
    class HeadgearItem;
    class KAT_Helmets_Valkyrie;
    class KAT_M56S_Jaeger_Helmet_Default : KAT_Helmets_Valkyrie
    {
        author = "wlan0";
        model = "ODST\ODST_helm_F.p3d";
        displayName = "[KAT] M56S/J Helmet";
        ace_hearing_protection = 5.0;
        ace_hearing_lowerVolume = 0.25;
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\M56S_Jaeger\_textures\odst_default.paa"
        };
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "ODST\ODST_helm_F.p3d";
            hiddenSelections[] =
            {
                "camo"
            };
            hiddenSelectionsTextures[] =
            {
                "",
                ""
            };
            class HitpointsProtectionInfo
            {
                class Face
                {
                    armor = 35;
                    hitpointName = "HitFace";
                    passThrough = 0.1;
                };
                class Head
                {
                    armor = 35;
                    hitpointName = "HitHead";
                    passThrough = 0.1;
                };
                class Neck
                {
                    armor = 35;
                    hitpointName = "HitNeck";
                    passThrough = 0.1;
                };
            };
        };
    };
    class KAT_M56S_Jaeger_Helmet_Red : KAT_M56S_Jaeger_Helmet_Default
    {
        displayName = "[KAT] M56S/J Helmet [Red]";
        hiddenSelectionsTextures[] = 
        {
            "KAT_Armor\_base\helmets\M56S_Jaeger\_textures\odst_red.paa"
        };
    };
    class KAT_M56S_Jaeger_Helmet_Orange : KAT_M56S_Jaeger_Helmet_Default
    {
        displayName = "[KAT] M56S/J Helmet [Orange]";
        hiddenSelectionsTextures[] = 
        {
            "KAT_Armor\_base\helmets\M56S_Jaeger\_textures\odst_orange.paa"
        };
    };
    class KAT_M56S_Jaeger_Helmet_Green : KAT_M56S_Jaeger_Helmet_Default
    {
        displayName = "[KAT] M56S/J Helmet [Green]";
        hiddenSelectionsTextures[] = 
        {
            "KAT_Armor\_base\helmets\M56S_Jaeger\_textures\odst_green.paa"
        };
    };
    class KAT_M56S_Jaeger_Helmet_Blue : KAT_M56S_Jaeger_Helmet_Default
    {
        displayName = "[KAT] M56S/J Helmet [Blue]";
        hiddenSelectionsTextures[] = 
        {
            "KAT_Armor\_base\helmets\M56S_Jaeger\_textures\odst_blue.paa"
        };
    };
    class KAT_M56S_Jaeger_Helmet_Yellow : KAT_M56S_Jaeger_Helmet_Default
    {
        displayName = "[KAT] M56S/J Helmet [Yellow]";
        hiddenSelectionsTextures[] = 
        {
            "KAT_Armor\_base\helmets\M56S_Jaeger\_textures\odst_yellow.paa"
        };
    };
    class KAT_M56S_Jaeger_Helmet_Purple : KAT_M56S_Jaeger_Helmet_Default
    {
        displayName = "[KAT] M56S/J Helmet [Purple]";
        hiddenSelectionsTextures[] = 
        {
            "KAT_Armor\_base\helmets\M56S_Jaeger\_textures\odst_purple.paa"
        };
    };
};

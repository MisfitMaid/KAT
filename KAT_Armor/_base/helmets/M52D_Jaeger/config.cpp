class CfgPatches
{
    class KAT_M52D_Jaeger_Helmet
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
            "KAT_M52D_Jaeger_Helmet_Default",
            "KAT_M52D_Jaeger_Helmet_Blue",
            "KAT_M52D_Jaeger_Helmet_Berserker",

        };
    };
};
class XtdGearModels
{
    class CfgWeapons
    {
        class KAT_M52D_Jaeger_Helmets
        {
            label = "Jaeger";
            options[] =
            {
                "helmmodel",
                "squad"
            };
            class helmmodel
            {
                label = "Model";
                alwaysSelectable = 1;
                values[] =
                {
                    "default",
                    "oneill",
                    "shields",
                    "hayes",
                    "carter",
                    "reid",
                };
                class default
                {
                    label = "Default";
                }
                class oneill
                {
                    label = "O'Neill";
                };
                class shields
                {
                    label = "Shields";
                };
                class hayes
                {
                    label = "Hayes";
                };
                class carter
                {
                    label = "Carter";
                };
                class reid
                {
                    label = "Reid";
                };
            };
            class squad
            {
                label = "Squad";
                alwaysSelectable = 1;
                values[] =
                {
                    "generic",
                    "valkyrie",
                    "berserker",
                };
                class generic
                {
                    label = "Default";
                    image = "#(rgb,8,8,3)color(0,0,0,1)";
                };
                class valkyrie
                {
                    label = "Valkyrie";
                    image = "#(rgb,8,8,3)color(0.0,0,0.51,1)";
                };
                class berserker
                {
                    label = "Berserker";
                    image = "#(rgb,8,8,3)color(0.91,0.56,0.09,1)";
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
        class KAT_M52D_Jaeger_Helmet_Default
        {
            model = "KAT_M52D_Jaeger_Helmets";
            helmmodel = "default";
            squad = "generic";
        };
        class KAT_M52D_Jaeger_Helmet_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Helmets";
            helmmodel = "default";
            squad = "valkyrie";
        };
        class KAT_M52D_Jaeger_Helmet_Berserker
        {
            model = "KAT_M52D_Jaeger_Helmets";
            helmmodel = "default";
            squad = "berserker";
        };
        /* Customs */
        class KAT_M52D_Jaeger_Helmet_ONeill_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Helmets";
            helmmodel = "oneill";
            squad = "valkyrie";
        };
        class KAT_M52D_Jaeger_Helmet_ONeill_Berserker
        {
            model = "KAT_M52D_Jaeger_Helmets";
            helmmodel = "oneill";
            squad = "berserker";
        };
        class KAT_M52D_Jaeger_Helmet_Shields_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Helmets";
            helmmodel = "shields";
            squad = "valkyrie";
        };
        class KAT_M52D_Jaeger_Helmet_Hayes_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Helmets";
            helmmodel = "hayes";
            squad = "valkyrie";
        };
        class KAT_M52D_Jaeger_Helmet_Hayes_Berserker
        {
            model = "KAT_M52D_Jaeger_Helmets";
            helmmodel = "hayes";
            squad = "berserker";
        };
        class KAT_M52D_Jaeger_Helmet_Carter_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Helmets";
            helmmodel = "carter";
            squad = "valkyrie";
        };
        class KAT_M52D_Jaeger_Helmet_Reid_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Helmets";
            helmmodel = "reid";
            squad = "valkyrie";
        };
    };
};
class CfgWeapons
{
    class ItemInfo;
    class HeadgearItem;
    class KAT_Helmets_Valkyrie;
    class KAT_M52D_Jaeger_Helmet_Default : KAT_Helmets_Valkyrie
    {
        author = "wlan0";
        model = "ODST\ODST_helm_F.p3d";
        displayName = "[KAT] M52D/J Helmet";
        ace_hearing_protection = 5.0;
        ace_hearing_lowerVolume = 0.25;
        hiddenSelections[] =
        {
            "camo"
        };
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\M52D_Jaeger\_textures\odst_default.paa"
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
    class KAT_M52D_Jaeger_Helmet_Blue : KAT_M52D_Jaeger_Helmet_Default // named "Blue" for legacy purposes
    {
        displayName = "[KAT] M52D/J Helmet [Valkyrie]";
        hiddenSelectionsTextures[] = 
        {
            "KAT_Armor\_base\helmets\M52D_Jaeger\_textures\odst_valkyrie.paa"
        };
    };
    class KAT_M52D_Jaeger_Helmet_Berserker : KAT_M52D_Jaeger_Helmet_Default
    {
        displayName = "[KAT] M52D/J Helmet [Berserker]";
        hiddenSelectionsTextures[] = 
        {
            "KAT_Armor\_base\helmets\M52D_Jaeger\_textures\odst_berserker.paa"
        };
    };
};

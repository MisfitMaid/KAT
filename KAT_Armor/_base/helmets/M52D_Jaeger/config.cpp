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
        weapons[] = {};
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
        displayName = "[Azrael] M52D";
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
    class KAT_Helmets_M52D_Valhalla_Snow : KAT_M52D_Jaeger_Helmet_Default
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\M52D_Jaeger\_textures\odst_default_snow.paa"
        };
    };

    class KAT_M52D_Jaeger_Helmet_Blue : KAT_M52D_Jaeger_Helmet_Default // named "Blue" for legacy purposes
    {
        displayName = "[Azrael] M52D (Valkyrie)";
        hiddenSelectionsTextures[] = 
        {
            "KAT_Armor\_base\helmets\M52D_Jaeger\_textures\odst_valkyrie.paa"
        };
    };
    class KAT_Helmets_M52D_Valkyrie_Snow : KAT_M52D_Jaeger_Helmet_Blue
    {
        hiddenSelectionsTextures[] = 
        {
            "KAT_Armor\_base\helmets\M52D_Jaeger\_textures\odst_valkyrie_snow.paa"
        };
    };

    class KAT_M52D_Jaeger_Helmet_Berserker : KAT_M52D_Jaeger_Helmet_Default
    {
        displayName = "[Azrael] M52D (Berserker)";
        hiddenSelectionsTextures[] = 
        {
            "KAT_Armor\_base\helmets\M52D_Jaeger\_textures\odst_berserker.paa"
        };
    };
    class KAT_Helmets_M52D_Berserker_Snow : KAT_M52D_Jaeger_Helmet_Berserker
    {
        hiddenSelectionsTextures[] = 
        {
            "KAT_Armor\_base\helmets\M52D_Jaeger\_textures\odst_berserker_snow.paa"
        };
    };
};

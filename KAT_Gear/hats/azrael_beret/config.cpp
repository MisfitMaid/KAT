class CfgPatches
{
    class KAT_Azrael_Beret
    {
        author = "wlan0";
        addonRootClass = "KAT_Gear";
        requiredAddons[] = {};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] =
        {
            "KAT_Azrael_Beret_UNSC",
            "KAT_Azrael_Beret_ODST",
            "KAT_Azrael_Beret_ONI",
            "KAT_Azrael_Beret_Valkyrie",
            "KAT_Azrael_Beret_Berserker",
        };
    };
};
class XtdGearModels
{
    class CfgWeapons
    {
        class KAT_Azrael_Berets
        {
            label = "Azrael";
            options[] =
            {
                "style",
            };
            class style
            {
                label = "Style";
                alwaysSelectable = 1;
                values[] =
                {
                    "unsc",
                    "odst",
                    "oni",
                    "valkyrie",
                    "berserker",
                };
                class unsc
                {
                    label = "UNSC";
                };
                class odst
                {
                    label = "ODST";
                };
                class oni
                {
                    label = "ONI";
                };
                class valkyrie
                {
                    label = "Valkyrie";
                };
                class berserker
                {
                    label = "Berserker";
                };
            };
        };
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        class KAT_Azrael_Beret_UNSC
        {
            model = "KAT_Azrael_Berets";
            style = "unsc";
        };
        class KAT_Azrael_Beret_ODST
        {
            model = "KAT_Azrael_Berets";
            style = "odst";
        };
        class KAT_Azrael_Beret_ONI
        {
            model = "KAT_Azrael_Berets";
            style = "oni";
        };
        class KAT_Azrael_Beret_Valkyrie
        {
            model = "KAT_Azrael_Berets";
            style = "valkyrie";
        };
        class KAT_Azrael_Beret_Berserker
        {
            model = "KAT_Azrael_Berets";
            style = "berserker";
        };
    };
};
class CfgWeapons
{
    class H_Beret_02;
    class KAT_Azrael_Beret_UNSC : H_Beret_02
    {
        displayName = "[KAT] UNSC Beret";
        author = "wlan0";
        hiddenSelectionsTextures[] = { "KAT_Gear\hats\azrael_beret\_textures\unsc.paa" };
    };
    class KAT_Azrael_Beret_ODST: H_Beret_02
    {
        displayName = "[KAT] ODST Beret";
        author = "wlan0";
        hiddenSelectionsTextures[] = { "KAT_Gear\hats\azrael_beret\_textures\odst.paa" };
    };
    class KAT_Azrael_Beret_ONI: H_Beret_02
    {
        displayName = "[KAT] ONI Beret";
        author = "wlan0";
        hiddenSelectionsTextures[] = { "KAT_Gear\hats\azrael_beret\_textures\oni.paa" };
    };
    class KAT_Azrael_Beret_Valkyrie: H_Beret_02
    {
        displayName = "[KAT] Valkyrie Squad Beret";
        author = "wlan0";
        hiddenSelectionsTextures[] = { "KAT_Gear\hats\azrael_beret\_textures\valkyrie.paa" };
    };
    class KAT_Azrael_Beret_Berserker: H_Beret_02
    {
        displayName = "[KAT] Berserker Squad Beret";
        author = "wlan0";
        hiddenSelectionsTextures[] = { "KAT_Gear\hats\azrael_beret\_textures\berserker.paa" };
    };
};

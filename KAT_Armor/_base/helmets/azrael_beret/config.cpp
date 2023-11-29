class CfgPatches
{
    class KAT_Azrael_Beret
    {
        author = "wlan0";
        addonRootClass = "KAT_Armor";
        requiredAddons[] = {};
        requiredVersion = 0.1;
        units[] = {};
        weapons[] =
        {
            "KAT_Azrael_Beret_UNSC",
            "KAT_Azrael_Beret_ODST",
            "KAT_Azrael_Beret_ONI",
            "KAT_Azrael_Beret_Valkyrie",
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
    };
};
class CfgWeapons
{
    class H_Beret_02;
    class KAT_Azrael_Beret_UNSC : H_Beret_02
    {
        displayName = "[KAT] UNSC Beret";
        hiddenSelectionsTextures[] = { "KAT_Armor\_base\helmets\azrael_beret\_textures\unsc.paa" };
    };
    class KAT_Azrael_Beret_ODST: H_Beret_02
    {
        displayName = "[KAT] ODST Beret";
        hiddenSelectionsTextures[] = { "KAT_Armor\_base\helmets\azrael_beret\_textures\odst.paa" };
    };
    class KAT_Azrael_Beret_ONI: H_Beret_02
    {
        displayName = "[KAT] ONI Beret";
        hiddenSelectionsTextures[] = { "KAT_Armor\_base\helmets\azrael_beret\_textures\oni.paa" };
    };
    class KAT_Azrael_Beret_Valkyrie: H_Beret_02
    {
        displayName = "[KAT] Valkyrie Squad Beret";
        hiddenSelectionsTextures[] = { "KAT_Armor\_base\helmets\azrael_beret\_textures\valkyrie.paa" };
    };
};

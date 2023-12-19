class CfgPatches
{
    class KAT_M52D_Jaeger_Uniform
    {
        author = "wlan0";
        addonRootClass = "KAT_Armor";
        requiredAddons[] =
        {
            "KAT_Armor",
            "OPTRE_UNSC_Units",
            "ZEPHIK_OPTRE_Compat",
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] =
        {
            "KAT_M52D_Jaeger_BDU_Masc_Black",
            "KAT_M52D_Jaeger_BDU_Femme_Black",
        };
    };
};
class XtdGearModels
{
    class CfgWeapons
    {
        class KAT_M52D_Jaeger_BDUs
        {
            label = "Jaeger";
            options[] = {
                "bodytype",
                "color",
            };
            class bodytype
            {
                label = "Body Type";
                alwaysSelectable = 1;
                values[] =
                {
                    "masc",
                    "femme",
                };
                class masc
                {
                    label = "Masc";
                };
                class femme
                {
                    label = "Femme";
                };
            };
            class color
            {
                label = "Color";
                alwaysSelectable = 1;
                values[] =
                {
                    "black",
                };
                class black
                {
                    label = "Black";
                    image = "#(rgb,8,8,3)color(0,0,0,1)";
                };
            };
        };
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        class KAT_M52D_Jaeger_BDU_Masc_Black
        {
            model = "KAT_M52D_Jaeger_BDUs";
            bodytype = "masc";
            color = "black";
        };
        class KAT_M52D_Jaeger_BDU_Femme_Black
        {
            model = "KAT_M52D_Jaeger_BDUs";
            bodytype = "femme";
            color = "black";
        };
    };
};
class CfgWeapons
{
    class ItemInfo;
    class KAT_M56S_BDU;
    class KAT_M52D_Jaeger_BDU_Masc_Black: KAT_M56S_BDU
    {
        displayName = "[Azrael] M52D/J BDU [Masc][Black]";
        class ItemInfo: ItemInfo
        {
            uniformClass = "KAT_M52D_Jaeger_BDU_Masc_Black";
            uniformType = "Neopren";
        };
    };
    class KAT_M52D_Jaeger_BDU_Femme_Black: KAT_M56S_BDU
    {
        displayName = "[Azrael] M52D/J BDU [Femme][Black]";
        class ItemInfo: ItemInfo
        {
            uniformClass = "KAT_M52D_Jaeger_BDU_Femme_Black";
            uniformType = "Neopren";
        };
    };
};
class CfgVehicles
{
    class KAT_Base_Uniform;
    class KAT_M52D_Jaeger_BDU_Masc_Black: KAT_Base_Uniform
    {
        uniformClass = "KAT_M52D_Jaeger_BDU_Masc_Black";
        model = "OPTRE_UNSC_Units\Army\uniform.p3d";
        hiddenSelections[] = {
            "camo",
            "camo2",
            "a_baseleg",
        };
        hiddenSelectionsTextures[] = {
            "KAT_Armor\_base\uniform\M52D_Jaeger\_textures\masc\top_black.paa",
            "KAT_Armor\_base\uniform\M52D_Jaeger\_textures\masc\bottom_black.paa"
        };
    };
    class KAT_M52D_Jaeger_BDU_Femme_Black: KAT_Base_Uniform
    {
        uniformClass = "KAT_M52D_Jaeger_BDU_Femme_Black";
        model = "ZEPHIK_OPTRE_Compat\OPTRE_UNSC_Units\Army\uniform.p3d";
        hiddenSelections[] = {
            "camo",
            "camo2",
            "a_baseleg",
        };
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\uniform\M52D_Jaeger\_textures\femme\top_black.paa",
            "KAT_Armor\_base\uniform\M52D_Jaeger\_textures\femme\bottom_black.paa"
        };
    };
};

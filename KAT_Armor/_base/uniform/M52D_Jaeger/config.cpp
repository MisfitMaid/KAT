class CfgPatches
{
    class KAT_M52D_Jaeger_Uniform
    {
        author = "wlan0";
        addonRootClass = "KAT_Armor";
        requiredAddons[] =
        {
            "KAT_Armor",
            "OPTRE_Core",
            "HSim_Characters_H_Woman_Uniforms",

        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = { };
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
                "camouflage",
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
            class camouflage
            {
                label = "Camouflage";
                alwaysSelectable = 0;
                values[] =
                {
                    "black",
                    "snow",
                };
                class black
                {
                    label = "Black";
                    image = "#(rgb,8,8,3)color(0,0,0,1)";
                };
                class snow
                {
                    label = "Snow";
                    image="#(rgb,8,8,3)color(0.9,0.9,0.9,1)"
                };
            };
        };
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        class KAT_M52D_Jaeger_BDU_Masc
        {
            model = "KAT_M52D_Jaeger_BDUs";
            bodytype = "masc";
            camouflage = "black";
        };
        class KAT_M52D_Jaeger_BDU_Masc_Snow : KAT_M52D_Jaeger_BDU_Masc
        {
            camouflage = "snow";
        };
        class KAT_M52D_Jaeger_BDU_Femme
        {
            model = "KAT_M52D_Jaeger_BDUs";
            bodytype = "femme";
            camouflage = "black";
        };
        class KAT_M52D_Jaeger_BDU_Femme_Snow : KAT_M52D_Jaeger_BDU_Femme
        {
            camouflage = "snow";
        };
    };
};
class CfgWeapons
{
    class ItemInfo;
    class KAT_M56S_BDU;
    class KAT_M52D_Jaeger_BDU_Masc: KAT_M56S_BDU
    {
        displayName = "[Azrael] M52D/J BDU (Masc)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "KAT_M52D_Jaeger_BDU_Masc";
            uniformType = "Neopren";
        };
    };
    class KAT_M52D_Jaeger_BDU_Masc_Snow : KAT_M52D_Jaeger_BDU_Masc
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "KAT_M52D_Jaeger_BDU_Masc_Snow";
            uniformType = "Neopren";
        };
    };
    class KAT_M52D_Jaeger_BDU_Femme: KAT_M56S_BDU
    {
        displayName = "[Azrael] M52D/J BDU (Femme)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "KAT_M52D_Jaeger_BDU_Femme";
            uniformType = "Neopren";
        };
    };
    class KAT_M52D_Jaeger_BDU_Femme_Snow : KAT_M52D_Jaeger_BDU_Femme
    {
        class ItemInfo: ItemInfo
        {
            uniformClass = "KAT_M52D_Jaeger_BDU_Femme_Snow";
            uniformType = "Neopren";
        };
    };
};
class CfgVehicles
{
    class KAT_Base_Uniform;

    class KAT_M52D_Jaeger_BDU_Masc: KAT_Base_Uniform
    {
        uniformClass = "KAT_M52D_Jaeger_BDU_Masc";
        model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            //"insignia",
            //"clan",
            "A_BaseLeg"
        };
        hiddenSelectionsTextures[]=
        {
            "KAT_Armor\_base\uniform\M52D_Jaeger\_textures\masc_black.paa",
            "KAT_Armor\_base\uniform\M52D_Jaeger\_textures\masc_black.paa",
        };
    };
    class KAT_M52D_Jaeger_BDU_Masc_Snow : KAT_M52D_Jaeger_BDU_Masc
    {
        uniformClass = "KAT_M52D_Jaeger_BDU_Masc_Snow";
        hiddenSelectionsTextures[]=
        {
            "KAT_Armor\_base\uniform\M52D_Jaeger\_textures\masc_snow.paa",
            "KAT_Armor\_base\uniform\M52D_Jaeger\_textures\masc_snow.paa",
        };
    };

    class KAT_M52D_Jaeger_BDU_Femme: KAT_Base_Uniform
    {
        uniformClass = "KAT_M52D_Jaeger_BDU_Femme";
        model = "\HSim\Characters_H\Woman\Uniforms\b_soldier_01_woman.p3d";
        hiddenSelections[] =
        {
            "camo",
        };
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\uniform\M52D_Jaeger\_textures\femme_black.paa",
        };
    };
    class KAT_M52D_Jaeger_BDU_Femme_Snow : KAT_M52D_Jaeger_BDU_Femme
    {
        uniformClass = "KAT_M52D_Jaeger_BDU_Femme_Snow";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\uniform\M52D_Jaeger\_textures\femme_snow.paa",
        };
    }
};

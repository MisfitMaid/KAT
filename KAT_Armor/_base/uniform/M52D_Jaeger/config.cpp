class CfgPatches
{
    class KAT_M52D_Jaeger_Uniform
    {
        author = "wlan0";
        addonRootClass = "KAT_Armor";
        requiredAddons[] =
        {
            "KAT_Armor",
            "HSim_Characters_H_Woman_Uniforms",

        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] =
        {
            "KAT_M52D_Jaeger_BDU_Masc",
            "KAT_M52D_Jaeger_BDU_Femme",
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
        };
        class KAT_M52D_Jaeger_BDU_Femme
        {
            model = "KAT_M52D_Jaeger_BDUs";
            bodytype = "femme";
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
    class KAT_M52D_Jaeger_BDU_Femme: KAT_M56S_BDU
    {
        displayName = "[Azrael] M52D/J BDU (Femme)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "KAT_M52D_Jaeger_BDU_Femme";
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
        model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
        hiddenSelections[]=
        {
            "camo",
        };
        hiddenSelectionsTextures[]=
        {
            "KAT_Armor\_base\uniform\M52D_Jaeger\_textures\default.paa",
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
            "KAT_Armor\_base\uniform\M52D_Jaeger\_textures\default.paa",
        };
    };
};

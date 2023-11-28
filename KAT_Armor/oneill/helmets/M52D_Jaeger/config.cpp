class CfgPatches
{
    class KAT_Armor_ONeill
    {
        author = "wlan0";
        addonRootClass = "KAT_Armor";
        requiredAddons[] =
        {
            "KAT_Armor"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] =
        {
            "KAT_M52D_Jaeger_Helmet_ONeill_Blue"
        };
    };
};
class CfgWeapons
{
    class KAT_M52D_Jaeger_Helmet_Default;
    class KAT_M52D_Jaeger_Helmet_ONeill_Blue : KAT_M52D_Jaeger_Helmet_Default
    {
        displayName = "[KAT] M52D/J Helmet [O'Neill]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\oneill\helmets\M52D_Jaeger\_textures\blue.paa"
        };
    };
};

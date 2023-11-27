class CfgPatches
{
    class KAT_Armor_Hayes
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
            "KAT_M56S_Jaeger_Helmet_Hayes_Blue"
        };
    };
};
class CfgWeapons
{
    class KAT_M56S_Jaeger_Helmet_Default;
    class KAT_M56S_Jaeger_Helmet_Hayes_Blue : KAT_M56S_Jaeger_Helmet_Default
    {
        displayName = "[KAT] M56S/J Helmet [Hayes]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\hayes\helmets\M56S_Jaeger\_textures\blue.paa"
        };
    };
};

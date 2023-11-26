class CfgPatches
{
    class KAT_Armor_Shields
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
            "KAT_M56S_Jaeger_Helmet_Shields_Blue"
        };
    };
};
class CfgWeapons
{
    class KAT_M56S_Jaeger_Helmet_Default;
    class KAT_M56S_Jaeger_Helmet_Shields_Blue : KAT_M56S_Jaeger_Helmet_Default
    {
        displayName = "[KAT] M56S/J Helmet [Shields]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\shields\helmets\M56S_Jaeger\_textures\blue.paa"
        };
    };
};

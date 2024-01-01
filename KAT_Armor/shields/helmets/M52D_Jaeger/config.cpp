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
            "KAT_M52D_Jaeger_Helmet_Shields_Blue"
        };
    };
};
class CfgWeapons
{
    class KAT_M52D_Jaeger_Helmet_Default;
    class KAT_M52D_Jaeger_Helmet_Shields_Blue : KAT_M52D_Jaeger_Helmet_Default // named "Blue" for legacy purposes
    {
        displayName = "[Azrael] M52D (Shields)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\shields\helmets\M52D_Jaeger\_textures\blue.paa"
        };
    };
    class KAT_Helmets_Shields_Snow : KAT_M52D_Jaeger_Helmet_Shields_Blue
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\shields\helmets\M52D_Jaeger\_textures\valkyrie_snow.paa"
        };
    };
};

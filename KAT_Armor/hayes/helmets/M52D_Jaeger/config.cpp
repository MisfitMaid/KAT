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
            "KAT_M52D_Jaeger_Helmet_Hayes_Blue"
        };
    };
};
class CfgWeapons
{
    class KAT_M52D_Jaeger_Helmet_Default;
    class KAT_M52D_Jaeger_Helmet_Hayes_Blue : KAT_M52D_Jaeger_Helmet_Default // named "Blue" for legacy purposes
    {
        displayName = "[KAT] M52D/J Helmet [Hayes][Valkyrie]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\hayes\helmets\M52D_Jaeger\_textures\blue.paa"
        };
    };
};

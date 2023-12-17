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
            "KAT_M52D_Jaeger_Helmet_Reid_Blue",
            "KAT_M52D_Jaeger_Helmet_Reid_Berserker",
        };
    };
};
class CfgWeapons
{
    class KAT_M52D_Jaeger_Helmet_Default;
    class KAT_M52D_Jaeger_Helmet_Reid_Blue : KAT_M52D_Jaeger_Helmet_Default // named "Blue" for legacy purposes
    {
        displayName = "[KAT] M52D/J Helmet [Reid][Valkyrie]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\reid\helmets\M52D_Jaeger\_textures\blue.paa"
        };
    };
    class KAT_M52D_Jaeger_Helmet_Reid_Berserker : KAT_M52D_Jaeger_Helmet_Default
    {
        displayName = "[KAT] M52D/J Helmet [Reid][Berserker]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\reid\helmets\M52D_Jaeger\_textures\berserker.paa"
        };
    };
};

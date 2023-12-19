class CfgPatches
{
    class KAT_Armor_Carter
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
            "KAT_M52D_Jaeger_Helmet_Carter_Blue",
            "KAT_M52D_Jaeger_Helmet_Carter_Berserker",
        };
    };
};
class CfgWeapons
{
    class KAT_M52D_Jaeger_Helmet_Default;
    class KAT_M52D_Jaeger_Helmet_Carter_Blue : KAT_M52D_Jaeger_Helmet_Default // named "Blue" for legacy purposes
    {
        displayName = "[Azrael] M52D/J Helmet [Carter][Valkyrie]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\carter\helmets\M52D_Jaeger\_textures\blue.paa"
        };
    };
    class KAT_M52D_Jaeger_Helmet_Carter_Berserker : KAT_M52D_Jaeger_Helmet_Default
    {
        displayName = "[Azrael] M52D/J Helmet [Carter][Berserker]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\carter\helmets\M52D_Jaeger\_textures\berserker.paa"
        };
    };
};

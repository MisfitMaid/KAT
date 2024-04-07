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
        weapons[] = {};
    };
};
class CfgWeapons
{
    class KAT_M52D_Jaeger_Helmet_Default;
    class KAT_M52D_Jaeger_Helmet_Hayes_Berserker : KAT_M52D_Jaeger_Helmet_Default
    {
        displayName = "[Azrael] M52D (Hayes)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\hayes\helmets\M52D_Jaeger\_textures\berserker.paa"
        };
    };


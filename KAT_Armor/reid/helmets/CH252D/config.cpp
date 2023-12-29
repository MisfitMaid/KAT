class CfgPatches
{
    class KAT_Helmets_CH252D_Reid
    {
        author = "wlan0";
        addonRootClass = "KAT_Armor";
        requiredAddons[] =
        {
            "KAT_Armor",
            "OPTRE_Core",
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};
class CfgWeapons
{
    class KAT_CH252D_Helmet_Default;
    class KAT_CH252D_Helmet_Default_dp;
    class KAT_Helmets_Reid : KAT_CH252D_Helmet_Default
    {
        displayName = "[Azrael] CH252D (Reid)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\reid\helmets\CH252D\_textures\helmet_reid.paa",
            "KAT_Armor\reid\helmets\CH252D\_textures\visr_silver.paa",
        };
    };
    class KAT_Helmets_Reid_dp : KAT_CH252D_Helmet_Default_dp
    {
        displayName = "[Azrael] CH252D Depolarized (Reid)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\reid\helmets\CH252D\_textures\helmet_reid.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
        };
    };
};

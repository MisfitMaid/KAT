class CfgPatches
{
    class KAT_Helmets_CH252D_Carter
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
    class KAT_Helmets_Carter : KAT_CH252D_Helmet_Default
    {
        displayName = "[Azrael] CH252D (Carter)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\carter\helmets\CH252D\_textures\helmet_carter.paa",
            "KAT_Armor\carter\helmets\CH252D\_textures\visr_green.paa",
        };
    };
    class KAT_Helmets_Carter_dp : KAT_CH252D_Helmet_Default_dp
    {
        displayName = "[Azrael] CH252D Depolarized (Carter)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\carter\helmets\CH252D\_textures\helmet_carter.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
        };
    };
    class KAT_Helmets_Carter_Snow : KAT_Helmets_Carter
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\carter\helmets\CH252D\_textures\helmet_carter_snow.paa",
            "KAT_Armor\carter\helmets\CH252D\_textures\visr_green.paa",
        };
    };
    class KAT_Helmets_Carter_Snow_dp : KAT_Helmets_Carter_dp
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\carter\helmets\CH252D\_textures\helmet_carter_snow.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
        };
    };
};

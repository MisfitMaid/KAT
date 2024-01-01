class CfgPatches
{
    class KAT_Helmets_CH252D_ONeill
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
    class KAT_Helmets_ONeill : KAT_CH252D_Helmet_Default
    {
        displayName = "[Azrael] CH252D (O'Neill)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\oneill\helmets\CH252D\_textures\helmet_oneill.paa",
            "KAT_Armor\oneill\helmets\CH252D\_textures\visr_gold.paa",
        };
    };
    class KAT_Helmets_ONeill_dp : KAT_CH252D_Helmet_Default_dp
    {
        displayName = "[Azrael] CH252D Depolarized (O'Neill)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\oneill\helmets\CH252D\_textures\helmet_oneill.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
        };
    };
    class KAT_Helmets_ONeill_Snow : KAT_Helmets_ONeill
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\oneill\helmets\CH252D\_textures\helmet_oneill_snow.paa",
            "KAT_Armor\oneill\helmets\CH252D\_textures\visr_gold.paa",
        };
    };
    class KAT_Helmets_ONeill_Snow_dp : KAT_Helmets_ONeill_dp
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\oneill\helmets\CH252D\_textures\helmet_oneill_snow.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
        };
    };
};

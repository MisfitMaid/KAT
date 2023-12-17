class CfgPatches
{
    class KAT_Armor_Cline
    {
        author = "wlan0";
        requiredAddons[] =
        {
            "A3_Characters_F",
            "OPTRE_Core",
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};
class CfgWeapons
{
    class ItemInfo;
    class KAT_M56SR_Helmet_Base;
    class KAT_Helmets_Cline : KAT_M56SR_Helmet_Base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[KAT] M56R Helmet (Cline)";
        author = "wlan0";
        hiddenSelections[] =
        {
            "camo1",
            "camo2",
        };
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\cline\helmets\M56R\_textures\helmet.paa",
            "KAT_Armor\cline\helmets\M56R\_textures\visor.paa",
        };
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] =
            {
                "camo1",
                "camo2",
            };
            hiddenSelectionsTextures[] =
            {
                "KAT_Armor\cline\helmets\M56R\_textures\helmet.paa",
                "KAT_Armor\cline\helmets\M56R\_textures\visor.paa",
            };
        };
    };
};

class CfgPatches
{
    class KAT_Armor_CH252D_Helmet
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
    class ItemInfo;
    class HitpointsProtectionInfo;
    class Face;
    class Head;
    class Neck;
    class OPTRE_UNSC_CH252D_Helmet;
    class OPTRE_UNSC_CH252D_Helmet_Base;

    class KAT_CH252D_Helmet_Default: OPTRE_UNSC_CH252D_Helmet
    {
        author = "wlan0";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        weaponPoolAvailable = 1;
        picture = "MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
        ace_hearing_protection = 5;
        ace_hearing_lowerVolume = 0.25;
        ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ace_overlayCracked = "KAT_Armor\_base\helmets\CH252D\_textures\hud_cracked.paa";
        displayName = "[Azrael] CH252D";
        hiddenSelectionsMaterials[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\odsth3.rvmat",
        };
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\helmet_azrael.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
        };
        class ItemInfo: ItemInfo
        {
            mass=30;
            hiddenSelections[] =
            {
                "camo",
                "camo2",
                "H_Ghillie"
            };
            class HitpointsProtectionInfo: HitpointsProtectionInfo
            {
                class Face: Face
                {
                    armor = 35;
                    hitpointName = "HitFace";
                    passThrough = 0.1;
                };
                class Head: Head
                {
                    armor = 35;
                    hitPointName = "HitHead";
                    passThrough = 0.1;
                };
                class Neck: Neck
                {
                    armor = 35;
                    hitpointName = "HitNeck";
                    passThrough = 0.1;
                };
            };
        };
        allowedFacewear[] = {};
    };

    class OPTRE_UNSC_CH252D_Helmet_dp: OPTRE_UNSC_CH252D_Helmet_Base
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo: HitpointsProtectionInfo
            {
                class Face;
                class Head;
                class Neck;
            };
        };
    };
    class VES_CH252D_dp: OPTRE_UNSC_CH252D_Helmet_dp {};

    class KAT_CH252D_Helmet_Default_dp: VES_CH252D_dp
    {
        author = "wlan0";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        weaponPoolAvailable = 1;
        picture = "MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
        ace_hearing_protection = 5;
        ace_hearing_lowerVolume = 0.25;
        ace_overlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
        ace_overlayCracked = "KAT_Armor\_base\helmets\CH252D\_textures\hud_cracked.paa";
        displayName = "[Azrael] CH252D Depolarized";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\helmet_azrael.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
        };
        hiddenSelectionsMaterials[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\odsth3.rvmat",
            ""
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] =
            {
                "camo",
                "camo2",
                "H_Ghillie"
            };
            class HitpointsProtectionInfo: HitpointsProtectionInfo
            {
                class Face: Face
                {
                    armor = 35;
                    hitpointName = "HitFace";
                    passThrough = 0.1;
                };
                class Head: Head
                {
                    armor = 35;
                    hitPointName = "HitHead";
                    passThrough = 0.1;
                };
                class Neck: Neck
                {
                    armor = 35;
                    hitpointName = "HitNeck";
                    passThrough = 0.1;
                };
            };
        };
    };

    class KAT_Helmets_CH252D_Valhalla_Snow : KAT_CH252D_Helmet_Default
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\helmet_azrael_snow.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
        };
    };
    class KAT_Helmets_CH252D_Valhalla_Snow_dp : KAT_CH252D_Helmet_Default_dp
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\helmet_azrael_snow.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
        };
    };

    // Valkyrie
    class KAT_CH252D_Helmet_Valkyrie : KAT_CH252D_Helmet_Default
    {
        displayName = "[Azrael] CH252D (Valkyrie)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\helmet_valkyrie.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
        };
    };
    class KAT_CH252D_Helmet_Valkyrie_dp : KAT_CH252D_Helmet_Default_dp
    {
        displayName = "[Azrael] CH252D Depolarized (Valkyrie)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\helmet_valkyrie.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
        };
    };

    class KAT_Helmets_CH252D_Valkyrie_Snow : KAT_CH252D_Helmet_Valkyrie
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\helmet_valkyrie_snow.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
        };
    };
    class KAT_Helmets_CH252D_Valkyrie_Snow_dp : KAT_CH252D_Helmet_Valkyrie_dp
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\helmet_valkyrie_snow.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
        };
    };

    // Berserker
    class KAT_CH252D_Helmet_Berserker : KAT_CH252D_Helmet_Default
    {
        displayName = "[Azrael] CH252D (Berserker)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\helmet_berserker.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
        };
    };
    class KAT_CH252D_Helmet_Berserker_dp : KAT_CH252D_Helmet_Default_dp
    {
        displayName = "[Azrael] CH252D Depolarized (Berserker)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\helmet_berserker.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
        };
    };

    class KAT_Helmets_CH252D_Berserker_Snow : KAT_CH252D_Helmet_Berserker
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\helmet_berserker_snow.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_standard.paa",
        };
    };
    class KAT_Helmets_CH252D_Berserker_Snow_dp : KAT_CH252D_Helmet_Berserker_dp
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\helmets\CH252D\_textures\helmet_berserker_snow.paa",
            "KAT_Armor\_base\helmets\CH252D\_textures\visr_clear.paa",
        };
    };
};
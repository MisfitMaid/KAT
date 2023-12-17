class CfgPatches
{
    class KAT_M52D_Jaeger_Armor_Reid
    {
        author = "wlan0";
        addonRootClass = "KAT_M52D_Jaeger_Armor";
        requiredAddons[] = 
        {
            "KAT_M52D_Jaeger_Armor"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] =
        {
            "KAT_M52D_Jaeger_Armor_Reid_Rifleman_Blue",
            "KAT_M52D_Jaeger_Armor_Reid_AutoRifleman_Blue",
            "KAT_M52D_Jaeger_Armor_Reid_Breacher_Blue",
            "KAT_M52D_Jaeger_Armor_Reid_Corpsman_Blue",
            "KAT_M52D_Jaeger_Armor_Reid_Grenadier_Blue",
            "KAT_M52D_Jaeger_Armor_Reid_Sniper_Blue",
            "KAT_M52D_Jaeger_Armor_Reid_Rifleman_Berserker",
            "KAT_M52D_Jaeger_Armor_Reid_AutoRifleman_Berserker",
            "KAT_M52D_Jaeger_Armor_Reid_Breacher_Berserker",
            "KAT_M52D_Jaeger_Armor_Reid_Corpsman_Berserker",
            "KAT_M52D_Jaeger_Armor_Reid_Grenadier_Berserker",
            "KAT_M52D_Jaeger_Armor_Reid_Sniper_Berserker",
        };
    };
};
class CfgWeapons
{
    class ItemInfo;

    class KAT_M52D_Jaeger_Armor_Rifleman;

    /* Valkyrie */
    class KAT_M52D_Jaeger_Armor_Reid_Rifleman_Blue : KAT_M52D_Jaeger_Armor_Rifleman // named "Blue" for legacy purposes
    {
        displayName = "[KAT] M52D/J Rifleman [Reid][Valkyrie]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\legs_valkyrie.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\reid\armor\M52D_Jaeger\_textures\main_valkyrie.paa"
        };
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] =
            {
                // Commented out means visible on the armor
                /*
                    A = Armor component
                    AS = Shoulder plate
                    AP = Belt Pouches
                    APO = Accessories
                */
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                // "A_Base",
                // "A_ChestArmor",
                "A_Ghillie",
                // "A_KneesLeft",
                // "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                // "A_ODST",
                // "A_ShinArmorLeft",
                // "A_ShinArmorRight",
                "A_TacPad",
                // "A_ThighArmorLeft",
                // "A_ThighArmorRight",
                // "AS_BaseLeft",
                // "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                // "AS_ODSTRight",
                // "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                "AP_GL",
                // "AP_Knife",
                "AP_MGThigh",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                // "AP_Thigh",
                // "AP_Frag",
                // "AP_Smoke",
                "APO_AR",
                // "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    class KAT_M52D_Jaeger_Armor_Reid_AutoRifleman_Blue : KAT_M52D_Jaeger_Armor_Reid_Rifleman_Blue // named "Blue" for legacy purposes
    {
        displayName = "[KAT] M52D/J AutoRifleman [Reid][Valkyrie]";
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] =
            {
                // Commented out means visible on the armor
                /*
                    A = Armor component
                    AS = Shoulder plate
                    AP = Belt Pouches
                    APO = Accessories
                */
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                // "A_Base",
                // "A_ChestArmor",
                "A_Ghillie",
                // "A_KneesLeft",
                // "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                // "A_ODST",
                // "A_ShinArmorLeft",
                // "A_ShinArmorRight",
                "A_TacPad",
                // "A_ThighArmorLeft",
                // "A_ThighArmorRight",
                // "AS_BaseLeft",
                // "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                // "AS_ODSTRight",
                // "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                "AP_GL",
                // "AP_Knife",
                // "AP_MGThigh",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                // "AP_Thigh",
                // "AP_Frag",
                // "AP_Smoke",
                // "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    class KAT_M52D_Jaeger_Armor_Reid_Breacher_Blue : KAT_M52D_Jaeger_Armor_Reid_Rifleman_Blue // named "Blue" for legacy purposes
    {
        displayName = "[KAT] M52D/J Breacher [Reid][Valkyrie]";
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] =
            {
                // Commented out means visible on the armor
                /*
                    A = Armor component
                    AS = Shoulder plate
                    AP = Belt Pouches
                    APO = Accessories
                */
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                // "A_Base",
                // "A_ChestArmor",
                "A_Ghillie",
                // "A_KneesLeft",
                // "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                // "A_ODST",
                // "A_ShinArmorLeft",
                // "A_ShinArmorRight",
                "A_TacPad",
                // "A_ThighArmorLeft",
                // "A_ThighArmorRight",
                // "AS_BaseLeft",
                // "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                // "AS_ODSTRight",
                // "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                // "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                // "AP_Thigh",
                // "AP_Frag",
                // "AP_Smoke",
                "APO_AR",
                // "APO_BR",
                // "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    class KAT_M52D_Jaeger_Armor_Reid_Corpsman_Blue : KAT_M52D_Jaeger_Armor_Reid_Rifleman_Blue // named "Blue" for legacy purposes
    {
        displayName = "[KAT] M52D/J Corpsman [Reid][Valkyrie]";
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] =
            {
                // Commented out means visible on the armor
                /*
                    A = Armor component
                    AS = Shoulder plate
                    AP = Belt Pouches
                    APO = Accessories
                */
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                // "A_Base",
                // "A_ChestArmor",
                "A_Ghillie",
                // "A_KneesLeft",
                // "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                // "A_ODST",
                // "A_ShinArmorLeft",
                // "A_ShinArmorRight",
                // "A_TacPad",
                // "A_ThighArmorLeft",
                // "A_ThighArmorRight",
                // "AS_BaseLeft",
                // "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                // "AS_ODSTRight",
                // "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                "AP_GL",
                // "AP_Knife",
                "AP_MGThigh",
                "AP_Pack",
                // "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                // "AP_SMG",
                "AP_Sniper",
                // "AP_Thigh",
                "AP_Frag",
                // "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    class KAT_M52D_Jaeger_Armor_Reid_Grenadier_Blue : KAT_M52D_Jaeger_Armor_Reid_Rifleman_Blue // named "Blue" for legacy purposes
    {
        displayName = "[KAT] M52D/J Grenadier [Reid][Valkyrie]";
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] =
            {
                // Commented out means visible on the armor
                /*
                    A = Armor component
                    AS = Shoulder plate
                    AP = Belt Pouches
                    APO = Accessories
                */
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                // "A_Base",
                // "A_ChestArmor",
                "A_Ghillie",
                // "A_KneesLeft",
                // "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                // "A_ODST",
                // "A_ShinArmorLeft",
                // "A_ShinArmorRight",
                "A_TacPad",
                // "A_ThighArmorLeft",
                // "A_ThighArmorRight",
                // "AS_BaseLeft",
                // "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                // "AS_ODSTRight",
                // "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                // "AP_GL",
                // "AP_Knife",
                "AP_MGThigh",
                "AP_Pack",
                // "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                // "AP_Thigh",
                "AP_Frag",
                // "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    class KAT_M52D_Jaeger_Armor_Reid_Sniper_Blue : KAT_M52D_Jaeger_Armor_Reid_Rifleman_Blue // named "Blue" for legacy purposes
    {
        displayName = "[KAT] M52D/J Sniper [Reid][Valkyrie]";
        class ItemInfo : ItemInfo
        {
            hiddenSelections[] =
            {
                // Commented out means visible on the armor
                /*
                    A = Armor component
                    AS = Shoulder plate
                    AP = Belt Pouches
                    APO = Accessories
                */
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                // "A_Base",
                // "A_ChestArmor",
                "A_Ghillie",
                // "A_KneesLeft",
                // "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                // "A_ODST",
                // "A_ShinArmorLeft",
                // "A_ShinArmorRight",
                "A_TacPad",
                // "A_ThighArmorLeft",
                // "A_ThighArmorRight",
                // "AS_BaseLeft",
                // "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                // "AS_ODSTRight",
                // "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                // "AP_Canteen",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_Pack",
                // "AP_Pistol",
                // "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                // "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
                // "APO_Knife",
                "APO_SMG",
                // "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };

    /* Berserker */
    class KAT_M52D_Jaeger_Armor_Reid_Rifleman_Berserker : KAT_M52D_Jaeger_Armor_Reid_Rifleman_Blue
    {
        displayName = "[KAT] M52D/J Rifleman [Reid][Berserker]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\legs_berserker.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\reid\armor\M52D_Jaeger\_textures\main_berserker.paa"
        };
    };
    class KAT_M52D_Jaeger_Armor_Reid_AutoRifleman_Berserker : KAT_M52D_Jaeger_Armor_Reid_AutoRifleman_Blue
    {
        displayName = "[KAT] M52D/J AutoRifleman [Reid][Berserker]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\legs_berserker.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\reid\armor\M52D_Jaeger\_textures\main_berserker.paa"
        };
    };
    class KAT_M52D_Jaeger_Armor_Reid_Breacher_Berserker : KAT_M52D_Jaeger_Armor_Reid_Breacher_Blue
    {
        displayName = "[KAT] M52D/J Breacher [Reid][Berserker]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\legs_berserker.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\reid\armor\M52D_Jaeger\_textures\main_berserker.paa"
        };
    };
    class KAT_M52D_Jaeger_Armor_Reid_Corpsman_Berserker : KAT_M52D_Jaeger_Armor_Reid_Corpsman_Blue
    {
        displayName = "[KAT] M52D/J Corpsman [Reid][Berserker]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\legs_berserker.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\reid\armor\M52D_Jaeger\_textures\main_berserker.paa"
        };
    };
    class KAT_M52D_Jaeger_Armor_Reid_Grenadier_Berserker : KAT_M52D_Jaeger_Armor_Reid_Grenadier_Blue
    {
        displayName = "[KAT] M52D/J Grenadier [Reid][Berserker]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\legs_berserker.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\reid\armor\M52D_Jaeger\_textures\main_berserker.paa"
        };
    };
    class KAT_M52D_Jaeger_Armor_Reid_Sniper_Berserker : KAT_M52D_Jaeger_Armor_Reid_Sniper_Blue
    {
        displayName = "[KAT] M52D/J Sniper [Reid][Berserker]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\legs_berserker.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\reid\armor\M52D_Jaeger\_textures\main_berserker.paa"
        };
    };
};

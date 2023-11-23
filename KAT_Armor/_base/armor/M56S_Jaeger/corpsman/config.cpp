class CfgPatches
{
    class KAT_M56S_Jaeger_Armor_Corpsman
    {
        author = "wlan0";
        addonRootClass = "KAT_M56S_Jaeger_Armor";
        requiredAddons[] = 
        {
            "KAT_M56S_Jaeger_Armor"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};
class CfgWeapons
{
    class KAT_M56S_Jaeger_Armor_Base;
    class KAT_M56S_Jaeger_Armor_Rifleman : KAT_M56S_Jaeger_Armor_Base
    {
        class ItemInfo;
    };
    class KAT_M56S_Jaeger_Armor_Corpsman: KAT_M56S_Jaeger_Armor_Rifleman
    {
        displayName = "[KAT] M56S/J Corpsman";
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
            // "AS_ODSTLeft",
            // "AS_ODSTRight",
            "AS_ODSTSniperLeft",
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
                // "AS_ODSTLeft",
                // "AS_ODSTRight",
                "AS_ODSTSniperLeft",
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
    class KAT_M56S_Jaeger_Armor_Corpsman_Red : KAT_M56S_Jaeger_Armor_Corpsman
    {
        displayName = "[KAT] M56S/J Corpsman [Red]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Legs\legs_red.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Main\odst_red.paa"
        };
    };
    class KAT_M56S_Jaeger_Armor_Corpsman_Blue : KAT_M56S_Jaeger_Armor_Corpsman
    {
        displayName = "[KAT] M56S/J Corpsman [Blue]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Legs\legs_blue.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Main\odst_blue.paa"
        };
    };
    class KAT_M56S_Jaeger_Armor_Corpsman_Green : KAT_M56S_Jaeger_Armor_Corpsman
    {
        displayName = "[KAT] M56S/J Corpsman [Green]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Legs\legs_green.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Main\odst_green.paa"
        };
    };
    class KAT_M56S_Jaeger_Armor_Corpsman_Yellow : KAT_M56S_Jaeger_Armor_Corpsman
    {
        displayName = "[KAT] M56S/J Corpsman [Yellow]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Legs\legs_odst.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Main\odst_yellow.paa"
        };
    };
    class KAT_M56S_Jaeger_Armor_Corpsman_Purple : KAT_M56S_Jaeger_Armor_Corpsman
    {
        displayName = "[KAT] M56S/J Corpsman [Purple]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Legs\legs_odst.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Main\odst_purple.paa"
        };
    };
};

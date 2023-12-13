class CfgPatches
{
    class KAT_M52D_Jaeger_Armor_Grenadier
    {
        author = "wlan0";
        addonRootClass = "KAT_M52D_Jaeger_Armor";
        requiredAddons[] = 
        {
            "KAT_M52D_Jaeger_Armor"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};
class CfgWeapons
{
    class KAT_M52D_Jaeger_Armor_Base;
    class KAT_M52D_Jaeger_Armor_Rifleman : KAT_M52D_Jaeger_Armor_Base
    {
        class ItemInfo;
    };
    class KAT_M52D_Jaeger_Armor_Grenadier: KAT_M52D_Jaeger_Armor_Rifleman
    {
        displayName = "[KAT] M52D/J Grenadier";
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
            // "AS_ODSTLeft",
            // "AS_ODSTRight",
            "AS_ODSTSniperLeft",
            "AS_ODSTSniperRight",
            "AS_SmallLeft",
            "AS_SmallRight",
            "AP_AR",
            "AP_BR",
            "AP_Canteen",
            // "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_Pack",
            "AP_Pistol",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "AP_Thigh",
            // "AP_Frag",
            // "AP_Smoke",
            // "APO_AR",
            "APO_BR",
            // "APO_Knife",
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
                // "AS_ODSTLeft",
                // "AS_ODSTRight",
                "AS_ODSTSniperLeft",
                "AS_ODSTSniperRight",
                "AS_SmallLeft",
                "AS_SmallRight",
                "AP_AR",
                "AP_BR",
                "AP_Canteen",
                // "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                // "AP_Frag",
                // "AP_Smoke",
                // "APO_AR",
                "APO_BR",
                // "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    class KAT_M52D_Jaeger_Armor_Grenadier_Blue : KAT_M52D_Jaeger_Armor_Grenadier // named "Blue" for legacy purposes
    {
        displayName = "[KAT] M52D/J Grenadier [Valkyrie]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\legs_valkyrie.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Main\odst_valkyrie.paa"
        };
    };
    // class KAT_M52D_Jaeger_Armor_Grenadier_Berserker : KAT_M52D_Jaeger_Armor_Grenadier
    // {
    //     displayName = "[KAT] M52D/J Grenadier [Berserker]";
    //     hiddenSelectionsTextures[] =
    //     {
    //         "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
    //         "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
    //         "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\legs_berserker.paa",
    //         "optre_unsc_units\army\data\ghillie_desert_co.paa",
    //         "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Main\odst_berserker.paa"
    //     };
    // };
};

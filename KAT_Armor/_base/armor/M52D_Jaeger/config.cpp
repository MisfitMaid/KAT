class CfgPatches
{
    class KAT_M52D_Jaeger_Armor
    {
        author = "wlan0";
        addonRootClass = "KAT_Armor";
        requiredAddons[] =
        {
            "KAT_Armor",
            "OPTRE_ACE_Compat",
            "OPTRE_FC_ACE_Compat"
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] = {};
    };
};
class CfgWeapons
{
    class ItemInfo;
    class KAT_Armor__Base;
    class KAT_M52D_Jaeger_Armor_Base : KAT_ARMOR__Base
    {
        dlc = "KAT";
        author = "wlan0";
        displayName = "[Azrael] M52D (Base)";
        model = "\OPTRE_UNSC_Units\Army\armor.p3d";
        picture = "\OPTRE_UNSC_Units\Army\icons\ODST_Vest";
        vestType = "Rebreather";
        class ItemInfo: ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
            hiddenSelections[] =
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_Base",
                "A_ChestArmor",
                "A_Ghillie",
                "A_KneesLeft",
                "A_KneesRight",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_ODST",
                "A_ShinArmorLeft",
                "A_ShinArmorRight",
                "A_TacPad",
                "A_ThighArmorLeft",
                "A_ThighArmorRight",
                "AS_BaseLeft",
                "AS_BaseRight",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
                "AS_ODSTLeft",
                "AS_ODSTRight",
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
                "AP_AR",
                "AP_Pack",
                "AP_Pistol",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "AP_Thigh",
                "AP_Frag",
                "AP_Smoke",
                "APO_AR",
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
            hiddenSelectionsTextures[] =
            {
                "OPTRE_UNSC_Units\Army\data\vest_odst_co.paa",
                "OPTRE_UNSC_Units\Army\data\armor_odst_co.paa",
                "OPTRE_UNSC_Units\Army\data\legs_odst_co.paa",
                "OPTRE_UNSC_Units\Army\data\ghillie_desert_co.paa",
                "OPTRE_UNSC_Units\Army\data\odst_armor_co.paa"
            };
            hiddenSelectionsMaterials[] =
            {
                "KAT_Armor\_base\armor\M52D_Jaeger\_textures\vest.rvmat",
                "KAT_Armor\_base\armor\M52D_Jaeger\_textures\armor.rvmat",
                "KAT_Armor\_base\armor\M52D_Jaeger\_textures\legs.rvmat",
                "",
                "KAT_Armor\_base\armor\M52D_Jaeger\_textures\odst.rvmat"
            };
        };
    };
    class KAT_M52D_Jaeger_Armor_Rifleman : KAT_M52D_Jaeger_Armor_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[Azrael] M52D (Azrael)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\Black\legs_generic.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Main\Black\odst_generic.paa"
        };
        class ItemInfo: ItemInfo
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
                "AP_GL",
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
    class KAT_Armor_M52D_Valhalla_Snow : KAT_M52D_Jaeger_Armor_Rifleman
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst_snow.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst_snow.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\Snow\legs_generic.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Main\Snow\odst_generic.paa"
        };
    };
    class KAT_M52D_Jaeger_Armor_Rifleman_Blue : KAT_M52D_Jaeger_Armor_Rifleman // named "Blue" for legacy purposes
    {
        displayName = "[Azrael] M52D (Valkyrie)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\Black\legs_valkyrie.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Main\Black\odst_valkyrie.paa"
        };
    };
    class KAT_Armor_M52D_Valkyrie_Snow : KAT_M52D_Jaeger_Armor_Rifleman_Blue
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst_snow.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst_snow.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\Snow\legs_valkyrie.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Main\Snow\odst_valkyrie.paa"
        };
    };
    class KAT_M52D_Jaeger_Armor_Rifleman_Berserker : KAT_M52D_Jaeger_Armor_Rifleman
    {
        displayName = "[Azrael] M52D (Berserker)";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\Black\legs_berserker.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Main\Black\odst_berserker.paa"
        };
        class ItemInfo: ItemInfo
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
                // "AP_BR",
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
                "AP_Thigh",
                // "AP_Frag",
                // "AP_Smoke",
                "APO_AR",
                "APO_BR",
                // "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    class KAT_Armor_M52D_Berserker_Snow : KAT_M52D_Jaeger_Armor_Rifleman_Berserker
    {
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst_snow.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst_snow.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\Snow\legs_berserker.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Main\Snow\odst_berserker.paa"
        };
    };
};

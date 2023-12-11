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
        weapons[] =
        {
            "KAT_M52D_Jaeger_Armor_Rifleman",
            "KAT_M52D_Jaeger_Armor_Rifleman_Blue",
            "KAT_M52D_Jaeger_Armor_Rifleman_Berserker",
        };
    };
};
class XtdGearModels
{
    class CfgWeapons
    {
        class KAT_M52D_Jaeger_Vests
        {
            label = "Jaeger";
            options[] =
            {
                "vestmodel",
                "squad",
                "role",
            };
            class vestmodel
            {
                alwaysSelectable = 1;
                label = "Model";
                values[] =
                {
                    "default",
                    "oneill",
                    "hayes",
                    "reid",
                };
                class default
                {
                    label = "Default";
                };
                class oneill
                {
                    label = "O'Neill";
                };
                class hayes
                {
                    label = "Hayes";
                };
                class reid
                {
                    label = "Reid";
                };
            };
            class squad
            {
                label = "Squad";
                alwaysSelectable = 1;
                values[] =
                {
                    "generic",
                    "valkyrie",
                    "berserker",
                };
                class generic
                {
                    label = "No Squad";
                    image = "#(rgb,8,8,3)color(0,0,0,1)";
                };
                class valkyrie
                {
                    label = "Valkyrie";
                    image = "#(rgb,8,8,3)color(0.0,0,0.51,1)";
                };
                class berserker
                {
                    label = "Berserker";
                    image = "#(rgb,8,8,3)color(0.91,0.56,0.09,1)";
                };
            };
            class role
            {
                alwaysSelectable = 1;
                label = "Role";
                values[] =
                {
                    "default",
                    "ar",
                    "breach",
                    "corpsman",
                    "gren",
                    "sniper"
                };
                class default
                {
                    label = "Rifleman";
                };
                class ar
                {
                    label = "Autorifleman";
                };
                class breach
                {
                    label = "Breacher";
                };
                class corpsman
                {
                    label = "Corpsman";
                };
                class gren
                {
                    label = "Grenadier";
                };
                class sniper
                {
                    label = "Sniper";
                };
            };
        };
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        /* Default (Rifleman) */
        class KAT_M52D_Jaeger_Armor_Rifleman
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "generic";
            role = "default";
        };
        class KAT_M52D_Jaeger_Armor_Rifleman_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "valkyrie";
            role = "default";
        };
        class KAT_M52D_Jaeger_Armor_Rifleman_Berserker
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "berserker";
            role = "default";
        };

        /* Autorifleman */
        class KAT_M52D_Jaeger_Armor_AutoRifleman
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "generic";
            role = "ar";
        };
        class KAT_M52D_Jaeger_Armor_AutoRifleman_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "valkyrie";
            role = "ar";
        };
        class KAT_M52D_Jaeger_Armor_AutoRifleman_Berserker
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "berserker";
            role = "ar";
        };

        /* Breacher */
        class KAT_M52D_Jaeger_Armor_Breacher
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "generic";
            role = "breach";
        };
        class KAT_M52D_Jaeger_Armor_Breacher_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "valkyrie";
            role = "breach";
        };
        class KAT_M52D_Jaeger_Armor_Breacher_Berserker
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "berserker";
            role = "breach";
        };

        /* Corpsman */
        class KAT_M52D_Jaeger_Armor_Corpsman
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "generic";
            role = "corpsman";
        };
        class KAT_M52D_Jaeger_Armor_Corpsman_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "valkyrie";
            role = "corpsman";
        };
        class KAT_M52D_Jaeger_Armor_Corpsman_Berserker
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "berserker";
            role = "corpsman";
        };

        /* Grenadier */
        class KAT_M52D_Jaeger_Armor_Grenadier
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "generic";
            role = "gren";
        };
        class KAT_M52D_Jaeger_Armor_Grenadier_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "valkyrie";
            role = "gren";
        };
        class KAT_M52D_Jaeger_Armor_Grenadier_Berserker
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "berserker";
            role = "gren";
        };

        /* Sniper */
        class KAT_M52D_Jaeger_Armor_Sniper
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "generic";
            role = "sniper";
        };
        class KAT_M52D_Jaeger_Armor_Sniper_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "valkyrie";
            role = "sniper";
        };
        class KAT_M52D_Jaeger_Armor_Sniper_Berserker
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "default";
            squad = "berserker";
            role = "sniper";
        };

        /* Custom: O'Neill */
        class KAT_M52D_Jaeger_Armor_ONeill_Rifleman_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "oneill";
            squad = "valkyrie";
            role = "default";
        };
        class KAT_M52D_Jaeger_Armor_ONeill_AutoRifleman_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "oneill";
            squad = "valkyrie";
            role = "ar";
        };
        class KAT_M52D_Jaeger_Armor_ONeill_Breacher_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "oneill";
            squad = "valkyrie";
            role = "breach";
        };
        class KAT_M52D_Jaeger_Armor_ONeill_Corpsman_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "oneill";
            squad = "valkyrie";
            role = "corpsman";
        };
        class KAT_M52D_Jaeger_Armor_ONeill_Grenadier_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "oneill";
            squad = "valkyrie";
            role = "gren";
        };
        class KAT_M52D_Jaeger_Armor_ONeill_Sniper_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "oneill";
            squad = "valkyrie";
            role = "sniper";
        };

        /* Custom: Hayes */
        class KAT_M52D_Jaeger_Armor_Hayes_Corpsman_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "hayes";
            squad = "valkyrie";
            role = "corpsman";
        };

        /* Custom: Reid */
        class KAT_M52D_Jaeger_Armor_Reid_Rifleman_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "reid";
            squad = "valkyrie";
            role = "default";
        };
        class KAT_M52D_Jaeger_Armor_Reid_AutoRifleman_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "reid";
            squad = "valkyrie";
            role = "ar";
        };
        class KAT_M52D_Jaeger_Armor_Reid_Breacher_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "reid";
            squad = "valkyrie";
            role = "breach";
        };
        class KAT_M52D_Jaeger_Armor_Reid_Corpsman_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "reid";
            squad = "valkyrie";
            role = "corpsman";
        };
        class KAT_M52D_Jaeger_Armor_Reid_Grenadier_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "reid";
            squad = "valkyrie";
            role = "gren";
        };
        class KAT_M52D_Jaeger_Armor_Reid_Sniper_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_M52D_Jaeger_Vests";
            vestmodel = "reid";
            squad = "valkyrie";
            role = "sniper";
        };
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
        displayName = "[KAT] M52D/J Vest [Base]";
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
        displayName = "[KAT] M52D/J Rifleman";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\legs_generic.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Main\odst_generic.paa"
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
    class KAT_M52D_Jaeger_Armor_Rifleman_Blue : KAT_M52D_Jaeger_Armor_Rifleman // named "Blue" for legacy purposes
    {
        displayName = "[KAT] M52D/J Rifleman [Valkyrie]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\legs_valkyrie.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Main\odst_valkyrie.paa"
        };
    };
    class KAT_M52D_Jaeger_Armor_Rifleman_Berserker : KAT_M52D_Jaeger_Armor_Rifleman
    {
        displayName = "[KAT] M52D/J Rifleman [Berserker]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Legs\legs_berserker.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M52D_Jaeger\_textures\Main\odst_berserker.paa"
        };
    };
};

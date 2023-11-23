class CfgPatches
{
    class KAT_M56S_Jaeger_Armor
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
            "KAT_M56S_Jaeger_Armor_Rifleman",
            "KAT_M56S_Jaeger_Armor_Rifleman_Red",
            "KAT_M56S_Jaeger_Armor_Rifleman_Blue",
            "KAT_M56S_Jaeger_Armor_Rifleman_Green",
            "KAT_M56S_Jaeger_Armor_Rifleman_Yellow",
            "KAT_M56S_Jaeger_Armor_Rifleman_Purple"
        };
    };
};
class XtdGearModels
{
    class CfgWeapons
    {
        class KAT_M56S_Jaeger_Vests
        {
            label = "Jaeger";
            options[] =
            {
                "role",
                "color"
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
            class color
            {
                label = "Color";
                alwaysSelectable = 1;
                values[] =
                {
                    "default",
                    "red",
                    "green",
                    "blue",
                    "yellow",
                    "purple"
                };
                class default
                {
                    label = "Default";
                    image = "#(rgb,8,8,3)color(0,0,0,1)";
                };
                class red
                {
                    label = "Red";
                    image = "#(rgb,8,8,3)color(0.8,0,0,1)";
                };
                class green
                {
                    label = "Green";
                    image = "#(rgb,8,8,3)color(0.0,0.51,0,1)";
                };
                class blue
                {
                    label = "Blue";
                    image = "#(rgb,8,8,3)color(0.0,0,0.51,1)";
                };
                class yellow
                {
                    label = "Yellow";
                    image = "#(rgb,8,8,3)color(0.80,0.8,0,1)";
                };
                class purple
                {
                    label = "Purple";
                    image = "#(rgb,8,8,3)color(0.263,0.067,0.718,1)";
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
        class KAT_M56S_Jaeger_Armor_Rifleman
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "default";
            color = "default";
        };
        class KAT_M56S_Jaeger_Armor_Rifleman_Red
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "default";
            color = "red";
        };
        class KAT_M56S_Jaeger_Armor_Rifleman_Blue
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "default";
            color = "blue";
        };
        class KAT_M56S_Jaeger_Armor_Rifleman_Green
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "default";
            color = "green";
        };
        class KAT_M56S_Jaeger_Armor_Rifleman_Yellow
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "default";
            color = "yellow";
        };
        class KAT_M56S_Jaeger_Armor_Rifleman_Purple
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "default";
            color = "purple";
        };

        /* Autorifleman */
        class KAT_M56S_Jaeger_Armor_AutoRifleman
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "ar";
            color = "default";
        };
        class KAT_M56S_Jaeger_Armor_AutoRifleman_Red
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "ar";
            color = "red";
        };
        class KAT_M56S_Jaeger_Armor_AutoRifleman_Blue
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "ar";
            color = "blue";
        };
        class KAT_M56S_Jaeger_Armor_AutoRifleman_Green
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "ar";
            color = "green";
        };
        class KAT_M56S_Jaeger_Armor_AutoRifleman_Yellow
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "ar";
            color = "yellow";
        };
        class KAT_M56S_Jaeger_Armor_AutoRifleman_Purple
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "ar";
            color = "purple";
        };

        /* Breacher */
        class KAT_M56S_Jaeger_Armor_Breacher
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "breach";
            color = "default";
        };
        class KAT_M56S_Jaeger_Armor_Breacher_Red
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "breach";
            color = "red";
        };
        class KAT_M56S_Jaeger_Armor_Breacher_Blue
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "breach";
            color = "blue";
        };
        class KAT_M56S_Jaeger_Armor_Breacher_Green
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "breach";
            color = "green";
        };
        class KAT_M56S_Jaeger_Armor_Breacher_Yellow
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "breach";
            color = "yellow";
        };
        class KAT_M56S_Jaeger_Armor_Breacher_Purple
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "breach";
            color = "purple";
        };

        /* Corpsman */
        class KAT_M56S_Jaeger_Armor_Corpsman
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "corpsman";
            color = "default";
        };
        class KAT_M56S_Jaeger_Armor_Corpsman_Red
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "corpsman";
            color = "red";
        };
        class KAT_M56S_Jaeger_Armor_Corpsman_Blue
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "corpsman";
            color = "blue";
        };
        class KAT_M56S_Jaeger_Armor_Corpsman_Green
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "corpsman";
            color = "green";
        };
        class KAT_M56S_Jaeger_Armor_Corpsman_Yellow
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "corpsman";
            color = "yellow";
        };
        class KAT_M56S_Jaeger_Armor_Corpsman_Purple
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "corpsman";
            color = "purple";
        };

        /* Grenadier */
        class KAT_M56S_Jaeger_Armor_Grenadier
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "gren";
            color = "default";
        };
        class KAT_M56S_Jaeger_Armor_Grenadier_Red
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "gren";
            color = "red";
        };
        class KAT_M56S_Jaeger_Armor_Grenadier_Blue
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "gren";
            color = "blue";
        };
        class KAT_M56S_Jaeger_Armor_Grenadier_Green
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "gren";
            color = "green";
        };
        class KAT_M56S_Jaeger_Armor_Grenadier_Yellow
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "gren";
            color = "yellow";
        };
        class KAT_M56S_Jaeger_Armor_Grenadier_Purple
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "gren";
            color = "purple";
        };

        /* Sniper */
        class KAT_M56S_Jaeger_Armor_Sniper
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "sniper";
            color = "default";
        };
        class KAT_M56S_Jaeger_Armor_Sniper_Red
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "sniper";
            color = "red";
        };
        class KAT_M56S_Jaeger_Armor_Sniper_Blue
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "sniper";
            color = "blue";
        };
        class KAT_M56S_Jaeger_Armor_Sniper_Green
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "sniper";
            color = "green";
        };
        class KAT_M56S_Jaeger_Armor_Sniper_Yellow
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "sniper";
            color = "yellow";
        };
        class KAT_M56S_Jaeger_Armor_Sniper_Purple
        {
            model = "KAT_M56S_Jaeger_Vests";
            role = "sniper";
            color = "purple";
        };
    };
};
class CfgWeapons
{
    class ItemInfo;
    class KAT_Armor__Base;
    class KAT_M56S_Jaeger_Armor_Base : KAT_ARMOR__Base
    {
        dlc = "KAT";
        author = "wlan0";
        displayName = "[KAT] M56R/J Vest [Base]";
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
                "KAT_Armor\_base\armor\M56S_Jaeger\_textures\vest.rvmat",
                "KAT_Armor\_base\armor\M56S_Jaeger\_textures\armor.rvmat",
                "KAT_Armor\_base\armor\M56S_Jaeger\_textures\legs.rvmat",
                "",
                "KAT_Armor\_base\armor\M56S_Jaeger\_textures\odst.rvmat"
            };
        };
    };
    class KAT_M56S_Jaeger_Armor_Rifleman : KAT_M56S_Jaeger_Armor_Base
    {
        scope = 2;
        scopeArsenal = 2;
        displayName = "[KAT] M56S/J Rifleman";
        hiddenSelections[] =
        {
            "camo",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "A_KneesMarLeft",
            "A_KneesMarRight",
            "A_Ghillie",
            "A_TacPad",
            "AS_LargeLeft",
            "AS_LargeRight",
            "AS_MediumLeft",
            "AS_MediumRight",
            "AS_ODSTCQBLeft",
            "AS_ODSTCQBRight",
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
            "APO_BR",
            "APO_Knife",
            "APO_SMG",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Legs\legs_odst.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Main\odst_white.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] =
            {
                "camo",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "A_KneesMarLeft",
                "A_KneesMarRight",
                "A_Ghillie",
                "A_TacPad",
                "AS_LargeLeft",
                "AS_LargeRight",
                "AS_MediumLeft",
                "AS_MediumRight",
                "AS_ODSTCQBLeft",
                "AS_ODSTCQBRight",
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
                "APO_BR",
                "APO_Knife",
                "APO_SMG",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    class KAT_M56S_Jaeger_Armor_Rifleman_Red : KAT_M56S_Jaeger_Armor_Rifleman
    {
        displayName = "[KAT] M56S/J Rifleman [Red]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Legs\legs_red.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Main\odst_red.paa"
        };
    };
    class KAT_M56S_Jaeger_Armor_Rifleman_Blue : KAT_M56S_Jaeger_Armor_Rifleman
    {
        displayName = "[KAT] M56S/J Rifleman [Blue]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Legs\legs_blue.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Main\odst_blue.paa"
        };
    };
    class KAT_M56S_Jaeger_Armor_Rifleman_Green : KAT_M56S_Jaeger_Armor_Rifleman
    {
        displayName = "[KAT] M56S/J Rifleman [Green]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Legs\legs_green.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Main\odst_green.paa"
        };
    };
    class KAT_M56S_Jaeger_Armor_Rifleman_Yellow : KAT_M56S_Jaeger_Armor_Rifleman
    {
        displayName = "[KAT] M56S/J Rifleman [Yellow]";
        hiddenSelectionsTextures[] =
        {
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Vest\vest_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Armor\armor_odst.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Legs\legs_odst.paa",
            "optre_unsc_units\army\data\ghillie_desert_co.paa",
            "KAT_Armor\_base\armor\M56S_Jaeger\_textures\Main\odst_yellow.paa"
        };
    };
    class KAT_M56S_Jaeger_Armor_Rifleman_Purple : KAT_M56S_Jaeger_Armor_Rifleman
    {
        displayName = "[KAT] M56S/J Rifleman [Purple]";
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

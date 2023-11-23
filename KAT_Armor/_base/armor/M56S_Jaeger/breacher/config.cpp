class CfgPatches
{
    class KAT_M56S_Jaeger_Armor_Breacher
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
    /* Default */
    class KAT_M56S_Jaeger_Armor_Breacher: KAT_M56S_Jaeger_Armor_Rifleman
    {
        displayName = "[KAT] M56S/J Breacher";
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
            "APO_SMG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        class ItemInfo : ItemInfo
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
                "APO_SMG",
                "AP_SMG",
                "AP_Sniper",
                "APO_BR",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    /* Red */
    class KAT_M56S_Jaeger_Armor_Rifleman_Red : KAT_M56S_Jaeger_Armor_Rifleman { };
    class KAT_M56S_Jaeger_Armor_Breacher_Red : KAT_M56S_Jaeger_Armor_Rifleman_Red
    {
        displayName = "[KAT] M56S/J Breacher [Red]";
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
            "APO_SMG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        class ItemInfo : ItemInfo
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
                "APO_SMG",
                "AP_SMG",
                "AP_Sniper",
                "APO_BR",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    /* Blue */
    class KAT_M56S_Jaeger_Armor_Rifleman_Blue : KAT_M56S_Jaeger_Armor_Rifleman { };
    class KAT_M56S_Jaeger_Armor_Breacher_Blue : KAT_M56S_Jaeger_Armor_Rifleman_Blue
    {
        displayName = "[KAT] M56S/J Breacher [Blue]";
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
            "APO_SMG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        class ItemInfo : ItemInfo
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
                "APO_SMG",
                "AP_SMG",
                "AP_Sniper",
                "APO_BR",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    /* Green */
    class KAT_M56S_Jaeger_Armor_Rifleman_Green : KAT_M56S_Jaeger_Armor_Rifleman { };
    class KAT_M56S_Jaeger_Armor_Breacher_Green : KAT_M56S_Jaeger_Armor_Rifleman_Green
    {
        displayName = "[KAT] M56S/J Breacher [Green]";
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
            "APO_SMG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        class ItemInfo : ItemInfo
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
                "APO_SMG",
                "AP_SMG",
                "AP_Sniper",
                "APO_BR",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    /* Yellow */
    class KAT_M56S_Jaeger_Armor_Rifleman_Yellow : KAT_M56S_Jaeger_Armor_Rifleman { };
    class KAT_M56S_Jaeger_Armor_Breacher_Yellow : KAT_M56S_Jaeger_Armor_Rifleman_Yellow
    {
        displayName = "[KAT] M56S/J Breacher [Yellow]";
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
            "APO_SMG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        class ItemInfo : ItemInfo
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
                "APO_SMG",
                "AP_SMG",
                "AP_Sniper",
                "APO_BR",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
    /* Purple */
    class KAT_M56S_Jaeger_Armor_Rifleman_Purple : KAT_M56S_Jaeger_Armor_Rifleman { };
    class KAT_M56S_Jaeger_Armor_Breacher_Purple : KAT_M56S_Jaeger_Armor_Rifleman_Purple
    {
        displayName = "[KAT] M56S/J Breacher [Purple]";
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
            "APO_SMG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_Sniper",
            "CustomKit_Scorch"
        };
        class ItemInfo : ItemInfo
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
                "APO_SMG",
                "AP_SMG",
                "AP_Sniper",
                "APO_BR",
                "APO_Sniper",
                "CustomKit_Scorch"
            };
        };
    };
};

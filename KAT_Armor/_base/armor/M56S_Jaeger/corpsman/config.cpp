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
    /* Default */
    class KAT_M56S_Jaeger_Armor_Corpsman: KAT_M56S_Jaeger_Armor_Rifleman
    {
        displayName = "[KAT] M56S/J Corpsman";
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
            "AP_Frag",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Smoke",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_SMG",
            "APO_Sniper",
            "APO_Knife",
            "CustomKit_Scorch"
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
                "AP_Frag",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Smoke",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "APO_BR",
                "APO_SMG",
                "APO_Sniper",
                "APO_Knife",
                "CustomKit_Scorch"
            };
        };
    };
    /* Red */
    class KAT_M56S_Jaeger_Armor_Rifleman_Red : KAT_M56S_Jaeger_Armor_Rifleman { };
    class KAT_M56S_Jaeger_Armor_Corpsman_Red : KAT_M56S_Jaeger_Armor_Rifleman_Red
    {
        displayName = "[KAT] M56S/J Corpsman [Red]";
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
            "AP_Frag",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Smoke",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_SMG",
            "APO_Sniper",
            "APO_Knife",
            "CustomKit_Scorch"
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
                "AP_Frag",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Smoke",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "APO_BR",
                "APO_SMG",
                "APO_Sniper",
                "APO_Knife",
                "CustomKit_Scorch"
            };
        };
    };
    /* Blue */
    class KAT_M56S_Jaeger_Armor_Rifleman_Blue : KAT_M56S_Jaeger_Armor_Rifleman { };
    class KAT_M56S_Jaeger_Armor_Corpsman_Blue : KAT_M56S_Jaeger_Armor_Rifleman_Blue
    {
        displayName = "[KAT] M56S/J Corpsman [Blue]";
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
            "AP_Frag",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Smoke",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_SMG",
            "APO_Sniper",
            "APO_Knife",
            "CustomKit_Scorch"
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
                "AP_Frag",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Smoke",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "APO_BR",
                "APO_SMG",
                "APO_Sniper",
                "APO_Knife",
                "CustomKit_Scorch"
            };
        };
    };
    /* Green */
    class KAT_M56S_Jaeger_Armor_Rifleman_Green : KAT_M56S_Jaeger_Armor_Rifleman { };
    class KAT_M56S_Jaeger_Armor_Corpsman_Green : KAT_M56S_Jaeger_Armor_Rifleman_Green
    {
        displayName = "[KAT] M56S/J Corpsman [Green]";
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
            "AP_Frag",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Smoke",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_SMG",
            "APO_Sniper",
            "APO_Knife",
            "CustomKit_Scorch"
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
                "AP_Frag",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Smoke",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "APO_BR",
                "APO_SMG",
                "APO_Sniper",
                "APO_Knife",
                "CustomKit_Scorch"
            };
        };
    };
    /* Yellow */
    class KAT_M56S_Jaeger_Armor_Rifleman_Yellow : KAT_M56S_Jaeger_Armor_Rifleman { };
    class KAT_M56S_Jaeger_Armor_Corpsman_Yellow : KAT_M56S_Jaeger_Armor_Rifleman_Yellow
    {
        displayName = "[KAT] M56S/J Corpsman [Yellow]";
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
            "AP_Frag",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Smoke",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_SMG",
            "APO_Sniper",
            "APO_Knife",
            "CustomKit_Scorch"
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
                "AP_Frag",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Smoke",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "APO_BR",
                "APO_SMG",
                "APO_Sniper",
                "APO_Knife",
                "CustomKit_Scorch"
            };
        };
    };
    /* Purple */
    class KAT_M56S_Jaeger_Armor_Rifleman_Purple : KAT_M56S_Jaeger_Armor_Rifleman { };
    class KAT_M56S_Jaeger_Armor_Corpsman_Purple : KAT_M56S_Jaeger_Armor_Rifleman_Purple
    {
        displayName = "[KAT] M56S/J Corpsman [Purple]";
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
            "AP_Frag",
            "AP_GL",
            "AP_Knife",
            "AP_MGThigh",
            "AP_AR",
            "AP_Pack",
            "AP_Smoke",
            "AP_Rounds",
            "AP_SG",
            "AP_SMG",
            "AP_Sniper",
            "APO_BR",
            "APO_SMG",
            "APO_Sniper",
            "APO_Knife",
            "CustomKit_Scorch"
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
                "AP_Frag",
                "AP_GL",
                "AP_Knife",
                "AP_MGThigh",
                "AP_AR",
                "AP_Pack",
                "AP_Smoke",
                "AP_Rounds",
                "AP_SG",
                "AP_SMG",
                "AP_Sniper",
                "APO_BR",
                "APO_SMG",
                "APO_Sniper",
                "APO_Knife",
                "CustomKit_Scorch"
            };
        };
    };
};

class CfgPatches
{
    class KAT_Backpack_ODST_Hardcase
    {
        author = "wlan0";
        requiredAddons[] =
        {
            "MA_Armor",
            "OPTRE_Core",
        };
        requiredVersion = 0.1;
        units[] = {
            "KAT_Backpack_ODST_Hardcase_Light_Basic",
            "KAT_Backpack_ODST_Hardcase_Padded_Basic",
            "KAT_Backpack_ODST_Hardcase_Padded_Medical",
            "KAT_Backpack_ODST_Hardcase_Heavy_Basic",
            "KAT_Backpack_ODST_Hardcase_Heavy_Medical",
            "KAT_Backpack_ODST_Hardcase_Longbow_Basic",
        };
        weapons[] = {};
    };
};
class XtdGearModels
{
    class CfgVehicles
    {
        class KAT_Backpack_ODST_Hardcases
        {
            label = "ODST Hardcase";
            options[] =
            {
                "type",
                "role",
            };
            class type
            {
                label = "Type";
                alwaysSelectable = 1;
                values[] =
                {
                    "light",
                    "padded",
                    "heavy",
                    "longbow",
                };
                class light
                {
                    label = "Light";
                };
                class padded
                {
                    label = "Padded";
                };
                class heavy
                {
                    label = "Heavy";
                };
                class longbow
                {
                    label = "AN/PRC-497";
                };
            };
            class role
            {
                label = "Role";
                alwaysSelectable = 1;
                values[] =
                {
                    "basic",
                    "medical",
                };
                class basic
                {
                    label = "Basic";
                };
                class medical
                {
                    label = "Medical";
                };
            };
        };
    };
};
class XtdGearInfos
{
    class CfgVehicles
    {
        class KAT_Backpack_ODST_Hardcase_Light_Basic
        {
            model = "KAT_Backpack_ODST_Hardcases";
            type = "light";
            role = "basic";
        };
        class KAT_Backpack_ODST_Hardcase_Padded_Basic
        {
            model = "KAT_Backpack_ODST_Hardcases";
            type = "padded";
            role = "basic";
        };
        class KAT_Backpack_ODST_Hardcase_Heavy_Basic
        {
            model = "KAT_Backpack_ODST_Hardcases";
            type = "heavy";
            role = "basic";
        };
        class KAT_Backpack_ODST_Hardcase_Padded_Medical
        {
            model = "KAT_Backpack_ODST_Hardcases";
            type = "padded";
            role = "medical";
        };
        class KAT_Backpack_ODST_Hardcase_Heavy_Medical
        {
            model = "KAT_Backpack_ODST_Hardcases";
            type = "heavy";
            role = "medical";
        };
        class KAT_Backpack_ODST_Hardcase_Longbow_Basic
        {
            model = "KAT_Backpack_ODST_Hardcases";
            type = "longbow";
            role = "basic";
        };
    };
};
class CfgVehicles
{
    class MA_M56S_Rucksack;
    class KAT_Backpack_ODST_Hardcase_Light_Basic : MA_M56S_Rucksack
    {
        displayName = "[Azrael] ODST Light Hardcase";
        author = "wlan0";
        hiddenSelectionsTextures[] = {
            "KAT_Gear\backpacks\odst_hardcase\_textures\MA_Ruck\ruck.paa",
            "KAT_Gear\backpacks\odst_hardcase\_textures\MA_Ruck\backpack_radio_green.paa",
        };
    };

    class OPTRE_ILCS_Rucksack_Heavy;
    class KAT_Backpack_ODST_Hardcase_Main : OPTRE_ILCS_Rucksack_Heavy
    {
        author = "wlan0";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        maximumLoad = 350;
        mass = 50;
        hiddenSelectionsTextures[] = {
            "KAT_Gear\backpacks\odst_hardcase\_textures\OPTRE_ILCS_Ruck\hardcase_black.paa",
        };
    };
    class KAT_Backpack_ODST_Hardcase_Padded_Basic : KAT_Backpack_ODST_Hardcase_Main
    {
        displayName = "[Azrael] ODST Padded Hardcase";
        hiddenSelections[] = {
            "camo1",
            "AP_Heavy",
            "biofoam",
        };
    };
    class KAT_Backpack_ODST_Hardcase_Heavy_Basic : KAT_Backpack_ODST_Hardcase_Main
    {
        displayName = "[Azrael] ODST Heavy Hardcase";
        hiddenSelections[] = {
            "camo1",
            // "AP_Heavy",
            "biofoam",
        };
    };
    class KAT_Backpack_ODST_Hardcase_Padded_Medical : KAT_Backpack_ODST_Hardcase_Main
    {
        displayName = "[Azrael] ODST Padded Medical Hardcase";
        hiddenSelections[] = {
            "camo1",
            "AP_Heavy",
            // "biofoam",
        };
    };
    class KAT_Backpack_ODST_Hardcase_Heavy_Medical : KAT_Backpack_ODST_Hardcase_Main
    {
        displayName = "[Azrael] ODST Heavy Medical Hardcase";
        hiddenSelections[] = {
            "camo1",
            // "AP_Heavy",
            // "biofoam",
        };
    };

    class OPTRE_ANPRC_521_green;
    class KAT_Backpack_ODST_Hardcase_Longbow_Basic : OPTRE_ANPRC_521_green
    {
        displayName = "[Azrael] AN/PRC-497 Longbow";
        author = "wlan0";
        descriptionShort = "AN/PRC-487 Longbow<br>UNSC Long Range Radio<br>25km Effective Range";
        scope = 2;
        scopeCurator = 2;
        maximumLoad = 350;
        hiddenSelectionsTextures[] = {
            "KAT_Gear\backpacks\odst_hardcase\_textures\Longbow\longbow_base_black.paa",
            "KAT_Gear\backpacks\odst_hardcase\_textures\Longbow\longbow_main_black.paa",
        };
        // TFAR
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "rt1523g_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 120000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel";
        tf_hasLRradio = 1;
    };
};

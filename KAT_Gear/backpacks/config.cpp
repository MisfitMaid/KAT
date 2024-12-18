class CfgPatches
{
    class KAT_Gear_Backpacks
    {
        author = "Azrael Quartermaster Team";
        requiredAddons[] =
        {
            "MA_Armor",
            "OPTRE_Core",
        };
        requiredVersion = 0.1;
        units[] = {
            "KAT_M56_Rucksack_Base",
            "KAT_M56_Rucksack_Base_Medical",
            "KAT_M56_Rucksack_Base_Radio",
        };
        weapons[] = {};
    };
};
class XtdGearModels
{
    class CfgVehicles
    {
        class KAT_Gear_Backpacks
        {
            label = "ODST Hardcase";
            options[] =
            {
                "type",
                "element",
                "camouflage"
            };
            class type
            {
                label = "Type";
                alwaysSelectable = 1;
                values[] =
                {
                    "Standard",
                    "Medical",
                    "Radio",
                };
            };
            class element
            {
                label = "Element";
                alwaysSelectable = 1;
                values[] =
                {
                    "Azrael",
                    "1X",
                    "1A",
                    "1B",
                };
                class 1X { label = "1-1 Quicksilver"; };
                class 1A { label = "1-1-A Valkyrie"; };
                class 1B { label = "1-1-B Berserker"; };
            };
            class camouflage
            {
                label = "Camouflage";
                alwaysSelectable = 0;
                values[] =
                {
                    "black",
                    "snow",
                };
                class black
                {
                    label = "Black";
                    image = "#(rgb,8,8,3)color(0,0,0,1)";
                };
                class snow
                {
                    label = "Snow";
                    image="#(rgb,8,8,3)color(0.9,0.9,0.9,1)"
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
            camouflage = "black";
        };
        class KAT_Backpack_ODST_Hardcase_Light_Basic_Snow : KAT_Backpack_ODST_Hardcase_Light_Basic
        {
            camouflage = "snow";
        };
        class KAT_Backpack_ODST_Hardcase_Padded_Basic
        {
            model = "KAT_Backpack_ODST_Hardcases";
            type = "padded";
            role = "basic";
            camouflage = "black";
        };
        class KAT_Backpack_ODST_Hardcase_Padded_Basic_Snow : KAT_Backpack_ODST_Hardcase_Padded_Basic
        {
            camouflage = "snow";
        };
        class KAT_Backpack_ODST_Hardcase_Heavy_Basic
        {
            model = "KAT_Backpack_ODST_Hardcases";
            type = "heavy";
            role = "basic";
            camouflage = "black";
        };
        class KAT_Backpack_ODST_Hardcase_Heavy_Basic_Snow : KAT_Backpack_ODST_Hardcase_Heavy_Basic
        {
            camouflage = "snow";
        };
        class KAT_Backpack_ODST_Hardcase_Padded_Medical
        {
            model = "KAT_Backpack_ODST_Hardcases";
            type = "padded";
            role = "medical";
            camouflage = "black";
        };
        class KAT_Backpack_ODST_Hardcase_Padded_Medical_Snow : KAT_Backpack_ODST_Hardcase_Padded_Medical
        {
            camouflage = "snow";
        };
        class KAT_Backpack_ODST_Hardcase_Heavy_Medical
        {
            model = "KAT_Backpack_ODST_Hardcases";
            type = "heavy";
            role = "medical";
            camouflage = "black";
        };
        class KAT_Backpack_ODST_Hardcase_Heavy_Medical_Snow : KAT_Backpack_ODST_Hardcase_Heavy_Medical
        {
            camouflage = "snow";
        }
        class KAT_Backpack_ODST_Hardcase_Longbow_Basic
        {
            model = "KAT_Backpack_ODST_Hardcases";
            type = "longbow";
            role = "basic";
            camouflage = "black";
        };
        class KAT_Backpack_ODST_Hardcase_Longbow_Basic_Snow : KAT_Backpack_ODST_Hardcase_Longbow_Basic
        {
            camouflage = "snow";
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
    class KAT_Backpack_ODST_Hardcase_Light_Basic_Snow : KAT_Backpack_ODST_Hardcase_Light_Basic
    {
        hiddenSelectionsTextures[] = {
            "KAT_Gear\backpacks\odst_hardcase\_textures\MA_Ruck\ruck_snow.paa",
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
    class KAT_Backpack_ODST_Hardcase_Main_Snow : KAT_Backpack_ODST_Hardcase_Main
    {
        hiddenSelectionsTextures[] = {
            "KAT_Gear\backpacks\odst_hardcase\_textures\OPTRE_ILCS_Ruck\hardcase_snow.paa",
        };
    };
    class KAT_Backpack_ODST_Hardcase_Padded_Basic_Snow : KAT_Backpack_ODST_Hardcase_Main_Snow
    {
        displayName = "[Azrael] ODST Padded Hardcase";
        hiddenSelections[] = {
            "camo1",
            "AP_Heavy",
            "biofoam",
        };
    };
    class KAT_Backpack_ODST_Hardcase_Heavy_Basic_Snow : KAT_Backpack_ODST_Hardcase_Main_Snow
    {
        displayName = "[Azrael] ODST Heavy Hardcase";
        hiddenSelections[] = {
            "camo1",
            // "AP_Heavy",
            "biofoam",
        };
    };
    class KAT_Backpack_ODST_Hardcase_Padded_Medical_Snow : KAT_Backpack_ODST_Hardcase_Main_Snow
    {
        displayName = "[Azrael] ODST Padded Medical Hardcase";
        hiddenSelections[] = {
            "camo1",
            "AP_Heavy",
            // "biofoam",
        };
    };
    class KAT_Backpack_ODST_Hardcase_Heavy_Medical_Snow : KAT_Backpack_ODST_Hardcase_Main_Snow
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
    class KAT_Backpack_ODST_Hardcase_Longbow_Basic_Snow : KAT_Backpack_ODST_Hardcase_Longbow_Basic
    {
        hiddenSelectionsTextures[] = {
            "KAT_Gear\backpacks\odst_hardcase\_textures\Longbow\longbow_base_snow.paa",
            "KAT_Gear\backpacks\odst_hardcase\_textures\Longbow\longbow_main_snow.paa",
        };
    };
};

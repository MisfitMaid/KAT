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
            "KAT_M56_Rucksack_Std_Azrael_Urban",
            "KAT_M56_Rucksack_Medic_Azrael_Urban",
            "KAT_M56_Rucksack_Radio_Azrael_Urban",
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
                "camo"
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
                    "2A"
                };
                class 1X { label = "1-1 Quicksilver"; };
                class 1A { label = "1-1-A Valkyrie"; };
                class 1B { label = "1-1-B Berserker"; };
            };
            class camo
            {
                label = "Camouflage";
                alwaysSelectable = 1;
                values[] = {"BLK", "WHT"};
            };
        };
    };
};
class XtdGearInfos
{
    class CfgVehicles
    {
        class KAT_M56_Rucksack_Std_Azrael_Urban   { model = "KAT_Gear_Backpacks"; type = "Standard"; element = "Azrael"; camo = "BLK"; };
        class KAT_M56_Rucksack_Medic_Azrael_Urban { model = "KAT_Gear_Backpacks"; type = "Medical";  element = "Azrael"; camo = "BLK"; };
        class KAT_M56_Rucksack_Radio_Azrael_Urban { model = "KAT_Gear_Backpacks"; type = "Radio";    element = "Azrael"; camo = "BLK"; };
        class KAT_M56_Rucksack_Std_1x_Urban       { model = "KAT_Gear_Backpacks"; type = "Standard"; element = "1X";     camo = "BLK"; };
        class KAT_M56_Rucksack_Medic_1x_Urban     { model = "KAT_Gear_Backpacks"; type = "Medical";  element = "1X";     camo = "BLK"; };
        class KAT_M56_Rucksack_Radio_1x_Urban     { model = "KAT_Gear_Backpacks"; type = "Radio";    element = "1X";     camo = "BLK"; };
        class KAT_M56_Rucksack_Std_1a_Urban       { model = "KAT_Gear_Backpacks"; type = "Standard"; element = "1A";     camo = "BLK"; };
        class KAT_M56_Rucksack_Medic_1a_Urban     { model = "KAT_Gear_Backpacks"; type = "Medical";  element = "1A";     camo = "BLK"; };
        class KAT_M56_Rucksack_Radio_1a_Urban     { model = "KAT_Gear_Backpacks"; type = "Radio";    element = "1A";     camo = "BLK"; };
        class KAT_M56_Rucksack_Std_1b_Urban       { model = "KAT_Gear_Backpacks"; type = "Standard"; element = "1B";     camo = "BLK"; };
        class KAT_M56_Rucksack_Medic_1b_Urban     { model = "KAT_Gear_Backpacks"; type = "Medical";  element = "1B";     camo = "BLK"; };
        class KAT_M56_Rucksack_Radio_1b_Urban     { model = "KAT_Gear_Backpacks"; type = "Radio";    element = "1B";     camo = "BLK"; };
    };
};
class CfgVehicles
{
    class MA_M56S_Rucksack;
    class MA_M56S_Rucksack_Medic;
    class MA_M56S_Rucksack_Radio;

    class KAT_M56_Rucksack_Std_Azrael_Urban : MA_M56S_Rucksack {
        displayName = "[Azrael] M56 Rucksack (Azrael/Urban)";
        hiddenSelectionsTextures[]=
        {
            "KAT_Gear\backpacks\std_azrael_urban.paa", // bag
            "", // radio
            "KAT_Gear\backpacks\std_azrael_urban.paa"  // straps
        };
    };

    class KAT_M56_Rucksack_Medic_Azrael_Urban : MA_M56S_Rucksack_Medic {
        displayName = "[Azrael] M56 Rucksack SARC (Azrael/Urban)";
        hiddenSelectionsTextures[]=
        {
            "KAT_Gear\backpacks\medic_azrael_urban.paa", // bag
            "", // radio
            "KAT_Gear\backpacks\medic_azrael_urban.paa"  // straps
        };
    };

    class KAT_M56_Rucksack_Radio_Azrael_Urban : MA_M56S_Rucksack_Radio {
        displayName = "[Azrael] M56 Rucksack RTO (Azrael/Urban)";
        hiddenSelectionsTextures[]=
        {
            "KAT_Gear\backpacks\std_azrael_urban.paa", // bag
            "KAT_Gear\backpacks\_radio.paa", // radio
            "KAT_Gear\backpacks\std_azrael_urban.paa"  // straps
        };
        hiddenSelectionsMaterials[]=
        {
            "MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck.rvmat",
            "KAT_Gear\backpacks\_radio.rvmat",
            "MA_Armor\data\Backpacks\ODST_Rucksack\ODST_Ruck.rvmat"
        };
    };


    // everything below should extend KAT_Rucksack_*_Azrael_Urban and ONLY change displayName and textures
    // if other changes need to be made, they should be made to the items above so it cascades to all reskins

    class KAT_M56_Rucksack_Std_1x_Urban : KAT_M56_Rucksack_Std_Azrael_Urban {
        displayName = "[Azrael] M56 Rucksack (1-1/Urban)";
        hiddenSelectionsTextures[]= { "KAT_Gear\backpacks\std_1x_urban.paa" };
    };
    class KAT_M56_Rucksack_Medic_1x_Urban : KAT_M56_Rucksack_Medic_Azrael_Urban {
        displayName = "[Azrael] M56 Rucksack (1-1/Urban)";
        hiddenSelectionsTextures[]= { "KAT_Gear\backpacks\medic_1x_urban.paa" };
    };
    class KAT_M56_Rucksack_Radio_1x_Urban : KAT_M56_Rucksack_Radio_Azrael_Urban {
        displayName = "[Azrael] M56 Rucksack (1-1/Urban)";
        hiddenSelectionsTextures[]= { "KAT_Gear\backpacks\std_1x_urban.paa" };
    };

    class KAT_M56_Rucksack_Std_1a_Urban : KAT_M56_Rucksack_Std_Azrael_Urban {
        displayName = "[Azrael] M56 Rucksack (1-1-A/Urban)";
        hiddenSelectionsTextures[]= { "KAT_Gear\backpacks\std_1a_urban.paa" };
    };
    class KAT_M56_Rucksack_Medic_1a_Urban : KAT_M56_Rucksack_Medic_Azrael_Urban {
        displayName = "[Azrael] M56 Rucksack (1-1-A/Urban)";
        hiddenSelectionsTextures[]= { "KAT_Gear\backpacks\medic_1a_urban.paa" };
    };
    class KAT_M56_Rucksack_Radio_1a_Urban : KAT_M56_Rucksack_Radio_Azrael_Urban {
        displayName = "[Azrael] M56 Rucksack (1-1-A/Urban)";
        hiddenSelectionsTextures[]= { "KAT_Gear\backpacks\std_1a_urban.paa" };
    };

    class KAT_M56_Rucksack_Std_1b_Urban : KAT_M56_Rucksack_Std_Azrael_Urban {
        displayName = "[Azrael] M56 Rucksack (1-1-B/Urban)";
        hiddenSelectionsTextures[]= { "KAT_Gear\backpacks\std_1b_urban.paa" };
    };
    class KAT_M56_Rucksack_Medic_1b_Urban : KAT_M56_Rucksack_Medic_Azrael_Urban {
        displayName = "[Azrael] M56 Rucksack (1-1-B/Urban)";
        hiddenSelectionsTextures[]= { "KAT_Gear\backpacks\medic_1b_urban.paa" };
    };
    class KAT_M56_Rucksack_Radio_1b_Urban : KAT_M56_Rucksack_Radio_Azrael_Urban {
        displayName = "[Azrael] M56 Rucksack (1-1-B/Urban)";
        hiddenSelectionsTextures[]= { "KAT_Gear\backpacks\std_1b_urban.paa" };
    };
};

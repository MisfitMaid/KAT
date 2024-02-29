class CfgPatches
{
    class KAT_Metaitem_Vests
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
        weapons[] = { };
    };
};
class XtdGearModels
{
    class CfgWeapons
    {
        class KAT_Metaitem_Vest_Valkyrie
        {
            label = "1-1 Valkyrie"
            options[] =
            {
                "type",
                "customization",
                "camouflage",
            };
            class type
            {
                label = "Type"; 
                alwaysSelectable = 1;
                values[] =
                {
                    "m52d",
                    "m56r",
                    "m56s",
                    "custom",
                };
                class m52d
                {
                    label = "M52D";
                };
                class m56r
                {
                    label = "M56R";
                };
                class m56s
                {
                    label = "M56S";
                };
                class custom
                {
                    label = "Custom";
                };
            };
            class customization
            {
                label = "Customization";
                alwaysSelectable = 1;
                values[] =
                {
                    "stock",
                    "barnes",
                    "morningstar",
                };
                class stock
                {
                    label = "Stock";
                };
                class barnes
                {
                    label = "Barnes";
                };
                class morningstar
                {
                    label = "Morningstar";
                };
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

        class KAT_Metaitem_Vest_Berserker
        {
            label = "1-2 Berserker";
            options[] =
            {
                "type",
                "customization",
                "camouflage",
            };
            class type
            {
                label = "Type";
                alwaysSelectable = 1;
                values[] =
                {
                    "m52d",
                    "m56r",
                    "m56s",
                    "custom",
                };
                class m52d
                {
                    label = "M52D";
                };
                class m56r
                {
                    label = "M56R";
                };
                class m56s
                {
                    label = "M56S";
                };
                class custom
                {
                    label = "Custom";
                };
            };
            class customization
            {
                label = "Customization";
                alwaysSelectable = 1;
                values[] =
                {
                    "stock",
                    "cline",
                    "hayes"
                };
                class stock
                {
                    label = "Stock";
                };
                class cline
                {
                    label = "Cline";
                };
                class hayes
                {
                    label = "Hayes";
                };
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

        class KAT_Metaitem_Vest_Valhalla
        {
            label = "Azrael";
            options[] =
            {
                "type",
                "customization",
                "camouflage",
            };
            class type
            {
                label = "Type";
                alwaysSelectable = 1;
                values[] =
                {
                    "m52d",
                    "m56r",
                    "m56s",
                    "custom",
                };
                class m52d
                {
                    label = "M52D";
                };
                class m56r
                {
                    label = "M56R";
                };
                class m56s
                {
                    label = "M56S";
                };
                class custom
                {
                    label = "Custom";
                };
            };
            class customization
            {
                label = "Customization";
                alwaysSelectable = 1;
                values[] =
                {
                    "stock",
                    "cooper",
                };
                class stock
                {
                    label = "Stock";
                };
                class cooper
                {
                    label = "Cooper";
                };
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
    class CfgWeapons
    {
        /* Valkyrie */
        // Stocks
        class KAT_M52D_Jaeger_Armor_Rifleman_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_Metaitem_Vest_Valkyrie";
            type = "m52d";
            customization = "stock";
            camouflage = "black";
        };
        class KAT_Armor_M52D_Valkyrie_Snow : KAT_M52D_Jaeger_Armor_Rifleman_Blue
        {
            camouflage = "snow";
        };
        class KAT_Armor_Valkyrie
        {
            model = "KAT_Metaitem_Vest_Valkyrie";
            type = "m56r";
            customization = "stock";
            camouflage = "black";
        };
        class KAT_Armor_Valkyrie_snow : KAT_Armor_Valkyrie
        {
            camouflage = "snow";
        };
        // Customs
        class KAT_Armor_Barnes
        {
            model = "KAT_Metaitem_Vest_Valkyrie";
            type = "custom";
            customization = "barnes";
            camouflage = "black";
        };
        class KAT_Armor_Barnes_snow : KAT_Armor_Barnes
        {
            camouflage = "snow";
        };
        class KAT_Armor_Morningstar
        {
            model = "KAT_Metaitem_Vest_Valkyrie";
            type = "custom";
            customization = "morningstar";
            camouflage = "black";
        };
        class KAT_Armor_Morningstar_snow : KAT_Armor_Morningstar
        {
            camouflage = "snow";
        };

        /* Berserker */
        // Stocks
        class KAT_M52D_Jaeger_Armor_Rifleman_Berserker
        {
            model = "KAT_Metaitem_Vest_Berserker";
            type = "m52d";
            customization = "stock";
            camouflage = "black";
        };
        class KAT_Armor_M52D_Berserker_Snow : KAT_M52D_Jaeger_Armor_Rifleman_Berserker
        {
            camouflage = "snow";
        };
        class KAT_Armor_Berserker
        {
            model = "KAT_Metaitem_Vest_Berserker";
            type = "m56r";
            customization = "stock";
            camouflage = "black";
        }
        class KAT_Armor_Berserker_snow : KAT_Armor_Berserker
        {
            camouflage = "snow";
        };
        // Customs
        class KAT_M52D_Jaeger_Armor_Cline_Berserker
        {
            model = "KAT_Metaitem_Vest_Berserker";
            type = "custom";
            customization = "cline";
            camouflage = "black";
        };
        class KAT_Armor_M52D_Cline_Snow : KAT_M52D_Jaeger_Armor_Cline_Berserker
        {
            camouflage = "snow";
        };
        class KAT_M52D_Jaeger_Armor_Hayes_Berserker
        {
            model = "KAT_Metaitem_Vest_Berserker";
            type = "custom";
            customization = "hayes";
            camouflage = "black";
        };
        class KAT_Armor_M52D_Hayes_Snow : KAT_M52D_Jaeger_Armor_Hayes_Berserker
        {
            camouflage = "snow";
        };

        /* Valhalla */
        // Stocks
        class KAT_M52D_Jaeger_Armor_Rifleman
        {
            model = "KAT_Metaitem_Vest_Valhalla";
            type = "m52d";
            customization = "stock";
            camouflage = "black";
        };
        class KAT_Armor_M52D_Valhalla_Snow : KAT_M52D_Jaeger_Armor_Rifleman
        {
            camouflage = "snow";
        };
        // Customs
        class KAT_Armor_Cooper
        {
            model = "KAT_Metaitem_Vest_Valhalla";
            type = "custom";
            customization = "cooper";
            camouflage = "black";
        };
        class KAT_Armor_Cooper_snow : KAT_Armor_Cooper
        {
            camouflage = "snow";
        };
    };
};

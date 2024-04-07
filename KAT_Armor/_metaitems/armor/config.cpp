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
            label = "1-1 Valkyrie";
            options[] =
            {
                "type",
                "customization",
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
        };

        class KAT_Metaitem_Vest_Berserker
        {
            label = "1-2 Berserker";
            options[] =
            {
                "type",
                "customization",
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

        };

        class KAT_Metaitem_Vest_Valhalla
        {
            label = "Azrael";
            options[] =
            {
                "type",
                "customization",
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
        class KAT_Armor_Valkyrie
        {
            model = "KAT_Metaitem_Vest_Valkyrie";
            type = "m56r";
            customization = "stock";
            camouflage = "black";
        };
        // Customs
        class KAT_Armor_Barnes
        {
            model = "KAT_Metaitem_Vest_Valkyrie";
            type = "custom";
            customization = "barnes";
            camouflage = "black";
        };
        class KAT_Armor_Morningstar
        {
            model = "KAT_Metaitem_Vest_Valkyrie";
            type = "custom";
            customization = "morningstar";
            camouflage = "black";
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
        class KAT_Armor_Berserker
        {
            model = "KAT_Metaitem_Vest_Berserker";
            type = "m56r";
            customization = "stock";
            camouflage = "black";
        }
        // Customs
        class KAT_M52D_Jaeger_Armor_Cline_Berserker
        {
            model = "KAT_Metaitem_Vest_Berserker";
            type = "custom";
            customization = "cline";
            camouflage = "black";
        };
        class KAT_M52D_Jaeger_Armor_Hayes_Berserker
        {
            model = "KAT_Metaitem_Vest_Berserker";
            type = "custom";
            customization = "hayes";
            camouflage = "black";
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

        // Customs
        class KAT_Armor_Cooper
        {
            model = "KAT_Metaitem_Vest_Valhalla";
            type = "custom";
            customization = "cooper";
            camouflage = "black";
        };
    };
};

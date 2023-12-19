class CfgPatches
{
    class KAT_Metaitem_Helmets
    {
        author = "wlan0";
        addonRootClass = "KAT_Armor";
        requiredAddons[] =
        {
            "KAT_Armor",
            "A3_Characters_F",
            "OPTRE_Core",
            "OPTRE_ACE_Compat",
            "OPTRE_FC_ACE_Compat",
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
        class KAT_Metaitem_Helmet_Valkyrie
        {
            label = "1-1 Valkyrie"
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
                    "shields",
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
                class shields
                {
                    label = "Shields";
                };
            };
        };

        class KAT_Metaitem_Helmet_Berserker
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
                    "carter",
                    "cline",
                    "hayes",
                    "oneill",
                    "reid",
                };
                class stock
                {
                    label = "Stock";
                };
                class carter
                {
                    label = "Carter";
                };
                class cline
                {
                    label = "Cline";
                };
                class hayes
                {
                    label = "Hayes";
                };
                class oneill
                {
                    label = "O'Neill";
                };
                class reid
                {
                    label = "Reid";
                };
            };
        };

        class KAT_Metaitem_Helmet_Valhalla
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
        class KAT_M52D_Jaeger_Helmet_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "m52d";
            customization = "stock";
        };
        class KAT_Helmets_Valkyrie
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "m56s";
            customization = "stock";
        };
        // Customs
        class KAT_Helmets_Barnes
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "custom";
            customization = "barnes";
        };
        class KAT_Helmets_Morningstar
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "custom";
            customization = "morningstar";
        };
        class KAT_M52D_Jaeger_Helmet_Shields_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "custom";
            customization = "shields";
        };

        /* Berserker */
        // Stocks
        class KAT_M52D_Jaeger_Helmet_Berserker
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "m52d";
            customization = "stock";
        };
        class KAT_Helmets_Berserker
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "m56s";
            customization = "stock";
        };
        // Customs
        class KAT_M52D_Jaeger_Helmet_Carter_Berserker
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "custom";
            customization = "carter";
        };
        class KAT_Helmets_Cline
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "custom";
            customization = "cline";
        };
        class KAT_M52D_Jaeger_Helmet_Hayes_Berserker
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "custom";
            customization = "hayes";
        };
        class KAT_M52D_Jaeger_Helmet_ONeill_Berserker
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "custom";
            customization = "oneill";
        };
        class KAT_M52D_Jaeger_Helmet_Reid_Berserker
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "custom";
            customization = "reid";
        };

        /* Valhalla */
        // Stocks
        class KAT_M52D_Jaeger_Helmet_Default
        {
            model = "KAT_Metaitem_Helmet_Valhalla";
            type = "m52d";
            customization = "stock";
        };
        // Customs
        class KAT_Helmets_Cooper
		{
			model = "KAT_Metaitem_Helmet_Valhalla";
            type = "custom";
            customization = "cooper";
		};
    };
};

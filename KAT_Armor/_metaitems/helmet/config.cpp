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
                "camouflage",
                "polarization",
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
                    "vlane"
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
                class vlane
                {
                    label = "V.Lane";
                };
            };
            class polarization
            {
                label = "Polarization";
                alwaysSelectable = 0;
                changeingame = 1;
                changedelay = 0;
                values[] =
                {
                    "on",
                    "off",
                };
                class on
                {
                    label = "On";
                };
                class off
                {
                    label = "Off";
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
                "camouflage",
                "polarization",
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
            class polarization
            {
                label = "Polarization";
                alwaysSelectable = 0;
                changeingame = 1;
                changedelay = 0;
                values[] =
                {
                    "on",
                    "off",
                };
                class on
                {
                    label = "On";
                };
                class off
                {
                    label = "Off";
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
                "camouflage",
                "polarization",
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
            class polarization
            {
                label = "Polarization";
                alwaysSelectable = 0;
                changeingame = 1;
                changedelay = 0;
                values[] =
                {
                    "on",
                    "off",
                };
                class on
                {
                    label = "On";
                };
                class off
                {
                    label = "Off";
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
        class KAT_Helmets_Valkyrie
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "m56s";
            customization = "stock";
            camouflage = "black";
        };
        // Customs
        class KAT_Helmets_Barnes
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "custom";
            customization = "barnes";
            camouflage = "black";
        };
        class KAT_Helmets_Morningstar
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "custom";
            customization = "morningstar";
            camouflage = "black";
        };
        class KAT_Helmets_VLane
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "custom";
            customization = "vlane";
            camouflage = "black";
        };

        /* Berserker */
        // Stocks
        class KAT_Helmets_Berserker
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "m56s";
            customization = "stock";
            camouflage = "black";
        };
        // Customs
        class KAT_Helmets_Cline
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "custom";
            customization = "cline";
            camouflage = "black";
        };
        class KAT_M52D_Jaeger_Helmet_Hayes_Berserker
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "custom";
            customization = "hayes";
            camouflage = "black";
        };

        /* Valhalla */
        // Stocks
        // Customs
        class KAT_Helmets_Cooper
        {
            model = "KAT_Metaitem_Helmet_Valhalla";
            type = "custom";
            customization = "cooper";
            camouflage = "black";
        };
    };
};

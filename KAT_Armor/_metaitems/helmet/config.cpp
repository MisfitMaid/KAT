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
                    "ch252d",
                    "m52d",
                    "m56r",
                    "m56s",
                    "custom",
                };
                class ch252d
                {
                    label = "CH252D";
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
                class shields
                {
                    label = "Shields";
                };
                class vlane
                {
                    label = "V.Lane";
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
                    "ch252d",
                    "m52d",
                    "m56r",
                    "m56s",
                    "custom",
                };
                class ch252d
                {
                    label = "CH252D";
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
                    "ch252d",
                    "m52d",
                    "m56r",
                    "m56s",
                    "custom",
                };
                class ch252d
                {
                    label = "CH252D";
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
        class KAT_CH252D_Helmet_Valkyrie
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "ch252d";
            customization = "stock";
            camouflage = "black";
            polarization = "on";
        };
        class KAT_CH252D_Helmet_Valkyrie_dp : KAT_CH252D_Helmet_Valkyrie
        {
            polarization = "off";
        };
        class KAT_Helmets_CH252D_Valkyrie_Snow : KAT_CH252D_Helmet_Valkyrie
        {
            camouflage = "snow";
        };
        class KAT_Helmets_CH252D_Valkyrie_Snow_dp : KAT_Helmets_CH252D_Valkyrie_Snow
        {
            polarization = "off";
        };
        class KAT_M52D_Jaeger_Helmet_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "m52d";
            customization = "stock";
            camouflage = "black";
        };
        class KAT_Helmets_M52D_Valkyrie_Snow : KAT_M52D_Jaeger_Helmet_Blue
        {
            camouflage = "snow";
        };
        class KAT_Helmets_Valkyrie
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "m56s";
            customization = "stock";
            camouflage = "black";
        };
        class KAT_Helmets_Valkyrie_snow : KAT_Helmets_Valkyrie
        {
            camouflage = "snow";
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
        class KAT_Helmets_Morningstar_snow : KAT_Helmets_Morningstar
        {
            camouflage = "snow";
        };
        class KAT_Helmets_Barnes_snow : KAT_Helmets_Barnes
        {
            camouflage = "snow";
        };
        class KAT_M52D_Jaeger_Helmet_Shields_Blue // named "Blue" for legacy purposes
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "custom";
            customization = "shields";
            camouflage = "black";
        };
        class KAT_Helmets_Shields_Snow : KAT_M52D_Jaeger_Helmet_Shields_Blue
        {
            camouflage = "snow";
        };
        class KAT_Helmets_VLane
        {
            model = "KAT_Metaitem_Helmet_Valkyrie";
            type = "custom";
            customization = "vlane";
            camouflage = "black";
        };
        class KAT_Helmets_VLane_Snow : KAT_Helmets_VLane
        {
            camouflage = "snow";
        };

        /* Berserker */
        // Stocks
        class KAT_CH252D_Helmet_Berserker
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "ch252d";
            customization = "stock";
            camouflage = "black";
            polarization = "on";
        };
        class KAT_CH252D_Helmet_Berserker_dp : KAT_CH252D_Helmet_Berserker
        {
            polarization = "off";
        };
        class KAT_Helmets_CH252D_Berserker_Snow : KAT_CH252D_Helmet_Berserker
        {
            camouflage = "snow";
        };
        class KAT_Helmets_CH252D_Berserker_Snow_dp : KAT_Helmets_CH252D_Berserker_Snow
        {
            polarization = "off";
        };
        class KAT_M52D_Jaeger_Helmet_Berserker
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "m52d";
            customization = "stock";
            camouflage = "black";
        };
        class KAT_Helmets_M52D_Berserker_Snow : KAT_M52D_Jaeger_Helmet_Berserker
        {
            camouflage = "snow";
        };
        class KAT_Helmets_Berserker
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "m56s";
            customization = "stock";
            camouflage = "black";
        };
        class KAT_Helmets_Berserker_snow : KAT_Helmets_Berserker
        {
            camouflage = "snow";
        };
        // Customs
        class KAT_Helmets_Carter
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "custom";
            customization = "carter";
            camouflage = "black";
            polarization = "on";
        };
        class KAT_Helmets_Carter_dp : KAT_Helmets_Carter
        {
            polarization = "off";
        };
        class KAT_Helmets_Carter_Snow : KAT_Helmets_Carter
        {
            camouflage = "snow";
        };
        class KAT_Helmets_Carter_Snow_dp : KAT_Helmets_Carter_Snow
        {
            polarization = "off";
        };
        class KAT_Helmets_Cline
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "custom";
            customization = "cline";
            camouflage = "black";
        };
        class KAT_Helmets_Cline_Snow : KAT_Helmets_Cline
        {
            camouflage = "snow";
        };
        class KAT_M52D_Jaeger_Helmet_Hayes_Berserker
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "custom";
            customization = "hayes";
            camouflage = "black";
        };
        class KAT_Helmets_Hayes_Snow : KAT_M52D_Jaeger_Helmet_Hayes_Berserker
        {
            camouflage = "snow";
        };
        class KAT_Helmets_ONeill
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "custom";
            customization = "oneill";
            camouflage = "black";
            polarization = "on";
        };
        class KAT_Helmets_ONeill_dp: KAT_Helmets_ONeill
        {
            polarization = "off";
        };
        class KAT_Helmets_ONeill_Snow : KAT_Helmets_ONeill
        {
            camouflage = "snow";
        };
        class KAT_Helmets_ONeill_Snow_dp : KAT_Helmets_ONeill_Snow
        {
            polarization = "off";
        };
        class KAT_Helmets_Reid
        {
            model = "KAT_Metaitem_Helmet_Berserker";
            type = "custom";
            customization = "reid";
            camouflage = "black";
            polarization = "on";
        };
        class KAT_Helmets_Reid_dp : KAT_Helmets_Reid
        {
            polarization = "off";
        };
        class KAT_Helmets_Reid_Snow : KAT_Helmets_Reid
        {
            camouflage = "snow";
        };
        class KAT_Helmets_Reid_Snow_dp : KAT_Helmets_Reid_Snow
        {
            polarization = "off";
        };

        /* Valhalla */
        // Stocks
        class KAT_CH252D_Helmet_Default
        {
            model = "KAT_Metaitem_Helmet_Valhalla";
            type = "ch252d";
            customization = "stock";
            camouflage = "black";
            polarization = "on";
        };
        class KAT_CH252D_Helmet_Default_dp : KAT_CH252D_Helmet_Default
        {
            polarization = "off";
        };
        class KAT_Helmets_CH252D_Valhalla_Snow : KAT_CH252D_Helmet_Default
        {
            camouflage = "snow";
        };
        class KAT_Helmets_CH252D_Valhalla_Snow_dp : KAT_Helmets_CH252D_Valhalla_Snow
        {
            polarization = "off";
        };
        class KAT_M52D_Jaeger_Helmet_Default
        {
            model = "KAT_Metaitem_Helmet_Valhalla";
            type = "m52d";
            customization = "stock";
            camouflage = "black";
        };
        class KAT_Helmets_M52D_Valhalla_Snow : KAT_M52D_Jaeger_Helmet_Default
        {
            camouflage = "snow";
        };
        // Customs
        class KAT_Helmets_Cooper
        {
            model = "KAT_Metaitem_Helmet_Valhalla";
            type = "custom";
            customization = "cooper";
            camouflage = "black";
        };
        class KAT_Helmets_Cooper_snow : KAT_Helmets_Cooper
        {
            camouflage = "snow";
        };
    };
};

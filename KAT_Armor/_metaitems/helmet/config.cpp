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
        class KAT_Metaitem_Helmet
        {
            label = "ODST-MSOT-091 'Azrael'";
            options[] = { "type", "customization"};
            class type
            {
                label = "Type"; 
                alwaysSelectable = 1;
                values[] =
                {
                    "m56s_r",
                    "m56s_h",
                    "m56m_eod",
                    "m56m_cdo",
                    "m56m_cqc",
                    "legacy",
                };
                class m56s_r  { label = "M56S-R"; };
                class m56s_h  { label = "M56S-H"; };
                class m56m_eod  { label = "M56M-EOD"; };
                class m56m_cdo  { label = "M56M-CDO"; };
                class m56m_cqc  { label = "M56M-CQC"; };
                class legacy { label = "Legacy"; };
            };
            class customization
            {
                label = "Customization";
                alwaysSelectable = 1;
                values[] =
                {
                    "A",
                    "B",
                    "Barnes",
                    "Cline",
                    "Hayes",
                    "Lane",
                    "Morningstar",
                    "Cooper",
                };
                class A { label = "A (Valkyrie)"; };
                class B { label = "B (Berserker)"; };
            };
        };
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        class KAT_Helmets_Valkyrie                   { model = "KAT_Metaitem_Helmet"; type = "m56s_r";   customization = "A"; };
        class KAT_Helmets_Berserker                  { model = "KAT_Metaitem_Helmet"; type = "m56s_r";   customization = "B"; };

        class KAT_Helmets_Barnes                     { model = "KAT_Metaitem_Helmet"; type = "m56m_eod"; customization = "Barnes"; };
        class KAT_Helmets_Cline                      { model = "KAT_Metaitem_Helmet"; type = "legacy";   customization = "Cline"; };
        class KAT_M52D_Jaeger_Helmet_Hayes_Berserker { model = "KAT_Metaitem_Helmet"; type = "legacy";   customization = "Hayes"; };
        class KAT_Helmets_VLane                      { model = "KAT_Metaitem_Helmet"; type = "m56m_cdo"; customization = "Lane"; };
        class KAT_Helmets_Morningstar                { model = "KAT_Metaitem_Helmet"; type = "m56s_r";   customization = "Morningstar"; };

        class KAT_Helmets_Cooper                     { model = "KAT_Metaitem_Helmet"; type = "m56m_cqc"; customization = "Cooper"; };
    };
};

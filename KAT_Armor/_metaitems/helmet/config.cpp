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
                    "m56m_cdo",
                    "m56m_cqc",
                    "m56m_eod",
                    "m56m_grn",
                    "m56m_r",
                    "legacy",
                };
                class m56s_r  { label = "M56S-R"; };
                class m56s_h  { label = "M56S-H"; };
                class m56m_cdo  { label = "M56M-CDO"; };
                class m56m_cqc  { label = "M56M-CQC"; };
                class m56m_eod  { label = "M56M-EOD"; };
                class m56m_grn  { label = "M56M-GRN"; };
                class m56m_r  { label = "M56M-R"; };
                class legacy { label = "Legacy"; };
            };
            class customization
            {
                label = "Customization";
                alwaysSelectable = 1;
                values[] =
                {
                    "Recruit",
                    "1A",
                    "1B",
                    "2A",
                    "Barnes",
                    "Cline",
                    "Frost",
                    "Hayes",
                    "Kertz",
                    "Lane",
                    "Morningstar",
                    "Selanne",
                    "Cooper",
                    "Buckley",
                };
                class Recruit { label = "Basic"; };
                class 1A { label = "1-1-A (Valkyrie)"; };
                class 1B { label = "1-1-B (Berserker)"; };
                class 2A { label = "1-2-A (Outlaw)"; };
            };
        };
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        // 1-1
        class KAT_Helmets_Valkyrie                   { model = "KAT_Metaitem_Helmet"; type = "m56s_r";   customization = "1A"; };
        class KAT_Helmets_Berserker                  { model = "KAT_Metaitem_Helmet"; type = "m56s_r";   customization = "1B"; };
        class KAT_Helmets_Barnes                     { model = "KAT_Metaitem_Helmet"; type = "m56m_eod"; customization = "Barnes"; };
        class KAT_Helmets_Cline                      { model = "KAT_Metaitem_Helmet"; type = "legacy";   customization = "Cline"; };
        class KAT_Helmets_Frost                      { model = "KAT_Metaitem_Helmet"; type = "m56s_r";   customization = "Frost"; };
        class KAT_Helmets_Kertz                      { model = "KAT_Metaitem_Helmet"; type = "m56m_grn"; customization = "Kertz"; };
        class KAT_Helmets_Lane                       { model = "KAT_Metaitem_Helmet"; type = "m56m_cdo"; customization = "Lane"; };
        class KAT_Helmets_Morningstar                { model = "KAT_Metaitem_Helmet"; type = "m56s_r";   customization = "Morningstar"; };
        class KAT_Helmets_Selanne                    { model = "KAT_Metaitem_Helmet"; type = "m56s_r";   customization = "Selanne"; };

        // 1-2
        class KAT_Helmets_Outlaw                     { model = "KAT_Metaitem_Helmet"; type = "m56s_r";   customization = "2A"; };

        // command
        class KAT_Helmets_Cooper                     { model = "KAT_Metaitem_Helmet"; type = "m56m_cqc"; customization = "Cooper"; };
        class KAT_Helmets_Buckley                    { model = "KAT_Metaitem_Helmet"; type = "m56m_r"; customization = "Buckley"; };

        // loa/misc
        class KAT_Helmets_Recruit                    { model = "KAT_Metaitem_Helmet"; type = "m56s_r";   customization = "Recruit"; };
        class KAT_M52D_Jaeger_Helmet_Hayes_Berserker { model = "KAT_Metaitem_Helmet"; type = "legacy";   customization = "Hayes"; };
    };
};

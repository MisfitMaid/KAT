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
        class KAT_Metaitem_Helmet_Base
        {
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
                };
                class m56s_r  { label = "M56S-R"; };
                class m56s_h  { label = "M56S-H"; };
                class m56m_cdo  { label = "M56M-CDO"; };
                class m56m_cqc  { label = "M56M-CQC"; };
                class m56m_eod  { label = "M56M-EOD"; };
                class m56m_grn  { label = "M56M-GRN"; };
                class m56m_r  { label = "M56M-R"; };
            };
            class customization
            {
                label = "Customization";
                alwaysSelectable = 1;
                values[] =
                {
                    "1A",
                    "1B",
                    "Cline",
                    "Frost",
                    "Kertz",
                    "Laeca",
                    "Lane",
                    "Morningstar",
                    "Prentice",
                    "Selanne",
                    "Wolf",

                    "2A",
                    "Raider",

                    "Recruit",
                    "Buckley",
                    "Cooper",

                    "Barnes",
                };
                class 1A { label = "1-1-A (Valkyrie)"; };
                class 1B { label = "1-1-B (Berserker)"; };
                class Selanne { label = "Selänne"; };

                class 2A { label = "1-2-A (Outlaw)"; };

                class Recruit { label = "Basic"; };
            };
        };

        class KAT_Metaitem_Helmet_091  : KAT_Metaitem_Helmet_Base { label = "ODST-MSOT-091";  };
        class KAT_Metaitem_Helmet_0911 : KAT_Metaitem_Helmet_Base { label = "ODST-MSOT-0911"; };
        class KAT_Metaitem_Helmet_0912 : KAT_Metaitem_Helmet_Base { label = "ODST-MSOT-0912"; };
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        // 1-1
        class KAT_Helmets_Valkyrie                   { model = "KAT_Metaitem_Helmet_0911"; type = "m56s_r";   customization = "1A"; };
        class KAT_Helmets_Berserker                  { model = "KAT_Metaitem_Helmet_0911"; type = "m56s_r";   customization = "1B"; };
        class KAT_Helmets_Cline                      { model = "KAT_Metaitem_Helmet_0911"; type = "m56s_r";   customization = "Cline"; };
        class KAT_Helmets_Frost                      { model = "KAT_Metaitem_Helmet_0911"; type = "m56s_r";   customization = "Frost"; };
        class KAT_Helmets_Kertz                      { model = "KAT_Metaitem_Helmet_0911"; type = "m56m_grn"; customization = "Kertz"; };
        class KAT_Helmets_Laeca                      { model = "KAT_Metaitem_Helmet_0911"; type = "m56s_r";   customization = "Laeca"; };
        class KAT_Helmets_Lane                       { model = "KAT_Metaitem_Helmet_0911"; type = "m56m_cdo"; customization = "Lane"; };
        class KAT_Helmets_Morningstar                { model = "KAT_Metaitem_Helmet_0911"; type = "m56s_r";   customization = "Morningstar"; };
        class KAT_Helmets_Prentice                   { model = "KAT_Metaitem_Helmet_0911"; type = "m56s_r";   customization = "Prentice"; };
        class KAT_Helmets_Selanne                    { model = "KAT_Metaitem_Helmet_0911"; type = "m56s_r";   customization = "Selanne"; };
        class KAT_Helmets_Wolf                       { model = "KAT_Metaitem_Helmet_0911"; type = "m56s_r";   customization = "Wolf"; };

        // 1-2
        class KAT_Helmets_Outlaw                     { model = "KAT_Metaitem_Helmet_0912"; type = "m56s_r";   customization = "2A"; };
        class KAT_Helmets_Raider                     { model = "KAT_Metaitem_Helmet_0912"; type = "m56s_r";   customization = "Raider"; };

        // command / LoA / misc
        class KAT_Helmets_Recruit                    { model = "KAT_Metaitem_Helmet_091"; type = "m56s_r";    customization = "Recruit"; };
        class KAT_Helmets_Buckley                    { model = "KAT_Metaitem_Helmet_091"; type = "m56m_r";    customization = "Buckley"; };
        class KAT_Helmets_Cooper                     { model = "KAT_Metaitem_Helmet_091"; type = "m56m_cqc";  customization = "Cooper"; };

        class KAT_Helmets_Barnes                     { model = "KAT_Metaitem_Helmet_091"; type = "m56m_eod";  customization = "Barnes"; };
    };
};

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
        class KAT_Metaitem_Armor_Base
        {
            options[] =
            {
                "customization",
            };
            class customization
            {
                label = "Customization";
                values[] =
                {
                    "1A",
                    "1B",
                    "Frost",
                    "Kertz",
                    "Laeca",
                    "Lane",
                    "Cline",
                    "Morningstar",
                    "Selanne",

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

        class KAT_Metaitem_Armor_091  : KAT_Metaitem_Armor_Base { label = "ODST-MSOT-091";  };
        class KAT_Metaitem_Armor_0911 : KAT_Metaitem_Armor_Base { label = "ODST-MSOT-0911"; };
        class KAT_Metaitem_Armor_0912 : KAT_Metaitem_Armor_Base { label = "ODST-MSOT-0912"; };
    };
};
class XtdGearInfos
{
    class CfgWeapons
    {
        // 1-1
        class KAT_Armor_Valkyrie                    { model = "KAT_Metaitem_Armor_0911"; customization = "1A"; };
        class KAT_Armor_Berserker                   { model = "KAT_Metaitem_Armor_0911"; customization = "1B"; };
        class KAT_Armor_Frost                       { model = "KAT_Metaitem_Armor_0911"; customization = "Frost"; };
        class KAT_Armor_Kertz                       { model = "KAT_Metaitem_Armor_0911"; customization = "Kertz"; };
        class KAT_Armor_Laeca                       { model = "KAT_Metaitem_Armor_0911"; customization = "Laeca"; };
        class KAT_Armor_Lane                        { model = "KAT_Metaitem_Armor_0911"; customization = "Lane"; };
        class KAT_Armor_Morningstar                 { model = "KAT_Metaitem_Armor_0911"; customization = "Morningstar"; };
        class KAT_Armor_Selanne                     { model = "KAT_Metaitem_Armor_0911"; customization = "Selanne"; };
        class KAT_Armor_Cline                       { model = "KAT_Metaitem_Armor_0911"; customization = "Cline"; };

        // 1-2
        class KAT_Armor_Outlaw                      { model = "KAT_Metaitem_Armor_0912"; customization = "2A"; };
        class KAT_Armor_Raider                      { model = "KAT_Metaitem_Armor_0912"; customization = "Raider"; };

        // command / LoA / misc
        class KAT_Armor_Cooper                      { model = "KAT_Metaitem_Armor_091"; customization = "Cooper"; };
        class KAT_Armor_Buckley                     { model = "KAT_Metaitem_Armor_091"; customization = "Buckley"; };

        class KAT_Armor_Recruit                     { model = "KAT_Metaitem_Armor_091"; customization = "Recruit"; };

        class KAT_Armor_Barnes                      { model = "KAT_Metaitem_Armor_091"; customization = "Barnes"; };
    };
};

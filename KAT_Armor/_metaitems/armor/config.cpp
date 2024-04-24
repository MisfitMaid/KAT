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

        class KAT_Metaitem_Armor
        {
            label = "ODST-MSOT-091 'Azrael'";
            options[] =
            {
                "customization",
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
                    "Frost",
                    "Kertz",
                    "Lane",
                    "Cline",
                    "Hayes",
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
        class KAT_Armor_Valkyrie                    { model = "KAT_Metaitem_Armor"; customization = "1A"; };
        class KAT_Armor_Berserker                   { model = "KAT_Metaitem_Armor"; customization = "1B"; };
        class KAT_Armor_Barnes                      { model = "KAT_Metaitem_Armor"; customization = "Barnes"; };
        class KAT_Armor_Frost                       { model = "KAT_Metaitem_Armor"; customization = "Frost"; };
        class KAT_Armor_Kertz                       { model = "KAT_Metaitem_Armor"; customization = "Kertz"; };
        class KAT_Armor_Lane                        { model = "KAT_Metaitem_Armor"; customization = "Lane"; };
        class KAT_Armor_Morningstar                 { model = "KAT_Metaitem_Armor"; customization = "Morningstar"; };
        class KAT_Armor_Selanne                     { model = "KAT_Metaitem_Armor"; customization = "Selanne"; };
        class KAT_Armor_Cline                       { model = "KAT_Metaitem_Armor"; customization = "Cline"; };

        // 1-2
        class KAT_Armor_Outlaw                      { model = "KAT_Metaitem_Armor"; customization = "2A"; };

        // command
        class KAT_Armor_Cooper                      { model = "KAT_Metaitem_Armor"; customization = "Cooper"; };
        class KAT_Armor_Buckley                     { model = "KAT_Metaitem_Armor"; customization = "Buckley"; };

        // LOA/misc
        class KAT_Armor_Recruit                     { model = "KAT_Metaitem_Armor"; customization = "Recruit"; };
        class KAT_M52D_Jaeger_Armor_Hayes_Berserker { model = "KAT_Metaitem_Armor"; customization = "Hayes"; };
    };
};

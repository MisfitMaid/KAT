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
                    "A",
                    "B",
                    "Barnes",
                    "Frost",
                    "Kertz",
                    "Cline",
                    "Hayes",
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
        class KAT_Armor_Valkyrie                    { model = "KAT_Metaitem_Armor"; customization = "A"; };
        class KAT_Armor_Berserker                   { model = "KAT_Metaitem_Armor"; customization = "B"; }
        
        class KAT_Armor_Barnes                      { model = "KAT_Metaitem_Armor"; customization = "Barnes"; };
        class KAT_Armor_Frost                       { model = "KAT_Metaitem_Armor"; customization = "Frost"; };
        class KAT_Armor_Kertz                       { model = "KAT_Metaitem_Armor"; customization = "Kertz"; };
        class KAT_Armor_Morningstar                 { model = "KAT_Metaitem_Armor"; customization = "Morningstar"; };
        class KAT_M52D_Jaeger_Armor_Cline_Berserker { model = "KAT_Metaitem_Armor"; customization = "Cline"; };
        class KAT_M52D_Jaeger_Armor_Hayes_Berserker { model = "KAT_Metaitem_Armor"; customization = "Hayes"; };

        class KAT_Armor_Cooper                      { model = "KAT_Metaitem_Armor"; customization = "Cooper"; };
    };
};

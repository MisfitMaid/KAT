    class KAT_Base_CQC_Helmet;
    class KAT_Helmets_{{id}}: KAT_Base_CQC_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        author = "{{author}}";
        displayName = "[Azrael] Mark V/CQC Helmet ({{name}})";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"{{helmet_body_texture}}","{{helmet_visor_texture}}"};
        hiddenSelectionsMaterials[] = {"", "{{helmet_visor_rvmat}}"};
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1","camo2"};
            hiddenSelectionsTextures[] = {"{{helmet_body_texture}}","{{helmet_visor_texture}}"};
            hiddenSelectionsMaterials[] = {"", "{{helmet_visor_rvmat}}"};
        };
        class XtdGearInfo {
            model = "KAT_Helmets_{{group}}";
            member = "{{id}}";
        };
    };

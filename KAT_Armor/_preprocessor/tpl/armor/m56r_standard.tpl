    class KAT_Armor__Base;
    class KAT_Armor_{{id}} : KAT_Armor__Base
    {
        scope = 2;
        scopeArsenal = 2;
        author = "{{author}}";
        displayName = "[Azrael] M56R Combat Armor ({{name}})";
        hiddenSelections[] = 
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5",
            "camo6",
            "camo7",
            "camo8",
            "camo9",
            "camo10",
            //"Reach_Forearm_Left",
            //"Reach_Forearm_Right",
            "H3_Forearm_Left",
            "H3_Forearm_Right",
            //"H3_Pauldron_Left",
            //"H3_Pauldron_Right",
            "Reach_Pauldron_Left",
            "Reach_Pauldron_Right",
            "Reach_Shoulder_Radio_Left",
            "Reach_Shoulder_Radio_Right",
            "Reach_Sniper_Pauldron_Left",
            "Reach_Sniper_Pauldron_Right",
            "Reach_CQB_Pauldron_Left",
            "Reach_CQB_Pauldron_Right",
            "Thigh_Pouch",
            //"Reach_Armor_Upper",
            //"Reach_Armor_Lower",
            "H3_Armor_Upper",
            "H3_Armor_Lower",
            "Forearm_Vent_Left",
            "Forearm_Vent_Right",
            "Canisters"
        };
        hiddenSelectionsTextures[] = 
        {
            "{{armor_upper}}", // shoulders
            "", // unused
            "", // unused
            "{{armor_upper}}", // upper
            "{{armor_lower}}", // lower
            "" // unused
        };
        class XtdGearInfo {
            model = "KAT_Armor_{{group}}";
            member = "{{id}}";
        };
        class ItemInfo: ItemInfo
        {
            vestType = "Rebreather";
            uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
            containerClass = "Supply200";
            hiddenSelections[] = 
            {
                "camo1",
                "camo2",
                "camo3",
                "camo4",
                "camo5",
                "camo6",
                "camo7",
                "camo8",
                "camo9",
                "camo10",
                //"Reach_Forearm_Left",
                //"Reach_Forearm_Right",
                "H3_Forearm_Left",
                "H3_Forearm_Right",
                "H3_Pauldron_Left",
                "H3_Pauldron_Right",
                //"Reach_Pauldron_Left",
                //"Reach_Pauldron_Right",
                "Reach_Shoulder_Radio_Left",
                "Reach_Shoulder_Radio_Right",
                "Reach_Sniper_Pauldron_Left",
                "Reach_Sniper_Pauldron_Right",
                "Reach_CQB_Pauldron_Left",
                "Reach_CQB_Pauldron_Right",
                "Thigh_Pouch",
                //"Reach_Armor_Upper",
                //"Reach_Armor_Lower",
                "H3_Armor_Upper",
                "H3_Armor_Lower",
                "Forearm_Vent_Left",
                "Forearm_Vent_Right",
                "Canisters"
            };
            hiddenSelectionsTextures[] = 
            {
                "{{armor_upper}}", // shoulders
                "", // unused
                "", // unused
                "{{armor_upper}}", // upper
                "{{armor_lower}}", // lower
                "" // unused
            };
        };
    };

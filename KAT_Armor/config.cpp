// AUTOMATICALLY GENERATED. DO NOT EDIT MANUALLY.
class CfgPatches
{
    class KAT_Armor
    {
        author = "MisfitMaid";
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "A3_Characters_F"
        };
    };
};
class XtdGearModels
{
    class CfgWeapons
    {		class KAT_Armor_valkyrie
		{
			label = "[Azrael] 1-1 Valkyrie Squad";
			author = "Azrael Company Quartermasters";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "Member";
				values[] = {
					
				};
                
			};
		};
		class KAT_Helmets_valkyrie
		{
			label = "[Azrael] 1-1 Valkyrie Squad";
			author = "Azrael Company Quartermasters";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "Member";
				values[] = {
					
				};
                
			};
		};
		class KAT_Armor_berserker
		{
			label = "[Azrael] 1-2 Berserker Squad";
			author = "Azrael Company Quartermasters";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "Member";
				values[] = {
					
				};
                
			};
		};
		class KAT_Helmets_berserker
		{
			label = "[Azrael] 1-2 Berserker Squad";
			author = "Azrael Company Quartermasters";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "Member";
				values[] = {
					
				};
                
			};
		};
		class KAT_Armor_other
		{
			label = "[Azrael] Reserve/Valhalla";
			author = "Azrael Company Quartermasters";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "Member";
				values[] = {
					"cooper"
				};
                class cooper { label = "Cooper"; };
			};
		};
		class KAT_Helmets_other
		{
			label = "[Azrael] Reserve/Valhalla";
			author = "Azrael Company Quartermasters";
			options[] = {"member"};
			class member
			{
				alwaysSelectable = 1;
				label = "Member";
				values[] = {
					"cooper"
				};
                class cooper { label = "Cooper"; };
			};
		};
    };
};
class CfgWeapons
{
    class ItemInfo;
    class KAT_Armor__Base;
    class KAT_Armor_cooper : KAT_Armor__Base
    {
        scope = 2;
        scopeArsenal = 2;
        author = "MisfitMaid";
        displayName = "[Azrael] M56R Combat Armor (Cooper)";
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
            "KAT_Armor\cooper\Reach_Armor_Upper_co.paa", // shoulders
            "", // unused
            "", // unused
            "KAT_Armor\cooper\Reach_Armor_Upper_co.paa", // upper
            "KAT_Armor\cooper\Reach_Armor_Lower_co.paa", // lower
            "" // unused
        };
        class XtdGearInfo {
            model = "KAT_Armor_other";
            member = "cooper";
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
                "KAT_Armor\cooper\Reach_Armor_Upper_co.paa", // shoulders
                "", // unused
                "", // unused
                "KAT_Armor\cooper\Reach_Armor_Upper_co.paa", // upper
                "KAT_Armor\cooper\Reach_Armor_Lower_co.paa", // lower
                "" // unused
            };
        };
    };
    class KAT_Base_CQC_Helmet;
    class KAT_Helmets_cooper: KAT_Base_CQC_Helmet
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        author = "MisfitMaid";
        displayName = "[Azrael] Mark V/CQC Helmet (Cooper)";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"KAT_Armor\cooper\cqc_helmet_co.paa","KAT_Armor\cooper\cqc_visor_co.paa"};
        hiddenSelectionsMaterials[] = {"", "MA_Armor\data\Helmets\hr_odst\hr_odst_visor.rvmat"};
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1","camo2"};
            hiddenSelectionsTextures[] = {"KAT_Armor\cooper\cqc_helmet_co.paa","KAT_Armor\cooper\cqc_visor_co.paa"};
            hiddenSelectionsMaterials[] = {"", "MA_Armor\data\Helmets\hr_odst\hr_odst_visor.rvmat"};
        };
        class XtdGearInfo {
            model = "KAT_Helmets_other";
            member = "cooper";
        };
    };
};

class CfgPatches
{
	class KAT_Armor_Khan
	{
		author = "MisfitMaid";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"A3_Characters_F",
			"OPTRE_Core"
		};
	};
};

class CfgWeapons
{
    class ItemInfo;

    class KAT_Armor__Base;
    class KAT_Armor_Khan : KAT_Armor__Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "frwrd";
		displayName = "[Azrael] M56S-R (Khan)";
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
			//"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			"Reach_CQB_Pauldron_Left",
			"Reach_CQB_Pauldron_Right",
			//"Thigh_Pouch",
			//"Reach_Armor_Upper",
			//"Reach_Armor_Lower",
			"H3_Armor_Upper",
			"H3_Armor_Lower",
			//"Forearm_Vent_Left",
			//"Forearm_Vent_Right",
			//"Canisters"
		};
		hiddenSelectionsTextures[] = 
		{
            "",       //camo1 (H3 Upper Armor)
            "",       //camo2 (H3 Lower Armor)
            "",//camo3 (Thigh Pouch)
            "KAT_Armor\Khan\upper.paa",    //camo4 (Reach Upper Armor)
            "KAT_Armor\Khan\lower.paa",    //camo5 (Reach Lower Armor)
            "MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      //camo6 (Canisters)
            "MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   //camo7 (Forearm Vents)
            "" //camo10 (Shoulder Radio)
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
                //"Reach_Shoulder_Radio_Right",
                "Reach_Sniper_Pauldron_Left",
                "Reach_Sniper_Pauldron_Right",
                "Reach_CQB_Pauldron_Left",
                "Reach_CQB_Pauldron_Right",
                //"Thigh_Pouch",
                //"Reach_Armor_Upper",
                //"Reach_Armor_Lower",
                "H3_Armor_Upper",
                "H3_Armor_Lower",
                //"Forearm_Vent_Left",
                //"Forearm_Vent_Right",
                //"Canisters"
            };
            hiddenSelectionsTextures[] = 
            {
                "",       //camo1 (H3 Upper Armor)
                "",       //camo2 (H3 Lower Armor)
                "",//camo3 (Thigh Pouch)
                "KAT_Armor\Khan\upper.paa",    //camo4 (Reach Upper Armor)
                "KAT_Armor\Khan\lower.paa",    //camo5 (Reach Lower Armor)
                "MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa",      //camo6 (Canisters)
                "MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa",   //camo7 (Forearm Vents)
                "" //camo10 (Shoulder Radio)
            };
		};
	};

	class KAT_M56SR_Helmet_Base;
    class KAT_Helmets_Khan: KAT_M56SR_Helmet_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "frwrd";
		displayName = "[Azrael] M56S-R (Khan)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"KAT_Armor\Khan\helmet.paa","KAT_Armor\Khan\visor.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"KAT_Armor\Khan\helmet.paa","KAT_Armor\Khan\visor.paa"};
		};
	};
};

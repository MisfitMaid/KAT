class CfgPatches
{
	class KAT_Armor_Barnes
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

    class KAT_Base_EOD_Helmet;
    class KAT_Armor__Base;
    class KAT_Armor_Barnes : KAT_Armor__Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MisfitMaid";
		displayName = "[Azrael] M56R (Barnes)";
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
			"Reach_Pauldron_Left",
			"Reach_Pauldron_Right",
			"Reach_Shoulder_Radio_Left",
			"Reach_Shoulder_Radio_Right",
			"Reach_Sniper_Pauldron_Left",
			"Reach_Sniper_Pauldron_Right",
			//"Reach_CQB_Pauldron_Left",
			//"Reach_CQB_Pauldron_Right",
			//"Thigh_Pouch",
			//"Reach_Armor_Upper",
			//"Reach_Armor_Lower",
			"H3_Armor_Upper",
			"H3_Armor_Lower",
			"Forearm_Vent_Left",
			"Forearm_Vent_Right",
			//"Canisters"
		};
		hiddenSelectionsTextures[] = 
		{
			"KAT_Armor\barnes\Reach_Armor_Upper_co.paa", // shoulders
			"", // unused
			"MA_Armor\data\vests\h3_odst\addons\thigh_pouch_co.paa", // thigh
			"KAT_Armor\barnes\Reach_Armor_Upper_co.paa", // upper
			"KAT_Armor\valkyrie\lower.paa", // lower
			"MA_Armor\data\vests\reach_odst\canisters_co.paa", // cans
			"", // unused
			"", // unused
			"KAT_Armor\barnes\cqb_co.paa" // CQB
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
				"Reach_Pauldron_Left",
				"Reach_Pauldron_Right",
				"Reach_Shoulder_Radio_Left",
				"Reach_Shoulder_Radio_Right",
				"Reach_Sniper_Pauldron_Left",
				"Reach_Sniper_Pauldron_Right",
				//"Reach_CQB_Pauldron_Left",
				//"Reach_CQB_Pauldron_Right",
				//"Thigh_Pouch",
				//"Reach_Armor_Upper",
				//"Reach_Armor_Lower",
				"H3_Armor_Upper",
				"H3_Armor_Lower",
				"Forearm_Vent_Left",
				"Forearm_Vent_Right",
				//"Canisters"
			};
			hiddenSelectionsTextures[] = 
			{
				"KAT_Armor\barnes\Reach_Armor_Upper_co.paa", // shoulders
				"", // unused
				"MA_Armor\data\vests\h3_odst\addons\thigh_pouch_co.paa", // thigh
				"KAT_Armor\barnes\Reach_Armor_Upper_co.paa", // upper
				"KAT_Armor\valkyrie\lower.paa", // lower
				"MA_Armor\data\vests\reach_odst\canisters_co.paa", // cans
				"", // unused
				"", // unused
				"KAT_Armor\barnes\cqb_co.paa" // CQB
			};
		};
	};
    class KAT_Helmets_Barnes: KAT_Base_EOD_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MisfitMaid";
		displayName = "[Azrael] Mark V/EOD (Barnes)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"KAT_Armor\barnes\eod_helmet_co.paa","KAT_Armor\barnes\eod_visor_co.paa"};
		// hiddenSelectionsTextures[] = {"KAT_Armor\helper.paa","KAT_Armor\helper.paa"};
		hiddenSelectionsMaterials[] = {"KAT_Armor\barnes\eod.rvmat", "MA_Armor\data\Helmets\hr_odst\hr_odst_visor.rvmat"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"KAT_Armor\barnes\eod_helmet_co.paa","KAT_Armor\barnes\eod_visor_co.paa"};
			// hiddenSelectionsTextures[] = {"KAT_Armor\helper.paa","KAT_Armor\helper.paa"};
			hiddenSelectionsMaterials[] = {"KAT_Armor\barnes\eod.rvmat", "MA_Armor\data\Helmets\hr_odst\hr_odst_visor.rvmat"};
		};
	};
};

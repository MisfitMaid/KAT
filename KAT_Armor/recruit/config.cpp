class CfgPatches
{
	class KAT_Armor_Recruit
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

	class KAT_M56SR_Helmet_Base;
    class KAT_Armor__Base;
    class KAT_Armor_Recruit : KAT_Armor__Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "frwrd";
		displayName = "[Azrael] 091 M56S-R (Basic)";
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
			"KAT_Armor\recruit\upper.paa", // shoulders
			"", // unused
			"", // unused
			"KAT_Armor\recruit\upper.paa", // upper
			"KAT_Armor\recruit\lower.paa", // lower
			"" // unused
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
				"KAT_Armor\recruit\upper.paa", // shoulders
				"", // unused
				"", // unused
				"KAT_Armor\recruit\upper.paa", // upper
				"KAT_Armor\recruit\lower.paa", // lower
				"" // unused
			};
		};
	};

    class KAT_Helmets_Recruit: KAT_M56SR_Helmet_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "frwrd";
		displayName = "[Azrael] 091 M56S-R (Basic)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"KAT_Armor\recruit\helmet.paa","KAT_Armor\recruit\visor.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"KAT_Armor\recruit\helmet.paa","KAT_Armor\recruit\visor.paa"};
		};
	};
};

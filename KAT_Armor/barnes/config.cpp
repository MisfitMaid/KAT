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

    class KAT_Helmets_Barnes: KAT_Base_EOD_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MisfitMaid";
		displayName = "[KAT] Mark V/EOD Helmet (Barnes)";
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

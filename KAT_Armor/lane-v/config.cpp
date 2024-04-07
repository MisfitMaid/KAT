class CfgPatches
{
	class KAT_Armor_VLane
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

    class KAT_Base_Commando_Helmet;
    class KAT_Helmets_VLane: KAT_Base_Commando_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MisfitMaid";
		displayName = "[Azrael] Mark V/K (V.Lane)";
		hiddenSelections[] = {"camo1","camo2"};
		// hiddenSelectionsTextures[] = {"KAT_Armor\helper.paa","KAT_Armor\h_red.paa"};
		hiddenSelectionsTextures[] = {"KAT_Armor\lane-v\commando_helmet_black_co.paa","KAT_Armor\lane-v\commando_visor_co.paa"};
		hiddenSelectionsMaterials[] = {"", "MA_Armor\data\Helmets\hr_odst\hr_odst_visor.rvmat"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			// hiddenSelectionsTextures[] = {"KAT_Armor\helper.paa","KAT_Armor\h_red.paa"};
			hiddenSelectionsTextures[] = {"KAT_Armor\lane-v\commando_helmet_black_co.paa","KAT_Armor\lane-v\commando_visor_co.paa"};
			hiddenSelectionsMaterials[] = {"", "MA_Armor\data\Helmets\hr_odst\hr_odst_visor.rvmat"};
		};
	};

};

class CfgPatches
{
	class KAT_Armor_Buckley
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

    class MA_Mjolnir_Recon_Helmet;
    class KAT_Helmets_Buckley: MA_Mjolnir_Recon_Helmet
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "MisfitMaid";
		displayName = "[Azrael] M56M-R (Buckley)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Helmets\Recon\Helmets\Black_Recon_Helmet_CO.paa","KAT_Armor\buckley\base_recon_visor_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo1","camo2"};
			hiddenSelectionsTextures[] = {"MA_Armor\data\Helmets\Recon\Helmets\Black_Recon_Helmet_CO.paa","KAT_Armor\buckley\base_recon_visor_co.paa"};
		};
	};
};

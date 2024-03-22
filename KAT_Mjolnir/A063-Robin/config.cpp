class CfgPatches
{
	class KAT_Mjolnir_A063
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
    class MAPO_Commando_Helmet;
    class KAT_Mjolnir_Helmet_A063 : MAPO_Commando_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MisfitMaid";
		displayName = "[Azrael] Mjolnir Helmet A063";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KAT_Mjolnir\A063-Robin\helmet.paa",
			"KAT_Armor\cooper\cqc_visor_co.paa"
		};
	};

	class MAPO_MKVB_Armor;
	class KAT_Mjolnir_Vest_A063 : MAPO_MKVB_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MisfitMaid";
		displayName = "[Azrael] Mjolnir Armor A063";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KAT_Mjolnir\A063-Robin\upper.paa",
			"KAT_Mjolnir\A063-Robin\lower.paa"
		};
	};
};

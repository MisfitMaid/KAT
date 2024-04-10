class CfgPatches
{
	class KAT_Mjolnir_A085
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
    class MAPO_EVA_Helmet;
    class KAT_Mjolnir_Helmet_A085 : MAPO_EVA_Helmet
	{
		MJOLNIR_isHelmet=1;
		scope = 2;
		scopeArsenal = 2;
		author = "MisfitMaid";
		displayName = "[Azrael] Mjolnir Helmet A085";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KAT_Mjolnir\A085-Hex\helmet.paa",
			"KAT_Mjolnir\A085-Hex\visor.paa"
		};
	};

	class MAPO_MKVB_Armor;
	class KAT_Mjolnir_Vest_A085 : MAPO_MKVB_Armor
	{
		MJOLNIR_isArmor=1;
		scope = 2;
		scopeArsenal = 2;
		author = "MisfitMaid";
		displayName = "[Azrael] Mjolnir Armor A085";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KAT_Mjolnir\A085-Hex\upper.paa",
			"KAT_Mjolnir\A085-Hex\lower.paa"
		};
	};

};

class CfgVehicles
{
	class Mjolnir_CQC_Shoulders_Spartan;
	class KAT_Mjolnir_Shoulders_A085: Mjolnir_CQC_Shoulders_Spartan
	{
		scope=2;
		scopeArsenal=2;
		displayName="[Azrael] Mjolnir Shoulders A085";
		author = "MisfitMaid";
		hiddenSelections[]=
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
			"camo11",
			"camo12",
			"camo13",
			"camo14",
			"camo15",
			"camo16",
			"camo17",
			"camo18",
			"camo19",
			"camo20",
			"camo21",
			"camo22",
			"camo23",
			"camo24",
			"camo25",
			"camo26",
			"camo27",
			"camo28",
			"commando_left",
			"commando_right",
			// "cqc_left",
			// "cqc_right",
			"eva_left",
			"eva_right",
			"gren_left",
			"gren_right",
	        "gungnir_left",
	        "gungnir_right",
			"hayabusa_left",
			"hayabusa_right",
			"jfo_left",
			"jfo_right",
			"mkiv_left",
			"mkiv_right",
			"mkv_left",
			"mkv_right",
			"odst_left",
			"odst_right",
			"operator_left",
			"operator_right",
			"recon_left",
			"recon_right",
			"security_left",
			"security_right",
			"scout_left",
			"scout_right"
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
			"KAT_Mjolnir\A085-Hex\shoulders.paa",
			"KAT_Mjolnir\A085-Hex\shoulders.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
			"KAT_Mjolnir\A085-Hex\shoulders.paa",
			"KAT_Mjolnir\A085-Hex\shoulders.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Hayabusa\Olive_Hayabusa_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\JFO\Olive_JFO_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKIV\Color_Variants\Green_MKIV_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\MKV\Olive_MKV_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\ODST\Olive_ODST_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Operator\Olive_Operator_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Recon\Olive_Recon_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
		};
	};
};

class CfgGlasses
{
	class MAPO_EOD_CBRN_Attachment_NVG_Spartan ;
	class KAT_Mjolnir_Face_A085: MAPO_EOD_CBRN_Attachment_NVG_Spartan
	{
		scope=2;
		scopeArsenal=2;
		author="MisfitMaid";
		displayName="[Azrael] Mjolnir Face A085";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"KAT_Mjolnir\A085-Hex\cbrn.paa"
		};
	};

	class MAPO_MKVB_ODST_Chest;
	class KAT_Mjolnir_Chest_A085: MAPO_MKVB_ODST_Chest
	{
		scope=2;
		scopeArsenal=2;
		author="MisfitMaid";
		displayName="[Azrael] Mjolnir Kit A085";
		hiddenSelections[]=
		{
			"Camo1", // (Grenadier Chest)
			"Camo2", // (Grenadier Collar)
			"Camo3", // (ODST Chest)
			"Camo4", // (Scout Vest)
		    "Grenadier_Collar",
		    "Grenadier_Chest",
		//	"Odst_Chest",
			"Scout_Chest"
		};
		hiddenSelectionsTextures[]=
		{
			"KAT_Mjolnir\A085-Hex\chestplate.paa",
			"KAT_Mjolnir\A085-Hex\grenadier_collar.paa",
			"KAT_Mjolnir\A085-Hex\chestplate.paa",
			"MA_Armor\data\Vests\MKVB\Attachments\Scout\Woodland_Scout_Vest_CO.paa"
		};
	};
};

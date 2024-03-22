class CfgPatches
{
	class KAT_Mjolnir_G216
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
    class MAPO_Recon_Helmet;
    class KAT_Mjolnir_Helmet_G216 : MAPO_Recon_Helmet
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MisfitMaid";
		displayName = "[Azrael] Mjolnir Helmet G216";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KAT_Mjolnir\G216-Tessa\helmet.paa",
			"MA_Armor\data\Helmets\recon\Visors\Sky_Recon_Visor_CO.paa"
		};
	};

	class MAPO_MKVB_Armor;
	class KAT_Mjolnir_Vest_G216 : MAPO_MKVB_Armor
	{
		scope = 2;
		scopeArsenal = 2;
		author = "MisfitMaid";
		displayName = "[Azrael] Mjolnir Armor G216";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"KAT_Mjolnir\G216-Tessa\upper.paa",
			"KAT_Mjolnir\G216-Tessa\lower.paa"
		};
	};
};

class CfgVehicles
{
	class Mjolnir_Recon_Shoulders_Spartan;
	class KAT_Mjolnir_Shoulders_G216: Mjolnir_Recon_Shoulders_Spartan
	{
		scope=2;
		scopeArsenal=2;
		displayName="[Azrael] Mjolnir Shoulders G216 (Zeus)";
		author = "MisfitMaid";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=1000;

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
			"cqc_left",
			"cqc_right",
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
			// "recon_left",
			// "recon_right",
			"security_left",
			"security_right",
			"scout_left",
			"scout_right"
		};
		hiddenSelectionsTextures[]=
		{
			"MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Commando\Olive_Commando_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\CQC\Olive_CQC_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\EVA\Olive_EVA_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Grenadier\Olive_Grenadier_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Gungnir\Olive_GUNGNIR_Shoulders_CO.paa",
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
			"KAT_Mjolnir\G216-Tessa\shoulders.paa",
			"KAT_Mjolnir\G216-Tessa\shoulders.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Security\Olive_Security_Shoulders_CO.paa",
			"MA_Armor\data\Vests\MKVB\Shoulders\Scout\Olive_Scout_Shoulders_CO.paa"
		};
	};
};

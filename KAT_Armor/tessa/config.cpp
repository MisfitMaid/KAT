class CfgPatches
{
	class KAT_Mjolnir_Tessa
	{
		author = "MisfitMaid";
		units[] = {};
		weapons[] = {
			"KAT_Mjolnir_Tessa"
		};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"A3_Characters_F",
			"OPTRE_MJOLNIR_Units"
		};
	};
};

class CfgWeapons
{
    class ItemInfo;
	class OPTRE_MJOLNIR_MkVBArmor_Default_Red;
	class KAT_Mjolnir_Tessa: OPTRE_MJOLNIR_MkVBArmor_Default_Red
	{
		dlc="KAT";
		scopeArsenal=1;
		author="MisfitMaid";
		displayName="[KAT] MJOLNIR Mark V[B] Armor [Tessa]";
		model="\OPTRE_MJOLNIR_Units\armormkvb.p3d";
		//class XtdGearInfo
		//{
		//	model="OPTRE_MJOLNIR_MkVBArmor";
		//	camo="Red";
		//	shoulders1="Default";
		//	shoulders2="Default";
		//	chest="Default";
		//	knees="Default";
		//};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"attach_security1",
			"attach_security2",
			"attach_fjpara1",
			"attach_fjpara2",
			"attach_commando1",
			"attach_commando2",
			"attach_mkv1",
			"attach_mkv2",
			"attach_grenadier1",
			"attach_grenadier2",
			"attach_cqc1",
			"attach_cqc2",
			"attach_gren_ua",
			"attach_knees_fjpara"
		};
		hiddenSelectionsTextures[]=
		{
			"KAT_Armor\helper.paa",
			"KAT_Armor\helper.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_MJOLNIR_Units\armormkvb.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"attach_security1",
				"attach_security2",
				"attach_fjpara1",
				"attach_fjpara2",
				"attach_commando1",
				"attach_commando2",
				"attach_mkv1",
				"attach_mkv2",
				"attach_grenadier1",
				"attach_grenadier2",
				"attach_cqc1",
				"attach_cqc2",
				"attach_gren_ua",
				"attach_knees_fjpara"
			};
			hiddenSelectionsTextures[]=
			{
				"KAT_Armor\helper.paa",
				"KAT_Armor\helper.paa"
			};
		};
	};
};

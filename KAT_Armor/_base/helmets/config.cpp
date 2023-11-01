class CfgPatches
{
	class KAT_Armor__Base_Helmets
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
	//CQC Helmet
    class OPTRE_UNSC_CQC_Helmet;
	class KAT_Base_CQC_Helmet : OPTRE_UNSC_CQC_Helmet
	{
		class ItemInfo;
		dlc = "KAT";
        author = "MisfitMaid";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "Mark V/CQC Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "\OPTRE_UNSC_Units\Army\CQC_Helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	class OPTRE_UNSC_EOD_Helmet;
	class KAT_Base_EOD_Helmet : OPTRE_UNSC_EOD_Helmet
	{
		class ItemInfo;
		dlc = "KAT";
        author = "MisfitMaid";
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
		weaponPoolAvailable = 1;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		displayName = "Mark V/EOD Helmet - Base";
		class ItemInfo: ItemInfo
		{
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};

	
	// what the fuck is this code lmao
	class MA_Helmet_Base;
	class MA_Helmet_Base_o : MA_Helmet_Base
	{
		class ItemInfo;
	};
	class MA_Helmet_Base_on: MA_Helmet_Base_o
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo;
		};
	};
	class MA_Helmet_Base_one: MA_Helmet_Base_on
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo: HitpointsProtectionInfo
			{
				class Face;
				class Head;
				class Neck;
			};
		};
	};

	//M56SR
	class HeadgearItem;
	class KAT_M56SR_Helmet_Base : MA_Helmet_Base_one
	{
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		model = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
		picture = "MA_Armor\data\Icons\Halo_Reach_ODST_Helmet.paa";
		displayName = "[KAT] M56S-R Helmet - Base";
		hiddenSelectionsTextures[] = 
		{
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa",
			"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "MA_Armor\data\Helmets\HR_ODST\HR_ODST.p3d";
			hiddenSelectionsTextures[] = 
			{
				"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Helmet_CO.paa",
				"MA_Armor\data\Helmets\HR_ODST\HR_ODST_Visor_Blue_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor = 35;
					hitpointName = "HitFace";
					passThrough = 0.1;
				};
				class Head
				{
					armor = 35;
					hitPointName = "HitHead";
					passThrough = 0.1;
				};
				class Neck
				{
					armor = 35;
					hitpointName = "HitNeck";
					passThrough = 0.1;
				};
			};
		};
	};
};

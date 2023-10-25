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

    class OPTRE_UNSC_CQC_Helmet_dp;
	class KAT_Base_CQC_Helmet_dp : OPTRE_UNSC_CQC_Helmet_dp
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
};

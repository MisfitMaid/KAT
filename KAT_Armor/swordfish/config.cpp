class CfgPatches
{
	class KAT_Armor_Swordfish
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

class XtdGearModels
{
	class CamoBase;
	class CfgWeapons
	{
		class KAT_Armor_Swordfish
		{
			label = "[KAT] Swordfish Armor";
			author = "MisfitMaid";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"cooper"};
				class cooper
				{
					label = "Cooper";
				};
			};
		};
		class KAT_Helmets_Swordfish
		{
			label = "[KAT] Swordfish Helmets";
			author = "MisfitMaid";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"cooper"};
				class cooper
				{
					label = "Cooper";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class KAT_Armor_Cooper
		{
			model = "KAT_Armor_Swordfish";
			role = "cooper";
		};
		class KAT_Helmets_Cooper
		{
			model = "KAT_Helmets_Swordfish";
			role = "cooper";
		};
	};
};

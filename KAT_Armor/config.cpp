class CfgPatches
{
	class KAT_Armor
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
		class KAT_Helmets
		{
			label = "[Azrael] M56 Helmets (Valkyrie/Valhalla)";
			author = "MisfitMaid";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {
					"valkyrie",
					"berserker",
					"cooper",
					"barnes",
					"morningstar",
					"cline",
				};
				class valkyrie
				{
					label = "1-1 Valkyrie";
				};
				class berserker
				{
					label = "1-2 Berserker";
				};
				class cooper
				{
					label = "Cooper";
				};
				class barnes
				{
					label = "Barnes";
				};
				class morningstar
				{
					label = "Morningstar";
				};
				class cline
				{
					label = "Cline";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class KAT_Helmets_Cooper
		{
			model = "KAT_Helmets";
			role = "cooper";
		};
		class KAT_Helmets_Valkyrie
		{
			model = "KAT_Helmets";
			role = "valkyrie";
		};
		class KAT_Helmets_Berserker
		{
			model = "KAT_Helmets";
			role = "berserker";
		};
		class KAT_Helmets_Barnes
		{
			model = "KAT_Helmets";
			role = "barnes";
		};
		class KAT_Helmets_Morningstar
		{
			model = "KAT_Helmets";
			role = "morningstar";
		};
		class KAT_Helmets_Cline
		{
			model = "KAT_Helmets";
			role = "cline";
		};
	};
};

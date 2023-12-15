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
		class KAT_Armor
		{
			label = "[KAT] M56 Armor (Valkyrie/Valhalla)";
			author = "MisfitMaid";
			options[] = {"role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {"valkyrie", "cooper", "williams", "barnes", "morningstar"};
				class valkyrie
				{
					label = "Valkyrie";
				};
				class cooper
				{
					label = "Cooper";
				};
				class barnes
				{
					label = "Barnes";
				};
				class williams
				{
					label = "Williams";
				};
				class morningstar
				{
					label = "Morningstar";
				};
			};
		};
		class KAT_Helmets
		{
			label = "[KAT] M56 Helmets (Valkyrie/Valhalla)";
			author = "MisfitMaid";
			options[] = {"Role"};
			class role
			{
				alwaysSelectable = 1;
				label = "Role";
				values[] = {
					"valkyrie",
					"cooper",
					"barnes",
					"williams",
					"morningstar",
					"cline",
				};
				class valkyrie
				{
					label = "Valkyrie";
				};
				class cooper
				{
					label = "Cooper";
				};
				class barnes
				{
					label = "Barnes";
				};
				class williams
				{
					label = "Williams";
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
		class KAT_Armor_Cooper
		{
			model = "KAT_Armor";
			role = "cooper";
		};
		class KAT_Helmets_Cooper
		{
			model = "KAT_Helmets";
			role = "cooper";
		};
		class KAT_Armor_Williams
		{
			model = "KAT_Armor";
			role = "williams";
		};
		class KAT_Helmets_Williams
		{
			model = "KAT_Helmets";
			role = "williams";
		};
		class KAT_Armor_Valkyrie
		{
			model = "KAT_Armor";
			role = "valkyrie";
		};
		class KAT_Helmets_Valkyrie
		{
			model = "KAT_Helmets";
			role = "valkyrie";
		};
		class KAT_Armor_Barnes
		{
			model = "KAT_Armor";
			role = "barnes";
		};
		class KAT_Helmets_Barnes
		{
			model = "KAT_Helmets";
			role = "barnes";
		};
		class KAT_Armor_Morningstar
		{
			model = "KAT_Armor";
			role = "morningstar";
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

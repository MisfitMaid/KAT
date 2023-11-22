class CfgPatches
{
	class KAT_M56S_Jaeger_Uniform
	{
		author = "wlan0";
		addonRootClass = "KAT_Armor";
		requiredAddons[] =
		{
			"KAT_Armor",
			"19thODSTArmor"
		};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] =
		{
			"KAT_M56S_Jaeger_BDU",
			"KAT_M56S_Jaeger_BDU_Blue",
			"KAT_M56S_Jaeger_BDU_Orange"
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class KAT_M56S_Jaeger_BDUs
		{
			label = "Jaeger";
			options[] = { "color" };
			class color
			{
				label = "Color";
				alwaysSelectable = 1;
				values[] =
				{
					"black",
					"blue",
					"orange"
				};
				class black
				{
					label = "Black";
					image = "#(rgb,8,8,3)color(0,0,0,1)";
				};
				class blue
				{
					label = "Blue";
					image = "#(rgb,8,8,3)color(0.0,0,0.51,1)";
				};
				class orange
				{
					label = "Orange";
					image = "#(rgb,8,8,3)color(0.81,0.58,0.03,1)";
				};
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
		class KAT_M56S_Jaeger_BDU
		{
			model = "KAT_M56S_Jaeger_BDUs";
			color = "black";
		};
		class KAT_M56S_Jaeger_BDU_Blue
		{
			model = "KAT_M56S_Jaeger_BDUs";
			color = "blue";
		};
		class KAT_M56S_Jaeger_BDU_Orange
		{
			model = "KAT_M56S_Jaeger_BDUs";
			color = "orange";
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class KAT_M56S_BDU;
	class KAT_M56S_Jaeger_BDU : KAT_M56S_BDU
	{
		displayName = "[KAT] M56S/J BDU";
		class ItemInfo: ItemInfo
		{
			uniformClass = "KAT_M56S_Jaeger_BDU";
			uniformType = "Neopren";
		};
	};
	class KAT_M56S_Jaeger_BDU_Blue : KAT_M56S_Jaeger_BDU
	{
		displayName = "[KAT] M56S/J BDU [Blue]";
		class ItemInfo: ItemInfo
		{
			uniformClass = "KAT_M56S_Jaeger_BDU_Blue";
		};
	};
	class KAT_M56S_Jaeger_BDU_Orange : KAT_M56S_Jaeger_BDU
	{
		displayName = "[KAT] M56S/J BDU [Orange]";
		class ItemInfo: ItemInfo
		{
			uniformClass = "KAT_M56S_Jaeger_BDU_Orange";
		};
	};
};
class CfgVehicles
{
	class KAT_Base_Uniform;
	class KAT_M56S_Jaeger_BDU: KAT_Base_Uniform
	{
		uniformClass = "KAT_M56S_Jaeger_BDU";
		model = "ODST\ODST_Uniform_F.p3d";
		hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[] = {"KAT_ARMOR\_base\uniform\M56S_Jaeger\m56s_jaeger_top.paa","KAT_ARMOR\_base\uniform\M56S_Jaeger\m56s_jaeger_pants.paa"};
	};
	class KAT_M56S_Jaeger_BDU_Blue: KAT_M56S_Jaeger_BDU
	{
		uniformClass = "KAT_M56S_Jaeger_BDU_Blue";
		hiddenSelectionsTextures[] = {"KAT_ARMOR\_base\uniform\M56S_Jaeger\m56s_jaeger_top_blue.paa","KAT_ARMOR\_base\uniform\M56S_Jaeger\m56s_jaeger_pants_blue.paa"};
	};
	class KAT_M56S_Jaeger_BDU_Orange: KAT_M56S_Jaeger_BDU
	{
		uniformClass = "KAT_M56S_Jaeger_BDU_Orange";
		hiddenSelectionsTextures[] = {"KAT_ARMOR\_base\uniform\M56S_Jaeger\m56s_jaeger_top_orange.paa","KAT_ARMOR\_base\uniform\M56S_Jaeger\m56s_jaeger_pants_orange.paa"};
	};
};

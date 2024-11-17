// %s

#define _ARMA_

class CfgPatches
{
	class KAT_Gear_DressUniforms
	{
		author = "MisfitMaid";
		addonRootClass = "KAT_Gear";
		requiredAddons[] = {"KAT_Gear"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {
%s
		};
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class KAT_DressUniforms
		{
			label = "[Azrael] Dress Uniforms";
			author = "MisfitMaid";
			options[] = {"type"};
			class type
			{
				label = "Customization";
				values[] = {
%s
				};
				alwaysSelectable = 1;
			};
		};
	};
};
class XtdGearInfos
{
	class CfgWeapons
	{
%s
	};
};
class CfgWeapons
{
	class OPTRE_UNSC_Army_Uniform_WDL;
	class OPTRE_UNSC_Dress_Uniform_gray: OPTRE_UNSC_Army_Uniform_WDL
	{
		class ItemInfo;
	};
	class OPTRE_MJOLNIR_Undersuit;
	class OPTRE_MJOLNIR_Dress_Uniform: OPTRE_MJOLNIR_Undersuit
	{
		class ItemInfo;
	};

%s
};
class CfgVehicles
{
	class KAT_Base_Uniform;
	class OPTRE_Spartan_DressWhite;

%s
};

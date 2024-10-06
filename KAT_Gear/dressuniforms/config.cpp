// AUTOGENERATED FILE. Edit config.cpp.tpl instead. This file will be overwritten by the build script

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
			"KAT_Dress_Uniform_Generic",
			"KAT_Dress_Uniform_barnes",
			"KAT_Dress_Uniform_cline",
			"KAT_Dress_Uniform_cooper",
			"KAT_Dress_Uniform_frost",
			"KAT_Dress_Uniform_halleck",
			"KAT_Dress_Uniform_hayes",
			"KAT_Dress_Uniform_hunter",
			"KAT_Dress_Uniform_kertz",
			"KAT_Dress_Uniform_khan",
			"KAT_Dress_Uniform_laeca",
			"KAT_Dress_Uniform_lane",
			"KAT_Dress_Uniform_marshall",
			"KAT_Dress_Uniform_morningstar",
			"KAT_Dress_Uniform_nomad",
			"KAT_Dress_Uniform_payne",
			"KAT_Dress_Uniform_prentice",
			"KAT_Dress_Uniform_raider",
			"KAT_Dress_Uniform_reid",
			"KAT_Dress_Uniform_richter",
			"KAT_Dress_Uniform_xnselnnedua",
			"KAT_Dress_Uniform_tessag216",
			"KAT_Dress_Uniform_vyke",
			"KAT_Dress_Uniform_wells",
			"KAT_Dress_Uniform_wolf"
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
					"Generic",
					"Barnes",
					"Cline",
					"Cooper",
					"Frost",
					"Halleck",
					"Hayes",
					"Hunter",
					"Kertz",
					"Khan",
					"Laeca",
					"Lane",
					"Marshall",
					"Morningstar",
					"Nomad",
					"Payne",
					"Prentice",
					"Raider",
					"Reid",
					"Richter",
					"Sel�nne",
					"Tessa G216",
					"Vyke",
					"Wells",
					"Wolf"
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
		class KAT_Dress_Uniform_Generic {model = "KAT_DressUniforms"; type = "Generic";};
		class KAT_Dress_Uniform_barnes {model = "KAT_DressUniforms"; type = "Barnes";};
		class KAT_Dress_Uniform_cline {model = "KAT_DressUniforms"; type = "Cline";};
		class KAT_Dress_Uniform_cooper {model = "KAT_DressUniforms"; type = "Cooper";};
		class KAT_Dress_Uniform_frost {model = "KAT_DressUniforms"; type = "Frost";};
		class KAT_Dress_Uniform_halleck {model = "KAT_DressUniforms"; type = "Halleck";};
		class KAT_Dress_Uniform_hayes {model = "KAT_DressUniforms"; type = "Hayes";};
		class KAT_Dress_Uniform_hunter {model = "KAT_DressUniforms"; type = "Hunter";};
		class KAT_Dress_Uniform_kertz {model = "KAT_DressUniforms"; type = "Kertz";};
		class KAT_Dress_Uniform_khan {model = "KAT_DressUniforms"; type = "Khan";};
		class KAT_Dress_Uniform_laeca {model = "KAT_DressUniforms"; type = "Laeca";};
		class KAT_Dress_Uniform_lane {model = "KAT_DressUniforms"; type = "Lane";};
		class KAT_Dress_Uniform_marshall {model = "KAT_DressUniforms"; type = "Marshall";};
		class KAT_Dress_Uniform_morningstar {model = "KAT_DressUniforms"; type = "Morningstar";};
		class KAT_Dress_Uniform_nomad {model = "KAT_DressUniforms"; type = "Nomad";};
		class KAT_Dress_Uniform_payne {model = "KAT_DressUniforms"; type = "Payne";};
		class KAT_Dress_Uniform_prentice {model = "KAT_DressUniforms"; type = "Prentice";};
		class KAT_Dress_Uniform_raider {model = "KAT_DressUniforms"; type = "Raider";};
		class KAT_Dress_Uniform_reid {model = "KAT_DressUniforms"; type = "Reid";};
		class KAT_Dress_Uniform_richter {model = "KAT_DressUniforms"; type = "Richter";};
		class KAT_Dress_Uniform_xnselnnedua {model = "KAT_DressUniforms"; type = "Sel�nne";};
		class KAT_Dress_Uniform_tessag216 {model = "KAT_DressUniforms"; type = "Tessa G216";};
		class KAT_Dress_Uniform_vyke {model = "KAT_DressUniforms"; type = "Vyke";};
		class KAT_Dress_Uniform_wells {model = "KAT_DressUniforms"; type = "Wells";};
		class KAT_Dress_Uniform_wolf {model = "KAT_DressUniforms"; type = "Wolf";};
	};
};
class CfgWeapons
{
	class OPTRE_UNSC_Army_Uniform_WDL;
	class OPTRE_UNSC_Dress_Uniform_gray: OPTRE_UNSC_Army_Uniform_WDL
	{
		class ItemInfo;
	};

	class KAT_Dress_Uniform_Generic: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Generic)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_Generic_Soldier"; };
	};
	class KAT_Dress_Uniform_barnes: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Barnes)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_barnes_Soldier"; };
	};
	class KAT_Dress_Uniform_cline: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Cline)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_cline_Soldier"; };
	};
	class KAT_Dress_Uniform_cooper: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Cooper)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_cooper_Soldier"; };
	};
	class KAT_Dress_Uniform_frost: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Frost)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_frost_Soldier"; };
	};
	class KAT_Dress_Uniform_halleck: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Halleck)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_halleck_Soldier"; };
	};
	class KAT_Dress_Uniform_hayes: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Hayes)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_hayes_Soldier"; };
	};
	class KAT_Dress_Uniform_hunter: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Hunter)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_hunter_Soldier"; };
	};
	class KAT_Dress_Uniform_kertz: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Kertz)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_kertz_Soldier"; };
	};
	class KAT_Dress_Uniform_khan: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Khan)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_khan_Soldier"; };
	};
	class KAT_Dress_Uniform_laeca: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Laeca)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_laeca_Soldier"; };
	};
	class KAT_Dress_Uniform_lane: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Lane)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_lane_Soldier"; };
	};
	class KAT_Dress_Uniform_marshall: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Marshall)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_marshall_Soldier"; };
	};
	class KAT_Dress_Uniform_morningstar: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Morningstar)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_morningstar_Soldier"; };
	};
	class KAT_Dress_Uniform_nomad: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Nomad)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_nomad_Soldier"; };
	};
	class KAT_Dress_Uniform_payne: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Payne)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_payne_Soldier"; };
	};
	class KAT_Dress_Uniform_prentice: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Prentice)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_prentice_Soldier"; };
	};
	class KAT_Dress_Uniform_raider: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Raider)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_raider_Soldier"; };
	};
	class KAT_Dress_Uniform_reid: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Reid)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_reid_Soldier"; };
	};
	class KAT_Dress_Uniform_richter: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Richter)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_richter_Soldier"; };
	};
	class KAT_Dress_Uniform_xnselnnedua: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Sel�nne)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_xnselnnedua_Soldier"; };
	};
	class KAT_Dress_Uniform_tessag216: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Tessa G216)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_tessag216_Soldier"; };
	};
	class KAT_Dress_Uniform_vyke: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Vyke)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_vyke_Soldier"; };
	};
	class KAT_Dress_Uniform_wells: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Wells)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_wells_Soldier"; };
	};
	class KAT_Dress_Uniform_wolf: OPTRE_UNSC_Dress_Uniform_gray {
		displayName = "[Azrael] Dress Uniform (Wolf)";
		class ItemInfo: ItemInfo { uniformClass = "KAT_Dress_Uniform_wolf_Soldier"; };
	};
};
class CfgVehicles
{
	class KAT_Base_Uniform;

	class KAT_Dress_Uniform_Generic_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_Generic";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\_uniform_generic.paa"};
	};
	class KAT_Dress_Uniform_barnes_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_barnes";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_barnes.paa"};
	};
	class KAT_Dress_Uniform_cline_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_cline";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_cline.paa"};
	};
	class KAT_Dress_Uniform_cooper_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_cooper";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_cooper.paa"};
	};
	class KAT_Dress_Uniform_frost_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_frost";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_frost.paa"};
	};
	class KAT_Dress_Uniform_halleck_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_halleck";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_halleck.paa"};
	};
	class KAT_Dress_Uniform_hayes_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_hayes";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_hayes.paa"};
	};
	class KAT_Dress_Uniform_hunter_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_hunter";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_hunter.paa"};
	};
	class KAT_Dress_Uniform_kertz_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_kertz";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_kertz.paa"};
	};
	class KAT_Dress_Uniform_khan_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_khan";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_khan.paa"};
	};
	class KAT_Dress_Uniform_laeca_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_laeca";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_laeca.paa"};
	};
	class KAT_Dress_Uniform_lane_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_lane";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_lane.paa"};
	};
	class KAT_Dress_Uniform_marshall_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_marshall";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_marshall.paa"};
	};
	class KAT_Dress_Uniform_morningstar_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_morningstar";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_morningstar.paa"};
	};
	class KAT_Dress_Uniform_nomad_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_nomad";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_nomad.paa"};
	};
	class KAT_Dress_Uniform_payne_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_payne";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_payne.paa"};
	};
	class KAT_Dress_Uniform_prentice_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_prentice";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_prentice.paa"};
	};
	class KAT_Dress_Uniform_raider_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_raider";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_raider.paa"};
	};
	class KAT_Dress_Uniform_reid_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_reid";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_reid.paa"};
	};
	class KAT_Dress_Uniform_richter_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_richter";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_richter.paa"};
	};
	class KAT_Dress_Uniform_xnselnnedua_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_xnselnnedua";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_xnselnnedua.paa"};
	};
	class KAT_Dress_Uniform_tessag216_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_tessag216";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_tessag216.paa"};
	};
	class KAT_Dress_Uniform_vyke_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_vyke";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_vyke.paa"};
	};
	class KAT_Dress_Uniform_wells_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_wells";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_wells.paa"};
	};
	class KAT_Dress_Uniform_wolf_Soldier: KAT_Base_Uniform
	{
		dlc = "OPTRE";
		author = "MisfitMaid";
		uniformClass = "KAT_Dress_Uniform_wolf";
		model = "\OPTRE_UNSC_Units\Army\officer.p3d";
		hiddenSelections[] = {"camo1","camo2","insignia","clan"};
		hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Army\data\dress_uniform_odst_co.paa","KAT_Gear\dressuniforms\uniform_wolf.paa"};
	};
};

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

class CfgWeapons
{
	class ItemInfo;
	class MA_Vest_Base;
	class KAT_Armor__Base : MA_Vest_Base
	{
		scope = 1;
		scopeArsenal = 1;
		displayName = "[KAT] Base M56R";
		vestType = "Rebreather";
		model = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
		picture = "MA_Armor\data\Icons\H3ODST_Vest.paa";
		class ItemInfo: ItemInfo
		{
			vestType = "Rebreather";
			uniformModel = "MA_Armor\data\Vests\H3_ODST\H3_ODST_Armor.p3d";
			containerClass = "Supply200";
			hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","H3_Forearm_Left","H3_Forearm_Right","H3_Pauldron_Left","H3_Pauldron_Right","Reach_Shoulder_Radio_Left","Reach_Shoulder_Radio_Right","Reach_Sniper_Pauldron_Left","Reach_Sniper_Pauldron_Right","Reach_CQB_Pauldron_Left","Reach_CQB_Pauldron_Right","Thigh_Pouch","H3_Armor_Upper","H3_Armor_Lower"};
			hiddenSelectionsTextures[] = {"MA_Armor\data\Vests\H3_ODST\H3_Upper_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\H3_Lower_Armor_co.paa","MA_Armor\data\Vests\H3_ODST\Addons\Thigh_Pouch_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Upper_co.paa","MA_Armor\data\Vests\Reach_ODST\Reach_Armor_Lower_co.paa","MA_Armor\data\Vests\Reach_ODST\Canisters_co.paa","MA_Armor\data\Vests\Reach_ODST\Forearm_Vents_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Sniper_Shoulders\Sniper_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\CQB_Shoulders\CQB_co.paa","MA_Armor\data\Vests\Reach_ODST\Addons\Reach_Shoulder_Radio\Shoulder_Radio_Green_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 50;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 55;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 55;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 55;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
					armor = 50;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};

    class Uniform_Base;
	class U_B_PilotCoveralls;
	class UniformItem;
	class U_B_CombatUniform_mcam: Uniform_Base
	{
		class ItemInfo;
	};
	class KAT_Base: U_B_CombatUniform_mcam
	{
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		author = "Soldner";
		ACE_GForceCoef = 0.9;
		picture = "\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protectionLevel = "4 + 8";
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
			uniformModel = "-";
			uniformType = "Neopren";
			mass = 40;
		};
	}

	class MA_M56S_BDU;
	class KAT_M56S_BDU : MA_M56S_BDU
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "[KAT] M56S BDU";
		CBRN_protectionLevel = "4 + 8";
		ACE_GForceCoef = 0.9;
		class ItemInfo: ItemInfo
		{	
			uniformClass = "KAT_M56S_BDU";	
			uniformType = "Neopren";
		};
	};
};
class CfgVehicles
{
	class SoldierWB;
	class B_Pilot_F;
	class KAT_Soldier_Base: SoldierWB
	{
		class HitPoints;
	};
	class KAT_Soldier_WDL: KAT_Soldier_Base
	{
		class HitPoints: HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
			class Incapacitated;
			class HitLeftArm;
			class HitRightArm;
			class HitLeftLeg;
			class HitRightLeg;
			class ACE_HDBracket;
		};
	};
	class KAT_Base_Uniform: KAT_Soldier_WDL
	{
		class HitPoints: HitPoints
		{
			class HitFace: HitFace
			{
				armor = 5;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitNeck
			{
				armor = 5;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitHead
			{
				armor = 5;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitPelvis
			{
				armor = 6;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 0.1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 0.1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitChest
			{
				armor = 6;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitBody
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitArms
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitHands
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitLegs
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: Incapacitated
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 0.1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm: HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitRightArm
			{
				armor = 6;
				material = -1;
				name = "hand_r";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.1;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitLeftLeg: HitRightArm
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitRightLeg
			{
				armor = 6;
				material = -1;
				name = "leg_r";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.1;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class ACE_HDBracket: ACE_HDBracket
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0;
				radius = 1;
				explosionShielding = 0.1;
				visual = "";
				minimalHit = 0;
				depends = "HitHead";
			};
		};
		dlc = "KAT";
		scope = 1;
		scopeCurator = 1;
		scopeArsenal = 1;
		vehicleClass = "";
		uniformClass = "";
		model = "";
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {};
		editorSubcategory = "KAT_EdSubCat_ODSTs";
	};

	class KAT_M56S_BDU: KAT_Base_Uniform
	{
		dlc = "KAT";
		scopeArsenal = 2;
		UniformClass = "KAT_M56S_BDU";
		model = "MA_Armor\data\Uniforms\H3_ODST\H3_ODST_Uniform.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"MA_Armor\data\Uniforms\H3_ODST\H3_Undersuit_co.paa"};
	};
};

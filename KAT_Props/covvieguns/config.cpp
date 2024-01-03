#define _ARMA_

class CfgPatches
{
	class KAT_Props
	{
		author = "MisfitMaid";
		hideName = 0;
		units[] = {};
		weapons[] ={};
		magazines[]={};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

// OPTRE_FC_EditorCategory_Cov
class CfgEditorSubcategories {
	class KAT_Props_CovvieWeapons {
		displayName="Covenant Weapon Props (Demilitarized)";
	};
};

class CfgVehicles {
	class Static;
	class KAT_Prop_Covenant_Base : Static {
		faction="OPTRE_FC_Covenant";
		editorCategory="OPTRE_FC_EditorCategory_Cov";
		editorSubcategory="KAT_Props_CovvieWeapons";
		vehicleClass="OPTRE_FC_Objects_class";
		scope=2;
		scopeCurator=2;
		hiddenSelections[] = {"zasleh"};
		descriptionShort="A captured Covenant weapon which has been rendered unfit for further use.";
	}

	class KAT_Prop_BeamRifle : KAT_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\beamrifle\T50_SRS.p3d";
		picture="\OPTRE_FC_Weapons\BeamRifle\data\BeamRiflePicture_CA.paa";
		displayName="Type-50 Particle Beam Rifle (Demilitarized)";
	};

	class KAT_Prop_CovCarbine : KAT_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\Carbine\Type51_Carbine.p3d";
		picture="\OPTRE_FC_Weapons\Carbine\data\Carbine_Picture_CA.paa";
		displayName="Type-51 Carbine (Demilitarized)";
	};

	class KAT_Prop_ConcRifle : KAT_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\ConcussionRifle\Concussion_Rifle.p3d";
		picture="\OPTRE_FC_Weapons\ConcussionRifle\data\icon_concussion_rifle.paa";
		displayName="Type-50 Concussion Rifle (Demilitarized)";
	};

	class KAT_Prop_FuelRod : KAT_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\FuelRodCannon\FRC.p3d";
		picture="\OPTRE_FC_Weapons\FuelRodCannon\icon\fuelrod_icon.paa";
		displayName="Type-33 Fuel Rod Cannon (Demilitarized)";
	};

	class KAT_Prop_Needler : KAT_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\needler\needler.p3d";
		picture="\OPTRE_FC_Weapons\needler\data\Icon_Needler.paa";
		displayName="Type-33 Needler (Demilitarized)";
	};

	class KAT_Prop_NeedleRifle : KAT_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\NeedleRifle\NeedleRifle.p3d";
		picture="\OPTRE_FC_Weapons\needler\data\Icon_Needler.paa";
		displayName="Type-31 Needle Rifle (Demilitarized)";
	};

	class KAT_Prop_PlasmaPistol : KAT_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\PlasmaPistol\PlasmaPistol_vince.p3d";
		picture="\OPTRE_FC_Weapons\PlasmaPistol\data\Plasma_Pistol_Picture_CA.paa";
		displayName="Type-25 Plasma Pistol (Demilitarized)";
	};

	class KAT_Prop_PlasmaRepeater : KAT_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\PlasmaRepeater\PlasmaRepeater.p3d";
		picture="\OPTRE_FC_Weapons\PlasmaRepeater\data\Repeater_Picture_CA.paa";
		displayName="Type-51 Plasma Repeater (Demilitarized)";
	};

	class KAT_Prop_PlasmaRifle : KAT_Prop_Covenant_Base {
		model="\OPTRE_FC_Weapons\PlasmaRifle\PlasmaRifle_vince.p3d";
		picture="\OPTRE_FC_Weapons\PlasmaRifle\data\Plasma_Rifle_Picture_CA.paa";
		displayName="Type-25 Plasma Rifle (Demilitarized)";
	};

	class KAT_Prop_PulseCarbine : KAT_Prop_Covenant_Base {
		model="OPTRE_FC_Weapons\PulseCarbine\Pulse_Carbine.p3d";
		picture="\OPTRE_FC_Weapons\PlasmaRepeater\data\Repeater_Picture_CA.paa";
		displayName="Type-60 Pulse Carbine (Demilitarized)";
	};
};

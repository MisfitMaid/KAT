#define _ARMA_

class CfgPatches
{
	class KAT_Vehicles
	{
		author = "MisfitMaid";
		hideName = 0;
		units[] = {
			"KAT_Pelican_Artemis",
			"KAT_Pelican_Raider",
			"KAT_Falcon_Artemis"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"OPTRE_Vehicles",
			"OPTRE_Vehicles_Air",
			"Splits_Vehicles_Air_Pelican"
		};
	};
};

class CfgVehicles {

	class OPTRE_UNSC_falcon_armed_S;
	class KAT_Falcon_Artemis : OPTRE_UNSC_falcon_armed_S {
		displayName="[Azrael] UH-144S Falcon [Artemis]";
		crew="OPTRE_UNSC_Marine_FML_Pilot";
		hiddenSelections[] = {"camo1","camo2","camo3","camoGlass","camoGlassPilot", "camoDecal"};
		hiddenSelectionsTextures[] = {
			"\OPTRE_Vehicles_Air\falcon\data\black\falcon_main_co.paa",
			"\OPTRE_Vehicles_Air\falcon\data\black\falcon_attachments_co.paa",
			"\KAT_Vehicles\falcon_interior.paa",
			"\KAT_Vehicles\falcon_glass.paa",
			"\KAT_Vehicles\falcon_glass.paa",
			"\KAT_Vehicles\falcon_48-7829.paa"
		};
		OPTRE_canThrust=1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=83;
		OPTRE_velocityMult=1;
	};

	class Splits_UNSC_D77_TC_Pelican;
	class KAT_Pelican_Artemis : Splits_UNSC_D77_TC_Pelican {
		displayName="[Azrael] D77H-TCI/AV Pelican [Artemis]";
		crew="OPTRE_UNSC_Airforce_FML_Soldier_Airman";
		author = "MisfitMaid";
		faction = "OPTRE_UNSC";
		OPTRE_canThrust = 1;
		OPTRE_minVelocity = 1.4;
		OPTRE_maxVelocity = 167;
		OPTRE_velocityMult = 1;
		hiddenSelections[] = { "camo1","camo2","camo3" };
		hiddenSelectionsTextures[] = {
			"KAT_Vehicles\e621-default\pelican_body.paa", // body
			"KAT_Vehicles\e621-default\pelican_wings_gear.paa", // wings_and_gear
			"KAT_Vehicles\e621-default\pelican_weaponry.paa" // weaponry
		};
	};

	class KAT_Pelican_Raider : KAT_Pelican_Artemis { // textureSources is not working :(
		displayName="[Azrael] D77H-TCI/AV Pelican [Raider]";
		hiddenSelectionsTextures[] = {
			"KAT_Vehicles\e444-raider\pelican_body.paa", // body
			"KAT_Vehicles\e444-raider\pelican_wings_gear.paa", // wings_and_gear
			"KAT_Vehicles\e444-raider\pelican_weaponry.paa" // weaponry
		};
	};
};

#define _ARMA_

class CfgPatches
{
	class KAT_Vehicles
	{
		author = "MisfitMaid";
		hideName = 0;
		units[] = {
			"KAT_Pelican_Artemis",
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
		displayName="UH-144S Falcon [Artemis]";
		crew="OPTRE_UNSC_Airforce_FML_Soldier_Airman";
		hiddenSelections[] = {"camo1","camo2","camo3","camoGlass","camoGlassPilot"};
		hiddenSelectionsTextures[] = {
			"KAT_Vehicles\e621-default\falcon_main_co.paa",
			"KAT_Vehicles\e621-default\falcon_attachments_co.paa",
			"KAT_Vehicles\e621-default\falcon_interior_co.paa",
			"KAT_Vehicles\e621-default\falcon_glass_ca.paa",
			"KAT_Vehicles\e621-default\falcon_glass_ca.paa"
		};
		OPTRE_canThrust=1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=83;
		OPTRE_velocityMult=1;

		class textureSources {
			class e621
			{
				displayName="E621 Artemis";
				author="frwrd";
				textures[]=
				{
					"KAT_Vehicles\e621-default\falcon_main_co.paa",
					"KAT_Vehicles\e621-default\falcon_attachments_co.paa",
					"KAT_Vehicles\e621-default\falcon_interior_co.paa",
					"KAT_Vehicles\e621-default\falcon_glass_ca.paa",
					"KAT_Vehicles\e621-default\falcon_glass_ca.paa"
				};
				factions[]=
				{
					"OPTRE_UNSC"
				};
			};
		};
	};

	class Splits_UNSC_D77_TC_Pelican;
	class KAT_Pelican_Artemis : Splits_UNSC_D77_TC_Pelican {
		displayName="D77H-TCI/AV Pelican [Artemis]";
		crew="OPTRE_UNSC_Airforce_FML_Soldier_Airman";
		author = "MisfitMaid";
		faction = "OPTRE_UNSC";
		OPTRE_canThrust = 1;
		OPTRE_minVelocity = 1.4;
		OPTRE_maxVelocity = 167;
		OPTRE_velocityMult = 1;
		hiddenSelectionsTextures[] = {
			"KAT_Vehicles\e621-default\pelican_body.paa", // body
			"KAT_Vehicles\e621-default\pelican_wings_gear.paa", // wings_and_gear
			"KAT_Vehicles\e621-default\pelican_weaponry.paa" // weaponry
		};
		class textureSources
		{
			class e621
			{
				displayName = "E621 Artemis";
				author = "MisfitMaid";
				textures[] =
				{
					
					"KAT_Vehicles\e621-default\pelican_body.paa", // body
					"KAT_Vehicles\e621-default\pelican_wings_gear.paa", // wings_and_gear
					"KAT_Vehicles\e621-default\pelican_weaponry.paa" // weaponry
				};
				factions[] =
				{
					"OPTRE_UNSC"
				};
			};
		};
	};
};

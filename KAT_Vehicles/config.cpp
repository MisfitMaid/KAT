#define _ARMA_

class CfgPatches
{
	class KAT_Vehicles
	{
		author = "MisfitMaid";
		hideName = 0;
		units[] = {
			"KAT_Pelican_Artemis",
			"KAT_Falcon_Artemis",
			"KAT_Pelican_SOCOM_Artemis"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"OPTRE_Vehicles",
			"OPTRE_Vehicles_Air"
		};
	};
};

class CfgVehicles {
	class OPTRE_Pelican_armed;
	class KAT_Pelican_Artemis : OPTRE_Pelican_armed {
		displayName="D77H-TCI/AV Pelican [Artemis]";
		crew="OPTRE_UNSC_Airforce_FML_Soldier_Airman";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"KAT_Vehicles\pelican_artemis_main_co.paa",
			""
		};
	};

	class OPTRE_Pelican_armed_SOCOM;
	class KAT_Pelican_SOCOM_Artemis : OPTRE_Pelican_armed_SOCOM {
		displayName="D77H-TCI/AV/SOCOM Pelican [Artemis]";
		crew="OPTRE_UNSC_Airforce_FML_Soldier_Airman";
		hiddenSelections[]=
		{
			"camo1",
			"camo3",
			"clan",
			"clan_text",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"KAT_Vehicles\pelican_artemis_main_co.paa",
			""
		};
	};

	class OPTRE_UNSC_falcon_armed_S;
	class KAT_Falcon_Artemis : OPTRE_UNSC_falcon_armed_S {
		displayName="UH-144S Falcon [Artemis]";
		crew="OPTRE_UNSC_Airforce_FML_Soldier_Airman";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"KAT_Vehicles\falcon_artemis_main_co.paa",
			"KAT_Vehicles\falcon_artemis_attachments_co.paa",
			"\optre_vehicles_air\falcon\data\falcon_interior_co.paa"
		};
		OPTRE_canThrust=1;
		OPTRE_minVelocity=1.4;
		OPTRE_maxVelocity=83;
		OPTRE_velocityMult=1;
	};

	
};

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
			"KAT_Armor\helper.paa",
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
			"KAT_Armor\helper.paa",
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
		
		class Turrets;
		class Turrets: Turrets
		{
			class MainTurret;
			class LeftDoorGun: MainTurret
			{
				CanEject=1;
				isCopilot=0;
				body="SideTurretL";
				gun="SideGunL";
				turretAxis="sidegun1_turretaxis";
				gunAxis="sidegun1_gunaxis";
				gunnerType="OPTRE_UNSC_Airforce_FML_Soldier_Airman";
				minElev=-45;
				maxElev=15;
				initElev=0;
				minTurn=-160;
				maxTurn=160;
				initTurn=90;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{15,15.0436},
						{25,90},
						{15,159.95599}
					};
					limitsArrayBottom[]=
					{
						{-38.4841,15.0196},
						{-42.385201,32.969002},
						{-50,86.480904},
						{-35.144001,157.4986}
					};
				};
				animationSourceBody="SideTurretL";
				animationSourceGun="SideGunL";
				stabilizedInAxes=0;
				gunBeg="usti hlavne2";
				gunEnd="konec hlavne2";
				gunnerName="$STR_A3_LEFT_GUNNER";
				gunnerOpticsShowCursor=1;
				memoryPointGunnerOptics="sidegun1view";
				gunnerAction="gunner_Heli_Transport_01_hands";
				gunnerInAction="gunner_Heli_Transport_01_hands";
				gunnerLeftHandAnimName="gunner_1_hand_l";
				gunnerRightHandAnimName="gunner_1_hand_r";
				gunnerLeftLegAnimName="gunner_1_legs";
				gunnerRightLegAnimName="gunner_1_legs";
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
				weapons[]=
				{
					"OPTRE_M247H_SideGun"
				};
				magazines[]=
				{
					"OPTRE_2000Rnd_127x99_M247H",
					"OPTRE_2000Rnd_127x99_M247H",
					"OPTRE_2000Rnd_127x99_M247H_HE",
					"OPTRE_2000Rnd_127x99_M247H_HE"
				};
				commanding=-2;
				primaryGunner=0;
				class ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos_cargo_l";
				memoryPointsGetInGunnerDir="pos_cargo_l_dir";
				proxyIndex=8;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				castGunnerShadow=1;
				viewGunnerShadow=1;
				playerPosition=3;
				soundAttenuationTurret="HeliAttenuationGunner";
				disableSoundAttenuation=0;
				canUseScanners=0;
				selectionFireAnim="zasleh2";
				class Hitpoints
				{
				};
			};
			class RightDoorGun: LeftDoorGun
			{
				minTurn=-160;
				maxTurn=160;
				initTurn=-90;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{15,-160},
						{25,-90},
						{15,-15}
					};
					limitsArrayBottom[]=
					{
						{-35.237701,-160},
						{-43.310501,-148.5255},
						{-49.999699,-92.083199},
						{-42.8167,-23.566}
					};
				};
				body="SideTurretR";
				gun="SideGunR";
				turretAxis="sidegun2_turretaxis";
				gunAxis="sidegun2_gunaxis";
				animationSourceBody="SideTurretR";
				animationSourceGun="SideGunR";
				selectionFireAnim="zasleh3";
				proxyIndex=9;
				gunnerName="$STR_A3_RIGHT_GUNNER";
				weapons[]=
				{
					"OPTRE_M247H_SideGun2"
				};
				commanding=-3;
				gunBeg="usti hlavne3";
				gunEnd="konec hlavne3";
				primaryGunner=0;
				memoryPointGun="usti hlavne3";
				memoryPointGunnerOptics="sidegun2view";
				gunnerCompartments="Compartment2";
				gunnerLeftHandAnimName="gunner_2_hand_l";
				gunnerRightHandAnimName="gunner_2_hand_r";
				gunnerLeftLegAnimName="gunner_2_legs";
				gunnerRightLegAnimName="gunner_2_legs";
				memoryPointsGetInGunner="pos_cargo_r";
				memoryPointsGetInGunnerDir="pos_cargo_r_dir";
				canUseScanners=0;
				class Hitpoints
				{
				};
			};
		};
	};

	
};

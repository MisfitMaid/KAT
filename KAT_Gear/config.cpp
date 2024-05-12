#define _ARMA_

class CfgPatches
{
	class KAT_Gear
	{
		author = "MisfitMaid";
		hideName = 0;
		units[] = {
			"KAT_ZEUS_LR_Spartan"
		};
		weapons[] = {};
		magazines[]=
		{
			"KAT_60Rnd_5x23mm_Mag_APT5",

			"KAT_200Rnd_95x40_Box_JHP",
			"KAT_200Rnd_95x40_Box_JHPT",
			"KAT_200Rnd_95x40_Box_JHPT8",
			"KAT_200Rnd_95x40_Box_HPSAP",
			"KAT_200Rnd_95x40_Box_HPSAPT",
			"KAT_200Rnd_95x40_Box_HPSAPT8",
			"KAT_200Rnd_95x40_Box_SS",
			"KAT_200Rnd_95x40_Box_SST",
			"KAT_200Rnd_95x40_Box_SST8",
			"KAT_100Rnd_95x40_Box_JHP",
			"KAT_100Rnd_95x40_Box_JHPT",
			"KAT_100Rnd_95x40_Box_JHPT8",
			"KAT_100Rnd_95x40_Box_HPSAP",
			"KAT_100Rnd_95x40_Box_HPSAPT",
			"KAT_100Rnd_95x40_Box_HPSAPT8",
			"KAT_100Rnd_95x40_Box_SS",
			"KAT_100Rnd_95x40_Box_SST",
			"KAT_100Rnd_95x40_Box_SST8",
			
			"KAT_4Rnd_145x114_HVAP_Mag",
			"KAT_4Rnd_145x114_APFSDS_Mag"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"TCF_MUNITIONS",
			"OPTRE_Weapons",
			"1st_MEU_patch_end"
		};
	};
};

class CfgMagazineWells
{
	class MEU_AR_95x40
	{
		rnd200_mags_reskin[]=
		{
			"KAT_200Rnd_95x40_Box_JHP",
			"KAT_200Rnd_95x40_Box_JHPT",
			"KAT_200Rnd_95x40_Box_JHPT8",
			"KAT_200Rnd_95x40_Box_HPSAP",
			"KAT_200Rnd_95x40_Box_HPSAPT",
			"KAT_200Rnd_95x40_Box_HPSAPT8",
			"KAT_200Rnd_95x40_Box_SS",
			"KAT_200Rnd_95x40_Box_SST",
			"KAT_200Rnd_95x40_Box_SST8"
		};
		rnd100_mags_reskin[]=
		{
			"KAT_100Rnd_95x40_Box_JHP",
			"KAT_100Rnd_95x40_Box_JHPT",
			"KAT_100Rnd_95x40_Box_JHPT8",
			"KAT_100Rnd_95x40_Box_HPSAP",
			"KAT_100Rnd_95x40_Box_HPSAPT",
			"KAT_100Rnd_95x40_Box_HPSAPT8",
			"KAT_100Rnd_95x40_Box_SS",
			"KAT_100Rnd_95x40_Box_SST",
			"KAT_100Rnd_95x40_Box_SST8"
		};
	};
	
	class OPTRE_Magwell_M73
	{
		rnd200_mags_reskin[]=
		{
			"KAT_200Rnd_95x40_Box_JHP",
			"KAT_200Rnd_95x40_Box_JHPT",
			"KAT_200Rnd_95x40_Box_JHPT8",
			"KAT_200Rnd_95x40_Box_HPSAP",
			"KAT_200Rnd_95x40_Box_HPSAPT",
			"KAT_200Rnd_95x40_Box_HPSAPT8",
			"KAT_200Rnd_95x40_Box_SS",
			"KAT_200Rnd_95x40_Box_SST",
			"KAT_200Rnd_95x40_Box_SST8"
		};
		rnd100_mags_reskin[]=
		{
			"KAT_100Rnd_95x40_Box_JHP",
			"KAT_100Rnd_95x40_Box_JHPT",
			"KAT_100Rnd_95x40_Box_JHPT8",
			"KAT_100Rnd_95x40_Box_HPSAP",
			"KAT_100Rnd_95x40_Box_HPSAPT",
			"KAT_100Rnd_95x40_Box_HPSAPT8",
			"KAT_100Rnd_95x40_Box_SS",
			"KAT_100Rnd_95x40_Box_SST",
			"KAT_100Rnd_95x40_Box_SST8"
		};
	}
	
	class OPTRE_Magwell_SRS99D {
		sniper_no_tracers[]=
		{
			"KAT_4Rnd_145x114_HVAP_Mag",
			"KAT_4Rnd_145x114_APFSDS_Mag"
		};
	};
	
	class MEU_smg_uw { // for some reason OPTRE_Magwell_M7 doesn't work
		KAT_5x23_60Rnd[]=
		{
			"KAT_60Rnd_5x23mm_Mag_APT5",
		};
	};
};

class CfgVehicles
{
	class OPTRE_ANPRC_521_Black_Spartan;
	class KAT_ZEUS_LR_Spartan: OPTRE_ANPRC_521_Black_Spartan
	{
		displayName="[Azrael] Zeus LR (Spartan)";
		tf_isolatedAmount=0.64999998;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="anarc210_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=120000;
		tf_dialogUpdate="[""%1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		maximumLoad=1000;
	};
};

class CfgMagazines
{
	class MEU_60Rnd_5x23mm_Mag_APT;
	class KAT_60Rnd_5x23mm_Mag_APT5: MEU_60Rnd_5x23mm_Mag_APT
	{
		displayname = "60Rnd 5x23mm AP Magazine (Tracers/5)";
		descriptionShort = "5x23mm AP (Tracers/5)";
		displaynameshort = "5x23mm AP T5";
		author = "MisfitMaid";
		tracersEvery=5;
		lastRoundsTracer=5;
	};

	class OPTRE_200Rnd_95x40_Box_Tracer;
	class KAT_200Rnd_95x40_Box_HPSAPT: OPTRE_200Rnd_95x40_Box_Tracer {
		displayname="200rd 9.5x40mm HP-SAP Box Magazine (Tracers/*)";
		descriptionShort="9.5x40mm HP-SAP (Tracers/*)";
		displaynameshort="9.5x40mm HP-SAP T*";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_200_hpsapt_co.paa"};
	};

	class OPTRE_200Rnd_95x40_Box_Tracer;
	class KAT_200Rnd_95x40_Box_HPSAPT8: OPTRE_200Rnd_95x40_Box_Tracer {
		displayname="200rd 9.5x40mm HP-SAP Box Magazine (Tracers/8)";
		descriptionShort="200rd 9.5x40mm HP-SAP Box Magazine (Tracers/8)";
		displaynameshort="9.5x40mm HP-SAP T8";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_200_hpsapt8_co.paa"};
		tracersEvery=8;
		lastRoundsTracer=10;
	};

	class OPTRE_200Rnd_95x40_Box;
	class KAT_200Rnd_95x40_Box_HPSAP: OPTRE_200Rnd_95x40_Box {
		displayname="200rd 9.5x40mm HP-SAP Box Magazine";
		descriptionShort="200rd 9.5x40mm HP-SAP Box Magazine";
		displaynameshort="9.5x40mm HP-SAP";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_200_hpsap_co.paa"};
	};

	class OPTRE_100Rnd_95x40_Box_Tracer;
	class KAT_100Rnd_95x40_Box_HPSAPT: OPTRE_100Rnd_95x40_Box_Tracer {
		displayname="100rd 9.5x40mm HP-SAP Box Magazine (Tracers/*)";
		descriptionShort="100rd 9.5x40mm HP-SAP Box Magazine (Tracers/*)";
		displaynameshort="9.5x40mm HP-SAP T*";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_100_hpsapt_co.paa"};
	};

	class OPTRE_100Rnd_95x40_Box_Tracer;
	class KAT_100Rnd_95x40_Box_HPSAPT8: OPTRE_100Rnd_95x40_Box_Tracer {
		displayname="100rd 9.5x40mm HP-SAP Box Magazine (Tracers/8)";
		descriptionShort="100rd 9.5x40mm HP-SAP Box Magazine (Tracers/8)";
		displaynameshort="9.5x40mm HP-SAP T8";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_100_hpsapt8_co.paa"};
		tracersEvery=8;
		lastRoundsTracer=10;
	};

	class OPTRE_100Rnd_95x40_Box;
	class KAT_100Rnd_95x40_Box_HPSAP: OPTRE_100Rnd_95x40_Box {
		displayname="100rd 9.5x40mm HP-SAP Box Magazine";
		descriptionShort="100rd 9.5x40mm HP-SAP Box Magazine";
		displaynameshort="9.5x40mm HP-SAP";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_100_hpsap_co.paa"};
	};

	class TCF_200Rnd_95x40_Box_JHPT;
	class KAT_200Rnd_95x40_Box_JHPT: TCF_200Rnd_95x40_Box_JHPT {
		displayname="200rd 9.5x40mm JHP Box Magazine (Tracers/*)";
		descriptionShort="200rd 9.5x40mm JHP Box Magazine (Tracers/*)";
		displaynameshort="9.5x40mm JHP T*";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_200_jhpt_co.paa"};
	};

	class TCF_200Rnd_95x40_Box_JHPT;
	class KAT_200Rnd_95x40_Box_JHPT8: TCF_200Rnd_95x40_Box_JHPT {
		displayname="200rd 9.5x40mm JHP Box Magazine (Tracers/8)";
		descriptionShort="200rd 9.5x40mm JHP Box Magazine (Tracers/8)";
		displaynameshort="9.5x40mm JHP T8";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_200_jhpt8_co.paa"};
		tracersEvery=8;
		lastRoundsTracer=10;
	};

	class TCF_200Rnd_95x40_Box_JHP;
	class KAT_200Rnd_95x40_Box_JHP: TCF_200Rnd_95x40_Box_JHP {
		displayname="200rd 9.5x40mm JHP Box Magazine";
		descriptionShort="200rd 9.5x40mm JHP Box Magazine";
		displaynameshort="9.5x40mm JHP";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_200_jhp_co.paa"};
	};

	class TCF_100Rnd_95x40_Box_JHPT;
	class KAT_100Rnd_95x40_Box_JHPT: TCF_100Rnd_95x40_Box_JHPT {
		displayname="100rd 9.5x40mm JHP Box Magazine (Tracers/*)";
		descriptionShort="100rd 9.5x40mm JHP Box Magazine (Tracers/*)";
		displaynameshort="9.5x40mm JHP T*";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_100_jhpt_co.paa"};
	};

	class TCF_100Rnd_95x40_Box_JHPT;
	class KAT_100Rnd_95x40_Box_JHPT8: TCF_100Rnd_95x40_Box_JHPT {
		displayname="100rd 9.5x40mm JHP Box Magazine (Tracers/8)";
		descriptionShort="100rd 9.5x40mm JHP Box Magazine (Tracers/8)";
		displaynameshort="9.5x40mm JHP T8";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_100_jhpt8_co.paa"};
		tracersEvery=8;
		lastRoundsTracer=10;
	};

	class TCF_100Rnd_95x40_Box_JHP;
	class KAT_100Rnd_95x40_Box_JHP: TCF_100Rnd_95x40_Box_JHP {
		displayname="100rd 9.5x40mm JHP Box Magazine";
		descriptionShort="100rd 9.5x40mm JHP Box Magazine";
		displaynameshort="9.5x40mm JHP";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_100_jhp_co.paa"};
	};

	class TCF_200Rnd_95x40_Box_SST;
	class KAT_200Rnd_95x40_Box_SST: TCF_200Rnd_95x40_Box_SST {
		displayname="200rd 9.5x40mm SS Box Magazine (Tracers/*)";
		descriptionShort="200rd 9.5x40mm SS Box Magazine (Tracers/*)";
		displaynameshort="9.5x40mm SS T*";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_200_sst_co.paa"};
	};

	class TCF_200Rnd_95x40_Box_SST;
	class KAT_200Rnd_95x40_Box_SST8: TCF_200Rnd_95x40_Box_SST {
		displayname="200rd 9.5x40mm SS Box Magazine (Tracers/8)";
		descriptionShort="200rd 9.5x40mm SS Box Magazine (Tracers/8)";
		displaynameshort="9.5x40mm SS T8";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_200_sst8_co.paa"};
		tracersEvery=8;
		lastRoundsTracer=10;
	};

	class TCF_200Rnd_95x40_Box_SS;
	class KAT_200Rnd_95x40_Box_SS: TCF_200Rnd_95x40_Box_SS {
		displayname="200rd 9.5x40mm SS Box Magazine";
		descriptionShort="200rd 9.5x40mm SS Box Magazine";
		displaynameshort="9.5x40mm SS";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_200_ss_co.paa"};
	};

	class TCF_100Rnd_95x40_Box_SST;
	class KAT_100Rnd_95x40_Box_SST: TCF_100Rnd_95x40_Box_SST {
		displayname="100rd 9.5x40mm SS Box Magazine (Tracers/*)";
		descriptionShort="100rd 9.5x40mm SS Box Magazine (Tracers/*)";
		displaynameshort="9.5x40mm SS T*";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_100_sst_co.paa"};
	};

	class TCF_100Rnd_95x40_Box_SST;
	class KAT_100Rnd_95x40_Box_SST8: TCF_100Rnd_95x40_Box_SST {
		displayname="100rd 9.5x40mm SS Box Magazine (Tracers/8)";
		descriptionShort="100rd 9.5x40mm SS Box Magazine (Tracers/8)";
		displaynameshort="9.5x40mm SS T8";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_100_sst8_co.paa"};
		tracersEvery=8;
		lastRoundsTracer=10;
	};

	class TCF_100Rnd_95x40_Box_SS;
	class KAT_100Rnd_95x40_Box_SS: TCF_100Rnd_95x40_Box_SS {
		displayname="100rd 9.5x40mm SS Box Magazine";
		descriptionShort="100rd 9.5x40mm SS Box Magazine";
		displaynameshort="9.5x40mm SS";
		author="MisfitMaid";
		picture="\KAT_Gear\data\Icon\95x40AmmoCan.paa";
		hiddenSelectionsTextures[]= {"KAT_Gear\data\Ammo\95x40_100_ss_co.paa"};
	};


	class OPTRE_4Rnd_145x114_APFSDS_Mag;
	class OPTRE_4Rnd_145x114_HVAP_Mag;
	
	class KAT_4Rnd_145x114_HVAP_Mag : OPTRE_4Rnd_145x114_APFSDS_Mag {
		displayname="4Rnd 14.5x114mm HVAP Magazine (C/No Tracers)";
		tracersEvery=0;
		lastRoundsTracer=0;
	};
	
	class KAT_4Rnd_145x114_APFSDS_Mag : OPTRE_4Rnd_145x114_APFSDS_Mag {
		displayname="4Rnd 14.5x114mm APFSDS Magazine (C/No Tracers)";
		tracersEvery=0;
		lastRoundsTracer=0;
	};
};

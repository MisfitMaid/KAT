#define _ARMA_

class CfgPatches
{
	class KAT_Weapons_AR
	{
		author = "Azrael Quartermaster Team";
		hideName = 0;
		units[] = {};
		weapons[] = {
			"KAT_M75"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {
		};
	};
};
class WeaponSlotsInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot_rail;
class Mode_FullAuto;
class UnderBarrelSlot;
class CfgWeapons {
	class LMG_03_base_F;
	class KAT_M75: LMG_03_base_F
	{
		displayName = "[Azrael] M75";
		baseWeapon = "KAT_M75";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		canShootInWater = 1;
		magazineWell[] = {"KAT_95x40_AR"};
		magazines[] = {"KAT_200Rnd_95x40_Box_JHPT8"};
		handAnim[] = {"OFP2_ManSkeleton","\OPTRE_Weapons\MG\data\anim\OPTRE_M73_handanim.rtm","Spartan_ManSkeleton","\OPTRE_MJOLNIR\data\anims\OPTRE_anims\Weapons\M73_1_Spartan.rtm"};
		model = "\OPTRE_Weapons\MG\M73.p3d";
		descriptionShort = "UNSC Light Machine Gun";
		picture = "\OPTRE_weapons\MG\icons\M73_1.paa";
		reloadAction = "GestureReloadM200";
		recoil = "recoil_lim";
		cursor = "OPTRE_M73";
		pictureWire = "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\MachineGun\MG_IRON.paa";
		ODST_1 = "OPTRE_ODST_HUD_AmmoCount_LMG";
		Glasses = "OPTRE_GLASS_HUD_AmmoCount_LMG";
		Eye = "OPTRE_EYE_HUD_AmmoCount_LMG";
		HUD_BulletInARows = 4;
		HUD_TotalPosibleBullet = 200;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"OPTRE_Weapons\MG\data\M73_co.paa"};
		class GunParticles
		{
			class EffectShotCloud
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] = {};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] = {"OPTRE_M392_Scope","OPTRE_BR55HB_Scope","OPTRE_M7_Sight","OPTRE_M393_Scope","OPTRE_M393_ACOG","OPTRE_M393_EOTECH","OPTRE_M73_SmartLink","OPTRE_BR45_Scope","Optre_Evo_Sight","Optre_Evo_Sight_Covie","Optre_Evo_Sight_Spartan","Optre_Evo_Sight_Innie","Optre_Evo_Sight_Yellow","Optre_Evo_Sight_Riser","Optre_Evo_Sight_Riser_Covie","Optre_Evo_Sight_Riser_Spartan","Optre_Evo_Sight_Riser_Innie","Optre_Evo_Sight_Riser_Yellow","Optre_Recon_Sight","Optre_Recon_Sight_Red","Optre_Recon_Sight_Green","Optre_Recon_Sight_Desert","Optre_Recon_Sight_UNSC","Optre_Recon_Sight_Snow"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] = {"OPTRE_BMR_Laser","OPTRE_BMR_MEQ_Flashlight","OPTRE_BMR_Vis_Red_Laser","optre_m12_laser","OPTRE_M12_Vis_Red_Laser","OPTRE_M12_Flashlight","acc_pointer_ir","acc_flashlight","ace_acc_pointer_green"};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[] = {"bipod_01_f_blk"};
			};
		};
	};
};
class CfgMagazineWells {
	class KAT_95x40_AR
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
		br_mags[]=
		{
			"OPTRE_42Rnd_95x40_Mag",
			"OPTRE_42Rnd_95x40_Mag_Tracer",
			"OPTRE_42Rnd_95x40_Mag_Tracer_Yellow"
		};
	}
};

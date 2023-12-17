#define _ARMA_

class CfgPatches
{
	class KAT_Props_Targets
	{
		author = "MisfitMaid";
		hideName = 0;
		units[] = {
			"TargetP_Cov_SangMinor",
			"TargetP_Cov_SangMajor",
			"TargetP_Cov_SangZealot",
			"TargetP_Cov_UnggoyMinor",
			"TargetP_Cov_KigyarSkirmisher"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
		};
	};
};
class CfgVehicles
{
	class TargetP_Inf_F;
	class TargetP_Cov_SangMinor: TargetP_Inf_F
	{
		author = "MisfitMaid";
		displayName = "Pop-Up Target Covenant Elite Minor";
		hiddenSelectionsTextures[] = {"\KAT_Props\Targets\Target_EliteMinor_co.paa","#(argb,8,8,3)color(0,0,0,0,ca)","#(argb,8,8,3)color(0,0,0,0,ca)"};
	};
	class TargetP_Cov_SangMajor: TargetP_Inf_F
	{
		author = "MisfitMaid";
		displayName = "Pop-Up Target Covenant Elite Major";
		hiddenSelectionsTextures[] = {"\KAT_Props\Targets\Target_EliteMajor_co.paa","#(argb,8,8,3)color(0,0,0,0,ca)","#(argb,8,8,3)color(0,0,0,0,ca)"};
	};
	class TargetP_Cov_SangZealot: TargetP_Inf_F
	{
		author = "MisfitMaid";
		displayName = "Pop-Up Target Covenant Elite Zealot";
		hiddenSelectionsTextures[] = {"\KAT_Props\Targets\Target_EliteZealot_co.paa","#(argb,8,8,3)color(0,0,0,0,ca)","#(argb,8,8,3)color(0,0,0,0,ca)"};
	};
	class TargetP_Cov_UnggoyMinor: TargetP_Inf_F
	{
		author = "MisfitMaid";
		displayName = "Pop-Up Target Covenant Grunt";
		hiddenSelectionsTextures[] = {"\KAT_Props\Targets\Target_Grunt_co.paa","#(argb,8,8,3)color(0,0,0,0,ca)","#(argb,8,8,3)color(0,0,0,0,ca)"};
	};
	class TargetP_Cov_KigyarSkirmisher: TargetP_Inf_F
	{
		author = "MisfitMaid";
		displayName = "Pop-Up Target Covenant Kig-Yar Skirmisher";
		hiddenSelectionsTextures[] = {"\KAT_Props\Targets\Target_KigYarSkirmisher_co.paa","#(argb,8,8,3)color(0,0,0,0,ca)","#(argb,8,8,3)color(0,0,0,0,ca)"};
	};
};

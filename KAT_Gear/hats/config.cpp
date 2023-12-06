class CfgPatches
{
	class KAT_Gear_Hats
	{
		requiredVersion=0.1;
		units[]=
		{
		};
		weapons[]={
            "KAT_Hat_Manticore"
        };
	};
};
class CfGWeapons
{
	class H_Cap_oli;
	class KAT_Hat_Manticore: H_Cap_oli
	{
		dlc="OPTRE";
		displayname="Cap [Manticore]";
		hiddenselectionstextures[]=
		{
			"KAT_Gear\Hats\hat_manticore_co.paa"
		};
	};
};

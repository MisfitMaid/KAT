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
        author="MisfitMaid";
        hiddenselectionstextures[]=
        {
            "KAT_Gear\hats\manticore_cap\_textures\hat_manticore_co.paa"
        };
    };
};

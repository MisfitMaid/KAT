class CfgPatches
{
    class KAT_Gear_Hats
    {
        requiredVersion=0.1;
        units[]=
        {
        };
        weapons[]={
            "KAT_Hat_Corbettposting"
        };
    };
};
class CfGWeapons
{
    class H_Cap_oli;
    class KAT_Hat_Corbettposting: H_Cap_oli
    {
        dlc="OPTRE";
        displayname="[Azrael] Cap (Fishing)";
        author="MisfitMaid";
        hiddenselectionstextures[]=
        {
            "KAT_Gear\hats\corbettposting_cap\hat_corbett_co.paa"
        };
    };
};

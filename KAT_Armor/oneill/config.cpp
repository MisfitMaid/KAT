class CfgPatches
{

}

class CfgWeapons
{
    class ItemInfo;

    class KAT_Base_Jaeger_Helmet;
    class KAT_Helmets_ONeill: KAT_Base_Jaeger_Helmet
    {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "wlan0";
		displayName = "[KAT] M56S/Jaeger Helmet (O'Neill)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"KAT_ARMOR\oneill\jaeger_helmet_oneill_co.paa"};
		
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo"};
		    hiddenSelectionsTextures[] = {"KAT_ARMOR\oneill\jaeger_helmet_oneill_co.paa"};
		};
    };
};

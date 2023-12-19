class CfgPatches
{
    class KAT_Shemagh
    {
        author = "wlan0";
        addonRootClass = "KAT_Gear";
        requiredAddons[] =
        {
            "LM_OPCAN_UNSC",
        };
        requiredVersion = 0.1;
        units[] = {};
        weapons[] =
        {
            "KAT_Shemagh_Green_Paisley",
        };
    };
};
class cfgGlasses
{
    class LM_OPCAN_URB_Shemagh;
    class KAT_Shemagh_Green_Paisley : LM_OPCAN_URB_Shemagh
    {
        displayName = "[Azrael] Shemagh (Green Paisley)";
        author = "wlan0";
        hiddenSelectionsTextures[] = { "KAT_Gear\hats\shemagh\_textures\green_paisley.paa" };
    };
};

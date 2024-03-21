class CfgPatches
{
    class KAT_Shemagh
    {
        author = "wlan0";
        addonRootClass = "KAT_Gear";
        requiredAddons[] =
        {
            "1st_MEU_patch_gear_glasses",
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
    class MEU_Shemagh;
    class KAT_Shemagh_Green_Paisley : MEU_Shemagh
    {
        displayName = "[Azrael] Shemagh (Green Paisley)";
        author = "wlan0";
        hiddenSelectionsTextures[] = { "KAT_Gear\hats\shemagh\_textures\green_paisley.paa" };
    };
};

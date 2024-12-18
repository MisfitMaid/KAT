#define _ARMA_

class CfgPatches
{
	class KAT_Core
	{
		units[] = {""};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"1st_MEU_patch_main_loadingScreens"
			// we dont actually extend anything from 1MEU, this is just to ensure our loading screen overwrites theirs
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class KAT_Core
		{
			list[] = {"KAT_Core"};
		};
	};
};


class CfgMarkerClasses
{
    class MarkerCats_Azrael
	{
		displayName="Azrael";
    }
};
class CfgMarkers
{
    class Marker_Azrael
    {
        name="Azrael";
        icon="KAT_Mission\azrael.paa";
        color[]={1,1,1,1};
        size=40;
        shadow = 0;
        scope = 2;
        markerClass = "MarkerCats_Azrael";
    };

	// class Marker_Quicksilver : Marker_Azrael { name="Quicksilver"; icon="KAT_Mission\quicksilver.paa"; }
	class Marker_Valkyrie    : Marker_Azrael { name="Valkyrie";    icon="KAT_Mission\valkyrie.paa"; }
	class Marker_Berserker   : Marker_Azrael { name="Berserker";   icon="KAT_Mission\berserker.paa"; }
	class Marker_Outlaw      : Marker_Azrael { name="Outlaw";      icon="KAT_Mission\outlaw.paa"; }
};

class RscPicture{};
class RscActiveText{};
class RscActivePicture: RscActiveText{};
class RscText{};
class RscStandardDisplay{};
class RscDisplayMain: RscStandardDisplay
{
	class Controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		class Logo: RscActivePicture
		{
			text="\KAT_Core\logo.paa";
		};
	};
	enableDisplay=0;
	delete Spotlight;
	class RscActiveText;
	class RscActivePicture: RscActiveText
	{
		style=48;
		color[]={1,1,1,0.5};
		colorActive[]={1,1,1,1};
	};
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\KAT_Core\jeff-christy-2.paa";
		};
	};
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			idd=250;
			class controls
			{
				class LoadingPic: RscPicture
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\KAT_Core\jeff-christy-1.paa";
				};
			};
		};
		class Loading_West1: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\KAT_Core\jeff-christy-2.paa";
				};
			};
		};
		class Loading_West2: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\KAT_Core\jeff-christy-2.paa";
				};
			};
		};
		class Loading_East1: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\KAT_Core\jeff-christy-2.paa";
				};
			};
		};
		class Loading_East2: LoadingOne
		{
			class controls
			{
				class LoadingPic
				{
					idc=1;
					x="SafeZoneX";
					y="SafeZoneY";
					h="SafeZoneH";
					w="SafeZoneW";
					text="\KAT_Core\jeff-christy-2.paa";
				};
			};
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\KAT_Core\jeff-christy-2.paa";
		};
	};
};
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\KAT_Core\jeff-christy-1.paa";
		};
	};
};
class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers
{
	class LoadingPic: RscPicture
	{
		idc=1;
		x="SafeZoneX";
		y="SafeZoneY";
		h="SafeZoneH";
		w="SafeZoneW";
		text="\KAT_Core\jeff-christy-2.paa";
	};
};
class RscDisplayClient: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			idc=1;
			x="SafeZoneX";
			y="SafeZoneY";
			h="SafeZoneH";
			w="SafeZoneW";
			text="\KAT_Core\jeff-christy-2.paa";
		};
	};
};

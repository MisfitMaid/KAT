class CfgPatches
{
	class KAT_Music
	{
		name = "KAT_Music";
		author = "MisfitMaid";
		requiredVersion = 0.1;
	};
};
class CfgMusic
{
	#include "KATMusicTracks.hpp"
};
class CfgMusicClasses
{
	class KAT_Music
	{
		displayName = "KAT";
	};
};

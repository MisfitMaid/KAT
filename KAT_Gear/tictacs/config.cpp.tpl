// %s

class CfgPatches
{
	class KAT_TicTacs
	{
		requiredVersion=0.1;
		units[]=
		{
			"Module_OPTRE_PelicanSupplyDrop",
			"KAT_TicTac_Empty",
			%s
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class OPTRE_Ammo_SupplyPod_Empty;
	class Module_F;
	class KAT_TicTac_Empty: OPTRE_Ammo_SupplyPod_Empty
	{
		scope=2;
		displayName="[Azrael] Supply Pod (Empty)";
		maximumLoad=1000000;
		hiddenselections[]=
		{
			// "camo"
		};
		hiddenselectionstextures[]=
		{
			// ""
		};
        class TransportItems {};
        class TransportMagazines {};
		class TransportWeapons {};
	};

	%s

	class Module_OPTRE_PelicanSupplyDrop: Module_F
	{
		class Arguments
		{
			class box1
			{
				defaultValue="KAT_TicTac_Empty";
				class values
				{
					class kat_pod_none
					{
						name="-Empty-";
						value="none";
					};
					class kat_pod_empty
					{
						name="[Azrael] Supply Pod (Empty)";
						value="KAT_TicTac_Empty";
					};
					%s
				};
			};
		};
	};
};

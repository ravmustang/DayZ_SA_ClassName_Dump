class CfgPatches
{
	class DZ_Nonlethal_Shockpistol
	{
		units[]=
		{
			"Shockpistol"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Nonlethal"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class NonlethalPistol;
	class Shockpistol_Base: NonlethalPistol
	{
		scope=0;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		value=0;
		chamberSize=1;
		chamberedRound="";
		magazines[]=
		{
			"Mag_ShockCartridge"
		};
		chamberableFrom[]=
		{
			"Ammo_9x19"
		};
		ejectType=1;
		recoilModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camo"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Shockpistol_Shot_SoundSet",
				"Shockpistol_Tail_SoundSet",
				"Shockpistol_InteriorTail_SoundSet"
			};
			reloadTime=0.13;
			recoil="recoil_shockpistol";
			recoilProne="recoil_shockpistol";
			dispersion=0.0060000001;
			magazineSlot="magazine";
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"DZ\weapons\nonlethal\shockpistol\data\shockpistol_main.rvmat",
				"DZ\weapons\nonlethal\shockpistol\data\shockpistol_main_damage.rvmat",
				"DZ\weapons\nonlethal\shockpistol\data\shockpistol_main_destruct.rvmat"
			};
		};
	};
	class Shockpistol: Shockpistol_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_Shockpistol0";
		descriptionShort="$STR_cfgWeapons_Shockpistol1";
		model="\dz\weapons\nonlethal\shockpistol\shockpistol.p3d";
		itemSize[]={4,3};
		weight=1000;
		modelOptics="-";
		distanceZoomMin=100;
		distanceZoomMax=100;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\weapons\nonlethal\shockpistol\data\shockpistol_main_yel_co.paa"
		};
	};
	class Shockpistol_Black: Shockpistol
	{
		descriptionShort="$STR_cfgWeapons_Shockpistol_Black0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\weapons\nonlethal\shockpistol\data\shockpistol_main_bk_co.paa"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyShockpistol: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistol";
		model="\dz\weapons\nonlethal\shockpistol\shockpistol.p3d";
	};
};

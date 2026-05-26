class CfgPatches
{
	class DZ_Weapons_Archery_Bow_Quickie
	{
		units[]=
		{
			"Bow_Quickie"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Archery"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Archery_Base;
	class QuickieBow: Archery_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_QuickieBow0";
		descriptionShort="$STR_cfgWeapons_QuickieBow1";
		model="\dz\weapons\archery\bow_quickie\bow_quickie.p3d";
		debug_ItemCategory=1;
		animClass="Bow";
		rotationFlags=17;
		weight=950;
		itemSize[]={4,9};
		chamberSize=1;
		chamberedRound="";
		magazines[]={};
		chamberableFrom[]=
		{
			"Ammo_ArrowComposite",
			"Ammo_ArrowPrimitive",
			"Ammo_ArrowBoned",
			"Ammo_SharpStick",
			"Mag_Arrows_Quiver"
		};
	};
};

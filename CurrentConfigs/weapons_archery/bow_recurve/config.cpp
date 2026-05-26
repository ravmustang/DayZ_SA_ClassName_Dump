class CfgPatches
{
	class DZ_Weapons_Archery_Bow_Recurve
	{
		units[]=
		{
			"bow_recurve"
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
	class RecurveBow: Archery_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_RecurveBow0";
		descriptionShort="$STR_cfgWeapons_RecurveBow1";
		model="\dz\weapons\archery\bow_Recurve\bow_recurve.p3d";
		animClass="Bow";
		rotationFlags=17;
		weight=550;
		itemSize[]={6,10};
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

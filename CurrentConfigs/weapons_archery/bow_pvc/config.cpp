class CfgPatches
{
	class DZ_Weapons_Archery_Bow_pvc
	{
		units[]=
		{
			"bow_pvc"
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
	class PVCBow: Archery_Base
	{
		scope=2;
		displayName="$STR_cfgWeapons_PVCBow0";
		descriptionShort="$STR_cfgWeapons_PVCBow1";
		model="\dz\weapons\archery\bow_pvc\bow_pvc.p3d";
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

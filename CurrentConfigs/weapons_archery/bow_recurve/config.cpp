////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:44:07 2018 : 'file' last modified on Wed Aug 22 21:36:40 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=12
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_archery\bow_recurve\config.bin{
class CfgPatches
{
	class DZ_Weapons_Archery_Bow_Recurve
	{
		units[] = {"bow_recurve"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Archery"};
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
		scope = 2;
		displayName = "$STR_cfgWeapons_RecurveBow0";
		descriptionShort = "$STR_cfgWeapons_RecurveBow1";
		model = "\dz\weapons\archery\bow_Recurve\bow_recurve.p3d";
		animClass = "Bow";
		rotationFlags = 17;
		lootCategory = "Crafted";
		weight = 550;
		itemSize[] = {6,10};
		reloadAction = "ReloadBow";
		shotAction = "ReloadBow";
		drySound[] = {"dz\sounds\weapons\bows\dry_bow_0",0.9,1,30};
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"Ammo_ArrowComposite","Ammo_ArrowPrimitive","Ammo_ArrowBoned","Ammo_SharpStick","Mag_Arrows_Quiver"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\archery\bow_Recurve\data\bow_Recurve.rvmat","DZ\weapons\archery\bow_Recurve\data\bow_Recurve_damage.rvmat","DZ\weapons\archery\bow_Recurve\data\bow_Recurve_destruct.rvmat"};
		};
	};
};
//};

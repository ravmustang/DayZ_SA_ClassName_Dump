////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:51:03 2018 : 'file' last modified on Wed Aug 22 22:00:53 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_nonlethal\config.bin{
class CfgPatches
{
	class DZ_Nonlethal
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Weapons"};
	};
};
class cfgRecoils
{
	recoil_empty[] = {0,0,0};
	recoil_shockpistol[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1)",0.08,"0.019755*(0.5)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(1)",0.08,"-0.001177*(0.5)","-0.000188*(1)",0.12,0,0};
};
class DefaultAction;
class Mode_SemiAuto;
class Mode_Safe: Mode_SemiAuto
{
	magazines[] = {};
};
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class DefaultWeapon;
	class NonlethalCore: DefaultWeapon
	{
		scope = 0;
		targetCategory = "loot";
		type = 1;
		autoReload = 0;
		rotationFlags = 17;
		storageCategory = 1;
		class Single: Mode_SemiAuto{};
		class NoiseShoot
		{
			strength = 10.0;
			type = "shot";
		};
		opticsZoomMin = 0.414215;
		opticsZoomInit = 0.57737;
		opticsZoomMax = 0.70022;
		tooltip = "_text = _this call fnc_generateTooltip;_text";
		barrelArmor = 400;
		bullet1[] = {"dz\sounds\weapons\shells\45\asphlat_45_01",0.17782794,1,15};
		bullet2[] = {"dz\sounds\weapons\shells\45\asphlat_45_02",0.17782794,1,15};
		bullet3[] = {"dz\sounds\weapons\shells\45\asphlat_45_03",0.17782794,1,15};
		bullet4[] = {"dz\sounds\weapons\shells\45\asphlat_45_04",0.17782794,1,15};
		bullet5[] = {"dz\sounds\weapons\shells\45\asphlat_45_05",0.31622776,1,15};
		bullet6[] = {"dz\sounds\weapons\shells\45\asphlat_45_06",0.31622776,1,15};
		bullet7[] = {"dz\sounds\weapons\shells\45\dirt_45_01",0.31622776,1,15};
		bullet8[] = {"dz\sounds\weapons\shells\45\dirt_45_02",0.31622776,1,15};
		bullet9[] = {"dz\sounds\weapons\shells\45\dirt_45_03",0.17782794,1,15};
		bullet10[] = {"dz\sounds\weapons\shells\45\dirt_45_04",0.17782794,1,15};
		bullet11[] = {"dz\sounds\weapons\shells\45\dirt_45_05",0.17782794,1,15};
		bullet12[] = {"dz\sounds\weapons\shells\45\dirt_45_06",0.17782794,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		magazineSlot = "magazine";
	};
	class NonlethalPistol: NonlethalCore
	{
		itemSize[] = {4,2};
		disarmAction = "disarmHandgun";
		reloadAction = "GestureReloadPistolFNP45";
		cursor = "aimGunGhost";
		cursorAim = "aimPistol";
		inventorySlot = "Pistol";
		lootCategory = "Pistols";
		animClass = "Pistol";
		armAction = "HandGun";
		baseAttachments[] = {};
	};
	class NonlethalRifle: NonlethalCore
	{
		itemSize[] = {8,2};
		disarmAction = "disarmRifle";
		cursor = "aimGunGhost";
		cursorAim = "aimRifle";
		inventorySlot = "Shoulder";
		lootCategory = "Rifles";
		animClass = "Rifle";
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:44:40 2018 : 'file' last modified on Wed Aug 22 21:36:39 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_archery\config.bin{
class CfgPatches
{
	class DZ_Weapons_Archery
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Weapons"};
	};
};
class cfgRecoils
{
	recoil_bow[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1.5)",0.09,"0.019755*(0.5)","0.003056*(1.5)",0.12,0,0,0.18,"-0.003138*(0.5)","-0.0005*(1.5)",0.12,"-0.001177*(0.5)","-0.000188*(1.5)",0.12,0,0};
};
class DefaultAction;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Mode_Safe: Mode_SemiAuto
{
	magazines[] = {};
};
class cfgWeapons
{
	class Archery_Base;
};
//};

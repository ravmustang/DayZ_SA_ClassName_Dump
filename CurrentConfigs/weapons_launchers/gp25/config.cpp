////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:49:24 2018 : 'file' last modified on Wed Aug 22 21:56:04 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_launchers\gp25\config.bin{
class CfgPatches
{
	class DZ_Weapons_Launchers_GP25
	{
		units[] = {"GP25"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Rifle_Base;
	class GP25Base: Rifle_Base
	{
		scope = 1;
	};
	class GP25: GP25Base
	{
		scope = 2;
		model = "\DZ\weapons\launchers\gp25\ubgl_gp25.p3d";
	};
	class GP25_Standalone: GP25Base
	{
		scope = 2;
		model = "\DZ\weapons\launchers\gp25\ubgl_gp25.p3d";
	};
};
class cfgRecoils
{
	recoil_gp25[] = {0,0,0,0.04,"0.036943*(0.3)","0.0134348*(1.0)",0.08,"0.019755*(0.3)","0.003056*(1.0)",0.09,0,0,0.14,"-0.003138*(0.3)","-0.0005*(1.0)",0.08,"-0.001177*(0.3)","-0.000188*(1.0)",0.12,0,0};
	recoil_gp25_prone[] = {0,0,0,0.04,"0.036943*(0.06)","0.0134348*(0.15)",0.08,"0.019755*(0.06)","0.003056*(0.15)",0.09,0,0,0.14,"-0.003138*(0.06)","-0.0005*(0.15)",0.08,"-0.001177*(0.06)","-0.000188*(0.15)",0.12,0,0};
};
//};

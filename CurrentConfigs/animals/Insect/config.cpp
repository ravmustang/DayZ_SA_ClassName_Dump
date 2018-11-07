////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:01:38 2018 : 'file' last modified on Wed Aug 22 14:53:40 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\animals\Insect\config.bin{
class CfgPatches
{
	class DZ_Animals_Insect
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Animals"};
	};
};
class cfgNonAiVehicles
{
	class Insect;
	class DragonFly: Insect
	{
		model = "\dz\animals\Insect\dragonfly.p3d";
		flySound[] = {"\dz\sounds\arma2\animals\fly3final",0.099999994,1,1.5};
		fsm[] = {"Dragonfly"};
		straightDistance = 10;
		maxSpeed = 5;
	};
	class ButterFly: Insect
	{
		model = "\dz\animals\Insect\aglais_urticae_e.p3d";
		fsm[] = {"Butterfly"};
		minHeight = -0.1;
		avgHeight = 0.3;
		maxHeight = 1.5;
		minSpeed = -0.1;
		maxSpeed = 1;
		acceleration = 5;
		straightDistance = 2;
		turning = 5;
		reversed = 0;
		autocenter = 0;
	};
	class HouseFly: Insect
	{
		model = "\dz\animals\Insect\fly.p3d";
		flySound[] = {"\dz\sounds\arma2\animals\fly3final",0.0009999999,1,1};
		minSpeed = -0.1;
		maxSpeed = 5;
		minHeight = -0.1;
		avgHeight = 1.4;
		maxHeight = 2;
		straightDistance = 0.5;
	};
	class HoneyBee: Insect
	{
		flySound[] = {"\dz\sounds\arma2\animals\bee4final",0.0009999999,1,1};
		model = "\dz\animals\Insect\honeybee.p3d";
		minSpeed = -0.1;
		maxSpeed = 0.2;
		minHeight = -0.1;
		avgHeight = 0.2;
		maxHeight = 1;
		fsm[] = {"HoneyBee"};
		reversed = 0;
		straightDistance = 0.5;
	};
	class Mosquito: Insect
	{
		model = "\dz\animals\Insect\mosquito.p3d";
		flySound[] = {"\dz\sounds\arma2\animals\mosquito4final",0.0014125374,1,1};
		minSpeed = -0.05;
		maxSpeed = 2;
		minHeight = -0.1;
		avgHeight = 1;
		maxHeight = 2;
		straightDistance = 0.4;
	};
};
//};

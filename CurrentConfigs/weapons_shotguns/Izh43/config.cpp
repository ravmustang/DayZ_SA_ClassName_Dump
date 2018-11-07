////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:53:28 2018 : 'file' last modified on Wed Aug 22 22:07:25 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_shotguns\Izh43\config.bin{
class CfgPatches
{
	class DZ_Weapons_Shotguns_Izh43
	{
		units[] = {"ShotgunIzh43","ShotgunIzh43_Sawedoff"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Weapons"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Shotgun_Base;
	class Izh43Shotgun_Base: Shotgun_Base
	{
		scope = 0;
		lootTag[] = {"Civilian","Hunting"};
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		chamberSize = 2;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug","Mag_12gaSnaploader_2Rnd"};
		magazines[] = {};
		ejectType = 3;
		reloadSkips[] = {0.48,0.81};
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.005623413,1};
		reloadMagazineSound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_reloading",1.0,1,20};
		reloadSound[] = {};
		soundBullet[] = {};
		reloadAction = "ReloadShotgunIZH43";
		shotAction = "";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"IZH43_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1,1,800};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_doublebarrel";
			recoilProne = "recoil_doublebarrel_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"IZH43double_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43double_close_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43double_close_1",1,1,900};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.01;
			recoil = "recoil_doublebarrel_double";
			recoilProne = "recoil_doublebarrel";
			dispersion = 0.01;
			magazineSlot = "magazine";
			firespreadangle = 1.5;
		};
	};
	class Izh43Shotgun: Izh43Shotgun_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Izh43Shotgun0";
		descriptionShort = "$STR_cfgWeapons_Izh43Shotgun1";
		model = "\dz\weapons\shotguns\Izh43\izh43.p3d";
		baseAttachments[] = {};
		attachments[] = {"weaponWrap"};
		itemSize[] = {9,6};
		dexterity = 2.7;
		recoilModifier[] = {1,1,1};
		hiddenSelectionsTextures[] = {"dz\weapons\shotguns\Izh43\data\izh43_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\shotguns\Izh43\data\izh43.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\shotguns\Izh43\data\izh43.rvmat","DZ\weapons\shotguns\Izh43\data\izh43_damage.rvmat","DZ\weapons\shotguns\Izh43\data\izh43_destruct.rvmat"};
		};
	};
	class SawedoffIzh43Shotgun: Izh43Shotgun_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_SawedoffIzh43Shotgun0";
		descriptionShort = "$STR_cfgWeapons_SawedoffIzh43Shotgun1";
		model = "\dz\weapons\shotguns\Izh43\izh43_sawedoff.p3d";
		baseAttachments[] = {};
		attachments[] = {"weaponWrap"};
		itemSize[] = {6,5};
		dexterity = 2.9;
		recoilModifier[] = {1,1,1};
		firespreadangle = 3;
		hiddenSelectionsTextures[] = {"dz\weapons\shotguns\Izh43\data\izh43_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\shotguns\Izh43\data\izh43.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\shotguns\Izh43\data\izh43.rvmat","DZ\weapons\shotguns\Izh43\data\izh43_damage.rvmat","DZ\weapons\shotguns\Izh43\data\izh43_destruct.rvmat"};
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"IZH43sawed_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1.7782794,1,1000};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1.7782794,1,1000};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			dispersion = 0.02;
			firespreadangle = 1.5;
			recoil = "recoil_sawedoff";
			recoilProne = "recoil_sawedoff";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"IZH43sawedDouble_Shot_SoundSet","IZH43_Tail_SoundSet","IZH43_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43double_close_0",3.1622777,1,1000};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43double_close_1",3.1622777,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333};
			reloadTime = 0.01;
			recoil = "recoil_sawedoff_double";
			recoilProne = "recoil_sawedoff_double";
			dispersion = 0.02;
			magazineSlot = "magazine";
			firespreadangle = 1.5;
		};
	};
};
class cfgRecoils
{
	recoil_doublebarrel[] = {0,0,0,0.04,"0.036943*(1)","0.0134348*(4)",0.09,"0.019755*(1)","0.003056*(4)",0.12,0,0,0.18,"-0.003138*(1)","-0.0005*(4)",0.12,"-0.001177*(1)","-0.000188*(4)",0.12,0,0};
	recoil_doublebarrel_double[] = {0,0,0,0.05,"0.036943*(1.5)","0.0134348*(8)",0.09,"0.019755*(1.5)","0.003056*(8)",0.12,0,0,0.18,"-0.003138*(1.5)","-0.0005*(8)",0.12,"-0.001177*(1.5)","-0.000188*(8)",0.12,0,0};
	recoil_doublebarrel_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(3)",0.09,"0.019755*(0.5)","0.003056*(3)",0.12,0,0,0.18,"-0.003138*(0.5)","-0.0005*(3)",0.12,"-0.001177*(0.5)","-0.000188*(3)",0.12,0,0};
	recoil_sawedoff[] = {0,0,0,0.04,"0.036943*(1.5)","0.0134348*(6)",0.09,"0.019755*(1.5)","0.003056*(6)",0.12,0,0,0.18,"-0.003138*(1.5)","-0.0005*(6)",0.12,"-0.001177*(1.5)","-0.000188*(6)",0.12,0,0};
	recoil_sawedoff_double[] = {0,0,0,0.05,"0.036943*(2)","0.0134348*(12)",0.09,"0.019755*(2)","0.003056*(12)",0.12,0,0,0.18,"-0.003138*(2)","-0.0005*(12)",0.12,"-0.001177*(2)","-0.000188*(12)",0.12,0,0};
};
//};

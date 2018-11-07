////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:53:52 2018 : 'file' last modified on Wed Aug 22 22:07:39 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_shotguns\saiga\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_SaigaK
	{
		units[] = {"Saiga12K"};
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
	class Shotgun_Base;
	class Saiga12KShotgun_Base: Shotgun_Base
	{
		scope = 0;
		lootTag[] = {"Military_east"};
		weight = 3600;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug"};
		magazines[] = {"Mag_Saiga_5Rnd","Mag_Saiga_8Rnd","Mag_Saiga_Drum20Rnd"};
		magazineSwitchTime = 0.2;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Saiga12_Shot_SoundSet","Saiga12_Tail_SoundSet","Saiga12_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1,1,800};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_Saiga12";
			recoilProne = "recoil_Saiga12_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
	};
	class Saiga12KShotgun: Saiga12KShotgun_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Saiga12KShotgun0";
		descriptionShort = "$STR_cfgWeapons_Saiga12KShotgun1";
		model = "\dz\weapons\shotguns\saiga\saiga.p3d";
		attachments[] = {"weaponButtstockSaiga","weaponOpticsAK","weaponWrap"};
		baseAttachments[] = {"Saiga_Bttstck"};
		randomAttachments[] = {{"KashtanOptic","PSO11Optic","","","","","","","","","","","","","",""},{"Mag_Saiga_5Rnd","Mag_Saiga_8Rnd","Mag_Saiga_Drum20Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		dexterity = 2.7;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\shotguns\saiga\Data\saiga.rvmat","DZ\weapons\shotguns\saiga\Data\saiga_damage.rvmat","DZ\weapons\shotguns\saiga\Data\saiga_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_ShotgunSaiga12[] = {0,0,0,0.04,"0.036943*(1)","0.0134348*(3)",0.08,"0.019755*(1)","0.003056*(3)",0.09,0,0,0.14,"-0.003138*(1)","-0.0005*(3)",0.08,"-0.001177*(1)","-0.000188*(3)",0.12,0,0};
	recoil_ShotgunSaiga12_prone[] = {0,0,0,0.004,"0.036943*(0.5)","0.0134348*(2)",0.008,"0.019755*(0.5)","0.003056*(2)",0.009,0,0,0.014,"-0.003138*(0.5)","-0.0005*(2)",0.008,"-0.001177*(0.5)","-0.000188*(2)",0.012,0,0};
};
//};

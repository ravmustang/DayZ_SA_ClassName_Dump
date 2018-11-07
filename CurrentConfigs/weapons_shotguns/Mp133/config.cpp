////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:53:38 2018 : 'file' last modified on Wed Aug 22 22:07:32 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_shotguns\Mp133\config.bin{
class CfgPatches
{
	class DZ_Weapons_Shotguns_MP133
	{
		units[] = {"ShotgunMp133","ShotgunMp133_Pistol_Grip"};
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
	class Mp133Shotgun_Base: Shotgun_Base
	{
		scope = 0;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		chamberSize = 6;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets","Ammo_12gaSlug"};
		magazines[] = {};
		discreteDistance[] = {25};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {1,0.6,200000,0.3,3,0.1};
		optics = 1;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		cartridgeCreateTime[] = {0.55,0.82};
		reloadSkips[] = {0.26,0.4,0.53,0.64,0.735};
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\shotguns\mp133\mp133_reload_0",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\shotguns\mp133\mp133_pump_0",1.0,1,20};
		reloadAction = "ReloadMP133";
		shotAction = "ReloadMP133Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Mp133_Shot_SoundSet","Mp133_Tail_SoundSet","Mp133_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\shotguns\mp133\mp133_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\shotguns\mp133\mp133_single_1",1,1,800};
			begin3[] = {"dz\sounds\weapons\shotguns\mp133\mp133_single_2",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 1;
			recoil = "recoil_Mp133";
			recoilProne = "recoil_Mp133_prone";
			dispersion = 0.01;
			firespreadangle = 1.5;
			magazineSlot = "magazine";
		};
	};
	class Mp133Shotgun: Mp133Shotgun_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Mp133Shotgun0";
		descriptionShort = "$STR_cfgWeapons_Mp133Shotgun1";
		model = "\dz\weapons\shotguns\mp133\mp133.p3d";
		animName = "ShotgunMp133";
		lootTag[] = {"Civilian"};
		baseAttachments[] = {};
		ContinuousActions[] = {"AT_LOAD_MULTI_BULLET_TO_WEAPON"};
		itemSize[] = {9,3};
		weight = 3300;
		dexterity = 2.7;
		hiddenSelectionsTextures[] = {"dz\weapons\shotguns\mp133\data\mp133_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\shotguns\mp133\data\mp133.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\shotguns\mp133\data\mp133.rvmat","DZ\weapons\shotguns\mp133\data\mp133_damage.rvmat","DZ\weapons\shotguns\mp133\data\mp133_destruct.rvmat"};
		};
	};
	class Mp133Shotgun_PistolGrip: Mp133Shotgun_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Mp133Shotgun_PistolGrip0";
		descriptionShort = "$STR_cfgWeapons_Mp133Shotgun_PistolGrip1";
		model = "\dz\weapons\shotguns\mp133\mp133_pistol_grip.p3d";
		animName = "ShotgunMp133_Pistol_Grip";
		lootTag[] = {"Police","Military_east","Military_west"};
		itemSize[] = {8,6};
		weight = 3200;
		chamberSize = 4;
		reloadAction = "ReloadMP133_grip";
		shotAction = "ReloadMP133_grip_shot";
		recoilModifier[] = {1,1,1};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\shotguns\mp133\data\mp133_pistol_grip.rvmat","DZ\weapons\shotguns\mp133\data\mp133_pistol_grip_damage.rvmat","DZ\weapons\shotguns\mp133\data\mp133_pistol_grip_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_Mp133[] = {0,0,0,0.04,"0.036943*(1)","0.0134348*(4)",0.09,"0.019755*(1)","0.003056*(4)",0.12,0,0,0.18,"-0.003138*(1)","-0.0005*(4)",0.12,"-0.001177*(1)","-0.000188*(4)",0.12,0,0};
	recoil_Mp133_double[] = {0,0,0,0.05,"0.036943*(1.5)","0.0134348*(8)",0.09,"0.019755*(1.5)","0.003056*(8)",0.12,0,0,0.18,"-0.003138*(1.5)","-0.0005*(8)",0.12,"-0.001177*(1.5)","-0.000188*(8)",0.12,0,0};
	recoil_Mp133_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(3)",0.09,"0.019755*(0.5)","0.003056*(3)",0.12,0,0,0.18,"-0.003138*(0.5)","-0.0005*(3)",0.12,"-0.001177*(0.5)","-0.000188*(3)",0.12,0,0};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:46:03 2018 : 'file' last modified on Wed Aug 22 21:50:33 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\Izh18\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_IZH18
	{
		units[] = {"ShotgunIzh43","ShotgunIzh43_Sawedoff"};
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
	class Izh18_Base: Rifle_Base
	{
		scope = 0;
		weight = 3200;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		discreteDistance[] = {200};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {1,0.6,200000,0.3,3,0.1};
		opticsFlare = 0;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x39"};
		magazines[] = {};
		barrelArmor = 220;
		ejectType = 3;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\izh18\izh18_reload",0.8,1,20};
		reloadSound[] = {"",0.05623413,1,20};
		reloadAction = "ReloadIZH18";
		shotAction = "";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"IZH18_Shot_SoundSet","IZH18_Tail_SoundSet","IZH18_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\izh18\izh18_shot_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\izh18\izh18_shot_1",1,1,800};
			soundBegin[] = {"begin1",0.56,"begin2",0.5};
			reloadTime = 0.1;
			recoil = "recoil_izh18";
			recoilProne = "recoil_izh18_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overridePoint = "Usti hlavne";
				};
				class ChamberFlash
				{
					overridePoint = "dust_point";
					overrideParticle = "weapon_dust_izh18_01";
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Weapon_Movement_Rifle_Walk
				{
					soundSet = "Weapon_Movement_Rifle_Walk_SoundSet";
					id = 101;
				};
				class Weapon_Movement_Rifle_Run
				{
					soundSet = "Weapon_Movement_Rifle_Run_SoundSet";
					id = 102;
				};
				class Weapon_Movement_Rifle_Sprint
				{
					soundSet = "Weapon_Movement_Rifle_Sprint_SoundSet";
					id = 103;
				};
				class Weapon_Movement_Rifle_Land
				{
					soundSet = "Weapon_Movement_Rifle_Land_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};
	};
	class Izh18: Izh18_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Izh180";
		descriptionShort = "$STR_cfgWeapons_Izh181";
		model = "\dz\weapons\firearms\Izh18\Izh18.p3d";
		attachments[] = {"weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		itemSize[] = {9,3};
		dexterity = 3.3;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Izh18\data\Izh18_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\Izh18\data\Izh18.rvmat"};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_izh18_01";
					ignoreIfSuppressed = 1;
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\Izh18\data\Izh18.rvmat"}},{0.5,{"DZ\weapons\firearms\Izh18\data\Izh18_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\Izh18\data\Izh18_destruct.rvmat"}}};
				};
			};
		};
	};
	class SawedoffIzh18: Izh18
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_SawedoffIzh180";
		descriptionShort = "$STR_cfgWeapons_SawedoffIzh181";
		model = "\dz\weapons\firearms\Izh18\Izh18_sawedoff.p3d";
		lootCategory = "Crafted";
		itemSize[] = {5,2};
		weight = 2800;
		dexterity = 2.8;
		attachments[] = {};
		recoilModifier[] = {1,1,1};
		firespreadangle = 3;
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"IZH18_Shot_SoundSet","IZH18_Tail_SoundSet","IZH18_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1.7782794,1,1000};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1.7782794,1,1000};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			dispersion = 0.08;
			recoil = "recoil_izh18sawedoff";
			recoilProne = "recoil_izh18sawedoff";
		};
	};
};
class cfgRecoils
{
	recoil_izh18[] = {0,0,0,0.04,"0.036943*(0.7)","0.0134348*(2)",0.09,"0.019755*(0.7)","0.003056*(2)",0.12,0,0,0.18,"-0.003138*(0.7)","-0.0005*(2)",0.12,"-0.001177*(0.7)","-0.000188*(2)",0.12,0,0};
	recoil_izh18_double[] = {0,0,0,0.05,"0.036943*(1.2)","0.0134348*(5)",0.09,"0.019755*(1.2)","0.003056*(5)",0.12,0,0,0.18,"-0.003138*(1.2)","-0.0005*(5)",0.12,"-0.001177*(1.2)","-0.000188*(5)",0.12,0,0};
	recoil_izh18_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1.5)",0.09,"0.019755*(0.5)","0.003056*(1.5)",0.12,0,0,0.18,"-0.003138*(0.5)","-0.0005*(1.5)",0.12,"-0.001177*(0.5)","-0.000188*(1.5)",0.12,0,0};
	recoil_izh18sawedoff[] = {0,0,0,0.04,"0.036943*(2)","0.0134348*(20)",0.09,"0.019755*(2)","0.003056*(20)",0.12,0,0,0.18,"-0.003138*(2)","-0.0005*(20)",0.12,"-0.001177*(2)","-0.000188*(20)",0.12,0,0};
	recoil_izh18sawedoff_double[] = {0,0,0,0.05,"0.036943*(5)","0.0134348*(70)",0.09,"0.019755*(5)","0.003056*(70)",0.12,0,0,0.18,"-0.003138*(5)","-0.0005*(70)",0.12,"-0.001177*(5)","-0.000188*(70)",0.12,0,0};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:48:15 2018 : 'file' last modified on Wed Aug 22 21:52:35 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\svd\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_SVD
	{
		units[] = {"SVD"};
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
	class SVD_Base: Rifle_Base
	{
		scope = 0;
		weight = 3700;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {1,0.6,200000,0.3,3,0.1};
		optics = 1;
		opticsFlare = 0;
		ironsightsExcludingOptics[] = {"GrozaOptic","KobraOptic"};
		value = 0;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"Ammo_762x54"};
		magazines[] = {"Mag_SVD_10Rnd"};
		magazineSwitchTime = 0.25;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\svd\svd_reload",1,1,30};
		reloadAction = "ReloadSVD";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\svd\svd_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\svd\svd_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\svd\svd_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash{};
				class SmokeCloud1
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash2
				{
					overrideParticle = "weapon_shot_m4a1_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class MuzzleFlashStar
				{
					overrideParticle = "weapon_shot_Flame_3D_4star";
					overridePoint = "StarFlash";
				};
				class GasPistonBurstR
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonBurstL
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
				};
				class GasPistonSmokeRaiseR
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {0,0,0};
				};
				class GasPistonSmokeRaiseL
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "GasPiston";
					overrideDirectionVector[] = {180,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 30;
				overheatingDecayInterval = 2;
				class SmokingBarrel
				{
					overridePoint = "GasPiston";
					overrideParticle = "smoking_barrel_small";
					positionOffset[] = {0.05,-0.02,0};
					onlyWithinHealthLabel[] = {0,1};
				};
				class SmokingBarrelDamaged
				{
					overridePoint = "GasPiston";
					overrideParticle = "smoking_barrel";
					positionOffset[] = {0.15,-0.02,0};
					onlyWithinHealthLabel[] = {2,4};
				};
				class SmokingBarrelBadlyDamaged
				{
					overridePoint = "Nabojnicestart";
					overrideParticle = "smoking_barrel_small";
					onlyWithinHealthLabel[] = {3,4};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Weapon_Movement_HRifle_Walk
				{
					soundSet = "Weapon_Movement_HRifle_Walk_SoundSet";
					id = 101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet = "Weapon_Movement_HRifle_Run_SoundSet";
					id = 102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet = "Weapon_Movement_HRifle_Sprint_SoundSet";
					id = 103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet = "Weapon_Movement_HRifle_Land_SoundSet";
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
	class SVD: SVD_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_SVD0";
		descriptionShort = "$STR_cfgWeapons_SVD1";
		model = "\dz\weapons\firearms\svd\svd.p3d";
		attachments[] = {"weaponWrap","suppressorImpro","weaponOpticsAK"};
		baseAttachments[] = {"PSO1Optic"};
		randomAttachments[] = {{"KashtanOptic","PSO1Optic","PSO1Optic","PSO1Optic","PSO1Optic","PSO1Optic","PSO1Optic","PSO1Optic","PSO1Optic","PSO1Optic"},{"Mag_SVD_10Rnd","","","","","","","","",""}};
		itemSize[] = {10,3};
		dexterity = 2.3;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\svd\data\SVD.rvmat"}},{0.5,{"DZ\weapons\firearms\svd\data\SVD_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\svd\data\SVD_destruct.rvmat"}}};
				};
			};
		};
	};
};
class cfgRecoils
{
	recoil_svd[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(2)",0.08,"0.019755*(0.5)","0.003056*(2)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(2)",0.08,"-0.001177*(0.5)","-0.000188*(2)",0.12,0,0};
	recoil_svd_prone[] = {0,0,0,0.004,"0.036943*(0.01)","0.0134348*(0.1)",0.008,"0.019755*(0.01)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.01)","-0.0005*(0.1)",0.008,"-0.001177*(0.01)","-0.000188*(0.1)",0.012,0,0};
};
//};

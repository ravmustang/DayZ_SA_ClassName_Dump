////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:46:32 2018 : 'file' last modified on Wed Aug 22 21:51:03 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\MP5\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_MP5
	{
		units[] = {"MP5K"};
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
	class MP5K_Base: Rifle_Base
	{
		scope = 0;
		weight = 1840;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		discreteDistance[] = {25};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {1,0.6,200000,0.3,3,0.1};
		optics = 1;
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic"};
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x19"};
		magazines[] = {"Mag_MP5_15Rnd","Mag_MP5_30Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\mp5k\mp5k_reload",0.8,1,20};
		reloadAction = "ReloadMP5";
		hiddenSelections[] = {"camo"};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\mp5k\mp5k_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\mp5k\mp5k_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\mp5k\mp5k_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.067;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\mp5k\mp5k_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\mp5k\mp5k_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\mp5k\mp5k_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.067;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class ChamberSmoke
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 20;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overridePoint = "Nabojnicestart";
					overrideParticle = "smoking_barrel_small";
					onlyWithinHealthLabel[] = {0,2};
				};
				class SmokingBarrelDamaged
				{
					overridePoint = "Nabojnicestart";
					overrideParticle = "smoking_barrel";
					onlyWithinHealthLabel[] = {3,4};
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
	class MP5K: MP5K_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_MP5K0";
		descriptionShort = "$STR_cfgWeapons_MP5K1";
		model = "\dz\weapons\firearms\MP5\MP5K.p3d";
		attachments[] = {"weaponFlashlight","weaponOptics","weaponButtstockMP5","weaponMuzzleMP5","WeaponHandguardMP5","pistolMuzzle"};
		baseAttachments[] = {"MP5_PlasticHndgrd"};
		randomAttachments[] = {{"BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"MP5_RailHndgrd","MP5_PlasticHndgrd","MP5_PlasticHndgrd","MP5_PlasticHndgrd","MP5_PlasticHndgrd"},{"MP5k_StockBttstck","","","",""},{"MP5_Compensator","PistolSuppressor","","","","","","","","","",""},{"Mag_MP5_15Rnd","Mag_MP5_30Rnd","","","","","","","","",""}};
		dexterity = 3.2;
		itemSize[] = {5,3};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\MP5\data\mp5k_body_CO.paa"};
		hiddenSelectionsMaterials[] = {"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"}},{0.5,{"DZ\weapons\firearms\MP5\data\mp5k_body_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\MP5\data\mp5k_body_destruct.rvmat"}}};
				};
			};
		};
	};
};
class cfgRecoils
{
	recoil_mp5[] = {0,0,0,0.04,"0.036943*(0.4)","0.0134348*(1.2)",0.08,"0.019755*(0.4)","0.003056*(1.2)",0.09,0,0,0.14,"-0.003138*(0.4)","-0.0005*(1.2)",0.08,"-0.001177*(0.4)","-0.000188*(1.2)",0.12,0,0};
	recoil_mp5_prone[] = {0,0,0,0.004,"0.036943*(0.02)","0.0134348*(0.1)",0.008,"0.019755*(0.02)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.02)","-0.0005*(0.1)",0.008,"-0.001177*(0.02)","-0.000188*(0.1)",0.012,0,0};
};
//};

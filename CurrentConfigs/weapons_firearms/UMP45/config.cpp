////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:48:29 2018 : 'file' last modified on Wed Aug 22 21:51:35 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\UMP45\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_UMP
	{
		units[] = {"UMP45"};
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
	class UMP45_Base: Rifle_Base
	{
		scope = 0;
		weight = 2200;
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
		chamberableFrom[] = {"Ammo_45ACP"};
		magazines[] = {"Mag_UMP_25Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		drySound[] = {"DZ\sounds\weapons\firearms\ump45\UMP45_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\ump45\ump45_reload",0.8,1,30};
		reloadAction = "ReloadUMP";
		hiddenSelections[] = {"camo"};
		modes[] = {"SemiAuto","FullAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"UMP45_Shot_SoundSet","UMP45_Tail_SoundSet","UMP45_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"UMP45_silencerPro_SoundSet","UMP45_silencerTail_SoundSet","UMP45_silencerInteriorTail_SoundSet"},{"UMP45_silencerHomeMade_SoundSet","UMP45_silencerHomeMadeTail_SoundSet","UMP45_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_0",1,1,700};
			begin2[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_1",1,1,700};
			begin3[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_2",1,1,700};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.11;
			recoil = "recoil_auto_primary_7outof10";
			recoilProne = "recoil_auto_primary_prone_7outof10";
			dispersion = 0.003;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"UMP45_Shot_SoundSet","UMP45_Tail_SoundSet","UMP45_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"UMP45_silencerPro_SoundSet","UMP45_silencerTail_SoundSet","UMP45_silencerInteriorTail_SoundSet"},{"UMP45_silencerHomeMade_SoundSet","UMP45_silencerHomeMadeTail_SoundSet","UMP45_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_0",1,1,700};
			begin2[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_1",1,1,700};
			begin3[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_2",1,1,700};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.11;
			recoil = "recoil_auto_primary_7outof10";
			recoilProne = "recoil_auto_primary_prone_7outof10";
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
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class SmokeCloud1
				{
					overrideParticle = "weapon_shot_winded_smoke";
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
				shotsToStartOverheating = 5;
				maxOverheatingValue = 40;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overridePoint = "Nabojnicestart";
					overrideParticle = "smoking_barrel_small";
					onlyWithinHealthLabel[] = {0,1};
				};
				class SmokingBarrelDamaged
				{
					overridePoint = "Nabojnicestart";
					overrideParticle = "smoking_barrel";
					onlyWithinHealthLabel[] = {2,4};
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
	class UMP45: UMP45_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_UMP450";
		descriptionShort = "$STR_cfgWeapons_UMP451";
		model = "\dz\weapons\firearms\UMP45\ump.p3d";
		attachments[] = {"weaponFlashlight","weaponOptics","pistolMuzzle","weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		randomAttachments[] = {{"BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"TLRLight","","","","","",""},{"PistolSuppressor","","","","","","","","",""},{"Mag_UMP_25Rnd","","","","","","","","",""}};
		itemSize[] = {6,3};
		dexterity = 3.2;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\UMP45\data\ump45_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\weapons\firearms\UMP45\data\ump45.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\UMP45\data\UMP45.rvmat"}},{0.5,{"DZ\weapons\firearms\UMP45\data\UMP45_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\UMP45\data\UMP45_destruct.rvmat"}}};
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
};
//};

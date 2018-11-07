////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:52:53 2018 : 'file' last modified on Wed Aug 22 22:02:42 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_pistols\pmm\config.bin{
class CfgPatches
{
	class DZ_Pistols_pmm
	{
		units[] = {"ij70"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Pistol_Base;
	class MakarovIJ70_Base: Pistol_Base
	{
		scope = 0;
		lootTag[] = {"Civilian","Police"};
		weight = 760;
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
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_IJ70_8Rnd"};
		chamberableFrom[] = {"Ammo_380"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\ij70\Makarov_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\ij70\Makarov_reload",0.8,1,20};
		reloadAction = "ReloadIJ70";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"Makarov_Shot_SoundSet","Makarov_Tail_SoundSet","Makarov_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Makarov_silencerPro_SoundSet","Makarov_silencerTail_SoundSet","Makarov_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\ij70\ij70_close_0",1,1,600};
			begin2[] = {"dz\sounds\weapons\firearms\ij70\ij70_close_1",1,1,600};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.13;
			recoil = "recoil_ij70";
			recoilProne = "recoil_if70_prone";
			dispersion = 0.006;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\ij70\MakarovSilenced",1,1,60};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\ij70\MakarovSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Pistol_SlowHandling
				{
					soundSet = "Pistol_SlowHandling_SoundSet";
					id = 101;
				};
				class Pistol_ShortHandling
				{
					soundSet = "Pistol_ShortHandling_SoundSet";
					id = 102;
				};
				class Pistol_FastHandling
				{
					soundSet = "Pistol_FastHandling_SoundSet";
					id = 103;
				};
				class pickUpPistol
				{
					soundSet = "pickUpPistol_SoundSet";
					id = 797;
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_fnx_01";
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
				maxOverheatingValue = 7;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overridePoint = "Nabojnicestart";
					overrideParticle = "smoking_barrel_small";
				};
			};
		};
	};
	class MakarovIJ70: MakarovIJ70_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_MakarovIJ700";
		descriptionShort = "$STR_cfgWeapons_MakarovIJ701";
		model = "\DZ\weapons\pistols\pmm\ij70.p3d";
		attachments[] = {"pistolMuzzle"};
		baseAttachments[] = {};
		randomAttachments[] = {{"PistolSuppressor","","","","","","","",""},{"Mag_IJ70_8Rnd","","","","","","","","",""}};
		itemSize[] = {3,2};
		dexterity = 3.7;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\pistols\pmm\data\pmm.rvmat"}},{0.5,{"DZ\weapons\pistols\pmm\data\pmm_damage.rvmat"}},{0.0,{"DZ\weapons\pistols\pmm\data\pmm_destruct.rvmat"}}};
				};
			};
		};
	};
};
class cfgRecoils
{
	recoil_ij70[] = {0,0,0,0.04,"0.036943*(0.8)","0.0134348*(2.3)",0.08,"0.019755*(0.8)","0.003056*(2.3)",0.09,0,0,0.14,"-0.003138*(0.8)","-0.0005*(2.3)",0.08,"-0.001177*(0.8)","-0.000188*(2.3)",0.12,0,0};
	recoil_ij70_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1)",0.08,"0.019755*(0.5)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(1)",0.08,"-0.001177*(0.5)","-0.000188*(1)",0.12,0,0};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyij70: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\DZ\weapons\pistols\pmm\ij70.p3d";
	};
};
//};

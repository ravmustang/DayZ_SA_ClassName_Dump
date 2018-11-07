////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:51:50 2018 : 'file' last modified on Wed Aug 22 22:02:23 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_pistols\FNX45\config.bin{
class CfgPatches
{
	class DZ_Pistols_FNX45
	{
		units[] = {"FNX45"};
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
	class FNX_Base: Pistol_Base
	{
		scope = 0;
		lootTag[] = {"Military_west"};
		weight = 950;
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
		ironsightsExcludingOptics[] = {"FNP45_MRDSOptic"};
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_FNX45_15Rnd"};
		chamberableFrom[] = {"Ammo_45ACP"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\FNX45\FNX45_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\FNX45\FNX45_reload",0.8,1,20};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNX45_Shot_SoundSet","FNX45_Tail_SoundSet","FNX45_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNX45_silencerPro_SoundSet","FNX45_silencerTail_SoundSet","FNX45_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\FNX45\FNX45_single_1",1,1,600};
			begin2[] = {"dz\sounds\weapons\firearms\FNX45\FNX45_single_2",1,1,600};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.09;
			recoil = "recoil_fnx";
			recoilProne = "recoil_fnx_prone";
			dispersion = 0.006;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\colt1911\1911Silenced",1,1,60};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\colt1911\1911Silenced",1,1,100};
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
	};
	class FNX45: FNX_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_FNX450";
		descriptionShort = "$STR_cfgWeapons_FNX451";
		model = "\dz\weapons\pistols\fnx45\fnp45.p3d";
		attachments[] = {"pistolMuzzle","pistolOptics","pistolFlashlight"};
		baseAttachments[] = {};
		randomAttachments[] = {{"PistolSuppressor","","","","","","","","",""},{"TLRLight","","","","","","",""},{"FNP45_MRDSOptic","","","","","","","","",""},{"Mag_FNX45_15Rnd","","","","","","","","",""}};
		itemSize[] = {4,2};
		dexterity = 3.7;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\pistols\fnx45\data\herstal45.rvmat"}},{0.5,{"DZ\weapons\pistols\fnx45\data\herstal45_damage.rvmat"}},{0.0,{"DZ\weapons\pistols\fnx45\data\herstal45_destruct.rvmat"}}};
				};
			};
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
	class FNX45_arrow: FNX45
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_FNX450";
		descriptionShort = "$STR_cfgWeapons_FNX451";
		model = "\dz\weapons\pistols\fnx45\fnp45.p3d";
		attachments[] = {"pistolMuzzle","pistolOptics","pistolFlashlight"};
		baseAttachments[] = {};
		randomAttachments[] = {{"PistolSuppressor","","","","","","","","",""},{"TLRLight","","","","","","",""},{"FNP45_MRDSOptic","","","","","","","","",""},{"Mag_FNX45_15Rnd","","","","","","","","",""}};
		itemSize[] = {4,3};
		dexterity = 3.7;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_FNX45_15Rnd"};
		chamberableFrom[] = {"Ammo_ArrowComposite"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\pistols\fnx45\data\herstal45.rvmat","DZ\weapons\pistols\fnx45\data\herstal45_damage.rvmat","DZ\weapons\pistols\fnx45\data\herstal45_destruct.rvmat"};
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
		};
	};
};
class cfgRecoils
{
	recoil_fnx[] = {0,0,0,0.04,"0.036943*(1)","0.0134348*(3)",0.08,"0.019755*(1)","0.003056*(3)",0.09,0,0,0.14,"-0.003138*(1)","-0.0005*(3)",0.08,"-0.001177*(1)","-0.000188*(3)",0.12,0,0};
	recoil_fnx_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1)",0.08,"0.019755*(0.5)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(1)",0.08,"-0.001177*(0.5)","-0.000188*(1)",0.12,0,0};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFNP45: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\dz\weapons\pistols\fnx45\fnp45.p3d";
	};
};
//};

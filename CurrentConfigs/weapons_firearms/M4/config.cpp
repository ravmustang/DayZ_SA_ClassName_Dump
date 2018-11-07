////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:46:10 2018 : 'file' last modified on Wed Aug 22 21:50:39 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\M4\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_M4
	{
		units[] = {"M4A1","M4A1_Green","M4A1_Black"};
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
	class Launcher_Base;
	class M4A1_Base: Rifle_Base
	{
		scope = 0;
		lootTag[] = {"Military_west"};
		weight = 1746;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		discreteDistance[] = {25};
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		forceOptics = 0;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {1,0.6,200000,0.3,3,0.1};
		optics = 1;
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45"};
		magazines[] = {"Mag_STANAG_30Rnd","Mag_STANAGCoupled_30Rnd","Mag_CMAG_10Rnd","Mag_CMAG_20Rnd","Mag_CMAG_30Rnd","Mag_CMAG_40Rnd","Mag_CMAG_10Rnd_Green","Mag_CMAG_20Rnd_Green","Mag_CMAG_30Rnd_Green","Mag_CMAG_40Rnd_Green","Mag_CMAG_10Rnd_Black","Mag_CMAG_20Rnd_Black","Mag_CMAG_30Rnd_Black","Mag_CMAG_40Rnd_Black"};
		magazineSwitchTime = 0.5;
		barrelArmor = 2400;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto","Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_1",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_2",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_3",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.085;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced2",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_1",1.7782794,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_2",1.7782794,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_3",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.09;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced2",1,1,75};
			beginSilenced_HomeMade[] = {"ddz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
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
	class M4A1: M4A1_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_M4A10";
		descriptionShort = "$STR_cfgWeapons_M4A11";
		model = "\dz\weapons\firearms\m4\m4a1.p3d";
		attachments[] = {"weaponMuzzleM4","weaponBayonet","weaponFlashlight","weaponBipod","weaponOptics","weaponButtstockM4","WeaponHandguardM4","weaponWrap","suppressorImpro","weaponUnderSlugM4"};
		baseAttachments[] = {"M4_OEBttstck","M4_CarryHandleOptic","M4_PlasticHndgrd"};
		randomAttachments[] = {{"M4_Suppressor","","","","","","","","",""},{"BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic","M4_CarryHandleOptic"},{"M4_RISHndgrd","M4_MPHndgrd","M4_PlasticHndgrd","M4_PlasticHndgrd","M4_PlasticHndgrd","M4_PlasticHndgrd","M4_PlasticHndgrd","M4_PlasticHndgrd","M4_PlasticHndgrd","M4_PlasticHndgrd","M4_PlasticHndgrd","M4_PlasticHndgrd","M4_PlasticHndgrd","M4_PlasticHndgrd"},{"M4_MPBttstck","M4_CQBBttstck","M4_OEBttstck","M4_OEBttstck","M4_OEBttstck","M4_OEBttstck","M4_OEBttstck","M4_OEBttstck","M4_OEBttstck","M4_OEBttstck","M4_OEBttstck","M4_OEBttstck","M4_OEBttstck","M4_OEBttstck"},{"Mag_STANAG_30Rnd","Mag_CMAG_10Rnd","Mag_CMAG_20Rnd","Mag_CMAG_30Rnd","Mag_CMAG_40Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		itemSize[] = {8,3};
		dexterity = 3.0;
		spawnDamageRange[] = {0.0,0.6};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\m4\data\m4_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\m4\data\m4_body.rvmat"};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
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
				maxOverheatingValue = 30;
				shotsToStartOverheating = 10;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					positionOffset[] = {0.1,0,0};
					onlyWithinHealthLabel[] = {0,1};
				};
				class SmokingBarrelDamaged
				{
					overrideParticle = "smoking_barrel";
					positionOffset[] = {0.1,0,0};
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
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\M4\data\m4_body.rvmat","DZ\weapons\firearms\M4\data\m4_body_damage.rvmat","DZ\weapons\firearms\M4\data\m4_body_destruct.rvmat"};
		};
	};
	class M4A1_Green: M4A1
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_M4A1_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\m4\data\m4_body_green_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\m4\data\m4_body_camo.rvmat"};
	};
	class M4A1_Black: M4A1
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_M4A1_Black0";
		color = "Black";
		lootCategory = "Crafted";
	};
	class UnderSlugGrenadeM4: Launcher_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_UnderSlugGrenadeM40";
		descriptionShort = "$STR_cfgWeapons_UnderSlugGrenadeM41";
		model = "\DZ\weapons\firearms\ots14\ots14_launcher.p3d";
		handheld = "true";
		armAction = "Disarm";
		rotationFlags = 12;
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		inventorySlot = "weaponUnderSlugM4";
		simulation = "undersluglauncher";
		weight = 1954;
		itemSize[] = {3,2};
		dispersionModifier = -0.0002;
		dispersionCondition = "true";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\ots14\data\ots14_launcher_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\data\ots14_launcher.rvmat","DZ\weapons\firearms\data\ots14_launcher_damage.rvmat","DZ\weapons\firearms\data\ots14_launcher_destruct.rvmat"};
		};
		class Melee
		{
			range = 1.0;
			swingTime = 0.5;
			action = "MeleeKnifeSlash";
			ammo = "MeleeLightBlunt";
			useCursor = 0;
		};
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"Ammo_GrenadeM4"};
		barrelArmor = 2000;
		ejectType = 2;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\FNX45\FNX_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\magnum\magnum_reload2",0.8,1,20};
		reloadAction = "reloadFlaregun";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"dz\sounds\weapons\firearms\CZ75\CZ75_single_0",3.1622777,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\CZ75\CZ75_single_1",3.1622777,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin1",0.33333,"begin2",0.33333};
			reloadTime = 0.13;
			recoil = "recoil_flaregun";
			recoilProne = "recoil_flaregun_prone";
			dispersion = 0.03;
			magazineSlot = "magazine";
		};
	};
};
class cfgRecoils
{
	recoil_m4[] = {0,0,0,0.04,"0.036943*(0.4)","0.0134348*(1.2)",0.08,"0.019755*(0.4)","0.003056*(1.2)",0.09,0,0,0.14,"-0.003138*(0.4)","-0.0005*(1.2)",0.08,"-0.001177*(0.4)","-0.000188*(1.2)",0.12,0,0};
	recoil_m4_prone[] = {0,0,0,0.04,"0.036943*(0.2)","0.0134348*(0.6)",0.08,"0.019755*(0.2)","0.003056*(0.6)",0.09,0,0,0.14,"-0.003138*(0.2)","-0.0005*(0.6)",0.08,"-0.001177*(0.2)","-0.000188*(0.6)",0.12,0,0};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:48:06 2018 : 'file' last modified on Wed Aug 22 21:51:18 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\SKS\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_SKS
	{
		units[] = {"SKS","SKS_Black","SKS_Green"};
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
	class SKS_Base: Rifle_Base
	{
		scope = 0;
		lootTag[] = {"Military_east","Military_west"};
		weight = 3850;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		PPDOFProperties[] = {1,0.6,200000,0.3,3,0.1};
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 10;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x39","Mag_CLIP762x39_10Rnd"};
		magazines[] = {};
		barrelArmor = 2200;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		cursor = "aimBowGhost";
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\SKS\SKS_reloading",0.8,1,20};
		reloadAction = "ReloadSks";
		hiddenSelections[] = {"camoGround"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"SKS_Shot_SoundSet","SKS_Tail_SoundSet","SKS_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SKS_silencerHomeMade_SoundSet","SKS_silencerHomeMadeTail_SoundSet","SKS_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\SKS\SKS_close_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\SKS\SKS_close_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\SKS\SKS_close_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_sks";
			recoilProne = "recoil_sks_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
	};
	class SKS: SKS_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_SKS0";
		descriptionShort = "$STR_cfgWeapons_SKS1";
		model = "\dz\weapons\firearms\SKS\SKS.p3d";
		attachments[] = {"weaponOpticsMosin","weaponBayonetSKS","weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		randomAttachments[] = {{"PUScopeOptic","","","","","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 2.5;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\SKS\data\sks_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\SKS\data\sks.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\SKS\Data\sks.rvmat","DZ\weapons\firearms\SKS\Data\sks_damage.rvmat","DZ\weapons\firearms\SKS\Data\sks_destruct.rvmat"};
		};
	};
	class SKS_Black: SKS
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_SKS_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\SKS\data\sks_black_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\SKS\data\sks_painted.rvmat"};
	};
	class SKS_Green: SKS
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_SKS_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\SKS\data\sks_green_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\SKS\data\sks_painted.rvmat"};
	};
};
class cfgRecoils
{
	recoil_sks[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(2)",0.08,"0.019755*(0.5)","0.003056*(2)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(2)",0.08,"-0.001177*(0.5)","-0.000188*(2)",0.12,0,0};
	recoil_sks_prone[] = {0,0,0,0.04,"0.036943*(0.3)","0.0134348*(1)",0.08,"0.019755*(0.3)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.3)","-0.0005*(1)",0.08,"-0.001177*(0.3)","-0.000188*(1)",0.12,0,0};
};
//};

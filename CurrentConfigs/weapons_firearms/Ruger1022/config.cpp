////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:47:52 2018 : 'file' last modified on Wed Aug 22 21:51:11 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\Ruger1022\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_Ruger1022
	{
		units[] = {"Ruger1022","Ruger1022_Black","Ruger1022_Green"};
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
	class Ruger1022_Base: Rifle_Base
	{
		scope = 0;
		lootTag[] = {"Civilian","Hunting"};
		weight = 2300;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 1;
		useModelOptics = 0;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_22"};
		magazines[] = {"Mag_Ruger1022_30Rnd","Mag_Ruger1022_10Rnd"};
		magazineSwitchTime = 0.4;
		barrelArmor = 300;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_reload",0.8,1,20};
		reloadAction = "ReloadRuger1022";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Ruger1022_Shot_SoundSet","Ruger1022_Tail_SoundSet","Ruger1022_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Ruger1022_silencerHomeMade_SoundSet","Ruger1022_silencerHomeMadeTail_SoundSet","Ruger1022_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_0auth",1,1,300};
			begin2[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_1auth",1,1,300};
			begin3[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_2",1,1,300};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_0auth",0.1,1,50};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_1outof10";
			recoilProne = "recoil_single_primary_1outof10";
			dispersion = 0.0025;
			magazineSlot = "magazine";
		};
	};
	class Ruger1022: Ruger1022_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Ruger10220";
		descriptionShort = "$STR_cfgWeapons_Ruger10221";
		model = "\dz\weapons\firearms\Ruger1022\Ruger1022.p3d";
		attachments[] = {"weaponWrap","suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"HuntingOptic","","","","","","","","","",""},{"Mag_Ruger1022_30Rnd","Mag_Ruger1022_10Rnd","","","","","","","","","","","","","","","","","",""}};
		dexterity = 3.15;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Ruger1022\data\ruger1022_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\Ruger1022\data\ruger1022.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\Ruger1022\Data\ruger1022.rvmat","DZ\weapons\firearms\Ruger1022\Data\ruger1022_damage.rvmat","DZ\weapons\firearms\Ruger1022\Data\ruger1022_destruct.rvmat"};
		};
	};
	class Ruger1022_Black: Ruger1022
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_Ruger1022_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Ruger1022\data\ruger1022_black_co.paa"};
	};
	class Ruger1022_Green: Ruger1022
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_Ruger1022_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Ruger1022\data\ruger1022_green_co.paa"};
	};
};
//};

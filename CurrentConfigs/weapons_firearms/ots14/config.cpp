////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:46:43 2018 : 'file' last modified on Wed Aug 22 21:52:34 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\ots14\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_groza
	{
		units[] = {"Groza"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class DefaultAction;
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Rifle_Base;
	class Groza_Base: Rifle_Base
	{
		scope = 0;
		lootTag[] = {"Military_east"};
		weight = 2700;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		optics = 1;
		opticsFlare = 0;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_9x39"};
		magazines[] = {"Mag_Groza_20Rnd","Mag_VSS_10Rnd"};
		magazineSwitchTime = 0.38;
		barrelArmor = 3000;
		ejectType = 1;
		drySound[] = {"DZ\sounds\weapons\firearms\ots14\ots14_dry",0.5,1,20};
		recoilModifier[] = {1,1,1};
		reloadAction = "ReloadAug";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_reload",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto","Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"ots14_Shot_SoundSet","ots14_Tail_SoundSet","ots14_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"ots14_silencerPro_SoundSet","ots14_silencerTail_SoundSet","ots14_silencerInteriorTail_SoundSet"},{"ots14_silencerHomeMade_SoundSet","ots14_silencerHomeMadeTail_SoundSet","ots14_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_2",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.0021;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"ots14_Shot_SoundSet","ots14_Tail_SoundSet","ots14_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"ots14_silencerPro_SoundSet","ots14_silencerTail_SoundSet","ots14_silencerInteriorTail_SoundSet"},{"ots14_silencerHomeMade_SoundSet","ots14_silencerHomeMadeTail_SoundSet","ots14_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_2",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.085;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.0021;
			magazineSlot = "magazine";
		};
		class UserActions
		{
			class NotchSight: DefaultAction
			{
				displayNameDefault = "$STR_cfgWeapons_Groza_Base_UserActions_NotchSight0";
				displayName = "$STR_cfgWeapons_Groza_Base_UserActions_NotchSight1";
				condition = "((this animationPhase 'sight_rotate') <= 0)";
				statement = "this animate ['sight_rotate',1];";
			};
			class PeepSight: NotchSight
			{
				displayNameDefault = "$STR_cfgWeapons_Groza_Base_UserActions_PeepSight0";
				displayName = "$STR_cfgWeapons_Groza_Base_UserActions_PeepSight1";
				condition = "((this animationPhase 'sight_rotate') > 0)";
				statement = "this animate ['sight_rotate',0];";
			};
		};
	};
	class Groza: Groza_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Groza0";
		descriptionShort = "$STR_cfgWeapons_Groza1";
		model = "\dz\weapons\firearms\ots14\ots14.p3d";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\ots14\data\ots14_co.paa"};
		attachments[] = {"weaponOpticsAK","weaponButtstockAK","weaponMuzzleAK"};
		baseAttachments[] = {"Att_LowerReceiver_Groza","Att_Barrel_Groza_Short"};
		randomAttachments[] = {{"","","","","","","","","",""},{"Mag_Groza_20Rnd","Mag_Groza_20Rnd","Mag_Groza_20Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		itemSize[] = {7,6};
		dexterity = 3.0;
		spawnDamageRange[] = {0.0,0.6};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\ots14\Data\ots14.rvmat","DZ\weapons\firearms\ots14\Data\ots14_damage.rvmat","DZ\weapons\firearms\ots14\Data\ots14_destruct.rvmat"};
		};
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:45:56 2018 : 'file' last modified on Wed Aug 22 21:52:06 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\fal\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_FAL
	{
		units[] = {"FAL"};
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
	class FAL_Base: Rifle_Base
	{
		scope = 0;
		weight = 3700;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win"};
		magazines[] = {"Mag_FAL_20Rnd"};
		magazineSwitchTime = 0.45;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\ump45\ump45_reload",0.8,1,30};
		reloadAction = "ReloadFal";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\svd\svd_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\svd\svd_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\svd\svd_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_fal";
			recoilProne = "recoil_fal_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
	};
	class FAL: FAL_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_FAL0";
		descriptionShort = "$STR_cfgWeapons_FAL1";
		model = "\dz\weapons\firearms\fal\fal_rifle.p3d";
		attachments[] = {"weaponWrap","suppressorImpro","weaponButtstockFal","weaponOptics"};
		baseAttachments[] = {"Fal_OeBttstck"};
		randomAttachments[] = {{"BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Fal_FoldingBttstck","Fal_OeBttstck","Fal_OeBttstck","Fal_OeBttstck"},{"Mag_FAL_20Rnd","","","","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 2.3;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\fal\data\fal.rvmat","DZ\weapons\firearms\fal\data\fal_damage.rvmat","DZ\weapons\firearms\fal\data\fal_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_fal[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(2)",0.08,"0.019755*(0.5)","0.003056*(2)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(2)",0.08,"-0.001177*(0.5)","-0.000188*(2)",0.12,0,0};
	recoil_fal_prone[] = {0,0,0,0.004,"0.036943*(0.01)","0.0134348*(0.1)",0.008,"0.019755*(0.01)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.01)","-0.0005*(0.1)",0.008,"-0.001177*(0.01)","-0.000188*(0.1)",0.012,0,0};
};
//};

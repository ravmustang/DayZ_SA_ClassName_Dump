////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:47:11 2018 : 'file' last modified on Wed Aug 22 21:52:35 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\repeater\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_Repeater
	{
		units[] = {"Repeater"};
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
	class Repeater_Base: Rifle_Base
	{
		scope = 0;
		animName = "Repeater";
		lootTag[] = {"Civilian","Hunting"};
		weight = 2720;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 7;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_357"};
		magazines[] = {};
		barrelArmor = 260;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\rossim92\rossim92_reload_0",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\rossim92\rossim92_cycle_0",0.8,1,20};
		reloadSkips[] = {0.21,0.35,0.48,0.59,0.69,0.78};
		reloadAction = "ReloadRepeater";
		shotAction = "ReloadRepeaterShot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Repeater_Shot_SoundSet","Repeater_Tail_SoundSet","Repeater_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Repeater_silencerHomeMade_SoundSet","Repeater_silencerHomeMadeTail_SoundSet","Repeater_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\rossim92\rossim92_single_0",3.9810717,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\rossim92\rossim92_single_1",3.9810717,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1;
			recoil = "recoil_repeater";
			recoilProne = "recoil_repeater_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
	};
	class Repeater: Repeater_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Repeater0";
		descriptionShort = "$STR_cfgWeapons_Repeater1";
		model = "\dz\weapons\firearms\repeater\repeater.p3d";
		attachments[] = {"weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		itemSize[] = {9,6};
		dexterity = 2.8;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\repeater\data\repeater_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\repeater\data\repeater.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\repeater\data\repeater.rvmat","DZ\weapons\firearms\repeater\data\repeater_damage.rvmat","DZ\weapons\firearms\repeater\data\repeater_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_repeater[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(2)",0.08,"0.019755*(0.5)","0.003056*(2)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(2)",0.08,"-0.001177*(0.5)","-0.000188*(2)",0.12,0,0};
	recoil_repeater_prone[] = {0,0,0,0.04,"0.036943*(0.3)","0.0134348*(1)",0.08,"0.019755*(0.3)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.3)","-0.0005*(1)",0.08,"-0.001177*(0.3)","-0.000188*(1)",0.12,0,0};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:47:58 2018 : 'file' last modified on Wed Aug 22 21:52:35 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\scout\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_Scout
	{
		units[] = {"Scout"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class DefaultAction;
class cfgWeapons
{
	class Rifle_Base;
	class ScoutBase: Rifle_Base
	{
		scope = 0;
		animName = "cz527";
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
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win"};
		magazines[] = {"Mag_Scout_5Rnd"};
		magazineSwitchTime = 0.38;
		barrelArmor = 900;
		ejectType = 0;
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\cz527\cz527_reload_0",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\cz527\cz527_cycling_0",0.8,1,20};
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		dispersionModifier = -0.00025;
		dispersionCondition = "(getText(configFile >> 'CfgMovesMaleSdr2' >> 'states' >> animationState _agent >> 'bodyPosition') == 'prone') and (_this animationPhase 'bipod' == 1)";
		dexterityModifier = -0.2;
		dexterityCondition = "(getText(configFile >> 'CfgMovesMaleSdr2' >> 'states' >> animationState _agent >> 'bodyPosition') == 'prone') and (_this animationPhase 'bipod' == 1)";
		recoilModifier[] = {1,1,1};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CR527_silencerPro_SoundSet","CR527_silencerTail_SoundSet","CR527_silencerInteriorTail_SoundSet"},{"CR527_silencerHomeMade_SoundSet","CR527_silencerHomeMadeTail_SoundSet","CR527_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 2;
			recoil = "recoil_scout";
			recoilProne = "recoil_scout_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
	};
	class Scout: ScoutBase
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Scout0";
		descriptionShort = "$STR_cfgWeapons_Scout1";
		model = "\dz\weapons\firearms\scout\scout.p3d";
		attachments[] = {"weaponOptics","weaponWrap","suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"M68Optic","ACOGOptic","ACOGOptic","ACOGOptic","ACOGOptic","ACOGOptic"},{"Mag_Scout_5Rnd","","","","","","","",""}};
		dexterity = 2.7;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\scout\data\scout_blk_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\scout\data\scout.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\scout\data\scout.rvmat","DZ\weapons\firearms\scout\data\scout_damage.rvmat","DZ\weapons\firearms\scout\data\scout_destruct.rvmat"};
		};
	};
	class Scout_Black: Scout
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_Scout_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\scout\data\scout_co.paa"};
	};
	class Scout_Green: Scout
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_Scout_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\scout\data\scout_grn_co.paa"};
	};
};
class cfgRecoils
{
	recoil_scout[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(2)",0.08,"0.019755*(0.5)","0.003056*(2)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(2)",0.08,"-0.001177*(0.5)","-0.000188*(2)",0.12,0,0};
	recoil_scout_prone[] = {0,0,0,0.04,"0.036943*(0.3)","0.0134348*(1)",0.08,"0.019755*(0.3)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.3)","-0.0005*(1)",0.08,"-0.001177*(0.3)","-0.000188*(1)",0.12,0,0};
};
//};

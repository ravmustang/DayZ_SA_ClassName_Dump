////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:49:01 2018 : 'file' last modified on Wed Aug 22 21:51:35 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\VSS\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_VSS
	{
		units[] = {"VSS"};
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
	class VSS_Base: Rifle_Base
	{
		scope = 0;
		weight = 1990;
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
		chamberableFrom[] = {"Ammo_9x39"};
		magazines[] = {"Mag_VSS_10Rnd"};
		magazineSwitchTime = 0.38;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\AK74\ak74_reload",0.8,1,20};
		reloadAction = "ReloadVSS";
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"VSS_Vintorez_Shot_SoundSet","VSS_Vintorez_Tail_SoundSet","VSS_Vintorez_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\firearms\AK101\AkSilenced",1,1,100};
			begin2[] = {"dz\sounds\weapons\firearms\AK101\AkSilenced",1,1,100};
			begin3[] = {"dz\sounds\weapons\firearms\AK101\AkSilenced",1,1,100};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_VSS";
			recoilProne = "recoil_VSS_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",0.3,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",0.3,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class NoiseShoot
		{
			strength = 7.0;
			type = "shot";
		};
	};
	class VSS: VSS_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_VSS0";
		descriptionShort = "$STR_cfgWeapons_VSS1";
		model = "\dz\weapons\firearms\VSS\VSS.p3d";
		baseAttachments[] = {"PSO11Optic"};
		attachments[] = {"weaponOpticsAK","weaponWrap"};
		randomAttachments[] = {{"KashtanOptic","PSO1Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic","PSO11Optic"},{"Mag_VSS_10Rnd","","","","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 2.75;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\VSS\data\vss_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\VSS\data\vss.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\VSS\Data\vss.rvmat","DZ\weapons\firearms\VSS\Data\vss_damage.rvmat","DZ\weapons\firearms\VSS\Data\vss_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_VSS[] = {0,0,0,0.04,"0.036943*(0.4)","0.0134348*(1.2)",0.08,"0.019755*(0.4)","0.003056*(1.2)",0.09,0,0,0.14,"-0.003138*(0.4)","-0.0005*(1.2)",0.08,"-0.001177*(0.4)","-0.000188*(1.2)",0.12,0,0};
	recoil_VSS_prone[] = {0,0,0,0.04,"0.036943*(0.2)","0.0134348*(0.6)",0.08,"0.019755*(0.2)","0.003056*(0.6)",0.09,0,0,0.14,"-0.003138*(0.2)","-0.0005*(0.6)",0.08,"-0.001177*(0.2)","-0.000188*(0.6)",0.12,0,0};
};
//};

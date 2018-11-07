////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:46:57 2018 : 'file' last modified on Wed Aug 22 21:52:35 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\pm73rak\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_pm73rak
	{
		units[] = {"PM73Rak"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base;
	class PM73Rak_Base: Rifle_Base
	{
		scope = 0;
		lootTag[] = {"Police","Military_east"};
		weight = 1600;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_380"};
		magazines[] = {"Mag_PM73_25Rnd","Mag_PM73_15Rnd"};
		magazineSwitchTime = 0.35;
		barrelArmor = 800;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadPM63";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_reload_0mod",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"PM73_Shot_SoundSet","PM73_Tail_SoundSet","PM73_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_0",0.7,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.092;
			recoil = "recoil_rak";
			recoilProne = "recoil_rak_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
	};
	class PM73Rak: PM73Rak_Base
	{
		scope = 2;
		displayName = "$STR_CfgWeapons_PM73Rak0";
		descriptionShort = "$STR_CfgWeapons_PM73Rak1";
		model = "\dz\weapons\firearms\pm73rak\pm73rak.p3d";
		attachments[] = {};
		baseAttachments[] = {};
		randomAttachments[] = {{"Mag_PM73_25Rnd","Mag_PM73_15Rnd","","","","","","","","","","","","","","","","","",""}};
		itemSize[] = {6,4};
		dexterity = 3.3;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\pm73rak\data\pm73_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\pm73rak\data\pm73.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\pm73rak\data\pm73.rvmat","DZ\weapons\firearms\pm73rak\data\pm73_damage.rvmat","DZ\weapons\firearms\pm73rak\data\pm73_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_rak[] = {0,0,0,0.04,"0.036943*(0.4)","0.0134348*(1.2)",0.08,"0.019755*(0.4)","0.003056*(1.2)",0.09,0,0,0.14,"-0.003138*(0.4)","-0.0005*(1.2)",0.08,"-0.001177*(0.4)","-0.000188*(1.2)",0.12,0,0};
	recoil_rak_prone[] = {0,0,0,0.004,"0.036943*(0.02)","0.0134348*(0.1)",0.008,"0.019755*(0.02)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.02)","-0.0005*(0.1)",0.008,"-0.001177*(0.02)","-0.000188*(0.1)",0.012,0,0};
};
//};

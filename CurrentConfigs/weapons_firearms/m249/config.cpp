////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:46:15 2018 : 'file' last modified on Wed Aug 22 21:52:06 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\m249\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_M249Para
	{
		units[] = {"M249Para"};
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
	class M249_Base: Rifle_Base
	{
		scope = 0;
		lootTag[] = {"Military_west"};
		weight = 7500;
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
		chamberableFrom[] = {"Ammo_556x45"};
		magazines[] = {"Mag_M249_Box200Rnd"};
		magazineSwitchTime = 6.5;
		barrelArmor = 3500;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,40};
		reloadAction = "ReloadAKM";
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_1",1.7782794,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_2",1.7782794,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_3",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = "60/800";
			recoil = "recoil_m249";
			recoilProne = "recoil_m249_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
			beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced2",1,1,75};
			beginSilenced_HomeMade[] = {"ddz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		};
	};
	class M249: M249_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_M2490";
		descriptionShort = "$STR_cfgWeapons_M2491";
		model = "\dz\weapons\firearms\m249\m249.p3d";
		attachments[] = {"weaponBipodM249","weaponOptics","suppressorImpro","weaponMuzzleM4","weaponHandguardM249","Att_Handguard_M249_Ris"};
		baseAttachments[] = {"M249_Hndgrd"};
		randomAttachments[] = {{"M249_Bipod","","","","","","","","",""},{"M249_RisHndgrd","","","","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 1.8;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\m249\data\m249.rvmat","DZ\weapons\firearms\m249\data\m249_damage.rvmat","DZ\weapons\firearms\m249\data\m249_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_m249[] = {0,0,0,0.04,"0.036943*(0.3)","0.0134348*(1.0)",0.08,"0.019755*(0.3)","0.003056*(1.0)",0.09,0,0,0.14,"-0.003138*(0.3)","-0.0005*(1.0)",0.08,"-0.001177*(0.3)","-0.000188*(1.0)",0.12,0,0};
	recoil_m249_prone[] = {0,0,0,0.04,"0.036943*(0.06)","0.0134348*(0.15)",0.08,"0.019755*(0.06)","0.003056*(0.15)",0.09,0,0,0.14,"-0.003138*(0.06)","-0.0005*(0.15)",0.08,"-0.001177*(0.06)","-0.000188*(0.15)",0.12,0,0};
};
//};

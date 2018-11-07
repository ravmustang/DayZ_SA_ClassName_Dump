////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:45:25 2018 : 'file' last modified on Wed Aug 22 21:50:14 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\B95\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_B95
	{
		units[] = {"b95","b95_Black","b95_Green"};
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
	class B95_Base: Rifle_Base
	{
		scope = 0;
		lootTag[] = {"Civilian","Hunting"};
		weight = 2820;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 2;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Mag_308WinSnaploader_2Rnd"};
		magazines[] = {};
		barrelArmor = 550;
		ejectType = 3;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadAction = "ReloadB95";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\B95\b95_reload2",0.8,1,20};
		reloadSound[] = {"",0.05623413,1,20};
		shotAction = "";
		tooltip = "_text = _this call fnc_generateTooltip;_text";
		hiddenSelections[] = {"camoGround"};
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"B95_Shot_SoundSet","B95_Tail_SoundSet","B95_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\firearms\B95\b95_close_1",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\B95\b95_close_0",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\B95\b95_close_1",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_b95";
			recoilProne = "recoil_b95_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"dz\sounds\weapons\firearms\B95\b95_close_0_double",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\B95\b95_close_0_double",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\B95\b95_close_0_double",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.01;
			recoil = "recoil_b95_double";
			recoilProne = "recoil_b95";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
	};
	class B95: B95_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_B950";
		descriptionShort = "$STR_cfgWeapons_B951";
		model = "\dz\weapons\firearms\B95\b95.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"HuntingOptic","","","","","",""}};
		dexterity = 2.65;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\B95\data\b95_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\B95\data\b95.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\B95\data\b95.rvmat","DZ\weapons\firearms\B95\data\b95_damage.rvmat","DZ\weapons\firearms\B95\data\b95_destruct.rvmat"};
		};
	};
	class B95_Black: B95
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_B95_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\B95\data\b95_painted.rvmat"};
	};
	class B95_Green: B95
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_B95_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\B95\data\b95_painted.rvmat"};
	};
};
class cfgRecoils
{
	recoil_b95[] = {0,0,0,0.04,"0.036943*(0.7)","0.0134348*(2)",0.09,"0.019755*(0.7)","0.003056*(2)",0.12,0,0,0.18,"-0.003138*(0.7)","-0.0005*(2)",0.12,"-0.001177*(0.7)","-0.000188*(2)",0.12,0,0};
	recoil_b95_double[] = {0,0,0,0.05,"0.036943*(1.2)","0.0134348*(5)",0.09,"0.019755*(1.2)","0.003056*(5)",0.12,0,0,0.18,"-0.003138*(1.2)","-0.0005*(5)",0.12,"-0.001177*(1.2)","-0.000188*(5)",0.12,0,0};
	recoil_b95_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1.5)",0.09,"0.019755*(0.5)","0.003056*(1.5)",0.12,0,0,0.18,"-0.003138*(0.5)","-0.0005*(1.5)",0.12,"-0.001177*(0.5)","-0.000188*(1.5)",0.12,0,0};
	recoil_b95sawedoff[] = {0,0,0,0.04,"0.036943*(2)","0.0134348*(20)",0.09,"0.019755*(2)","0.003056*(20)",0.12,0,0,0.18,"-0.003138*(2)","-0.0005*(20)",0.12,"-0.001177*(2)","-0.000188*(20)",0.12,0,0};
	recoil_b95sawedoff_double[] = {0,0,0,0.05,"0.036943*(5)","0.0134348*(70)",0.09,"0.019755*(5)","0.003056*(70)",0.12,0,0,0.18,"-0.003138*(5)","-0.0005*(70)",0.12,"-0.001177*(5)","-0.000188*(70)",0.12,0,0};
};
//};

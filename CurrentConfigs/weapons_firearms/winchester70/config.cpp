////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:49:05 2018 : 'file' last modified on Wed Aug 22 21:52:35 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\winchester70\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_Winchester70
	{
		units[] = {"Winchester70","Winchester70_Black","Winchester70_Green"};
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
	class Winchester70_Base: Rifle_Base
	{
		scope = 0;
		animName = "Winchester70";
		lootTag[] = {"Civilian","Hunting"};
		weight = 2721;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 5;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win"};
		magazines[] = {};
		barrelArmor = 1800;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_reload",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_cycle",0.8,1,20};
		reloadAction = "ReloadWinchester70";
		shotAction = "ReloadWinchester70_shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Win_Shot_SoundSet","Win_Tail_SoundSet","Win_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Win_silencerHomeMade_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_1",1,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 2;
			recoil = "recoil_Winchester";
			recoilProne = "recoil_Winchester_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
	};
	class Winchester70: Winchester70_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Winchester700";
		descriptionShort = "$STR_cfgWeapons_Winchester701";
		model = "\dz\weapons\firearms\winchester70\winchester70.p3d";
		attachments[] = {"weaponWrap","suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"HuntingOptic","","","","","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 3.3;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\winchester70\data\winchester70_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\winchester70\data\winchester70.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\winchester70\data\winchester70.rvmat","DZ\weapons\firearms\winchester70\data\winchester70_damage.rvmat","DZ\weapons\firearms\winchester70\data\winchester70_destruct.rvmat"};
		};
	};
	class Winchester70_Black: Winchester70
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_Winchester70_Black0";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class Winchester70_Green: Winchester70
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_Winchester70_Green0";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
};
class cfgRecoils
{
	recoil_Winchester[] = {0,0,0,0.04,"0.036943*(0.8)","0.0134348*(2.3)",0.08,"0.019755*(0.8)","0.003056*(2.3)",0.09,0,0,0.14,"-0.003138*(0.8)","-0.0005*(2.3)",0.08,"-0.001177*(0.8)","-0.000188*(2.3)",0.12,0,0};
	recoil_Winchester_prone[] = {0,0,0,0.004,"0.036943*(0.01)","0.0134348*(0.1)",0.008,"0.019755*(0.01)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.01)","-0.0005*(0.1)",0.008,"-0.001177*(0.01)","-0.000188*(0.1)",0.012,0,0};
};
//};

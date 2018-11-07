////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:52:20 2018 : 'file' last modified on Wed Aug 22 22:02:23 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_pistols\LongHorn\config.bin{
class CfgPatches
{
	class DZ_Pistols_Encore
	{
		units[] = {"LongHorn"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Pistol_Base;
	class LongHorn_Base: Pistol_Base
	{
		scope = 0;
		lootTag[] = {"Hunting"};
		inventorySlot = "";
		weight = 1700;
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
		magazines[] = {};
		chamberableFrom[] = {"Ammo_308Win"};
		barrelArmor = 1820;
		ejectType = 2;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\LongHorn\Longhorn_reload",0.8,1,20};
		ReloadAction = "reloadLonghorn";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"LongHorn_Shot_SoundSet","LongHorn_Tail_SoundSet","LongHorn_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"LongHorn_silencerHomeMade_SoundSet","LongHorn_silencerHomeMadeTail_SoundSet","LongHorn_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\LongHorn\LongHorn_close_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\LongHorn\LongHorn_close_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\LongHorn\LongHorn_close_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1.0;
			recoil = "recoil_longhorn";
			recoilProne = "recoil_longhorn_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
	};
	class LongHorn: LongHorn_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_LongHorn0";
		descriptionShort = "$STR_cfgWeapons_LongHorn1";
		model = "\dz\weapons\pistols\LongHorn\LongHorn.p3d";
		attachments[] = {"suppressorImpro","weaponOpticsCrossbow"};
		baseAttachments[] = {"PistolOptic"};
		randomAttachments[] = {{"Crossbow_RedpointOptic","PistolOptic","PistolOptic","PistolOptic","PistolOptic","PistolOptic","PistolOptic","PistolOptic"}};
		itemSize[] = {4,3};
		dexterity = 3.7;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\pistols\LongHorn\data\LongHorn.rvmat","DZ\weapons\pistols\LongHorn\data\LongHorn_damage.rvmat","DZ\weapons\pistols\LongHorn\data\LongHorn_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_longhorn[] = {0,0,0,0.04,"0.036943*(1)","0.0134348*(3)",0.08,"0.019755*(1)","0.003056*(3)",0.09,0,0,0.14,"-0.003138*(1)","-0.0005*(3)",0.08,"-0.001177*(1)","-0.000188*(3)",0.12,0,0};
	recoil_longhorn_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1)",0.08,"0.019755*(0.5)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(1)",0.08,"-0.001177*(0.5)","-0.000188*(1)",0.12,0,0};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyLongHorn: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\dz\weapons\pistols\LongHorn\LongHorn.p3d";
	};
};
//};

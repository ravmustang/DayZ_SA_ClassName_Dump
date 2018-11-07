////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:52:48 2018 : 'file' last modified on Wed Aug 22 22:02:42 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_pistols\pb6p9\config.bin{
class CfgPatches
{
	class DZ_Pistols_pb6p9
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Weapons"};
	};
};
class DefaultAction;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Mode_Safe: Mode_SemiAuto
{
	magazines[] = {};
};
class cfgWeapons
{
	class DefaultWeapon;
	class PistolCore;
	class Pistol_Base;
	class MakarovPB_Base: Pistol_Base
	{
		scope = 0;
		lootTag[] = {"Civilian","Police"};
		weight = 760;
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
		magazines[] = {"Mag_MakarovPB_8Rnd"};
		chamberableFrom[] = {"Ammo_380"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"DZ\sounds\weapons\firearms\PB6P9\PB6P9_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\ij70\Makarov_reload",0.8,1,20};
		reloadAction = "ReloadIJ70";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Makarov_Shot_SoundSet","Makarov_Tail_SoundSet","Makarov_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"PB6P9_silencerPro_SoundSet","PB6P9_silencerTail_SoundSet","PB6P9_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\ij70\ij70_close_0",1,1,600};
			begin2[] = {"dz\sounds\weapons\firearms\ij70\ij70_close_1",1,1,600};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.13;
			recoil = "recoil_ij70";
			recoilProne = "recoil_if70_prone";
			dispersion = 0.006;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\ij70\MakarovSilenced",1,1,60};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\ij70\MakarovSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
	};
	class MakarovPB: MakarovPB_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_MakarovPB0";
		descriptionShort = "$STR_cfgWeapons_MakarovPB1";
		model = "\DZ\weapons\pistols\pb6p9\pb6p9.p3d";
		attachments[] = {"pistolMuzzle"};
		baseAttachments[] = {"MakarovPBSuppressor"};
		randomAttachments[] = {{"","","","","","","","",""},{"Mag_MakarovPB_8Rnd","","","","","","","","",""}};
		itemSize[] = {3,2};
		dexterity = 3.7;
		class Damage
		{
			tex[] = {};
			mat[] = {"DAMAGE_WEAPONS_MAT(pistols\pb6p9\data\","pb6p9)"};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyPB6P9: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\dz\weapons\pistols\pb6p9\pb6p9.p3d";
	};
};
//};

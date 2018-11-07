////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:51:11 2018 : 'file' last modified on Wed Aug 22 22:02:22 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_pistols\1911\config.bin{
class CfgPatches
{
	class DZ_Pistols_1911
	{
		units[] = {"Colt1911","1911_Engraved"};
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
	class Colt1911_Base: Pistol_Base
	{
		scope = 0;
		weight = 1106;
		absorbency = 0.1;
		dexterity = 3.6;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_1911_7Rnd"};
		chamberableFrom[] = {"Ammo_45ACP"};
		magazineSwitchTime = 0.24;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_reload",0.8,1,20};
		hiddenSelections[] = {"camoGround"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Colt1911_Shot_SoundSet","Colt1911_Tail_SoundSet","Colt1911_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Colt1911_silencerPro_SoundSet","Colt1911_silencerTail_SoundSet","Colt1911_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_0",1,1,700};
			begin2[] = {"dz\sounds\weapons\firearms\colt1911\Colt1911_1",1,1,700};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.13;
			recoil = "recoil_1911";
			recoilProne = "recoil_1911_prone";
			dispersion = 0.006;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\colt1911\1911Silenced",1,1,60};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\colt1911\1911Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
	};
	class Colt1911: Colt1911_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Colt19110";
		descriptionShort = "$STR_cfgWeapons_Colt19111";
		hiddenSelections[] = {"camoGround"};
		model = "\dz\weapons\pistols\1911\1911.p3d";
		attachments[] = {"pistolFlashlight","pistolMuzzle"};
		baseAttachments[] = {};
		randomAttachments[] = {{"PistolSuppressor","","","","","",""},{"Mag_1911_7Rnd","","","","","","","","","",""}};
		itemSize[] = {3,3};
		lootTag[] = {"Civilian"};
		hiddenSelectionsTextures[] = {"dz\weapons\pistols\1911\data\1911_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\pistols\1911\data\1911.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\pistols\1911\data\1911.rvmat","DZ\weapons\pistols\1911\data\1911_damage.rvmat","DZ\weapons\pistols\1911\data\1911_destruct.rvmat"};
		};
	};
	class Engraved1911: Colt1911_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Engraved19110";
		descriptionShort = "$STR_cfgWeapons_Engraved19111";
		model = "\dz\weapons\pistols\1911\1911_engraved.p3d";
		attachments[] = {"pistolFlashlight","pistolMuzzle"};
		baseAttachments[] = {};
		randomAttachments[] = {{"PistolSuppressor","","","","","","","","",""},{"Mag_1911_7Rnd","","","","","","","","",""}};
		itemSize[] = {4,3};
		lootTag[] = {"Military_west"};
		hiddenSelectionsTextures[] = {"dz\weapons\pistols\1911\data\1911_engraved_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\pistols\1911\data\1911_engraved.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\pistols\1911\data\1911_engraved.rvmat","DZ\weapons\pistols\1911\data\1911_engraved_damage.rvmat","DZ\weapons\pistols\1911\data\1911_engraved_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_1911[] = {0,0,0,0.04,"0.036943*(1)","0.0134348*(3)",0.08,"0.019755*(1)","0.003056*(3)",0.09,0,0,0.14,"-0.003138*(1)","-0.0005*(3)",0.08,"-0.001177*(1)","-0.000188*(3)",0.12,0,0};
	recoil_1911_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1)",0.08,"0.019755*(0.5)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(1)",0.08,"-0.001177*(0.5)","-0.000188*(1)",0.12,0,0};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxy1911: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\dz\weapons\pistols\1911\1911.p3d";
	};
};
//};

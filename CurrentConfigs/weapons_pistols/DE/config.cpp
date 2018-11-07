////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:51:33 2018 : 'file' last modified on Wed Aug 22 22:02:23 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_pistols\DE\config.bin{
class CfgPatches
{
	class DZ_Pistols_DE
	{
		units[] = {"DE_Gold"};
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
	class DE_Base: Pistol_Base
	{
		scope = 0;
		lootTag[] = {"Civilian"};
		weight = 1500;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 1;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		magazines[] = {"Mag_DE_9rnd"};
		chamberableFrom[] = {"Ammo_357"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\FNX45\FNX_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\waltherP1\WaltherP1_reload_00",0.8,1,20};
		reloadAction = "ReloadRugerP1";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"DEG_Shot_SoundSet","DEG_Tail_SoundSet","DEG_InteriorTail_SoundSet"};
			reloadTime = 0.18;
			recoil = "recoil_DE";
			recoilProne = "recoil_DE_prone";
			dispersion = 0.006;
			magazineSlot = "magazine";
			begin1[] = {"dz\sounds\weapons\firearms\magnum\magnum_single_2",1,1,700};
			begin2[] = {"dz\sounds\weapons\firearms\magnum\magnum_single_1",1,1,700};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin1",0.33333,"begin2",0.33333};
			beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\CZ75\cz75Silenced",1,1,60};
			beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\CZ75\cz75Silenced2",1,1,60};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\CZ75\cz75Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		};
	};
	class DE: DE_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_DE0";
		descriptionShort = "$STR_cfgWeapons_DE1";
		model = "\dz\weapons\pistols\DE\DE.p3d";
		baseAttachments[] = {};
		attachments[] = {};
		randomAttachments[] = {{"Mag_DE_9rnd","","","","","","","","",""}};
		itemSize[] = {4,3};
		dexterity = 2.8;
		hiddenSelectionsTextures[] = {"dz\weapons\pistols\DE\data\gold_DE_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\pistols\DE\data\gold_de.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\pistols\DE\data\gold_de.rvmat","DZ\weapons\pistols\DE\data\gold_de_damage.rvmat","DZ\weapons\pistols\DE\data\gold_de_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_DE[] = {0,0,0,0.04,"0.036943*(1)","0.0134348*(3)",0.08,"0.019755*(1)","0.003056*(3)",0.09,0,0,0.14,"-0.003138*(1)","-0.0005*(3)",0.08,"-0.001177*(1)","-0.000188*(3)",0.12,0,0};
	recoil_DE_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1)",0.08,"0.019755*(0.5)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(1)",0.08,"-0.001177*(0.5)","-0.000188*(1)",0.12,0,0};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyDE: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\dz\weapons\pistols\DE\DE.p3d";
	};
};
//};

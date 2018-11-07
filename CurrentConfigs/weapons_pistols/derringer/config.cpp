////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:51:37 2018 : 'file' last modified on Wed Aug 22 22:02:37 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_pistols\derringer\config.bin{
class CfgPatches
{
	class DZ_Pistols_Derringer
	{
		units[] = {"Derringer_Black","Derringer_Grey","Derringer_Pink"};
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
	class Derringer_Base: Pistol_Base
	{
		scope = 0;
		displayName = "$STR_cfgWeapons_Derringer_Base0";
		descriptionShort = "$STR_cfgWeapons_Derringer_Base1";
		model = "\dz\weapons\pistols\derringer\derringer.p3d";
		animName = "Derringer";
		lootTag[] = {"Civilian"};
		weight = 800;
		itemSize[] = {2,1};
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		dexterity = 4;
		attachments[] = {};
		baseAttachments[] = {};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		value = 0;
		chamberSize = 2;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"Ammo_45ACP"};
		barrelArmor = 240;
		ejectType = 3;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\FNX45\FNX_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\derringer\deringer_reload_full",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\derringer\deringer_reload_short",0.8,1,20};
		shotAction = "reloadDerringer";
		reloadAction = "reloadDerringerFull";
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsMaterials[] = {"dz\weapons\pistols\derringer\data\derringer.rvmat"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Derringer_Shot_SoundSet","Derringer_Tail_SoundSet","Derringer_InteriorTail_SoundSet"};
			begin1[] = {"dz\sounds\weapons\firearms\derringer\deringer_single_0",1,1,600};
			begin2[] = {"dz\sounds\weapons\firearms\derringer\deringer_single_1",1,1,600};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.5;
			recoil = "recoil_derringer";
			recoilProne = "recoil_derringer_prone";
			dispersion = 0.008;
			magazineSlot = "magazine";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\pistols\derringer\data\derringer.rvmat","DZ\weapons\pistols\derringer\data\derringer_damage.rvmat","DZ\weapons\pistols\derringer\data\derringer_destruct.rvmat"};
		};
	};
	class Derringer_Black: Derringer_Base
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_Derringer_Black0";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class Derringer_Pink: Derringer_Base
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_Derringer_Pink0";
		hiddenSelectionsTextures[] = {"dz\weapons\pistols\derringer\data\derringer_pink_co.paa"};
	};
	class Derringer_Grey: Derringer_Base
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_Derringer_Grey0";
		hiddenSelectionsTextures[] = {"dz\weapons\pistols\derringer\data\derringer_grey_co.paa"};
	};
};
class cfgRecoils
{
	recoil_derringer[] = {0,0,0,0.04,"0.036943*(1)","0.0134348*(3)",0.08,"0.019755*(1)","0.003056*(3)",0.09,0,0,0.14,"-0.003138*(1)","-0.0005*(3)",0.08,"-0.001177*(1)","-0.000188*(3)",0.12,0,0};
	recoil_derringer_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1)",0.08,"0.019755*(0.5)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(1)",0.08,"-0.001177*(0.5)","-0.000188*(1)",0.12,0,0};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFNP45: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistol";
		model = "\dz\weapons\pistols\fnx45\fnp45.p3d";
	};
};
//};

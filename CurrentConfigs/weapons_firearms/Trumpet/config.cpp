////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:48:23 2018 : 'file' last modified on Wed Aug 22 21:51:34 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\Trumpet\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_Trumpet
	{
		units[] = {"Trumpet"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Weapons"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Rifle_Base;
	class Trumpet_Base: Rifle_Base
	{
		scope = 0;
		animName = "Trumpet";
		animClass = "Shotgun";
		lootTag[] = {"Civilian","Hunting"};
		weight = 2000;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 7;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_22"};
		magazines[] = {};
		tooltip = "_text = _this call fnc_generateTooltip;_text";
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\trumpet\trombone_reload",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\trumpet\trombone_pump",0.8,1,20};
		reloadAction = "ReloadTrumpet";
		shotAction = "ReloadTrumpet_shot";
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Trumpet_Shot_SoundSet","Trumpet_Tail_SoundSet","Trumpet_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Trumpet_silencerHomeMade_SoundSet","Trumpet_silencerHomeMadeTail_SoundSet","Trumpet_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\trombone\trombone_shot_0",0.8,1,300};
			begin2[] = {"dz\sounds\weapons\firearms\trombone\trombone_shot_1",0.8,1,300};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",0.05,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1;
			recoil = "recoil_single_primary_1outof10";
			recoilProne = "recoil_single_primary_1outof10";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
	};
	class Trumpet: Trumpet_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Trumpet0";
		descriptionShort = "$STR_cfgWeapons_Trumpet1";
		model = "\dz\weapons\firearms\Trumpet\trumpet.p3d";
		attachments[] = {"suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"HuntingOptic","","",""}};
		itemSize[] = {8,4};
		dexterity = 3.5;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Trumpet\data\trombone_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\Trumpet\data\trumpet.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\Trumpet\data\trumpet.rvmat","DZ\weapons\firearms\Trumpet\data\trumpet_damage.rvmat","DZ\weapons\firearms\Trumpet\data\trumpet_destruct.rvmat"};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class TrumpetParts: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TrumpetParts0";
		descriptionShort = "$STR_CfgVehicles_TrumpetParts1";
		model = "\dz\weapons\firearms\Trumpet\trumpet_parts.p3d";
		handheld = "true";
		armAction = "Disarm";
		itemSize[] = {3,6};
		weight = 2000;
		absorbency = 0.1;
		lootTag[] = {"Civilian","Hunting"};
		barrelArmor = 600;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\Trumpet\data\trumpet.rvmat","DZ\weapons\firearms\Trumpet\data\trumpet_damage.rvmat","DZ\weapons\firearms\Trumpet\data\trumpet_destruct.rvmat"};
		};
		class Melee
		{
			range = 1.0;
			swingTime = 0.5;
			action = "GestureMeleeBayonetStab";
			ammo = "MeleeFist";
			useCursor = 1;
		};
	};
};
//};

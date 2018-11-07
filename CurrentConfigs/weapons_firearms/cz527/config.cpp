////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:45:43 2018 : 'file' last modified on Wed Aug 22 21:51:47 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\cz527\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_CZ527
	{
		units[] = {"cz527","cz527_Black","cz527_Green","cz527_Green_Black","cz527_Black_Green"};
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
	class CZ527_Base: Rifle_Base
	{
		scope = 0;
		animName = "cz527";
		lootTag[] = {"Civilian","Hunting"};
		weight = 2720;
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
		chamberableFrom[] = {"Ammo_762x39"};
		magazines[] = {"Mag_CZ527_5rnd"};
		magazineSwitchTime = 0.38;
		barrelArmor = 900;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CR527_silencerHomeMade_SoundSet","CR527_silencerHomeMadeTail_SoundSet","CR527_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 2;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Weapon_Movement_Rifle_Walk
				{
					soundSet = "Weapon_Movement_Rifle_Walk_SoundSet";
					id = 101;
				};
				class Weapon_Movement_Rifle_Run
				{
					soundSet = "Weapon_Movement_Rifle_Run_SoundSet";
					id = 102;
				};
				class Weapon_Movement_Rifle_Sprint
				{
					soundSet = "Weapon_Movement_Rifle_Sprint_SoundSet";
					id = 103;
				};
				class Weapon_Movement_Rifle_Land
				{
					soundSet = "Weapon_Movement_Rifle_Land_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
				class CR527_charge_open
				{
					soundSet = "CR527_charge_open_SoundSet";
					id = 1;
				};
				class CR527_charge_open_release
				{
					soundSet = "CR527_charge_open_release_SoundSet";
					id = 2;
				};
				class CR527_charge_close
				{
					soundSet = "CR527_charge_close_SoundSet";
					id = 3;
				};
				class CR527_charge_close_release
				{
					soundSet = "CR527_charge_close_release_SoundSet";
					id = 4;
				};
				class CR527_chamber_load
				{
					soundSet = "CR527_chamber_load_SoundSet";
					id = 5;
				};
				class CR527_mag_in
				{
					soundSet = "CR527_mag_in_SoundSet";
					id = 6;
				};
				class CR527_mag_load
				{
					soundSet = "CR527_mag_load_SoundSet";
					id = 7;
				};
				class CR527_mag_out
				{
					soundSet = "CR527_mag_out_SoundSet";
					id = 9;
				};
				class CR527_mag_remove
				{
					soundSet = "CR527_mag_remove_SoundSet";
					id = 8;
				};
				class CR527_dry
				{
					soundSet = "CR527_dry_SoundSet";
					id = 10;
				};
				class CR527_pullout
				{
					soundSet = "CR527_pullout_SoundSet";
					id = 11;
				};
				class CR527_hand1
				{
					soundSet = "CR527_hand1_SoundSet";
					id = 12;
				};
				class CR527_hand2
				{
					soundSet = "CR527_hand2_SoundSet";
					id = 13;
				};
				class CR527_hand3
				{
					soundSet = "CR527_hand3_SoundSet";
					id = 14;
				};
			};
		};
	};
	class CZ527: CZ527_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_CZ5270";
		descriptionShort = "$STR_cfgWeapons_CZ5271";
		model = "\dz\weapons\firearms\cz527\cz527.p3d";
		attachments[] = {"weaponBipod","weaponWrap","suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"HuntingOptic","","","","","",""},{"Mag_CZ527_5rnd","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 2.7;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\cz527\data\cz527_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\cz527\data\cz527.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\cz527\data\cz527.rvmat","DZ\weapons\firearms\cz527\data\cz527_damage.rvmat","DZ\weapons\firearms\cz527\data\cz527_destruct.rvmat"};
		};
	};
	class CZ527_Black: CZ527
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_CZ527_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class CZ527_Green: CZ527
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_CZ527_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class CZ527_Camo: CZ527
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_CZ527_Camo0";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\cz527\data\cz527_camo_co.paa"};
	};
};
class cfgRecoils
{
	recoil_cz527[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(2)",0.08,"0.019755*(0.5)","0.003056*(2)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(2)",0.08,"-0.001177*(0.5)","-0.000188*(2)",0.12,0,0};
	recoil_cz527_prone[] = {0,0,0,0.04,"0.036943*(0.3)","0.0134348*(1)",0.08,"0.019755*(0.3)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.3)","-0.0005*(1)",0.08,"-0.001177*(0.3)","-0.000188*(1)",0.12,0,0};
};
//};

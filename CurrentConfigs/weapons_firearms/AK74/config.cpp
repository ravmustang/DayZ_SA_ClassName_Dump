////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:44:56 2018 : 'file' last modified on Wed Aug 22 21:50:13 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\AK74\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_AK74
	{
		units[] = {"AK74","AK74_Black","AK74_Green","AKS74U","AKS74U_Black","AKS74U_Green"};
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
	class AK74_Base: Rifle_Base
	{
		scope = 0;
		lootTag[] = {"Military_east"};
		weight = 1990;
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
		chamberableFrom[] = {"Ammo_545x39"};
		magazines[] = {"Mag_AK74_30Rnd","Mag_AK74_30Rnd_Black","Mag_AK74_30Rnd_Green"};
		magazineSwitchTime = 0.2;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\AK74\ak74_reload",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_2",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
			dispersion = 0.002;
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
				class AK_charge_open
				{
					soundSet = "AK_charge_open_SoundSet";
					id = 1;
				};
				class AK_charge_open_release
				{
					soundSet = "AK_charge_open_release_SoundSet";
					id = 2;
				};
				class AK_charge_close
				{
					soundSet = "AK_charge_close_SoundSet";
					id = 3;
				};
				class AK_charge_close_release
				{
					soundSet = "AK_charge_close_release_SoundSet";
					id = 4;
				};
				class AK_chamber_load
				{
					soundSet = "AK_chamber_load_SoundSet";
					id = 5;
				};
				class AK_mag_load
				{
					soundSet = "AK_mag_load_SoundSet";
					id = 6;
				};
				class AK_mag_load_slow
				{
					soundSet = "AK_mag_load_slow_SoundSet";
					id = 7;
				};
				class AK_jamming
				{
					soundSet = "AK_jamming_SoundSet";
					id = 8;
				};
				class AK_pullout
				{
					soundSet = "AK_pullout_SoundSet";
					id = 9;
				};
			};
		};
	};
	class AK74: AK74_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_AK740";
		descriptionShort = "$STR_cfgWeapons_AK741";
		model = "\dz\weapons\firearms\AK101\ak101.p3d";
		attachments[] = {"weaponButtstockAK","WeaponHandguardAK","weaponOpticsAK","weaponFlashlight","weaponBipod","weaponWrap","weaponMuzzleAK","suppressorImpro","weaponBayonetAK"};
		baseAttachments[] = {"AK74_WoodBttstck","AK74_Hndgrd"};
		randomAttachments[] = {{"AK_FoldingBttstck","AK_PlasticBttstck","AK_WoodBttstck","AK_WoodBttstck","AK_WoodBttstck","AK_WoodBttstck","AK_WoodBttstck","AK_WoodBttstck","AK_WoodBttstck"},{"AK_RailHndgrd","AK_PlasticHndgrd","AK74_Hndgrd","AK74_Hndgrd","AK74_Hndgrd","AK74_Hndgrd"},{"KashtanOptic","PSO11Optic","","","","","","","","","","","","","","","","","",""},{"AK_Suppressor","","","","","","","","",""},{"Mag_AK74_30Rnd","","","","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 2.75;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK101\data\ak101_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK101\data\ak101.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\AK101\Data\ak101.rvmat","DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat","DZ\weapons\firearms\AK101\Data\ak101_destruct.rvmat"};
		};
	};
	class AK74_Black: AK74
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_AK74_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class AK74_Green: AK74
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_AK74_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class AKS74U: AK74_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_AKS74U0";
		descriptionShort = "$STR_cfgWeapons_AKS74U1";
		model = "\dz\weapons\firearms\AK74\aks74u.p3d";
		attachments[] = {"weaponButtstockAK","weaponWrap","weaponMuzzleAK","suppressorImpro"};
		baseAttachments[] = {"AKS74U_Bttstck"};
		randomAttachments[] = {{"AK_FoldingBttstck","AK_PlasticBttstck","AK_WoodBttstck","AKS74U_Bttstck","AKS74U_Bttstck","AKS74U_Bttstck","AKS74U_Bttstck","AKS74U_Bttstck","AKS74U_Bttstck"},{"AK_Suppressor","","","","","","","","",""},{"Mag_AK74_30Rnd","","","","","","","","",""}};
		itemSize[] = {7,5};
		dexterity = 3.2;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK74\data\aks74u_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK74\data\aks74u.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\AK74\Data\aks74u.rvmat","DZ\weapons\firearms\AK74\Data\aks74u_damage.rvmat","DZ\weapons\firearms\AK74\Data\aks74u_destruct.rvmat"};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
	};
	class AKS74U_Black: AKS74U
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_AKS74U_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class AKS74U_Green: AKS74U
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_AKS74U_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.37,0.28,1.0,CO)"};
	};
};
class cfgRecoils
{
	recoil_AK74[] = {0,0,0,0.04,"0.036943*(0.4)","0.0134348*(1.2)",0.08,"0.019755*(0.4)","0.003056*(1.2)",0.09,0,0,0.14,"-0.003138*(0.4)","-0.0005*(1.2)",0.08,"-0.001177*(0.4)","-0.000188*(1.2)",0.12,0,0};
	recoil_AK74_prone[] = {0,0,0,0.004,"0.036943*(0.01)","0.0134348*(0.1)",0.008,"0.019755*(0.01)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.01)","-0.0005*(0.1)",0.008,"-0.001177*(0.01)","-0.000188*(0.1)",0.012,0,0};
};
//};

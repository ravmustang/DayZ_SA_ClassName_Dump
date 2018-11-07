////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:46:23 2018 : 'file' last modified on Wed Aug 22 21:52:09 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_firearms\mosin9130\config.bin{
class CfgPatches
{
	class DZ_Weapons_Firearms_MosinNagant
	{
		units[] = {"Mosin9130","Mosin9130_Black","Mosin9130_Green","Mosin9130_Green_Black","Mosin9130_Black_Green"};
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
	class Mosin9130_Base: Rifle_Base
	{
		scope = 0;
		animName = "Mosin9130";
		lootTag[] = {"Civilian","Hunting"};
		weight = 4000;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		ContinuousActions[] = {"AT_LOAD_MULTI_BULLET_TO_WEAPON"};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceInitIndex = 0;
		PPDOFProperties[] = {1,0.6,200000,0.3,3,0.1};
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 5;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"Ammo_762x54","Ammo_762x54Tracer","Mag_CLIP762x54_5Rnd"};
		barrelArmor = 400;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadSkips[] = {0.32,0.41,0.5,0.59,0.69,0.77};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_reloading",0.8,1,20};
		reloadSound[] = {"DZ\sounds\weapons\firearms\mosin9130\mosin_cycling",0.8,1,20};
		reloadAction = "ReloadMosinFull";
		shotAction = "ReloadMosinShort";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\mosin9130\data\mosin_9130.rvmat"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Mosin_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Mosin_silencerHomeMade_SoundSet","Mosin_silencerHomeMadeTail_SoundSet","Mosin_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 2;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed = 1;
					overridePoint = "Usti hlavne";
				};
				class ChamberFlash
				{
					overridePoint = "Usti hlavne";
					illuminateWorld = 1;
					overrideParticle = "weapon_shot_izh18_01";
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\mosin9130\data\mosin_9130.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_9130_damage.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_9130_destruct.rvmat"};
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
				class mosin9130_charge_open
				{
					soundSet = "mosin9130_charge_open_SoundSet";
					id = 1;
				};
				class mosin9130_chamber_load
				{
					soundSet = "mosin9130_chamber_load_SoundSet";
					id = 2;
				};
				class mosin9130_charge_close
				{
					soundSet = "mosin9130_charge_close_SoundSet";
					id = 3;
				};
				class mosin9130_dry
				{
					soundSet = "mosin9130_dry_SoundSet";
					id = 10;
				};
				class mosin9130_pullout
				{
					soundSet = "mosin9130_pullout_SoundSet";
					id = 11;
				};
			};
		};
	};
	class SawedoffMosin9130_Base: Rifle_Base
	{
		scope = 0;
		animName = "Mosin9130";
		weight = 3000;
		absorbency = 0.1;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 0;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 5;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"Ammo_762x54","Ammo_762x54Tracer","Mag_CLIP762x54_5Rnd"};
		cursor = "aimBowGhost";
		barrelArmor = 300;
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1};
		reloadSkips[] = {0.32,0.41,0.5,0.59,0.69,0.77};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_reloading",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_cycling",0.8,1,20};
		reloadAction = "ReloadMosinFull";
		shotAction = "ReloadMosinShort";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Mosin_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Mosin_silencerHomeMade_SoundSet","Mosin_silencerHomeMadeTail_SoundSet","Mosin_silencerInteriorHomeMadeTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 2;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0.003;
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
				class mosin9130_charge_open
				{
					soundSet = "mosin9130_charge_open_SoundSet";
					id = 1;
				};
				class mosin9130_chamber_load
				{
					soundSet = "mosin9130_chamber_load_SoundSet";
					id = 2;
				};
				class mosin9130_charge_close
				{
					soundSet = "mosin9130_charge_close_SoundSet";
					id = 3;
				};
				class mosin9130_dry
				{
					soundSet = "mosin9130_dry_SoundSet";
					id = 10;
				};
				class mosin9130_pullout
				{
					soundSet = "mosin9130_pullout_SoundSet";
					id = 11;
				};
			};
		};
	};
	class Mosin9130: Mosin9130_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Mosin91300";
		descriptionShort = "$STR_cfgWeapons_Mosin91301";
		model = "\dz\weapons\firearms\mosin9130\mosin9130.p3d";
		itemSize[] = {9,6};
		dexterity = 2.3;
		attachments[] = {"weaponMuzzleMosin","weaponBayonetMosin","weaponOpticsMosin","weaponBipod","weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Mosin_Compensator","","","","","","","","",""},{"PUScopeOptic","","","","","","","","",""}};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\mosin9130\data\mosin_9130_co.paa"};
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
				class mosin9130_charge_open
				{
					soundSet = "mosin9130_charge_open_SoundSet";
					id = 1;
				};
				class mosin9130_chamber_load
				{
					soundSet = "mosin9130_chamber_load_SoundSet";
					id = 2;
				};
				class mosin9130_charge_close
				{
					soundSet = "mosin9130_charge_close_SoundSet";
					id = 3;
				};
				class mosin9130_dry
				{
					soundSet = "mosin9130_dry_SoundSet";
					id = 10;
				};
				class mosin9130_pullout
				{
					soundSet = "mosin9130_pullout_SoundSet";
					id = 11;
				};
			};
		};
	};
	class Mosin9130_Black: Mosin9130_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Mosin9130_Black0";
		descriptionShort = "$STR_cfgWeapons_Mosin9130_Black1";
		model = "\dz\weapons\firearms\mosin9130\mosin9130.p3d";
		itemSize[] = {10,3};
		dexterity = 2.3;
		attachments[] = {"weaponMuzzleMosin","weaponBayonetMosin","weaponOpticsMosin","weaponBipod","weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Mosin_Compensator","","","","","","","","",""},{"PUScopeOptic","","","","","","","","",""}};
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\mosin9130\data\mosin_9130_bk.rvmat"};
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
				class mosin9130_charge_open
				{
					soundSet = "mosin9130_charge_open_SoundSet";
					id = 1;
				};
				class mosin9130_chamber_load
				{
					soundSet = "mosin9130_chamber_load_SoundSet";
					id = 2;
				};
				class mosin9130_charge_close
				{
					soundSet = "mosin9130_charge_close_SoundSet";
					id = 3;
				};
				class mosin9130_dry
				{
					soundSet = "mosin9130_dry_SoundSet";
					id = 10;
				};
				class mosin9130_pullout
				{
					soundSet = "mosin9130_pullout_SoundSet";
					id = 11;
				};
			};
		};
	};
	class Mosin9130_Green: Mosin9130_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Mosin9130_Green0";
		descriptionShort = "$STR_cfgWeapons_Mosin9130_Green1";
		model = "\dz\weapons\firearms\mosin9130\mosin9130.p3d";
		itemSize[] = {9,6};
		dexterity = 2.3;
		attachments[] = {"weaponMuzzleMosin","weaponBayonetMosin","weaponOpticsMosin","weaponBipod","weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Mosin_Compensator","","","","","","","","",""},{"PUScopeOptic","","","","","","","","",""}};
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
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
				class mosin9130_charge_open
				{
					soundSet = "mosin9130_charge_open_SoundSet";
					id = 1;
				};
				class mosin9130_chamber_load
				{
					soundSet = "mosin9130_chamber_load_SoundSet";
					id = 2;
				};
				class mosin9130_charge_close
				{
					soundSet = "mosin9130_charge_close_SoundSet";
					id = 3;
				};
				class mosin9130_dry
				{
					soundSet = "mosin9130_dry_SoundSet";
					id = 10;
				};
				class mosin9130_pullout
				{
					soundSet = "mosin9130_pullout_SoundSet";
					id = 11;
				};
			};
		};
	};
	class Mosin9130_Camo: Mosin9130_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_Mosin9130_Camo0";
		descriptionShort = "$STR_cfgWeapons_Mosin9130_Camo1";
		model = "\dz\weapons\firearms\mosin9130\mosin9130.p3d";
		itemSize[] = {9,6};
		dexterity = 2.3;
		attachments[] = {"weaponMuzzleMosin","weaponBayonetMosin","weaponOpticsMosin","weaponBipod","weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Mosin_Compensator","","","","","","","","",""},{"PUScopeOptic","","","","","","","","",""}};
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\mosin9130\data\mosin_nagant_camo_co.paa"};
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
				class mosin9130_charge_open
				{
					soundSet = "mosin9130_charge_open_SoundSet";
					id = 1;
				};
				class mosin9130_chamber_load
				{
					soundSet = "mosin9130_chamber_load_SoundSet";
					id = 2;
				};
				class mosin9130_charge_close
				{
					soundSet = "mosin9130_charge_close_SoundSet";
					id = 3;
				};
				class mosin9130_dry
				{
					soundSet = "mosin9130_dry_SoundSet";
					id = 10;
				};
				class mosin9130_pullout
				{
					soundSet = "mosin9130_pullout_SoundSet";
					id = 11;
				};
			};
		};
	};
	class SawedoffMosin9130: SawedoffMosin9130_Base
	{
		scope = 2;
		displayName = "$STR_cfgWeapons_SawedoffMosin91300";
		descriptionShort = "$STR_cfgWeapons_SawedoffMosin91301";
		model = "\dz\weapons\firearms\mosin9130\mosin_sawn.p3d";
		attachments[] = {"weaponOpticsMosin"};
		baseAttachments[] = {};
		lootCategory = "Crafted";
		itemSize[] = {6,5};
		dexterity = 2.7;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\mosin9130\data\mosin_sawn_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\mosin9130\data\mosin_sawn.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\mosin9130\data\mosin_sawn.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_sawn_damage.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_sawn_destruct.rvmat"};
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
				class mosin9130_charge_open
				{
					soundSet = "mosin9130_charge_open_SoundSet";
					id = 1;
				};
				class mosin9130_chamber_load
				{
					soundSet = "mosin9130_chamber_load_SoundSet";
					id = 2;
				};
				class mosin9130_charge_close
				{
					soundSet = "mosin9130_charge_close_SoundSet";
					id = 3;
				};
				class mosin9130_dry
				{
					soundSet = "mosin9130_dry_SoundSet";
					id = 10;
				};
				class mosin9130_pullout
				{
					soundSet = "mosin9130_pullout_SoundSet";
					id = 11;
				};
			};
		};
	};
	class SawedoffMosin9130_Black: SawedoffMosin9130
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_SawedoffMosin9130_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\mosin9130\data\mosin_sawn_bk.rvmat"};
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
				class mosin9130_charge_open
				{
					soundSet = "mosin9130_charge_open_SoundSet";
					id = 1;
				};
				class mosin9130_chamber_load
				{
					soundSet = "mosin9130_chamber_load_SoundSet";
					id = 2;
				};
				class mosin9130_charge_close
				{
					soundSet = "mosin9130_charge_close_SoundSet";
					id = 3;
				};
				class mosin9130_dry
				{
					soundSet = "mosin9130_dry_SoundSet";
					id = 10;
				};
				class mosin9130_pullout
				{
					soundSet = "mosin9130_pullout_SoundSet";
					id = 11;
				};
			};
		};
	};
	class SawedoffMosin9130_Green: SawedoffMosin9130
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_SawedoffMosin9130_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
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
				class mosin9130_charge_open
				{
					soundSet = "mosin9130_charge_open_SoundSet";
					id = 1;
				};
				class mosin9130_chamber_load
				{
					soundSet = "mosin9130_chamber_load_SoundSet";
					id = 2;
				};
				class mosin9130_charge_close
				{
					soundSet = "mosin9130_charge_close_SoundSet";
					id = 3;
				};
				class mosin9130_dry
				{
					soundSet = "mosin9130_dry_SoundSet";
					id = 10;
				};
				class mosin9130_pullout
				{
					soundSet = "mosin9130_pullout_SoundSet";
					id = 11;
				};
			};
		};
	};
	class SawedoffMosin9130_Camo: SawedoffMosin9130
	{
		scope = 2;
		descriptionShort = "$STR_cfgWeapons_SawedoffMosin9130_Camo0";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\mosin9130\data\mosin_nagant_camo_co.paa"};
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
				class mosin9130_charge_open
				{
					soundSet = "mosin9130_charge_open_SoundSet";
					id = 1;
				};
				class mosin9130_chamber_load
				{
					soundSet = "mosin9130_chamber_load_SoundSet";
					id = 2;
				};
				class mosin9130_charge_close
				{
					soundSet = "mosin9130_charge_close_SoundSet";
					id = 3;
				};
				class mosin9130_dry
				{
					soundSet = "mosin9130_dry_SoundSet";
					id = 10;
				};
				class mosin9130_pullout
				{
					soundSet = "mosin9130_pullout_SoundSet";
					id = 11;
				};
			};
		};
	};
};
class cfgRecoils
{
	recoil_mosin[] = {0,0,0,0.04,"0.036943*(0.8)","0.0134348*(2.3)",0.08,"0.019755*(0.8)","0.003056*(2.3)",0.09,0,0,0.14,"-0.003138*(0.8)","-0.0005*(2.3)",0.08,"-0.001177*(0.8)","-0.000188*(2.3)",0.12,0,0};
	recoil_mosin_prone[] = {0,0,0,0.004,"0.036943*(0.01)","0.0134348*(0.1)",0.008,"0.019755*(0.01)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.01)","-0.0005*(0.1)",0.008,"-0.001177*(0.01)","-0.000188*(0.1)",0.012,0,0};
};
//};

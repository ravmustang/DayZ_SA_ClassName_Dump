////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:43:13 2018 : 'file' last modified on Wed Aug 22 21:43:48 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapon_muzzles\config.bin{
class CfgPatches
{
	class DZ_Weapons_Muzzles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgRecipes{};
class cfgVehicles
{
	class Inventory_Base;
	class ItemBarrel: Inventory_Base{};
	class ItemSuppressor: Inventory_Base
	{
		scope = 0;
		inventorySlot = "weaponMuzzle";
		simulation = "ItemSuppressor";
		itemSize[] = {1,1};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		barrelArmor = 600;
		recoilModifier[] = {1,1,1};
		isMeleeWeapon = 1;
	};
	class AK_Bayonet: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK_Bayonet0";
		descriptionShort = "$STR_cfgVehicles_AK_Bayonet1";
		model = "\dz\weapons\attachments\muzzle\bayonet_ak.p3d";
		animClass = "Knife";
		rotationFlags = 17;
		reversed = 0;
		weight = 426;
		itemSize[] = {2,3};
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		openItemSpillRange[] = {0,20};
		inventorySlot = "weaponBayonetAK";
		dispersionModifier = 0.0001;
		dispersionCondition = "true";
		canSkinBodies = 1;
		recoilModifier[] = {1,1,1};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\Russian_AKM_Bayonet.rvmat","DZ\weapons\attachments\data\Russian_AKM_Bayonet_damage.rvmat","DZ\weapons\attachments\data\Russian_AKM_Bayonet_destruct.rvmat"};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKnife";
				range = 1.1;
			};
			class Heavy
			{
				ammo = "MeleeKnife_Heavy";
				range = 1.1;
			};
			class Sprint
			{
				ammo = "MeleeKnife_Heavy";
				range = 3.3;
			};
		};
	};
	class M9A1_Bayonet: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_M9A1_Bayonet0";
		descriptionShort = "$STR_cfgVehicles_M9A1_Bayonet1";
		model = "\dz\weapons\attachments\muzzle\bayonet_m9a1.p3d";
		animClass = "Knife";
		rotationFlags = 17;
		reversed = 0;
		weight = 400;
		itemSize[] = {2,3};
		lootTag[] = {"Military_west"};
		lootCategory = "Attachments";
		openItemSpillRange[] = {0,20};
		inventorySlot = "weaponBayonet";
		dispersionModifier = 0.0001;
		dispersionCondition = "true";
		canSkinBodies = 1;
		recoilModifier[] = {1,1,1};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\m4_bayonet.rvmat","DZ\weapons\attachments\data\m4_bayonet_damage.rvmat","DZ\weapons\attachments\data\m4_bayonet_destruct.rvmat"};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKnife";
				range = 1.1;
			};
			class Heavy
			{
				ammo = "MeleeKnife_Heavy";
				range = 1.1;
			};
			class Sprint
			{
				ammo = "MeleeKnife_Heavy";
				range = 3.3;
			};
		};
	};
	class Mosin_Bayonet: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_Mosin_Bayonet0";
		descriptionShort = "$STR_cfgVehicles_Mosin_Bayonet1";
		model = "\dz\weapons\attachments\muzzle\bayonet_mosin.p3d";
		animClass = "Knife";
		rotationFlags = 12;
		reversed = 0;
		weight = 350;
		itemSize[] = {2,3};
		lootTag[] = {"Civilian"};
		lootCategory = "Attachments";
		openItemSpillRange[] = {0,20};
		inventorySlot = "weaponBayonetMosin";
		dispersionModifier = 0.0001;
		dispersionCondition = "true";
		canSkinBodies = 1;
		recoilModifier[] = {1,1,1};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\mosin_bayonet.rvmat","DZ\weapons\attachments\data\mosin_bayonet_damage.rvmat","DZ\weapons\attachments\data\mosin_bayonet_destruct.rvmat"};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKnife";
				range = 1.1;
			};
			class Heavy
			{
				ammo = "MeleeKnife_Heavy";
				range = 1.1;
			};
			class Sprint
			{
				ammo = "MeleeKnife_Heavy";
				range = 3.3;
			};
		};
	};
	class SKS_Bayonet: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_SKS_Bayonet0";
		descriptionShort = "$STR_cfgVehicles_SKS_Bayonet1";
		model = "\dz\weapons\attachments\muzzle\bayonet_sks.p3d";
		animClass = "Knife";
		rotationFlags = 17;
		reversed = 0;
		weight = 400;
		itemSize[] = {2,3};
		lootTag[] = {"Military_east"};
		lootCategory = "Attachments";
		openItemSpillRange[] = {0,20};
		inventorySlot = "weaponBayonetSKS";
		dispersionModifier = 0.0001;
		dispersionCondition = "true";
		canSkinBodies = 1;
		recoilModifier[] = {1,1,1};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\sks_bayo.rvmat","DZ\weapons\attachments\data\sks_bayo_damage.rvmat","DZ\weapons\attachments\data\sks_bayo_destruct.rvmat"};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKnife";
				range = 1.1;
			};
			class Heavy
			{
				ammo = "MeleeKnife_Heavy";
				range = 1.1;
			};
			class Sprint
			{
				ammo = "MeleeKnife_Heavy";
				range = 3.3;
			};
		};
	};
	class Mosin_Compensator: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_Mosin_Compensator0";
		descriptionShort = "$STR_cfgVehicles_Mosin_Compensator1";
		model = "\dz\weapons\attachments\muzzle\mosin_compensator.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {2,1};
		lootTag[] = {"Hunting"};
		lootCategory = "Attachments";
		inventorySlot = "weaponMuzzleMosin";
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\mosin_compensator.rvmat","DZ\weapons\attachments\data\mosin_compensator_damage.rvmat","DZ\weapons\attachments\data\mosin_compensator_destruct.rvmat"};
		};
	};
	class MP5_Compensator: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_MP5_Compensator0";
		descriptionShort = "$STR_cfgVehicles_MP5_Compensator1";
		model = "\dz\weapons\attachments\muzzle\MP5k_compensator.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 80;
		itemSize[] = {2,1};
		lootTag[] = {"Police"};
		lootCategory = "Attachments";
		inventorySlot = "weaponMuzzleMP5";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		recoilModifier[] = {1,1,1};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mp5_02";
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\MP5k_compensator.rvmat","DZ\weapons\attachments\data\MP5k_compensator_damage.rvmat","DZ\weapons\attachments\data\MP5k_compensator_destruct.rvmat"};
		};
	};
	class ImprovisedSuppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_ImprovisedSuppressor0";
		descriptionShort = "$STR_cfgVehicles_ImprovisedSuppressor1";
		model = "\dz\weapons\attachments\muzzle\bottle_suppressor.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 50;
		itemSize[] = {2,4};
		lootCategory = "Attachments";
		inventorySlot = "suppressorImpro";
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0001;
		noiseShootModifier = -0.4;
		dispersionCondition = "true";
		barrelArmor = 7;
		recoilModifier[] = {1,1,1};
		selectionFireAnim = "zasleh";
		soundIndex = 2;
		muzzlePos = "usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overridePoint = "Usti hlavne";
					overrideParticle = "weapon_shot_fnx_02";
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\muzzle\data\bottle_suppressor.rvmat","DZ\weapons\attachments\muzzle\data\bottle_suppressor_damage.rvmat","DZ\weapons\attachments\muzzle\data\bottle_suppressor_destruct.rvmat"};
		};
	};
	class M4_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_M4_Suppressor0";
		descriptionShort = "$STR_cfgVehicles_M4_Suppressor1";
		model = "\dz\weapons\attachments\muzzle\suppressor_556.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 73;
		itemSize[] = {1,3};
		lootCategory = "Attachments";
		lootTag[] = {"Military_west"};
		inventorySlot = "weaponMuzzleM4";
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0001;
		noiseShootModifier = -0.5;
		dispersionCondition = "true";
		barrelArmor = 600;
		recoilModifier[] = {1,1,1};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\suppressor556.rvmat","DZ\weapons\attachments\data\suppressor556_damage.rvmat","DZ\weapons\attachments\data\suppressor556_destruct.rvmat"};
		};
		class Particles{};
	};
	class AK_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_AK_Suppressor0";
		descriptionShort = "$STR_cfgVehicles_AK_Suppressor1";
		model = "\dz\weapons\attachments\muzzle\suppressor_545.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 100;
		itemSize[] = {1,3};
		lootCategory = "Attachments";
		lootTag[] = {"Military_east"};
		inventorySlot = "weaponMuzzleAK";
		simulation = "ItemSuppressor";
		dispersionModifier = -0.0001;
		noiseShootModifier = -0.5;
		dispersionCondition = "true";
		barrelArmor = 600;
		recoilModifier[] = {1,1,1};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_akm_02";
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\tgpa.rvmat","DZ\weapons\attachments\data\tgpa_damage.rvmat","DZ\weapons\attachments\data\tgpa_destruct.rvmat"};
		};
	};
	class PistolSuppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_PistolSuppressor0";
		descriptionShort = "$STR_cfgVehicles_PistolSuppressor1";
		model = "\dz\weapons\attachments\muzzle\suppressor_45acp.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 70;
		itemSize[] = {1,3};
		lootCategory = "Attachments";
		lootTag[] = {"Military_east","Military_west","Police","Civilian"};
		inventorySlot = "pistolMuzzle";
		simulation = "ItemSuppressor";
		noiseShootModifier = -0.8;
		barrelArmor = 600;
		recoilModifier[] = {1,1,1};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_fnx_02";
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\gemtech.rvmat","DZ\weapons\attachments\data\gemtech_damage.rvmat","DZ\weapons\attachments\data\gemtech_destruct.rvmat"};
		};
	};
	class Groza_Barrel_Short: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_Groza_Barrel_Short0";
		descriptionShort = "$STR_cfgVehicles_Groza_Barrel_Short1";
		model = "\dz\weapons\firearms\ots14\ots14_barrel.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 150;
		itemSize[] = {1,1};
		lootCategory = "Attachments";
		lootTag[] = {"Military_east"};
		inventorySlot = "weaponMuzzleAK";
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		selectionFireAnim = "zasleh";
		muzzlePos = "usti hlavne";
		simulation = "ItemSuppressor";
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\ots14\data\ots14_barrel.rvmat","DZ\weapons\firearms\ots14\data\ots14_barrel_damage.rvmat","DZ\weapons\firearms\ots14\data\ots14_barrel_destruct.rvmat"};
		};
	};
	class Groza_Barrel_Grip: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_Groza_Barrel_Grip0";
		descriptionShort = "$STR_cfgVehicles_Groza_Barrel_Grip1";
		model = "\dz\weapons\firearms\ots14\ots14_barrel_grip.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 354;
		itemSize[] = {1,2};
		lootCategory = "Attachments";
		lootTag[] = {"Military_east"};
		inventorySlot = "weaponMuzzleAK";
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		selectionFireAnim = "zasleh";
		muzzlePos = "usti hlavne";
		simulation = "ItemSuppressor";
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\ots14\data\ots14_barrel_grip.rvmat","DZ\weapons\firearms\ots14\data\ots14_barrel_grip_damage.rvmat","DZ\weapons\firearms\ots14\data\ots14_barrel_grip_destruct.rvmat"};
		};
	};
	class Groza_Barrel_Suppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_Groza_Barrel_Suppressor0";
		descriptionShort = "$STR_cfgVehicles_Groza_Barrel_Suppressor1";
		model = "\dz\weapons\firearms\ots14\ots14_silencer.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 120;
		itemSize[] = {1,2};
		lootCategory = "Attachments";
		lootTag[] = {"Military_east"};
		inventorySlot = "weaponMuzzleAK";
		dispersionModifier = -0.0001;
		noiseShootModifier = -0.75;
		simulation = "ItemSuppressor";
		barrelArmor = 7;
		dispersionCondition = "true";
		selectionFireAnim = "zasleh";
		muzzlePos = "usti hlavne";
		soundIndex = 1;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\ots14\data\ots14_silencer.rvmat","DZ\weapons\firearms\ots14\data\ots14_silencer_damage.rvmat","DZ\weapons\firearms\ots14\data\ots14_silencer_destruct.rvmat"};
		};
	};
	class MakarovPBSuppressor: ItemSuppressor
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_MakarovPBSuppressor0";
		descriptionShort = "$STR_cfgVehicles_MakarovPBSuppressor1";
		model = "\dz\weapons\attachments\muzzle\suppressor_pb6p9.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 70;
		itemSize[] = {1,3};
		lootCategory = "Attachments";
		lootTag[] = {"Military_east"};
		inventorySlot = "pistolMuzzle";
		simulation = "ItemSuppressor";
		noiseShootModifier = -0.8;
		barrelArmor = 600;
		recoilModifier[] = {1,1,1};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overridePoint = "Usti hlavne";
					overrideParticle = "weapon_shot_fnx_02";
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\muzzle\data\suppressor_pb6p9.rvmat","DZ\weapons\attachments\muzzle\data\suppressor_pb6p9_damage.rvmat","DZ\weapons\attachments\muzzle\data\suppressor_pb6p9_destruct.rvmat"};
		};
	};
	class Aug_Barrel: ItemBarrel
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_Aug_Barrel0";
		descriptionShort = "$STR_cfgVehicles_Aug_Barrel1";
		model = "\dz\weapons\attachments\muzzle\suppressor_556.p3d";
		rotationFlags = 17;
		reversed = 0;
		weight = 73;
		itemSize[] = {1,3};
		lootCategory = "Attachments";
		lootTag[] = {"Military_west"};
		inventorySlot = "weaponBarrelAug";
		simulation = "ItemBarrel";
		dispersionModifier = -0.0001;
		noiseShootModifier = -0.5;
		dispersionCondition = "true";
		barrelArmor = 600;
		recoilModifier[] = {1,1,1};
		selectionFireAnim = "zasleh";
		soundIndex = 1;
		muzzlePos = "usti hlavne";
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\attachments\data\suppressor556.rvmat","DZ\weapons\attachments\data\suppressor556_damage.rvmat","DZ\weapons\attachments\data\suppressor556_destruct.rvmat"};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBayonet_AK: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBayonetAK";
		model = "\dz\weapons\attachments\muzzle\bayonet_ak.p3d";
	};
	class ProxyBayonet_M9A1: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBayonet";
		model = "\dz\weapons\attachments\muzzle\bayonet_m9a1.p3d";
	};
	class ProxyBayonet_Mosin: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBayonetMosin";
		model = "\dz\weapons\attachments\muzzle\bayonet_mosin.p3d";
	};
	class ProxyBayonet_SKS: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponBayonetSKS";
		model = "\dz\weapons\attachments\muzzle\bayonet_sks.p3d";
	};
	class ProxyMosin_Compensator: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleMosin";
		model = "\dz\weapons\attachments\muzzle\mosin_compensator.p3d";
	};
	class ProxyMP5k_compensator: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleMP5";
		model = "\dz\weapons\attachments\muzzle\MP5k_compensator.p3d";
	};
	class Proxybottle_suppressor: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "suppressorImpro";
		model = "\dz\weapons\attachments\muzzle\bottle_suppressor.p3d";
	};
	class ProxySuppressor_556: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleM4";
		model = "\dz\weapons\attachments\muzzle\suppressor_556.p3d";
	};
	class ProxySuppressor_545: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleAK";
		model = "\dz\weapons\attachments\muzzle\suppressor_545.p3d";
	};
	class ProxySuppressor_45ACP: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "pistolMuzzle";
		model = "\dz\weapons\attachments\muzzle\suppressor_45acp.p3d";
	};
	class ProxyOTs14_Barrel: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "weaponMuzzleAK";
		model = "\dz\weapons\firearms\ots14\ots14_barrel.p3d";
	};
	class ProxyOTs14_Barrel_Grip: ProxyOTs14_Barrel
	{
		model = "\dz\weapons\firearms\ots14\ots14_barrel_grip.p3d";
	};
	class ProxyOTs14_Silencer: ProxyOTs14_Barrel
	{
		model = "\dz\weapons\firearms\ots14\ots14_silencer.p3d";
	};
};
//};

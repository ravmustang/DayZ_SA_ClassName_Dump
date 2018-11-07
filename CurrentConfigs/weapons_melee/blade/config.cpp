////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:50:09 2018 : 'file' last modified on Wed Aug 22 21:57:32 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_melee\blade\config.bin{
class CfgPatches
{
	class DZ_Weapons_Melee_Blade
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class WoodAxe: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_WoodAxe0";
		descriptionShort = "$STR_CfgVehicles_WoodAxe1";
		model = "\dz\weapons\melee\blade\woodaxe.p3d";
		ContinuousActions[] = {103,167};
		rotationFlags = 12;
		autoQuickbar = 1;
		weight = 1360;
		itemSize[] = {2,7};
		fragility = 0.01;
		inventorySlot = "Melee";
		lootCategory = "Tools";
		lootTag[] = {"Work","Forester","Camping"};
		openItemSpillRange[] = {20,40};
		itemInfo[] = {"Axe"};
		isMeleeWeapon = 1;
		suicideAnim = "woodaxe";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeAxe";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleeAxe_Heavy";
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleeAxe_Heavy";
				range = 3.7;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blade\data\axe.rvmat","DZ\weapons\melee\blade\data\axe_view_metal.rvmat","DZ\weapons\melee\blade\data\axe_view_wood.rvmat"}},{0.5,{"DZ\weapons\melee\blade\data\axe_damage.rvmat","DZ\weapons\melee\blade\data\axe_view_metal_damage.rvmat","DZ\weapons\melee\blade\data\axe_view_wood_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blade\data\axe_destruct.rvmat","DZ\weapons\melee\blade\data\axe_view_metal_destruct.rvmat","DZ\weapons\melee\blade\data\axe_view_wood_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class shaving_knife_clean
				{
					soundSet = "shaving_knife_clean_SoundSet";
					id = 600;
				};
				class shaving_knife1
				{
					soundSet = "shaving_knife1_SoundSet";
					id = 601;
				};
				class shaving_knife2
				{
					soundSet = "shaving_knife2_SoundSet";
					id = 602;
				};
				class shaving_knife3
				{
					soundSet = "shaving_knife3_SoundSet";
					id = 603;
				};
				class shaving_knife4
				{
					soundSet = "shaving_knife4_SoundSet";
					id = 604;
				};
				class shaving_knife5
				{
					soundSet = "shaving_knife5_SoundSet";
					id = 605;
				};
				class shaving_knife6
				{
					soundSet = "shaving_knife6_SoundSet";
					id = 606;
				};
				class shaving_knife7
				{
					soundSet = "shaving_knife7_SoundSet";
					id = 607;
				};
				class shaving_knife8
				{
					soundSet = "shaving_knife8_SoundSet";
					id = 608;
				};
				class shaving_knife9
				{
					soundSet = "shaving_knife9_SoundSet";
					id = 609;
				};
				class shaving_knife10
				{
					soundSet = "shaving_knife10_SoundSet";
					id = 610;
				};
				class shaving_knife11
				{
					soundSet = "shaving_knife11_SoundSet";
					id = 611;
				};
				class shaving_knife12
				{
					soundSet = "shaving_knife12_SoundSet";
					id = 612;
				};
				class shaving_knife13
				{
					soundSet = "shaving_knife13_SoundSet";
					id = 613;
				};
				class shaving_knife14
				{
					soundSet = "shaving_knife14_SoundSet";
					id = 614;
				};
				class shaving_knife15
				{
					soundSet = "shaving_knife15_SoundSet";
					id = 615;
				};
				class shaving_knife16
				{
					soundSet = "shaving_knife16_SoundSet";
					id = 616;
				};
				class shaving_knife17
				{
					soundSet = "shaving_knife17_SoundSet";
					id = 617;
				};
				class shaving_knife18
				{
					soundSet = "shaving_knife18_SoundSet";
					id = 618;
				};
				class shaving_knife19
				{
					soundSet = "shaving_knife19_SoundSet";
					id = 619;
				};
				class shaving_knife20
				{
					soundSet = "shaving_knife20_SoundSet";
					id = 620;
				};
				class shaving_knife21
				{
					soundSet = "shaving_knife21_SoundSet";
					id = 621;
				};
			};
		};
	};
	class Hatchet: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Hatchet0";
		descriptionShort = "$STR_CfgVehicles_Hatchet1";
		model = "\dz\weapons\melee\blade\hatchet.p3d";
		ContinuousActions[] = {103,167};
		rotationFlags = 17;
		autoQuickbar = 1;
		weight = 1133;
		itemSize[] = {2,4};
		fragility = 0.01;
		inventorySlot = "";
		lootCategory = "Tools";
		lootTag[] = {"Work","Forester","Camping"};
		itemInfo[] = {"Axe"};
		openItemSpillRange[] = {20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blade\data\hatchet.rvmat"}},{0.5,{"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blade\data\hatchet_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "woodaxe";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeHatchet";
				range = 1.4;
			};
			class Heavy
			{
				ammo = "MeleeHatchet_Heavy";
				range = 1.4;
			};
			class Sprint
			{
				ammo = "MeleeHatchet_Heavy";
				range = 3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class shaving_knife_clean
				{
					soundSet = "shaving_knife_clean_SoundSet";
					id = 600;
				};
				class shaving_knife1
				{
					soundSet = "shaving_knife1_SoundSet";
					id = 601;
				};
				class shaving_knife2
				{
					soundSet = "shaving_knife2_SoundSet";
					id = 602;
				};
				class shaving_knife3
				{
					soundSet = "shaving_knife3_SoundSet";
					id = 603;
				};
				class shaving_knife4
				{
					soundSet = "shaving_knife4_SoundSet";
					id = 604;
				};
				class shaving_knife5
				{
					soundSet = "shaving_knife5_SoundSet";
					id = 605;
				};
				class shaving_knife6
				{
					soundSet = "shaving_knife6_SoundSet";
					id = 606;
				};
				class shaving_knife7
				{
					soundSet = "shaving_knife7_SoundSet";
					id = 607;
				};
				class shaving_knife8
				{
					soundSet = "shaving_knife8_SoundSet";
					id = 608;
				};
				class shaving_knife9
				{
					soundSet = "shaving_knife9_SoundSet";
					id = 609;
				};
				class shaving_knife10
				{
					soundSet = "shaving_knife10_SoundSet";
					id = 610;
				};
				class shaving_knife11
				{
					soundSet = "shaving_knife11_SoundSet";
					id = 611;
				};
				class shaving_knife12
				{
					soundSet = "shaving_knife12_SoundSet";
					id = 612;
				};
				class shaving_knife13
				{
					soundSet = "shaving_knife13_SoundSet";
					id = 613;
				};
				class shaving_knife14
				{
					soundSet = "shaving_knife14_SoundSet";
					id = 614;
				};
				class shaving_knife15
				{
					soundSet = "shaving_knife15_SoundSet";
					id = 615;
				};
				class shaving_knife16
				{
					soundSet = "shaving_knife16_SoundSet";
					id = 616;
				};
				class shaving_knife17
				{
					soundSet = "shaving_knife17_SoundSet";
					id = 617;
				};
				class shaving_knife18
				{
					soundSet = "shaving_knife18_SoundSet";
					id = 618;
				};
				class shaving_knife19
				{
					soundSet = "shaving_knife19_SoundSet";
					id = 619;
				};
				class shaving_knife20
				{
					soundSet = "shaving_knife20_SoundSet";
					id = 620;
				};
				class shaving_knife21
				{
					soundSet = "shaving_knife21_SoundSet";
					id = 621;
				};
			};
		};
	};
	class FirefighterAxe: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_FirefighterAxe0";
		descriptionShort = "$STR_CfgVehicles_FirefighterAxe1";
		model = "\dz\weapons\melee\blade\FirefighterAxe.p3d";
		ContinuousActions[] = {103,167};
		rotationFlags = 12;
		autoQuickbar = 1;
		weight = 1360;
		itemSize[] = {2,7};
		fragility = 0.01;
		inventorySlot = "Melee";
		lootCategory = "Tools";
		lootTag[] = {"Work","Forester","Camping"};
		openItemSpillRange[] = {20,40};
		itemInfo[] = {"Axe"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\melee\blade\data\ffax_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blade\data\ffax.rvmat"}},{0.5,{"DZ\weapons\melee\blade\data\ffax_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blade\data\ffax_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "fireaxe";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFireAxe";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleeFireAxe_Heavy";
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleeFireAxe_Heavy";
				range = 3.7;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class shaving_knife_clean
				{
					soundSet = "shaving_knife_clean_SoundSet";
					id = 600;
				};
				class shaving_knife1
				{
					soundSet = "shaving_knife1_SoundSet";
					id = 601;
				};
				class shaving_knife2
				{
					soundSet = "shaving_knife2_SoundSet";
					id = 602;
				};
				class shaving_knife3
				{
					soundSet = "shaving_knife3_SoundSet";
					id = 603;
				};
				class shaving_knife4
				{
					soundSet = "shaving_knife4_SoundSet";
					id = 604;
				};
				class shaving_knife5
				{
					soundSet = "shaving_knife5_SoundSet";
					id = 605;
				};
				class shaving_knife6
				{
					soundSet = "shaving_knife6_SoundSet";
					id = 606;
				};
				class shaving_knife7
				{
					soundSet = "shaving_knife7_SoundSet";
					id = 607;
				};
				class shaving_knife8
				{
					soundSet = "shaving_knife8_SoundSet";
					id = 608;
				};
				class shaving_knife9
				{
					soundSet = "shaving_knife9_SoundSet";
					id = 609;
				};
				class shaving_knife10
				{
					soundSet = "shaving_knife10_SoundSet";
					id = 610;
				};
				class shaving_knife11
				{
					soundSet = "shaving_knife11_SoundSet";
					id = 611;
				};
				class shaving_knife12
				{
					soundSet = "shaving_knife12_SoundSet";
					id = 612;
				};
				class shaving_knife13
				{
					soundSet = "shaving_knife13_SoundSet";
					id = 613;
				};
				class shaving_knife14
				{
					soundSet = "shaving_knife14_SoundSet";
					id = 614;
				};
				class shaving_knife15
				{
					soundSet = "shaving_knife15_SoundSet";
					id = 615;
				};
				class shaving_knife16
				{
					soundSet = "shaving_knife16_SoundSet";
					id = 616;
				};
				class shaving_knife17
				{
					soundSet = "shaving_knife17_SoundSet";
					id = 617;
				};
				class shaving_knife18
				{
					soundSet = "shaving_knife18_SoundSet";
					id = 618;
				};
				class shaving_knife19
				{
					soundSet = "shaving_knife19_SoundSet";
					id = 619;
				};
				class shaving_knife20
				{
					soundSet = "shaving_knife20_SoundSet";
					id = 620;
				};
				class shaving_knife21
				{
					soundSet = "shaving_knife21_SoundSet";
					id = 621;
				};
			};
		};
	};
	class FirefighterAxe_Black: FirefighterAxe
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FirefighterAxe_Black0";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class FirefighterAxe_Green: FirefighterAxe
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_FirefighterAxe_Green0";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.37,0.28,1.0,CO)"};
	};
	class Cleaver: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Cleaver0";
		descriptionShort = "$STR_CfgVehicles_Cleaver1";
		model = "\dz\weapons\melee\blade\meat_cleaver.p3d";
		inventorySlot = "";
		ContinuousActions[] = {178,154,167,197,177,199,153};
		rotationFlags = 17;
		autoQuickbar = 1;
		canSkinBodies = 1;
		weight = 500;
		itemSize[] = {2,3};
		lootTag[] = {"Kitchen","Civilian"};
		lootCategory = "Tools";
		openItemSpillRange[] = {10,35};
		itemInfo[] = {"Knife"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blade\data\meat_cleaver.rvmat"}},{0.5,{"DZ\weapons\melee\blade\data\meat_cleaver_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blade\data\meat_cleaver_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKnife";
				range = 1.4;
			};
			class Heavy
			{
				ammo = "MeleeKnife_Heavy";
				range = 1.4;
			};
			class Sprint
			{
				ammo = "MeleeKnife_Heavy";
				range = 3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class shaving_knife_clean
				{
					soundSet = "shaving_knife_clean_SoundSet";
					id = 600;
				};
				class shaving_knife1
				{
					soundSet = "shaving_knife1_SoundSet";
					id = 601;
				};
				class shaving_knife2
				{
					soundSet = "shaving_knife2_SoundSet";
					id = 602;
				};
				class shaving_knife3
				{
					soundSet = "shaving_knife3_SoundSet";
					id = 603;
				};
				class shaving_knife4
				{
					soundSet = "shaving_knife4_SoundSet";
					id = 604;
				};
				class shaving_knife5
				{
					soundSet = "shaving_knife5_SoundSet";
					id = 605;
				};
				class shaving_knife6
				{
					soundSet = "shaving_knife6_SoundSet";
					id = 606;
				};
				class shaving_knife7
				{
					soundSet = "shaving_knife7_SoundSet";
					id = 607;
				};
				class shaving_knife8
				{
					soundSet = "shaving_knife8_SoundSet";
					id = 608;
				};
				class shaving_knife9
				{
					soundSet = "shaving_knife9_SoundSet";
					id = 609;
				};
				class shaving_knife10
				{
					soundSet = "shaving_knife10_SoundSet";
					id = 610;
				};
				class shaving_knife11
				{
					soundSet = "shaving_knife11_SoundSet";
					id = 611;
				};
				class shaving_knife12
				{
					soundSet = "shaving_knife12_SoundSet";
					id = 612;
				};
				class shaving_knife13
				{
					soundSet = "shaving_knife13_SoundSet";
					id = 613;
				};
				class shaving_knife14
				{
					soundSet = "shaving_knife14_SoundSet";
					id = 614;
				};
				class shaving_knife15
				{
					soundSet = "shaving_knife15_SoundSet";
					id = 615;
				};
				class shaving_knife16
				{
					soundSet = "shaving_knife16_SoundSet";
					id = 616;
				};
				class shaving_knife17
				{
					soundSet = "shaving_knife17_SoundSet";
					id = 617;
				};
				class shaving_knife18
				{
					soundSet = "shaving_knife18_SoundSet";
					id = 618;
				};
				class shaving_knife19
				{
					soundSet = "shaving_knife19_SoundSet";
					id = 619;
				};
				class shaving_knife20
				{
					soundSet = "shaving_knife20_SoundSet";
					id = 620;
				};
				class shaving_knife21
				{
					soundSet = "shaving_knife21_SoundSet";
					id = 621;
				};
			};
		};
	};
	class CombatKnife: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CombatKnife0";
		descriptionShort = "$STR_CfgVehicles_CombatKnife1";
		model = "\dz\weapons\melee\blade\combatknife.p3d";
		animClass = "Knife";
		ContinuousActions[] = {178,167,197,154,177,199,153};
		inventorySlot = "Knife";
		rotationFlags = 17;
		autoQuickbar = 1;
		canSkinBodies = 1;
		weight = 312;
		itemSize[] = {1,3};
		lootTag[] = {"Military_east","Military_west"};
		lootCategory = "Tools";
		itemInfo[] = {"Knife"};
		openItemSpillRange[] = {0,20};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blade\data\combat_knife.rvmat"}},{0.5,{"DZ\weapons\melee\blade\data\combat_knife_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blade\data\combat_knife_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKnife";
				range = 1.2;
			};
			class Heavy
			{
				ammo = "MeleeKnife_Heavy";
				range = 1.2;
			};
			class Sprint
			{
				ammo = "MeleeKnife_Heavy";
				range = 3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class shaving_knife_clean
				{
					soundSet = "shaving_knife_clean_SoundSet";
					id = 600;
				};
				class shaving_knife1
				{
					soundSet = "shaving_knife1_SoundSet";
					id = 601;
				};
				class shaving_knife2
				{
					soundSet = "shaving_knife2_SoundSet";
					id = 602;
				};
				class shaving_knife3
				{
					soundSet = "shaving_knife3_SoundSet";
					id = 603;
				};
				class shaving_knife4
				{
					soundSet = "shaving_knife4_SoundSet";
					id = 604;
				};
				class shaving_knife5
				{
					soundSet = "shaving_knife5_SoundSet";
					id = 605;
				};
				class shaving_knife6
				{
					soundSet = "shaving_knife6_SoundSet";
					id = 606;
				};
				class shaving_knife7
				{
					soundSet = "shaving_knife7_SoundSet";
					id = 607;
				};
				class shaving_knife8
				{
					soundSet = "shaving_knife8_SoundSet";
					id = 608;
				};
				class shaving_knife9
				{
					soundSet = "shaving_knife9_SoundSet";
					id = 609;
				};
				class shaving_knife10
				{
					soundSet = "shaving_knife10_SoundSet";
					id = 610;
				};
				class shaving_knife11
				{
					soundSet = "shaving_knife11_SoundSet";
					id = 611;
				};
				class shaving_knife12
				{
					soundSet = "shaving_knife12_SoundSet";
					id = 612;
				};
				class shaving_knife13
				{
					soundSet = "shaving_knife13_SoundSet";
					id = 613;
				};
				class shaving_knife14
				{
					soundSet = "shaving_knife14_SoundSet";
					id = 614;
				};
				class shaving_knife15
				{
					soundSet = "shaving_knife15_SoundSet";
					id = 615;
				};
				class shaving_knife16
				{
					soundSet = "shaving_knife16_SoundSet";
					id = 616;
				};
				class shaving_knife17
				{
					soundSet = "shaving_knife17_SoundSet";
					id = 617;
				};
				class shaving_knife18
				{
					soundSet = "shaving_knife18_SoundSet";
					id = 618;
				};
				class shaving_knife19
				{
					soundSet = "shaving_knife19_SoundSet";
					id = 619;
				};
				class shaving_knife20
				{
					soundSet = "shaving_knife20_SoundSet";
					id = 620;
				};
				class shaving_knife21
				{
					soundSet = "shaving_knife21_SoundSet";
					id = 621;
				};
			};
		};
	};
	class HuntingKnife: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_HuntingKnife0";
		descriptionShort = "$STR_CfgVehicles_HuntingKnife1";
		model = "\dz\weapons\melee\blade\Hunting_knife.p3d";
		ContinuousActions[] = {178,167,197,154,177,199,153};
		inventorySlot = "Knife";
		rotationFlags = 17;
		autoQuickbar = 1;
		canSkinBodies = 1;
		weight = 200;
		itemSize[] = {1,3};
		lootTag[] = {"Hunting","Camping"};
		lootCategory = "Tools";
		itemInfo[] = {"Knife"};
		openItemSpillRange[] = {0,20};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blade\data\Hunting_knife.rvmat"}},{0.5,{"DZ\weapons\melee\blade\data\Hunting_knife_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blade\data\Hunting_knife_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKnife";
				range = 1.2;
			};
			class Heavy
			{
				ammo = "MeleeKnife_Heavy";
				range = 1.2;
			};
			class Sprint
			{
				ammo = "MeleeKnife_Heavy";
				range = 3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class shaving_knife_clean
				{
					soundSet = "shaving_knife_clean_SoundSet";
					id = 600;
				};
				class shaving_knife1
				{
					soundSet = "shaving_knife1_SoundSet";
					id = 601;
				};
				class shaving_knife2
				{
					soundSet = "shaving_knife2_SoundSet";
					id = 602;
				};
				class shaving_knife3
				{
					soundSet = "shaving_knife3_SoundSet";
					id = 603;
				};
				class shaving_knife4
				{
					soundSet = "shaving_knife4_SoundSet";
					id = 604;
				};
				class shaving_knife5
				{
					soundSet = "shaving_knife5_SoundSet";
					id = 605;
				};
				class shaving_knife6
				{
					soundSet = "shaving_knife6_SoundSet";
					id = 606;
				};
				class shaving_knife7
				{
					soundSet = "shaving_knife7_SoundSet";
					id = 607;
				};
				class shaving_knife8
				{
					soundSet = "shaving_knife8_SoundSet";
					id = 608;
				};
				class shaving_knife9
				{
					soundSet = "shaving_knife9_SoundSet";
					id = 609;
				};
				class shaving_knife10
				{
					soundSet = "shaving_knife10_SoundSet";
					id = 610;
				};
				class shaving_knife11
				{
					soundSet = "shaving_knife11_SoundSet";
					id = 611;
				};
				class shaving_knife12
				{
					soundSet = "shaving_knife12_SoundSet";
					id = 612;
				};
				class shaving_knife13
				{
					soundSet = "shaving_knife13_SoundSet";
					id = 613;
				};
				class shaving_knife14
				{
					soundSet = "shaving_knife14_SoundSet";
					id = 614;
				};
				class shaving_knife15
				{
					soundSet = "shaving_knife15_SoundSet";
					id = 615;
				};
				class shaving_knife16
				{
					soundSet = "shaving_knife16_SoundSet";
					id = 616;
				};
				class shaving_knife17
				{
					soundSet = "shaving_knife17_SoundSet";
					id = 617;
				};
				class shaving_knife18
				{
					soundSet = "shaving_knife18_SoundSet";
					id = 618;
				};
				class shaving_knife19
				{
					soundSet = "shaving_knife19_SoundSet";
					id = 619;
				};
				class shaving_knife20
				{
					soundSet = "shaving_knife20_SoundSet";
					id = 620;
				};
				class shaving_knife21
				{
					soundSet = "shaving_knife21_SoundSet";
					id = 621;
				};
			};
		};
	};
	class Machete: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Machete0";
		descriptionShort = "$STR_CfgVehicles_Machete1";
		model = "\dz\weapons\melee\blade\machete.p3d";
		animClass = "Knife";
		ContinuousActions[] = {178,154,167,197,177};
		inventorySlot = "";
		rotationFlags = 17;
		autoQuickbar = 1;
		canSkinBodies = 1;
		weight = 500;
		itemSize[] = {1,4};
		lootTag[] = {"Work","Forester","Hunting","Farm"};
		lootCategory = "Tools";
		itemInfo[] = {"Knife"};
		openItemSpillRange[] = {0,20};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blade\data\machete.rvmat"}},{0.5,{"DZ\weapons\melee\blade\data\machete_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blade\data\machete_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "onehanded";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeMachete";
				range = 1.4;
			};
			class Heavy
			{
				ammo = "MeleeMachete_Heavy";
				range = 1.4;
			};
			class Sprint
			{
				ammo = "MeleeMachete_Heavy";
				range = 3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class shaving_knife_clean
				{
					soundSet = "shaving_knife_clean_SoundSet";
					id = 600;
				};
				class shaving_knife1
				{
					soundSet = "shaving_knife1_SoundSet";
					id = 601;
				};
				class shaving_knife2
				{
					soundSet = "shaving_knife2_SoundSet";
					id = 602;
				};
				class shaving_knife3
				{
					soundSet = "shaving_knife3_SoundSet";
					id = 603;
				};
				class shaving_knife4
				{
					soundSet = "shaving_knife4_SoundSet";
					id = 604;
				};
				class shaving_knife5
				{
					soundSet = "shaving_knife5_SoundSet";
					id = 605;
				};
				class shaving_knife6
				{
					soundSet = "shaving_knife6_SoundSet";
					id = 606;
				};
				class shaving_knife7
				{
					soundSet = "shaving_knife7_SoundSet";
					id = 607;
				};
				class shaving_knife8
				{
					soundSet = "shaving_knife8_SoundSet";
					id = 608;
				};
				class shaving_knife9
				{
					soundSet = "shaving_knife9_SoundSet";
					id = 609;
				};
				class shaving_knife10
				{
					soundSet = "shaving_knife10_SoundSet";
					id = 610;
				};
				class shaving_knife11
				{
					soundSet = "shaving_knife11_SoundSet";
					id = 611;
				};
				class shaving_knife12
				{
					soundSet = "shaving_knife12_SoundSet";
					id = 612;
				};
				class shaving_knife13
				{
					soundSet = "shaving_knife13_SoundSet";
					id = 613;
				};
				class shaving_knife14
				{
					soundSet = "shaving_knife14_SoundSet";
					id = 614;
				};
				class shaving_knife15
				{
					soundSet = "shaving_knife15_SoundSet";
					id = 615;
				};
				class shaving_knife16
				{
					soundSet = "shaving_knife16_SoundSet";
					id = 616;
				};
				class shaving_knife17
				{
					soundSet = "shaving_knife17_SoundSet";
					id = 617;
				};
				class shaving_knife18
				{
					soundSet = "shaving_knife18_SoundSet";
					id = 618;
				};
				class shaving_knife19
				{
					soundSet = "shaving_knife19_SoundSet";
					id = 619;
				};
				class shaving_knife20
				{
					soundSet = "shaving_knife20_SoundSet";
					id = 620;
				};
				class shaving_knife21
				{
					soundSet = "shaving_knife21_SoundSet";
					id = 621;
				};
			};
		};
	};
	class Pitchfork: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Pitchfork0";
		descriptionShort = "$STR_CfgVehicles_Pitchfork1";
		model = "\dz\weapons\melee\blade\Hay_Fork.p3d";
		inventorySlot = "Melee";
		rotationFlags = 17;
		autoQuickbar = 1;
		itemSize[] = {2,10};
		weight = 1300;
		lootTag[] = {"Farm"};
		lootCategory = "Tools";
		openItemSpillRange[] = {30,60};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blade\data\Hay_Fork.rvmat"}},{0.5,{"DZ\weapons\melee\blade\data\Hay_Fork_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blade\data\Hay_Fork_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "pitchfork";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleePitchfork";
				range = 2;
			};
			class Heavy
			{
				ammo = "MeleePitchfork_Heavy";
				range = 2;
			};
			class Sprint
			{
				ammo = "MeleePitchfork_Heavy";
				range = 4.1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class shaving_knife_clean
				{
					soundSet = "shaving_knife_clean_SoundSet";
					id = 600;
				};
				class shaving_knife1
				{
					soundSet = "shaving_knife1_SoundSet";
					id = 601;
				};
				class shaving_knife2
				{
					soundSet = "shaving_knife2_SoundSet";
					id = 602;
				};
				class shaving_knife3
				{
					soundSet = "shaving_knife3_SoundSet";
					id = 603;
				};
				class shaving_knife4
				{
					soundSet = "shaving_knife4_SoundSet";
					id = 604;
				};
				class shaving_knife5
				{
					soundSet = "shaving_knife5_SoundSet";
					id = 605;
				};
				class shaving_knife6
				{
					soundSet = "shaving_knife6_SoundSet";
					id = 606;
				};
				class shaving_knife7
				{
					soundSet = "shaving_knife7_SoundSet";
					id = 607;
				};
				class shaving_knife8
				{
					soundSet = "shaving_knife8_SoundSet";
					id = 608;
				};
				class shaving_knife9
				{
					soundSet = "shaving_knife9_SoundSet";
					id = 609;
				};
				class shaving_knife10
				{
					soundSet = "shaving_knife10_SoundSet";
					id = 610;
				};
				class shaving_knife11
				{
					soundSet = "shaving_knife11_SoundSet";
					id = 611;
				};
				class shaving_knife12
				{
					soundSet = "shaving_knife12_SoundSet";
					id = 612;
				};
				class shaving_knife13
				{
					soundSet = "shaving_knife13_SoundSet";
					id = 613;
				};
				class shaving_knife14
				{
					soundSet = "shaving_knife14_SoundSet";
					id = 614;
				};
				class shaving_knife15
				{
					soundSet = "shaving_knife15_SoundSet";
					id = 615;
				};
				class shaving_knife16
				{
					soundSet = "shaving_knife16_SoundSet";
					id = 616;
				};
				class shaving_knife17
				{
					soundSet = "shaving_knife17_SoundSet";
					id = 617;
				};
				class shaving_knife18
				{
					soundSet = "shaving_knife18_SoundSet";
					id = 618;
				};
				class shaving_knife19
				{
					soundSet = "shaving_knife19_SoundSet";
					id = 619;
				};
				class shaving_knife20
				{
					soundSet = "shaving_knife20_SoundSet";
					id = 620;
				};
				class shaving_knife21
				{
					soundSet = "shaving_knife21_SoundSet";
					id = 621;
				};
			};
		};
	};
	class Pickaxe: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Pickaxe0";
		descriptionShort = "$STR_CfgVehicles_Pickaxe1";
		model = "\dz\weapons\melee\blade\Pickaxe.p3d";
		inventorySlot = "Melee";
		rotationFlags = 12;
		SingleUseActions[] = {"AT_TOGGLE_DIG_TILE"};
		ContinuousActions[] = {158,168,198};
		itemInfo[] = {"Pickaxe"};
		autoQuickbar = 1;
		itemSize[] = {3,10};
		weight = 1300;
		lootTag[] = {"Work"};
		lootCategory = "Tools";
		openItemSpillRange[] = {40,70};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"dz\weapons\melee\blade\data\Pickaxe_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blade\data\Pickaxe.rvmat"}},{0.5,{"DZ\weapons\melee\blade\data\Pickaxe_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blade\data\Pickaxe_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "fireaxe";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleePickaxe";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleePickaxe_Heavy";
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleePickaxe_Heavy";
				range = 3.7;
			};
		};
		class Horticulture
		{
			ToolAnim = "CHOPPINGWOOD";
			DiggingTimeToComplete = 4.5;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class shaving_knife_clean
				{
					soundSet = "shaving_knife_clean_SoundSet";
					id = 600;
				};
				class shaving_knife1
				{
					soundSet = "shaving_knife1_SoundSet";
					id = 601;
				};
				class shaving_knife2
				{
					soundSet = "shaving_knife2_SoundSet";
					id = 602;
				};
				class shaving_knife3
				{
					soundSet = "shaving_knife3_SoundSet";
					id = 603;
				};
				class shaving_knife4
				{
					soundSet = "shaving_knife4_SoundSet";
					id = 604;
				};
				class shaving_knife5
				{
					soundSet = "shaving_knife5_SoundSet";
					id = 605;
				};
				class shaving_knife6
				{
					soundSet = "shaving_knife6_SoundSet";
					id = 606;
				};
				class shaving_knife7
				{
					soundSet = "shaving_knife7_SoundSet";
					id = 607;
				};
				class shaving_knife8
				{
					soundSet = "shaving_knife8_SoundSet";
					id = 608;
				};
				class shaving_knife9
				{
					soundSet = "shaving_knife9_SoundSet";
					id = 609;
				};
				class shaving_knife10
				{
					soundSet = "shaving_knife10_SoundSet";
					id = 610;
				};
				class shaving_knife11
				{
					soundSet = "shaving_knife11_SoundSet";
					id = 611;
				};
				class shaving_knife12
				{
					soundSet = "shaving_knife12_SoundSet";
					id = 612;
				};
				class shaving_knife13
				{
					soundSet = "shaving_knife13_SoundSet";
					id = 613;
				};
				class shaving_knife14
				{
					soundSet = "shaving_knife14_SoundSet";
					id = 614;
				};
				class shaving_knife15
				{
					soundSet = "shaving_knife15_SoundSet";
					id = 615;
				};
				class shaving_knife16
				{
					soundSet = "shaving_knife16_SoundSet";
					id = 616;
				};
				class shaving_knife17
				{
					soundSet = "shaving_knife17_SoundSet";
					id = 617;
				};
				class shaving_knife18
				{
					soundSet = "shaving_knife18_SoundSet";
					id = 618;
				};
				class shaving_knife19
				{
					soundSet = "shaving_knife19_SoundSet";
					id = 619;
				};
				class shaving_knife20
				{
					soundSet = "shaving_knife20_SoundSet";
					id = 620;
				};
				class shaving_knife21
				{
					soundSet = "shaving_knife21_SoundSet";
					id = 621;
				};
			};
		};
	};
	class Sword: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Sword0";
		descriptionShort = "$STR_CfgVehicles_Sword1";
		model = "\dz\weapons\melee\blade\medieval_sword.p3d";
		ContinuousActions[] = {167};
		inventorySlot = "Melee";
		rotationFlags = 12;
		autoQuickbar = 1;
		itemSize[] = {3,10};
		weight = 1800;
		lootTag[] = {"Historical"};
		lootCategory = "Tools";
		itemInfo[] = {"Axe"};
		openItemSpillRange[] = {20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blade\data\medieval_sword.rvmat"}},{0.5,{"DZ\weapons\melee\blade\data\medieval_sword_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blade\data\medieval_sword_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		suicideAnim = "sword";
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeSword";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleeSword_Heavy";
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleeSword_Heavy";
				range = 3.7;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet = "animalSkinning_in_SoundSet";
					id = 516;
				};
				class animalSkinning
				{
					soundSet = "animalSkinning_SoundSet";
					id = 517;
				};
				class animalSkinning_out
				{
					soundSet = "animalSkinning_out_SoundSet";
					id = 518;
				};
				class CutTies_end
				{
					soundSet = "CutTies_end_SoundSet";
					id = 519;
				};
				class CutTies_loop
				{
					soundSet = "CutTies_loop_SoundSet";
					id = 520;
				};
				class shaving_knife_clean
				{
					soundSet = "shaving_knife_clean_SoundSet";
					id = 600;
				};
				class shaving_knife1
				{
					soundSet = "shaving_knife1_SoundSet";
					id = 601;
				};
				class shaving_knife2
				{
					soundSet = "shaving_knife2_SoundSet";
					id = 602;
				};
				class shaving_knife3
				{
					soundSet = "shaving_knife3_SoundSet";
					id = 603;
				};
				class shaving_knife4
				{
					soundSet = "shaving_knife4_SoundSet";
					id = 604;
				};
				class shaving_knife5
				{
					soundSet = "shaving_knife5_SoundSet";
					id = 605;
				};
				class shaving_knife6
				{
					soundSet = "shaving_knife6_SoundSet";
					id = 606;
				};
				class shaving_knife7
				{
					soundSet = "shaving_knife7_SoundSet";
					id = 607;
				};
				class shaving_knife8
				{
					soundSet = "shaving_knife8_SoundSet";
					id = 608;
				};
				class shaving_knife9
				{
					soundSet = "shaving_knife9_SoundSet";
					id = 609;
				};
				class shaving_knife10
				{
					soundSet = "shaving_knife10_SoundSet";
					id = 610;
				};
				class shaving_knife11
				{
					soundSet = "shaving_knife11_SoundSet";
					id = 611;
				};
				class shaving_knife12
				{
					soundSet = "shaving_knife12_SoundSet";
					id = 612;
				};
				class shaving_knife13
				{
					soundSet = "shaving_knife13_SoundSet";
					id = 613;
				};
				class shaving_knife14
				{
					soundSet = "shaving_knife14_SoundSet";
					id = 614;
				};
				class shaving_knife15
				{
					soundSet = "shaving_knife15_SoundSet";
					id = 615;
				};
				class shaving_knife16
				{
					soundSet = "shaving_knife16_SoundSet";
					id = 616;
				};
				class shaving_knife17
				{
					soundSet = "shaving_knife17_SoundSet";
					id = 617;
				};
				class shaving_knife18
				{
					soundSet = "shaving_knife18_SoundSet";
					id = 618;
				};
				class shaving_knife19
				{
					soundSet = "shaving_knife19_SoundSet";
					id = 619;
				};
				class shaving_knife20
				{
					soundSet = "shaving_knife20_SoundSet";
					id = 620;
				};
				class shaving_knife21
				{
					soundSet = "shaving_knife21_SoundSet";
					id = 621;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxycombatknife: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Knife";
		model = "\DZ\weapons\melee\blade\combatknife.p3d";
	};
};
//};

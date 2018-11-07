////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:11:41 2018 : 'file' last modified on Wed Aug 22 17:32:51 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_drinks\config.bin{
class CfgPatches
{
	class DZ_Gear_Drinks
	{
		units[] = {"Drink_Canteen","Drink_SodaZlutaKlasik","Drink_SodaZlutaKolaloka","Drink_SodaZlutaMalinovka","Drink_WaterBottle"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class RecipeToolOnTool;
class CfgRecipes
{
	class PourWaterbottles
	{
		name = "Pour %TOOL1 into %TOOL2";
		tools[] = {"BottleBase","BottleBase"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		action = "call player_transferWater";
	};
	class FillBarrel: PourWaterbottles
	{
		name = "Pour %TOOL1 into %TOOL2";
		tools[] = {"BottleBase","Container_BarrelBase"};
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		action = "call player_transferWater";
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class Bottle_Base;
	class Canteen: Bottle_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Canteen0";
		descriptionShort = "$STR_CfgVehicles_Canteen1";
		model = "\dz\gear\drinks\Canteen.p3d";
		SingleUseActions[] = {507,"AT_WASH_HANDS",505,544};
		ContinuousActions[] = {182,176,169,189,160,108,225,226,234,106};
		itemSize[] = {2,3};
		weight = 125;
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\drinks\data\Canteen.rvmat"}},{0.5,{"DZ\gear\drinks\data\Canteen_damage.rvmat"}},{0.0,{"DZ\gear\drinks\data\Canteen_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class Canteen_in_A
				{
					soundSet = "Canteen_in_A_SoundSet";
					id = 201;
				};
				class Canteen_in_B
				{
					soundSet = "Canteen_in_B_SoundSet";
					id = 202;
				};
				class Canteen_in_C
				{
					soundSet = "Canteen_in_C_SoundSet";
					id = 203;
				};
				class Canteen
				{
					soundSet = "Canteen_SoundSet";
					id = 204;
				};
				class Canteen_out_A
				{
					soundSet = "Canteen_out_A_SoundSet";
					id = 205;
				};
				class Canteen_out_B
				{
					soundSet = "Canteen_out_B_SoundSet";
					id = 206;
				};
				class Canteen_out_C
				{
					soundSet = "Canteen_out_C_SoundSet";
					id = 207;
				};
				class Canteen_empty_open
				{
					soundSet = "Canteen_empty_open_SoundSet";
					id = 208;
				};
				class Canteen_empty_close
				{
					soundSet = "Canteen_empty_close_SoundSet";
					id = 209;
				};
				class Canteen_empty_start
				{
					soundSet = "Canteen_empty_start_SoundSet";
					id = 210;
				};
				class Canteen_empty_loop
				{
					soundSet = "Canteen_empty_loop_SoundSet";
					id = 211;
				};
				class Canteen_empty_end
				{
					soundSet = "Canteen_empty_end_SoundSet";
					id = 212;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
			};
		};
	};
	class WaterBottle: Bottle_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_WaterBottle0";
		descriptionShort = "$STR_CfgVehicles_WaterBottle1";
		model = "\dz\gear\drinks\WaterBottle.p3d";
		weight = 50;
		itemSize[] = {2,4};
		SingleUseActions[] = {507,"AT_WASH_HANDS",505,544};
		ContinuousActions[] = {182,176,169,189,160,108,225,226,234,106};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 1000.0;
		varQuantityMin = 0.0;
		varQuantityMax = 1000.0;
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"}},{0.5,{"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"}},{0.0,{"DZ\gear\drinks\data\Loot_WaterBottle_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class WaterBottle_in_A
				{
					soundSet = "WaterBottle_in_A_SoundSet";
					id = 201;
				};
				class WaterBottle_in_B
				{
					soundSet = "WaterBottle_in_B_SoundSet";
					id = 202;
				};
				class WaterBottle_in_C
				{
					soundSet = "WaterBottle_in_C_SoundSet";
					id = 203;
				};
				class WaterBottle
				{
					soundSet = "WaterBottle_SoundSet";
					id = 204;
				};
				class WaterBottle_out_A
				{
					soundSet = "WaterBottle_out_A_SoundSet";
					id = 205;
				};
				class WaterBottle_out_B
				{
					soundSet = "WaterBottle_out_B_SoundSet";
					id = 206;
				};
				class WaterBottle_out_C
				{
					soundSet = "WaterBottle_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_empty_open
				{
					soundSet = "WaterBottle_empty_open_SoundSet";
					id = 208;
				};
				class WaterBottle_empty_close
				{
					soundSet = "WaterBottle_empty_close_SoundSet";
					id = 209;
				};
				class WaterBottle_empty_start
				{
					soundSet = "WaterBottle_empty_start_SoundSet";
					id = 210;
				};
				class WaterBottle_empty_loop
				{
					soundSet = "WaterBottle_empty_loop_SoundSet";
					id = 211;
				};
				class WaterBottle_empty_end
				{
					soundSet = "WaterBottle_empty_end_SoundSet";
					id = 212;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
				class ExtinguishByWater
				{
					soundSet = "ExtinguishByWater_SoundSet";
					id = 208;
				};
			};
		};
	};
	class Vodka: Bottle_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Vodka0";
		descriptionShort = "$STR_CfgVehicles_Vodka1";
		model = "\dz\gear\drinks\VodkaBottles.p3d";
		ContinuousActions[] = {182,176,169,189,160,108,225,226,234,106};
		weight = 450;
		itemSize[] = {1,3};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varLiquidTypeInit = 2048;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 500.0;
		varQuantityMin = 0.0;
		varQuantityMax = 500.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\drinks\data\VodkaBottles.rvmat"}},{0.5,{"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"}},{0.0,{"DZ\gear\drinks\data\VodkaBottles_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class GlassBottle_in_A
				{
					soundSet = "GlassBottle_in_A_SoundSet";
					id = 201;
				};
				class GlassBottle_in_B
				{
					soundSet = "GlassBottle_in_B_SoundSet";
					id = 202;
				};
				class GlassBottle_in_C
				{
					soundSet = "GlassBottle_in_C_SoundSet";
					id = 203;
				};
				class GlassBottle
				{
					soundSet = "GlassBottle_SoundSet";
					id = 204;
				};
				class GlassBottle_out_A
				{
					soundSet = "GlassBottle_out_A_SoundSet";
					id = 205;
				};
				class GlassBottle_out_B
				{
					soundSet = "GlassBottle_out_B_SoundSet";
					id = 206;
				};
				class GlassBottle_out_C
				{
					soundSet = "GlassBottle_out_C_SoundSet";
					id = 207;
				};
				class GlassBottle_empty_open
				{
					soundSet = "Canteen_empty_open_SoundSet";
					id = 208;
				};
				class GlassBottle_empty_close
				{
					soundSet = "Canteen_empty_close_SoundSet";
					id = 209;
				};
				class GlassBottle_empty_start
				{
					soundSet = "Canteen_empty_start_SoundSet";
					id = 210;
				};
				class GlassBottle_empty_loop
				{
					soundSet = "Canteen_empty_loop_SoundSet";
					id = 211;
				};
				class GlassBottle_empty_end
				{
					soundSet = "Canteen_empty_end_SoundSet";
					id = 212;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
			};
		};
	};
	class WaterPouch_ColorBase: Bottle_Base
	{
		displayName = "$STR_CfgVehicles_WaterPouch_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_WaterPouch_ColorBase1";
		model = "\dz\gear\drinks\waterpouch.p3d";
		lootCategory = "Crafted";
		SingleUseActions[] = {507,505,544};
		ContinuousActions[] = {182,176,169,189,160,108,225,226,234,106};
		weight = 200;
		itemSize[] = {2,2};
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 0.0;
		varQuantityMin = 0.0;
		varQuantityMax = 500.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"}},{0.5,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"}},{0.0,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class WaterPouch_in_A
				{
					soundSet = "WaterPouch_in_A_SoundSet";
					id = 201;
				};
				class WaterPouch_in_B
				{
					soundSet = "WaterPouch_in_B_SoundSet";
					id = 202;
				};
				class WaterPouch_in_C
				{
					soundSet = "WaterPouch_in_C_SoundSet";
					id = 203;
				};
				class WaterPouch
				{
					soundSet = "WaterPouch_SoundSet";
					id = 204;
				};
				class WaterPouch_out_A
				{
					soundSet = "WaterPouch_out_A_SoundSet";
					id = 205;
				};
				class WaterPouch_out_B
				{
					soundSet = "WaterPouch_out_B_SoundSet";
					id = 206;
				};
				class WaterPouch_out_C
				{
					soundSet = "WaterPouch_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
				class ExtinguishByWater
				{
					soundSet = "ExtinguishByWater_SoundSet";
					id = 208;
				};
			};
		};
	};
	class WaterPouch_Natural: WaterPouch_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WaterPouch_Natural0";
		rotationFlags = 17;
		hiddenSelectionsMaterials[] = {"DZ\gear\drinks\data\","Drink_WaterPouch_Natural.rvmat","DZ\gear\drinks\data\","Drink_WaterPouch_Natural.rvmat","DZ\gear\drinks\data\","Drink_WaterPouch_Natural.rvmat"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class WaterPouch_in_A
				{
					soundSet = "WaterPouch_in_A_SoundSet";
					id = 201;
				};
				class WaterPouch_in_B
				{
					soundSet = "WaterPouch_in_B_SoundSet";
					id = 202;
				};
				class WaterPouch_in_C
				{
					soundSet = "WaterPouch_in_C_SoundSet";
					id = 203;
				};
				class WaterPouch
				{
					soundSet = "WaterPouch_SoundSet";
					id = 204;
				};
				class WaterPouch_out_A
				{
					soundSet = "WaterPouch_out_A_SoundSet";
					id = 205;
				};
				class WaterPouch_out_B
				{
					soundSet = "WaterPouch_out_B_SoundSet";
					id = 206;
				};
				class WaterPouch_out_C
				{
					soundSet = "WaterPouch_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
				class ExtinguishByWater
				{
					soundSet = "ExtinguishByWater_SoundSet";
					id = 208;
				};
			};
		};
	};
	class SodaCan_ColorBase: Edible_Base
	{
		model = "\dz\gear\drinks\SodaCan.p3d";
		stackedRandom = 0;
		autoQuickbar = 1;
		itemSize[] = {1,2};
		SingleUseActions[] = {507,505,544};
		ContinuousActions[] = {108,215};
		InteractActions[] = {};
		weight = 33;
		stackedUnit = "";
		varQuantityInit = 330;
		varQuantityMin = 0;
		varQuantityMax = 330;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"}},{0.5,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"}},{0.0,{"DZ\gear\drinks\data\Drink_WaterPouch_Natural_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 43.5;
			water = 89;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class SodaCan_Pipsi: SodaCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SodaCan_Pipsi0";
		descriptionShort = "$STR_CfgVehicles_SodaCan_Pipsi1";
		hiddenSelectionsTextures[] = {"\dz\gear\drinks\Data\SodaCan_pipsi_co.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class SodaCan_in_A
				{
					soundSet = "SodaCan_in_A_SoundSet";
					id = 201;
				};
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class SodaCan_in_C
				{
					soundSet = "SodaCan_in_C_SoundSet";
					id = 203;
				};
				class SodaCan
				{
					soundSet = "SodaCan_SoundSet";
					id = 204;
				};
				class SodaCan_out_A
				{
					soundSet = "SodaCan_out_A_SoundSet";
					id = 205;
				};
				class SodaCan_out_B
				{
					soundSet = "SodaCan_out_B_SoundSet";
					id = 206;
				};
				class SodaCan_out_C
				{
					soundSet = "SodaCan_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
			};
		};
	};
	class SodaCan_Cola: SodaCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SodaCan_Cola0";
		descriptionShort = "$STR_CfgVehicles_SodaCan_Cola1";
		hiddenSelectionsTextures[] = {"\dz\gear\drinks\Data\SodaCan_cola_co.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class SodaCan_in_A
				{
					soundSet = "SodaCan_in_A_SoundSet";
					id = 201;
				};
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class SodaCan_in_C
				{
					soundSet = "SodaCan_in_C_SoundSet";
					id = 203;
				};
				class SodaCan
				{
					soundSet = "SodaCan_SoundSet";
					id = 204;
				};
				class SodaCan_out_A
				{
					soundSet = "SodaCan_out_A_SoundSet";
					id = 205;
				};
				class SodaCan_out_B
				{
					soundSet = "SodaCan_out_B_SoundSet";
					id = 206;
				};
				class SodaCan_out_C
				{
					soundSet = "SodaCan_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
			};
		};
	};
	class SodaCan_Spite: SodaCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SodaCan_Spite0";
		descriptionShort = "$STR_CfgVehicles_SodaCan_Spite1";
		hiddenSelectionsTextures[] = {"\dz\gear\drinks\Data\SodaCan_spite_co.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class SodaCan_in_A
				{
					soundSet = "SodaCan_in_A_SoundSet";
					id = 201;
				};
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class SodaCan_in_C
				{
					soundSet = "SodaCan_in_C_SoundSet";
					id = 203;
				};
				class SodaCan
				{
					soundSet = "SodaCan_SoundSet";
					id = 204;
				};
				class SodaCan_out_A
				{
					soundSet = "SodaCan_out_A_SoundSet";
					id = 205;
				};
				class SodaCan_out_B
				{
					soundSet = "SodaCan_out_B_SoundSet";
					id = 206;
				};
				class SodaCan_out_C
				{
					soundSet = "SodaCan_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
			};
		};
	};
	class SodaCan_Kvass: SodaCan_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SodaCan_Kvass0";
		descriptionShort = "$STR_CfgVehicles_SodaCan_Kvass1";
		hiddenSelectionsTextures[] = {"\dz\gear\drinks\Data\SodaCan_rasputin_kvass_co.paa"};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class SodaCan_in_A
				{
					soundSet = "SodaCan_in_A_SoundSet";
					id = 201;
				};
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class SodaCan_in_C
				{
					soundSet = "SodaCan_in_C_SoundSet";
					id = 203;
				};
				class SodaCan
				{
					soundSet = "SodaCan_SoundSet";
					id = 204;
				};
				class SodaCan_out_A
				{
					soundSet = "SodaCan_out_A_SoundSet";
					id = 205;
				};
				class SodaCan_out_B
				{
					soundSet = "SodaCan_out_B_SoundSet";
					id = 206;
				};
				class SodaCan_out_C
				{
					soundSet = "SodaCan_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
			};
		};
		class Nutrition
		{
			totalVolume = 1;
			energy = 43.5;
			water = 89;
			nutritionalIndex = 1;
			toxicity = 0;
		};
	};
	class SodaCan_Empty: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SodaCan_Empty0";
		descriptionShort = "$STR_CfgVehicles_SodaCan_Empty1";
		model = "\dz\gear\drinks\SodaCan_Used.p3d";
		inventorySlot = "tripWireAttachment";
		class AnimEvents
		{
			class SoundWeapon
			{
				class Drinking_loop
				{
					soundSet = "Drinking_loop_SoundSet";
					id = 200;
				};
				class SodaCan_in_A
				{
					soundSet = "SodaCan_in_A_SoundSet";
					id = 201;
				};
				class SodaCan_in_B
				{
					soundSet = "SodaCan_in_B_SoundSet";
					id = 202;
				};
				class SodaCan_in_C
				{
					soundSet = "SodaCan_in_C_SoundSet";
					id = 203;
				};
				class SodaCan
				{
					soundSet = "SodaCan_SoundSet";
					id = 204;
				};
				class SodaCan_out_A
				{
					soundSet = "SodaCan_out_A_SoundSet";
					id = 205;
				};
				class SodaCan_out_B
				{
					soundSet = "SodaCan_out_B_SoundSet";
					id = 206;
				};
				class SodaCan_out_C
				{
					soundSet = "SodaCan_out_C_SoundSet";
					id = 207;
				};
				class WaterBottle_Whoosh
				{
					soundSet = "WaterBottle_Whoosh_SoundSet";
					id = 16;
				};
				class WaterBottle_WhooshShort
				{
					soundSet = "WaterBottle_WhooshShort_SoundSet";
					id = 17;
				};
				class WaterBottle_WhooshHeavy
				{
					soundSet = "WaterBottle_WhooshHeavy_SoundSet";
					id = 18;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySodaCan_Used: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "tripWireAttachment";
		model = "\dz\gear\drinks\SodaCan_Used.p3d";
	};
};
//};

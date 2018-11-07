////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:11:45 2018 : 'file' last modified on Wed Aug 22 17:29:04 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_cultivation\config.bin{
class CfgPatches
{
	class DZ_Gear_Cultivation
	{
		units[] = {"Cultivation_TomatoSeedsPack"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class RecipeToolOnTool;
class CfgRecipes
{
	class CombineSeeds
	{
		name = "Combine %tool1";
		tools[] = {"SeedItemBase","SeedItemBase"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity;";
	};
	class CombinePlantMaterial
	{
		name = "Combine %tool1";
		tools[] = {"Consumable_plantMaterial","Consumable_plantMaterial"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity;";
	};
};
class CfgHorticulture
{
	class Plants
	{
		class Plant_Pepper
		{
			infestedTex = "dz\gear\cultivation\data\pepper_plant_insect_co.paa";
			infestedMat = "";
			healthyTex = "dz\gear\cultivation\data\pepper_plant_co.paa";
			healthyMat = "dz\gear\cultivation\data\pepper_plant.rvmat";
		};
		class Plant_Tomato
		{
			infestedTex = "dz\gear\cultivation\data\tomato_plant_insect_co.paa";
			infestedMat = "";
			healthyTex = "dz\gear\cultivation\data\tomato_plant_co.paa";
			healthyMat = "dz\gear\cultivation\data\tomato_plant.rvmat";
		};
		class Plant_Zucchini
		{
			infestedTex = "dz\gear\cultivation\data\zucchini_plant_insect_co.paa";
			infestedMat = "";
			healthyTex = "dz\gear\cultivation\data\zucchini_plant_co.paa";
			healthyMat = "dz\gear\cultivation\data\zucchini_plant.rvmat";
		};
		class Plant_Potato
		{
			infestedTex = "dz\gear\cultivation\data\potato_plant_insect_co.paa";
			infestedMat = "dz\gear\cultivation\data\potato_plant_insect.rvmat";
			healthyTex = "dz\gear\cultivation\data\potato_plant_co.paa";
			healthyMat = "dz\gear\cultivation\data\potato_plant.rvmat";
		};
		class Plant_Pumpkin
		{
			infestedTex = "dz\gear\cultivation\data\pumpkin_plant_insect_co.paa";
			infestedMat = "";
			healthyTex = "dz\gear\cultivation\data\pumpkin_plant_co.paa";
			healthyMat = "dz\gear\cultivation\data\pumpkin_plant.rvmat";
		};
		class Plant_Cannabis
		{
			infestedTex = "dz\gear\cultivation\data\cannabis_plant_insect_co.paa";
			infestedMat = "dz\gear\cultivation\data\cannabis_plant_insect.rvmat";
			healthyTex = "dz\gear\cultivation\data\cannabis_plant_co.paa";
			healthyMat = "dz\gear\cultivation\data\cannabis_plant.rvmat";
		};
	};
};
class CfgVehicles
{
	class Static;
	class Inventory_Base;
	class HouseNoDestruct;
	class ClutterCutter6x6: Static
	{
		scope = 1;
		model = "\DZ\gear\cultivation\clutter_cutter_6m_x_6m.p3d";
		displayName = "$STR_CfgVehicles_ClutterCutter6x60";
		icon = "";
		simulation = "thing";
		nameSound = "";
		vehicleClass = "Misc";
		transportFuel = 0;
		mapSize = 0.7;
		accuracy = 0.2;
		cost = 0;
		armor = 200000;
		destrType = "DestructNo";
	};
	class ClutterCutter2x2: Static
	{
		scope = 1;
		model = "\DZ\gear\cultivation\clutter_cutter_2m_x_2m.p3d";
		displayName = "$STR_CfgVehicles_ClutterCutter2x20";
		icon = "";
		simulation = "thing";
		nameSound = "";
		vehicleClass = "Misc";
		transportFuel = 0;
		mapSize = 0.7;
		accuracy = 0.2;
		cost = 0;
		armor = 200000;
		destrType = "DestructNo";
	};
	class SeedBase: Inventory_Base
	{
		scope = 0;
		weight = 10;
		itemSize[] = {1,1};
		spawnOffset = 0;
		quantityBar = 1;
		lootCategory = "Crafted";
		SingleUseActions[] = {531};
		inventorySlot[] = {"SeedBase_1","SeedBase_2","SeedBase_3","SeedBase_4","SeedBase_5","SeedBase_6","SeedBase_7","SeedBase_8","SeedBase_9","SeedBase_10","SeedBase_11","SeedBase_12","SeedBase_13"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cultivation\data\seeds.rvmat"}},{0.5,{"DZ\gear\cultivation\data\seeds_damage.rvmat"}},{0.0,{"DZ\gear\cultivation\data\seeds_destruct.rvmat"}}};
				};
			};
		};
	};
	class TomatoSeeds: SeedBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TomatoSeeds0";
		descriptionShort = "$STR_CfgVehicles_TomatoSeeds1";
		model = "\dz\gear\cultivation\tomato_seeds.p3d";
		canBeSplit = 1;
		varQuantityInit = 20;
		varQuantityMin = 0;
		varQuantityMax = 20;
		class Horticulture
		{
			PlantType = "Plant_Tomato";
		};
	};
	class PepperSeeds: SeedBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PepperSeeds0";
		descriptionShort = "$STR_CfgVehicles_PepperSeeds1";
		model = "\dz\gear\cultivation\pepper_seeds.p3d";
		canBeSplit = 1;
		varQuantityInit = 20;
		varQuantityMin = 0;
		varQuantityMax = 20;
		class Horticulture
		{
			PlantType = "Plant_Pepper";
		};
	};
	class PumpkinSeeds: SeedBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PumpkinSeeds0";
		descriptionShort = "$STR_CfgVehicles_PumpkinSeeds1";
		model = "\dz\gear\cultivation\pumpkin_seeds.p3d";
		canBeSplit = 1;
		varQuantityInit = 20;
		varQuantityMin = 0;
		varQuantityMax = 20;
		class Horticulture
		{
			PlantType = "Plant_Pumpkin";
		};
	};
	class ZucchiniSeeds: SeedBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ZucchiniSeeds0";
		descriptionShort = "$STR_CfgVehicles_ZucchiniSeeds1";
		model = "\dz\gear\cultivation\Zucchini_seeds.p3d";
		canBeSplit = 1;
		varQuantityInit = 20;
		varQuantityMin = 0;
		varQuantityMax = 20;
		class Horticulture
		{
			PlantType = "Plant_Zucchini";
		};
	};
	class CannabisSeeds: SeedBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CannabisSeeds0";
		descriptionShort = "$STR_CfgVehicles_CannabisSeeds1";
		model = "\dz\gear\cultivation\cannabis_seeds.p3d";
		canBeSplit = 1;
		varQuantityInit = 20;
		varQuantityMin = 0;
		varQuantityMax = 20;
		class Horticulture
		{
			PlantType = "Plant_Cannabis";
		};
	};
	class TomatoSeedsPack: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TomatoSeedsPack0";
		descriptionShort = "$STR_CfgVehicles_TomatoSeedsPack1";
		model = "\dz\gear\cultivation\tomato_seeds_pack.p3d";
		rotationFlags = 17;
		quantityBar = 1;
		SingleUseActions[] = {552};
		itemSize[] = {1,2};
		weight = 10;
		spawnOffset = 0;
		lootCategory = "Materials";
		lootTag[] = {"Farm","Kitchen","Forester"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cultivation\data\tomato_seeds.rvmat"}},{0.5,{"DZ\gear\cultivation\data\tomato_seeds_damage.rvmat"}},{0.0,{"DZ\gear\cultivation\data\tomato_seeds_destruct.rvmat"}}};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType = "TomatoSeeds";
			ContainsSeedsQuantity = 10;
		};
		class UserActions
		{
			class EmptyPack
			{
				displayNameDefault = "$STR_CfgVehicles_TomatoSeedsPack_UserActions_EmptyPack0";
				displayName = "$STR_CfgVehicles_TomatoSeedsPack_UserActions_EmptyPack1";
				position = "action";
				onlyForPlayer = 1;
				radius = 2;
				condition = "true";
				statement = "this callMethod ['EmptySeedPack', _person];";
			};
		};
	};
	class PepperSeedsPack: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PepperSeedsPack0";
		descriptionShort = "$STR_CfgVehicles_PepperSeedsPack1";
		model = "\dz\gear\cultivation\pepper_seeds_pack.p3d";
		rotationFlags = 17;
		quantityBar = 1;
		SingleUseActions[] = {552};
		itemSize[] = {1,2};
		weight = 10;
		spawnOffset = 0;
		lootCategory = "Materials";
		lootTag[] = {"Farm","Kitchen","Forester"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cultivation\data\pepper_seeds.rvmat"}},{0.5,{"DZ\gear\cultivation\data\pepper_seeds_damage.rvmat"}},{0.0,{"DZ\gear\cultivation\data\pepper_seeds_destruct.rvmat"}}};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType = "PepperSeeds";
			ContainsSeedsQuantity = 10;
		};
		class UserActions
		{
			class EmptyPack
			{
				displayNameDefault = "$STR_CfgVehicles_PepperSeedsPack_UserActions_EmptyPack0";
				displayName = "$STR_CfgVehicles_PepperSeedsPack_UserActions_EmptyPack1";
				position = "action";
				onlyForPlayer = 1;
				radius = 2;
				condition = "true";
				statement = "this callMethod ['EmptySeedPack', _person];";
			};
		};
	};
	class PumpkinSeedsPack: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PumpkinSeedsPack0";
		descriptionShort = "$STR_CfgVehicles_PumpkinSeedsPack1";
		model = "\dz\gear\cultivation\Pumpkin_seeds_pack.p3d";
		itemSize[] = {1,2};
		rotationFlags = 17;
		quantityBar = 1;
		SingleUseActions[] = {552};
		weight = 10;
		spawnOffset = 0;
		lootCategory = "Materials";
		lootTag[] = {"Farm","Kitchen","Forester"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cultivation\data\pumpkin_seeds.rvmat"}},{0.5,{"DZ\gear\cultivation\data\pumpkin_seeds_damage.rvmat"}},{0.0,{"DZ\gear\cultivation\data\pumpkin_seeds_destruct.rvmat"}}};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType = "PumpkinSeeds";
			ContainsSeedsQuantity = 10;
		};
		class UserActions
		{
			class EmptyPack
			{
				displayNameDefault = "$STR_CfgVehicles_PumpkinSeedsPack_UserActions_EmptyPack0";
				displayName = "$STR_CfgVehicles_PumpkinSeedsPack_UserActions_EmptyPack1";
				position = "action";
				onlyForPlayer = 1;
				radius = 2;
				condition = "true";
				statement = "this callMethod ['EmptySeedPack', _person];";
			};
		};
	};
	class ZucchiniSeedsPack: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ZucchiniSeedsPack0";
		descriptionShort = "$STR_CfgVehicles_ZucchiniSeedsPack1";
		model = "\dz\gear\cultivation\Zucchini_seeds_pack.p3d";
		rotationFlags = 17;
		quantityBar = 1;
		SingleUseActions[] = {552};
		itemSize[] = {1,2};
		weight = 10;
		spawnOffset = 0;
		lootCategory = "Materials";
		lootTag[] = {"Farm","Kitchen","Forester"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cultivation\data\zucchini_seeds.rvmat"}},{0.5,{"DZ\gear\cultivation\data\zucchini_seeds_damage.rvmat"}},{0.0,{"DZ\gear\cultivation\data\zucchini_seeds_destruct.rvmat"}}};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType = "ZucchiniSeeds";
			ContainsSeedsQuantity = 10;
		};
		class UserActions
		{
			class EmptyPack
			{
				displayNameDefault = "$STR_CfgVehicles_ZucchiniSeedsPack_UserActions_EmptyPack0";
				displayName = "$STR_CfgVehicles_ZucchiniSeedsPack_UserActions_EmptyPack1";
				position = "action";
				onlyForPlayer = 1;
				radius = 2;
				condition = "true";
				statement = "this callMethod ['EmptySeedPack', _person];";
			};
		};
	};
	class CannabisSeedsPack: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CannabisSeedsPack0";
		descriptionShort = "$STR_CfgVehicles_CannabisSeedsPack1";
		model = "\dz\gear\cultivation\cannabis_seeds_pack.p3d";
		rotationFlags = 17;
		quantityBar = 1;
		SingleUseActions[] = {552};
		itemSize[] = {1,2};
		weight = 10;
		spawnOffset = 0;
		lootCategory = "Materials";
		lootTag[] = {"Farm","Kitchen","Forester"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cultivation\data\cannabis_seeds.rvmat"}},{0.5,{"DZ\gear\cultivation\data\cannabis_seeds_damage.rvmat"}},{0.0,{"DZ\gear\cultivation\data\cannabis_seeds_destruct.rvmat"}}};
				};
			};
		};
		class Horticulture
		{
			ContainsSeedsType = "CannabisSeeds";
			ContainsSeedsQuantity = 10;
		};
		class UserActions
		{
			class EmptyPack
			{
				displayNameDefault = "$STR_CfgVehicles_CannabisSeedsPack_UserActions_EmptyPack0";
				displayName = "$STR_CfgVehicles_CannabisSeedsPack_UserActions_EmptyPack1";
				position = "action";
				onlyForPlayer = 1;
				radius = 2;
				condition = "true";
				statement = "this callMethod ['EmptySeedPack', _person];";
			};
		};
	};
	class PlantMaterial: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PlantMaterial0";
		descriptionShort = "$STR_CfgVehicles_PlantMaterial1";
		model = "\dz\gear\cultivation\plant_material.p3d";
		inventorySlot = "Plant";
		lootCategory = "Crafted";
		itemSize[] = {2,1};
		rotationFlags = 12;
		weight = 10;
		spawnOffset = 0;
		ContinuousActions[] = {161};
		canBeSplit = 1;
		varQuantityInit = 300;
		varQuantityMin = 0.0;
		varQuantityMax = 300;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cultivation\data\plant_material.rvmat"}},{0.5,{"DZ\gear\cultivation\data\plant_material_damage.rvmat"}},{0.0,{"DZ\gear\cultivation\data\plant_material_destruct.rvmat"}}};
				};
			};
		};
		class Horticulture
		{
			TexId = 2;
			AddEnergyToSlot = 0.25;
			ConsumedQuantity = 100.0;
		};
	};
	class AntiPestsSpray: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_AntiPestsSpray0";
		descriptionShort = "$STR_CfgVehicles_AntiPestsSpray1";
		model = "\dz\gear\medical\DisinfectantSpray.p3d";
		rotateDropped = 1;
		lootTag[] = {"Farm"};
		lootCategory = "Crafted";
		weight = 40;
		itemSize[] = {2,3};
		varQuantityInit = 120;
		varQuantityMin = 0.0;
		varQuantityMax = 120;
		varQuantityDestroyOnMin = 1;
		quantityBar = 1;
		varLiquidTypeInit = 32768;
		SingleUseActions[] = {534};
		ContinuousActions[] = {162,108,106};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\Loot_DisinfectantSpray.rvmat"}},{0.5,{"DZ\gear\medical\data\Loot_DisinfectantSpray_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\Loot_DisinfectantSpray_destruct.rvmat"}}};
				};
			};
		};
	};
	class ParticleTest: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ParticleTest0";
		descriptionShort = "$STR_CfgVehicles_ParticleTest1";
		model = "\dz\gear\cultivation\cannabis_seeds_pack.p3d";
		itemSize[] = {1,1};
	};
	class PlantBase: Inventory_Base
	{
		storageCategory = 1;
		lootCategory = "Crafted";
		InteractActions[] = {1006,1005};
		hiddenSelections[] = {"infestedParts"};
		hiddenSelectionsTextures[] = {""};
		hiddenSelectionsMaterials[] = {""};
		inventorySlot[] = {"SeedBase_1","SeedBase_2","SeedBase_3","SeedBase_4","SeedBase_5","SeedBase_6","SeedBase_7","SeedBase_8","SeedBase_9","SeedBase_10","SeedBase_11"};
		class AnimationSources
		{
			class pile_01
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class pile_02
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class plantStage_01
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class plantStage_01_crops
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class plantStage_02
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class plantStage_02_crops
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class plantStage_03
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class plantStage_03_crops
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class plantStage_04
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class plantStage_04_crops
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class plantStage_05
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class plantStage_05_crops
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class plantStage_06
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class plantStage_06_crops
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class stake
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class Plant_Tomato: PlantBase
	{
		scope = 2;
		model = "DZ\gear\cultivation\tomato_plant.p3d";
		hiddenSelectionsTextures[] = {"dz\gear\cultivation\data\tomato_plant_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\cultivation\data\tomato_plant.rvmat"};
		class Horticulture
		{
			GrowthStagesCount = 6;
			CropsCount = 7;
			CropsType = "Tomato";
		};
	};
	class Plant_Pepper: PlantBase
	{
		scope = 2;
		model = "DZ\gear\cultivation\pepper_plant.p3d";
		hiddenSelectionsTextures[] = {"dz\gear\cultivation\data\pepper_plant_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\cultivation\data\pepper_plant.rvmat"};
		class Horticulture
		{
			GrowthStagesCount = 6;
			CropsCount = 3;
			CropsType = "GreenBellPepper";
		};
	};
	class Plant_Potato: PlantBase
	{
		scope = 2;
		model = "DZ\gear\cultivation\potato_plant.p3d";
		hiddenSelectionsTextures[] = {"dz\gear\cultivation\data\potato_plant_co.paa","dz\gear\cultivation\data\potato_plant_nohq.paa","dz\gear\cultivation\data\potato_plant_smdi.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\cultivation\data\potato_plant.rvmat"};
		class Horticulture
		{
			GrowthStagesCount = 6;
			CropsCount = 3;
			CropsType = "Potato";
		};
	};
	class Plant_Pumpkin: PlantBase
	{
		scope = 2;
		model = "DZ\gear\cultivation\pumpkin_plant.p3d";
		hiddenSelectionsTextures[] = {"dz\gear\cultivation\data\pumpkin_plant_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\cultivation\data\pumpkin_plant.rvmat"};
		class Horticulture
		{
			GrowthStagesCount = 7;
			CropsCount = 2;
			CropsType = "Pumpkin";
		};
	};
	class Plant_Zucchini: PlantBase
	{
		scope = 2;
		model = "DZ\gear\cultivation\zucchini_plant.p3d";
		hiddenSelectionsTextures[] = {"dz\gear\cultivation\data\zucchini_plant_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\cultivation\data\zucchini_plant.rvmat"};
		class Horticulture
		{
			GrowthStagesCount = 7;
			CropsCount = 2;
			CropsType = "Zucchini";
		};
	};
	class Plant_Cannabis: PlantBase
	{
		scope = 2;
		model = "DZ\gear\cultivation\Cannabis_plant.p3d";
		hiddenSelectionsTextures[] = {"dz\gear\cultivation\data\Cannabis_plant_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\cultivation\data\Cannabis_plant.rvmat"};
		class Horticulture
		{
			GrowthStagesCount = 6;
			CropsCount = 7;
			CropsType = "Cannabis";
		};
	};
};
//};

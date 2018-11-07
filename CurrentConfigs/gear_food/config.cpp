////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:11:37 2018 : 'file' last modified on Fri Sep 07 11:03:20 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_food\config.bin{
class CfgPatches
{
	class DZ_Gead_Food
	{
		units[] = {"Food_CanBakedBeans","Food_CanFrankBeans","Food_CanPasta","Food_CanSardines","Food_BoxCerealCrunchin"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class RecipeToolOnTool;
class CfgRecipes
{
	class CutOutSeeds_Zucchini_knife: RecipeToolOnTool
	{
		name = "Cut out seeds from %TOOL1";
		condition = "_tool1 call fnc_canCutOutSeeds;";
		tools[] = {"Fruit_Zucchini","KnifeBase"};
		action = "[_owner, _tool1, _tool2, 0.3, 1] call fnc_cutOutSeeds";
	};
	class CutOutSeeds_Pepper_knife: RecipeToolOnTool
	{
		name = "Cut out seeds from %TOOL1";
		condition = "_tool1 call fnc_canCutOutSeeds;";
		tools[] = {"Fruit_GreenBellPepper","KnifeBase"};
		action = "[_owner, _tool1, _tool2, 0.4, 1] call fnc_cutOutSeeds";
	};
	class CutOutSeeds_Tomato_knife: RecipeToolOnTool
	{
		name = "Cut out seeds from %TOOL1";
		condition = "_tool1 call fnc_canCutOutSeeds;";
		tools[] = {"Fruit_Tomato","KnifeBase"};
		action = "[_owner, _tool1, _tool2, 0.3, 1] call fnc_cutOutSeeds";
	};
	class CutOutSeeds_Pumpkin_knife: RecipeToolOnTool
	{
		name = "Slice %TOOL1 into pieces";
		condition = "_tool1 call fnc_canCutOutSeeds;";
		tools[] = {"Fruit_Pumpkin","KnifeBase"};
		action = "[_owner, _tool1, _tool2, 1, 3] call fnc_slicePumpkin";
	};
	class CutOutSeeds_Zucchini_axe: RecipeToolOnTool
	{
		name = "Cut out seeds from %TOOL1";
		condition = "_tool1 call fnc_canCutOutSeeds;";
		tools[] = {"Fruit_Zucchini","AxeBase"};
		action = "[_owner, _tool1, _tool2, 0.2, 0.6] call fnc_cutOutSeeds";
	};
	class CutOutSeeds_Pepper_axe: RecipeToolOnTool
	{
		name = "Cut out seeds from %TOOL1";
		condition = "_tool1 call fnc_canCutOutSeeds;";
		tools[] = {"Fruit_GreenBellPepper","AxeBase"};
		action = "[_owner, _tool1, _tool2, 0.2, 0.6] call fnc_cutOutSeeds";
	};
	class CutOutSeeds_Tomato_axe: RecipeToolOnTool
	{
		name = "Cut out seeds from %TOOL1";
		condition = "_tool1 call fnc_canCutOutSeeds;";
		tools[] = {"Fruit_Tomato","AxeBase"};
		action = "[_owner, _tool1, _tool2, 0.2, 0.6] call fnc_cutOutSeeds";
	};
	class CutOutSeeds_Pumpkin_axe: RecipeToolOnTool
	{
		name = "Slice %TOOL1 into pieces";
		condition = "_tool1 call fnc_canCutOutSeeds;";
		tools[] = {"Fruit_Pumpkin","AxeBase"};
		action = "[_owner, _tool1, _tool2, 0.5, 3] call fnc_slicePumpkin";
	};
	class PrepareCarpKnife
	{
		name = "Prepare fish";
		condition = "!(isNull itemParent _tool2) && !(_tool2 isKindOf 'Food_Sardines')";
		tools[] = {"KnifeBase","Food_Carp"};
		action = "[_owner,'I have prepared the fish.','colorAction'] call fnc_playerMessage;_max = getNumber (configFile >> 'CfgVehicles' >> typeOf _tool2 >> 'stackedMax');deleteVehicle _tool2;_guts = _owner createInInventory 'Food_SmallGuts';_guts setQuantity 1;for [{_x=0},{_x<_max},{_x=_x+1}] do{_fillet=['Meat_CarpFillet',_owner] call player_addInventory;_fillet setQuantity (1-(0.1 + damage _tool1)+(random 1)/10);_fillet2=['Meat_CarpFillet',_owner] call player_addInventory;_fillet2 setQuantity (1-(0.1 + damage _tool1)+(random 1)/10);};";
	};
	class PrepareCarpBayonete: PrepareCarpKnife
	{
		tools[] = {"Att_Bayonet_M9A1","Food_Carp"};
	};
	class PrepareCarpBayoneteAK: PrepareCarpKnife
	{
		tools[] = {"Att_Bayonet_AK","Food_Carp"};
	};
	class PrepareMackerelKnife
	{
		name = "Prepare fish";
		condition = "!(isNull itemParent _tool2) && !(_tool2 isKindOf 'Food_Sardines')";
		tools[] = {"KnifeBase","Food_Mackerel"};
		action = "[_owner,'I have prepared the fish.','colorAction'] call fnc_playerMessage;_max = getNumber (configFile >> 'CfgVehicles' >> typeOf _tool2 >> 'stackedMax');deleteVehicle _tool2;_guts = _owner createInInventory 'Food_SmallGuts';_guts setQuantity 1;for [{_x=0},{_x<_max},{_x=_x+1}] do{_fillet=['Meat_MackerelFillet',_owner] call player_addInventory;_fillet setQuantity (1-(0.1 + damage _tool1)+(random 1)/10);_fillet2=['Meat_MackerelFillet',_owner] call player_addInventory;_fillet2 setQuantity (1-(0.1 + damage _tool1)+(random 1)/10);};";
	};
	class PrepareMackerelBayonete: PrepareMackerelKnife
	{
		tools[] = {"Att_Bayonet_M9A1","Food_mackerel"};
	};
	class PrepareMackerelBayoneteAK: PrepareMackerelKnife
	{
		tools[] = {"Att_Bayonet_AK","Food_mackerel"};
	};
	class OpenCanWithMeleeItem
	{
		name = "Open %MATERIAL1 with %TOOL1";
		material[] = {"FoodCanned_Closed"};
		tools[] = {"MeleeItemBase"};
		action = "[_owner, _tool1, _material1] call event_OpenCan";
	};
	class OpenCanWithSpear
	{
		name = "Open %MATERIAL1 with %TOOL1";
		material[] = {"FoodCanned_Closed"};
		tools[] = {"Crafting_Spear"};
		action = "[_owner, _tool1, _material1] call event_OpenCan";
	};
	class OpenCanBayonet
	{
		name = "Open %MATERIAL1 with %TOOL1";
		material[] = {"FoodCanned_Closed"};
		tools[] = {"BayonetBase"};
		action = "[_owner, _tool1, _material1] call event_OpenCan";
	};
	class OpenCanWithOpener
	{
		name = "Open %MATERIAL1 with %TOOL1";
		material[] = {"FoodCanned_Closed"};
		tools[] = {"Tool_CanOpener"};
		action = "[_owner, _tool1, _material1, true] call event_OpenCan";
	};
	class OpenTunaWithHands
	{
		name = "Open %MATERIAL1";
		material[] = {"Food_CanTuna"};
		action = "[_owner, objNull, _material1] call event_OpenCan";
	};
};
class BaseFoodStageTransitions
{
	class Raw
	{
		class ToBaked
		{
			transition_to = 2;
			cooking_method = 1;
		};
		class ToBoiled
		{
			transition_to = 3;
			cooking_method = 2;
		};
		class ToDried
		{
			transition_to = 4;
			cooking_method = 3;
		};
		class ToBurned
		{
			transition_to = 5;
			cooking_method = 3;
		};
		class ToRotten
		{
			transition_to = 6;
			cooking_method = 4;
		};
	};
	class Rotten
	{
		class ToBurned
		{
			transition_to = 5;
			cooking_method = 1;
		};
	};
	class Baked
	{
		class ToBurned
		{
			transition_to = 5;
			cooking_method = 1;
		};
		class ToRotten
		{
			transition_to = 6;
			cooking_method = 4;
		};
	};
	class Boiled
	{
		class ToBaked
		{
			transition_to = 2;
			cooking_method = 1;
		};
		class ToRotten
		{
			transition_to = 6;
			cooking_method = 4;
		};
	};
	class Dried
	{
		class ToBaked
		{
			transition_to = 5;
			cooking_method = 1;
		};
		class ToBoiled
		{
			transition_to = 3;
			cooking_method = 2;
		};
		class ToBurned
		{
			transition_to = 5;
			cooking_method = 3;
		};
	};
	class Burned{};
};
class NotCookable
{
	class Raw
	{
		class ToRotten
		{
			transition_to = 6;
			cooking_method = 4;
		};
	};
};
class MeatStageTransitions: BaseFoodStageTransitions{};
class FruitStageTransitions: BaseFoodStageTransitions{};
class AnimalCorpsesStageTransitions: BaseFoodStageTransitions{};
class MushroomsStageTransitions: BaseFoodStageTransitions{};
class FoodAnimationSources
{
	class CS_Raw
	{
		source = "user";
		animPeriod = 0.01;
		initPhase = 1;
	};
	class CS_Rotten
	{
		source = "user";
		animPeriod = 0.01;
		initPhase = 1;
	};
	class CS_Baked
	{
		source = "user";
		animPeriod = 0.01;
		initPhase = 1;
	};
	class CS_Boiled
	{
		source = "user";
		animPeriod = 0.01;
		initPhase = 1;
	};
	class CS_Dried
	{
		source = "user";
		animPeriod = 0.01;
		initPhase = 1;
	};
	class CS_Burned
	{
		source = "user";
		animPeriod = 0.01;
		initPhase = 1;
	};
};
class NutritionModifiers
{
	class General
	{
		base_stage = "Raw";
		class Raw
		{
			nutrition_properties[] = {1.0,1.0,1.0,1.0,1.0};
		};
		class Rotten
		{
			nutrition_properties[] = {0.5,0.75,1.0,0.25,1.0};
		};
		class Baked
		{
			nutrition_properties[] = {2.0,0.5,0.75,0.75,1.0};
		};
		class Boiled
		{
			nutrition_properties[] = {1.0,1.0,0.8,0.8,1.0};
		};
		class Dried
		{
			nutrition_properties[] = {4.0,0.1,0.5,0.8,1.0};
		};
		class Burned
		{
			nutrition_properties[] = {1.0,0.25,0.75,0.1,1.0};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base: Inventory_Base
	{
		ContinuousActions[] = {101,105};
		InteractActions[] = {};
		varTemperatureMax = 100;
	};
	class BoxCerealCrunchin: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BoxCerealCrunchin0";
		descriptionShort = "$STR_CfgVehicles_BoxCerealCrunchin1";
		model = "\dz\gear\food\BoxCereal.p3d";
		rotationFlags = 17;
		weight = 450;
		itemSize[] = {3,3};
		absorbency = 0.7;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"\dz\gear\food\Data\CerealBox_01_CO.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\Cereal_box.rvmat"}},{0.5,{"DZ\gear\food\data\Cereal_box_damage.rvmat"}},{0.0,{"DZ\gear\food\data\Cereal_box_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 250;
			energy = 930;
			water = -250;
			nutritionalIndex = 105;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class PowderedMilk: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PowderedMilk0";
		descriptionShort = "$STR_CfgVehicles_PowderedMilk1";
		model = "\dz\gear\food\PowderedMilk.p3d";
		rotationFlags = 17;
		weight = 330;
		itemSize[] = {1,2};
		absorbency = 0.9;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\powdered_milk.rvmat"}},{0.5,{"DZ\gear\food\data\powdered_milk_damage.rvmat"}},{0.0,{"DZ\gear\food\data\powdered_milk_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 200;
			energy = 992;
			water = -400;
			nutritionalIndex = 84;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class SmallGuts: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SmallGuts0";
		descriptionShort = "$STR_CfgVehicles_SmallGuts1";
		model = "\dz\gear\food\animal_smallguts.p3d";
		lootCategory = "Crafted";
		rotationFlags = 1;
		weight = 0;
		itemSize[] = {2,1};
		varQuantityInit = 180;
		varQuantityMin = 0;
		varQuantityMax = 180;
		absorbency = 0;
		inventorySlot = "Guts";
		isMeleeWeapon = 1;
		internalResources[] = {{"internalenergy",0.1}};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\powdered_milk.rvmat"}},{0.5,{"DZ\gear\food\data\powdered_milk_damage.rvmat"}},{0.0,{"DZ\gear\food\data\powdered_milk_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeSoft";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeSoft_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeSoft_Heavy";
				range = 2.8;
			};
		};
		class Nutrition
		{
			fullnessIndex = 200;
			energy = 992;
			water = -400;
			nutritionalIndex = 84;
			toxicity = 0;
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Guts: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Guts0";
		descriptionShort = "$STR_CfgVehicles_Guts1";
		model = "\dz\gear\food\animal_guts.p3d";
		lootCategory = "Crafted";
		weight = 710;
		itemSize[] = {3,2};
		absorbency = 0;
		inventorySlot = "Guts";
		storeVariables[] = {"internalenergy","ison","temperature","quantity","ropemat"};
		isMeleeWeapon = 1;
		internalResources[] = {{"internalenergy",0.1}};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\powdered_milk.rvmat"}},{0.5,{"DZ\gear\food\data\powdered_milk_damage.rvmat"}},{0.0,{"DZ\gear\food\data\powdered_milk_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeSoft";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeSoft_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeSoft_Heavy";
				range = 2.8;
			};
		};
		class Nutrition
		{
			fullnessIndex = 200;
			energy = 992;
			water = -400;
			nutritionalIndex = 84;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Rice: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Rice0";
		descriptionShort = "$STR_CfgVehicles_Rice1";
		model = "\dz\gear\food\Rice.p3d";
		weight = 1000;
		itemSize[] = {2,3};
		absorbency = 0.9;
		rotationFlags = 63;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\rice.rvmat"}},{0.5,{"DZ\gear\food\data\rice_damage.rvmat"}},{0.0,{"DZ\gear\food\data\rice_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1000;
			energy = 3740;
			water = -1000;
			nutritionalIndex = 500;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Marmalade: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Marmalade0";
		descriptionShort = "$STR_CfgVehicles_Marmalade1";
		model = "\dz\gear\food\Marmalade.p3d";
		weight = 340;
		itemSize[] = {2,2};
		absorbency = 0.9;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\marmalade_jar.rvmat"}},{0.5,{"DZ\gear\food\data\marmalade_jar_damage.rvmat"}},{0.0,{"DZ\gear\food\data\marmalade_jar_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 340;
			energy = 836;
			water = 113;
			nutritionalIndex = 95;
			toxicity = 0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class BakedBeansCan: Edible_Base
	{
		scope = 2;
		displayName = "$STR_BakedBeansCan0";
		descriptionShort = "$STR_BakedBeansCan1";
		model = "\dz\gear\food\food_can.p3d";
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 455;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\deez_beans_co.paa"};
		SingleUseActions[] = {};
		ContinuousActions[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class BakedBeansCan_Opened: Edible_Base
	{
		scope = 2;
		displayName = "$STR_BakedBeansCan_Opened0";
		descriptionShort = "$STR_BakedBeansCan_Opened1";
		model = "\dz\gear\food\food_can_open.p3d";
		itemSize[] = {2,2};
		weight = 40;
		ContinuousActions[] = {187,186};
		varQuantityInit = 415;
		varQuantityMin = 0;
		varQuantityMax = 415;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\deez_beans_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 78;
			water = 70;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class PeachesCan: Edible_Base
	{
		scope = 2;
		displayName = "$STR_PeachesCan0";
		descriptionShort = "$STR_PeachesCan1";
		model = "\dz\gear\food\food_can.p3d";
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 465;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		SingleUseActions[] = {};
		ContinuousActions[] = {};
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\canned_peaches_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class PeachesCan_Opened: Edible_Base
	{
		scope = 2;
		displayName = "$STR_PeachesCan_Opened0";
		descriptionShort = "$STR_PeachesCan_Opened1";
		model = "\dz\gear\food\food_can_open.p3d";
		itemSize[] = {2,2};
		weight = 40;
		ContinuousActions[] = {187,186};
		varQuantityInit = 425;
		varQuantityMin = 0;
		varQuantityMax = 425;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\canned_peaches_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 74;
			water = 79.3;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class TacticalBaconCan: Edible_Base
	{
		scope = 2;
		displayName = "$STR_TacticalBaconCan0";
		descriptionShort = "$STR_TacticalBaconCan1";
		model = "\dz\gear\food\food_can.p3d";
		SingleUseActions[] = {};
		ContinuousActions[] = {};
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 280;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\tactical_bacon_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class TacticalBaconCan_Opened: Edible_Base
	{
		scope = 2;
		displayName = "$STR_TacticalBaconCan_Opened0";
		descriptionShort = "$STR_TacticalBaconCan_Opened1";
		model = "\dz\gear\food\food_can_open.p3d";
		itemSize[] = {2,2};
		weight = 25;
		ContinuousActions[] = {187,186};
		varQuantityInit = 255;
		varQuantityMin = 0;
		varQuantityMax = 255;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\tactical_bacon_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 2;
			energy = 548;
			water = 12.5;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class SpaghettiCan: Edible_Base
	{
		scope = 2;
		displayName = "$STR_SpaghettiCan0";
		descriptionShort = "$STR_SpaghettiCan1";
		model = "\dz\gear\food\food_can.p3d";
		rotationFlags = 63;
		itemSize[] = {2,2};
		weight = 465;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		SingleUseActions[] = {};
		ContinuousActions[] = {};
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\canned_spaghetti_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class SpaghettiCan_Opened: Edible_Base
	{
		scope = 2;
		displayName = "$STR_SpaghettiCan_Opened0";
		descriptionShort = "$STR_SpaghettiCan_Opened1";
		model = "\dz\gear\food\food_can_open.p3d";
		itemSize[] = {2,2};
		weight = 40;
		ContinuousActions[] = {187,186};
		varQuantityInit = 425;
		varQuantityMin = 0;
		varQuantityMax = 425;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\canned_spaghetti_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\food_can.rvmat"}},{0.5,{"DZ\gear\food\data\food_can_damage.rvmat"}},{0.0,{"DZ\gear\food\data\food_can_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.25;
			energy = 107;
			water = 78.2;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class SardinesCan: Edible_Base
	{
		scope = 2;
		displayName = "$STR_SardinesCan0";
		descriptionShort = "$STR_SardinesCan1";
		model = "\dz\gear\food\can_sardines.p3d";
		SingleUseActions[] = {};
		ContinuousActions[] = {};
		rotationFlags = 34;
		itemSize[] = {2,1};
		weight = 140;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\sardines_CO.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\Sardines.rvmat"}},{0.5,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.0,{"DZ\gear\food\data\Sardines_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class SardinesCan_Opened: Edible_Base
	{
		scope = 2;
		displayName = "$STR_SardinesCan_Opened0";
		descriptionShort = "$STR_SardinesCan_Opened1";
		model = "\dz\gear\food\can_sardines_open.p3d";
		itemSize[] = {2,1};
		weight = 15;
		ContinuousActions[] = {187,186};
		varQuantityInit = 125;
		varQuantityMin = 0;
		varQuantityMax = 125;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\sardines_CO.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\Sardines.rvmat"}},{0.5,{"DZ\gear\food\data\Sardines_damage.rvmat"}},{0.0,{"DZ\gear\food\data\Sardines_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 208;
			water = 59.6;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class TunaCan: Edible_Base
	{
		scope = 2;
		displayName = "$STR_TunaCan0";
		descriptionShort = "$STR_TunaCan1";
		model = "\dz\gear\food\Tuna.p3d";
		SingleUseActions[] = {501};
		ContinuousActions[] = {};
		rotationFlags = 34;
		itemSize[] = {2,1};
		weight = 265;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\tuna_CO.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\tuna.rvmat"}},{0.5,{"DZ\gear\food\data\tuna_damage.rvmat"}},{0.0,{"DZ\gear\food\data\tuna_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class TunaCan_Opened: Edible_Base
	{
		scope = 2;
		displayName = "$STR_TunaCan_Opened0";
		descriptionShort = "$STR_TunaCan_Opened1";
		model = "\dz\gear\food\tuna_open.p3d";
		itemSize[] = {2,1};
		weight = 25;
		ContinuousActions[] = {187,186};
		varQuantityInit = 240;
		varQuantityMin = 0;
		varQuantityMax = 240;
		isMeleeWeapon = 1;
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\tuna_CO.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\food\data\tuna.rvmat"}},{0.5,{"DZ\gear\food\data\tuna_damage.rvmat"}},{0.0,{"DZ\gear\food\data\tuna_destruct.rvmat"}}};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex = 1.5;
			energy = 186;
			water = 64;
			nutritionalIndex = 1;
			toxicity = 0;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Apple: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Apple0";
		descriptionShort = "$STR_Apple1";
		model = "\dz\gear\food\apple.p3d";
		ContinuousActions[] = {101,228};
		lootCategory = "Crafted";
		weight = 0;
		itemSize[] = {1,1};
		stackedUnit = "g";
		absorbency = 0.2;
		varQuantityInit = 170;
		varQuantityMin = 0;
		varQuantityMax = 170;
		quantityBar = 1;
		ammoType = "G_GrenadeHand";
		inventorySlot = "Ingredient";
		containsSeedsType = "";
		containsSeedsQuantity = "0";
		hiddenSelections[] = {"cs_raw","cs_boiled","cs_dried"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\apple_raw_CO.paa","dz\gear\food\data\apple_baked_CO.paa","dz\gear\food\data\apple_baked_CO.paa","dz\gear\food\data\apple_dried_CO.paa","dz\gear\food\data\apple_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\apple_raw.rvmat","dz\gear\food\data\apple_baked.rvmat","dz\gear\food\data\apple_boiled.rvmat","dz\gear\food\data\apple_dried.rvmat","dz\gear\food\data\apple_burnt.rvmat","dz\gear\food\data\apple_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,52,85.6,1,0};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,12,70,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {1,1,1};
					nutrition_properties[] = {1,70,40,25,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {1,2,2};
					nutrition_properties[] = {1,65,75,32,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {2,3,3};
					nutrition_properties[] = {1,60,10,25,1};
					cooking_properties[] = {70,30,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {1,4,4};
					nutrition_properties[] = {1,20,5,10,1};
					cooking_properties[] = {100,20};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Banana: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Banana0";
		descriptionShort = "$STR_Banana1";
		model = "\dz\gear\food\banana_fresh.p3d";
		ContinuousActions[] = {101,228};
		lootCategory = "Crafted";
		rotationFlags = 17;
		weight = 0;
		itemSize[] = {1,2};
		stackedUnit = "g";
		absorbency = 0.2;
		varQuantityInit = 130;
		varQuantityMin = 0;
		varQuantityMax = 130;
		quantityBar = 1;
		inventorySlot = "Ingredient";
		containsSeedsType = "";
		containsSeedsQuantity = "0";
		class AnimationSources: FoodAnimationSources{};
		hiddenSelections[] = {"cs_raw","cs_rotten"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\banana_frash_CO.paa","dz\gear\food\data\ban_rotten_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\banana_frash.rvmat","dz\gear\food\data\banana_rotten.rvmat"};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,89,128,95,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {1,1,1};
					nutrition_properties[] = {1,22.25,65,13,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
			};
			class FoodStageTransitions: NotCookable{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Orange: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Orange0";
		descriptionShort = "$STR_Orange1";
		model = "\dz\gear\food\orange_fresh.p3d";
		ContinuousActions[] = {101,228};
		lootCategory = "Crafted";
		weight = 0;
		itemSize[] = {2,1};
		stackedUnit = "g";
		absorbency = 0.2;
		varQuantityInit = 110;
		varQuantityMin = 0;
		varQuantityMax = 110;
		quantityBar = 1;
		inventorySlot = "Ingredient";
		containsSeedsType = "";
		containsSeedsQuantity = "0";
		hiddenSelections[] = {"cs_raw","cs_rotten"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\orange_frash_CO.paa","dz\gear\food\data\orange_rotten_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\orange_frash.rvmat","dz\gear\food\data\orange_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,47,131,117,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {1,1,1};
					nutrition_properties[] = {1,12,48,12,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
			};
			class FoodStageTransitions: NotCookable{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Tomato: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Tomato0";
		descriptionShort = "$STR_Tomato1";
		model = "\dz\gear\food\tomato.p3d";
		ContinuousActions[] = {101,228};
		lootCategory = "Crafted";
		weight = 0;
		itemSize[] = {2,1};
		uantity = "";
		stackedUnit = "g";
		absorbency = 0.2;
		varQuantityInit = 120;
		varQuantityMin = 0;
		varQuantityMax = 120;
		quantityBar = 1;
		inventorySlot = "Ingredient";
		containsSeedsType = "Cultivation_TomatoSeeds";
		containsSeedsQuantity = "10";
		hiddenSelections[] = {"cs_raw","cs_burned"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\tomato_raw_CO.paa","dz\gear\food\data\tomato_baked_CO.paa","dz\gear\food\data\tomato_baked_CO.paa","dz\gear\food\data\tomato_dried_CO.paa","dz\gear\food\data\tomato_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\tomato_raw.rvmat","dz\gear\food\data\tomato_baked.rvmat","dz\gear\food\data\tomato_boiled.rvmat","dz\gear\food\data\tomato_dried.rvmat","dz\gear\food\data\tomato_burnt.rvmat","dz\gear\food\data\tomato_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,18,94,11,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,8,108,4,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,18,105,11,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,18,105,11,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,18,105,11,1};
					cooking_properties[] = {70,30,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {1,4,4};
					nutrition_properties[] = {1,8,108,4,1};
					cooking_properties[] = {100,20};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class GreenBellPepper: Edible_Base
	{
		scope = 2;
		displayName = "$STR_GreenBellPepper0";
		descriptionShort = "$STR_GreenBellPepper1";
		model = "\dz\gear\food\pepper_green.p3d";
		ContinuousActions[] = {101,194};
		lootCategory = "Crafted";
		rotationFlags = 12;
		weight = 0;
		itemSize[] = {2,1};
		stackedUnit = "g";
		absorbency = 0.2;
		varQuantityInit = 80;
		varQuantityMin = 0;
		varQuantityMax = 80;
		quantityBar = 1;
		inventorySlot = "Ingredient";
		containsSeedsType = "Cultivation_PepperSeeds";
		containsSeedsQuantity = "10";
		hiddenSelections[] = {"cs_raw","cs_dried"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\pepper_green_raw_CO.paa","dz\gear\food\data\pepper_green_baked_CO.paa","dz\gear\food\data\pepper_green_baked_CO.paa","dz\gear\food\data\pepper_green_dried_CO.paa","dz\gear\food\data\pepper_green_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\pepper_green_raw.rvmat","dz\gear\food\data\pepper_green_boiled.rvmat","dz\gear\food\data\pepper_green_baked.rvmat","dz\gear\food\data\pepper_green_dried.rvmat","dz\gear\food\data\pepper_green_burnt.rvmat","dz\gear\food\data\pepper_green_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,33,154,16,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,15,154,8,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,33,154,16,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,33,154,16,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {1,33,154,16,1};
					cooking_properties[] = {70,30,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {1,4,4};
					nutrition_properties[] = {1,15,154,8,1};
					cooking_properties[] = {100,20};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Zucchini: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Zucchini0";
		descriptionShort = "$STR_Zucchini1";
		model = "\dz\gear\food\zucchini.p3d";
		ContinuousActions[] = {101,228};
		rotationFlags = 12;
		lootCategory = "Crafted";
		weight = 0;
		stackedUnit = "g";
		varQuantityInit = 195;
		varQuantityMin = 0;
		varQuantityMax = 195;
		quantityBar = 1;
		itemSize[] = {2,3};
		absorbency = 0.2;
		inventorySlot = "Ingredient";
		containsSeedsType = "Cultivation_ZucchiniSeeds";
		containsSeedsQuantity = "15";
		hiddenSelections[] = {"cs_raw","cs_burned"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\zucchini_raw_CO.paa","dz\gear\food\data\zucchini_baked_CO.paa","dz\gear\food\data\zucchini_baked_CO.paa","dz\gear\food\data\zucchini_dried_CO.paa","dz\gear\food\data\zucchini_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\zucchini_raw.rvmat","dz\gear\food\data\zucchini_boiled.rvmat","dz\gear\food\data\zucchini_baked.rvmat","dz\gear\food\data\zucchini_dried.rvmat","dz\gear\food\data\zucchini_burnt.rvmat","dz\gear\food\data\zucchini_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,51,306,32,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,10,306,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,51,306,32,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,51,306,32,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {1,51,306,32,1};
					cooking_properties[] = {70,30,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,10,306,10,1};
					cooking_properties[] = {100,20};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Pumpkin: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Pumpkin0";
		descriptionShort = "$STR_Pumpkin1";
		model = "\dz\gear\food\Pumpkin_fresh.p3d";
		armAction = "Disarm";
		lootCategory = "Crafted";
		weight = 0;
		itemSize[] = {5,5};
		stackedUnit = "g";
		varQuantityInit = 2300;
		varQuantityMin = 0;
		varQuantityMax = 2300;
		quantityBar = 1;
		absorbency = 0.2;
		inventorySlot = "Ingredient";
		containsSeedsType = "Cultivation_PumpkinSeeds";
		containsSeedsQuantity = "20";
		hiddenSelections[] = {"cs_raw","cs_rotten"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\pumpkin_fresh_CO.paa","dz\gear\food\data\pumpkin_rotten_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\pumpkin_fresh.rvmat","dz\gear\food\data\pumpkin_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,2000,400,80,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {1,1,1};
					nutrition_properties[] = {1,250,150,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
			};
			class FoodStageTransitions: NotCookable{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class SlicedPumpkin: Edible_Base
	{
		scope = 2;
		displayName = "$STR_SlicedPumpkin0";
		descriptionShort = "$STR_SlicedPumpkin1";
		model = "\dz\gear\food\pumpkin_sliced.p3d";
		lootCategory = "Crafted";
		weight = 0;
		itemSize[] = {2,1};
		stackedUnit = "g";
		absorbency = 0.2;
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		quantityBar = 1;
		inventorySlot = "Ingredient";
		containsSeedsType = "";
		containsSeedsQuantity = "0";
		hiddenSelections[] = {"cs_raw","cs_baked","cs_dried"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\pumpkin_sliced_raw_CO.paa","dz\gear\food\data\pumpkin_sliced_baked_CO.paa","dz\gear\food\data\pumpkin_sliced_baked_CO.paa","dz\gear\food\data\pumpkin_sliced_dried_CO.paa","dz\gear\food\data\pumpkin_sliced_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\pumpkin_sliced_raw.rvmat","dz\gear\food\data\pumpkin_sliced_boiled.rvmat","dz\gear\food\data\pumpkin_sliced_baked.rvmat","dz\gear\food\data\pumpkin_sliced_dried.rvmat","dz\gear\food\data\pumpkin_sliced_burnt.rvmat","dz\gear\food\data\pumpkin_sliced_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,400,200,40,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,120,120,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {1,1,1};
					nutrition_properties[] = {1,350,160,35,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {1,2,2};
					nutrition_properties[] = {1,340,170,50,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {2,3,3};
					nutrition_properties[] = {1,270,40,35,1};
					cooking_properties[] = {70,30,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {2,4,4};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {100,20};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Potato: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Potato0";
		descriptionShort = "$STR_Potato1";
		model = "\dz\gear\food\potato.p3d";
		ContinuousActions[] = {101,228};
		rotationFlags = 12;
		weight = 0;
		itemSize[] = {2,1};
		stackedUnit = "g";
		absorbency = 0.2;
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		quantityBar = 1;
		inventorySlot = "Ingredient";
		containsSeedsType = "";
		containsSeedsQuantity = "0";
		SingleUseActions[] = {531};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		class Horticulture
		{
			PlantType = "Plant_Potato";
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\potato_raw_CO.paa","dz\gear\food\data\potato_baked_CO.paa","dz\gear\food\data\potato_baked_CO.paa","dz\gear\food\data\potato_dried_CO.paa","dz\gear\food\data\potato_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\potato_raw.rvmat","dz\gear\food\data\potato_boiled.rvmat","dz\gear\food\data\potato_baked.rvmat","dz\gear\food\data\potato_dried.rvmat","dz\gear\food\data\potato_burnt.rvmat","dz\gear\food\data\potato_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,284,293,30,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,100,293,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,30,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {100,20};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Kiwi: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Kiwi0";
		descriptionShort = "$STR_Kiwi1";
		model = "\dz\gear\food\kiwi_fresh.p3d";
		ContinuousActions[] = {101,194};
		rotationFlags = 12;
		lootCategory = "Crafted";
		itemSize[] = {1,1};
		weight = 0;
		VarQuantityInit = 70;
		varQuantityMin = 0;
		varQuantityMax = 70;
		quantityBar = 1;
		stackedUnit = "g";
		absorbency = 0.2;
		inventorySlot = "Ingredient";
		containsSeedsType = "";
		containsSeedsQuantity = "0";
		hiddenSelections[] = {"cs_raw","cs_rotten"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\kiwi_frash_CO.paa","dz\gear\food\data\kiwi_rotten_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\kiwi_frash.rvmat","dz\gear\food\data\kiwi_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,42,59,56,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {1,1,1};
					nutrition_properties[] = {1,15,20,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
			};
			class FoodStageTransitions: NotCookable{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class SambucusBerry: Edible_Base
	{
		scope = 2;
		displayName = "$STR_SambucusBerry0";
		descriptionShort = "$STR_SambucusBerry1";
		model = "\dz\gear\food\Sambucus_nigra.p3d";
		ContinuousActions[] = {101,194};
		lootCategory = "Crafted";
		weight = 0;
		itemSize[] = {1,1};
		stackedUnit = "g";
		absorbency = 0.4;
		varQuantityInit = 20;
		varQuantityMin = 0;
		varQuantityMax = 20;
		quantityBar = 1;
		inventorySlot[] = {"Ingredient","BerryB"};
		containsSeedsType = "";
		containsSeedsQuantity = "0";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\sambucus_nigra_CO.paa","dz\gear\food\data\sambucus_nigra_dried_CO.paa","dz\gear\food\data\sambucus_nigra_dried_CO.paa","dz\gear\food\data\sambucus_nigra_dried_CO.paa","dz\gear\food\data\sambucus_nigra_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\sambucus_nigra_raw.rvmat","dz\gear\food\data\sambucus_nigra_boiled.rvmat","dz\gear\food\data\sambucus_nigra_baked.rvmat","dz\gear\food\data\sambucus_nigra_dried.rvmat","dz\gear\food\data\sambucus_nigra_burnt.rvmat","dz\gear\food\data\sambucus_nigra_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,70,5,32,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,30,4,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,60,2,25,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,65,4,32,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,60,1,25};
					cooking_properties[] = {70,30,80,1};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,20,1,10,1};
					cooking_properties[] = {100,20};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class CaninaBerry: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CaninaBerry0";
		descriptionShort = "$STR_CaninaBerry1";
		model = "\dz\gear\food\Poisonousberries.p3d";
		ContinuousActions[] = {101,194};
		lootCategory = "Crafted";
		itemSize[] = {1,1};
		weight = 0;
		stackedUnit = "g";
		absorbency = 0.4;
		varQuantityInit = 20;
		varQuantityMin = 0;
		varQuantityMax = 20;
		quantityBar = 1;
		inventorySlot[] = {"Ingredient","BerryR"};
		ontainsSeedsType = "";
		containsSeedsQuantity = "0";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\poisonousberries_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\poisonousberries.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,70,5,32,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,30,4,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,60,2,25,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,65,4,32,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,60,1,25,1};
					cooking_properties[] = {70,30,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,20,1,10,1};
					cooking_properties[] = {100,20};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Cannabis: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Cannabis0";
		descriptionShort = "$STR_Cannabis1";
		model = "\dz\gear\food\cannabis_seedman.p3d";
		rotationFlags = 34;
		lootCategory = "Crafted";
		weight = 0;
		itemSize[] = {1,1};
		stackedUnit = "g";
		absorbency = 0.2;
		ContinuousActions[] = {101,194};
		varQuantityInit = 10;
		varQuantityMin = 0;
		varQuantityMax = 10;
		quantityBar = 1;
		inventorySlot = "Ingredient";
		containsSeedsType = "";
		containsSeedsQuantity = "0";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\cannabis_seedman_raw_CO.paa","dz\gear\food\data\cannabis_seedman_baked_CO.paa","dz\gear\food\data\cannabis_seedman_raw_CO.paa","dz\gear\food\data\cannabis_seedman_raw_CO.paa","dz\gear\food\data\cannabis_seedman_baked_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\cannabis_seedman_raw.rvmat","dz\gear\food\data\cannabis_seedman_baked.rvmat","dz\gear\food\data\cannabis_seedman_raw.rvmat","dz\gear\food\data\cannabis_seedman_dried.rvmat","dz\gear\food\data\cannabis_seedman_burnt.rvmat","dz\gear\food\data\cannabis_seedman_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,284,293,30,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,100,293,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,30,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {100,20};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Plum: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Plum0";
		descriptionShort = "$STR_Plum1";
		model = "\dz\gear\food\plum.p3d";
		rotationFlags = 12;
		ContinuousActions[] = {101,194};
		lootCategory = "Crafted";
		absorbency = 0.4;
		weight = 0;
		itemSize[] = {1,1};
		stackedUnit = "g";
		varQuantityInit = 20;
		varQuantityMin = 0;
		varQuantityMax = 20;
		quantityBar = 1;
		hiddenSelections[] = {"cs_raw","cs_baked","cs_boiled","cs_dried","cs_burned"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\plum_raw_CO.paa","dz\gear\food\data\plum_baked_CO.paa","dz\gear\food\data\plum_boiled_CO.paa","dz\gear\food\data\plum_dried_CO.paa","dz\gear\food\data\plum_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\plum_raw.rvmat","dz\gear\food\data\plum_boiled.rvmat","dz\gear\food\data\plum_baked.rvmat","dz\gear\food\data\plum_dried.rvmat","dz\gear\food\data\plum_burnt.rvmat","dz\gear\food\data\plum_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,70,5,32,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,30,4,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {1,1,1};
					nutrition_properties[] = {1,60,2,25,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {2,2,2};
					nutrition_properties[] = {1,65,4,32,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {3,3,3};
					nutrition_properties[] = {1,60,1,25,1};
					cooking_properties[] = {70,30,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {4,4,4};
					nutrition_properties[] = {1,20,1,10,1};
					cooking_properties[] = {100,20};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Pear: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Pear0";
		descriptionShort = "$STR_Pear1";
		model = "\dz\gear\food\pear.p3d";
		rotationFlags = 12;
		lootCategory = "Crafted";
		absorbency = 0.2;
		weight = 0;
		itemSize[] = {2,1};
		ContinuousActions[] = {101,194};
		stackedUnit = "g";
		varQuantityInit = 80;
		varQuantityMin = 0;
		varQuantityMax = 80;
		quantityBar = 1;
		hiddenSelections[] = {"cs_raw","cs_dried"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\pear_raw_CO.paa","dz\gear\food\data\pear_baked_CO.paa","dz\gear\food\data\pear_baked_CO.paa","dz\gear\food\data\pear_dried_CO.paa","dz\gear\food\data\pear_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\pear_raw.rvmat","dz\gear\food\data\pear_boiled.rvmat","dz\gear\food\data\pear_baked.rvmat","dz\gear\food\data\pear_dried.rvmat","dz\gear\food\data\pear_burnt.rvmat","dz\gear\food\data\pear_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,200,172,70,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,50,40,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,200,172,70,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,200,172,70,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {1,200,172,70,1};
					cooking_properties[] = {70,30,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,50,40,10,1};
					cooking_properties[] = {100,20};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: FruitStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class HumanSteakMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_HumanSteakMeat0";
		descriptionShort = "$STR_HumanSteakMeat1";
		model = "\dz\gear\food\human_meat.p3d";
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		absorbency = 0.3;
		itemSize[] = {1,3};
		varQuantityInit = 150;
		varQuantityMin = 0;
		varQuantityMax = 150;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2.5,130,70,1,0};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis","BrainDisease"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {2,97.5,35,1,0};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis","BrainDisease"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1.75,227.5,52.5,1,0};
					cooking_properties[] = {70,45};
					modifiers[] = {"BrainDisease"};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1.5,162.5,70,1,0};
					cooking_properties[] = {70,55};
					modifiers[] = {"BrainDisease"};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {0.75,130,7,1,0};
					cooking_properties[] = {70,45,80};
					modifiers[] = {"BrainDisease"};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {2,97.5,17.5,1,0};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact","BrainDisease"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class GoatSteakMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_GoatSteakMeat0";
		descriptionShort = "$STR_GoatSteakMeat1";
		model = "\dz\gear\food\meat_steak.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 230;
		varQuantityMin = 0;
		varQuantityMax = 230;
		itemSize[] = {1,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,544,334,236,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,250,222,35,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,390,130,180,1};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,250,90,50,1};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class MouflonSteakMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_MouflonSteakMeat0";
		descriptionShort = "$STR_MouflonSteakMeat1";
		model = "\dz\gear\food\meat_steak.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 230;
		varQuantityMin = 0;
		varQuantityMax = 230;
		itemSize[] = {1,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,544,334,236,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,250,222,35,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,390,130,180,1};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,250,90,50,1};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class BoarSteakMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_BoarSteakMeat0";
		descriptionShort = "$STR_BoarSteakMeat1";
		model = "\dz\gear\food\meat_steak.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 300;
		varQuantityMin = 0;
		varQuantityMax = 300;
		itemSize[] = {1,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,544,334,236,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,250,222,35,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,390,130,180,1};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,250,90,50,1};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class PigSteakMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_PigSteakMeat0";
		descriptionShort = "$STR_PigSteakMeat1";
		model = "\dz\gear\food\meat_steak.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		itemSize[] = {1,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,544,334,236,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,250,222,35,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,390,130,180,1};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,250,90,50,1};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class DeerSteakMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_DeerSteakMeat0";
		descriptionShort = "$STR_DeerSteakMeat1";
		model = "\dz\gear\food\meat_steak.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		itemSize[] = {1,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2.5,160,70,1,0};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {2,120,35,1,0};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1.75,280,52.5,1,0};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1.5,200,70,1,0};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {0.75,160,7,1,0};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {2,120,17.5,1,0};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class WolfSteakMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_WolfSteakMeat0";
		descriptionShort = "$STR_WolfSteakMeat1";
		model = "\dz\gear\food\meat_steak.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 150;
		varQuantityMin = 0;
		varQuantityMax = 150;
		itemSize[] = {1,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2.5,140,70,1,0};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {2,105,35,1,0};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1.75,245,52.5,1,0};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1.5,175,70,1,0};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {0.75,140,7,1,0};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {2,105,17.5,1,0};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class BearSteakMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_BearSteakMeat0";
		descriptionShort = "$STR_BearSteakMeat1";
		model = "\dz\gear\food\meat_steak.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 180;
		varQuantityMin = 0;
		varQuantityMax = 180;
		itemSize[] = {2,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,544,334,236,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,250,222,35,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,390,130,180,1};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,250,90,50,1};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class CowSteakMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CowSteakMeat0";
		descriptionShort = "$STR_CowSteakMeat1";
		model = "\dz\gear\food\meat_steak.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 300;
		varQuantityMin = 0;
		varQuantityMax = 300;
		itemSize[] = {2,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2.5,200,65,1,0};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {2,150,32.5,1,0};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1.75,350,48.75,1,0};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1.5,250,65,1,0};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {0.75,200,6.5,1,0};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {2,150,16.25,1,0};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class SheepSteakMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_SheepSteakMeat0";
		descriptionShort = "$STR_SheepSteakMeat1";
		model = "\dz\gear\food\meat_steak.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 260;
		varQuantityMin = 0;
		varQuantityMax = 260;
		itemSize[] = {1,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,544,334,236,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,250,222,35,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,390,130,180,1};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,250,90,50,1};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class FoxSteakMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_FoxSteakMeat0";
		descriptionShort = "$STR_FoxSteakMeat1";
		model = "\dz\gear\food\meat_steak.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 130;
		varQuantityMin = 0;
		varQuantityMax = 130;
		itemSize[] = {1,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_steak_raw_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_baked_CO.paa","dz\gear\food\data\meat_steak_dried_CO.paa","dz\gear\food\data\meat_steak_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_steak_raw.rvmat","dz\gear\food\data\meat_steak_baked.rvmat","dz\gear\food\data\meat_steak_boiled.rvmat","dz\gear\food\data\meat_steak_dried.rvmat","dz\gear\food\data\meat_steak_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,544,334,236,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,250,222,35,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,537,222,129,1};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,390,130,180,1};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,250,90,50,1};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class ChickenBreastMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_ChickenBreastMeat0";
		descriptionShort = "$STR_ChickenBreastMeat1";
		model = "\dz\gear\food\meat_breast.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 125;
		varQuantityMin = 0;
		varQuantityMax = 125;
		itemSize[] = {1,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_breast_raw_CO.paa","dz\gear\food\data\meat_breast_baked_CO.paa","dz\gear\food\data\meat_breast_baked_CO.paa","dz\gear\food\data\meat_breast_dried_CO.paa","dz\gear\food\data\meat_breast_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_breast_raw.rvmat","dz\gear\food\data\meat_breast_baked.rvmat","dz\gear\food\data\meat_breast_boiled.rvmat","dz\gear\food\data\meat_breast_dried.rvmat","dz\gear\food\data\meat_breast_burnt.rvmat","dz\gear\food\data\meat_breast_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {2.5,110,75,1,0};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {2,82.5,37.5,1,0};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1.75,192.5,56.25,1,0};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1.5,137.5,75,1,0};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {0.75,110,7.5,1,0};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {2,82.5,18.75,1,0};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class RabbitLegMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_RabbitLegMeat0";
		descriptionShort = "$STR_RabbitLegMeat1";
		model = "\dz\gear\food\meat_leg.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 110;
		varQuantityMin = 0;
		varQuantityMax = 110;
		itemSize[] = {1,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\meat_leg_raw_CO.paa","dz\gear\food\data\meat_leg_baked_CO.paa","dz\gear\food\data\meat_leg_baked_CO.paa","dz\gear\food\data\meat_leg_dried_CO.paa","dz\gear\food\data\meat_leg_burned_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\meat_leg_raw.rvmat","dz\gear\food\data\meat_leg_baked.rvmat","dz\gear\food\data\meat_leg_boiled.rvmat","dz\gear\food\data\meat_leg_dried.rvmat","dz\gear\food\data\meat_leg_burnt.rvmat","dz\gear\food\data\meat_leg_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,517,338,218,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,150,338,30,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,480,184,155,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,480,184,155,1};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,380,120,150,1};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,100,50,40,1};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class CarpFilletMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CarpFilletMeat0";
		descriptionShort = "$STR_CarpFilletMeat1";
		model = "\dz\gear\food\carp_fillet.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		varQuantityInit = 100;
		varQuantityMin = 0;
		varQuantityMax = 100;
		itemSize[] = {2,2};
		absorbency = 0.3;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\carp_fillet_raw_CO.paa","dz\gear\food\data\carp_fillet_baked_CO.paa","dz\gear\food\data\carp_fillet_boiled_CO.paa","dz\gear\food\data\carp_fillet_dried_CO.paa","dz\gear\food\data\carp_fillet_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\carp_fillet_raw.rvmat","dz\gear\food\data\carp_fillet_baked.rvmat","dz\gear\food\data\carp_fillet_boiled.rvmat","dz\gear\food\data\carp_fillet_dried.rvmat","dz\gear\food\data\carp_fillet_burnt.rvmat","dz\gear\food\data\carp_fillet_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,800,360,184,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,200,360,30,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,600,222,129,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,560,160,150,1};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,390,130,180,1};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,180,40,50,1};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class MackerelFilletMeat: Edible_Base
	{
		scope = 2;
		displayName = "$STR_MackerelFilletMeat0";
		descriptionShort = "$STR_MackerelFilletMeat1";
		model = "\dz\gear\food\mackerel_fillet.p3d";
		rotationFlags = 17;
		weight = 0;
		interactionWeight = 1;
		quantityBar = 1;
		itemSize[] = {3,1};
		absorbency = 0.3;
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\mackerel_fillet_raw_CO.paa","dz\gear\food\data\mackerel_fillet_baked_CO.paa","dz\gear\food\data\mackerel_fillet_boiled_CO.paa","dz\gear\food\data\mackerel_fillet_dried_CO.paa","dz\gear\food\data\mackerel_fillet_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\mackerel_fillet_raw.rvmat","dz\gear\food\data\mackerel_fillet_baked.rvmat","dz\gear\food\data\mackerel_fillet_boiled.rvmat","dz\gear\food\data\mackerel_fillet_dried.rvmat","dz\gear\food\data\mackerel_fillet_burnt.rvmat","dz\gear\food\data\mackerel_fillet_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,800,360,184,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,200,360,30,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,600,222,129,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,560,160,150,1};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,390,130,180,1};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,180,40,50,1};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions{};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Lard: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Lard0";
		descriptionShort = "$STR_Lard1";
		model = "\dz\gear\food\lard.p3d";
		rotationFlags = 17;
		lootCategory = "Crafted";
		weight = 0;
		interactionWeight = 1;
		itemSize[] = {2,2};
		absorbency = 0.3;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		quantityBar = 1;
		inventorySlot = "Ingredient";
		ContinuousActions[] = {159,185};
		isMeleeWeapon = 1;
		hiddenSelections[] = {"cs_raw","cs_dried"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\lard_raw_CO.paa","dz\gear\food\data\lard_baked_CO.paa","dz\gear\food\data\lard_boiled_CO.paa","dz\gear\food\data\lard_dried_CO.paa","dz\gear\food\data\lard_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\lard_raw.rvmat","dz\gear\food\data\lard_baked.rvmat","dz\gear\food\data\lard_boiled.rvmat","dz\gear\food\data\lard_dried.rvmat","dz\gear\food\data\lard_burnt.rvmat","dz\gear\food\data\meat_steak_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,992,-200,4,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,500,-200,50,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,800,-120,80,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,800,-150,80,1};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,500,-250,65,1};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,200,-280,20,1};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
				class Baked
				{
					class ToRotten
					{
						transition_to = 6;
						cooking_method = 4;
					};
				};
				class Dried
				{
					class ToBaked
					{
						transition_to = 2;
						cooking_method = 1;
					};
					class ToBoiled
					{
						transition_to = 3;
						cooking_method = 2;
					};
				};
			};
		};
		class NoiseImpact
		{
			strength = 600.0;
			type = "sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Carp: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Carp0";
		descriptionShort = "$STR_Carp1";
		model = "\dz\gear\food\carp_live.p3d";
		rotationFlags = 17;
		weight = 1400;
		itemSize[] = {2,3};
		stackedUnit = "g";
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\carp_live_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\carp_live.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,20,60,70,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
			};
			class FoodStageTransitions: NotCookable{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Sardines: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Sardines0";
		descriptionShort = "$STR_Sardines1";
		model = "\dz\gear\food\sardines_live.p3d";
		itemSize[] = {2,1};
		weight = 110;
		stackedUnit = "g";
		quantityBar = 1;
		hiddenSelections[] = {"cs_raw","cs_dried"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\sardines_raw_CO.paa","dz\gear\food\data\sardines_baked_CO.paa","dz\gear\food\data\sardines_raw_CO.paa","dz\gear\food\data\sardines_baked_CO.paa","dz\gear\food\data\sardines_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\sardines_raw.rvmat","dz\gear\food\data\sardines_baked.rvmat","dz\gear\food\data\sardines_boiled.rvmat","dz\gear\food\data\sardines_dried.rvmat","dz\gear\food\data\sardines_burnt.rvmat","dz\gear\food\data\sardines_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,40,160,25,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_HeavyImpact","Salmonellosis"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,60,140,60,1};
					cooking_properties[] = {70,45};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,60,160,60,1};
					cooking_properties[] = {70,55};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {1,50,70,50,1};
					cooking_properties[] = {70,45,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {1,4,4};
					nutrition_properties[] = {1,20,60,20,1};
					cooking_properties[] = {100,30};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: AnimalCorpsesStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Mackerel: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Mackerel0";
		descriptionShort = "$STR_Mackerel1";
		model = "\dz\gear\food\mackerel_live.p3d";
		rotationFlags = 17;
		weight = 180;
		itemSize[] = {4,2};
		stackedUnit = "g";
		quantityBar = 1;
		varQuantityInit = 400;
		varQuantityMin = 0;
		varQuantityMax = 400;
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\mackerel_live_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\mackerel_live.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact","Salmonellosis"};
				};
			};
			class FoodStageTransitions: NotCookable{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class Worm: Edible_Base
	{
		scope = 2;
		displayName = "$STR_Worm0";
		descriptionShort = "$STR_Worm1";
		model = "\dz\gear\food\bait_worm.p3d";
		rotationFlags = 17;
		weight = 30;
		quantityBar = 1;
		varQuantityInit = 10.0;
		varQuantityMin = 0.0;
		varQuantityMax = 10.0;
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\bait_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\bait.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,80,8,42,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: NotCookable{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class MushroomBase: Edible_Base
	{
		ContinuousActions[] = {101,194};
		varQuantityInit = 130;
		varQuantityMin = 0;
		varQuantityMax = 130;
	};
	class AgaricusMushroom: MushroomBase
	{
		scope = 2;
		displayName = "$STR_AgaricusMushroom0";
		descriptionShort = "$STR_AgaricusMushroom1";
		model = "\dz\gear\food\mushroom_agaricus.p3d";
		itemSize[] = {1,2};
		stackedUnit = "";
		inventorySlot = "Ingredient";
		hiddenSelections[] = {"cs_raw","cs_dried"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\mushroom_agaricus_raw_CO.paa","dz\gear\food\data\mushroom_agaricus_baked_CO.paa","dz\gear\food\data\mushroom_agaricus_baked_CO.paa","dz\gear\food\data\mushroom_agaricus_dried_CO.paa","dz\gear\food\data\mushroom_agaricus_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\mushroom_agaricus_raw.rvmat","dz\gear\food\data\mushroom_agaricus_baked.rvmat","dz\gear\food\data\mushroom_agaricus_boiled.rvmat","dz\gear\food\data\mushroom_agaricus_dried.rvmat","dz\gear\food\data\mushroom_agaricus_burnt.rvmat","dz\gear\food\data\mushroom_agaricus_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,25};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,25,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {100,15};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class AmanitaMushroom: MushroomBase
	{
		scope = 2;
		displayName = "$STR_AmanitaMushroom0";
		descriptionShort = "$STR_AmanitaMushroom1";
		model = "\dz\gear\food\mushroom_amanita.p3d";
		itemSize[] = {1,2};
		stackedUnit = "";
		inventorySlot = "Ingredient";
		hiddenSelections[] = {"cs_raw","cs_boiled"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\mushroom_amanita_raw_CO.paa","dz\gear\food\data\mushroom_amanita_boiled_CO.paa","dz\gear\food\data\mushroom_amanita_baked_CO.paa","dz\gear\food\data\mushroom_amanita_dried_CO.paa","dz\gear\food\data\mushroom_amanita_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\mushroom_amanita_raw.rvmat","dz\gear\food\data\mushroom_amanita_baked.rvmat","dz\gear\food\data\mushroom_amanita_boiled.rvmat","dz\gear\food\data\mushroom_amanita_dried.rvmat","dz\gear\food\data\mushroom_amanita_burnt.rvmat","dz\gear\food\data\mushroom_amanita_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {1,1,1};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,25};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {1,2,2};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,25,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {1,4,4};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {100,15};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class MacrolepiotaMushroom: MushroomBase
	{
		scope = 2;
		displayName = "$STR_MacrolepiotaMushroom0";
		descriptionShort = "$STR_MacrolepiotaMushroom1";
		model = "\dz\gear\food\mushroom_macrolepiota.p3d";
		itemSize[] = {1,2};
		stackedUnit = "";
		inventorySlot = "Ingredient";
		hiddenSelections[] = {"cs_raw","cs_baked","cs_dried"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\mushroom_macrolepiota_raw_CO.paa","dz\gear\food\data\mushroom_macrolepiota_baked_CO.paa","dz\gear\food\data\mushroom_macrolepiota_baked_CO.paa","dz\gear\food\data\mushroom_macrolepiota_dried_CO.paa","dz\gear\food\data\mushroom_macrolepiota_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\mushroom_macrolepiota_raw.rvmat","dz\gear\food\data\mushroom_macrolepiota_baked.rvmat","dz\gear\food\data\mushroom_macrolepiota_boiled.rvmat","dz\gear\food\data\mushroom_macrolepiota_dried.rvmat","dz\gear\food\data\mushroom_macrolepiota_burnt.rvmat","dz\gear\food\data\mushroom_macrolepiota_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {1,1,1};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,25};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {1,2,2};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {2,3,3};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,25,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {2,4,4};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {100,15};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class LactariusMushroom: MushroomBase
	{
		scope = 2;
		displayName = "$STR_LactariusMushroom0";
		descriptionShort = "$STR_LactariusMushroom1";
		model = "\dz\gear\food\mushroom_lactarius.p3d";
		itemSize[] = {1,2};
		stackedUnit = "";
		inventorySlot = "Ingredient";
		hiddenSelections[] = {"cs_raw","cs_dried"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\mushroom_lactarius_raw_CO.paa","dz\gear\food\data\mushroom_lactarius_baked_CO.paa","dz\gear\food\data\mushroom_lactarius_baked_CO.paa","dz\gear\food\data\mushroom_lactarius_dried_CO.paa","dz\gear\food\data\mushroom_lactarius_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\mushroom_lactarius_raw.rvmat","dz\gear\food\data\mushroom_lactarius_baked.rvmat","dz\gear\food\data\mushroom_lactarius_boiled.rvmat","dz\gear\food\data\mushroom_lactarius_dried.rvmat","dz\gear\food\data\mushroom_lactarius_burnt.rvmat","dz\gear\food\data\mushroom_lactarius_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,25};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,25,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {100,15};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class PsilocybeMushroom: MushroomBase
	{
		scope = 2;
		displayName = "$STR_PsilocybeMushroom0";
		descriptionShort = "$STR_PsilocybeMushroom1";
		model = "\dz\gear\food\Psilocybe_semilanceata.p3d";
		itemSize[] = {1,2};
		stackedUnit = "";
		inventorySlot = "Ingredient";
		hiddenSelections[] = {"cs_raw","cs_dried"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\Psilocybe_semilanceata_CO.paa","dz\gear\food\data\Psilocybe_semilanceata_dried_CO.paa","dz\gear\food\data\Psilocybe_semilanceata_dried_CO.paa","dz\gear\food\data\Psilocybe_semilanceata_dried_CO.paa","dz\gear\food\data\Psilocybe_semilanceata_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\Psilocybe_semilanceata_raw.rvmat","dz\gear\food\data\Psilocybe_semilanceata_baked.rvmat","dz\gear\food\data\Psilocybe_semilanceata_boiled.rvmat","dz\gear\food\data\Psilocybe_semilanceata_dried.rvmat","dz\gear\food\data\Psilocybe_semilanceata_burnt.rvmat","dz\gear\food\data\Psilocybe_semilanceata_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,25};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {1,3,3};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,25,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {100,15};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
	class AuriculariaMushroom: MushroomBase
	{
		scope = 2;
		displayName = "$STR_AuriculariaMushroom0";
		descriptionShort = "$STR_AuriculariaMushroom1";
		model = "\dz\gear\food\mushroom_auricularia.p3d";
		itemSize[] = {1,2};
		rotationFlags = 1;
		stackedUnit = "";
		inventorySlot = "Ingredient";
		hiddenSelections[] = {"cs_raw"};
		hiddenSelectionsTextures[] = {"dz\gear\food\data\mushroom_auricularia_raw_CO.paa","dz\gear\food\data\mushroom_auricularia_baked_CO.paa","dz\gear\food\data\mushroom_auricularia_boiled_CO.paa","dz\gear\food\data\mushroom_auricularia_dried_CO.paa","dz\gear\food\data\mushroom_auricularia_burnt_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\food\data\mushroom_auricularia_raw.rvmat","dz\gear\food\data\mushroom_auricularia_baked.rvmat","dz\gear\food\data\mushroom_auricularia_boiled.rvmat","dz\gear\food\data\mushroom_auricularia_dried.rvmat","dz\gear\food\data\mushroom_auricularia_burnt.rvmat","dz\gear\food\data\mushroom_auricularia_rotten.rvmat"};
		class AnimationSources: FoodAnimationSources{};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[] = {0,0,0};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {0,0};
					modifiers[] = {};
				};
				class Rotten
				{
					visual_properties[] = {-1,-1,5};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {0,0};
					modifiers[] = {"FoodPoisoning_MediumImpact"};
				};
				class Baked
				{
					visual_properties[] = {0,1,1};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,25};
					modifiers[] = {};
				};
				class Boiled
				{
					visual_properties[] = {0,2,2};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,35};
					modifiers[] = {};
				};
				class Dried
				{
					visual_properties[] = {0,3,3};
					nutrition_properties[] = {1,69,172,70,1};
					cooking_properties[] = {70,25,80};
					modifiers[] = {};
				};
				class Burned
				{
					visual_properties[] = {0,4,4};
					nutrition_properties[] = {1,20,40,10,1};
					cooking_properties[] = {100,15};
					modifiers[] = {"FoodPoisoning_LightImpact"};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Eating_Loop
				{
					soundSet = "Eating_loop_Soundset";
					id = 888;
				};
				class Eating_TakeFood
				{
					soundSet = "Eating_TakeFood_Soundset";
					id = 889;
				};
			};
		};
	};
};
//};

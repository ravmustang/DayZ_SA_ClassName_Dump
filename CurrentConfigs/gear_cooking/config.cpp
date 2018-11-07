////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:11:51 2018 : 'file' last modified on Wed Aug 22 17:21:38 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_cooking\config.bin{
class CfgPatches
{
	class DZ_Gear_Cooking
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Melee"};
	};
};
class CfgRecipes
{
	class Craft_Fireplace_Base
	{
		name = "Craft Fireplace from %TOOL1 and %TOOL2";
		condition = "[0, _owner, [_tool1, _tool2]] call fireplace_action_condition";
		action = "[0, _owner, [_tool1, _tool2]] spawn fireplace_manageActions;";
	};
	class Craft_Fireplace_WoodenStick_Rags: Craft_Fireplace_Base
	{
		tools[] = {"Crafting_WoodenStick","Consumable_Rags"};
	};
	class Craft_Fireplace_WoodenStick_BandageDressing: Craft_Fireplace_Base
	{
		tools[] = {"Crafting_WoodenStick","Medical_BandageDressing"};
	};
	class Craft_Fireplace_WoodenStick_Bandage: Craft_Fireplace_Base
	{
		tools[] = {"Crafting_WoodenStick","Medical_Bandage"};
	};
	class Craft_Fireplace_WoodenStick_Paper: Craft_Fireplace_Base
	{
		tools[] = {"Crafting_WoodenStick","Consumable_Paper"};
	};
	class Craft_Fireplace_WoodenStick_Book: Craft_Fireplace_Base
	{
		tools[] = {"Crafting_WoodenStick","ItemBook"};
	};
	class Craft_Fireplace_WoodenStick_OakBark: Craft_Fireplace_Base
	{
		tools[] = {"Crafting_WoodenStick","Consumable_Bark_Oak"};
	};
	class Craft_Fireplace_WoodenStick_BirchBark: Craft_Fireplace_Base
	{
		tools[] = {"Crafting_WoodenStick","Consumable_Bark_Birch"};
	};
	class Craft_Fireplace_Firewood_Rags: Craft_Fireplace_Base
	{
		tools[] = {"Consumable_Firewood","Consumable_Rags"};
	};
	class Craft_Fireplace_Firewood_BandageDressing: Craft_Fireplace_Base
	{
		tools[] = {"Consumable_Firewood","Medical_BandageDressing"};
	};
	class Craft_Fireplace_Firewood_Bandage: Craft_Fireplace_Base
	{
		tools[] = {"Consumable_Firewood","Medical_Bandage"};
	};
	class Craft_Fireplace_Firewood_Paper: Craft_Fireplace_Base
	{
		tools[] = {"Consumable_Firewood","Consumable_Paper"};
	};
	class Craft_Fireplace_Firewood_Book: Craft_Fireplace_Base
	{
		tools[] = {"Consumable_Firewood","ItemBook"};
	};
	class Craft_Fireplace_Firewood_OakBark: Craft_Fireplace_Base
	{
		tools[] = {"Consumable_Firewood","Consumable_Bark_Oak"};
	};
	class Craft_Fireplace_Firewood_BirchBark: Craft_Fireplace_Base
	{
		tools[] = {"Consumable_Firewood","Consumable_Bark_Birch"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Inventory_Base;
	class Bottle_Base;
	class ClutterCutterFireplace: HouseNoDestruct
	{
		scope = 1;
		model = "\DZ\gear\cooking\fireplace_cluttercutter.p3d";
		displayName = "$STR_CfgVehicles_ClutterCutterFireplace0";
		mapSize = 0.7;
		accuracy = 0.2;
		cost = 0;
		armor = 200000;
		destrType = "DestructNo";
	};
	class FireplaceBase: Inventory_Base
	{
		varTemperatureMax = 1000;
		class AnimationSources
		{
			class Ashes
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Kindling
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Sticks
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Wood
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class BurntWood
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Stones
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Tripod
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Oven
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class LidOn
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class LidOff
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class Fireplace: FireplaceBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Fireplace0";
		descriptionShort = "$STR_CfgVehicles_Fireplace1";
		model = "\dz\gear\cooking\Fireplace.p3d";
		overrideDrawArea = "8.0";
		SingleUseActions[] = {563,547,527};
		ContinuousActions[] = {155};
		physLayer = "item_large";
		armAction = "Disarm";
		openable = 0;
		lootCategory = "Crafted";
		itemSize[] = {5,5};
		itemsCargoSize[] = {10,4};
		useEntityHierarchy = "true";
		attachments[] = {"Firewood","WoodenStick","CookingTripod","CookingEquipment","Stones","Rags","MedicalBandage","Paper","Book","OakBark","BirchBark"};
		class GUIInventoryAttachmentsProps
		{
			class CookingEquipment
			{
				name = "Cooking equipment";
				description = "";
				attachmentSlots[] = {"CookingTripod","CookingEquipment"};
				icon = "missing";
				view_index = 1;
			};
			class Upgrade
			{
				name = "Upgrade";
				description = "";
				attachmentSlots[] = {"Stones"};
				icon = "missing";
				view_index = 2;
			};
			class Fuel
			{
				name = "Fuel";
				description = "";
				attachmentSlots[] = {"Firewood","WoodenStick"};
				icon = "missing";
				view_index = 4;
			};
			class Kindling
			{
				name = "Kindling";
				description = "";
				attachmentSlots[] = {"Rags","MedicalBandage","Paper","Book","OakBark","BirchBark"};
				icon = "missing";
				view_index = 3;
			};
		};
		hiddenSelections[] = {"ashes","inventory"};
		hiddenSelectionsTextures[] = {"","\dz\gear\cooking\data\fireplacekit_co.paa"};
		hiddenSelectionsMaterials[] = {"","\dz\gear\cooking\data\fireplacekit.rvmat"};
		hologramMaterial = "FireplaceKit";
		hologramMaterialPath = "dz\gear\cooking\data";
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,0.5,0.3,1.0};
				brightness = 1.0;
				radius = 25;
				dayLight = 1;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				heatHazeRadius = 0.6;
				heatHazePower = 0.01;
				fireEffect = 1;
				fireEffectOctaves = 4;
				fireEffectPersistence = 0.97342;
				fireEffectFract = 0.3333;
			};
		};
	};
	class FireplaceIndoor: FireplaceBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_FireplaceIndoor0";
		descriptionShort = "$STR_CfgVehicles_FireplaceIndoor1";
		model = "\dz\gear\cooking\FireplaceIndoor.p3d";
		overrideDrawArea = "8.0";
		armAction = "Disarm";
		rotationFlags = 64;
		InteractActions[] = {1030};
		openable = 0;
		lootCategory = "Crafted";
		itemSize[] = {5,5};
		itemsCargoSize[] = {10,4};
		attachments[] = {"Firewood","WoodenStick","CookingEquipment","Rags","MedicalBandage","Paper","Book","OakBark","BirchBark"};
		class GUIInventoryAttachmentsProps
		{
			class CookingEquipment
			{
				name = "Cooking equipment";
				description = "";
				attachmentSlots[] = {"CookingEquipment"};
				icon = "missing";
			};
			class Fuel
			{
				name = "Fuel";
				description = "";
				attachmentSlots[] = {"Firewood","WoodenStick"};
				icon = "missing";
			};
			class Kindling
			{
				name = "Kindling";
				description = "";
				attachmentSlots[] = {"Rags","MedicalBandage","Paper","OakBark","BirchBark","Book"};
				icon = "missing";
			};
		};
		hiddenSelections[] = {"ashes"};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,0.5,0.3,1.0};
				brightness = 1.0;
				radius = 15;
				dayLight = 1;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				heatHazeRadius = 0.6;
				heatHazePower = 0.01;
				fireEffect = 1;
				fireEffectOctaves = 4;
				fireEffectPersistence = 0.97342;
				fireEffectFract = 0.3333;
			};
		};
	};
	class BarrelHoles_ColorBase: FireplaceBase
	{
		displayName = "$STR_CfgVehicles_BarrelHoles_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_BarrelHoles_ColorBase1";
		model = "\dz\gear\cooking\barrel_holes.p3d";
		overrideDrawArea = "3.0";
		SingleUseActions[] = {527};
		InteractActions[] = {1028,1029,1041};
		ContinuousActions[] = {155};
		lootCategory = "Crafted";
		itemSize[] = {9,16};
		weight = 10000;
		stackedUnit = "ml";
		attachments[] = {"Firewood","WoodenStick","CookingEquipment","Rags","MedicalBandage","Paper","Book","OakBark","BirchBark"};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		canBeDigged = 0;
		physLayer = "item_large";
		class GUIInventoryAttachmentsProps
		{
			class CookingEquipment
			{
				name = "Cooking equipment";
				description = "";
				attachmentSlots[] = {"CookingEquipment"};
				icon = "missing";
			};
			class Fuel
			{
				name = "Fuel";
				description = "";
				attachmentSlots[] = {"Firewood","WoodenStick"};
				icon = "missing";
			};
			class Kindling
			{
				name = "Kindling";
				description = "";
				attachmentSlots[] = {"Rags","MedicalBandage","Paper","OakBark","BirchBark","Book"};
				icon = "missing";
			};
		};
		hiddenSelections[] = {"ashes","camoGround","inventory"};
		class Cargo
		{
			itemsCargoSize[] = {9,15};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,0.5,0.3,1.0};
				brightness = 1.0;
				radius = 15;
				dayLight = 1;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				heatHazeRadius = 0.6;
				heatHazePower = 0.01;
				fireEffect = 1;
				fireEffectOctaves = 4;
				fireEffectPersistence = 0.97342;
				fireEffectFract = 0.3333;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Barrel_open
				{
					soundSet = "Barrel_open_SoundSet";
					id = 701;
				};
				class Barrel_close
				{
					soundSet = "Barrel_close_SoundSet";
					id = 702;
				};
				class Barrel_pickup
				{
					soundSet = "Barrel_pickup_SoundSet";
					id = 801;
				};
				class Barrel_putdown
				{
					soundSet = "Barrel_putdown_SoundSet";
					id = 802;
				};
			};
		};
	};
	class BarrelHoles_Green: BarrelHoles_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BarrelHoles_Green0";
		color = "Green";
		hiddenSelectionsTextures[] = {"\dz\gear\cooking\data\stoneground_co.paa","\dz\gear\cooking\data\barrel_green_holes_co.paa","\dz\gear\cooking\data\barrel_green_holes_co.paa"};
		hologramMaterial = "Barrel";
		hologramMaterialPath = "dz\gear\containers\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\barrel_green_holes.rvmat"}},{0.5,{"DZ\gear\cooking\data\barrel_green_holes_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\barrel_green_holes_destruct.rvmat"}}};
				};
			};
		};
	};
	class BarrelHoles_Blue: BarrelHoles_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BarrelHoles_Blue0";
		color = "Blue";
		hiddenSelectionsTextures[] = {"\dz\gear\cooking\data\stoneground_co.paa","\dz\gear\cooking\data\barrel_blue_holes_co.paa","\dz\gear\cooking\data\barrel_blue_holes_co.paa"};
		hologramMaterial = "Barrel";
		hologramMaterialPath = "dz\gear\containers\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\Barrel_blue_holes.rvmat"}},{0.5,{"DZ\gear\cooking\data\Barrel_blue_holes_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\Barrel_blue_holes_destruct.rvmat"}}};
				};
			};
		};
	};
	class BarrelHoles_Red: BarrelHoles_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BarrelHoles_Red0";
		color = "Red";
		hiddenSelectionsTextures[] = {"\dz\gear\cooking\data\stoneground_co.paa","\dz\gear\cooking\data\barrel_red_holes_co.paa","\dz\gear\cooking\data\barrel_red_holes_co.paa"};
		hologramMaterial = "Barrel";
		hologramMaterialPath = "dz\gear\containers\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\Barrel_red_holes.rvmat"}},{0.5,{"DZ\gear\cooking\data\Barrel_red_holes_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\Barrel_red_holes_destruct.rvmat"}}};
				};
			};
		};
	};
	class BarrelHoles_Yellow: BarrelHoles_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BarrelHoles_Yellow0";
		color = "Yellow";
		hiddenSelectionsTextures[] = {"\dz\gear\cooking\data\stoneground_co.paa","\dz\gear\cooking\data\barrel_yellow_holes_co.paa","\dz\gear\cooking\data\barrel_yellow_holes_co.paa"};
		hologramMaterial = "Barrel";
		hologramMaterialPath = "dz\gear\containers\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\Barrel_yellow_holes.rvmat"}},{0.5,{"DZ\gear\cooking\data\Barrel_yellow_holes_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\Barrel_yellow_holes_destruct.rvmat"}}};
				};
			};
		};
	};
	class Pot: Bottle_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Pot0";
		descriptionShort = "$STR_CfgVehicles_Pot1";
		model = "\dz\gear\cooking\CookingPot.p3d";
		ContinuousActions[] = {182,176,169,189,160,108,225,226,238,227};
		weight = 440;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		inventorySlot = "CookingEquipment";
		lootTag[] = {"Kitchen"};
		lootCategory = "Tools";
		stackedRandom = 0;
		canBeDigged = 1;
		allowOwnedCargoManipulation = 1;
		varLiquidTypeInit = 512;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 2000;
		varTemperatureMax = 200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\cooking_pot.rvmat"}},{0.5,{"DZ\gear\cooking\data\cooking_pot_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\cooking_pot_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class handleRotate
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class FryingPan: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_FryingPan0";
		descriptionShort = "$STR_CfgVehicles_FryingPan1";
		model = "\dz\gear\cooking\FryingPan.p3d";
		rotationFlags = 8;
		openable = 0;
		weight = 750;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		fragility = 0.01;
		lootTag[] = {"Kitchen"};
		lootCategory = "Tools";
		allowOwnedCargoManipulation = 1;
		volume = 1000;
		inventorySlot = "CookingEquipment";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\frying_pan.rvmat"}},{0.5,{"DZ\gear\cooking\data\frying_pan_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\frying_pan_destruct.rvmat"}}};
				};
			};
		};
	};
	class PortableGasStove: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PortableGasStove0";
		descriptionShort = "$STR_CfgVehicles_PortableGasStove1";
		model = "\dz\gear\cooking\GasCooker.p3d";
		overrideDrawArea = "3.0";
		InteractActions[] = {1002,1003};
		openable = 0;
		lootTag[] = {"Camping"};
		lootCategory = "Tools";
		weight = 170;
		itemSize[] = {1,3};
		attachments[] = {"GasCanister","CookingEquipment"};
		containerSlot = "GasCanister";
		hiddenSelections[] = {"flame"};
		hiddenSelectionsTextures[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\GasCooker.rvmat"}},{0.5,{"DZ\gear\cooking\data\GasCooker_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\GasCooker_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			switchOnAtSpawn = 0;
			autoSwitchOff = 1;
			energyStorageMax = 0;
			energyUsagePerSecond = 1;
			energyAtSpawn = 0;
			powerSocketsCount = 0;
			plugType = 7;
			attachmentAction = 1;
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,0.6,0.5,1.0};
				brightness = 1.0;
				radius = 5;
				dayLight = 0;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
			};
		};
	};
	class PortableGasLamp: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PortableGasLamp0";
		descriptionShort = "$STR_CfgVehicles_PortableGasLamp1";
		model = "\dz\gear\cooking\GasLight.p3d";
		overrideDrawArea = "8.0";
		SingleUseActions[] = {509,510};
		InteractActions[] = {1002,1003};
		weight = 330;
		itemSize[] = {2,3};
		lootTag[] = {"Camping"};
		lootCategory = "Tools";
		attachments[] = {"GasCanister"};
		containerSlot = "GasCanister";
		hiddenSelections[] = {"glow","zbytek","glow_on","glow_off"};
		hiddenSelectionsMaterials[] = {"dz\gear\cooking\data\gaslight.rvmat","dz\gear\cooking\data\gaslight.rvmat","","dz\gear\cooking\data\gaslight.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\GasLight.rvmat"}},{0.5,{"DZ\gear\cooking\data\GasLight_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\GasLight_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			switchOnAtSpawn = 0;
			autoSwitchOff = 1;
			energyStorageMax = 0;
			energyUsagePerSecond = 1;
			energyAtSpawn = 0;
			powerSocketsCount = 0;
			plugType = 7;
			attachmentAction = 1;
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,0.7,0.5,1.0};
				brightness = 1.0;
				radius = 15;
				dayLight = 1;
				flareAngleBias = 40.0;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
			};
		};
	};
	class Candle: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Candle0";
		descriptionShort = "$STR_CfgVehicles_Candle1";
		model = "\dz\gear\tools\candle.p3d";
		rotationFlags = 12;
		weight = 60;
		itemSize[] = {1,2};
		lootTag[] = {"Civilian","Farm"};
		lootCategory = "Tools";
		attachments[] = {"GasCanister"};
		hiddenSelections[] = {"flame"};
		containerSlot = "GasCanister";
		class flame
		{
			sound = "";
			texture = "dz\gear\tools\data\candle_flame_ca.paa";
			material = "dz\gear\tools\data\candle_flame.rvmat";
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,0.5,0.2,1.0};
				brightness = 1.0;
				radius = 2;
				dayLight = 0;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
			};
		};
	};
	class PetrolLighter: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PetrolLighter0";
		descriptionShort = "$STR_ITEMS_ROADFLARE_DESC";
		model = "\dz\gear\cooking\petrol_lighter.p3d";
		ContinuousActions[] = {173};
		rotationFlags = 12;
		absorbency = 0;
		weight = 50;
		itemSize[] = {1,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\petrol_lighter.rvmat"}},{0.5,{"DZ\gear\cooking\data\petrol_lighter_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\petrol_lighter_destruct.rvmat"}}};
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,0.6,0.5,1.0};
				brightness = 1.0;
				radius = 2;
				dayLight = 0;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class LighterZippo
				{
					soundSet = "LighterZippo_SoundSet";
					id = 201;
				};
			};
		};
	};
	class Tripod: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Tripod0";
		descriptionShort = "$STR_CfgVehicles_Tripod1";
		model = "\dz\gear\cooking\tripod.p3d";
		rotationFlags = 17;
		physLayer = "item_large";
		weight = 660;
		itemSize[] = {2,6};
		suicideAnim = "pitchfork";
		lootCategory = "Tools";
		lootTag[] = {"Camping"};
		inventorySlot = "CookingTripod";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\tripod.rvmat"}},{0.5,{"DZ\gear\cooking\data\tripod_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\tripod_destruct.rvmat"}}};
				};
			};
		};
	};
	class Tripod_Proxy_Test: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Tripod0";
		descriptionShort = "$STR_CfgVehicles_Tripod1";
		model = "\dz\gear\cooking\tripod_proxy_test.p3d";
		rotationFlags = 17;
		physLayer = "item_large";
		weight = 660;
		itemSize[] = {2,6};
		suicideAnim = "pitchfork";
		lootCategory = "Tools";
		lootTag[] = {"Camping"};
		inventorySlot = "CookingTripod";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\cooking\data\tripod.rvmat"}},{0.5,{"DZ\gear\cooking\data\tripod_damage.rvmat"}},{0.0,{"DZ\gear\cooking\data\tripod_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class Collapsed
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Deployed
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyCookingPot: ProxyAttachment
	{
		scope = 2;
		model = "\dz\gear\cooking\CookingPot.p3d";
		inventorySlot = "CookingEquipment";
		class AnimationSources
		{
			class handleRotate
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class ProxyBook_kniga: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Book";
		model = "\dz\gear\books\Book_kniga.p3d";
	};
};
//};

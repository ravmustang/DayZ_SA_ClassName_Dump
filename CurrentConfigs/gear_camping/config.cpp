////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:12:10 2018 : 'file' last modified on Wed Aug 22 17:10:13 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_camping\config.bin{
class CfgPatches
{
	class DZ_Gear_Camping
	{
		units[] = {"TentMedium_Packed","TentMedium_Pitched"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class RecipeToolOnTool;
class CfgRecipes
{
	class CraftFenceBase
	{
		name = "Craft Fence";
		tools[] = {"Consumable_WoodenPlanks"};
		condition = "quantity _tool1 > 2";
		results[] = {"Fence"};
		action = "_tool1 addQuantity -2; if(quantity _tool1 < 1)then{deleteVehicle _tool1};[_owner,format['I have made the %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class CombinePlanks
	{
		name = "Stack planks";
		tools[] = {"Camping_Plank","Camping_Plank"};
		condition = "quantity _tool2 < maxQuantity _tool2";
		action = "call player_combineQuantity;";
	};
	class SplitPlanks
	{
		name = "Split planks";
		tools[] = {"Camping_Plank"};
		condition = "(quantity _tool1) > 1";
		action = "call player_splitQuantity;";
	};
	class CraftCamoNetShelter: RecipeToolOnTool
	{
		name = "Craft Camo net shelter";
		tools[] = {"CamoNet","LongWoodenStick"};
		condition = "damage _tool1 < 1  &&  damage _tool2 < 1";
		results[] = {"CamoNetShelter"};
		action = "_result1 setDamage (damage _tool1 + damage _tool2 )/2;  _tool2 addQuantity -1;  if (quantity _tool2 < 1) then {deleteVehicle _tool2};  deleteVehicle _tool1;  [_owner,format['I have made a Camo net shelter.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class DecraftCamoNetShelter
	{
		name = "Break down into wooden stick and Camo net";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		material[] = {"CamoNetShelter"};
		results[] = {"CamoNet","LongWoodenStick"};
		action = "_result1 setQuantity 2;  _result1 setdamage (damage _material1); _result2 setQuantity 1;  _result2 setdamage (damage _material1); [_owner,format['I have broken down the %1.',displayName _material1],'colorAction'] call fnc_playerMessage";
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class HouseNoDestruct;
	class MediumTent: Container_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_MediumTent0";
		descriptionShort = "$STR_CfgVehicles_MediumTent1";
		model = "\DZ\gear\camping\medium_tent.p3d";
		overrideDrawArea = "3.0";
		hologramMaterial = "tent_medium";
		hologramMaterialPath = "dz\gear\camping\data";
		openable = 0;
		carveNavmesh = 1;
		itemSize[] = {5,7};
		itemsCargoSize[] = {10,18};
		lootCategory = "Tents";
		placement = "ForceSlopeOnTerrain";
		physLayer = "item_large";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		attachments[] = {"CamoNet","Lights"};
		SingleUseActions[] = {527};
		InteractActions[] = {1021,1022};
		ContinuousActions[] = {231};
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\tent_medium_pitched.rvmat"}},{0.5,{"DZ\gear\camping\data\tent_medium_pitched_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\tent_medium_pitched_destruct.rvmat"}}};
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,1.0,1.0,0.05};
				ambient[] = {0.01,0.01,0.01,0.01};
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				size = 0;
				radius = 5;
				brightness = 0.001;
				dayLight = 1;
				heatHazeRadius = 0.0;
				heatHazePower = 0.0;
				fireEffect = 0;
				fireEffectOctaves = 0;
				fireEffectPersistence = 0;
				fireEffectFract = 0;
			};
		};
		class AnimationSources
		{
			class Inventory
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class LargeTent: Container_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_LargeTent0";
		descriptionShort = "$STR_CfgVehicles_LargeTent1";
		model = "\DZ\gear\camping\large_tent.p3d";
		overrideDrawArea = "3.0";
		hiddenSelections[] = {"xlights_glass_r","xlights_glass_g","xlights_glass_b","xlights_glass_y","xligths","placing"};
		hiddenSelectionsTextures[] = {"dz\gear\camping\data\christmass_ligths_co.paa","dz\gear\camping\data\christmass_ligths_co.paa","dz\gear\camping\data\christmass_ligths_co.paa","dz\gear\camping\data\christmass_ligths_co.paa","dz\gear\camping\data\christmass_ligths_co.paa","dz\gear\camping\Data\large_tent_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\camping\data\christmass_ligths.rvmat","dz\gear\camping\data\christmass_ligths.rvmat","dz\gear\camping\data\christmass_ligths.rvmat","dz\gear\camping\data\christmass_ligths.rvmat","dz\gear\camping\data\christmass_ligths.rvmat","dz\gear\camping\Data\large_tent.rvmat"};
		hologramMaterial = "tent_medium";
		hologramMaterialPath = "dz\gear\camping\data";
		openable = 0;
		carveNavmesh = 1;
		itemSize[] = {10,20};
		itemsCargoSize[] = {10,70};
		lootCategory = "Tents";
		placement = "ForceSlopeOnTerrain";
		physLayer = "item_large";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		attachments[] = {"CamoNet","Lights"};
		SingleUseActions[] = {527};
		InteractActions[] = {1021,1022};
		ContinuousActions[] = {231};
		minPlacingDist = 10;
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\large_tent.rvmat"}},{0.5,{"DZ\gear\camping\data\large_tent_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\large_tent_destruct.rvmat"}}};
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,1.0,1.0,0.05};
				ambient[] = {0.01,0.01,0.01,0.01};
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				size = 0;
				radius = 5;
				brightness = 0.001;
				dayLight = 1;
				heatHazeRadius = 0.0;
				heatHazePower = 0.0;
				fireEffect = 0;
				fireEffectOctaves = 0;
				fireEffectPersistence = 0;
				fireEffectFract = 0;
			};
		};
		class AnimationSources
		{
			class door_open
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class door_closed
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_r
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_g
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_b
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_y
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class cord_folded
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class cord_plugged
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class camonet
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class inventory
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class window_1_open: door_open{};
			class window_1_closed: door_closed{};
			class window_2_open: window_1_open{};
			class window_2_closed: window_1_closed{};
			class window_3_open: window_1_open{};
			class window_3_closed: window_1_closed{};
			class window_4_open: window_1_open{};
			class window_4_closed: window_1_closed{};
			class window_5_open: window_1_open{};
			class window_5_closed: window_1_closed{};
			class window_6_open: window_1_open{};
			class window_6_closed: window_1_closed{};
			class window_7_open: window_1_open{};
			class window_7_closed: window_1_closed{};
		};
	};
	class CarTent: Container_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CarTent0";
		descriptionShort = "$STR_CfgVehicles_CarTent1";
		model = "\DZ\gear\camping\car_tent.p3d";
		overrideDrawArea = "3.0";
		hiddenSelections[] = {"xlights_glass_r","xlights_glass_g","xlights_glass_b","xlights_glass_y","xligths","placing"};
		hiddenSelectionsTextures[] = {"dz\gear\camping\data\christmass_ligths_co.paa","dz\gear\camping\data\christmass_ligths_co.paa","dz\gear\camping\data\christmass_ligths_co.paa","dz\gear\camping\data\christmass_ligths_co.paa","dz\gear\camping\data\christmass_ligths_co.paa","dz\gear\camping\data\car_tent_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\camping\data\christmass_ligths.rvmat","dz\gear\camping\data\christmass_ligths.rvmat","dz\gear\camping\data\christmass_ligths.rvmat","dz\gear\camping\data\christmass_ligths.rvmat","dz\gear\camping\data\christmass_ligths.rvmat","dz\gear\camping\data\car_tent.rvmat"};
		hologramMaterial = "car_tent";
		hologramMaterialPath = "dz\gear\camping\data";
		openable = 0;
		carveNavmesh = 1;
		itemSize[] = {10,8};
		itemsCargoSize[] = {10,50};
		lootCategory = "Tents";
		placement = "ForceSlopeOnTerrain";
		physLayer = "item_large";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		attachments[] = {"CamoNet","Lights"};
		SingleUseActions[] = {527};
		InteractActions[] = {1021,1022};
		ContinuousActions[] = {231};
		minPlacingDist = 10;
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\car_tent_packed.rvmat"}},{0.5,{"DZ\gear\camping\data\car_tent_packed_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\car_tent_packed_destruct.rvmat"}}};
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,1.0,1.0,0.05};
				ambient[] = {0.01,0.01,0.01,0.01};
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				size = 0;
				radius = 5;
				brightness = 0.001;
				dayLight = 1;
				heatHazeRadius = 0.0;
				heatHazePower = 0.0;
				fireEffect = 0;
				fireEffectOctaves = 0;
				fireEffectPersistence = 0;
				fireEffectFract = 0;
			};
		};
		class AnimationSources
		{
			class door_open
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class door_closed
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_r
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_g
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_b
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_y
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class cord_folded
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class cord_plugged
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class camonet
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class inventory
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class PartyTent: Container_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PartyTent0";
		descriptionShort = "$STR_CfgVehicles_PartyTent1";
		model = "\DZ\gear\camping\party_tent.p3d";
		overrideDrawArea = "3.0";
		hiddenSelections[] = {"placing"};
		hiddenSelectionsTextures[] = {""};
		hiddenSelectionsMaterials[] = {""};
		hologramMaterial = "party_tent";
		hologramMaterialPath = "dz\gear\camping\data";
		openable = 0;
		carveNavmesh = 1;
		itemSize[] = {11,6};
		itemsCargoSize[] = {10,18};
		lootCategory = "Tents";
		placement = "ForceSlopeOnTerrain";
		physLayer = "item_large";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		attachments[] = {"CamoNet"};
		SingleUseActions[] = {527};
		InteractActions[] = {1022};
		ContinuousActions[] = {231};
		minPlacingDist = 10;
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\tent_medium_pitched.rvmat"}},{0.5,{"DZ\gear\camping\data\tent_medium_pitched_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\tent_medium_pitched_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class camonet
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class inventory
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class ImprovisedShelterPitched: WorldContainer_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ImprovisedShelterPitched0";
		descriptionShort = "$STR_CfgVehicles_ImprovisedShelterPitched1";
		model = "\DZ\gear\camping\improvised_tent_01.p3d";
		hiddenSelections[] = {"xlights_glass_r","xlights_glass_g","xlights_glass_b","xlights_glass_y"};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		openable = 0;
		itemSize[] = {2,6};
		itemsCargoSize[] = {3,2};
		itemsCargo[] = {};
		lootCategory = "Crafted";
		overrideDrawArea = "3.0";
		carveNavmesh = 1;
		placement = "ForceSlopeOnTerrain";
		physLayer = "item_large";
		attachments[] = {"CamoNet","Lights"};
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\car_tent_packed.rvmat"}},{0.5,{"DZ\gear\camping\data\car_tent_packed_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\car_tent_packed_destruct.rvmat"}}};
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,1.0,1.0,0.05};
				ambient[] = {0.01,0.01,0.01,0.01};
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				size = 0;
				radius = 5;
				brightness = 0.001;
				dayLight = 1;
				heatHazeRadius = 0.0;
				heatHazePower = 0.0;
				fireEffect = 0;
				fireEffectOctaves = 0;
				fireEffectPersistence = 0;
				fireEffectFract = 0;
			};
		};
		class AnimationSources
		{
			class xlights
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_r
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_g
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_b
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_y
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class cord_folded
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class cord_plugged
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class camonet
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
		};
	};
	class AdvancedImprovisedShelterPitched: WorldContainer_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_AdvancedImprovisedShelterPitched0";
		descriptionShort = "$STR_CfgVehicles_AdvancedImprovisedShelterPitched1";
		model = "\DZ\gear\camping\improvised_tent_02.p3d";
		hiddenSelections[] = {"xlights_glass_r","xlights_glass_g","xlights_glass_b","xlights_glass_y"};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		openable = 0;
		itemSize[] = {2,6};
		itemsCargoSize[] = {5,2};
		itemsCargo[] = {};
		lootCategory = "Crafted";
		overrideDrawArea = "3.0";
		carveNavmesh = 1;
		physLayer = "item_large";
		placement = "ForceSlopeOnTerrain";
		attachments[] = {"CamoNet","Lights"};
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\car_tent_packed.rvmat"}},{0.5,{"DZ\gear\camping\data\car_tent_packed_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\car_tent_packed_destruct.rvmat"}}};
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,1.0,1.0,0.05};
				ambient[] = {0.01,0.01,0.01,0.01};
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				size = 0;
				radius = 5;
				brightness = 0.001;
				dayLight = 1;
				heatHazeRadius = 0.0;
				heatHazePower = 0.0;
				fireEffect = 0;
				fireEffectOctaves = 0;
				fireEffectPersistence = 0;
				fireEffectFract = 0;
			};
		};
		class AnimationSources
		{
			class xlights
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_r
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_g
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_b
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class xlights_glass_y
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class cord_folded
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class cord_plugged
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
			class camonet
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
			};
		};
	};
	class CamoNetShelter: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CamoNetShelter0";
		descriptionShort = "$STR_CfgVehicles_CamoNetShelter1";
		model = "\DZ\gear\camping\camo_net_shelter.p3d";
		armAction = "Disarm";
		handheld = "true";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		lootCategory = "Crafted";
		weight = 10000;
		itemSize[] = {5,2};
		minPlacingDist = 12;
		carveNavmesh = 1;
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\car_tent.rvmat"}},{0.5,{"DZ\gear\camping\data\car_tent_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\car_tent_destruct.rvmat"}}};
				};
			};
		};
	};
	class Watchtower: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Watchtower0";
		descriptionShort = "$STR_CfgVehicles_Watchtower1";
		model = "\DZ\gear\camping\watchtower.p3d";
		SingleUseActions[] = {527};
		ContinuousActions[] = {155};
		armAction = "Disarm";
		handheld = "true";
		lootCategory = "Crafted";
		attachments[] = {"CableReel","W_BarbWire_1_L","W_BarbWire_1_R","W_BarbWire_1_F","W_CamoNet_1_L","W_CamoNet_1_R","W_CamoNet_1_F","W_CamoNet_2_L","W_CamoNet_2_R","W_CamoNet_2_F","W_CamoNet_3_L","W_CamoNet_3_R","W_CamoNet_3_F","W_Lights_1_L","W_Lights_1_R","W_Lights_1_F","W_Lights_2_L","W_Lights_2_R","W_Lights_2_F","W_Lights_3_L","W_Lights_3_R","W_Lights_3_F","Nails","WoodenPlanks","MetalPlates"};
		class GUIInventoryAttachmentsProps
		{
			class Level_1_Wall_L
			{
				name = "Level_1_Wall_L";
				description = "";
				attachmentSlots[] = {"W_BarbWire_1_L","W_CamoNet_1_L","W_Lights_1_L","Nails","WoodenPlanks","MetalPlates"};
				icon = "missing";
			};
			class Level_1_Wall_R
			{
				name = "Level_1_Wall_R";
				description = "";
				attachmentSlots[] = {"W_BarbWire_1_R","W_CamoNet_1_R","W_Lights_1_R","Nails","WoodenPlanks","MetalPlates"};
				icon = "missing";
			};
			class Level_1_Wall_F
			{
				name = "Level_1_Wall_F";
				description = "";
				attachmentSlots[] = {"W_BarbWire_1_F","W_CamoNet_1_F","W_Lights_1_F","Nails","WoodenPlanks","MetalPlates"};
				icon = "missing";
			};
		};
		weight = 1000000;
		itemSize[] = {6,6};
		carveNavmesh = 1;
		rotationFlags = 2;
		class AnimationSources
		{
			class AnimSourceShown
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class AnimSourceHidden
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Level_1_Base: AnimSourceShown{};
			class Level_1_Base_Down_L: AnimSourceShown{};
			class Level_1_Base_Down_R: AnimSourceShown{};
			class Level_1_Base_Down_F: AnimSourceShown{};
			class Level_1_Base_Up_L: AnimSourceShown{};
			class Level_1_Base_Up_R: AnimSourceShown{};
			class Level_1_Base_Up_F: AnimSourceShown{};
			class Level_1_Metal_Down_L: AnimSourceShown{};
			class Level_1_Metal_Down_R: AnimSourceShown{};
			class Level_1_Metal_Down_F: AnimSourceShown{};
			class Level_1_Metal_Up_L: AnimSourceShown{};
			class Level_1_Metal_Up_R: AnimSourceShown{};
			class Level_1_Metal_Up_F: AnimSourceShown{};
			class Level_1_Wood_Down_L: AnimSourceShown{};
			class Level_1_Wood_Down_R: AnimSourceShown{};
			class Level_1_Wood_Down_F: AnimSourceShown{};
			class Level_1_Wood_Up_L: AnimSourceShown{};
			class Level_1_Wood_Up_R: AnimSourceShown{};
			class Level_1_Wood_Up_F: AnimSourceShown{};
			class Level_2_Base: AnimSourceShown{};
			class Level_2_Floor: AnimSourceShown{};
			class Level_2_Base_Down_L: AnimSourceShown{};
			class Level_2_Base_Down_R: AnimSourceShown{};
			class Level_2_Base_Down_F: AnimSourceShown{};
			class Level_2_Base_Up_L: AnimSourceShown{};
			class Level_2_Base_Up_R: AnimSourceShown{};
			class Level_2_Base_Up_F: AnimSourceShown{};
			class Level_2_Metal_Down_L: AnimSourceShown{};
			class Level_2_Metal_Down_R: AnimSourceShown{};
			class Level_2_Metal_Down_F: AnimSourceShown{};
			class Level_2_Metal_Up_L: AnimSourceShown{};
			class Level_2_Metal_Up_R: AnimSourceShown{};
			class Level_2_Metal_Up_F: AnimSourceShown{};
			class Level_2_Wood_Down_L: AnimSourceShown{};
			class Level_2_Wood_Down_R: AnimSourceShown{};
			class Level_2_Wood_Down_F: AnimSourceShown{};
			class Level_2_Wood_Up_L: AnimSourceShown{};
			class Level_2_Wood_Up_R: AnimSourceShown{};
			class Level_2_Wood_Up_F: AnimSourceShown{};
			class Level_3_Base: AnimSourceShown{};
			class Level_3_Floor: AnimSourceShown{};
			class Level_3_Roof: AnimSourceShown{};
			class Level_3_Base_Down_L: AnimSourceShown{};
			class Level_3_Base_Down_R: AnimSourceShown{};
			class Level_3_Base_Down_F: AnimSourceShown{};
			class Level_3_Base_Up_L: AnimSourceShown{};
			class Level_3_Base_Up_R: AnimSourceShown{};
			class Level_3_Base_Up_F: AnimSourceShown{};
			class Level_3_Metal_Down_L: AnimSourceShown{};
			class Level_3_Metal_Down_R: AnimSourceShown{};
			class Level_3_Metal_Down_F: AnimSourceShown{};
			class Level_3_Metal_Up_L: AnimSourceShown{};
			class Level_3_Metal_Up_R: AnimSourceShown{};
			class Level_3_Metal_Up_F: AnimSourceShown{};
			class Level_3_Wood_Down_L: AnimSourceShown{};
			class Level_3_Wood_Down_R: AnimSourceShown{};
			class Level_3_Wood_Down_F: AnimSourceShown{};
			class Level_3_Wood_Up_L: AnimSourceShown{};
			class Level_3_Wood_Up_R: AnimSourceShown{};
			class Level_3_Wood_Up_F: AnimSourceShown{};
		};
		class Construction
		{
			class slot_level_1_down_l
			{
				class level_1_base_down_l
				{
					RequiredParts[] = {"level_1_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_1_wood_down_l
				{
					RequiredParts[] = {"level_1_base_down_l"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_1_metal_down_l
				{
					RequiredParts[] = {"level_1_base_down_l"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_1_up_l
			{
				class level_1_base_up_l
				{
					RequiredParts[] = {"level_1_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_1_wood_up_l
				{
					RequiredParts[] = {"level_1_base_up_l"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_1_metal_up_l
				{
					RequiredParts[] = {"level_1_base_up_l"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_1_down_r
			{
				class level_1_base_down_r
				{
					RequiredParts[] = {"level_1_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_1_wood_down_r
				{
					RequiredParts[] = {"level_1_base_down_r"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_1_metal_down_r
				{
					RequiredParts[] = {"level_1_base_down_r"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_1_up_r
			{
				class level_1_base_up_r
				{
					RequiredParts[] = {"level_1_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_1_wood_up_r
				{
					RequiredParts[] = {"level_1_base_up_r"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_1_metal_up_r
				{
					RequiredParts[] = {"level_1_base_up_r"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_1_down_f
			{
				class level_1_base_down_f
				{
					RequiredParts[] = {"level_1_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_1_wood_down_f
				{
					RequiredParts[] = {"level_1_base_down_f"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_1_metal_down_f
				{
					RequiredParts[] = {"level_1_base_down_f"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_1_up_f
			{
				class level_1_base_up_f
				{
					RequiredParts[] = {"level_1_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_1_wood_up_f
				{
					RequiredParts[] = {"level_1_base_up_f"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_1_metal_up_f
				{
					RequiredParts[] = {"level_1_base_up_f"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_2_floor
			{
				class level_2_floor
				{
					RequiredParts[] = {"level_1_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 10;
						};
						class Material2
						{
							type = "Nail";
							quantity = 10;
						};
					};
				};
			};
			class slot_level_2_base
			{
				class level_2_base
				{
					RequiredParts[] = {"level_2_floor"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 4;
						};
						class Material2
						{
							type = "Nail";
							quantity = 8;
						};
					};
				};
			};
			class slot_level_2_down_l
			{
				class level_2_base_down_l
				{
					RequiredParts[] = {"level_2_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_2_wood_down_l
				{
					RequiredParts[] = {"level_2_base_down_l"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_2_metal_down_l
				{
					RequiredParts[] = {"level_2_base_down_l"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_2_up_l
			{
				class level_2_base_up_l
				{
					RequiredParts[] = {"level_2_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_2_wood_up_l
				{
					RequiredParts[] = {"level_2_base_up_l"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_2_metal_up_l
				{
					RequiredParts[] = {"level_2_base_up_l"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_2_down_r
			{
				class level_2_base_down_r
				{
					RequiredParts[] = {"level_2_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_2_wood_down_r
				{
					RequiredParts[] = {"level_2_base_down_r"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_2_metal_down_r
				{
					RequiredParts[] = {"level_2_base_down_r"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_2_up_r
			{
				class level_2_base_up_r
				{
					RequiredParts[] = {"level_2_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_2_wood_up_r
				{
					RequiredParts[] = {"level_2_base_up_r"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_2_metal_up_r
				{
					RequiredParts[] = {"level_2_base_up_r"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_2_down_f
			{
				class level_2_base_down_f
				{
					RequiredParts[] = {"level_2_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_2_wood_down_f
				{
					RequiredParts[] = {"level_2_base_down_f"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_2_metal_down_f
				{
					RequiredParts[] = {"level_2_base_down_f"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_2_up_f
			{
				class level_2_base_up_f
				{
					RequiredParts[] = {"level_2_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_2_wood_up_f
				{
					RequiredParts[] = {"level_2_base_up_f"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_2_metal_up_f
				{
					RequiredParts[] = {"level_2_base_up_f"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_3_floor
			{
				class level_3_floor
				{
					RequiredParts[] = {"level_2_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 10;
						};
						class Material2
						{
							type = "Nail";
							quantity = 10;
						};
					};
				};
			};
			class slot_level_3_base
			{
				class level_3_base
				{
					RequiredParts[] = {"level_3_floor"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 4;
						};
						class Material2
						{
							type = "Nail";
							quantity = 8;
						};
					};
				};
			};
			class slot_level_3_down_l
			{
				class level_3_base_down_l
				{
					RequiredParts[] = {"level_3_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_3_wood_down_l
				{
					RequiredParts[] = {"level_3_base_down_l"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_3_metal_down_l
				{
					RequiredParts[] = {"level_3_base_down_l"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_3_up_l
			{
				class level_3_base_up_l
				{
					RequiredParts[] = {"level_3_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_3_wood_up_l
				{
					RequiredParts[] = {"level_3_base_up_l"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_3_metal_up_l
				{
					RequiredParts[] = {"level_3_base_up_l"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_3_down_r
			{
				class level_3_base_down_r
				{
					RequiredParts[] = {"level_3_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_3_wood_down_r
				{
					RequiredParts[] = {"level_3_base_down_r"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_3_metal_down_r
				{
					RequiredParts[] = {"level_3_base_down_r"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_3_up_r
			{
				class level_3_base_up_r
				{
					RequiredParts[] = {"level_3_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_3_wood_up_r
				{
					RequiredParts[] = {"level_3_base_up_r"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_3_metal_up_r
				{
					RequiredParts[] = {"level_3_base_up_r"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_3_down_f
			{
				class level_3_base_down_f
				{
					RequiredParts[] = {"level_3_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_3_wood_down_f
				{
					RequiredParts[] = {"level_3_base_down_f"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_3_metal_down_f
				{
					RequiredParts[] = {"level_3_base_down_f"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_3_up_f
			{
				class level_3_base_up_f
				{
					RequiredParts[] = {"level_3_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 2;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_3_wood_up_f
				{
					RequiredParts[] = {"level_3_base_up_f"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 5;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
				class level_3_metal_up_f
				{
					RequiredParts[] = {"level_3_base_up_f"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "MetalPlate";
							quantity = 3;
						};
						class Material2
						{
							type = "Nail";
							quantity = 5;
						};
					};
				};
			};
			class slot_level_3_roof
			{
				class level_3_roof
				{
					RequiredParts[] = {"level_3_base"};
					ConflictParts[] = {};
					class Materials
					{
						class Material1
						{
							type = "WoodenPlank";
							quantity = 10;
						};
						class Material2
						{
							type = "Nail";
							quantity = 10;
						};
					};
				};
			};
		};
	};
	class Fence: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Fence0";
		descriptionShort = "$STR_CfgVehicles_Fence1";
		model = "\DZ\gear\camping\fence.p3d";
		InteractActions[] = {};
		SingleUseActions[] = {527};
		ContinuousActions[] = {155};
		armAction = "Disarm";
		handheld = "false";
		lootCategory = "Crafted";
		attachments[] = {"W_BarbWire_1_L","W_CamoNet_1_L","W_Lights_1_L","W_Plates_Up","W_Plates_Down","W_Planks_Up","W_Planks_Down","CableReel","NailsG_Down","NailsG_Up","PlanksG_Down","PlanksG_Up","PlatesG_Down","PlatesG_Up"};
		carveNavmesh = 1;
		weight = 3000;
		itemSize[] = {2,3};
		physLayer = "item_large";
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\fence.rvmat"}},{0.5,{"DZ\gear\camping\data\fence_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\fence_destruct.rvmat"}}};
				};
			};
		};
		class PointLights
		{
			class PointLight
			{
				color[] = {1.0,1.0,1.0,0.05};
				ambient[] = {0.01,0.01,0.01,0.01};
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				size = 0;
				radius = 5;
				brightness = 0.001;
				dayLight = 1;
				heatHazeRadius = 0.0;
				heatHazePower = 0.0;
				fireEffect = 0;
				fireEffectOctaves = 0;
				fireEffectPersistence = 0;
				fireEffectFract = 0;
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Ground_Down
			{
				name = "Preparings Down";
				description = "";
				attachmentSlots[] = {"NailsG_Down","PlanksG_Down","PlatesG_Down"};
				icon = "missing";
			};
			class Ground_Up
			{
				name = "Preparings Up";
				description = "";
				attachmentSlots[] = {"NailsG_Up","PlanksG_Up","PlatesG_Up"};
				icon = "missing";
			};
			class Ground
			{
				name = "Preparings UP&Down";
				description = "";
				attachmentSlots[] = {"W_BarbWire_1_L","W_CamoNet_1_L","W_Lights_1_L"};
				icon = "missing";
			};
		};
		class AnimationSources
		{
			class AnimSourceShown
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class AnimSourceHidden
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class Level_1_Base: AnimSourceHidden{};
			class Level_1_Base_Down: AnimSourceHidden{};
			class Level_1_Base_Up: AnimSourceHidden{};
			class Level_1_Metal_Down: AnimSourceHidden{};
			class Level_1_Metal_Up: AnimSourceHidden{};
			class Level_1_Wood_Down: AnimSourceHidden{};
			class Level_1_Wood_Up: AnimSourceHidden{};
		};
		class Construction{};
	};
	class BarbedWire: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BarbedWire0";
		descriptionShort = "$STR_CfgVehicles_BarbedWire1";
		model = "\dz\gear\camping\Barbed_wire.p3d";
		SingleUseActions[] = {525,526,527};
		ContinuousActions[] = {155};
		hiddenSelections[] = {"placing"};
		hiddenSelectionsTextures[] = {"dz\gear\camping\data\Barbed_wire_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\camping\data\Barbed_wire.rvmat"};
		hologramMaterial = "Barbed_wire";
		hologramMaterialPath = "dz\gear\camping\data";
		handheld = "true";
		armAction = "Disarm";
		barbedWireShockEnergyConsumption = 3;
		carveNavmesh = 1;
		itemSize[] = {3,3};
		weight = 400;
		inventorySlot[] = {"W_BarbWire_1_L","W_BarbWire_1_R","W_BarbWire_1_F"};
		lootTag[] = {"Farm","Work"};
		physLayer = "item_large";
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\Barbed_wire.rvmat"}},{0.5,{"DZ\gear\camping\data\Barbed_wire_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\Barbed_wire_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			switchOnAtSpawn = 1;
			cordLength = 6;
			powerSocketsCount = 2;
			plugType = 6;
			compatiblePlugTypes[] = {6};
			cordTextureFile = "DZ\gear\camping\Data\plug_black_CO.paa";
			energyUsagePerSecond = 0.01;
		};
		class AnimationSources
		{
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class zbytek
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class CamoNet: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CamoNet0";
		descriptionShort = "$STR_CfgVehicles_CamoNet1";
		model = "\dz\gear\camping\camo_net_p.p3d";
		handheld = "true";
		armAction = "Disarm";
		weight = 400;
		lootTag[] = {"Police","Military_east"};
		inventorySlot[] = {"CamoNet","W_CamoNet_1_L","W_CamoNet_1_R","W_CamoNet_1_F","W_CamoNet_2_L","W_CamoNet_2_R","W_CamoNet_2_F","W_CamoNet_3_L","W_CamoNet_3_R","W_CamoNet_3_F"};
		physLayer = "item_large";
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\camo_net_p.rvmat"}},{0.5,{"DZ\gear\camping\data\camo_net_p_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\camo_net_p_destruct.rvmat"}}};
				};
			};
		};
	};
	class SeaChest: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SeaChest0";
		descriptionShort = "$STR_CfgVehicles_SeaChest1";
		model = "\DZ\gear\camping\sea_chest.p3d";
		handheld = "true";
		weight = 10000;
		itemSize[] = {11,8};
		carveNavmesh = 1;
		canBeDigged = 1;
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\sea_chest.rvmat"}},{0.5,{"DZ\gear\camping\data\sea_chest_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\sea_chest_destruct.rvmat"}}};
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {10,17};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
	};
	class UndergroundStash: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_UndergroundStash0";
		model = "\DZ\gear\camping\underground_stash.p3d";
		canBeDigged = 1;
		class Cargo
		{
			itemsCargoSize[] = {20,20};
			openable = 1;
			allowOwnedCargoManipulation = 1;
		};
	};
	class Spotlight: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Spotlight0";
		descriptionShort = "$STR_CfgVehicles_Spotlight1";
		model = "\dz\gear\camping\spotlight.p3d";
		handheld = "true";
		armAction = "Disarm";
		SingleUseActions[] = {560,525,527};
		InteractActions[] = {1013,1014,1015,1016};
		ContinuousActions[] = {231};
		hiddenSelections[] = {"placing","cord_folded","cord_plugged","glass_unfolded"};
		hiddenSelectionsTextures[] = {"dz\gear\camping\data\spotlight_co.paa","dz\gear\camping\data\plug_yellow_co.paa","dz\gear\camping\data\plug_yellow_co.paa","dz\gear\camping\data\spotlight_glass_ca.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\camping\data\spotlight.rvmat","dz\gear\camping\data\plug.rvmat","dz\gear\camping\data\plug.rvmat","dz\gear\camping\data\spotlight_glass.rvmat"};
		hologramMaterial = "spotlight";
		hologramMaterialPath = "dz\gear\camping\data";
		weight = 1700;
		itemSize[] = {1,1};
		rotationFlags = 2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\spotlight.rvmat"}},{0.5,{"DZ\gear\camping\data\spotlight_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\spotlight_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.14;
			cordTextureFile = "DZ\gear\camping\Data\plug_yellow_CO.paa";
			cordLength = 3;
			plugType = 2;
		};
		class Reflectors
		{
			class Beam
			{
				color[] = {0.8,0.9,1.0,1.0};
				brightness = 1;
				radius = 30;
				angle = 120;
				angleInnerRatio = 0.25;
				dayLight = 1;
				position = "beamStart";
				direction = "beamTarget";
				hitpoint = "glass_unfolded";
				selection = "glass_unfolded";
			};
		};
		class AnimationSources
		{
			class cord_folded
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class cord_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class inventory
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class reflector
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class reflector_folded
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class reflector_unfolded
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class glass_folded
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class glass_unfolded
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class spotlight_folded_cord_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class spotlight_folded_cord_folded
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
	class XmasLights: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_XmasLights0";
		descriptionShort = "$STR_CfgVehicles_XmasLights1";
		model = "\dz\gear\camping\christmas_lights.p3d";
		hiddenSelections[] = {"glass_r","glass_g","glass_b","glass_y"};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		lootTag[] = {"Farm","Work"};
		weight = 150;
		inventorySlot[] = {"Lights","W_Lights_1_L","W_Lights_1_R","W_Lights_1_F","W_Lights_2_L","W_Lights_2_R","W_Lights_2_F","W_Lights_3_L","W_Lights_3_R","W_Lights_3_F"};
		rotationFlags = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\christmass_ligths.rvmat"}},{0.5,{"DZ\gear\camping\data\christmass_ligths_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\christmass_ligths_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			switchOnAtSpawn = 1;
			energyUsagePerSecond = 0.05;
			cordTextureFile = "DZ\gear\camping\Data\plug_yellow_CO.paa";
			cordLength = 5;
			plugType = 2;
		};
		class AnimationSources
		{
			class glass
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class glass_r
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class glass_g
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class glass_b
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class glass_y
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class christmas_lights
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class Refridgerator: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Refridgerator0";
		descriptionShort = "$STR_CfgVehicles_Refridgerator1";
		model = "\DZ\gear\containers\fridge.p3d";
		canBeDigged = 1;
		SingleUseActions[] = {525,527};
		InteractActions[] = {1013,1002,1003,1016};
		ContinuousActions[] = {155};
		weight = 1700;
		itemSize[] = {1,1};
		rotationFlags = 2;
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.1;
			cordTextureFile = "DZ\gear\camping\Data\plug_black_CO.paa";
			plugType = 2;
			cordLength = 5;
		};
		class Cargo
		{
			itemsCargoSize[] = {5,8};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
	};
	class PowerGenerator: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PowerGenerator0";
		descriptionShort = "$STR_CfgVehicles_PowerGenerator1";
		model = "\DZ\gear\camping\power_generator.p3d";
		rotationFlags = 2;
		SingleUseActions[] = {550,527};
		InteractActions[] = {1001,1011,1012};
		ContinuousActions[] = {155};
		weight = 45000;
		itemSize[] = {1,1};
		attachments[] = {"SparkPlug"};
		fuelTankCapacity = 7000;
		carveNavmesh = 1;
		hiddenSelections[] = {"socket_1_plugged","socket_2_plugged","socket_3_plugged","socket_4_plugged","sparkplug_installed","placing"};
		hiddenSelectionsTextures[] = {"dz\gear\camping\data\plug_black_CO.paa","dz\gear\camping\data\plug_yellow_CO.paa","dz\gear\camping\data\plug_white_CO.paa","dz\gear\camping\data\plug_orange_CO.paa","dz\gear\camping\data\power_generator_CO.paa","dz\gear\camping\data\power_generator_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\camping\data\plug.rvmat","dz\gear\camping\data\plug.rvmat","dz\gear\camping\data\plug.rvmat","dz\gear\camping\data\plug.rvmat","dz\gear\camping\data\power_generator.rvmat","dz\gear\camping\data\power_generator.rvmat"};
		hologramMaterial = "power_generator";
		hologramMaterialPath = "dz\gear\camping\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\power_generator.rvmat"}},{0.5,{"DZ\gear\camping\data\power_generator_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\power_generator_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyStorageMax = 10000;
			energyUsagePerSecond = 0.28;
			reduceMaxEnergyByDamageCoef = 0.5;
			energyAtSpawn = 5000;
			powerSocketsCount = 4;
			compatiblePlugTypes[] = {2,"PLUG_PAS_TERMINAL",6};
		};
		class AnimationSources
		{
			class socket_1_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class socket_2_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class socket_3_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class socket_4_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class sparkplug
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class fuel_tank
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class sparkplug_installed
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class dial_fuel
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		};
	};
	class CableReel: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CableReel0";
		descriptionShort = "$STR_CfgVehicles_CableReel1";
		model = "\dz\gear\camping\cable_reel.p3d";
		inventorySlot = "CableReel";
		weight = 5000;
		itemSize[] = {1,1};
		SingleUseActions[] = {560,525,550,527};
		InteractActions[] = {1001,1013,1016};
		ContinuousActions[] = {155};
		rotationFlags = 2;
		hiddenSelections[] = {"socket_1_plugged","cord_plugged","cord_folded","placing"};
		hiddenSelectionsTextures[] = {"dz\gear\camping\data\cable_reel_co.paa","dz\gear\camping\data\cable_reel_co.paa","dz\gear\camping\data\cable_reel_co.paa","dz\gear\camping\data\cable_reel_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\camping\data\cable_reel.rvmat","dz\gear\camping\data\cable_reel.rvmat","dz\gear\camping\data\cable_reel.rvmat","dz\gear\camping\data\cable_reel.rvmat"};
		hologramMaterial = "cable_reel";
		hologramMaterialPath = "dz\gear\camping\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\cable_reel.rvmat"}},{0.5,{"DZ\gear\camping\data\cable_reel_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\cable_reel_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			switchOnAtSpawn = 1;
			powerSocketsCount = 1;
			cordTextureFile = "DZ\gear\camping\Data\plug_orange_CO.paa";
			isPassiveDevice = 1;
			cordLength = 15;
			plugType = 2;
			compatiblePlugTypes[] = {2,6};
		};
		class AnimationSources
		{
			class cord_folded
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class cord_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class socket_1_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class BatteryCharger: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BatteryCharger0";
		descriptionShort = "$STR_CfgVehicles_BatteryCharger1";
		model = "\dz\gear\camping\battery_charger.p3d";
		attachments[] = {"CarBattery","TruckBattery"};
		weight = 5000;
		itemSize[] = {6,5};
		rotationFlags = 2;
		hiddenSelections[] = {"light_stand_by","light_charging","light_charged","switch_on","clips_detached","clips_folded","cord_plugged","cord_folded","placing"};
		hiddenSelectionsTextures[] = {"dz\gear\camping\data\battery_charger_co.paa","dz\gear\camping\data\battery_charger_co.paa","dz\gear\camping\data\battery_charger_co.paa","dz\gear\camping\data\battery_charger_co.paa","dz\gear\camping\data\battery_charger_co.paa","dz\gear\camping\data\battery_charger_co.paa","dz\gear\camping\data\battery_charger_co.paa","dz\gear\camping\data\battery_charger_co.paa","dz\gear\camping\data\battery_charger_co.paa","dz\gear\camping\data\battery_charger_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\camping\data\battery_charger.rvmat","dz\gear\camping\data\battery_charger.rvmat","dz\gear\camping\data\battery_charger.rvmat","dz\gear\camping\data\battery_charger.rvmat","dz\gear\camping\data\battery_charger.rvmat","dz\gear\camping\data\battery_charger.rvmat","dz\gear\camping\data\battery_charger.rvmat","dz\gear\camping\data\battery_charger.rvmat","dz\gear\camping\data\battery_charger.rvmat"};
		hologramMaterial = "battery_charger";
		hologramMaterialPath = "dz\gear\camping\data";
		SingleUseActions[] = {525,527};
		InteractActions[] = {1013,1002,1003};
		ContinuousActions[] = {155};
		ChargeEnergyPerSecond = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\battery_charger.rvmat"}},{0.5,{"DZ\gear\camping\data\battery_charger_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\battery_charger_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.01;
			cordTextureFile = "DZ\gear\camping\Data\plug_black_CO.paa";
			cordLength = 3;
			plugType = 2;
			compatiblePlugTypes[] = {4};
			powerSocketsCount = 1;
			attachmentAction = 2;
			wetnessExposure = 0.1;
		};
		class AnimationSources
		{
			class cord_folded
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class cord_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class clips_detached
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class clips_folded
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class switch_on
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class switch_off
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class clips_car_battery
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class clips_truck_battery
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class light_stand_by
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class light_charging
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class light_charged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class HescoBox: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_HescoBox0";
		descriptionShort = "$STR_CfgVehicles_HescoBox1";
		model = "\dz\gear\camping\hbox.p3d";
		weight = 5000;
		itemSize[] = {9,9};
		carveNavmesh = 1;
		SingleUseActions[] = {527};
		InteractActions[] = {1007};
		ContinuousActions[] = {231};
		hiddenSelections[] = {"placing"};
		hiddenSelectionsTextures[] = {"dz\gear\camping\data\hbox_filled_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\camping\data\hbox_filled.rvmat"};
		hologramMaterial = "hbox_empty";
		hologramMaterialPath = "dz\gear\camping\data";
		rotationFlags = 4;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\gear\camping\data\hbox_empty.rvmat","DZ\gear\camping\data\hbox_empty_damage.rvmat","DZ\gear\camping\data\hbox_empty_destruct.rvmat","DZ\gear\camping\data\hbox_filled.rvmat","DZ\gear\camping\data\hbox_filled_damage.rvmat","DZ\gear\camping\data\hbox_filled_destruct.rvmat"};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\camping\data\hbox_empty.rvmat","DZ\gear\camping\data\hbox_filled.rvmat"}},{0.5,{"DZ\gear\camping\data\hbox_empty_damage.rvmat","DZ\gear\camping\data\hbox_filled_damage.rvmat"}},{0.0,{"DZ\gear\camping\data\hbox_empty_destruct.rvmat","DZ\gear\camping\data\hbox_filled_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class inventory
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class filled
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
	class ProxyFencePart: ProxyAttachment
	{
		scope = 2;
		simulation = "ProxyInventory";
		autocenter = 0;
		animated = 0;
		shadow = 1;
		reversed = 0;
	};
	class Proxysingle_plank: ProxyFencePart
	{
		scope = 2;
		model = "\DZ\gear\consumables\single_plank.p3d";
		inventorySlot[] = {"PlanksG_Down","PlanksG_Up"};
	};
	class ProxySingle_Metal_Sheet: ProxyFencePart
	{
		scope = 2;
		model = "\DZ\gear\consumables\Single_Metal_Sheet.p3d";
		inventorySlot[] = {"PlatesG_Down","PlatesG_Up"};
	};
	class ProxyNails_loose_10: ProxyFencePart
	{
		scope = 2;
		model = "\DZ\gear\consumables\Nails_loose_10.p3d";
		inventorySlot[] = {"NailsG_Down","NailsG_Up"};
	};
	class Proxyw_camonet: ProxyFencePart
	{
		scope = 2;
		model = "\dz\gear\camping\w_camonet.p3d";
		inventorySlot[] = {"W_CamoNet_1_L","W_CamoNet_1_R","W_CamoNet_1_F","W_CamoNet_2_L","W_CamoNet_2_R","W_CamoNet_2_F","W_CamoNet_3_L","W_CamoNet_3_R","W_CamoNet_3_F"};
	};
	class Proxyw_barbwire: ProxyFencePart
	{
		scope = 2;
		model = "\dz\gear\camping\w_barbwire.p3d";
		inventorySlot[] = {"W_BarbWire_1_L","W_BarbWire_1_R","W_BarbWire_1_F"};
	};
	class Proxyw_lights: ProxyFencePart
	{
		scope = 2;
		model = "\dz\gear\camping\w_lights.p3d";
		inventorySlot[] = {"W_Lights_1_L","W_Lights_1_R","W_Lights_1_F","W_Lights_2_L","W_Lights_2_R","W_Lights_2_F","W_Lights_3_L","W_Lights_3_R","W_Lights_3_F"};
	};
	class Proxyw_metal_plates_down: ProxyFencePart
	{
		scope = 2;
		model = "\DZ\gear\camping\w_metal_plates_down.p3d";
		inventorySlot[] = {"MetalPlates"};
	};
	class Proxyw_metal_plates_up: ProxyFencePart
	{
		scope = 2;
		model = "\DZ\gear\camping\w_metal_plates_up.p3d";
		inventorySlot[] = {"MetalPlates"};
	};
	class Proxyw_wooden_planks_down: ProxyFencePart
	{
		scope = 2;
		model = "\DZ\gear\camping\w_wooden_planks_down.p3d";
		inventorySlot[] = {"WoodenPlanks"};
	};
	class Proxyw_wooden_planks_up: ProxyFencePart
	{
		scope = 2;
		model = "\DZ\gear\camping\w_wooden_planks_up.p3d";
		inventorySlot[] = {"WoodenPlanks"};
	};
	class Proxycable_reel
	{
		model = "DZ\gear\camping\cable_reel.p3d";
		inventorySlot = "CableReel";
		scope = 2;
		simulation = "ProxyInventory";
		autocenter = 0;
		animated = 0;
		shadow = 1;
		reversed = 1;
		class AnimationSources
		{
			class cord_folded
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class cord_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class socket_1_available
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class socket_1_plugged
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class dropped_plug_1
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
	};
};
//};

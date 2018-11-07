////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:11:34 2018 : 'file' last modified on Wed Aug 22 17:43:25 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_medical\config.bin{
class CfgPatches
{
	class DZ_Gear_Medical
	{
		units[] = {"Medical_DisinfectantSpray","Medical_Antibiotics","Medical_Bandage","Medical_Bloodbag","Medical_Defibrillator","Medical_Epinephrine","Medical_Morphine","Medical_Painkiller"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class RecipeToolOnTool;
class CfgRecipes
{
	class Craft_SalineBagIV
	{
		name = "Create Saline Bag IV";
		material[] = {"Medical_StartKit","Medical_SalineBag"};
		results[] = {"Medical_TransfusionKit"};
		action = "[_owner,_result1] call event_craftMessage;";
	};
	class ClearWatter
	{
		name = "Purify %TOOL1";
		tools[] = {"BottleBase","Medical_PurificationTablets"};
		action = "_tool2 addQuantity -1;[1,_tool1,'Cholera'] call event_modifier;if(quantity _tool2 == 0)then{deleteVehicle _tool2;};[_owner,'I have purified the water.','colorAction'] call fnc_playerMessage;";
	};
	class Craft_BloodBagIV
	{
		name = "Create Blood Bag IV";
		material[] = {"Medical_StartKit","Medical_BloodBag_Full"};
		results[] = {"Medical_BloodBag_IV"};
		action = "[_owner,_result1] call event_craftMessage;_result1 setVariable ['filledWith',_material2 getVariable 'filledWith'];";
	};
	class DisinfectItem: RecipeToolOnTool
	{
		name = "Spray %TOOL1 on %TOOL2";
		tools[] = {"Medical_DisinfectantSpray","InventoryBase"};
		action = "[0,[_tool1,_tool2],_name,_owner] spawn player_actionOnItem;";
		onComplete = "";
		sound = "";
		playerAction = "PlayerCraft";
		messages[] = {"The %1 is empty","colorStatusChannel","The %1 is broken","colorImportant","The %1 is broken","colorImportant","I have used a %1 on a %2","colorAction"};
		allowDead = 0;
		interactionWeight = 0.1;
		useQuantity = 0.1;
	};
	class FillSyringe: RecipeToolOnTool
	{
		name = "Fill %TOOL2 from %TOOL1";
		tools[] = {"Medical_InjectionVial","Medical_Syringe"};
		onComplete = "_person setVariable ['isUsingSomething',0]; _tool2 addQuantity -1; if (quantity _tool2 <= 0) then {deleteVehicle _tool2}; ['Medical_SyringeClear',_person] call player_addInventory;";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		sound = "";
		playerAction = "PlayerCraft";
		messages[] = {"The %1 is empty","colorStatusChannel","The %1 is broken","colorImportant","The %1 is broken","colorImportant","I have used a %1 on an %2","colorAction"};
		allowDead = 0;
		interactionWeight = 0.1;
		useQuantity = 0;
		unlimited = 1;
		keepEmpty = 0;
	};
	class SyringeTestBlood: RecipeToolOnTool
	{
		name = "Use %TOOL1 on %TOOL2";
		tools[] = {"Medical_BloodTest_Kit","Medical_SyringeBlood"};
		action = "[0,[_tool1,_tool2],_name,_owner] spawn player_actionOnItem;";
		condition = "true";
		onComplete = "[_person,format ['Blood type of %1 is %2',displayName _tool2,getText (configFile >> 'cfgSolutions' >> (_tool2 getVariable 'filledWith') >> 'displayName')],'colorAction'] call fnc_playerMessage;";
		sound = "";
		playerAction = "PlayerCraft";
		messages[] = {"The %1 is empty","colorStatusChannel","The %1 is broken","colorImportant","The %1 is broken","colorImportant","I have used a %1 on a %2","colorAction"};
		allowDead = 0;
		interactionWeight = 0.1;
		unlimited = 1;
		keepEmpty = 0;
		useQuantity = 0;
	};
	class BagTestBlood: RecipeToolOnTool
	{
		name = "Use %TOOL1 on %TOOL2";
		tools[] = {"Medical_BloodTest_Kit","Medical_BloodBag_Full"};
		action = "[0,[_tool1,_tool2],_name,_owner] spawn player_actionOnItem;";
		condition = "true";
		onComplete = "[_person,format ['Blood type of %1 is %2',displayName _tool2,getText (configFile >> 'cfgSolutions' >> (_tool2 getVariable 'filledWith') >> 'displayName')],'colorAction'] call fnc_playerMessage;";
		sound = "";
		playerAction = "PlayerCraft";
		messages[] = {"The %1 is empty","colorStatusChannel","The %1 is broken","colorImportant","The %1 is broken","colorImportant","I have used a %1 on a %2","colorAction"};
		allowDead = 0;
		interactionWeight = 0.1;
		unlimited = 1;
		keepEmpty = 0;
		useQuantity = 0;
	};
	class IVsetTestBlood: RecipeToolOnTool
	{
		name = "Use %TOOL1 on %TOOL2";
		tools[] = {"Medical_BloodTest_Kit","Medical_BloodBag_IV"};
		action = "[0,[_tool1,_tool2],_name,_owner] spawn player_actionOnItem;";
		condition = "true";
		onComplete = "[_person,format ['Blood type of %1 is %2',displayName _tool2,getText (configFile >> 'cfgSolutions' >> (_tool2 getVariable 'filledWith') >> 'displayName')],'colorAction'] call fnc_playerMessage;";
		sound = "";
		playerAction = "PlayerCraft";
		messages[] = {"The %1 is empty","colorStatusChannel","The %1 is broken","colorImportant","The %1 is broken","colorImportant","I have used a %1 on a %2","colorAction"};
		allowDead = 0;
		interactionWeight = 0.1;
		unlimited = 1;
		keepEmpty = 0;
		useQuantity = 0;
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class Edible_Base;
	class Bottle_Base;
	class BandageDressing: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BandageDressing0";
		descriptionShort = "$STR_CfgVehicles_BandageDressing1";
		model = "\dz\gear\medical\Bandage_dressing.p3d";
		ContinuousActions[] = {113,112};
		isMeleeWeapon = 1;
		varQuantityInit = 2;
		varQuantityMin = 0;
		varQuantityMax = 2;
		quantityBar = 1;
		varQuantityDestroyOnMin = 1;
		rotationFlags = 17;
		lootTag[] = {"Hygiene","Medic"};
		lootCategory = "Medical";
		weight = 115;
		inventorySlot = "MedicalBandage";
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\bandage.rvmat"}},{0.5,{"DZ\gear\medical\data\bandage_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\bandage_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Bandage_loop1
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 201;
				};
				class Bandage_loop2
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 202;
				};
				class Bandage_loop3
				{
					soundSet = "Bandage_loop_SoundSet";
					id = 203;
				};
				class Bandage_start
				{
					soundSet = "Bandage_start_SoundSet";
					id = 204;
				};
				class Bandage_end
				{
					soundSet = "Bandage_end_SoundSet";
					id = 205;
				};
			};
		};
	};
	class DisinfectantSpray: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_DisinfectantSpray0";
		descriptionShort = "$STR_CfgVehicles_DisinfectantSpray1";
		model = "\dz\gear\medical\DisinfectantSpray.p3d";
		SingleUseActions[] = {514,513};
		ContinuousActions[] = {162,115,114};
		inventorySlot = "Disinfectant";
		quantityBar = 1;
		weight = 50;
		stackedUnit = "ml";
		itemSize[] = {2,3};
		varLiquidTypeInit = 32768;
		lootCategory = "Medical";
		lootTag[] = {"Hygiene","Medic","Kitchen","Work","Farm"};
		varQuantityInit = 500;
		varQuantityMin = 0;
		varQuantityMax = 500;
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class disinfectant_loop
				{
					soundSet = "disinfectant_loop_SoundSet";
					id = 202;
				};
				class disinfectant_loop2
				{
					soundSet = "disinfectant_loop_SoundSet";
					id = 203;
				};
			};
		};
	};
	class DisinfectantAlcohol: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_DisinfectantAlcohol0";
		descriptionShort = "$STR_CfgVehicles_DisinfectantAlcohol1";
		model = "\dz\gear\medical\alfa.p3d";
		SingleUseActions[] = {514,513};
		ContinuousActions[] = {182,131,130};
		isMeleeWeapon = 1;
		weight = 50;
		itemSize[] = {1,3};
		varQuantityInit = 200;
		varQuantityMin = 0;
		varQuantityMax = 200;
		varQuantityDestroyOnMin = 1;
		varLiquidTypeInit = 32768;
		lootTag[] = {"Hygiene","Medic","Kitchen","Work","Farm"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\alfa.rvmat"}},{0.5,{"DZ\gear\medical\data\alfa_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\alfa_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class CleanWound_start
				{
					soundSet = "CleanWound_start_SoundSet";
					id = 201;
				};
				class CleanWound_loop
				{
					soundSet = "CleanWound_loop_SoundSet";
					id = 202;
				};
				class CleanWound_loop2
				{
					soundSet = "CleanWound_loop_SoundSet";
					id = 203;
				};
				class CleanWound_loop3
				{
					soundSet = "CleanWound_loop_SoundSet";
					id = 204;
				};
				class CleanWound_loop4
				{
					soundSet = "CleanWound_loop_SoundSet";
					id = 205;
				};
			};
		};
	};
	class PurificationTablets: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PurificationTablets0";
		descriptionShort = "$STR_CfgVehicles_PurificationTablets1";
		model = "\dz\gear\medical\Water_purification_tablets.p3d";
		SingleUseActions[] = {517,522};
		ContinuousActions[] = {122,127};
		rotationFlags = 17;
		varQuantityInit = 10;
		varQuantityMin = 0;
		varQuantityMax = 10;
		itemSize[] = {1,2};
		weight = 20;
		stackedUnit = "pills";
		absorbency = 0.7;
		lootTag[] = {"Hygiene","Medic","Kitchen","Farm","Prison"};
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\water_purification_tablets.rvmat"}},{0.5,{"DZ\gear\medical\data\water_purification_tablets_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\water_purification_tablets_destruct.rvmat"}}};
				};
			};
		};
	};
	class CharcoalTablets: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CharcoalTablets0";
		descriptionShort = "$STR_CfgVehicles_CharcoalTablets1";
		model = "\dz\gear\medical\charcoal_tablets.p3d";
		SingleUseActions[] = {519,524};
		ContinuousActions[] = {124,129};
		rotationFlags = 17;
		varQuantityInit = 12;
		varQuantityMin = 0;
		varQuantityMax = 12;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {1,2};
		weight = 20;
		stackedUnit = "pills";
		absorbency = 0.9;
		lootTag[] = {"Hygiene","Medic","Kitchen","Farm","Prison"};
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\charcoal_tablets.rvmat"}},{0.5,{"DZ\gear\medical\data\charcoal_tablets_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\charcoal_tablets_destruct.rvmat"}}};
				};
			};
		};
	};
	class PainkillerTablets: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PainkillerTablets0";
		descriptionShort = "$STR_CfgVehicles_PainkillerTablets1";
		model = "\dz\gear\medical\painkillers2.p3d";
		SingleUseActions[] = {518,523};
		ContinuousActions[] = {123,128};
		rotationFlags = 17;
		itemSize[] = {1,1};
		varQuantityInit = 12;
		varQuantityMin = 0;
		varQuantityMax = 12;
		varQuantityDestroyOnMin = 1;
		weight = 20;
		stackedUnit = "pills";
		absorbency = 0.7;
		lootTag[] = {"Hygiene","Medic","Prison","Civilian"};
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\painkiller2.rvmat"}},{0.5,{"DZ\gear\medical\data\painkiller2_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\painkiller2_destruct.rvmat"}}};
				};
			};
		};
	};
	class VitaminBottle: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_VitaminBottle0";
		descriptionShort = "$STR_CfgVehicles_VitaminBottle1";
		model = "\dz\gear\medical\VitaminBottle.p3d";
		SingleUseActions[] = {515,520};
		ContinuousActions[] = {120,125};
		varQuantityInit = 50;
		varQuantityMin = 0;
		varQuantityMax = 50;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {1,2};
		weight = 20;
		stackedUnit = "pills";
		lootCategory = "Medical";
		lootTag[] = {"Hygiene","Civilian"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\vitamin_bottle.rvmat"}},{0.5,{"DZ\gear\medical\data\vitamin_bottle_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\vitamin_bottle_destruct.rvmat"}}};
				};
			};
		};
		class Medicine
		{
			prevention = 0.75;
			treatment = 0.5;
			diseaseExit = 0;
		};
	};
	class TetracyclineAntibiotics: Edible_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TetracyclineAntibiotics0";
		descriptionShort = "$STR_CfgVehicles_TetracyclineAntibiotics1";
		model = "\dz\gear\medical\tetracycline.p3d";
		SingleUseActions[] = {516,521};
		ContinuousActions[] = {121,126};
		rotationFlags = 17;
		varQuantityInit = 12;
		varQuantityMin = 0;
		varQuantityMax = 12;
		varQuantityDestroyOnMin = 1;
		itemSize[] = {1,2};
		weight = 20;
		stackedUnit = "pills";
		absorbency = 0.7;
		lootTag[] = {"Hygiene","Medic"};
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\tetracycline.rvmat"}},{0.5,{"DZ\gear\medical\data\tetracycline_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\tetracycline_destruct.rvmat"}}};
				};
			};
		};
		class Medicine
		{
			prevention = 0;
			treatment = 0.9;
			diseaseExit = 1;
		};
	};
	class Epinephrine: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Epinephrine0";
		descriptionShort = "$STR_CfgVehicles_Epinephrine1";
		model = "\dz\gear\medical\Epinephrine.p3d";
		SingleUseActions[] = {568,567};
		rotationFlags = 17;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 1;
		itemSize[] = {1,2};
		weight = 60;
		lootTag[] = {"Medic"};
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\epipen.rvmat"}},{0.5,{"DZ\gear\medical\data\epipen_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\epipen_destruct.rvmat"}}};
				};
			};
		};
	};
	class Morphine: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Morphine0";
		descriptionShort = "$STR_CfgVehicles_Morphine1";
		model = "\dz\gear\medical\Morphine.p3d";
		SingleUseActions[] = {570,569};
		rotationFlags = 17;
		varQuantityInit = 1;
		varQuantityMin = 0;
		varQuantityMax = 1;
		itemSize[] = {1,2};
		weight = 60;
		lootTag[] = {"Medic"};
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\Morphine.rvmat"}},{0.5,{"DZ\gear\medical\data\Morphine_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\Morphine_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Morphine_spear
				{
					soundSet = "Morphine_spear_SoundSet";
					id = 201;
				};
				class Morphine_out
				{
					soundSet = "Morphine_out_SoundSet";
					id = 202;
				};
			};
		};
	};
	class Syringe: Epinephrine
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Syringe0";
		descriptionShort = "$STR_CfgVehicles_Syringe1";
		model = "\dz\gear\medical\syringe_empty.p3d";
		ContinuousActions[] = {145,144};
		rotationFlags = 17;
		itemSize[] = {2,1};
		weight = 130;
		stackedUnit = "ml";
		quantityBar = 1;
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varQuantityInit = 0.0;
		varQuantityMin = 0.0;
		varQuantityMax = 0.0;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
		lootTag[] = {"Hygiene","Medic","Prison"};
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\Syringe.rvmat"}},{0.5,{"DZ\gear\medical\data\Syringe_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\Syringe_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Syringe_out
				{
					soundSet = "Syringe_out_SoundSet";
					id = 201;
				};
				class Syringe_spear
				{
					soundSet = "Syringe_spear_SoundSet";
					id = 202;
				};
				class Syringe_splash
				{
					soundSet = "Syringe_splash_SoundSet";
					id = 203;
				};
			};
		};
	};
	class ClearSyringe: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ClearSyringe0";
		descriptionShort = "$STR_CfgVehicles_ClearSyringe1";
		model = "\dz\gear\medical\syringe_Full.p3d";
		rotationFlags = 17;
		weight = 110;
		itemSize[] = {2,1};
		lootCategory = "Medical";
		lootTag[] = {"Medic"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\Syringe.rvmat"}},{0.5,{"DZ\gear\medical\data\Syringe_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\Syringe_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Syringe_out
				{
					soundSet = "Syringe_out_SoundSet";
					id = 201;
				};
				class Syringe_spear
				{
					soundSet = "Syringe_spear_SoundSet";
					id = 202;
				};
				class Syringe_splash
				{
					soundSet = "Syringe_splash_SoundSet";
					id = 203;
				};
			};
		};
	};
	class BloodSyringe: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BloodSyringe0";
		descriptionShort = "$STR_CfgVehicles_BloodSyringe1";
		model = "\dz\gear\medical\syringe_Full.p3d";
		rotationFlags = 17;
		ContinuousActions[] = {143,142};
		weight = 20;
		stackedUnit = "ml";
		quantityBar = 1;
		varQuantityInit = 20;
		varQuantityMin = 0.0;
		varQuantityMax = 20;
		varLiquidTypeInit = 4;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
		itemSize[] = {2,1};
		lootCategory = "Medical";
		lootTag[] = {"Medic"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\dz\gear\medical\data\SyringeFluid_Blood_CO.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\Syringe.rvmat"}},{0.5,{"DZ\gear\medical\data\Syringe_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\Syringe_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Syringe_out
				{
					soundSet = "Syringe_out_SoundSet";
					id = 201;
				};
				class Syringe_spear
				{
					soundSet = "Syringe_spear_SoundSet";
					id = 202;
				};
				class Syringe_splash
				{
					soundSet = "Syringe_splash_SoundSet";
					id = 203;
				};
			};
		};
	};
	class InjectionVial: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_InjectionVial0";
		descriptionShort = "$STR_CfgVehicles_InjectionVial1";
		model = "\dz\gear\medical\InjectionVial.p3d";
		itemSize[] = {1,1};
		weight = 50;
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\InjectionVial.rvmat"}},{0.5,{"DZ\gear\medical\data\InjectionVial_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\InjectionVial_destruct.rvmat"}}};
				};
			};
		};
	};
	class SalineBag: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SalineBag0";
		descriptionShort = "$STR_CfgVehicles_SalineBag1";
		model = "\dz\gear\medical\SalineBag.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 100;
		stackedUnit = "ml";
		quantityBar = 1;
		varQuantityInit = 250.0;
		varQuantityMin = 0.0;
		varQuantityMax = 250.0;
		varLiquidTypeInit = 256;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
		isMeleeWeapon = 1;
		lootTag[] = {"Medic"};
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\Saline_Bag.rvmat"}},{0.5,{"DZ\gear\medical\data\Saline_Bag_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\Saline_Bag_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class BloodBag_start
				{
					soundSet = "BloodBag_start_SoundSet";
					id = 201;
				};
				class BloodBag_spear
				{
					soundSet = "BloodBag_spear_SoundSet";
					id = 202;
				};
				class BloodBag_loop
				{
					soundSet = "BloodBag_loop_SoundSet";
					id = 203;
				};
				class BloodBag_loop2
				{
					soundSet = "BloodBag_loop_SoundSet";
					id = 204;
				};
				class BloodBag_end
				{
					soundSet = "BloodBag_end_SoundSet";
					id = 205;
				};
			};
		};
	};
	class StartKitIV: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_StartKitIV0";
		descriptionShort = "$STR_CfgVehicles_StartKitIV1";
		model = "\dz\gear\medical\StartKit.p3d";
		itemSize[] = {2,2};
		rotationFlags = 17;
		weight = 100;
		lootTag[] = {"Medic"};
		lootCategory = "Medical";
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\start_kit.rvmat"}},{0.5,{"DZ\gear\medical\data\start_kit_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\start_kit_destruct.rvmat"}}};
				};
			};
		};
	};
	class SalineBagIV: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SalineBagIV0";
		descriptionShort = "$STR_CfgVehicles_SalineBagIV1";
		model = "\dz\gear\medical\TransfusionKit.p3d";
		ContinuousActions[] = {152,151};
		rotationFlags = 17;
		autoQuickbar = 1;
		itemSize[] = {2,2};
		weight = 360;
		quantityBar = 0;
		stackedUnit = "ml";
		varQuantityInit = 0.0;
		varQuantityMin = 0.0;
		varQuantityMax = 0.0;
		varQuantityDestroyOnMin = 1;
		varLiquidTypeInit = 256;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
		lootCategory = "Crafted";
		isMeleeWeapon = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\transfusion_kit.rvmat"}},{0.5,{"DZ\gear\medical\data\transfusion_kit_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\transfusion_kit_destruct.rvmat"}}};
				};
			};
		};
	};
	class BloodBagEmpty: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BloodBagEmpty0";
		descriptionShort = "$STR_CfgVehicles_BloodBagEmpty1";
		model = "\dz\gear\medical\BloodBag_Sealed.p3d";
		ContinuousActions[] = {141,140};
		itemSize[] = {2,2};
		weight = 100;
		rotationFlags = 17;
		autoQuickbar = 1;
		stackedUnit = "ml";
		quantityBar = 1;
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		varQuantityInit = 0.0;
		varQuantityMin = 0.0;
		varQuantityMax = 0.0;
		varLiquidTypeInit = 4;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
		lootTag[] = {"Medic"};
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\BloodBag_Sealed.rvmat"}},{0.5,{"DZ\gear\medical\data\BloodBag_Sealed_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\BloodBag_Sealed_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class BloodBag_start
				{
					soundSet = "BloodBag_start_SoundSet";
					id = 201;
				};
				class BloodBag_spear
				{
					soundSet = "BloodBag_spear_SoundSet";
					id = 202;
				};
				class BloodBag_loop
				{
					soundSet = "BloodBag_loop_SoundSet";
					id = 203;
				};
				class BloodBag_loop2
				{
					soundSet = "BloodBag_loop_SoundSet";
					id = 204;
				};
				class BloodBag_end
				{
					soundSet = "BloodBag_end_SoundSet";
					id = 205;
				};
			};
		};
	};
	class BloodBagFull: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BloodBagFull0";
		descriptionShort = "$STR_CfgVehicles_BloodBagFull1";
		model = "\dz\gear\medical\BloodBag_Full.p3d";
		rotationFlags = 17;
		itemSize[] = {2,2};
		weight = 100;
		stackedUnit = "ml";
		quantityBar = 1;
		varQuantityInit = 500.0;
		varQuantityMin = 0.0;
		varQuantityMax = 500.0;
		varLiquidTypeInit = 4;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
		lootCategory = "Crafted";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\BloodBag_Full.rvmat"}},{0.5,{"DZ\gear\medical\data\BloodBag_Full_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\BloodBag_Full_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class BloodBag_start
				{
					soundSet = "BloodBag_start_SoundSet";
					id = 201;
				};
				class BloodBag_spear
				{
					soundSet = "BloodBag_spear_SoundSet";
					id = 202;
				};
				class BloodBag_loop
				{
					soundSet = "BloodBag_loop_SoundSet";
					id = 203;
				};
				class BloodBag_loop2
				{
					soundSet = "BloodBag_loop_SoundSet";
					id = 204;
				};
				class BloodBag_end
				{
					soundSet = "BloodBag_end_SoundSet";
					id = 205;
				};
			};
		};
	};
	class BloodBagIV: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BloodBagIV0";
		descriptionShort = "$STR_CfgVehicles_BloodBagIV1";
		model = "\dz\gear\medical\BloodBag_Full_IV.p3d";
		ContinuousActions[] = {143,142};
		rotationFlags = 17;
		autoQuickbar = 1;
		itemSize[] = {2,2};
		weight = 110;
		quantityBar = 1;
		stackedUnit = "ml";
		varQuantityInit = 500.0;
		varQuantityMin = 0.0;
		varQuantityMax = 500.0;
		varQuantityDestroyOnMin = 1;
		varLiquidTypeInit = 4;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
		lootCategory = "Crafted";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\BloodBag_Full.rvmat"}},{0.5,{"DZ\gear\medical\data\BloodBag_Full_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\BloodBag_Full_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class BloodBag_start
				{
					soundSet = "BloodBag_start_SoundSet";
					id = 201;
				};
				class BloodBag_spear
				{
					soundSet = "BloodBag_spear_SoundSet";
					id = 202;
				};
				class BloodBag_loop
				{
					soundSet = "BloodBag_loop_SoundSet";
					id = 203;
				};
				class BloodBag_loop2
				{
					soundSet = "BloodBag_loop_SoundSet";
					id = 204;
				};
				class BloodBag_end
				{
					soundSet = "BloodBag_end_SoundSet";
					id = 205;
				};
			};
		};
	};
	class BloodTestKit: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BloodTestKit0";
		descriptionShort = "$STR_CfgVehicles_BloodTestKit1";
		model = "\dz\gear\medical\BloodTest_Kit.p3d";
		ContinuousActions[] = {139,138};
		itemSize[] = {2,2};
		rotationFlags = 17;
		autoQuickbar = 1;
		weight = 130;
		lootTag[] = {"Medic"};
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\BloodTest.rvmat"}},{0.5,{"DZ\gear\medical\data\BloodTest_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\BloodTest_destruct.rvmat"}}};
				};
			};
		};
	};
	class Splint: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Splint0";
		descriptionShort = "$STR_CfgVehicles_Splint1";
		model = "\dz\gear\medical\improvised_fixture.p3d";
		ContinuousActions[] = {137,136};
		rotationFlags = 17;
		itemSize[] = {2,4};
		weight = 540;
		absorbency = 0.3;
		lootCategory = "Crafted";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\improvised_fixture.rvmat"}},{0.5,{"DZ\gear\medical\data\improvised_fixture_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\improvised_fixture_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 1;
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.4;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.4;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 3.3;
			};
		};
	};
	class Thermometer: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Thermometer0";
		descriptionShort = "$STR_CfgVehicles_Thermometer1";
		model = "\dz\gear\medical\med_tmeter.p3d";
		ContinuousActions[] = {133,132};
		rotationFlags = 17;
		itemSize[] = {1,1};
		weight = 15;
		fragility = 0.5;
		lootTag[] = {"Hygiene","Civilian","Medic"};
		lootCategory = "Medical";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\med_tmeter.rvmat"}},{0.5,{"DZ\gear\medical\data\med_tmeter_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\med_tmeter_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 1;
			};
		};
	};
	class Defibrillator: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Defibrillator0";
		descriptionShort = "$STR_CfgVehicles_Defibrillator1";
		model = "\dz\gear\medical\Defibrillator.p3d";
		SingleUseActions[] = {509,510};
		ContinuousActions[] = {135,134};
		animClass = "NoFireClass";
		weight = 1200;
		itemSize[] = {4,3};
		defibChargeTime = 8.35;
		defibEnergyNeededPerCharge = 9;
		lootTag[] = {"Medic"};
		lootCategory = "Medical";
		absorbency = 0.3;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\defibrillator.rvmat"}},{0.5,{"DZ\gear\medical\data\defibrillator_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\defibrillator_destruct.rvmat"}}};
				};
			};
		};
		attachments[] = {"BatteryD"};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			plugType = 1;
			attachmentAction = 1;
			wetnessExposure = 0.5;
		};
	};
	class CigarettePack_ColorBase: Inventory_Base
	{
		displayName = "$STR_CfgVehicles_CigarettePack_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_CigarettePack_ColorBase1";
		model = "\dz\gear\medical\cigarette_pack.p3d";
		itemSize[] = {1,1};
		weight = 50;
		varQuantityInit = 20.0;
		varQuantityMin = 0.0;
		varQuantityMax = 20.0;
		absorbency = 0.7;
		lootTag[] = {"Hygiene","Civilian"};
		lootCategory = "Medical";
		hiddenSelections[] = {"camoGround","zbytek"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\medical\data\Pack_of_cigs.rvmat"}},{0.5,{"DZ\gear\medical\data\Pack_of_cigs_damage.rvmat"}},{0.0,{"DZ\gear\medical\data\Pack_of_cigs_destruct.rvmat"}}};
				};
			};
		};
		class Medicine
		{
			prevention = 0;
			treatment = 0.9;
			diseaseExit = 1;
		};
	};
	class CigarettePack_Chernamorka: CigarettePack_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CigarettePack_Chernamorka0";
		hiddenSelectionsTextures[] = {"DZ\gear\medical\Data\pack_of_cigs_cherno_co.paa","DZ\gear\medical\Data\pack_of_cigs_cherno_co.paa"};
	};
	class CigarettePack_Merkur: CigarettePack_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CigarettePack_Merkur0";
		hiddenSelectionsTextures[] = {"DZ\gear\medical\Data\pack_of_cigs_merkur_co.paa","DZ\gear\medical\Data\pack_of_cigs_merkur_co.paa"};
	};
	class CigarettePack_Partyzanka: CigarettePack_ColorBase
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CigarettePack_Partyzanka0";
		hiddenSelectionsTextures[] = {"DZ\gear\medical\Data\pack_of_cigs_partyzanka_co.paa","DZ\gear\medical\Data\pack_of_cigs_partyzanka_co.paa"};
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:03:40 2018 : 'file' last modified on Wed Aug 22 15:04:23 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\characters_backpacks\config.bin{
class CfgPatches
{
	class DZ_Characters_Backpacks
	{
		units[] = {"BagTaloon_Blue","BagTaloon_Green","BagTaloon_Orange","BagTaloon_Violet","BagCourierImprovised","BagCourierImprovisedFur","BagImprovised","BagImprovisedFur","BagHunting","BagMountain_Blue","BagMountain_Green","BagMountain_Orange","BagMountain_Red","BagChilds_Blue","BagChilds_Green","BagChilds_Red","GhillieBushragWoodland","GhillieTopWoodland","GhillieSuitWoodland","GhillieBushragTan","GhillieTopTan","GhillieSuitTan","GhillieBushragMossy","GhillieTopMossy","GhillieSuitMossy"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class cfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class TaloonBag_ColorBase: Clothing
	{
		displayName = "$STR_cfgVehicles_TaloonBag_ColorBase0";
		descriptionShort = "$STR_cfgVehicles_TaloonBag_ColorBase1";
		model = "\dz\characters\backpacks\taloon_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		weight = 1300;
		itemSize[] = {10,7};
		itemsCargoSize[] = {7,8};
		absorbency = 0.3;
		heatIsolation = 0.1;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		randomQuantity = 3;
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\taloon_m.p3d";
			female = "\DZ\characters\backpacks\taloon_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\taloon.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\taloon_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\taloon_destruct.rvmat"}}};
				};
			};
		};
	};
	class TaloonBag_Blue: TaloonBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_TaloonBag_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\Taloon_Blue_co.paa","DZ\characters\backpacks\data\Taloon_Blue_co.paa","DZ\characters\backpacks\data\Taloon_Blue_co.paa"};
	};
	class TaloonBag_Green: TaloonBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_TaloonBag_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\Taloon_Green_co.paa","DZ\characters\backpacks\data\Taloon_Green_co.paa","DZ\characters\backpacks\data\Taloon_Green_co.paa"};
	};
	class TaloonBag_Orange: TaloonBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_TaloonBag_Orange0";
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\Taloon_Orange_co.paa","DZ\characters\backpacks\data\Taloon_Orange_co.paa","DZ\characters\backpacks\data\Taloon_Orange_co.paa"};
	};
	class TaloonBag_Violet: TaloonBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_TaloonBag_Violet0";
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\Taloon_Violet_co.paa","DZ\characters\backpacks\data\Taloon_Violet_co.paa","DZ\characters\backpacks\data\Taloon_Violet_co.paa"};
	};
	class TortillaBag: Clothing
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_TortillaBag0";
		descriptionShort = "$STR_cfgVehicles_TortillaBag1";
		model = "\dz\characters\backpacks\tortilla_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {8,9};
		itemSize[] = {10,7};
		weight = 2100;
		absorbency = 0;
		heatIsolation = 0.08;
		visibilityModifier = 0.8;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_556x45","Ammo_762x54","Ammo_545x39","Ammo_762x54x39","Mag_FNX45_15Rnd","Mag_CLIP762x39_10Rnd","Mag_CMAG_10Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"FlashGrenade","RGD5Grenade","RDG2SmokeGrenade_Black","RDG2SmokeGrenade_White","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\tortilla_m.p3d";
			female = "\DZ\characters\backpacks\tortilla_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\tortila.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\tortila_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\tortila_destruct.rvmat"}}};
				};
			};
		};
	};
	class CourierBag: Clothing
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_CourierBag0";
		descriptionShort = "$STR_cfgVehicles_CourierBag1";
		model = "\dz\characters\backpacks\ImpCourierBag_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {4,6};
		itemSize[] = {5,5};
		weight = 900;
		absorbency = 0.6;
		heatIsolation = 0.02;
		visibilityModifier = 0.8;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ImpCourierBag_co.paa","\dz\characters\backpacks\data\ImpCourierBag_co.paa","\dz\characters\backpacks\data\ImpCourierBag_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\ImpCourierBag_m.p3d";
			female = "\DZ\characters\backpacks\ImpCourierBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\ImpCourierBag.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\ImpCourierBag_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\ImpCourierBag_destruct.rvmat"}}};
				};
			};
		};
	};
	class FurCourierBag: Clothing
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_FurCourierBag0";
		descriptionShort = "$STR_cfgVehicles_FurCourierBag1";
		model = "\dz\characters\backpacks\ImpCourierBagFur_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {8,4};
		itemSize[] = {8,4};
		weight = 1200;
		heatIsolation = 0.08;
		visibilityModifier = 0.8;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		canBeDigged = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ImpCourierBag_fur_co.paa","\dz\characters\backpacks\data\ImpCourierBag_fur_co.paa","\dz\characters\backpacks\data\ImpCourierBag_fur_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\ImpCourierBagFur_m.p3d";
			female = "\DZ\characters\backpacks\ImpCourierBagFur_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\ImpCourierBag_fur.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\ImpCourierBag_fur_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\ImpCourierBag_fur_destruct.rvmat"}}};
				};
			};
		};
	};
	class ImprovisedBag: Clothing
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_ImprovisedBag0";
		descriptionShort = "$STR_cfgVehicles_ImprovisedBag1";
		model = "\dz\characters\backpacks\bp_Improvised_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {8,7};
		itemSize[] = {9,6};
		weight = 2400;
		absorbency = 0.6;
		heatIsolation = 0.02;
		visibilityModifier = 0.7;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\bp_improvised_co.paa","\dz\characters\backpacks\data\bp_improvised_co.paa","\dz\characters\backpacks\data\bp_improvised_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\bp_Improvised_m.p3d";
			female = "\DZ\characters\backpacks\bp_Improvised_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\bp_improvised.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\bp_improvised_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\bp_improvised_destruct.rvmat"}}};
				};
			};
		};
	};
	class FurImprovisedBag: Clothing
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_FurImprovisedBag0";
		descriptionShort = "$STR_cfgVehicles_FurImprovisedBag1";
		model = "\dz\characters\backpacks\bp_Improvised_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {10,6};
		itemSize[] = {10,6};
		weight = 3300;
		absorbency = 0.05;
		heatIsolation = 0.12;
		visibilityModifier = 0.75;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		canBeDigged = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\bp_improvised_fur_co.paa","\dz\characters\backpacks\data\bp_improvised_fur_co.paa","\dz\characters\backpacks\data\bp_improvised_fur_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\characters\backpacks\data\bp_improvised_fur.rvmat","dz\characters\backpacks\data\bp_improvised_fur.rvmat","dz\characters\backpacks\data\bp_improvised_fur.rvmat"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\bp_Improvised_m.p3d";
			female = "\DZ\characters\backpacks\bp_Improvised_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\bp_improvised_fur.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\bp_improvised_fur_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\bp_improvised_fur_destruct.rvmat"}}};
				};
			};
		};
	};
	class DryBag_ColorBase: Clothing
	{
		displayName = "$STR_cfgVehicles_DryBag_ColorBase0";
		descriptionShort = "$STR_cfgVehicles_DryBag_ColorBase1";
		model = "\dz\characters\backpacks\drybag_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {8,9};
		itemSize[] = {8,9};
		weight = 600;
		absorbency = 0;
		heatIsolation = 1;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		canBeDigged = 1;
		randomQuantity = 4;
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\drybag_co.paa","\dz\characters\backpacks\data\drybag_co.paa","\dz\characters\backpacks\data\drybag_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\drybag_m.p3d";
			female = "\DZ\characters\backpacks\drybag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\dryBag.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\dryBag_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\dryBag_destruct.rvmat"}}};
				};
			};
		};
	};
	class DryBag_Orange: DryBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_DryBag_Orange0";
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\DryBag_Orange_co.paa","DZ\characters\backpacks\data\DryBag_Orange_co.paa","DZ\characters\backpacks\data\DryBag_Orange_co.paa"};
	};
	class DryBag_Yellow: DryBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_DryBag_Yellow0";
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\DryBag_Yellow_co.paa","DZ\characters\backpacks\data\DryBag_Yellow_co.paa","DZ\characters\backpacks\data\DryBag_Yellow_co.paa"};
	};
	class DryBag_Blue: DryBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_DryBag_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\DryBag_Blue_co.paa","DZ\characters\backpacks\data\DryBag_Blue_co.paa","DZ\characters\backpacks\data\DryBag_Blue_co.paa"};
	};
	class DryBag_Green: DryBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_DryBag_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\DryBag_Green_co.paa","DZ\characters\backpacks\data\DryBag_Green_co.paa","DZ\characters\backpacks\data\DryBag_Green_co.paa"};
	};
	class DryBag_Black: DryBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_DryBag_Black0";
		visibilityModifier = 0.8;
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\DryBag_black_co.paa","DZ\characters\backpacks\data\DryBag_black_co.paa","DZ\characters\backpacks\data\DryBag_black_co.paa"};
	};
	class DryBag_Red: DryBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_DryBag_Red0";
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\DryBag_Red_co.paa","DZ\characters\backpacks\data\DryBag_Red_co.paa","DZ\characters\backpacks\data\DryBag_Red_co.paa"};
	};
	class HuntingBag: Clothing
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_HuntingBag0";
		descriptionShort = "$STR_cfgVehicles_HuntingBag1";
		model = "\dz\characters\backpacks\hunting_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {10,8};
		itemSize[] = {10,8};
		weight = 1400;
		absorbency = 0.4;
		heatIsolation = 0.1;
		visibilityModifier = 0.8;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		randomQuantity = 4;
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Binoculars","Rangefinder","AmmoBox_308Win_20Rnd","Ammo_308Win","HuntingOptic","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\hunting_co.paa","\dz\characters\backpacks\data\hunting_co.paa","\dz\characters\backpacks\data\hunting_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\hunting_m.p3d";
			female = "\DZ\characters\backpacks\hunting_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\hunting.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\hunting_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\hunting_destruct.rvmat"}}};
				};
			};
		};
	};
	class MountainBag_ColorBase: Clothing
	{
		displayName = "$STR_cfgVehicles_MountainBag_ColorBase0";
		descriptionShort = "$STR_cfgVehicles_MountainBag_ColorBase1";
		model = "\dz\characters\backpacks\mountain_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {10,10};
		itemSize[] = {10,10};
		weight = 2300;
		absorbency = 0.2;
		heatIsolation = 0.13;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		randomQuantity = 4;
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\mountain_blue_co.paa","\dz\characters\backpacks\data\mountain_blue_co.paa","\dz\characters\backpacks\data\mountain_blue_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\mountain_m.p3d";
			female = "\DZ\characters\backpacks\mountain_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\mountain.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\mountain_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\mountain_destruct.rvmat"}}};
				};
			};
		};
	};
	class MountainBag_Red: MountainBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_MountainBag_Red0";
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\Mountain_Red_co.paa","DZ\characters\backpacks\data\Mountain_Red_co.paa","DZ\characters\backpacks\data\Mountain_Red_co.paa"};
	};
	class MountainBag_Blue: MountainBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_MountainBag_Blue0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\Mountain_Blue_co.paa","DZ\characters\backpacks\data\Mountain_Blue_co.paa","DZ\characters\backpacks\data\Mountain_Blue_co.paa"};
	};
	class MountainBag_Orange: MountainBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_MountainBag_Orange0";
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\Mountain_Orange_co.paa","DZ\characters\backpacks\data\Mountain_Orange_co.paa","DZ\characters\backpacks\data\Mountain_Orange_co.paa"};
	};
	class MountainBag_Green: MountainBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_MountainBag_Green0";
		visibilityModifier = 0.85;
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\Mountain_Green_co.paa","DZ\characters\backpacks\data\Mountain_Green_co.paa","DZ\characters\backpacks\data\Mountain_Green_co.paa"};
	};
	class SmershBag: Clothing
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_SmershBag0";
		descriptionShort = "$STR_cfgVehicles_SmershBag1";
		model = "\dz\characters\backpacks\SmershBag_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {6,4};
		itemSize[] = {8,3};
		weight = 600;
		absorbency = 0.3;
		heatIsolation = 0.1;
		visibilityModifier = 0.75;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		randomQuantity = 1;
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_556x45","Ammo_762x54","Ammo_545x39","Ammo_762x54x39","Mag_FNX45_15Rnd","Mag_CLIP762x39_10Rnd","Mag_CMAG_10Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"FlashGrenade","RGD5Grenade","RDG2SmokeGrenade_Black","RDG2SmokeGrenade_White","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\smersh_co.paa","\dz\characters\vests\data\smersh_co.paa","\dz\characters\vests\data\smersh_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\SmershBag_m.p3d";
			female = "\DZ\characters\backpacks\SmershBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\Smersh.rvmat","DZ\Characters\backpacks\data\Smersh_g.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\Smersh_damage.rvmat","DZ\Characters\backpacks\data\Smersh_g_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\Smersh_destruct.rvmat","DZ\Characters\backpacks\data\Smersh_g_destruct.rvmat"}}};
				};
			};
		};
	};
	class ChildBag_ColorBase: Clothing
	{
		displayName = "$STR_cfgVehicles_ChildBag_ColorBase0";
		descriptionShort = "$STR_cfgVehicles_ChildBag_ColorBase1";
		model = "\dz\characters\backpacks\childs_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {7,5};
		itemSize[] = {8,4};
		weight = 1850;
		absorbency = 0.1;
		heatIsolation = 0.5;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		randomQuantity = 2;
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_357","Ammo_380","Ammo_9x19","Ammo_22","Ammo_12gaPellets","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\childs_red_co.paa","\dz\characters\backpacks\data\childs_red_co.paa","\dz\characters\backpacks\data\childs_red_co.paa"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\childs_m.p3d";
			female = "\DZ\characters\backpacks\childs_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\childs.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\childs_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\childs_destruct.rvmat"}}};
				};
			};
		};
	};
	class ChildBag_Green: ChildBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_ChildBag_Green0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\childs_green_co.paa","DZ\characters\backpacks\data\childs_green_co.paa","DZ\characters\backpacks\data\childs_green_co.paa"};
	};
	class ChildBag_Red: ChildBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_ChildBag_Red0";
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\childs_Red_co.paa","DZ\characters\backpacks\data\childs_Red_co.paa","DZ\characters\backpacks\data\childs_Red_co.paa"};
	};
	class ChildBag_Blue: ChildBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_ChildBag_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"DZ\characters\backpacks\data\childs_Blue_co.paa","DZ\characters\backpacks\data\childs_Blue_co.paa","DZ\characters\backpacks\data\childs_Blue_co.paa"};
	};
	class GhillieBushrag_ColorBase: Clothing
	{
		descriptionShort = "$STR_cfgVehicles_GhillieBushrag_ColorBase0";
		model = "\dz\characters\backpacks\GhillieBushrag_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemSize[] = {5,7};
		weight = 700;
		absorbency = 1;
		heatIsolation = 10;
		hiddenSelections[] = {"camo","camo_backlight"};
		hiddenSelectionsMaterials[] = {"dz\characters\backpacks\data\ghillie.rvmat","dz\characters\backpacks\data\ghillie_backlit.rvmat"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\GhillieBushrag_m.p3d";
			female = "\DZ\characters\backpacks\GhillieBushrag_m.p3d";
		};
	};
	class GhillieBushrag_Tan: GhillieBushrag_ColorBase
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_GhillieBushrag_Tan0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_tan_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_tan_co.paa","DZ\characters\backpacks\data\ghillie_tan_damage_co.paa","DZ\characters\backpacks\data\ghillie_tan_destruct_co.paa"};
			mat[] = {};
		};
	};
	class GhillieBushrag_Woodland: GhillieBushrag_ColorBase
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_GhillieBushrag_Woodland0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_green_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_green_co.paa","DZ\characters\backpacks\data\ghillie_green_damage_co.paa","DZ\characters\backpacks\data\ghillie_green_destruct_co.paa"};
			mat[] = {};
		};
	};
	class GhillieBushrag_Mossy: GhillieBushrag_ColorBase
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_GhillieBushrag_Mossy0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_mossy_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_mossy_co.paa","DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa","DZ\characters\backpacks\data\ghillie_mossy_destruct_co.paa"};
			mat[] = {};
		};
	};
	class GhillieTop_ColorBase: Clothing
	{
		descriptionShort = "$STR_cfgVehicles_GhillieTop_ColorBase0";
		model = "\dz\characters\backpacks\GhillieBushrag_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		lootCategory = "Crafted";
		rotationFlags = 16;
		itemSize[] = {7,7};
		weight = 800;
		absorbency = 1;
		heatIsolation = 25;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camo","camo_backlight"};
		hiddenSelectionsMaterials[] = {"dz\characters\backpacks\data\ghillie.rvmat","dz\characters\backpacks\data\ghillie_backlit.rvmat"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\GhillieTop_m.p3d";
			female = "\DZ\characters\backpacks\GhillieTop_m.p3d";
		};
	};
	class GhillieTop_Tan: GhillieTop_ColorBase
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_GhillieTop_Tan0";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_tan_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_tan_co.paa","DZ\characters\backpacks\data\ghillie_tan_damage_co.paa","DZ\characters\backpacks\data\ghillie_tan_destruct_co.paa"};
			mat[] = {};
		};
	};
	class GhillieTop_Woodland: GhillieTop_ColorBase
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_GhillieTop_Woodland0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_green_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_green_co.paa","DZ\characters\backpacks\data\ghillie_green_damage_co.paa","DZ\characters\backpacks\data\ghillie_green_destruct_co.paa"};
			mat[] = {};
		};
	};
	class GhillieTop_Mossy: GhillieTop_ColorBase
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_GhillieTop_Mossy0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_mossy_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_mossy_co.paa","DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa","DZ\characters\backpacks\data\ghillie_mossy_destruct_co.paa"};
			mat[] = {};
		};
	};
	class GhillieSuit_ColorBase: Clothing
	{
		descriptionShort = "$STR_cfgVehicles_GhillieSuit_ColorBase0";
		model = "\dz\characters\backpacks\GhillieBushrag_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		lootCategory = "Crafted";
		rotationFlags = 16;
		itemSize[] = {7,8};
		weight = 3200;
		absorbency = 1;
		heatIsolation = 16;
		hiddenSelections[] = {"camo","camo_backlight"};
		hiddenSelectionsMaterials[] = {"dz\characters\backpacks\data\ghillie.rvmat","dz\characters\backpacks\data\ghillie_backlit.rvmat"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\GhillieSuit_m.p3d";
			female = "\DZ\characters\backpacks\GhillieSuit_m.p3d";
		};
	};
	class GhillieSuit_Tan: GhillieSuit_ColorBase
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_GhillieSuit_Tan0";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_tan_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_tan_co.paa","DZ\characters\backpacks\data\ghillie_tan_damage_co.paa","DZ\characters\backpacks\data\ghillie_tan_destruct_co.paa"};
			mat[] = {};
		};
	};
	class GhillieSuit_Woodland: GhillieSuit_ColorBase
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_GhillieSuit_Woodland0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_green_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_green_co.paa","DZ\characters\backpacks\data\ghillie_green_damage_co.paa","DZ\characters\backpacks\data\ghillie_green_destruct_co.paa"};
			mat[] = {};
		};
	};
	class GhillieSuit_Mossy: GhillieSuit_ColorBase
	{
		scope = 2;
		displayName = "$STR_cfgVehicles_GhillieSuit_Mossy0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\ghillie_mossy_co.paa"};
		class Damage
		{
			tex[] = {"DZ\characters\backpacks\data\ghillie_mossy_co.paa","DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa","DZ\characters\backpacks\data\ghillie_mossy_destruct_co.paa"};
			mat[] = {};
		};
	};
	class LeatherSack_ColorBase: Clothing
	{
		displayName = "$STR_cfgVehicles_LeatherSack_ColorBase0";
		descriptionShort = "$STR_cfgVehicles_LeatherSack_ColorBase1";
		model = "\dz\characters\backpacks\Bag_LeatherSack_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		lootCategory = "Crafted";
		rotationFlags = 2;
		itemsCargoSize[] = {10,6};
		itemSize[] = {10,6};
		weight = 1300;
		absorbency = 0.6;
		heatIsolation = 0.1;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		canBeDigged = 1;
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\Bag_LeatherSack_m.p3d";
			female = "\DZ\characters\backpacks\Bag_LeatherSack_f.p3d";
		};
	};
	class LeatherSack_Natural: LeatherSack_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_LeatherSack_Natural0";
		color = "Natural";
		visibilityModifier = 0.75;
		hiddenSelectionsMaterials[] = {"dz\characters\backpacks\data\Bag_LeatherSack_natural.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_natural.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_natural.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\characters\backpacks\data\Bag_LeatherSack_natural.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_natural_damage.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_natural_destruct.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_g_natural.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_g_natural_damage.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_g_natural_destruct.rvmat"};
		};
	};
	class LeatherSack_Black: LeatherSack_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_LeatherSack_Black0";
		color = "Black";
		visibilityModifier = 0.8;
		hiddenSelectionsMaterials[] = {"dz\characters\backpacks\data\Bag_LeatherSack_Black.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_Black.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_Black.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\characters\backpacks\data\Bag_LeatherSack_natural.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_Black_damage.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_Black_destruct.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_g_natural.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_g_Black_damage.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_g_Black_destruct.rvmat"};
		};
	};
	class LeatherSack_Beige: LeatherSack_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_LeatherSack_Beige0";
		color = "Beige";
		visibilityModifier = 0.85;
		hiddenSelectionsMaterials[] = {"dz\characters\backpacks\data\bag_leatherSack_beige.rvmat","dz\characters\backpacks\data\bag_leatherSack_beige.rvmat","dz\characters\backpacks\data\bag_leatherSack_beige.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\characters\backpacks\data\bag_leatherSack_natural.rvmat","dz\characters\backpacks\data\bag_leatherSack_beige_damage.rvmat","dz\characters\backpacks\data\bag_leatherSack_beige_destruct.rvmat","dz\characters\backpacks\data\bag_leatherSack_g_natural.rvmat","dz\characters\backpacks\data\bag_leatherSack_g_beige_damage.rvmat","dz\characters\backpacks\data\bag_leatherSack_g_beige_destruct.rvmat"};
		};
	};
	class LeatherSack_Brown: LeatherSack_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_LeatherSack_Brown0";
		color = "Brown";
		visibilityModifier = 0.8;
		hiddenSelectionsMaterials[] = {"dz\characters\backpacks\data\Bag_LeatherSack_Brown.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_Brown.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_Brown.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"dz\characters\backpacks\data\Bag_LeatherSack_natural.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_Brown_damage.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_Brown_destruct.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_g_natural.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_g_Brown_damage.rvmat","dz\characters\backpacks\data\Bag_LeatherSack_g_Brown_destruct.rvmat"};
		};
	};
	class AssaultBag_ColorBase: Clothing
	{
		displayName = "$STR_cfgVehicles_AssaultBag_ColorBase0";
		descriptionShort = "$STR_cfgVehicles_AssaultBag_ColorBase1";
		model = "\dz\characters\backpacks\boulder_m53_g.p3d";
		inventorySlot = "Back";
		simulation = "clothing";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {10,9};
		itemSize[] = {10,9};
		weight = 900;
		absorbency = 0.4;
		heatIsolation = 0.1;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		randomQuantity = 4;
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_556x45","Ammo_762x54","Ammo_545x39","Ammo_762x54x39","Mag_FNX45_15Rnd","Mag_CLIP762x39_10Rnd","Mag_CMAG_10Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"FlashGrenade","RGD5Grenade","RDG2SmokeGrenade_Black","RDG2SmokeGrenade_White","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\boulder_m53_m.p3d";
			female = "\DZ\characters\backpacks\boulder_m53_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\boulder_m53.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\boulder_m53_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\boulder_m53_destruct.rvmat"}}};
				};
			};
		};
	};
	class AssaultBag_Ttsko: AssaultBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AssaultBag_Ttsko0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\boulder_m53_ttsko_co.paa","\dz\characters\backpacks\data\boulder_m53_ttsko_co.paa","\dz\characters\backpacks\data\boulder_m53_ttsko_co.paa"};
	};
	class AssaultBag_Black: AssaultBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AssaultBag_Black0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\boulder_m53_black_co.paa","\dz\characters\backpacks\data\boulder_m53_black_co.paa","\dz\characters\backpacks\data\boulder_m53_black_co.paa"};
	};
	class AssaultBag_Green: AssaultBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AssaultBag_Green0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\boulder_m53_green_co.paa","\dz\characters\backpacks\data\boulder_m53_green_co.paa","\dz\characters\backpacks\data\boulder_m53_green_co.paa"};
	};
	class CoyoteBag_ColorBase: Clothing
	{
		displayName = "$STR_cfgVehicles_CoyoteBag_ColorBase0";
		descriptionShort = "$STR_cfgVehicles_CoyoteBag_ColorBase1";
		model = "\dz\characters\backpacks\CoyotesBP_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {10,10};
		itemSize[] = {10,10};
		weight = 2600;
		absorbency = 0.2;
		heatIsolation = 0.1;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		randomQuantity = 4;
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_556x45","Ammo_762x54","Ammo_545x39","Ammo_762x54x39","Mag_FNX45_15Rnd","Mag_CLIP762x39_10Rnd","Mag_CMAG_10Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"FlashGrenade","RGD5Grenade","RDG2SmokeGrenade_Black","RDG2SmokeGrenade_White","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\CoyotesBP_m.p3d";
			female = "\DZ\characters\backpacks\CoyotesBP_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\CoyotesBP.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\CoyotesBP_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\CoyotesBP_destruct.rvmat"}}};
				};
			};
		};
	};
	class CoyoteBag_Brown: CoyoteBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_CoyoteBag_Brown0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\CoyoteBP_co.paa","\dz\characters\backpacks\data\CoyoteBP_co.paa","\dz\characters\backpacks\data\CoyoteBP_co.paa"};
	};
	class CoyoteBag_Green: CoyoteBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_CoyoteBag_Green0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\CoyoteBP_green_co.paa","\dz\characters\backpacks\data\CoyoteBP_green_co.paa","\dz\characters\backpacks\data\CoyoteBP_green_co.paa"};
	};
	class AliceBag_ColorBase: Clothing
	{
		displayName = "$STR_cfgVehicles_AliceBag_ColorBase0";
		descriptionShort = "$STR_cfgVehicles_AliceBag_ColorBase1";
		model = "\dz\characters\backpacks\alicebackpack_g.p3d";
		inventorySlot = "Back";
		itemInfo[] = {"Clothing","Back"};
		rotationFlags = 16;
		itemsCargoSize[] = {10,11};
		itemSize[] = {10,11};
		weight = 1600;
		absorbency = 0.1;
		heatIsolation = 0.1;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		randomQuantity = 4;
		itemsRandom[] = {{"SodaCan_Cola","SodaCan_Pipsi","SodaCan_Spite","BakedBeansCan","PeachesCan","SardinesCan","SpaghettiCan","TunaCan","PowderedMilk","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"CanOpener","Heatpack","Lockpick","SewingKit","Rag","Matchbox","Hook","Compass","Battery9V","DuctTape","Rope","Pen_Black","Pen_Blue","Pen_Green","Pen_Red","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Ammo_556x45","Ammo_762x54","Ammo_545x39","Ammo_762x54x39","Mag_FNX45_15Rnd","Mag_CLIP762x39_10Rnd","Mag_CMAG_10Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"FlashGrenade","RGD5Grenade","RDG2SmokeGrenade_Black","RDG2SmokeGrenade_White","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "\DZ\characters\backpacks\alicebackpack_m.p3d";
			female = "\DZ\characters\backpacks\alicebackpack_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\Characters\backpacks\data\Alice_backpack.rvmat"}},{0.5,{"DZ\Characters\backpacks\data\Alice_backpack_damage.rvmat"}},{0.0,{"DZ\Characters\backpacks\data\Alice_backpack_destruct.rvmat"}}};
				};
			};
		};
	};
	class AliceBag_Green: AliceBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AliceBag_Green0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\alicebackpack_co.paa","\dz\characters\backpacks\data\alicebackpack_co.paa","\dz\characters\backpacks\data\alicebackpack_co.paa"};
	};
	class AliceBag_Black: AliceBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AliceBag_Black0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\alicebackpack_black_co.paa","\dz\characters\backpacks\data\alicebackpack_black_co.paa","\dz\characters\backpacks\data\alicebackpack_black_co.paa"};
	};
	class AliceBag_Camo: AliceBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_cfgVehicles_AliceBag_Camo0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\backpacks\data\alicebackpack_camo_co.paa","\dz\characters\backpacks\data\alicebackpack_camo_co.paa","\dz\characters\backpacks\data\alicebackpack_camo_co.paa"};
	};
};
//};

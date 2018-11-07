////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:04:09 2018 : 'file' last modified on Wed Aug 22 16:22:11 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\characters_vests\config.bin{
class CfgPatches
{
	class DZ_Characters_Vests
	{
		units[] = {"TacticalVest","UKAssVest"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class PlateCarrierBlank: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PlateCarrierBlank0";
		descriptionShort = "$STR_CfgVehicles_PlateCarrierBlank1";
		model = "\DZ\characters\vests\plate_carrier_g.p3d";
		inventorySlot = "Vest";
		itemInfo[] = {"Clothing","Vest"};
		attachments[] = {"VestHolster","VestPouch"};
		weight = 12000;
		itemSize[] = {7,5};
		absorbency = 0.1;
		heatIsolation = 2;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\BallisticVest.rvmat","DZ\characters\vests\data\BallisticVest_damage.rvmat","DZ\characters\vests\data\BallisticVest_destruct.rvmat"};
		};
		class DamageArmor
		{
			ballistic = 2;
			bleed = 0.9;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\plate_carrier_m.p3d";
			female = "\DZ\characters\vests\plate_carrier_f.p3d";
		};
	};
	class PlateCarrierHolster: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PlateCarrierHolster0";
		descriptionShort = "$STR_CfgVehicles_PlateCarrierHolster1";
		model = "\DZ\characters\vests\plate_carrier_only_holster_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		ContinuousActions[] = {216};
		weight = 12100;
		itemSize[] = {7,5};
		quickBarBonus = 1;
		absorbency = 0.3;
		heatIsolation = 2;
		lootTag[] = {"Military_east","Military_west"};
		lootCategory = "Tops";
		attachments[] = {"Pistol"};
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\BallisticVest.rvmat","DZ\characters\vests\data\BallisticVest_damage.rvmat","DZ\characters\vests\data\BallisticVest_destruct.rvmat"};
		};
		class DamageArmor
		{
			ballistic = 2;
			bleed = 0.9;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\plate_carrier_only_holster_m.p3d";
			female = "\DZ\characters\vests\plate_carrier_only_holster_f.p3d";
		};
	};
	class PlateCarrierPouches: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PlateCarrierPouches0";
		descriptionShort = "$STR_CfgVehicles_PlateCarrierPouches1";
		model = "\DZ\characters\vests\plate_carrier_only_pouches_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		ContinuousActions[] = {216};
		weight = 12200;
		itemSize[] = {7,6};
		itemsCargoSize[] = {6,4};
		quickBarBonus = 3;
		absorbency = 0.3;
		heatIsolation = 2;
		lootTag[] = {"Military_east","Military_west"};
		lootCategory = "Tops";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\BallisticVest.rvmat","DZ\characters\vests\data\BallisticVest_damage.rvmat","DZ\characters\vests\data\BallisticVest_destruct.rvmat"};
		};
		class DamageArmor
		{
			ballistic = 2;
			bleed = 0.9;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\plate_carrier_only_pouches_m.p3d";
			female = "\DZ\characters\vests\plate_carrier_only_pouches_f.p3d";
		};
	};
	class PlateCarrierComplete: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PlateCarrierComplete0";
		descriptionShort = "$STR_CfgVehicles_PlateCarrierComplete1";
		model = "\DZ\characters\vests\plate_carrier_complete_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		ContinuousActions[] = {216};
		weight = 12300;
		itemSize[] = {7,7};
		itemsCargoSize[] = {6,4};
		quickBarBonus = 3;
		absorbency = 0.3;
		heatIsolation = 2;
		lootTag[] = {"Military_east","Military_west"};
		lootCategory = "Tops";
		attachments[] = {"Pistol"};
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\BallisticVest.rvmat","DZ\characters\vests\data\BallisticVest_damage.rvmat","DZ\characters\vests\data\BallisticVest_destruct.rvmat"};
		};
		class DamageArmor
		{
			ballistic = 2;
			bleed = 0.9;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\plate_carrier_complete_m.p3d";
			female = "\DZ\characters\vests\plate_carrier_complete_f.p3d";
		};
	};
	class PlateCarrierComplete2: Clothing
	{
		scope = 2;
		displayName = "TEST, do not report";
		descriptionShort = "Testing item, do not report";
		model = "\DZ\characters\vests\plate_carrier_complete2_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		attachments[] = {"VestHolster","VestPouch"};
		weight = 12000;
		itemSize[] = {7,7};
		quickBarBonus = 3;
		absorbency = 0.3;
		heatIsolation = 2;
		lootTag[] = {"Military_east","Military_west"};
		lootCategory = "Tops";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoMale","camoFemale","vestholster","vestpouch"};
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\ballisticvest_co.paa","\dz\characters\vests\data\ballisticvest_co.paa","\dz\characters\vests\data\ballisticvest_co.paa","\dz\characters\vests\data\ballisticvest_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\BallisticVest.rvmat","DZ\characters\vests\data\BallisticVest_damage.rvmat","DZ\characters\vests\data\BallisticVest_destruct.rvmat"};
		};
		class DamageArmor
		{
			ballistic = 2;
			bleed = 0.9;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\plate_carrier_complete2_m.p3d";
			female = "\DZ\characters\vests\plate_carrier_complete2_f.p3d";
		};
	};
	class SmershVest: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SmershVest0";
		descriptionShort = "$STR_CfgVehicles_SmershVest1";
		model = "\DZ\characters\vests\smersh_light_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 220;
		itemSize[] = {7,5};
		itemsCargoSize[] = {6,4};
		quickBarBonus = 3;
		absorbency = 0.3;
		heatIsolation = 2;
		visibilityModifier = 0.7;
		lootTag[] = {"Military_east","Military_west"};
		lootCategory = "Vests";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\smersh_co.paa","\dz\characters\vests\data\smersh_co.paa","\dz\characters\vests\data\smersh_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\Smersh.rvmat","DZ\characters\vests\data\Smersh_damage.rvmat","DZ\characters\vests\data\Smersh_destruct.rvmat"};
		};
		class DamageArmor
		{
			biological = 1;
			bleed = 0.3;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\smersh_light_m.p3d";
			female = "\DZ\characters\vests\smersh_light_f.p3d";
		};
	};
	class SmershVestBackpack: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SmershVestBackpack0";
		descriptionShort = "$STR_CfgVehicles_SmershVestBackpack1";
		model = "\DZ\characters\vests\smersh_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 1200;
		itemSize[] = {7,7};
		itemsCargoSize[] = {7,7};
		quickBarBonus = 3;
		absorbency = 0.2;
		heatIsolation = 2;
		visibilityModifier = 0.7;
		lootTag[] = {"Military_east","Military_west"};
		lootCategory = "Vests";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\smersh_co.paa","\dz\characters\vests\data\smersh_co.paa","\dz\characters\vests\data\smersh_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\Smersh.rvmat","DZ\characters\vests\data\Smersh_damage.rvmat","DZ\characters\vests\data\Smersh_destruct.rvmat","DZ\characters\vests\data\Smersh_g.rvmat","DZ\characters\vests\data\Smersh_g_damage.rvmat","DZ\characters\vests\data\Smersh_g_destruct.rvmat"};
		};
		class DamageArmor
		{
			biological = 1;
			bleed = 0.3;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\smersh_m.p3d";
			female = "\DZ\characters\vests\smersh_f.p3d";
		};
	};
	class BallisticVest: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BallisticVest0";
		descriptionShort = "$STR_CfgVehicles_BallisticVest1";
		model = "\DZ\characters\vests\plate_carrier_g.p3d";
		inventorySlot = "Vest";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 14100;
		itemSize[] = {7,5};
		absorbency = 0.1;
		heatIsolation = 2;
		visibilityModifier = 0.7;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\ballisticvest_co.paa","\dz\characters\vests\data\ballisticvest_co.paa","\dz\characters\vests\data\ballisticvest_co.paa"};
		class DamageArmor
		{
			ballistic = 2;
			bleed = 0.9;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\plate_carrier_m.p3d";
			female = "\DZ\characters\vests\plate_carrier_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\vests\data\BallisticVest.rvmat"}},{0.5,{"DZ\characters\vests\data\BallisticVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\data\BallisticVest_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.3;
					Blood = 0.3;
					Shock = 0.5;
				};
				class Melee
				{
					Health = 0.7;
					Blood = 0.5;
					Shock = 0.5;
				};
				class Infected
				{
					Health = 0.7;
					Blood = 0.5;
					Shock = 0.5;
				};
			};
		};
	};
	class PressVest_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_PressVest_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_PressVest_ColorBase1";
		model = "\DZ\characters\vests\pressVest_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 13600;
		itemSize[] = {7,5};
		itemsCargoSize[] = {6,4};
		quickBarBonus = 2;
		absorbency = 0.1;
		heatIsolation = 2;
		visibilityModifier = 0.95;
		lootTag[] = {"Civilian"};
		lootCategory = "Vests";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\PressVest.rvmat","DZ\characters\vests\data\PressVest_damage.rvmat","DZ\characters\vests\data\PressVest_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\pressVest_m.p3d";
			female = "\DZ\characters\vests\pressVest_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\vests\data\PressVest.rvmat"}},{0.5,{"DZ\characters\vests\data\PressVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\data\PressVest_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.7;
					Blood = 0.7;
					Shock = 0.7;
				};
				class Melee
				{
					Health = 0.8;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.8;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
	};
	class PressVest_Blue: PressVest_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_PressVest_Blue0";
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\PressVest_Blue_co.paa","\dz\characters\vests\data\PressVest_Blue_co.paa","\dz\characters\vests\data\PressVest_Blue_co.paa"};
	};
	class PressVest_LightBlue: PressVest_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_PressVest_LightBlue0";
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\PressVest_LightBlue_co.paa","\dz\characters\vests\data\PressVest_LightBlue_co.paa","\dz\characters\vests\data\PressVest_LightBlue_co.paa"};
	};
	class UKAssVest_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_UKAssVest_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_UKAssVest_ColorBase1";
		model = "\DZ\characters\vests\UKAssVest_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 1900;
		itemSize[] = {7,5};
		itemsCargoSize[] = {7,5};
		quickBarBonus = 3;
		absorbency = 0.3;
		heatIsolation = 2;
		lootTag[] = {"Military_west"};
		lootCategory = "Vests";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\UKAssVest.rvmat","DZ\characters\vests\data\UKAssVest_damage.rvmat","DZ\characters\vests\data\UKAssVest_destruct.rvmat","DZ\characters\vests\data\UKAssVest_ground.rvmat","DZ\characters\vests\data\UKAssVest_ground_damage.rvmat","DZ\characters\vests\data\UKAssVest_ground_destruct.rvmat"};
		};
		class DamageArmor
		{
			biological = 1;
			bleed = 0.3;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\UKAssVest_m.p3d";
			female = "\DZ\characters\vests\UKAssVest_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\vests\data\UKAssVest.rvmat"}},{0.5,{"DZ\characters\vests\data\UKAssVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\data\UKAssVest_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 1;
				};
				class Melee
				{
					Health = 0.85;
					Blood = 0.95;
					Shock = 1;
				};
				class Infected
				{
					Health = 0.85;
					Blood = 0.95;
					Shock = 1;
				};
			};
		};
	};
	class UKAssVest_Black: UKAssVest_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_UKAssVest_Black0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\UKAssVest_ground_black_co.paa","\dz\characters\vests\data\UKAssVest_black_co.paa","\dz\characters\vests\data\UKAssVest_black_co.paa"};
	};
	class UKAssVest_Camo: UKAssVest_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_UKAssVest_Camo0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\UKAssVest_ground_camo_co.paa","\dz\characters\vests\data\UKAssVest_camo_co.paa","\dz\characters\vests\data\UKAssVest_camo_co.paa"};
	};
	class UKAssVest_Khaki: UKAssVest_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_UKAssVest_Khaki0";
		visibilityModifier = 0.5;
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\UKAssVest_ground_Khaki_co.paa","\dz\characters\vests\data\UKAssVest_Khaki_co.paa","\dz\characters\vests\data\UKAssVest_Khaki_co.paa"};
	};
	class UKAssVest_Olive: UKAssVest_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_UKAssVest_Olive0";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\UKAssVest_ground_Olive_co.paa","\dz\characters\vests\data\UKAssVest_Olive_co.paa","\dz\characters\vests\data\UKAssVest_Olive_co.paa"};
	};
	class PoliceVest: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PoliceVest0";
		descriptionShort = "$STR_CfgVehicles_PoliceVest1";
		model = "\DZ\characters\vests\policeVest_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 3500;
		itemSize[] = {7,5};
		absorbency = 0.1;
		heatIsolation = 2;
		lootTag[] = {"Police"};
		lootCategory = "Vests";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\policevest_co.paa","\dz\characters\vests\data\policevest_co.paa","\dz\characters\vests\data\policevest_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\PoliceVest.rvmat","DZ\characters\vests\data\PoliceVest_damage.rvmat","DZ\characters\vests\data\PoliceVest_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\policeVest_m.p3d";
			female = "\DZ\characters\vests\policeVest_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\vests\data\PoliceVest.rvmat"}},{0.5,{"DZ\characters\vests\data\PoliceVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\data\PoliceVest_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.8;
					Blood = 0.7;
					Shock = 0.8;
				};
				class Melee
				{
					Health = 0.3;
					Blood = 0.3;
					Shock = 0.5;
				};
				class Infected
				{
					Health = 0.3;
					Blood = 0.3;
					Shock = 0.5;
				};
			};
		};
	};
	class PoliceVest_test: PoliceVest
	{
		scope = 1;
		displayName = "test";
		descriptionShort = "$STR_CfgVehicles_PoliceVest1";
		model = "\DZ\characters\vests\policeVest_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 3500;
		itemSize[] = {7,5};
		absorbency = 0.1;
		heatIsolation = 2;
		lootTag[] = {"Police"};
		lootCategory = "Vests";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\policevest_co.paa","\dz\characters\vests\data\policevest_co.paa","\dz\characters\vests\data\policevest_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\PoliceVest.rvmat","DZ\characters\vests\data\PoliceVest_damage.rvmat","DZ\characters\vests\data\PoliceVest_destruct.rvmat"};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\policeVest_m.p3d";
			female = "\DZ\characters\vests\policeVest_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2000;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\vests\data\PoliceVest.rvmat"}},{0.5,{"DZ\characters\vests\data\PoliceVest_damage.rvmat"}},{0.0,{"DZ\characters\vests\data\PoliceVest_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.1;
					Blood = 0.5;
					Shock = 0.8;
				};
			};
		};
	};
	class CarrierHolsterSolo: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CarrierHolsterSolo0";
		descriptionShort = "$STR_CfgVehicles_CarrierHolsterSolo1";
		model = "\DZ\characters\vests\plate_carrier_holster_g.p3d";
		inventorySlot = "VestHolster";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 110;
		itemSize[] = {4,3};
		attachments[] = {"Pistol"};
		absorbency = 0.1;
		heatIsolation = 0.1;
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\ballisticvest.rvmat","DZ\characters\vests\data\ballisticvest_damage.rvmat","DZ\characters\vests\data\ballisticvest_destruct.rvmat"};
		};
		class DamageArmor
		{
			ballistic = 0.1;
			bleed = 0.98;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\chest_holster_m.p3d";
			female = "\DZ\characters\vests\chest_holster_f.p3d";
		};
	};
	class ChestHolster: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ChestHolster0";
		descriptionShort = "$STR_CfgVehicles_ChestHolster1";
		model = "\DZ\characters\vests\chest_holster_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 310;
		itemSize[] = {4,3};
		attachments[] = {"Pistol"};
		absorbency = 0.1;
		heatIsolation = 0.1;
		lootTag[] = {"Civilian","Police"};
		lootCategory = "Vests";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\chest_holster.rvmat","DZ\characters\vests\data\chest_holster_damage.rvmat","DZ\characters\vests\data\chest_holster_destruct.rvmat"};
		};
		class DamageArmor
		{
			ballistic = 0.1;
			bleed = 0.98;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\chest_holster_m.p3d";
			female = "\DZ\characters\vests\chest_holster_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\vests\data\chest_holster.rvmat"}},{0.5,{"DZ\characters\vests\data\chest_holster_damage.rvmat"}},{0.0,{"DZ\characters\vests\data\chest_holster_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.98;
					Blood = 0.98;
					Shock = 1;
				};
				class Melee
				{
					Health = 1;
					Blood = 1;
					Shock = 1;
				};
				class Infected
				{
					Health = 1;
					Blood = 1;
					Shock = 1;
				};
			};
		};
	};
	class HighCapacityVest_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_HighCapacityVest_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_HighCapacityVest_ColorBase1";
		model = "\DZ\characters\vests\tacticalvest2_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 2400;
		itemSize[] = {7,5};
		itemsCargoSize[] = {9,4};
		quickBarBonus = 3;
		absorbency = 0.1;
		heatIsolation = 2;
		lootTag[] = {"Military_east","Military_west"};
		lootCategory = "Vests";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\TacticalVest2.rvmat","DZ\characters\vests\data\TacticalVest2_damage.rvmat","DZ\characters\vests\data\TacticalVest2_destruct.rvmat"};
		};
		class DamageArmor
		{
			ballistic = 0.1;
			bleed = 0.98;
		};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\tacticalvest2_m.p3d";
			female = "\DZ\characters\vests\tacticalvest2_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\vests\data\TacticalVest2.rvmat"}},{0.5,{"DZ\characters\vests\data\TacticalVest2_damage.rvmat"}},{0.0,{"DZ\characters\vests\data\TacticalVest2_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0.9;
					Blood = 0.9;
					Shock = 1;
				};
				class Melee
				{
					Health = 0.8;
					Blood = 0.9;
					Shock = 0.9;
				};
				class Infected
				{
					Health = 0.8;
					Blood = 0.9;
					Shock = 0.9;
				};
			};
		};
	};
	class HighCapacityVest_Black: HighCapacityVest_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HighCapacityVest_Black0";
		visibilityModifier = 0.7;
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\tacticalvest2_black_co.paa","\dz\characters\vests\data\tacticalvest2_black_co.paa","\dz\characters\vests\data\tacticalvest2_black_co.paa"};
	};
	class HighCapacityVest_Olive: HighCapacityVest_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_HighCapacityVest_Olive0";
		visibilityModifier = 0.6;
		hiddenSelectionsTextures[] = {"\dz\characters\vests\data\tacticalvest2_olive_co.paa","\dz\characters\vests\data\tacticalvest2_olive_co.paa","\dz\characters\vests\data\tacticalvest2_olive_co.paa"};
	};
	class LeatherStorageVest_ColorBase: Clothing
	{
		displayName = "$STR_CfgVehicles_LeatherStorageVest_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_LeatherStorageVest_ColorBase1";
		model = "\DZ\characters\vests\Vest_LeatherStorage_g.p3d";
		inventorySlot = "Vest";
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = {"Clothing","Vest"};
		weight = 2800;
		itemSize[] = {7,5};
		itemsCargoSize[] = {7,4};
		quickBarBonus = 3;
		absorbency = 0.45;
		heatIsolation = 3.5;
		durability = 0.5;
		armor = 8;
		lootCategory = "Crafted";
		repairableWithKits[] = {5,3};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class ClothingTypes
		{
			male = "\DZ\characters\vests\Vest_LeatherStorage_m.p3d";
			female = "\DZ\characters\vests\Vest_LeatherStorage_f.p3d";
		};
	};
	class LeatherStorageVest_Natural: LeatherStorageVest_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherStorageVest_Natural0";
		visibilityModifier = 0.85;
		hiddenSelectionsMaterials[] = {"DZ\characters\vests\data\Vest_LeatherStorage_natural.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_natural.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_natural.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\Vest_LeatherStorage_natural.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_natural_damage.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_natural_destruct.rvmat"};
		};
	};
	class LeatherStorageVest_Beige: LeatherStorageVest_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherStorageVest_Beige0";
		visibilityModifier = 0.9;
		hiddenSelectionsMaterials[] = {"DZ\characters\vests\data\Vest_LeatherStorage_beige.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_beige.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_beige.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\Vest_LeatherStorage_natural.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_beige_damage.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_beige_destruct.rvmat"};
		};
	};
	class LeatherStorageVest_Brown: LeatherStorageVest_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherStorageVest_Brown0";
		visibilityModifier = 0.8;
		hiddenSelectionsMaterials[] = {"DZ\characters\vests\data\Vest_LeatherStorage_brown.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_brown.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_brown.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\Vest_LeatherStorage_natural.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_brown_damage.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_brown_destruct.rvmat"};
		};
	};
	class LeatherStorageVest_Black: LeatherStorageVest_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_LeatherStorageVest_Black0";
		visibilityModifier = 0.8;
		hiddenSelectionsMaterials[] = {"DZ\characters\vests\data\Vest_LeatherStorage_black.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_black.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_black.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\characters\vests\data\Vest_LeatherStorage_natural.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_black_damage.rvmat","DZ\characters\vests\data\Vest_LeatherStorage_black_destruct.rvmat"};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyberetta: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Pistol";
		model = "DZ\characters\proxies\beretta.p3d";
	};
};
//};

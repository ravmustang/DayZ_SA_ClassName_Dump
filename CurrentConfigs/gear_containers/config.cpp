////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:12:04 2018 : 'file' last modified on Wed Aug 22 17:19:33 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_containers\config.bin{
class CfgPatches
{
	class DZ_Gear_Containers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Container_Base;
	class WorldContainer_Base;
	class Barrel_ColorBase: Container_Base
	{
		displayName = "$STR_CfgVehicles_Barrel_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Barrel_ColorBase1";
		model = "\dz\gear\containers\55galDrum.p3d";
		overrideDrawArea = "8.0";
		SingleUseActions[] = {527};
		InteractActions[] = {1025,1026};
		ContinuousActions[] = {155};
		attachments[] = {"BerryR","BerryB","Plant","Nails","OakBark","BirchBark","Lime","Disinfectant","Guts"};
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		quantityBar = 1;
		carveNavmesh = 1;
		canBeDigged = 0;
		weight = 10000;
		itemSize[] = {9,16};
		stackedUnit = "ml";
		randomQuantity = 2;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 0.0;
		varQuantityMin = 0.0;
		varQuantityMax = 200000.0;
		absorbency = 0.1;
		physLayer = "item_large";
		allowOwnedCargoManipulation = 1;
		lootTag[] = {"Work"};
		hiddenSelections[] = {"camoGround"};
		class GUIInventoryAttachmentsProps
		{
			class TanLeather
			{
				name = "Tan leather";
				description = "";
				attachmentSlots[] = {"Lime"};
				icon = "missing";
			};
			class BleachCotton
			{
				name = "Bleach cotton";
				description = "";
				attachmentSlots[] = {"Disinfectant"};
				icon = "missing";
			};
			class ColorLeatherClothes
			{
				name = "Color leather clothes";
				description = "";
				attachmentSlots[] = {"BirchBark","OakBark","Nails"};
				icon = "missing";
			};
			class ColorCottonClothes
			{
				name = "Color cotton clothes";
				description = "";
				attachmentSlots[] = {"BerryR","BerryB","Nails"};
				icon = "missing";
			};
		};
		class Cargo
		{
			itemsCargoSize[] = {9,15};
			openable = 0;
			allowOwnedCargoManipulation = 1;
		};
		class AnimationSources
		{
			class Lid
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.01;
			};
			class Lid2
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.01;
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
	class Barrel_Green: Barrel_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Barrel_Green0";
		color = "Green";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\data\barrel_green_co.paa"};
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
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\Barrel_green.rvmat"}},{0.5,{"DZ\gear\containers\data\Barrel_green_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\Barrel_green_destruct.rvmat"}}};
				};
			};
		};
	};
	class Barrel_Blue: Barrel_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Barrel_Blue0";
		color = "Blue";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\data\barrel_blue_co.paa"};
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
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\Barrel_blue.rvmat"}},{0.5,{"DZ\gear\containers\data\Barrel_blue_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\Barrel_blue_destruct.rvmat"}}};
				};
			};
		};
	};
	class Barrel_Red: Barrel_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Barrel_Red0";
		color = "Red";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\data\barrel_red_co.paa"};
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
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\Barrel_red.rvmat"}},{0.5,{"DZ\gear\containers\data\Barrel_red_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\Barrel_red_destruct.rvmat"}}};
				};
			};
		};
	};
	class Barrel_Yellow: Barrel_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Barrel_Yellow0";
		color = "Yellow";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\data\barrel_yellow_co.paa"};
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
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\Barrel_yellow.rvmat"}},{0.5,{"DZ\gear\containers\data\Barrel_yellow_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\Barrel_yellow_destruct.rvmat"}}};
				};
			};
		};
	};
	class Refrigerator: WorldContainer_Base
	{
		scope = 0;
		displayName = "$STR_CfgVehicles_Refrigerator0";
		descriptionShort = "$STR_CfgVehicles_Refrigerator1";
		model = "\DZ\gear\containers\fridge.p3d";
		itemsCargo[] = {"Food_Rice","Fruit_Apple"};
	};
	class RefrigeratorMinsk: WorldContainer_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_RefrigeratorMinsk0";
		descriptionShort = "$STR_CfgVehicles_RefrigeratorMinsk1";
		model = "\DZ\gear\containers\fridge.p3d";
		weight = 131072;
		itemSize[] = {5,10};
		itemsRandom[] = {{"Fruit_Tomato","Fruit_GreenBellPepper","Fruit_Zucchini","Fruit_Potato"}};
		class Cargo
		{
			itemsCargoSize[] = {2,5};
			openable = 0;
			allowOwnedCargoManipulation = 1;
			cargoReceivesDamage = 0;
			cargoSingleItemMode = 0;
			cargoReceivedDamageCoeff = 0.0;
		};
	};
	class TrashCan: WorldContainer_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TrashCan0";
		descriptionShort = "$STR_CfgVehicles_TrashCan1";
		model = "\DZ\gear\containers\trashcan.p3d";
		weight = 13500;
		itemSize[] = {10,15};
		canBeDigged = 1;
		itemsRandom[] = {{"Food_Rice","Fruit_Apple","Medical_DisinfectantAlcohol","Consumable_DuctTape","Consumable_BurlapStrips","Drink_SodaCanSpite","Drink_SodaCanKvass","Consumable_Paper","Consumable_Rags"}};
		class Cargo
		{
			itemsCargoSize[] = {5,10};
			openable = 0;
			allowOwnedCargoManipulation = 1;
			cargoReceivesDamage = 0;
			cargoSingleItemMode = 0;
			cargoReceivedDamageCoeff = 0.0;
		};
	};
	class FirstAidKit: Container_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_FirstAidKit0";
		descriptionShort = "$STR_CfgVehicles_FirstAidKit1";
		model = "\dz\gear\containers\FirstAidKit.p3d";
		rotationFlags = 17;
		weight = 140;
		itemSize[] = {4,3};
		itemsCargoSize[] = {4,3};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		canBeDigged = 1;
		isMeleeWeapon = 1;
		lootTag[] = {"Civilian","Medic","Work","Farm","Hygiene"};
		itemsRandom[] = {{"BandageDressing","BandageDressing","BandageDressing",""},{"BloodTestKit","BloodTestKit","BloodTestKit",""},{"BloodBagEmpty","BloodBagEmpty","",""},{"StartKitIV","StartKitIV","",""}};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\FirsAidKit.rvmat"}},{0.5,{"DZ\gear\containers\data\FirsAidKit_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\FirsAidKit_destruct.rvmat"}}};
				};
			};
		};
	};
	class SmallProtectorCase: Container_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SmallProtectorCase0";
		descriptionShort = "$STR_CfgVehicles_SmallProtectorCase1";
		model = "\dz\gear\containers\Protector_Case.p3d";
		rotationFlags = 17;
		weight = 980;
		itemSize[] = {6,3};
		itemsCargoSize[] = {6,3};
		canBeDigged = 1;
		isMeleeWeapon = 1;
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		lootTag[] = {"Medic","Work","Camping"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\Protector_Case.rvmat"}},{0.5,{"DZ\gear\containers\data\Protector_Case_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\Protector_Case_destruct.rvmat"}}};
				};
			};
		};
	};
	class CarrierPouches: Container_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CarrierPouches0";
		descriptionShort = "$STR_CfgVehicles_CarrierPouches1";
		model = "\dz\characters\vests\plate_carrier_pouches_g.p3d";
		inventorySlot = "VestPouch";
		weight = 250;
		itemSize[] = {6,4};
		itemsCargoSize[] = {6,4};
		repairableWithKits[] = {5,2};
		repairCosts[] = {30.0,25.0};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 2;
		lootTag[] = {"Military_east","Military_west"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\PlateCarrier.rvmat"}},{0.5,{"DZ\gear\containers\data\PlateCarrier_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\PlateCarrier_destruct.rvmat"}}};
				};
			};
		};
	};
	class AmmoBox: Container_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_AmmoBox0";
		descriptionShort = "$STR_CfgVehicles_AmmoBox1";
		model = "\dz\gear\containers\300RoundBox.p3d";
		weight = 2250;
		itemSize[] = {6,4};
		itemsCargoSize[] = {6,4};
		allowOwnedCargoManipulation = 1;
		randomQuantity = 4;
		canBeDigged = 1;
		lootTag[] = {"Military_east","Military_west"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\300RoundBox.rvmat"}},{0.5,{"DZ\gear\containers\data\300RoundBox_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\300RoundBox_destruct.rvmat"}}};
				};
			};
		};
	};
	class Bear_ColorBase: Container_Base
	{
		displayName = "$STR_CfgVehicles_Bear_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_Bear_ColorBase1";
		model = "\dz\gear\containers\teddybear.p3d";
		weight = 130;
		itemSize[] = {2,2};
		itemsCargoSize[] = {2,2};
		canBeDigged = 1;
		allowOwnedCargoManipulation = 1;
		itemsRandom[] = {{"Consumable_Paper","Consumable_Rags"}};
		lootTag[] = {"Civilian"};
		hiddenSelections[] = {"camoGround"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\teddybear.rvmat"}},{0.5,{"DZ\gear\containers\data\teddybear_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\teddybear_destruct.rvmat"}}};
				};
			};
		};
	};
	class Bear_Beige: Bear_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Bear_Beige0";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\Data\teddybear_brown_co.paa"};
	};
	class Bear_Dark: Bear_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Bear_Dark0";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\Data\teddybear_dark_co.paa"};
	};
	class Bear_Pink: Bear_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Bear_Pink0";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\Data\teddybear_pink_co.paa"};
	};
	class Bear_White: Bear_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_Bear_White0";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\Data\teddybear_white_co.paa"};
	};
	class WaterproofBag_ColorBase: Container_Base
	{
		displayName = "$STR_CfgVehicles_WaterproofBag_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_WaterproofBag_ColorBase1";
		model = "\dz\gear\containers\WaterproofBag.p3d";
		rotationFlags = 17;
		weight = 350;
		itemSize[] = {7,5};
		itemsCargoSize[] = {7,5};
		allowOwnedCargoManipulation = 1;
		canBeDigged = 1;
		lootTag[] = {"Civilian"};
		absorbency = 0;
		heatIsolation = 1;
		repairableWithKits[] = {5,6};
		repairCosts[] = {30.0,25.0};
		hiddenSelections[] = {"camoGround"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\containers\data\WaterproofBag.rvmat"}},{0.5,{"DZ\gear\containers\data\WaterproofBag_damage.rvmat"}},{0.0,{"DZ\gear\containers\data\WaterproofBag_destruct.rvmat"}}};
				};
			};
		};
	};
	class WaterproofBag_Yellow: WaterproofBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WaterproofBag_Yellow0";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\Data\WaterproofBag_yellow_co.paa"};
	};
	class WaterproofBag_Green: WaterproofBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WaterproofBag_Green0";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\Data\WaterproofBag_green_co.paa"};
	};
	class WaterproofBag_Orange: WaterproofBag_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_WaterproofBag_Orange0";
		hiddenSelectionsTextures[] = {"\dz\gear\containers\Data\WaterproofBag_orange_co.paa"};
	};
};
//};

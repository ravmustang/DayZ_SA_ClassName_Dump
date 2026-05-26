class CfgPatches
{
	class DZ_Gear_Drinks
	{
		units[]=
		{
			"Drink_Canteen",
			"Drink_SodaZlutaKlasik",
			"Drink_SodaZlutaKolaloka",
			"Drink_SodaZlutaMalinovka",
			"Drink_WaterBottle"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class Bottle_Base;
	class Canteen: Bottle_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Canteen0";
		descriptionShort="$STR_CfgVehicles_Canteen1";
		model="\dz\gear\drinks\Canteen.p3d";
		debug_ItemCategory=6;
		inventorySlot[]=
		{
			"Belt_Left",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC"
		};
		weight=250;
		itemSize[]={2,2};
		varTemperatureFreezePoint=-200;
		varTemperatureThawPoint=-200;
		varTemperatureFreezeTime=2508;
		varTemperatureThawTime=2508;
		varTemperatureMax=110;
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		temperaturePerQuantityWeight=2;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  + 131072 + 262144 + 524288 + 2097152 + 4194304 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) - 32768";
		isMeleeWeapon=1;
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Canteen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Canteen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Canteen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Canteen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Canteen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Canteen_in_B
				{
					soundSet="Canteen_in_B_SoundSet";
					id=202;
				};
				class Canteen_in_C
				{
					soundSet="Canteen_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class Canteen_out_A
				{
					soundSet="Canteen_out_A_SoundSet";
					id=205;
				};
				class Canteen_out_B
				{
					soundSet="Canteen_out_B_SoundSet";
					id=206;
				};
				class PondBottle_loop
				{
					soundSet="PondBottle_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.050000001,0.050000001,0};
				orientation[]={-3,260,90};
			};
			class DirectCookingB
			{
				position[]={0.050000001,0.050000001,0};
				orientation[]={6,260,90};
			};
			class DirectCookingC
			{
				position[]={0.050000001,0.050000001,0};
				orientation[]={-3,260,90};
			};
		};
	};
	class WaterBottle: Bottle_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_WaterBottle0";
		descriptionShort="$STR_CfgVehicles_WaterBottle1";
		model="\dz\gear\drinks\WaterBottle.p3d";
		debug_ItemCategory=6;
		weight=50;
		itemSize[]={1,3};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  + 131072 + 262144 + 524288 + 2097152 + 4194304 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) - 32768";
		varTemperatureFreezePoint=-200;
		varTemperatureThawPoint=-200;
		varTemperatureFreezeTime=2508;
		varTemperatureThawTime=2508;
		varTemperatureOverheatTime=0;
		varTemperatureMax=80;
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		temperaturePerQuantityWeight=1.5;
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Loot_WaterBottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterBottle_in_B
				{
					soundSet="WaterBottle_in_B_SoundSet";
					id=202;
				};
				class WaterBottle_in_C
				{
					soundSet="WaterBottle_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class WaterBottle_out_A
				{
					soundSet="WaterBottle_out_A_SoundSet";
					id=205;
				};
				class WaterBottle_out_B
				{
					soundSet="WaterBottle_out_B_SoundSet";
					id=206;
				};
				class PondBottle_loop
				{
					soundSet="PondBottle_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="WaterBottle_pickup_SoundSet";
					id=797;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.07,0.028999999,0};
				orientation[]={21,0,90};
			};
			class DirectCookingB
			{
				position[]={0.07,0.028999999,0};
				orientation[]={-11,150,90};
			};
			class DirectCookingC
			{
				position[]={0.07,0.028999999,0};
				orientation[]={21,0,90};
			};
		};
	};
	class GlassBottle: Bottle_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_GlassBottle0";
		descriptionShort="$STR_CfgVehicles_GlassBottle1";
		model="\dz\gear\drinks\VodkaBottles.p3d";
		weight=550;
		itemSize[]={1,3};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  + 131072 + 262144 + 524288 + 2097152 + 4194304 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) - 32768";
		varTemperatureFreezePoint=-200;
		varTemperatureThawPoint=-200;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureMax=120;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=750;
		temperaturePerQuantityWeight=1.5;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\VodkaBottles.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\VodkaBottles.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\VodkaBottles_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\VodkaBottles_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\drinks\data\vodkabottles.rvmat"
		};
		soundImpactType="glass";
		class AnimEvents
		{
			class SoundWeapon
			{
				class GlassBottle_in_B
				{
					soundSet="GlassBottle_in_B_SoundSet";
					id=202;
				};
				class GlassBottle_in_C
				{
					soundSet="GlassBottle_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class GlassBottle_out_A
				{
					soundSet="GlassBottle_out_A_SoundSet";
					id=205;
				};
				class GlassBottle_out_B
				{
					soundSet="GlassBottle_out_B_SoundSet";
					id=206;
				};
				class PondBottle_loop
				{
					soundSet="PondBottle_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.050000001,0.025,0};
				orientation[]={-9,0,90};
			};
			class DirectCookingB
			{
				position[]={0.050000001,0.025,0};
				orientation[]={-6,150,90};
			};
			class DirectCookingC
			{
				position[]={0.050000001,0.025,0};
				orientation[]={-9,0,90};
			};
		};
	};
	class WaterPouch_ColorBase: Bottle_Base
	{
		displayName="$STR_CfgVehicles_WaterPouch_ColorBase0";
		descriptionShort="$STR_CfgVehicles_WaterPouch_ColorBase1";
		model="\dz\gear\drinks\waterpouch.p3d";
		lootCategory="Crafted";
		weight=250;
		itemSize[]={2,4};
		repairableWithKits[]={3};
		repairCosts[]={25};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  + 131072 + 262144 + 524288 + 2097152 + 4194304 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) - 32768";
		varTemperatureFreezePoint=-200;
		varTemperatureThawPoint=-200;
		varTemperatureMax=120;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=1250;
		temperaturePerQuantityWeight=4;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Drink_WaterPouch_Natural_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="textile";
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterPouch_in_B
				{
					soundSet="WaterPouch_in_B_SoundSet";
					id=202;
				};
				class WaterPouch_in_C
				{
					soundSet="WaterPouch_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class WaterPouch_out_A
				{
					soundSet="WaterPouch_out_A_SoundSet";
					id=205;
				};
				class WaterPouch_out_B
				{
					soundSet="WaterPouch_out_B_SoundSet";
					id=206;
				};
				class PondBottle_loop
				{
					soundSet="PondBottle_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
	};
	class WaterPouch_Natural: WaterPouch_ColorBase
	{
		scope=2;
		rotationFlags=17;
		hiddenSelectionsMaterials[]=
		{
			"DZ\gear\drinks\data\",
			"Drink_WaterPouch_Natural.rvmat",
			"DZ\gear\drinks\data\",
			"Drink_WaterPouch_Natural.rvmat",
			"DZ\gear\drinks\data\",
			"Drink_WaterPouch_Natural.rvmat"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterPouch_in_B
				{
					soundSet="WaterPouch_in_B_SoundSet";
					id=202;
				};
				class WaterPouch_in_C
				{
					soundSet="WaterPouch_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class WaterPouch_out_A
				{
					soundSet="WaterPouch_out_A_SoundSet";
					id=205;
				};
				class WaterPouch_out_B
				{
					soundSet="WaterPouch_out_B_SoundSet";
					id=206;
				};
				class PondBottle_loop
				{
					soundSet="PondBottle_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
	};
	class FilteringBottle: Bottle_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_FilteringBottle0";
		descriptionShort="$STR_CfgVehicles_FilteringBottle1";
		model="\dz\gear\drinks\FilteringBottle.p3d";
		weight=180;
		itemSize[]={1,3};
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  + 131072 + 262144 + 524288 + 2097152 + 4194304 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) - 32768 - 8192 - 16384";
		varTemperatureFreezePoint=-200;
		varTemperatureThawPoint=-200;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureOverheatTime=0;
		varTemperatureMax=80;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=650;
		temperaturePerQuantityWeight=1.5;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\Loot_FilteringBottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\drinks\data\Loot_FilteringBottle.rvmat"
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class WaterPouch_in_B
				{
					soundSet="WaterPouch_in_B_SoundSet";
					id=202;
				};
				class WaterPouch_in_C
				{
					soundSet="WaterPouch_in_C_SoundSet";
					id=203;
				};
				class WaterBottle_in_C1
				{
					soundSet="WaterBottle_in_C1_SoundSet";
					id=204;
				};
				class WaterPouch_out_A
				{
					soundSet="WaterPouch_out_A_SoundSet";
					id=205;
				};
				class WaterPouch_out_B
				{
					soundSet="WaterPouch_out_B_SoundSet";
					id=206;
				};
				class PondBottle_loop
				{
					soundSet="PondBottle_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.059999999,0.035,0};
				orientation[]={3,-95,90};
			};
			class DirectCookingB
			{
				position[]={0.059999999,0.035,0};
				orientation[]={-5,105,90};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.035,0};
				orientation[]={3,-95,90};
			};
		};
	};
	class SodaCan_ColorBase: Edible_Base
	{
		model="\dz\gear\drinks\SodaCan.p3d";
		debug_ItemCategory=6;
		stackedRandom=0;
		itemSize[]={1,2};
		weight=15;
		stackedUnit="";
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureMax=100;
		varQuantityInit=330;
		varQuantityMin=0;
		varQuantityMax=330;
		temperaturePerQuantityWeight=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=30;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\drinks\data\sodacan.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\drinks\data\sodacan.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\drinks\data\sodacan_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\drinks\data\sodacan_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\drinks\data\sodacan_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="metal";
		class Nutrition
		{
			totalVolume=1;
			energy=50;
			water=90;
			nutritionalIndex=1;
			toxicity=0;
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.1,0.059999999,0};
				orientation[]={8,0,0};
			};
			class DirectCookingB
			{
				position[]={0.059999999,0.025,0};
				orientation[]={15,90,45};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.025,0};
				orientation[]={15,90,45};
			};
		};
	};
	class SodaCan_Pipsi: SodaCan_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SodaCan_Pipsi0";
		descriptionShort="$STR_CfgVehicles_SodaCan_Pipsi1";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\drinks\Data\SodaCan_pipsi_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class PondBottle_loop
				{
					soundSet="PondBottle_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SodaCan_Cola: SodaCan_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SodaCan_Cola0";
		descriptionShort="$STR_CfgVehicles_SodaCan_Cola1";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\drinks\Data\SodaCan_cola_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class PondBottle_loop
				{
					soundSet="PondBottle_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SodaCan_Spite: SodaCan_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SodaCan_Spite0";
		descriptionShort="$STR_CfgVehicles_SodaCan_Spite1";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\drinks\Data\SodaCan_spite_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class PondBottle_loop
				{
					soundSet="PondBottle_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SodaCan_Kvass: SodaCan_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SodaCan_Kvass0";
		descriptionShort="$STR_CfgVehicles_SodaCan_Kvass1";
		varTemperatureFreezePoint=-3;
		varTemperatureThawPoint=-3;
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\drinks\Data\SodaCan_rasputin_kvass_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class PondBottle_loop
				{
					soundSet="PondBottle_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SodaCan_Empty: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SodaCan_Empty0";
		descriptionShort="$STR_CfgVehicles_SodaCan_Empty1";
		model="\dz\gear\drinks\SodaCan_Used.p3d";
		inventorySlot[]=
		{
			"tripWireAttachment"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class PondBottle_loop
				{
					soundSet="PondBottle_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SodaCan_Fronta: SodaCan_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_SodaCan_Fronta0";
		descriptionShort="$STR_CfgVehicles_SodaCan_Fronta1";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\drinks\Data\SodaCan_Fanda_co.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class PondBottle_loop
				{
					soundSet="PondBottle_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
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
		scope=2;
		inventorySlot[]=
		{
			"tripWireAttachment"
		};
		model="\dz\gear\drinks\SodaCan_Used.p3d";
	};
};

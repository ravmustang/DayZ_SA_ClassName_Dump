class CfgPatches
{
	class DZ_Vehicles_Parts
	{
		units[]={};
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
	class Bottle_Base;
	class Inventory_Base;
	class Box_Base;
	class TruckBattery: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_TruckBattery0";
		descriptionShort="$STR_CfgVehicles_TruckBattery1";
		model="\dz\vehicles\parts\battery_truck.p3d";
		attachments[]=
		{
			"MetalWire"
		};
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		weight=18000;
		weightPerQuantityUnit=0;
		itemSize[]={5,3};
		absorbency=0;
		inventorySlot[]=
		{
			"TruckBattery",
			"LargeBattery"
		};
		rotationFlags=2;
		repairableWithKits[]={7};
		repairCosts[]={25};
		lockType=1;
		attachSoundSet[]=
		{
			"carbattery_attach_SoundSet",
			"carbattery_attach_SoundSet"
		};
		attachSoundSlot[]=
		{
			"TruckBattery",
			"LargeBattery"
		};
		detachSoundSet[]=
		{
			"carbattery_detach_SoundSet",
			"carbattery_detach_SoundSet"
		};
		detachSoundSlot[]=
		{
			"TruckBattery",
			"LargeBattery"
		};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			convertEnergyToQuantity=1;
			energyStorageMax=1500;
			energyAtSpawn=1500;
			reduceMaxEnergyByDamageCoef=0.5;
			powerSocketsCount=1;
			plugType=4;
			compatiblePlugTypes[]={8};
			attachmentAction=2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=240;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\vehicles\parts\data\truck_bat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\truck_bat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\truck_bat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\truck_bat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\truck_bat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="carbattery_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CarBattery: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_CarBattery0";
		descriptionShort="$STR_CfgVehicles_CarBattery1";
		model="\dz\vehicles\parts\battery_car.p3d";
		attachments[]=
		{
			"MetalWire"
		};
		weight=10000;
		weightPerQuantityUnit=0;
		itemSize[]={3,3};
		absorbency=0.1;
		inventorySlot[]=
		{
			"CarBattery",
			"LargeBattery"
		};
		rotationFlags=2;
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varQuantityDestroyOnMin=0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		lockType=1;
		attachSoundSet[]=
		{
			"carbattery_attach_SoundSet",
			"carbattery_attach_SoundSet"
		};
		attachSoundSlot[]=
		{
			"CarBattery",
			"LargeBattery"
		};
		detachSoundSet[]=
		{
			"carbattery_detach_SoundSet",
			"carbattery_detach_SoundSet"
		};
		detachSoundSlot[]=
		{
			"CarBattery",
			"LargeBattery"
		};
		class EnergyManager
		{
			hasIcon=1;
			switchOnAtSpawn=1;
			isPassiveDevice=1;
			convertEnergyToQuantity=1;
			energyStorageMax=500;
			energyAtSpawn=500;
			reduceMaxEnergyByDamageCoef=0.5;
			powerSocketsCount=1;
			plugType=4;
			compatiblePlugTypes[]={5,8,6};
			attachmentAction=2;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\vehicles\parts\data\battery_smallcar.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\battery_smallcar.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\battery_smallcar_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\battery_smallcar_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="carbattery_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class BrakeFluid: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_BrakeFluid0";
		descriptionShort="$STR_CfgVehicles_BrakeFluid1";
		model="\dz\vehicles\parts\Brake_Fluid.p3d";
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		varQuantityDestroyOnMin=1;
		destroyOnEmpty=1;
		quantityBar=1;
		weight=500;
		itemSize[]={2,3};
		absorbency=0;
		rotationFlags=64;
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
								"DZ\vehicles\parts\data\Brake_Fluid.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\Brake_Fluid.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\Brake_Fluid_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\Brake_Fluid_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\Brake_Fluid_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp
				{
					soundSet="engineoil_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="engineoil_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class EngineOil: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_EngineOil0";
		descriptionShort="$STR_CfgVehicles_EngineOil1";
		model="\dz\vehicles\parts\oil_bottle.p3d";
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		varQuantityDestroyOnMin=1;
		destroyOnEmpty=1;
		quantityBar=1;
		weight=500;
		itemSize[]={3,4};
		absorbency=0;
		rotationFlags=64;
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
								"DZ\vehicles\parts\data\oil_bottle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\oil_bottle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\oil_bottle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\oil_bottle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\oil_bottle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp
				{
					soundSet="engineoil_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="engineoil_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CarRadiator: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_CarRadiator0";
		descriptionShort="$STR_CfgVehicles_CarRadiator1";
		model="\dz\vehicles\parts\radiator_car.p3d";
		weight=2000;
		itemSize[]={5,4};
		absorbency=0;
		inventorySlot[]=
		{
			"CarRadiator"
		};
		rotationFlags=32;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\vehicles\parts\data\radiator_smallcar.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\radiator_smallcar.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\radiator_smallcar_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\radiator_smallcar_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\radiator_smallcar_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		lockType=1;
		soundImpactType="metal";
		attachSoundSet[]=
		{
			"carradiator_attach_SoundSet"
		};
		attachSoundSlot[]=
		{
			"CarRadiator"
		};
		detachSoundSet[]=
		{
			"carradiator_detach_SoundSet"
		};
		detachSoundSlot[]=
		{
			"CarRadiator"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp_Light
				{
					soundSet="pickUpCanisterGasolineLight_SoundSet";
					id=796;
				};
				class pickUp
				{
					soundSet="pickUpCanisterGasoline_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="carradiator_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class HeadlightH7: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_HeadlightH70";
		descriptionShort="$STR_CfgVehicles_HeadlightH71";
		model="\dz\vehicles\parts\Replacement_Headlight.p3d";
		weight=150;
		itemSize[]={1,1};
		absorbency=0;
		inventorySlot[]=
		{
			"Reflector_1_1",
			"Reflector_2_1"
		};
		rotationFlags=12;
		soundImpactType="glass";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=10;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\vehicles\parts\data\ReplacementHeadlight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\ReplacementHeadlight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\ReplacementHeadlight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\ReplacementHeadlight_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\ReplacementHeadlight_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class HeadlightH7_Box: Box_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_HeadlightH7_Box0";
		descriptionShort="$STR_CfgVehicles_HeadlightH7_Box1";
		model="\dz\vehicles\parts\Replacement_Headlight_Box.p3d";
		weight=200;
		itemSize[]={1,1};
		absorbency=0;
		rotationFlags=63;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\vehicles\parts\data\ReplacementHeadlight_Box.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\ReplacementHeadlight_Box.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\ReplacementHeadlight_Box_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\ReplacementHeadlight_Box_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\ReplacementHeadlight_Box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class HeadlightH7
			{
				value=1;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
	class SparkPlug: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SparkPlug0";
		descriptionShort="$STR_CfgVehicles_SparkPlug1";
		model="\dz\vehicles\parts\sparkplug.p3d";
		weight=180;
		itemSize[]={1,1};
		absorbency=0;
		inventorySlot[]=
		{
			"SparkPlug"
		};
		rotationFlags=12;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\vehicles\parts\data\sparkplug.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\sparkplug.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\sparkplug_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\sparkplug_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\sparkplug_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		attachSoundSet[]=
		{
			"sparkplug_attach_SoundSet"
		};
		attachSoundSlot[]=
		{
			"SparkPlug"
		};
		detachSoundSet[]=
		{
			"sparkplug_detach_SoundSet"
		};
		detachSoundSlot[]=
		{
			"SparkPlug"
		};
	};
	class GlowPlug: Inventory_Base
	{
		scope=2;
		displayName="$STR_GlowPlug0";
		descriptionShort="$STR_GlowPlug1";
		model="\dz\vehicles\parts\GlowPlug.p3d";
		weight=200;
		itemSize[]={1,2};
		absorbency=0;
		inventorySlot="GlowPlug";
		rotationFlags=12;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\vehicles\parts\data\glowplug.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\glowplug.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\glowplug_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\glowplug_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\glowplug_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		attachSoundSet[]=
		{
			"sparkplug_attach_SoundSet"
		};
		attachSoundSlot[]=
		{
			"GlowPlug"
		};
		detachSoundSet[]=
		{
			"sparkplug_detach_SoundSet"
		};
		detachSoundSlot[]=
		{
			"GlowPlug"
		};
	};
	class TireRepairKit: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_TireRepairKit0";
		descriptionShort="$STR_CfgVehicles_TireRepairKit1";
		model="\dz\vehicles\parts\Tire_Repair_Kit.p3d";
		weight=800;
		weightPerQuantityUnit=2;
		itemSize[]={2,3};
		absorbency=0;
		rotationFlags=16;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		repairKitType=6;
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="smallprotectorcase_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="smallprotectorcase_drop_SoundSet";
					id=898;
				};
			};
		};
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
								"DZ\vehicles\parts\data\Tire_Repair_Kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\Tire_Repair_Kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\Tire_Repair_Kit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\Tire_Repair_Kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\Tire_Repair_Kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class CanisterGasoline: Bottle_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_CanisterGasoline0";
		descriptionShort="$STR_CfgVehicles_CanisterGasoline1";
		inventorySlot[]={};
		model="\dz\vehicles\parts\JerryCan.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\vehicles\parts\data\jerrycan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\vehicles\parts\data\jerrycan.rvmat"
		};
		weight=4000;
		weightPerQuantityUnit=0.69999999;
		itemSize[]={5,6};
		absorbency=0;
		canBeSplit=0;
		stackedRandom=1;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varTemperatureFreezePoint=-200;
		varTemperatureThawPoint=-200;
		varTemperatureMax=150;
		varLiquidTypeInit=8192;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  + 131072 + 262144 + 524288 + 2097152 + 4194304 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) - 32768";
		varQuantityInit=20000;
		varQuantityMin=0;
		varQuantityMax=20000;
		varTemperatureFreezeTime=4752;
		varTemperatureThawTime=4752;
		temperaturePerQuantityWeight=8;
		repairableWithKits[]={8};
		repairCosts[]={25};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpCanisterGasoline_Light
				{
					soundSet="pickUpCanisterGasolineLight_SoundSet";
					id=796;
				};
				class pickUpCanisterGasoline
				{
					soundSet="pickUpCanisterGasoline_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="canistergasoline_drop_SoundSet";
					id=898;
				};
				class GasolineCanister_Fill_Pond_In
				{
					soundSet="GasolineCanister_Fill_Pond_In_SoundSet";
					id=202;
				};
				class GasolineCanister_Fill_Pond_Out
				{
					soundSet="GasolineCanister_Fill_Pond_Out_SoundSet";
					id=206;
				};
				class GasolineCanister_Fill_Pond_Loop
				{
					soundSet="GasolineCanister_Fill_Pond_Loop_SoundSet";
					id=209;
				};
			};
		};
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\vehicles\parts\data\jerrycan.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\vehicles\parts\data\jerrycan.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\vehicles\parts\data\jerrycan_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\vehicles\parts\data\jerrycan_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\vehicles\parts\data\jerrycan_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyPart
	{
		scope=2;
		simulation="ProxyInventory";
		model="";
		inventorySlot="";
		autocenter=0;
		animated=0;
		shadow=1;
		reversed=1;
	};
	class ProxyBattery_truck: ProxyPart
	{
		model="DZ\vehicles\parts\battery_truck.p3d";
		inventorySlot[]=
		{
			"TruckBattery",
			"LargeBattery"
		};
	};
	class ProxyBattery_Car: ProxyPart
	{
		model="DZ\vehicles\parts\battery_car.p3d";
		inventorySlot[]=
		{
			"CarBattery",
			"LargeBattery"
		};
	};
	class Proxysparkplug: ProxyPart
	{
		model="DZ\vehicles\parts\sparkplug.p3d";
		inventorySlot="SparkPlug";
	};
	class ProxyGlowplug: ProxyPart
	{
		model="DZ\vehicles\parts\Glowplug.p3d";
		inventorySlot="GlowPlug";
	};
	class ProxyReplacement_Headlight: ProxyPart
	{
		model="DZ\vehicles\parts\Replacement_Headlight.p3d";
		inventorySlot[]=
		{
			"Reflector_1_1",
			"Reflector_2_1"
		};
	};
	class ProxyRadiator_car: ProxyPart
	{
		model="DZ\vehicles\parts\Radiator_car.p3d";
		inventorySlot="CarRadiator";
	};
};

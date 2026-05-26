class CfgPatches
{
	class DZ_Gear_Tools
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Switchable_Base;
	class Powered_Base;
	class FishingRod_Base;
	class FishingRod_Base_New: FishingRod_Base
	{
	};
	class ExplosivesBase;
	class AlarmClock_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="$STR_CfgVehicles_AlarmClock0";
		descriptionShort="$STR_CfgVehicles_AlarmClock1";
		model="\dz\gear\tools\AlarmClock.p3d";
		isMeleeWeapon=1;
		itemSize[]={2,2};
		weight=250;
		inventorySlot[]=
		{
			"TriggerAlarmClock"
		};
		soundImpactType="metal";
		class AnimationSources
		{
			class ClockAlarm
			{
				source="user";
				initPhase=0;
				animPeriod=5;
			};
		};
		class NoiseAlarmClock
		{
			strength=200;
			type="sound";
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\alarmclock_blue_co.paa"
		};
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
								"dz\weapons\attachments\optics\data\lensglass_ca.paa",
								"dz\gear\tools\data\alarmclock_glass.rvmat",
								"dz\gear\tools\data\alarmclock.rvmat",
								"dz\gear\tools\data\alarmclock_arrows.rvmat",
								"dz\gear\tools\data\alarmclock_arrows_destruct.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"dz\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"dz\gear\tools\data\alarmclock_glass_damage.rvmat",
								"dz\gear\tools\data\alarmclock_damage.rvmat",
								"dz\gear\tools\data\alarmclock_arrows_damage.rvmat",
								"dz\gear\tools\data\alarmclock_arrows_destruct.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"dz\gear\tools\data\alarmclock_glass_destruct.rvmat",
								"dz\gear\tools\data\alarmclock_destruct.rvmat",
								"dz\gear\tools\data\alarmclock_arrows_destruct.rvmat",
								"dz\gear\tools\data\alarmclock_arrows.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class AlarmClock_Red: AlarmClock_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\alarmclock_co.paa"
		};
	};
	class AlarmClock_Blue: AlarmClock_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\alarmclock_blue_co.paa"
		};
	};
	class AlarmClock_Green: AlarmClock_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\alarmclock_green_co.paa"
		};
	};
	class KitchenTimer: Inventory_Base
	{
		scope=2;
		displayName="$STR_KitchenTimer0";
		descriptionShort="$STR_KitchenTimer1";
		model="\dz\gear\tools\KitchenTimer.p3d";
		isMeleeWeapon=1;
		itemSize[]={1,1};
		weight=200;
		inventorySlot[]=
		{
			"TriggerKitchenTimer"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\kitchentimer_co.paa"
		};
		soundImpactType="metal";
		class AnimationSources
		{
			class ClockAlarm
			{
				source="user";
				initPhase=0;
				animPeriod=5;
			};
		};
		class NoiseKitchenTimer
		{
			strength=200;
			type="sound";
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
								"DZ\gear\tools\data\KitchenTimer.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\KitchenTimer.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\KitchenTimer_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\KitchenTimer_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\KitchenTimer_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Flashlight: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Flashlight0";
		descriptionShort="$STR_CfgVehicles_Flashlight1";
		model="\DZ\gear\tools\flashlight.p3d";
		rotationFlags=34;
		itemSize[]={3,1};
		weight=210;
		animClass="Pistol";
		repairableWithKits[]={7};
		repairCosts[]={25};
		attachments[]=
		{
			"BatteryD"
		};
		soundImpactType="plastic";
		hiddenSelections[]=
		{
			"zbytek",
			"reflector",
			"glass",
			"reflector_far"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_old_co.paa",
			"dz\gear\tools\data\flashlight_glass.paa",
			"dz\gear\tools\data\flashlight_old_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\flashlight_old.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\flashlight_old.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\flashlight_old.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\flashlight_old_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\flashlight_old_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\flashlight_old_destruct.rvmat"
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
				ammo="MeleeFistLight";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFistHeavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFistHeavy";
				range=2.8;
			};
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Attack_flashlight_Light1
				{
					soundSet="Char_Attack_pipemetal_light1_SoundSet";
					id=806;
				};
				class Attack_flashlight_Light2
				{
					soundSet="Char_Attack_pipemetal_light2_SoundSet";
					id=807;
				};
				class Attack_flashlight_Heavy1
				{
					soundSet="Char_Attack_pipemetal_heavy1_SoundSet";
					id=808;
				};
				class Attack_flashlight_Heavy2
				{
					soundSet="Char_Attack_pipemetal_heavy2_SoundSet";
					id=809;
				};
			};
		};
	};
	class Raycaster: Flashlight
	{
		scope=2;
		displayName="Raycast Scanner";
		descriptionShort="Debug item for raycast experimenting.";
		model="\DZ\gear\tools\flashlight.p3d";
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=1;
		};
	};
	class Pen_ColorBase: Inventory_Base
	{
		displayName="$STR_CfgVehicles_Pen_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Pen_ColorBase1";
		model="\dz\gear\tools\Pen.p3d";
		animClass="Knife";
		itemSize[]={1,1};
		rotationFlags=17;
		weight=12;
		lootTag[]=
		{
			"Work",
			"Office",
			"Civilian"
		};
		writingColor="#000000";
		absorbency=0.1;
		fragility=0.0099999998;
		lootCategory="Tools";
		soundImpactType="plastic";
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
								"DZ\gear\tools\data\flashlight_old.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\flashlight_old.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\flashlight_old_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\flashlight_old_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\flashlight_old_destruct.rvmat"
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
				ammo="MeleeFistLight";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFistHeavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFistHeavy";
				range=2.8;
			};
		};
	};
	class Pen_Black: Pen_ColorBase
	{
		scope=2;
		writingColor="#000000";
	};
	class Pen_Red: Pen_ColorBase
	{
		scope=2;
		writingColor="#B40404";
	};
	class Pen_Green: Pen_ColorBase
	{
		scope=2;
		writingColor="#088A08";
	};
	class Pen_Blue: Pen_ColorBase
	{
		scope=2;
		writingColor="#0431B4";
	};
	class CanOpener: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_CanOpener0";
		descriptionShort="$STR_CfgVehicles_CanOpener1";
		model="\dz\gear\tools\CanOpener.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		rotationFlags=12;
		isMeleeWeapon=1;
		itemSize[]={1,2};
		weight=150;
		fragility=0.0099999998;
		openItemSpillRange[]={0,0};
		soundImpactType="metal";
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
								"DZ\gear\tools\data\Loot_CanOpener.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Loot_CanOpener.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Loot_CanOpener_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Loot_CanOpener_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Loot_CanOpener_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Heatpack: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Heatpack0";
		descriptionShort="$STR_CfgVehicles_Heatpack1";
		model="\DZ\gear\tools\Heatpack.p3d";
		animClass="Knife";
		rotationFlags=17;
		itemSize[]={1,2};
		varEnergyInit=1000;
		varEnergyMin=0;
		varEnergyMax=1000;
		weightPerQuantityUnit=0;
		temperaturePerQuantityWeight=4;
		varTemperatureMax=80;
		varTemperatureMin=25;
		weight=150;
		fragility=0.0099999998;
		soundImpactType="plastic";
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
								"DZ\gear\tools\data\heat_pack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\heat_pack.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\heat_pack_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\heat_pack_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\heat_pack_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class EnergyManager
		{
			energyAtSpawn=1200;
			energyUsagePerSecond=1;
			updateInterval=40;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class MessTin: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_MessTin0";
		descriptionShort="$STR_CfgVehicles_MessTin1";
		model="\dz\gear\tools\Mess_tin.p3d";
		animClass="Knife";
		weight=170;
		itemSize[]={4,3};
		fragility=0.0099999998;
		lootCategory="Tools";
		soundImpactType="metal";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFistLight";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFistHeavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFistHeavy";
				range=2.8;
			};
		};
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
								"DZ\gear\tools\data\Loot_MessTin.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Loot_MessTin.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Loot_MessTin_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Loot_MessTin_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Loot_MessTin_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Pliers: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Pliers0";
		descriptionShort="$STR_CfgVehicles_Pliers1";
		model="\dz\gear\tools\Pliers.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		RestrainUnlockType=1;
		build_action_type=1;
		dismantle_action_type=1;
		rotationFlags=17;
		weight=240;
		fragility=0.0099999998;
		itemSize[]={1,3};
		openItemSpillRange[]={25,40};
		soundImpactType="metal";
		compatibleLocks[]={4};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFistLight";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFistHeavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFistHeavy";
				range=2.8;
			};
		};
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
								"DZ\gear\tools\data\pliers.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\pliers.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\pliers_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\pliers_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\pliers_destruct.rvmat"
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
				class pickUpItem
				{
					soundSet="pickUpPliers_SoundSet";
					id=797;
				};
				class Pliers_loop
				{
					soundSet="Pliers_loop_SoundSet";
					id=203;
				};
			};
		};
	};
	class Lockpick: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Lockpick0";
		descriptionShort="$STR_CfgVehicles_Lockpick1";
		model="\dz\gear\tools\Lockpick.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		RestrainUnlockType=0;
		rotationFlags=17;
		isLockpick=1;
		itemSize[]={1,2};
		weight=190;
		fragility=0.0099999998;
		soundImpactType="metal";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeFistLight";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFistHeavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFistHeavy";
				range=2.8;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=125;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\Lockpick.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Lockpick.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Lockpick_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Lockpick_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Lockpick_destruct.rvmat"
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
				class lockpicker_move_in
				{
					soundSet="lockpicker_move_in_SoundSet";
					id=110202;
				};
				class lockpicker_move_out
				{
					soundSet="lockpicker_move_out_SoundSet";
					id=110203;
				};
				class lockpicker_loop
				{
					soundSet="lockpicker_loop_SoundSet";
					id=203;
				};
				class lockpicker_end
				{
					soundSet="lockpicker_end_SoundSet";
					id=110204;
				};
			};
		};
	};
	class WeaponCleaningKit: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_WeaponCleaningKit0";
		descriptionShort="$STR_CfgVehicles_WeaponCleaningKit1";
		model="\dz\gear\tools\cleaning_kit_wood.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		rotationFlags=17;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		weight=780;
		weightPerQuantityUnit=0;
		itemSize[]={2,3};
		fragility=0.0099999998;
		repairKitType=1;
		soundImpactType="wood";
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
								"DZ\gear\tools\data\cleaning_kit_wood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\cleaning_kit_wood_destruct.rvmat"
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
				ammo="MeleeFistLight";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFistHeavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFistHeavy";
				range=2.8;
			};
		};
	};
	class SewingKit: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SewingKit0";
		descriptionShort="$STR_CfgVehicles_SewingKit1";
		model="\dz\gear\tools\sewing_kit.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		rotationFlags=17;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		itemSize[]={1,2};
		weight=210;
		weightPerQuantityUnit=0.2;
		fragility=0.0099999998;
		repairKitType=2;
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
								"DZ\gear\tools\data\sewing_kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\sewing_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\sewing_kit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\sewing_kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\sewing_kit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class Stitch
				{
					soundSet="StitchUpSelf_SoundSet";
					id=201;
				};
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="sewingkit_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class LeatherSewingKit: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_LeatherSewingKit0";
		descriptionShort="$STR_CfgVehicles_LeatherSewingKit1";
		model="\dz\gear\tools\leather_sewing_kit.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		rotationFlags=1;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		weight=1200;
		weightPerQuantityUnit=0.30000001;
		itemSize[]={2,3};
		fragility=0.0099999998;
		repairKitType=3;
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
								"DZ\gear\tools\data\leather_sewing_kit.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\leather_sewing_kit_destruct.rvmat"
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
				class Stitch
				{
					soundSet="StitchUpSelf_SoundSet";
					id=201;
				};
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="sewingkit_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Handcuffs: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Handcuffs0";
		descriptionShort="$STR_CfgVehicles_Handcuffs1";
		model="\dz\gear\tools\Handcuffs.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		itemSize[]={2,1};
		rotationFlags=17;
		weight=380;
		fragility=0.0099999998;
		OnRestrainChange="HandcuffsLocked";
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
								"DZ\gear\tools\data\Handcuff.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Handcuff.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Handcuff_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Handcuff_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Handcuff_destruct.rvmat"
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
				ammo="MeleeFistLight";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFistHeavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFistHeavy";
				range=2.8;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class handcuff_open
				{
					soundSet="handcuff_open_SoundSet";
					id=202;
				};
				class handcuff_struggle
				{
					soundSet="handcuff_struggle_SoundSet";
					id=203;
				};
				class pickup
				{
					soundSet="handcuff_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class HandcuffsLocked: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_HandcuffsLocked0";
		model="\dz\gear\tools\Handcuffs_locked.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		itemSize[]={2,1};
		rotationFlags=17;
		weight=380;
		fragility=0.0099999998;
		OnRestrainChange="Handcuffs";
		CanBeUnrestrainedBy[]=
		{
			"HandcuffKeys",
			"3",
			"Hacksaw",
			"15",
			"Pliers",
			"25",
			"Lockpick",
			"10",
			"HandSaw",
			"15"
		};
		CanBeUnrestrainedByDMG[]={5,30,30,12,30};
		StruggleLength=20;
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
								"DZ\gear\tools\data\Handcuff.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Handcuff.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Handcuff_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Handcuff_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Handcuff_destruct.rvmat"
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
				ammo="MeleeFistLight";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeFistHeavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeFistHeavy";
				range=2.8;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class handcuff_open
				{
					soundSet="handcuff_open_SoundSet";
					id=202;
				};
				class handcuff_struggle
				{
					soundSet="handcuff_struggle_SoundSet";
					id=203;
				};
			};
		};
	};
	class HandcuffKeys: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_HandcuffKeys0";
		descriptionShort="$STR_CfgVehicles_HandcuffKeys1";
		model="\dz\gear\tools\Handcuff_Keys.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		RestrainUnlockType=0;
		weight=4;
		itemSize[]={1,1};
		fragility=0.0099999998;
		animClass="Knife";
		soundImpactType="metal";
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
								"DZ\gear\tools\data\Handcuff_Key.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Handcuff_Key.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Handcuff_Key_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Handcuff_Key_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Handcuff_Key_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class ScientificBriefcaseKeys: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_ScientificBriefcaseKeys0";
		descriptionShort="$STR_CfgVehicles_ScientificBriefcaseKeys1";
		model="\dz\gear\tools\Handcuff_Keys.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		weight=4;
		itemSize[]={1,1};
		fragility=0.0099999998;
		animClass="Knife";
		soundImpactType="metal";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\ScientificCaseKeys_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\ScientificCaseKeys.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					RefTexsMats[]=
					{
						"dz\gear\tools\data\handcuff_key.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\gear\tools\data\ScientificCaseKeys.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\gear\tools\data\ScientificCaseKeys.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\gear\tools\data\ScientificCaseKeys_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\gear\tools\data\ScientificCaseKeys_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\gear\tools\data\ScientificCaseKeys_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class ShippingContainerKeys_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="$STR_CfgVehicles_ContainerKey0";
		descriptionShort="$STR_CfgVehicles_ContainerKey1";
		model="\dz\gear\tools\ShippingContainerKeys.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		weight=4;
		itemSize[]={1,1};
		fragility=0.0099999998;
		animClass="Knife";
		soundImpactType="metal";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\ShippingContainerKeys.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\ShippingContainerKeys.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\ShippingContainerKeys.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\ShippingContainerKeys_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\ShippingContainerKeys_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\ShippingContainerKeys_destruct.rvmat"
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
				class lockpicker_move_in
				{
					soundSet="lockpicker_move_in_SoundSet";
					id=110202;
				};
				class lockpicker_move_out
				{
					soundSet="lockpicker_move_out_SoundSet";
					id=110203;
				};
				class lockpicker_loop
				{
					soundSet="lockpicker_loop_SoundSet";
					id=203;
				};
				class lockpicker_end
				{
					soundSet="lockpicker_end_SoundSet";
					id=110204;
				};
			};
		};
	};
	class ShippingContainerKeys_Blue: ShippingContainerKeys_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\ShippingContainerKeys_blue_CO.paa"
		};
	};
	class ShippingContainerKeys_Orange: ShippingContainerKeys_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\ShippingContainerKeys_orange_CO.paa"
		};
	};
	class ShippingContainerKeys_Yellow: ShippingContainerKeys_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\ShippingContainerKeys_yellow_CO.paa"
		};
	};
	class ShippingContainerKeys_Red: ShippingContainerKeys_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\ShippingContainerKeys_red_CO.paa"
		};
	};
	class Cassette: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Cassette0";
		descriptionShort="$STR_CfgVehicles_Cassette1";
		model="\dz\gear\tools\cassette.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		weight=80;
		absorbency=0.5;
		itemSize[]={2,1};
		soundImpactType="plastic";
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
								"DZ\gear\tools\data\cassette.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\cassette.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\cassette_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\cassette_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\cassette_destruct.rvmat"
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
	};
	class Shovel: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Shovel0";
		descriptionShort="$STR_CfgVehicles_Shovel1";
		model="\dz\gear\tools\Shovel.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		weight=3000;
		itemSize[]={2,8};
		fragility=0.0080000004;
		itemBehaviour=2;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		suicideAnim="pitchfork";
		build_action_type=4;
		dismantle_action_type=4;
		openItemSpillRange[]={30,60};
		soundImpactType="metal";
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
								"DZ\gear\tools\data\shovel.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\shovel.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\shovel_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\shovel_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\shovel_destruct.rvmat"
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
				ammo="MeleeBluntLight_3";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_3";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_3";
				range=3.7;
			};
		};
		class Horticulture
		{
			ToolAnim="DIGGINGSHOVEL";
			DiggingTimeToComplete=4.5;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpShovel_Light
				{
					soundSet="pickUpShovelLight_SoundSet";
					id=796;
				};
				class pickUpShovel
				{
					soundSet="pickUpShovel_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="shovel_drop_SoundSet";
					id=898;
				};
				class ShoulderR_Hide
				{
					soundset="ShoulderR_Hide_SoundSet";
					id=1210;
				};
				class ShoulderR_Show
				{
					soundset="ShoulderR_Show_SoundSet";
					id=1211;
				};
			};
			class Sound
			{
				class SurfaceDig
				{
					class DigPrimary
					{
						default=887;
						sakhal_snow=900;
						sakhal_snow_forest=900;
						sakhal_grass_brown=900;
						sakhal_ice_sea=905;
						sakhal_ice_lake=905;
					};
					class DigSecondary
					{
						default=888;
						sakhal_snow=901;
						sakhal_snow_forest=901;
						sakhal_grass_brown=901;
						sakhal_ice_sea=904;
						sakhal_ice_lake=904;
					};
				};
			};
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={0,-0.029999999,0.039999999};
				orientation[]={55,0,0};
			};
			class Melee
			{
				position[]={0,-0.050000001,0};
				orientation[]={110,0,0};
			};
		};
	};
	class FieldShovel: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_FieldShovel0";
		descriptionShort="$STR_CfgVehicles_FieldShovel1";
		model="\dz\gear\tools\CSLA_Field_Shovel.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Backpack_1"
		};
		suicideAnim="woodaxe";
		weight=1800;
		itemSize[]={2,5};
		build_action_type=4;
		dismantle_action_type=4;
		openItemSpillRange[]={30,60};
		soundImpactType="metal";
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
								"DZ\gear\tools\data\CSLA_Field_Shovel.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\CSLA_Field_Shovel.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\CSLA_Field_Shovel_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\CSLA_Field_Shovel_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\CSLA_Field_Shovel_destruct.rvmat"
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
				ammo="MeleeSharpLight_3";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_3";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_3";
				range=3.3;
			};
		};
		class Horticulture
		{
			ToolAnim="DIGGINGSHOVEL";
			DiggingTimeToComplete=5;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpShovel_Light
				{
					soundSet="pickUpShovelLight_SoundSet";
					id=796;
				};
				class pickUpShovel
				{
					soundSet="pickUpShovel_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="shovel_drop_SoundSet";
					id=898;
				};
				class ShoulderR_Hide
				{
					soundset="ShoulderR_Hide_SoundSet";
					id=1210;
				};
				class ShoulderR_Show
				{
					soundset="ShoulderR_Show_SoundSet";
					id=1211;
				};
			};
			class Sound
			{
				class SurfaceDig
				{
					class DigPrimary
					{
						default=887;
						sakhal_snow=900;
						sakhal_snow_forest=900;
						sakhal_grass_brown=900;
						sakhal_ice_sea=905;
						sakhal_ice_lake=905;
					};
					class DigSecondary
					{
						default=888;
						sakhal_snow=901;
						sakhal_snow_forest=901;
						sakhal_grass_brown=901;
						sakhal_ice_sea=904;
						sakhal_ice_lake=904;
					};
				};
			};
		};
	};
	class Crowbar: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Crowbar0";
		descriptionShort="$STR_CfgVehicles_Crowbar1";
		model="\dz\gear\tools\Crowbar.p3d";
		debug_ItemCategory=2;
		rotationFlags=12;
		repairableWithKits[]={4};
		repairCosts[]={20};
		build_action_type=0;
		dismantle_action_type=10;
		weight=4400;
		itemSize[]={1,6};
		fragility=0.001;
		itemBehaviour=1;
		openItemSpillRange[]={20,50};
		inventorySlot[]=
		{
			"Backpack_1"
		};
		suicideAnim="woodaxe";
		isMeleeWeapon=1;
		soundImpactType="metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\Crowbar.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Crowbar.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Crowbar_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Crowbar_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Crowbar_destruct.rvmat"
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
				ammo="MeleeBluntLight_2";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_2";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_2";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="crowbar_drop_SoundSet";
					id=898;
				};
				class Crowbar_loop
				{
					soundSet="Crowbar_loop_SoundSet";
					id=1119;
				};
				class Crowbar_end
				{
					soundSet="Crowbar_end_SoundSet";
					id=1120;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class minePickAxe_SoundSet
				{
					soundSet="minePickAxe_SoundSet";
					id=11161;
				};
			};
		};
	};
	class FireExtinguisher: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_FireExtinguisher0";
		descriptionShort="$STR_CfgVehicles_FireExtinguisher1";
		model="\dz\gear\tools\FireExtinguisher.p3d";
		debug_ItemCategory=2;
		rotationFlags="17+								2";
		weight=7700;
		itemSize[]={3,8};
		fragility=0.001;
		itemBehaviour=2;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		quantityBar=1;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=6000;
		varQuantityMin=0;
		varQuantityMax=6000;
		soundImpactType="metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\fire_extinguisher.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\fire_extinguisher.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\fire_extinguisher_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\fire_extinguisher_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\fire_extinguisher_destruct.rvmat"
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
				ammo="MeleeFireExtinguisher";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeFireExtinguisher_Heavy";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeFireExtinguisher_Heavy";
				range=3.3;
			};
		};
	};
	class Hammer: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Hammer0";
		descriptionShort="$STR_CfgVehicles_Hammer1";
		model="\dz\gear\tools\Hammer.p3d";
		debug_ItemCategory=2;
		build_action_type=10;
		dismantle_action_type=0;
		rotationFlags=17;
		weight=940;
		itemSize[]={2,3};
		fragility=0.0080000004;
		openItemSpillRange[]={20,50};
		soundImpactType="metal";
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
								"DZ\gear\tools\data\Hammer.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Hammer.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Hammer_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Hammer_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Hammer_destruct.rvmat"
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
				ammo="MeleeBluntLight_2";
				range=1.1;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_2";
				range=1.1;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_2";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class MinningBuilding
				{
					soundLookupTable="MinningBuilding_LookupTable";
					id=11161;
				};
			};
		};
	};
	class MeatTenderizer: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_MeatTenderizer0";
		descriptionShort="$STR_CfgVehicles_MeatTenderizer1";
		model="\dz\gear\tools\Meat_Tenderizer.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		build_action_type=10;
		dismantle_action_type=0;
		weight=350;
		itemSize[]={2,3};
		fragility=0.0080000004;
		openItemSpillRange[]={30,60};
		soundImpactType="wood";
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
								"DZ\gear\tools\data\Meat_Tenderizer.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Meat_Tenderizer.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Meat_Tenderizer_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Meat_Tenderizer_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Meat_Tenderizer_destruct.rvmat"
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
				ammo="MeleeBluntLight_2";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_2";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_2";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class MinningBuilding
				{
					soundLookupTable="MinningBuilding_LookupTable";
					id=11161;
				};
			};
		};
	};
	class Wrench: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Wrench0";
		descriptionShort="$STR_CfgVehicles_Wrench1";
		model="\dz\gear\tools\Wrench.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		weight=340;
		itemSize[]={1,3};
		fragility=0.001;
		openItemSpillRange[]={20,40};
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
								"DZ\gear\tools\data\wrench.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\wrench.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\wrench_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\wrench_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\wrench_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		compatibleLocks[]={2};
		lockSoundSet="wrench_loop_SoundSet";
		soundImpactType="metal";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBluntLight_1";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_1";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_1";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="wrench_drop_SoundSet";
					id=898;
				};
				class wrench_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class wrench_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
				class mineScrewdriver_SoundSet
				{
					soundSet="mineScrewdriver_SoundSet";
					id=11161;
				};
			};
		};
	};
	class LugWrench: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_LugWrench0";
		descriptionShort="$STR_CfgVehicles_LugWrench1";
		model="\dz\gear\tools\Lug_wrench.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		weight=1600;
		itemSize[]={1,5};
		fragility=0.001;
		inventorySlot[]=
		{
			"Backpack_1"
		};
		openItemSpillRange[]={30,60};
		compatibleLocks[]={3};
		lockSoundSet="wrench_loop_SoundSet";
		soundImpactType="metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\Lug_Wrench.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Lug_Wrench.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Lug_Wrench_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Lug_Wrench_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Lug_Wrench_destruct.rvmat"
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
				ammo="MeleeBluntLight_2";
				range=1.7;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_2";
				range=1.3;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_2";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="wrench_drop_SoundSet";
					id=898;
				};
				class wrench_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class wrench_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
				class mineScrewdriver_SoundSet
				{
					soundSet="mineScrewdriver_SoundSet";
					id=11161;
				};
			};
		};
	};
	class Pipe: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Pipe0";
		descriptionShort="$STR_CfgVehicles_Pipe1";
		model="\dz\gear\tools\metal_pipe.p3d";
		debug_ItemCategory=2;
		rotationFlags=12;
		isMeleeWeapon=1;
		weight=3200;
		itemSize[]={1,6};
		fragility=0.001;
		itemBehaviour=1;
		inventorySlot[]=
		{
			"Backpack_1"
		};
		soundImpactType="metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\metal_pipe.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\metal_pipe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\metal_pipe_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\metal_pipe_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\metal_pipe_destruct.rvmat"
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
				ammo="MeleeBluntLight_2";
				range=1.7;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_2";
				range=1.3;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_2";
				range=4.0999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Attack_pipemetalhollow_Light1
				{
					soundSet="Char_Attack_pipemetalhollow_light1_SoundSet";
					id=811;
				};
				class Attack_pipemetalhollow_Light2
				{
					soundSet="Char_Attack_pipemetalhollow_light2_SoundSet";
					id=812;
				};
				class Attack_pipemetalhollow_Heavy1
				{
					soundSet="Char_Attack_pipemetalhollow_heavy1_SoundSet";
					id=813;
				};
				class Attack_pipemetalhollow_Heavy2
				{
					soundSet="Char_Attack_pipemetalhollow_heavy2_SoundSet";
					id=814;
				};
				class drop
				{
					soundset="crowbar_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Screwdriver: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Screwdriver0";
		descriptionShort="$STR_CfgVehicles_Screwdriver1";
		model="\dz\gear\tools\Screwdriver.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		repairableWithKits[]={4};
		repairCosts[]={5};
		rotationFlags=17;
		suicideAnim="onehanded";
		RestrainUnlockType=1;
		weight=150;
		itemSize[]={1,3};
		fragility=0.0080000004;
		openItemSpillRange[]={20,40};
		action="GestureMeleeBayonetStab";
		lockSoundSet="wrench_loop_SoundSet";
		compatibleLocks[]={1};
		soundImpactType="metal";
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
								"DZ\gear\tools\data\screwdriver.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\screwdriver.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\screwdriver_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\screwdriver_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\screwdriver_destruct.rvmat"
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
				ammo="MeleeSharpLight_1";
				range=1.1;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_1";
				range=1.1;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_1";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class mineScrewdriver_SoundSet
				{
					soundSet="mineScrewdriver_SoundSet";
					id=11161;
				};
			};
		};
	};
	class Sickle: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Sickle0";
		descriptionShort="$STR_CfgVehicles_Sickle1";
		model="\dz\gear\tools\sickle.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		itemInfo[]=
		{
			"Knife"
		};
		repairableWithKits[]={4};
		repairCosts[]={15};
		rotationFlags=17;
		suicideAnim="sickle";
		RestrainUnlockType=1;
		weight=350;
		itemSize[]={2,3};
		openItemSpillRange[]={10,30};
		soundImpactType="metal";
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
								"DZ\gear\tools\data\sickle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\sickle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\sickle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\sickle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\sickle_destruct.rvmat"
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
				ammo="MeleeSharpLight_2";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_2";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_2";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
			};
			class Sound
			{
				class SurfaceDig
				{
					class DigPrimary
					{
						default=907;
						sakhal_snow=907;
						sakhal_snow_forest=907;
						sakhal_grass_brown=907;
					};
				};
			};
		};
	};
	class Hacksaw: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Hacksaw0";
		descriptionShort="$STR_CfgVehicles_Hacksaw1";
		model="\dz\gear\tools\hacksaw.p3d";
		debug_ItemCategory=2;
		action="GestureMeleeBayonetStab";
		repairableWithKits[]={4};
		repairCosts[]={15};
		inventorySlot[]=
		{
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Knife"
		};
		rotationFlags=17;
		RestrainUnlockType=1;
		weight=800;
		itemSize[]={4,2};
		fragility=0.079999998;
		dismantle_action_type=64;
		openItemSpillRange[]={10,40};
		soundImpactType="metal";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_1";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_1";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_1";
				range=3.3;
			};
		};
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
								"DZ\gear\tools\data\hacksaw.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\hacksaw.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\hacksaw_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\hacksaw_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\hacksaw_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class InventorySlotsOffsets
		{
			class Backpack_1
			{
				position[]={0.039999999,0.34999999,0};
				orientation[]={180,-180,90};
			};
		};
	};
	class KitchenKnife: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_KitchenKnife0";
		descriptionShort="$STR_CfgVehicles_KitchenKnife1";
		model="\dz\gear\tools\kitchenknife.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		repairableWithKits[]={4};
		repairCosts[]={5};
		itemInfo[]=
		{
			"Knife"
		};
		inventorySlot[]=
		{
			"Knife"
		};
		RestrainUnlockType=1;
		rotationFlags=17;
		isMeleeWeapon=1;
		suicideAnim="onehanded";
		weight=170;
		itemSize[]={1,3};
		openItemSpillRange[]={10,20};
		soundImpactType="metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=85;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\kitchenknife.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\kitchenknife.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\kitchenknife_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\kitchenknife_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\kitchenknife_destruct.rvmat"
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
				ammo="MeleeSharpLight_2";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_2";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_2";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class ChoppingTree
				{
					soundSet="ChoppingTree_SoundSet";
					id=415;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
			};
			class Sound
			{
				class SurfaceDig
				{
					class DigPrimary
					{
						default=906;
						sakhal_snow=906;
						sakhal_snow_forest=906;
						sakhal_grass_brown=906;
					};
				};
			};
		};
	};
	class SteakKnife: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SteakKnife0";
		descriptionShort="$STR_CfgVehicles_SteakKnife1";
		model="\dz\gear\tools\steak_knife.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		repairableWithKits[]={4};
		repairCosts[]={5};
		itemInfo[]=
		{
			"Knife"
		};
		RestrainUnlockType=1;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Knife"
		};
		isMeleeWeapon=1;
		suicideAnim="onehanded";
		weight=90;
		itemSize[]={1,2};
		openItemSpillRange[]={10,20};
		soundImpactType="metal";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=65;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\small_steak_knife.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\small_steak_knife.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\small_steak_knife_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\small_steak_knife_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\small_steak_knife_destruct.rvmat"
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
				ammo="MeleeSharpLight_1";
				range=1.1;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_1";
				range=1.1;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_1";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class ChoppingTree
				{
					soundSet="ChoppingTree_SoundSet";
					id=415;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
			};
			class Sound
			{
				class SurfaceDig
				{
					class DigPrimary
					{
						default=906;
						sakhal_snow=906;
						sakhal_snow_forest=906;
						sakhal_grass_brown=906;
					};
				};
			};
		};
	};
	class HayHook: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_HayHook0";
		descriptionShort="$STR_CfgVehicles_HayHook1";
		model="\dz\gear\tools\Hay_Hook.p3d";
		debug_ItemCategory=2;
		animClass="Knife";
		repairableWithKits[]={4};
		repairCosts[]={8};
		RestrainUnlockType=1;
		rotationFlags=1;
		suicideAnim="onehanded";
		weight=250;
		itemSize[]={3,2};
		openItemSpillRange[]={10,30};
		soundImpactType="metal";
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
								"DZ\gear\tools\data\Hay_Hook.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Hay_Hook.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Hay_Hook_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Hay_Hook_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Hay_Hook_destruct.rvmat"
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
				ammo="MeleeSickle";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeSickle_Heavy";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeSickle_Heavy";
				range=3.3;
			};
		};
	};
	class StoneKnife: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_StoneKnife0";
		descriptionShort="$STR_CfgVehicles_StoneKnife1";
		model="\dz\gear\consumables\Stone_slice.p3d";
		debug_ItemCategory=2;
		itemInfo[]=
		{
			"Knife"
		};
		repairableWithKits[]={};
		repairCosts[]={5};
		rotationFlags=17;
		RestrainUnlockType=1;
		suicideAnim="onehanded";
		weight=260;
		itemSize[]={1,2};
		openItemSpillRange[]={10,30};
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=45;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\stone.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\stone.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\stone_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\stone_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\stone_destruct.rvmat"
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
				ammo="MeleeCraftedLight_1";
				range=1.1;
			};
			class Heavy
			{
				ammo="MeleeCraftedHeavy_1";
				range=1.1;
			};
			class Sprint
			{
				ammo="MeleeCraftedHeavy_1";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class ChoppingTree
				{
					soundSet="ChoppingTree_SoundSet";
					id=415;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
			};
			class Sound
			{
				class SurfaceDig
				{
					class DigPrimary
					{
						default=906;
						sakhal_snow=906;
						sakhal_snow_forest=906;
						sakhal_grass_brown=906;
					};
				};
			};
		};
	};
	class BoneKnife: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_BoneKnife0";
		descriptionShort="$STR_CfgVehicles_BoneKnife1";
		model="\dz\gear\tools\Bone_Knife.p3d";
		debug_ItemCategory=2;
		itemInfo[]=
		{
			"Knife"
		};
		repairableWithKits[]={};
		repairCosts[]={5};
		rotationFlags=17;
		RestrainUnlockType=1;
		suicideAnim="onehanded";
		weight=50;
		itemSize[]={1,2};
		openItemSpillRange[]={10,30};
		isMeleeWeapon=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=45;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\Bone_Knife.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Bone_Knife.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Bone_Knife_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Bone_Knife_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Bone_Knife_destruct.rvmat"
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
				ammo="MeleeCraftedLight_1";
				range=1.1;
			};
			class Heavy
			{
				ammo="MeleeCraftedHeavy_1";
				range=1.1;
			};
			class Sprint
			{
				ammo="MeleeCraftedHeavy_1";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class ChoppingTree
				{
					soundSet="ChoppingTree_SoundSet";
					id=415;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
			};
			class Sound
			{
				class SurfaceDig
				{
					class DigPrimary
					{
						default=906;
						sakhal_snow=906;
						sakhal_snow_forest=906;
						sakhal_grass_brown=906;
					};
				};
			};
		};
	};
	class Mace: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Mace0";
		descriptionShort="$STR_CfgVehicles_Mace1";
		model="\dz\gear\tools\Flanged_Mace.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		weight=1200;
		itemSize[]={2,4};
		itemBehaviour=1;
		openItemSpillRange[]={60,80};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		isMeleeWeapon=1;
		soundImpactType="metal";
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
								"DZ\gear\tools\data\Flanged_Mace.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Flanged_Mace.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Flanged_Mace_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Flanged_Mace_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Flanged_Mace_destruct.rvmat"
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
				ammo="MeleeBluntLight_5";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_5";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_5";
				range=3.7;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="wrench_drop_SoundSet";
					id=898;
				};
				class wrench_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class wrench_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
				class minePickAxe_SoundSet
				{
					soundSet="minePickAxe_SoundSet";
					id=11161;
				};
			};
		};
	};
	class FarmingHoe: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_FarmingHoe0";
		descriptionShort="$STR_CfgVehicles_FarmingHoe1";
		model="\dz\gear\tools\Farming_Hoe.p3d";
		debug_ItemCategory=2;
		rotationFlags=12;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		repairableWithKits[]={4};
		repairCosts[]={20};
		weight=1600;
		itemSize[]={2,7};
		openItemSpillRange[]={35,55};
		isMeleeWeapon=1;
		suicideAnim="hoe";
		build_action_type=4;
		dismantle_action_type=4;
		soundImpactType="metal";
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
								"DZ\gear\tools\data\Farming_Hoe.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Farming_Hoe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Farming_Hoe_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Farming_Hoe_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Farming_Hoe_destruct.rvmat"
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
				ammo="MeleeSharpLight_2";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_2";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_2";
				range=4.0999999;
			};
		};
		class Horticulture
		{
			ToolAnim="DIGGINGHOE";
			DiggingTimeToComplete=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpShovel_Light
				{
					soundSet="pickUpShovelLight_SoundSet";
					id=796;
				};
				class pickUpShovel
				{
					soundSet="pickUpShovel_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="shovel_drop_SoundSet";
					id=898;
				};
				class ShoulderR_Hide
				{
					soundset="ShoulderR_Hide_SoundSet";
					id=1210;
				};
				class ShoulderR_Show
				{
					soundset="ShoulderR_Show_SoundSet";
					id=1211;
				};
			};
			class Sound
			{
				class SurfaceDig
				{
					class DigPrimary
					{
						default=1;
						sakhal_snow=902;
						sakhal_snow_forest=902;
						sakhal_grass_brown=902;
						sakhal_ice_sea=904;
						sakhal_ice_lake=904;
					};
				};
			};
		};
	};
	class ImprovisedFishingRod: FishingRod_Base_New
	{
		scope=2;
		displayName="$STR_CfgVehicles_ImprovisedFishingRod0";
		descriptionShort="$STR_CfgVehicles_ImprovisedFishingRod1";
		model="\dz\gear\tools\ImprovisedFishingRod.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		weight=950;
		itemSize[]={1,9};
		itemBehaviour=1;
		absorbency=0.80000001;
		lootCategory="Crafted";
		attachments[]=
		{
			"Hook"
		};
		energyResources[]=
		{
			
			{
				"power",
				0.1
			}
		};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\crafting\data\wooden_stick.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\crafting\data\wooden_stick.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\crafting\data\wooden_stick_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\crafting\data\wooden_stick_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\crafting\data\wooden_stick_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="wood";
		class AnimEvents
		{
			class SoundWeapon
			{
				class Fishing_in_impro_SoundSet
				{
					soundSet="Fishing_in_impro_SoundSet";
					id=201;
				};
				class Fishing_check__impro_SoundSet
				{
					soundSet="Fishing_check_impro_SoundSet";
					id=202;
				};
				class Fishing_cancel_SoundSet
				{
					soundSet="Fishing_cancel_SoundSet";
					id=203;
				};
				class FishingRod_extend_impro_SoundSet
				{
					soundSet="FishingRod_extend_impro_SoundSet";
					id=204;
				};
				class FishingRod_retract__impro_SoundSet
				{
					soundSet="FishingRod_retract_impro_SoundSet";
					id=205;
				};
				class Fishing_puddle_SoundSet
				{
					soundSet="Fishing_puddle_SoundSet";
					id=206;
				};
				class Fishing_splash_SoundSet
				{
					soundSet="Fishing_splash_SoundSet";
					id=207;
				};
				class Fishing_splash_small_SoundSet
				{
					soundSet="Fishing_splash_small_SoundSet";
					id=208;
				};
				class Fish_idle_SoundSet
				{
					soundSet="Fish_idle__impro_SoundSet";
					id=210;
				};
				class Fish_bite_impro_SoundSet
				{
					soundSet="Fish_bite_impro_SoundSet";
					id=211;
				};
				class Fish_splash_random_SoundSet
				{
					soundSet="Fish_splash_random_SoundSet";
					id=212;
				};
				class Fish_success_SoundSet
				{
					soundSet="Fishing_success_SoundSet";
					id=213;
				};
				class Fish_bite_splash_SoundSet
				{
					soundSet="Fish_bite_splash_SoundSet";
					id=214;
				};
			};
		};
		class AnimationSources
		{
			class AnimateRod
			{
				source="user";
				initPhase=0;
				animPeriod=0.69999999;
			};
		};
		class Fishing
		{
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0.1;
			hookLossChanceMod=0.0099999998;
			baitLossChanceMod=0;
		};
	};
	class ObsoleteFishingRod: FishingRod_Base_New
	{
		scope=2;
		displayName="$STR_CfgVehicles_ObsoleteFishingRod0";
		descriptionShort="$STR_CfgVehicles_ObsoleteFishingRod1";
		model="\dz\gear\crafting\Wooden_stick.p3d";
		rotationFlags=17;
		weight=510;
		itemSize[]={2,9};
		itemBehaviour=2;
		absorbency=0.80000001;
		lootCategory="Crafted";
		attachments[]=
		{
			"Hook"
		};
		energyResources[]=
		{
			
			{
				"power",
				0.15000001
			}
		};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
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
								"DZ\gear\crafting\data\wooden_stick.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\crafting\data\wooden_stick.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\crafting\data\wooden_stick_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\crafting\data\wooden_stick_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\crafting\data\wooden_stick_destruct.rvmat"
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
				class Fishing_in_SoundSet
				{
					soundSet="Fishing_in_SoundSet";
					id=201;
				};
				class Fishing_check_SoundSet
				{
					soundSet="Fishing_check_SoundSet";
					id=202;
				};
				class Fishing_cancel_SoundSet
				{
					soundSet="Fishing_cancel_SoundSet";
					id=203;
				};
				class FishingRod_extend_SoundSet
				{
					soundSet="FishingRod_extend_SoundSet";
					id=204;
				};
				class FishingRod_retract_SoundSet
				{
					soundSet="FishingRod_retract_SoundSet";
					id=205;
				};
				class Fishing_puddle_SoundSet
				{
					soundSet="Fishing_puddle_SoundSet";
					id=206;
				};
				class Fishing_splash_SoundSet
				{
					soundSet="Fishing_splash_SoundSet";
					id=207;
				};
				class Fishing_splash_small_SoundSet
				{
					soundSet="Fishing_splash_small_SoundSet";
					id=208;
				};
				class Fish_struggling_SoundSet
				{
					soundSet="Fish_struggling_SoundSet";
					id=209;
				};
				class Fish_idle_SoundSet
				{
					soundSet="Fish_idle_SoundSet";
					id=210;
				};
				class Fish_bite_SoundSet
				{
					soundSet="Fish_bite_SoundSet";
					id=211;
				};
				class Fish_splash_random_SoundSet
				{
					soundSet="Fish_splash_random_SoundSet";
					id=212;
				};
				class Fish_success_SoundSet
				{
					soundSet="Fishing_success_SoundSet";
					id=213;
				};
				class Fish_bite_splash_SoundSet
				{
					soundSet="Fish_bite_splash_SoundSet";
					id=214;
				};
			};
		};
	};
	class FishingRod: FishingRod_Base_New
	{
		scope=2;
		displayName="$STR_CfgVehicles_FishingRod0";
		descriptionShort="$STR_CfgVehicles_FishingRod1";
		model="\dz\gear\tools\fishing_rod.p3d";
		debug_ItemCategory=2;
		rotationFlags=12;
		weight=910;
		itemSize[]={2,5};
		itemBehaviour=1;
		absorbency=0;
		attachments[]=
		{
			"Hook"
		};
		energyResources[]=
		{
			
			{
				"power",
				0.15000001
			}
		};
		soundImpactType="wood";
		inventorySlot[]=
		{
			"Backpack_1"
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=3.7;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\fishing_rod.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\fishing_rod.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\fishing_rod_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\fishing_rod_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\fishing_rod_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class AnimateRod
			{
				source="user";
				initPhase=0;
				animPeriod=0.69999999;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Fishing_in_SoundSet
				{
					soundSet="Fishing_in_SoundSet";
					id=201;
				};
				class Fishing_check_SoundSet
				{
					soundSet="Fishing_check_SoundSet";
					id=202;
				};
				class Fishing_cancel_SoundSet
				{
					soundSet="Fishing_cancel_SoundSet";
					id=203;
				};
				class FishingRod_extend_SoundSet
				{
					soundSet="FishingRod_extend_SoundSet";
					id=204;
				};
				class FishingRod_retract_SoundSet
				{
					soundSet="FishingRod_retract_SoundSet";
					id=205;
				};
				class Fishing_puddle_SoundSet
				{
					soundSet="Fishing_puddle_SoundSet";
					id=206;
				};
				class Fishing_splash_SoundSet
				{
					soundSet="Fishing_splash_SoundSet";
					id=207;
				};
				class Fishing_splash_small_SoundSet
				{
					soundSet="Fishing_splash_small_SoundSet";
					id=208;
				};
				class Fish_struggling_SoundSet
				{
					soundSet="Fish_struggling_SoundSet";
					id=209;
				};
				class Fish_idle_SoundSet
				{
					soundSet="Fish_idle_SoundSet";
					id=210;
				};
				class Fish_bite_SoundSet
				{
					soundSet="Fish_bite_SoundSet";
					id=211;
				};
				class Fish_splash_random_SoundSet
				{
					soundSet="Fish_splash_random_SoundSet";
					id=212;
				};
				class Fish_success_SoundSet
				{
					soundSet="Fishing_success_SoundSet";
					id=213;
				};
				class Fish_bite_splash_SoundSet
				{
					soundSet="Fish_bite_splash_SoundSet";
					id=214;
				};
			};
		};
		class Fishing
		{
			signalCycleTargetAdjustment=-3;
			signalCycleTargetEndAdjustment=-3;
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0.25;
			resultQuantityDispersionMax=0.34999999;
			hookLossChanceMod=0;
			baitLossChanceMod=0;
		};
	};
	class SledgeHammer: Inventory_Base
	{
		scope=2;
		debug_ItemCategory=2;
		displayName="$STR_CfgVehicles_SledgeHammer0";
		descriptionShort="$STR_CfgVehicles_SledgeHammer1";
		model="\dz\gear\tools\Sledge_Hammer.p3d";
		itemInfo[]=
		{
			"SledgeHammer"
		};
		rotationFlags=12;
		weight=5000;
		itemSize[]={2,6};
		itemBehaviour=2;
		openItemSpillRange[]={30,50};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		isMeleeWeapon=1;
		build_action_type=16;
		dismantle_action_type=16;
		soundImpactType="metal";
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
								"DZ\gear\tools\data\Sledge_Hammer.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Sledge_Hammer.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Sledge_Hammer_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Sledge_Hammer_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Sledge_Hammer_destruct.rvmat"
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
				ammo="MeleeBluntLight_5";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_5";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_5";
				range=3.7;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="woodaxe_drop_SoundSet";
					id=898;
				};
				class SledgeWoodHammer_loop
				{
					soundSet="SledgeWoodHammer_loop_SoundSet";
					id=1117;
				};
				class SledgeWoodHammer_end
				{
					soundSet="SledgeWoodHammer_end_SoundSet";
					id=1118;
				};
				class ShoulderR_Hide
				{
					soundset="ShoulderR_Hide_SoundSet";
					id=1210;
				};
				class ShoulderR_Show
				{
					soundset="ShoulderR_Show_SoundSet";
					id=1211;
				};
			};
		};
	};
	class Iceaxe: Inventory_Base
	{
		scope=2;
		debug_ItemCategory=2;
		displayName="$STR_CfgVehicles_Iceaxe0";
		descriptionShort="$STR_CfgVehicles_Iceaxe1";
		model="\dz\gear\tools\Ice_Axe.p3d";
		rotationFlags=17;
		weight=550;
		itemSize[]={2,4};
		inventorySlot[]=
		{
			"Backpack_1"
		};
		build_action_type=4;
		dismantle_action_type=14;
		repairableWithKits[]={4};
		repairCosts[]={20};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\melee\blade\data\Pickaxe_co.paa"
		};
		openItemSpillRange[]={20,40};
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
								"DZ\gear\tools\data\IceAxe.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\IceAxe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\IceAxe_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\IceAxe_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\IceAxe_destruct.rvmat"
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
				ammo="MeleeSharpLight_3";
				range=1.4;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_3";
				range=1.4;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_3";
				range=3.3;
			};
		};
		isMeleeWeapon=1;
		suicideAnim="woodaxe";
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="crowbar_drop_SoundSet";
					id=898;
				};
				class Crowbar_loop
				{
					soundSet="Crowbar_loop_SoundSet";
					id=1119;
				};
				class Crowbar_end
				{
					soundSet="Crowbar_end_SoundSet";
					id=1120;
				};
				class animalSkinning_in
				{
					soundSet="animalSkinning_in_SoundSet";
					id=516;
				};
				class animalSkinning
				{
					soundSet="animalSkinning_SoundSet";
					id=517;
				};
				class animalSkinning_out
				{
					soundSet="animalSkinning_out_SoundSet";
					id=518;
				};
				class minePickAxe_SoundSet
				{
					soundSet="minePickAxe_SoundSet";
					id=11161;
				};
			};
			class Sound
			{
				class SurfaceDig
				{
					class DigPrimary
					{
						default=907;
						sakhal_snow=907;
						sakhal_snow_forest=907;
						sakhal_grass_brown=907;
					};
				};
			};
		};
	};
	class Broom: Inventory_Base
	{
		scope=2;
		debug_ItemCategory=2;
		displayName="$STR_CfgVehicles_Broom0";
		descriptionShort="$STR_CfgVehicles_Broom1";
		model="\dz\gear\tools\broom.p3d";
		weight=450;
		weightPerQuantityUnit=0.25;
		itemSize[]={2,8};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\broom.rvmat"
		};
		rotationFlags=12;
		quantityShow=0;
		canBeSplit=0;
		stackedUnit="w";
		quantityBar=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=0;
		burnTimePerRag=120;
		burnTimePerFullLardDose=900;
		burnTimePerFullFuelDose=600;
		maxConsumableLardDose=200;
		maxConsumableFuelDose=200;
		soundImpactType="wood";
		class EnergyManager
		{
			autoSwitchOff=1;
			energyAtSpawn=1800;
			energyStorageMax=1800;
			energyUsagePerSecond=1;
			wetnessExposure=0.5;
			updateInterval=30;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=40;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
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
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.2;
			};
			class Default_SwitchedOn
			{
				ammo="MeleeLightBluntShock";
				range=1.6;
			};
			class Heavy_SwitchedOn
			{
				ammo="MeleeLightBluntShock_Heavy";
				range=1.6;
			};
			class Sprint_SwitchedOn
			{
				ammo="MeleeLightBluntShock_Heavy";
				range=2.2;
			};
		};
	};
	class Broom_Birch: Broom
	{
		scope=2;
		debug_ItemCategory=2;
		displayName="$STR_CfgVehicles_BirchBroom0";
		descriptionShort="$STR_CfgVehicles_BirchBroom1";
		model="\dz\gear\tools\broom_birch.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\broom_birch.rvmat"
		};
		rotationFlags=12;
		weight=670;
		weightPerQuantityUnit=0.34999999;
		itemSize[]={2,8};
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		varWetMax=0.49000001;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=40;
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
		};
	};
	class Paddle: Inventory_Base
	{
		scope=2;
		debug_ItemCategory=2;
		displayName="$STR_CfgVehicles_Paddle0";
		descriptionShort="$STR_CfgVehicles_Paddle1";
		model="\dz\gear\tools\canoe_paddle.p3d";
		rotationFlags=12;
		weight=800;
		itemSize[]={2,10};
		soundImpactType="wood";
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
								"DZ\gear\tools\data\Old_Canoe_Paddle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Old_Canoe_Paddle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Old_Canoe_Paddle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Old_Canoe_Paddle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Old_Canoe_Paddle_destruct.rvmat"
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
				ammo="MeleeWoodBlunt";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeWoodBlunt_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeWoodBlunt_Heavy";
				range=3.7;
			};
		};
	};
	class ElectronicRepairKit: Inventory_Base
	{
		scope=2;
		debug_ItemCategory=2;
		displayName="$STR_CfgVehicles_ElectronicRepairKit0";
		descriptionShort="$STR_CfgVehicles_ElectronicRepairKit1";
		model="\dz\gear\tools\electronicCase.p3d";
		animClass="Knife";
		rotationFlags=17;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		weight=1000;
		weightPerQuantityUnit=0;
		itemSize[]={2,3};
		repairKitType=7;
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
								"DZ\gear\tools\data\electronicCase.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\electronicCase.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\electronicCase_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\electronicCase_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\electronicCase_destruct.rvmat"
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
				class Stitch
				{
					soundSet="StitchUpSelf_SoundSet";
					id=201;
				};
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="sewingkit_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class EpoxyPutty: Inventory_Base
	{
		scope=2;
		debug_ItemCategory=2;
		displayName="$STR_CfgVehicles_EpoxyPutty0";
		descriptionShort="$STR_CfgVehicles_EpoxyPutty1";
		model="\dz\gear\tools\epoxy_putty.p3d";
		animClass="Knife";
		rotationFlags=17;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		weight=20;
		weightPerQuantityUnit=2;
		itemSize[]={1,2};
		repairKitType=8;
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
								"DZ\gear\tools\data\epoxy_putty.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\epoxy_putty.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\epoxy_putty_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\epoxy_putty_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\epoxy_putty_destruct.rvmat"
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
				class Stitch
				{
					soundSet="StitchUpSelf_SoundSet";
					id=201;
				};
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="sewingkit_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Whetstone: Inventory_Base
	{
		scope=2;
		debug_ItemCategory=2;
		displayName="$STR_CfgVehicles_Whetstone0";
		descriptionShort="$STR_CfgVehicles_Whetstone1";
		model="\dz\gear\tools\whetstone.p3d";
		animClass="Knife";
		rotationFlags=34;
		stackedUnit="percentage";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		weight=200;
		itemSize[]={1,2};
		repairKitType=4;
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
								"DZ\gear\tools\data\whetstone.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\whetstone.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\whetstone_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\whetstone_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\whetstone_destruct.rvmat"
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
				class Stitch
				{
					soundSet="StitchUpSelf_SoundSet";
					id=201;
				};
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="sewingkit_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class HandSaw: Inventory_Base
	{
		scope=2;
		debug_ItemCategory=2;
		displayName="$STR_CfgVehicles_HandSaw0";
		descriptionShort="$STR_CfgVehicles_HandSaw1";
		model="\dz\gear\tools\handsaw.p3d";
		repairableWithKits[]={4};
		repairCosts[]={15};
		inventorySlot[]=
		{
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Knife"
		};
		rotationFlags=17;
		RestrainUnlockType=1;
		weight=800;
		itemSize[]={5,2};
		fragility=0.079999998;
		dismantle_action_type=64;
		openItemSpillRange[]={10,40};
		soundImpactType="metal";
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
								"DZ\gear\tools\data\handsaw.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\handsaw.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\handsaw_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\handsaw_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\handsaw_destruct.rvmat"
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
				ammo="MeleeSharpLight_1";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_1";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_1";
				range=3.3;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class CutTiesSaw_end
				{
					soundSet="CutTiesSaw_end_SoundSet";
					id=519;
				};
				class CutTiesSaw_loop
				{
					soundSet="CutTiesSaw_loop_SoundSet";
					id=520;
				};
				class drop
				{
					soundset="hacksaw_drop_SoundSet";
					id=898;
				};
				class HackSaw_loop
				{
					soundSet="HackSaw_loop_SoundSet";
					id=1123;
				};
				class HackSaw_end
				{
					soundSet="HackSaw_end_SoundSet";
					id=1124;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class Backpack_1
			{
				position[]={0.039999999,0.34999999,0};
				orientation[]={180,-180,90};
			};
		};
	};
	class FireworksLauncher: Inventory_Base
	{
		scope=2;
		displayName="$STR_FireworksLauncher0";
		descriptionShort="$STR_FireworksLauncher1";
		model="\dz\gear\tools\FireworksLauncher.p3d";
		forceFarBubble=1;
		isMeleeWeapon=1;
		itemBehaviour=2;
		itemSize[]={4,4};
		weight=5000;
		hiddenSelections[]=
		{
			"camo",
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\tools\data\FireworksLauncher_co.paa",
			"dz\gear\tools\data\FireworksLauncher_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\tools\data\FireworksLauncher.rvmat",
			"dz\gear\tools\data\FireworksLauncher.rvmat"
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
								"DZ\gear\tools\data\FireworksLauncher.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\FireworksLauncher.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\FireworksLauncher_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\FireworksLauncher_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\FireworksLauncher_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		yawPitchRollLimit[]={60,60,60};
		hologramMaterial="fireworkslauncher";
		hologramMaterialPath="dz\gear\tools\data";
		alignHologramToTerain=0;
		class ObstacleGenerator
		{
			carve=1;
			timeToStationary=5;
			moveThreshold=0.5;
			class Shapes
			{
				class Cylindric
				{
					class Cyl1
					{
						radius=1.25;
						height=1.5;
						center[]={0,0,0};
					};
				};
			};
		};
		class AnimationSources
		{
			class Inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class Placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class Cover
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Flare_strike
				{
					soundSet="Flare_strike_SoundSet";
					id=201;
				};
				class Flare_open
				{
					soundSet="Flare_open_SoundSet";
					id=202;
				};
			};
		};
	};
	class Anniversary_FireworksLauncher: FireworksLauncher
	{
	};
	class DoorTestCamera: Inventory_Base
	{
		scope=2;
		displayName="DoorTestCamera";
		descriptionShort="DoorTestCamera";
		model="\dz\gear\tools\DoorCheck120x220-1cm.p3d";
		animClass="Knife";
		quantityBar=1;
		itemSize[]={2,1};
		weight=210;
		fragility=0.0099999998;
		lootCategory="Tools";
		lootTag[]=
		{
			"Civilian"
		};
	};
	class RemoteDetonator: Inventory_Base
	{
		scope=2;
		displayName="$STR_RemoteDetonator0";
		descriptionShort="$STR_RemoteDetonator1";
		model="\DZ\gear\tools\RemoteDetonator.p3d";
		rotationFlags=12;
		inventorySlot[]=
		{
			"TriggerRemoteDetonator_Receiver"
		};
		itemSize[]={1,2};
		weight=250;
		repairableWithKits[]={7};
		repairCosts[]={25};
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=40;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\RemoteDetonator.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\RemoteDetonator.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\RemoteDetonator_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\RemoteDetonator_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\RemoteDetonator_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class RemoteDetonatorReceiver: RemoteDetonator
	{
		displayName="$STR_RemoteDetonatorReceiver0";
		descriptionShort="$STR_RemoteDetonatorTrigger1";
		scope=2;
		model="\DZ\gear\tools\RemoteDetonator_Receiver.p3d";
		inventorySlot[]=
		{
			"TriggerRemoteDetonator_Receiver"
		};
		rotationFlags=12;
		weight=150;
		hiddenSelections[]=
		{
			"LED"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\tools\data\remotedetonator_co.paa"
		};
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=40;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\RemoteDetonator.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\RemoteDetonator.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\RemoteDetonator_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\RemoteDetonator_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\RemoteDetonator_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class RemoteDetonatorTrigger: RemoteDetonator
	{
		displayName="$STR_RemoteDetonatorTrigger0";
		descriptionShort="$STR_RemoteDetonatorTrigger1";
		scope=2;
		model="\DZ\gear\tools\RemoteDetonator_Trigger.p3d";
		inventorySlot[]=
		{
			"tripWireAttachment"
		};
		rotationFlags=12;
		weight=150;
		lockType=4;
		hiddenSelections[]=
		{
			"LED"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\tools\data\remotedetonator_co.paa"
		};
		soundImpactType="plastic";
		class AnimationSources
		{
			class Trigger
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class Lever
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=40;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\tools\data\RemoteDetonator.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\RemoteDetonator.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\RemoteDetonator_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\RemoteDetonator_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\RemoteDetonator_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Blowtorch: Inventory_Base
	{
		scope=2;
		displayName="$STR_Blowtorch0";
		descriptionShort="$STR_Blowtorch1";
		model="\dz\gear\tools\Blowtorch.p3d";
		rotationFlags=17;
		weight=210;
		itemSize[]={3,4};
		attachments[]=
		{
			"GasCanister"
		};
		containerSlot="GasCanister";
		repairKitType=10;
		soundImpactType="metal";
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
								"DZ\gear\tools\data\Blowtorch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\tools\data\Blowtorch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\tools\data\Blowtorch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\tools\data\Blowtorch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\tools\data\Blowtorch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class EnergyManager
		{
			switchOnAtSpawn=0;
			autoSwitchOff=1;
			autoSwitchOffWhenInCargo=1;
			energyStorageMax=0;
			energyUsagePerSecond=12;
			energyAtSpawn=0;
			powerSocketsCount=0;
			plugType=7;
			attachmentAction=1;
			updateInterval=1;
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.2;
			};
		};
		hiddenSelections[]=
		{
			"flame_hide"
		};
		class AnimationSources
		{
			class FlameHide
			{
				source="user";
				animPeriod=0.1;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Fishing_in_SoundSet
				{
					soundSet="Fishing_in_SoundSet";
					id=201;
				};
				class Fishing_check_SoundSet
				{
					soundSet="Fishing_check_SoundSet";
					id=202;
				};
				class Fishing_cancel_SoundSet
				{
					soundSet="Fishing_cancel_SoundSet";
					id=203;
				};
				class FishingRod_extend_SoundSet
				{
					soundSet="FishingRod_extend_SoundSet";
					id=204;
				};
				class FishingRod_retract_SoundSet
				{
					soundSet="FishingRod_retract_SoundSet";
					id=205;
				};
				class Fishing_puddle_SoundSet
				{
					soundSet="Fishing_puddle_SoundSet";
					id=206;
				};
				class Fishing_splash_SoundSet
				{
					soundSet="Fishing_splash_SoundSet";
					id=207;
				};
				class Fishing_splash_small_SoundSet
				{
					soundSet="Fishing_splash_small_SoundSet";
					id=208;
				};
				class Fish_struggling_SoundSet
				{
					soundSet="Fish_struggling_SoundSet";
					id=209;
				};
				class Fish_idle_SoundSet
				{
					soundSet="Fish_idle_SoundSet";
					id=210;
				};
				class Fish_bite_SoundSet
				{
					soundSet="Fish_bite_SoundSet";
					id=211;
				};
				class Fish_splash_random_SoundSet
				{
					soundSet="Fish_splash_random_SoundSet";
					id=212;
				};
				class Fish_success_SoundSet
				{
					soundSet="Fishing_success_SoundSet";
					id=213;
				};
				class Fish_bite_splash_SoundSet
				{
					soundSet="Fish_bite_splash_SoundSet";
					id=214;
				};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyAlarmClock: ProxyAttachment
	{
		scope=2;
		inventorySlot="TriggerAlarmClock";
		model="\dz\gear\tools\AlarmClock.p3d";
	};
	class ProxyKitchenTimer: ProxyAttachment
	{
		scope=2;
		inventorySlot="TriggerKitchenTimer";
		model="\dz\gear\tools\KitchenTimer.p3d";
	};
	class ProxyRemoteDetonator_Receiver: ProxyAttachment
	{
		scope=2;
		inventorySlot="TriggerRemoteDetonator_Receiver";
		model="\dz\gear\tools\RemoteDetonator_Receiver.p3d";
	};
	class ProxyBackpack_1: ProxyAttachment
	{
		scope=2;
		inventorySlot="Backpack_1";
		model="\dz\characters\backpacks\proxy\Backpack_1.p3d";
	};
};

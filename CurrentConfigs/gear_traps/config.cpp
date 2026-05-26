class CfgPatches
{
	class DZ_Gear_Traps
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
class CfgAmmo
{
	class DefaultAmmo;
	class LandMineExplosion: DefaultAmmo
	{
		hit=0;
		indirectHit=0.5;
		indirectHitRange=2;
		particle="explosion_landmine_01";
		explosive=1;
		typicalSpeed=3;
		initSpeed=3;
		fuseDistance=1;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]=
		{
			"Landmine_Explosion_SoundSet",
			"Landmine_Explosion_Tail_SoundSet"
		};
		soundHit[]=
		{
			"DZ\sounds\weapons\grenades\hand_grenade_1",
			10,
			1
		};
		soundFly[]=
		{
			"dz\sounds\Weapons\explosions\noise",
			3.1622771e-05,
			1
		};
		soundEngine[]=
		{
			"",
			9.9999983e-05,
			4
		};
		class DamageApplied
		{
			type="FragGrenade";
			bleedThreshold=1;
			class Health
			{
				damage=17;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=100;
			};
		};
		class NoiseExplosion
		{
			strength=100;
			type="sound";
		};
	};
	class LandMineExplosion_CarWheel: LandMineExplosion
	{
		class DamageApplied: DamageApplied
		{
			class Health
			{
				damage=200;
			};
		};
	};
};
class CfgVehicles
{
	class Trap_Base;
	class BearTrap: Trap_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_BearTrap0";
		descriptionShort="$STR_CfgVehicles_BearTrap1";
		model="\DZ\gear\traps\beartrap.p3d";
		itemSize[]={7,3};
		weight=12000;
		itemBehaviour=2;
		lootTag[]=
		{
			"Hunting",
			"Forester",
			"Work"
		};
		slopeTolerance=0.2;
		yawPitchRollLimit[]={60,60,60};
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\traps\data\beartrap_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\traps\data\beartrap.rvmat"
		};
		hologramMaterial="beartrap";
		hologramMaterialPath="dz\gear\traps\data";
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
								"DZ\gear\traps\data\beartrap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\traps\data\beartrap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\traps\data\beartrap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\traps\data\beartrap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\traps\data\beartrap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class BearTrap_Set
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement_walk
				{
					soundSet="beartrap_movement_walk_SoundSet";
					id=1;
				};
				class movement_run
				{
					soundSet="beartrap_movement_run_SoundSet";
					id=3;
				};
				class movement_sprint
				{
					soundSet="beartrap_movement_sprint_SoundSet";
					id=5;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpBearTrapLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBearTrap_SoundSet";
					id=797;
				};
			};
		};
	};
	class LandMineTrap: Trap_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_LandMineTrap0";
		descriptionShort="$STR_CfgVehicles_LandMineTrap1";
		model="\DZ\gear\traps\landmine.p3d";
		weight=1670;
		itemSize[]={2,2};
		itemBehaviour=1;
		inventorySlot[]=
		{
			"IEDExplosiveA",
			"IEDExplosiveB"
		};
		slopeTolerance=0.15000001;
		yawPitchRollLimit[]={60,60,60};
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\traps\data\landmine_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\traps\data\landmine.rvmat"
		};
		hologramMaterial="landmine";
		hologramMaterialPath="dz\gear\traps\data";
		ammoType="LandMineExplosion";
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
								"DZ\gear\traps\data\landmine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\traps\data\landmine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\traps\data\landmine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\traps\data\landmine_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\traps\data\landmine_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class safety_pin
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class landmine_start
				{
					soundSet="landmine_start_SoundSet";
					id=1;
				};
				class landmine_loop
				{
					soundSet="landmine_loop_SoundSet";
					id=2;
				};
				class landmine_end
				{
					soundSet="landmine_end_SoundSet";
					id=3;
				};
			};
		};
	};
	class SmallFishTrap: Trap_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SmallFishTrap0";
		descriptionShort="$STR_CfgVehicles_SmallFishTrap1";
		model="\dz\gear\traps\smallfishtrap.p3d";
		rotationFlags=2;
		attachments[]=
		{
			"Trap_Bait_1"
		};
		slopeTolerance=0.2;
		yawPitchRollLimit[]={20,20,20};
		weight=25;
		itemSize[]={1,2};
		allowOwnedCargoManipulation=1;
		itemBehaviour=1;
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\drinks\Data\loot_waterbottle_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\drinks\Data\Loot_WaterBottle.rvmat"
		};
		hologramMaterial="Loot_WaterBottle";
		hologramMaterialPath="dz\gear\drinks\Data";
		destroyOnEmpty=0;
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
		class Trapping
		{
			baitTypes[]={0};
			baitTypeChances[]={0.15000001};
			resultQuantityBaseMod=0.5;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0.5;
		};
		class AnimationSources
		{
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class triggered
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		soundImpactType="plastic";
	};
	class FishNetTrap: Trap_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_FishNetTrap0";
		descriptionShort="$STR_CfgVehicles_FishNetTrap1";
		model="\dz\gear\traps\fishnettrap.p3d";
		attachments[]=
		{
			"Trap_Bait_1"
		};
		slopeTolerance=0.2;
		yawPitchRollLimit[]={20,20,20};
		weight=570;
		itemSize[]={3,2};
		allowOwnedCargoManipulation=1;
		itemBehaviour=1;
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\traps\data\fishnettrap_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\traps\data\fishnettrap.rvmat"
		};
		hologramMaterial="fishnettrap";
		hologramMaterialPath="dz\gear\traps\data";
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
								"dz\gear\traps\data\fishnettrap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\gear\traps\data\fishnettrap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\gear\traps\data\fishnettrap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\gear\traps\data\fishnettrap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\gear\traps\data\fishnettrap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Trapping
		{
			baitTypes[]={0};
			baitTypeChances[]={0.15000001};
			resultQuantityBaseMod=0.5;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0.5;
		};
		class AnimationSources
		{
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class triggered
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		soundImpactType="textile";
	};
	class TripwireTrap: Trap_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_TripwireTrap0";
		descriptionShort="$STR_CfgVehicles_TripwireTrap1";
		model="\dz\gear\traps\tripwire.p3d";
		rotationFlags=16;
		attachments[]=
		{
			"tripWireAttachment"
		};
		slopeTolerance=0.30000001;
		yawPitchRollLimit[]={60,60,60};
		weight=600;
		itemSize[]={1,4};
		itemBehaviour=1;
		soundImpactType="wood";
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\traps\data\snaretrap_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\traps\data\snaretrap.rvmat"
		};
		hologramMaterial="snaretrap";
		hologramMaterialPath="dz\gear\traps\data";
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
								"dz\gear\traps\data\snaretrap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\gear\traps\data\snaretrap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\gear\traps\data\snaretrap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\gear\traps\data\snaretrap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\gear\traps\data\snaretrap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class triggered
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
	};
	class RabbitSnareTrap: Trap_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_RabbitSnareTrap0";
		descriptionShort="$STR_CfgVehicles_RabbitSnareTrap1";
		model="\dz\gear\traps\snaretrap.p3d";
		rotationFlags=16;
		attachments[]=
		{
			"Trap_Bait_2"
		};
		slopeTolerance=0.2;
		yawPitchRollLimit[]={45,45,45};
		weight=400;
		itemSize[]={1,4};
		itemBehaviour=1;
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\traps\data\snaretrap_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\traps\data\snaretrap.rvmat"
		};
		hologramMaterial="snaretrap";
		hologramMaterialPath="dz\gear\traps\data";
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
								"dz\gear\traps\data\snaretrap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\gear\traps\data\snaretrap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\gear\traps\data\snaretrap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\gear\traps\data\snaretrap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\gear\traps\data\snaretrap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Trapping
		{
			baitTypes[]={0};
			baitTypeChances[]={0.15000001};
			resultQuantityBaseMod=0.5;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0.5;
		};
		class AnimationSources
		{
			class inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class triggered
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
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
		soundImpactType="wood";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyLepus_europaeus_dead: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"TrapPrey_1"
		};
		model="\dz\gear\food\lepus_europaeus_dead.p3d";
	};
	class Proxybait: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"Trap_Bait_2"
		};
		model="\dz\gear\cooking\proxy\bait.p3d";
	};
	class Proxycharge: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"tripWireAttachment"
		};
		model="\dz\gear\traps\proxy\charge.p3d";
	};
};

class CfgPatches
{
	class DZ_Weapons_Explosives
	{
		units[]=
		{
			"SmokeGrenade",
			"FlashGrenade",
			"Grenade",
			"GrenadeRDG5",
			"smokegrenade_rdg2"
		};
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
	class RGD5Grenade_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=3;
		indirectHitRangeMultiplier=4;
		explosive=1;
		typicalSpeed=3;
		initSpeed=3;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]=
		{
			"Grenade_explosion_SoundSet",
			"Grenade_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=50;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=0;
			};
		};
		class NoiseExplosion
		{
			strength=200;
			type="shot";
		};
	};
	class M67Grenade_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=5;
		indirectHitRangeMultiplier=4;
		explosive=1;
		typicalSpeed=3;
		initSpeed=3;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]=
		{
			"Grenade_explosion_SoundSet",
			"Grenade_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=50;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=0;
			};
		};
		class NoiseExplosion
		{
			strength=200;
			type="shot";
		};
	};
	class FlashGrenade_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=5;
		indirectHitRangeMultiplier=4;
		explosive=1;
		typicalSpeed=3;
		initSpeed=3;
		slowdownThreshold=100;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]=
		{
			"Flashgrenade_Explosion_SoundSet",
			"Flashgrenade_Explosion_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=5;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=0;
			};
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};
	class GasCanister_Ammo: FlashGrenade_Ammo
	{
		indirectHitRange=1;
		indirectHitRangeMultiplier=2;
		soundSetExplosion[]=
		{
			"GasCanister_Explosion_SoundSet",
			"GasCanister_Explosion_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=5;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=8;
			};
		};
	};
	class LandFuelFeed_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=5;
		indirectHitRangeMultiplier=4;
		explosive=1;
		typicalSpeed=3;
		initSpeed=3;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]=
		{
			"GasStation_Explosion_SoundSet",
			"GasStation_Explosion_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=50;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=0;
			};
		};
		class NoiseExplosion
		{
			strength=100;
			type="shot";
		};
	};
	class Plastic_Explosive_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=1;
		indirectHitRangeMultiplier=20;
		explosive=1;
		typicalSpeed=3;
		initSpeed=3;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]=
		{
			"Plastic_Explosion_SoundSet",
			"Plastic_Explosion_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=350;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=100;
			};
		};
		class NoiseExplosion
		{
			strength=300;
			type="shot";
		};
	};
	class ClaymoreMine_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=10;
		indirectHitRangeMultiplier=3;
		explosive=1;
		typicalSpeed=3;
		initSpeed=3;
		indirectHitAngle1=45;
		indirectHitAngle2=45;
		explosionType="directional";
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]=
		{
			"ClaymoreMine_explosion_SoundSet",
			"Grenade_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=100;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=100;
			};
		};
		class NoiseExplosion
		{
			strength=200;
			type="shot";
		};
	};
	class ClaymoreMine_Secondary_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=1;
		indirectHitRangeMultiplier=4;
		explosive=1;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]={};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=20;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=20;
			};
		};
	};
	class Fireworks_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=1;
		indirectHitRangeMultiplier=2;
		explosive=1;
		typicalSpeed=1;
		initSpeed=1;
		slowdownThreshold=100;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]={};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=1;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=1;
			};
		};
		class NoiseExplosion
		{
			strength=100;
			type="shot";
		};
		class Effects
		{
			class CameraShake
			{
				radius=1;
				strength=1;
				modifierClose=1;
				modifierFar=0;
			};
		};
	};
	class Explosion_40mm_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=5;
		indirectHitRangeMultiplier=4;
		explosive=1;
		caliber=1;
		deflecting=0;
		soundSetExplosion[]=
		{
			"Grenade_explosion_SoundSet",
			"Grenade_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=50;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=0;
			};
		};
		class NoiseHit
		{
			strength=200;
			type="shot";
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class ExplosivesBase: Inventory_Base
	{
		class AnimationSources
		{
		};
	};
	class Grenade_Base;
	class RGD5Grenade: Grenade_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_RGD5Grenade0";
		descriptionShort="$STR_CfgVehicles_RGD5Grenade1";
		model="\dz\weapons\explosives\frag_RGD5.p3d";
		weight=350;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\frag_RGD5_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\explosives\data\frag_RGD5.rvmat"
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
								"DZ\weapons\explosives\data\frag_RGD5.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\explosives\data\frag_RGD5.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\explosives\data\frag_RGD5_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\explosives\data\frag_RGD5_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\explosives\data\frag_RGD5_destruct.rvmat"
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
				class Grenade_unpin
				{
					soundSet="Grenade_unpin_SoundSet";
					id=201;
				};
				class turnOnRadio_Pin
				{
					soundSet="Grenade_pin_SoundSet";
					id=1006;
				};
			};
		};
	};
	class M67Grenade: Grenade_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_M67Grenade0";
		descriptionShort="$STR_CfgVehicles_M67Grenade1";
		model="\dz\weapons\explosives\grenade.p3d";
		weight=400;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\grenade_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\explosives\data\grenade.rvmat"
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
								"DZ\weapons\explosives\data\grenade.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\explosives\data\grenade.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\explosives\data\grenade_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\explosives\data\grenade_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\explosives\data\grenade_destruct.rvmat"
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
				class Grenade_unpin
				{
					soundSet="Grenade_unpin_SoundSet";
					id=201;
				};
				class turnOnRadio_Pin
				{
					soundSet="Grenade_pin_SoundSet";
					id=1006;
				};
			};
		};
	};
	class M18SmokeGrenade_ColorBase: Grenade_Base
	{
		displayName="$STR_CfgVehicles_M18SmokeGrenade_ColorBase0";
		descriptionShort="$STR_CfgVehicles_M18SmokeGrenade_ColorBase1";
		model="\dz\weapons\explosives\smokegrenade.p3d";
		rotationFlags=17;
		weight=500;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\explosives\data\smokegrenade.rvmat"
		};
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
								"DZ\weapons\explosives\data\smokegrenade.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\explosives\data\smokegrenade.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\explosives\data\smokegrenade_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\explosives\data\smokegrenade_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\explosives\data\smokegrenade_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class EnergyManager
		{
			energyAtSpawn=90;
			energyUsagePerSecond=1;
			wetnessExposure=0.1;
			updateInterval=5;
		};
		class NoiseSmokeGrenade
		{
			strength=30;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Unpin
				{
					soundSet="SmokegGrenades_M18_oneshot_ignite_SoundSet";
					id=201;
				};
			};
		};
	};
	class M18SmokeGrenade_Red: M18SmokeGrenade_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\smokegrenade_red_co.paa"
		};
	};
	class M18SmokeGrenade_Red_Contaminated: M18SmokeGrenade_Red
	{
	};
	class M18SmokeGrenade_Green: M18SmokeGrenade_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\smokegrenade_green_co.paa"
		};
	};
	class M18SmokeGrenade_Yellow: M18SmokeGrenade_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\smokegrenade_yellow_co.paa"
		};
	};
	class M18SmokeGrenade_Purple: M18SmokeGrenade_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\smokegrenade_violet_co.paa"
		};
	};
	class M18SmokeGrenade_White: M18SmokeGrenade_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\smokegrenade_white_co.paa"
		};
	};
	class RDG2SmokeGrenade_ColorBase: Grenade_Base
	{
		displayName="$STR_CfgVehicles_RDG2SmokeGrenade_ColorBase0";
		descriptionShort="$STR_CfgVehicles_RDG2SmokeGrenade_ColorBase1";
		model="\dz\weapons\explosives\smokegrenade_rdg2.p3d";
		rotationFlags=17;
		weight=300;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\explosives\data\smokegrenade_rdg2.rvmat"
		};
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
								"DZ\weapons\explosives\data\smokegrenade_rdg2.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\explosives\data\smokegrenade_rdg2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\explosives\data\smokegrenade_rdg2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\explosives\data\smokegrenade_rdg2_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\explosives\data\smokegrenade_rdg2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class EnergyManager
		{
			energyAtSpawn=90;
			energyUsagePerSecond=1;
			wetnessExposure=0.1;
			updateInterval=5;
		};
		class NoiseSmokeGrenade
		{
			strength=30;
			type="sound";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Unpin
				{
					soundSet="SmokegGrenades_RDG2_oneshot_ignite_SoundSet";
					id=201;
				};
			};
		};
	};
	class RDG2SmokeGrenade_Black: RDG2SmokeGrenade_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\smokegrenade_rdg2_black_co.paa"
		};
	};
	class RDG2SmokeGrenade_White: RDG2SmokeGrenade_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\smokegrenade_rdg2_white_co.paa"
		};
	};
	class FlashGrenade: Grenade_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_FlashGrenade0";
		descriptionShort="$STR_CfgVehicles_FlashGrenade1";
		model="\dz\weapons\explosives\flashbang.p3d";
		rotationFlags=17;
		weight=300;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\flashbang_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\explosives\data\flashbang.rvmat"
		};
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
								"DZ\weapons\explosives\data\flashbang.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\explosives\data\flashbang.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\explosives\data\flashbang_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\explosives\data\flashbang_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\explosives\data\flashbang_destruct.rvmat"
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
				class Grenade_unpin
				{
					soundSet="Grenade_unpin_SoundSet";
					id=201;
				};
				class turnOnRadio_Pin
				{
					soundSet="Grenade_pin_SoundSet";
					id=1006;
				};
			};
		};
	};
	class Grenade_ChemGas: Grenade_Base
	{
		scope=2;
		displayName="$STR_Grenade_ChemGas0";
		descriptionShort="$STR_Grenade_ChemGas1";
		model="\dz\weapons\explosives\Grenade_ChemGas.p3d";
		weight=500;
		itemSize[]={1,1};
		inventorySlot[]=
		{
			"IEDExplosiveA",
			"IEDExplosiveB"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]={};
		hiddenSelectionsMaterials[]={};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\explosives\data\Grenade_ChemGas.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\explosives\data\Grenade_ChemGas.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\explosives\data\Grenade_ChemGas_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\explosives\data\Grenade_ChemGas_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\explosives\data\Grenade_ChemGas_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Plastic_Explosive: ExplosivesBase
	{
		scope=2;
		displayName="$STR_PlasticExplosive0";
		descriptionShort="$STR_PlasticExplosive1";
		model="\dz\weapons\explosives\Plastic_Explosive.p3d";
		weight=400;
		itemSize[]={3,2};
		itemBehaviour=1;
		slopeTolerance=0.5;
		alignHologramToTerain=1;
		yawPitchRollLimit[]={20,20,20};
		hologramMaterial="plastic_explosive";
		hologramMaterialPath="dz\weapons\explosives\data";
		projectionTypename="Plastic_Explosive_Placing";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\Plastic_Explosive.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\explosives\data\Plastic_Explosive.rvmat"
		};
		attachments[]=
		{
			"TriggerRemoteDetonator_Receiver"
		};
		class AnimationSources: AnimationSources
		{
			class TriggerRemote
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet="Grenade_unpin_SoundSet";
					id=201;
				};
				class turnOnRadio_Pin
				{
					soundSet="Grenade_pin_SoundSet";
					id=1006;
				};
			};
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
								"DZ\weapons\explosives\data\Plastic_Explosive.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\explosives\data\Plastic_Explosive.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\explosives\data\Plastic_Explosive_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\explosives\data\Plastic_Explosive_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\explosives\data\Plastic_Explosive_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Plastic_Explosive_Placing: Plastic_Explosive
	{
		model="\dz\weapons\explosives\Plastic_Explosive_Placing.p3d";
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\Plastic_Explosive.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\explosives\data\Plastic_Explosive.rvmat"
		};
		class AnimationSources
		{
			class Placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
	};
	class ClaymoreMine: ExplosivesBase
	{
		scope=2;
		displayName="$STR_ClaymoreMine0";
		descriptionShort="$STR_ClaymoreMine1";
		model="\DZ\weapons\explosives\ClaymoreMine.p3d";
		rotationFlags=2;
		itemBehaviour=2;
		slopeTolerance=0.15000001;
		yawPitchRollLimit[]={60,60,60};
		hologramMaterial="claymore";
		hologramMaterialPath="dz\weapons\explosives\data";
		projectionTypename="ClaymoreMinePlacing";
		itemSize[]={4,3};
		weight=3000;
		inventorySlot[]={};
		hiddenSelections[]=
		{
			"LED"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\claymore_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\gear\tools\data\RemoteDetonator_LED.rvmat"
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
								"DZ\weapons\explosives\data\Claymore.rvmat",
								"DZ\weapons\explosives\data\Claymore_Bag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\explosives\data\Claymore.rvmat",
								"DZ\weapons\explosives\data\Claymore_Bag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\explosives\data\Claymore_damage.rvmat",
								"DZ\weapons\explosives\data\Claymore_Bag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\explosives\data\Claymore_damage.rvmat",
								"DZ\weapons\explosives\data\Claymore_Bag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\explosives\data\Claymore_destruct.rvmat",
								"DZ\weapons\explosives\data\Claymore_Bag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class Bag
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class Mine
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
	};
	class ClaymoreMinePlacing: ClaymoreMine
	{
		model="\DZ\weapons\explosives\ClaymoreMinePlacing.p3d";
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\claymore_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\explosives\data\claymore.rvmat"
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
		};
	};
	class ImprovisedExplosive: ExplosivesBase
	{
		scope=2;
		displayName="$STR_ImprovisedExplosive0";
		descriptionShort="$STR_ImprovisedExplosive1";
		model="\DZ\weapons\explosives\ImprovisedExplosive.p3d";
		rotationFlags=2;
		itemBehaviour=2;
		itemSize[]={4,3};
		weight=2000;
		inventorySlot[]={};
		slopeTolerance=0.5;
		alignHologramToTerain=1;
		yawPitchRollLimit[]={20,20,20};
		hologramMaterial="protector_case";
		hologramMaterialPath="dz\gear\containers\data";
		projectionTypename="ImprovisedExplosivePlacing";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\explosives\data\ied_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\explosives\data\ied.rvmat"
		};
		attachments[]=
		{
			"TriggerAlarmClock",
			"TriggerKitchenTimer",
			"TriggerRemoteDetonator_Receiver",
			"IEDExplosiveA",
			"IEDExplosiveB"
		};
		class AnimationSources
		{
			class TriggerEmpty
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class TriggerTimer
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class TriggerClock
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class TriggerRemote
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
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
								"DZ\weapons\explosives\data\ied.rvmat",
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\explosives\data\ied.rvmat",
								"DZ\gear\containers\data\Protector_Case.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\explosives\data\ied_damage.rvmat",
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\explosives\data\ied_damage.rvmat",
								"DZ\gear\containers\data\Protector_Case_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\explosives\data\ied_destruct.rvmat",
								"DZ\gear\containers\data\Protector_Case_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class ImprovisedExplosivePlacing: ImprovisedExplosive
	{
		model="\DZ\weapons\explosives\ImprovisedExplosivePlacing.p3d";
		hiddenSelections[]=
		{
			"placing"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\containers\data\loot_protectorcase_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\containers\data\protector_case.rvmat"
		};
		class AnimationSources
		{
			class Placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyfrag_RGD5: ProxyAttachment
	{
		scope=2;
		inventorySlot="tripWireAttachment";
		model="\dz\weapons\explosives\frag_RGD5.p3d";
	};
	class Proxygrenade: ProxyAttachment
	{
		scope=2;
		inventorySlot="tripWireAttachment";
		model="\dz\weapons\explosives\grenade.p3d";
	};
	class Proxysmokegrenade: ProxyAttachment
	{
		scope=2;
		inventorySlot="tripWireAttachment";
		model="\dz\weapons\explosives\smokegrenade.p3d";
	};
	class Proxysmokegrenade_rdg2: ProxyAttachment
	{
		scope=2;
		inventorySlot="tripWireAttachment";
		model="\dz\weapons\explosives\smokegrenade_rdg2.p3d";
	};
	class Proxyflashbang: ProxyAttachment
	{
		scope=2;
		inventorySlot="tripWireAttachment";
		model="\dz\weapons\explosives\flashbang.p3d";
	};
};

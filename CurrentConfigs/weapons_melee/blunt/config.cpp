class CfgPatches
{
	class DZ_Weapons_Melee_Blunt
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class BaseballBat: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_BaseballBat0";
		descriptionShort="$STR_CfgVehicles_BaseballBat1";
		model="\dz\weapons\melee\blunt\baseballbat.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=566;
		itemSize[]={1,7};
		itemBehaviour=2;
		fragility=0.02;
		openItemSpillRange[]={40,80};
		isMeleeWeapon=1;
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
								"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_destruct.rvmat"
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
				class pickUp_Light
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
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class NailedBaseballBat: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_NailedBaseballBat0";
		descriptionShort="$STR_CfgVehicles_NailedBaseballBat1";
		model="\dz\weapons\melee\blunt\Baseballbat_nailed.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=600;
		itemSize[]={1,7};
		itemBehaviour=2;
		fragility=0.02;
		openItemSpillRange[]={40,70};
		isMeleeWeapon=1;
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
								"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_destruct.rvmat"
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
				ammo="MeleeCraftedLight_4";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeCraftedHeavy_4";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeCraftedHeavy_4";
				range=3.7;
			};
		};
		soundImpactType="wood";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp_Light
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
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class BarbedBaseballBat: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_BarbedBaseballBat0";
		descriptionShort="$STR_CfgVehicles_BarbedBaseballBat1";
		model="\dz\weapons\melee\blunt\Baseballbat_barbed.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=600;
		itemSize[]={1,7};
		itemBehaviour=2;
		fragility=0.02;
		openItemSpillRange[]={40,70};
		isMeleeWeapon=1;
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
								"DZ\weapons\melee\blunt\Data\BaseballBat_barbed.rvmat",
								"DZ\weapons\melee\blunt\Data\Barbed_wire_bloody.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_barbed.rvmat",
								"DZ\weapons\melee\blunt\Data\Barbed_wire_bloody.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_barbed_damage.rvmat",
								"DZ\weapons\melee\blunt\Data\Barbed_wire_bloody_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_barbed_damage.rvmat",
								"DZ\weapons\melee\blunt\Data\Barbed_wire_bloody_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_barbed_destruct.rvmat",
								"DZ\weapons\melee\blunt\Data\Barbed_wire_bloody_destruct.rvmat"
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
				ammo="MeleeCraftedLight_3";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeCraftedHeavy_3";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeCraftedHeavy_3";
				range=3.7;
			};
		};
		soundImpactType="wood";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUp_Light
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
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class XmasBaseballBat: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_XmasBaseballBat0";
		descriptionShort="$STR_CfgVehicles_XmasBaseballBat1";
		model="\dz\weapons\melee\blunt\Baseballbat_xmas.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=566;
		itemSize[]={1,7};
		itemBehaviour=2;
		fragility=0.02;
		openItemSpillRange[]={40,80};
		isMeleeWeapon=1;
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
								"DZ\weapons\melee\blunt\Data\BaseballBat_xmas.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_xmas.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_xmas_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_xmas_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\BaseballBat_xmas_destruct.rvmat"
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
				class pickUp_Light
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
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class PipeWrench: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_PipeWrench0";
		descriptionShort="$STR_CfgVehicles_PipeWrench1";
		model="\dz\weapons\melee\blunt\pipewrench.p3d";
		debug_ItemCategory=2;
		rotationFlags=12;
		inventorySlot[]=
		{
			"Backpack_1"
		};
		weight=4400;
		itemSize[]={2,5};
		itemBehaviour=1;
		fragility=0.0020000001;
		openItemSpillRange[]={30,60};
		isMeleeWeapon=1;
		soundImpactType="metal";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBluntLight_4";
				range=1.5;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_4";
				range=1.5;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_4";
				range=4.0999999;
			};
		};
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
								"DZ\weapons\melee\blunt\Data\pipewrench.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\pipewrench.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\pipewrench_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\pipewrench_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\pipewrench_destruct.rvmat"
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
				class Pickup_light
				{
					soundSet="hatchet_pickup_light_SoundSet";
					id=796;
				};
				class Pickup
				{
					soundSet="hatchet_pickup_SoundSet";
					id=797;
				};
				class Drop
				{
					soundset="baseballbat_drop_SoundSet";
					id=898;
				};
				class Inventory_Hide
				{
					soundset="Inventory_Hide_SoundSet";
					id=1220;
				};
				class Inventory_Show
				{
					soundset="Inventory_Show_SoundSet";
					id=1221;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class Backpack_1
			{
				position[]={0,0,0};
				orientation[]={90,0,0};
			};
		};
	};
	class BrassKnuckles_ColorBase: Inventory_Base
	{
		displayName="$STR_CfgVehicles_BrassKnuckles_ColorBase0";
		descriptionShort="$STR_CfgVehicles_BrassKnuckles_ColorBase1";
		model="\dz\weapons\melee\blunt\Brassknuckles.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		inventorySlot[]=
		{
			""
		};
		weight=142;
		itemSize[]={1,2};
		fragility=0.0020000001;
		hiddenSelections[]=
		{
			"camo"
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBluntLight_3";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_3";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_3";
				range=2.8;
			};
		};
		soundImpactType="metal";
	};
	class BrassKnuckles_Dull: BrassKnuckles_ColorBase
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\melee\blunt\data\Brassknuckles_dull.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\melee\blunt\data\BrassKnuckles_dull_co.paa"
		};
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
								"DZ\weapons\melee\blunt\Data\brassknuckles_dull.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\brassknuckles_dull.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\brassknuckles_dull_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\brassknuckles_dull_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\brassknuckles_dull_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class BrassKnuckles_Shiny: BrassKnuckles_ColorBase
	{
		scope=2;
		weight=162;
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\melee\blunt\Data\Brassknuckles_shiny.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\melee\blunt\data\BrassKnuckles_shiny_co.paa"
		};
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
								"DZ\weapons\melee\blunt\Data\Brassknuckles_shiny.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\Brassknuckles_shiny.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\Brassknuckles_shiny_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\Brassknuckles_shiny_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\Brassknuckles_shiny_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class TelescopicBaton: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_TelescopicBaton0";
		descriptionShort="$STR_CfgVehicles_TelescopicBaton1";
		model="\dz\weapons\melee\blunt\TelescopingBaton.p3d";
		debug_ItemCategory=2;
		rotationFlags=17;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=252;
		itemSize[]={2,5};
		itemBehaviour=1;
		fragility=0.0020000001;
		openItemSpillRange[]={35,55};
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
								"DZ\weapons\melee\blunt\Data\TelescopingBaton.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\TelescopingBaton.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\TelescopingBaton_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\TelescopingBaton_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\TelescopingBaton_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
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
			class Default_Opened
			{
				ammo="MeleeBlunt";
				range=1.6;
			};
			class Heavy_Opened
			{
				ammo="MeleeBlunt_Heavy";
				range=1.6;
			};
			class Sprint_Opened
			{
				ammo="MeleeBlunt_Heavy";
				range=4.0999999;
			};
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class Baton_deploy
				{
					soundSet="Baton_deploy_SoundSet";
					id=201;
				};
				class Baton_retract
				{
					soundSet="Baton_retract_SoundSet";
					id=202;
				};
			};
		};
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
		};
	};
	class HockeyStick: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_HockeyStick0";
		descriptionShort="$STR_CfgVehicles_HockeyStick1";
		model="\dz\weapons\melee\blunt\hockey_stick_peters.p3d";
		rotationFlags=12;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=650;
		itemSize[]={2,10};
		itemBehaviour=2;
		fragility=0.02;
		openItemSpillRange[]={40,80};
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
								"DZ\weapons\melee\blunt\Data\Hockey_Stick.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\Hockey_Stick.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\Hockey_Stick_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\Hockey_Stick_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\Hockey_Stick_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeWoodBlunt";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeWoodBlunt_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeWoodBlunt_Heavy";
				range=3.7;
			};
		};
		soundImpactType="wood";
	};
	class NewHockeyStick: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_NewHockeyStick0";
		descriptionShort="$STR_CfgVehicles_NewHockeyStick1";
		model="\dz\weapons\melee\blunt\hockey_stick_peters.p3d";
		rotationFlags=12;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=650;
		itemSize[]={2,10};
		itemBehaviour=2;
		fragility=0.02;
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBat";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeBat_Heavy";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeBat_Heavy";
				range=3.7;
			};
		};
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
								"DZ\weapons\melee\blunt\Data\Hockey_Stick.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\Hockey_Stick.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\Hockey_Stick_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\Hockey_Stick_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\Hockey_Stick_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="wood";
	};
	class PoliceBaton: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_PoliceBaton0";
		descriptionShort="$STR_CfgVehicles_PoliceBaton1";
		model="\dz\weapons\melee\blunt\Police_baton.p3d";
		debug_ItemCategory=2;
		rotationFlags=16;
		inventorySlot[]=
		{
			"Shoulder",
			"Melee"
		};
		weight=540;
		itemSize[]={2,5};
		itemBehaviour=1;
		fragility=0.0020000001;
		openItemSpillRange[]={35,55};
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
								"DZ\weapons\melee\blunt\Data\baton.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blunt\Data\baton.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blunt\Data\baton_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blunt\Data\baton_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blunt\Data\baton_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBlunt";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeBlunt_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeBlunt_Heavy";
				range=4.0999999;
			};
		};
		soundImpactType="plastic";
	};
};

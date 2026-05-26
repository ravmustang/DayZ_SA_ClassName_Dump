class CfgPatches
{
	class DZ_Weapons_Muzzles
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
class cfgVehicles
{
	class Inventory_Base;
	class ItemBarrel: Inventory_Base
	{
	};
	class ItemSuppressor: Inventory_Base
	{
		scope=0;
		debug_ItemCategory=3;
		inventorySlot[]=
		{
			"weaponMuzzle"
		};
		simulation="ItemSuppressor";
		itemSize[]={1,1};
		selectionFireAnim="zasleh";
		soundIndex=1;
		repairableWithKits[]={1};
		repairCosts[]={25};
		muzzlePos="usti hlavne";
		barrelArmor=3000;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		isMeleeWeapon=1;
		soundImpactType="metal";
	};
	class AK_Bayonet: Inventory_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_AK_Bayonet0";
		descriptionShort="$STR_cfgVehicles_AK_Bayonet1";
		model="\dz\weapons\attachments\muzzle\bayonet_ak.p3d";
		debug_ItemCategory=3;
		repairableWithKits[]={4};
		repairCosts[]={10};
		animClass="Knife";
		suicideAnim="onehanded";
		rotationFlags=17;
		reversed=0;
		weight=470;
		itemSize[]={1,3};
		itemModelLength=0.34599999;
		itemAttachOffset=-0.16;
		lootTag[]=
		{
			"Military_east"
		};
		lootCategory="Attachments";
		openItemSpillRange[]={10,20};
		inventorySlot[]=
		{
			"weaponBayonetAK",
			"Knife"
		};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		itemInfo[]=
		{
			"Knife"
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
								"DZ\weapons\attachments\data\Russian_AKM_Bayonet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\Russian_AKM_Bayonet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\Russian_AKM_Bayonet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\Russian_AKM_Bayonet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\Russian_AKM_Bayonet_destruct.rvmat"
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
				ammo="MeleeSharpLight_4";
				range=1.1;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_4";
				range=1.1;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_4";
				range=3.3;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="CombatKnife_drop_SoundSet";
					id=898;
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
	class M9A1_Bayonet: Inventory_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_M9A1_Bayonet0";
		descriptionShort="$STR_cfgVehicles_M9A1_Bayonet1";
		model="\dz\weapons\attachments\muzzle\bayonet_m9a1.p3d";
		debug_ItemCategory=3;
		repairableWithKits[]={4};
		repairCosts[]={10};
		animClass="Knife";
		suicideAnim="onehanded";
		rotationFlags=17;
		reversed=0;
		weight=450;
		itemSize[]={1,3};
		itemModelLength=0.30000001;
		itemAttachOffset=-0.18000001;
		lootTag[]=
		{
			"Military_west"
		};
		lootCategory="Attachments";
		openItemSpillRange[]={10,20};
		inventorySlot[]=
		{
			"weaponBayonet",
			"Knife"
		};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		itemInfo[]=
		{
			"Knife"
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
								"DZ\weapons\attachments\data\m4_bayonet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\m4_bayonet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\m4_bayonet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\m4_bayonet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\m4_bayonet_destruct.rvmat"
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
				ammo="MeleeSharpLight_4";
				range=1.2;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_4";
				range=1.2;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_4";
				range=3.3;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="CombatKnife_drop_SoundSet";
					id=898;
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
	class Mosin_Bayonet: Inventory_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_Mosin_Bayonet0";
		descriptionShort="$STR_cfgVehicles_Mosin_Bayonet1";
		model="\dz\weapons\attachments\muzzle\bayonet_mosin.p3d";
		debug_ItemCategory=3;
		repairableWithKits[]={4};
		repairCosts[]={10};
		animClass="Knife";
		suicideAnim="onehanded";
		rotationFlags=12;
		reversed=0;
		weight=480;
		itemSize[]={1,4};
		itemModelLength=0.47600001;
		itemAttachOffset=-0.13;
		lootTag[]=
		{
			"Civilian"
		};
		lootCategory="Attachments";
		openItemSpillRange[]={10,20};
		inventorySlot[]=
		{
			"weaponBayonetMosin"
		};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		itemInfo[]=
		{
			"Knife"
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
								"DZ\weapons\attachments\data\mosin_bayonet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\mosin_bayonet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\mosin_bayonet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\mosin_bayonet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\mosin_bayonet_destruct.rvmat"
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
				range=1.1;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_2";
				range=1.1;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_2";
				range=3.3;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="CombatKnife_drop_SoundSet";
					id=898;
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
	class SKS_Bayonet: Inventory_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_SKS_Bayonet0";
		descriptionShort="$STR_cfgVehicles_SKS_Bayonet1";
		model="\dz\weapons\attachments\muzzle\bayonet_sks.p3d";
		debug_ItemCategory=3;
		repairableWithKits[]={4};
		repairCosts[]={10};
		animClass="Knife";
		suicideAnim="onehanded";
		rotationFlags=17;
		reversed=0;
		weight=450;
		itemSize[]={1,4};
		itemModelLength=0.37200001;
		itemAttachOffset=-0.050000001;
		lootTag[]=
		{
			"Military_east"
		};
		lootCategory="Attachments";
		openItemSpillRange[]={10,20};
		inventorySlot[]=
		{
			"weaponBayonetSKS"
		};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		itemInfo[]=
		{
			"Knife"
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
								"DZ\weapons\attachments\data\sks_bayo.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\sks_bayo.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\sks_bayo_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\sks_bayo_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\sks_bayo_destruct.rvmat"
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
				range=1.1;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_2";
				range=1.1;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_2";
				range=3.3;
			};
		};
		soundImpactType="metal";
		class AnimEvents
		{
			class SoundWeapon
			{
				class drop
				{
					soundset="CombatKnife_drop_SoundSet";
					id=898;
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
	class Mosin_Compensator: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_Mosin_Compensator0";
		descriptionShort="$STR_cfgVehicles_Mosin_Compensator1";
		model="\dz\weapons\attachments\muzzle\mosin_compensator.p3d";
		debug_ItemCategory=3;
		soundIndex=0;
		rotationFlags=17;
		reversed=0;
		weight=150;
		itemSize[]={1,1};
		itemModelLength=0.089000002;
		barrelArmor=39.063;
		lootTag[]=
		{
			"Hunting"
		};
		lootCategory="Attachments";
		inventorySlot[]=
		{
			"weaponMuzzleMosin"
		};
		recoilModifier[]={0.60000002,0.60000002,0.60000002};
		swayModifier[]={1,1,1};
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
								"DZ\weapons\attachments\data\mosin_compensator.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\mosin_compensator.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\mosin_compensator_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\mosin_compensator_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\mosin_compensator_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mosin_compensator_01";
					illuminateWorld=1;
					positionOffset[]={0,-0.050000001,0};
				};
			};
		};
		soundImpactType="metal";
	};
	class MP5_Compensator: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_MP5_Compensator0";
		descriptionShort="$STR_cfgVehicles_MP5_Compensator1";
		model="\dz\weapons\attachments\muzzle\MP5k_compensator.p3d";
		debug_ItemCategory=3;
		soundIndex=0;
		rotationFlags=17;
		reversed=0;
		weight=80;
		itemSize[]={1,1};
		itemModelLength=0.071000002;
		barrelArmor=20.834;
		lootTag[]=
		{
			"Police"
		};
		lootCategory="Attachments";
		inventorySlot[]=
		{
			"weaponMuzzleMP5"
		};
		recoilModifier[]={0.60000002,0.60000002,0.60000002};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\mp5k_compensator_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\data\mp5k_compensator.rvmat"
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp5k_02";
					illuminateWorld=1;
				};
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
								"DZ\weapons\attachments\data\MP5k_compensator.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\MP5k_compensator.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\MP5k_compensator_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\MP5k_compensator_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\MP5k_compensator_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="metal";
	};
	class ImprovisedSuppressor: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_ImprovisedSuppressor0";
		descriptionShort="$STR_cfgVehicles_ImprovisedSuppressor1";
		model="\dz\weapons\attachments\muzzle\bottle_suppressor.p3d";
		repairableWithKits[]={0};
		repairCosts[]={0};
		rotationFlags=17;
		reversed=0;
		weight=50;
		itemSize[]={3,1};
		itemModelLength=0.23999999;
		barrelArmor=1500;
		lootCategory="Attachments";
		inventorySlot[]=
		{
			"suppressorImpro",
			"weaponMuzzleAK",
			"weaponMuzzleM4",
			"pistolMuzzle"
		};
		simulation="ItemSuppressor";
		noiseShootModifier=-0.85000002;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.2,1.2,1.2};
		selectionFireAnim="zasleh";
		soundIndex=2;
		muzzlePos="usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=15;
				overheatingDecayInterval=1;
				class SmokeTrail
				{
					overrideParticle="smoking_barrel_small";
					overrideDirectionVector[]={0,180,180};
					onlyWithinOverheatLimits[]={0,0.69999999};
				};
				class SmokeHot
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.69999999,2};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\muzzle\data\bottle_suppressor.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\muzzle\data\bottle_suppressor.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\muzzle\data\bottle_suppressor_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\muzzle\data\bottle_suppressor_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\muzzle\data\bottle_suppressor_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="plastic";
	};
	class M4_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_M4_Suppressor0";
		descriptionShort="$STR_cfgVehicles_M4_Suppressor1";
		model="\dz\weapons\attachments\muzzle\suppressor_556.p3d";
		rotationFlags=17;
		reversed=0;
		weight=73;
		itemSize[]={3,1};
		itemModelLength=0.148;
		barrelArmor=2250;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_west"
		};
		inventorySlot[]=
		{
			"weaponMuzzleM4"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00015000001;
		dispersionCondition="true";
		noiseShootModifier=-0.93000001;
		recoilModifier[]={0.89999998,0.89999998,0.89999998};
		swayModifier[]={1.3,1.3,1.3};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=4;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\suppressor556.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\suppressor556.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\suppressor556_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\suppressor556_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\suppressor556_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokeTrail
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
	};
	class AK_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_AK_Suppressor0";
		descriptionShort="$STR_cfgVehicles_AK_Suppressor1";
		model="\dz\weapons\attachments\muzzle\suppressor_545.p3d";
		rotationFlags=17;
		reversed=0;
		weight=100;
		itemSize[]={3,1};
		itemModelLength=0.23;
		barrelArmor=2250;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_east"
		};
		inventorySlot[]=
		{
			"weaponMuzzleAK"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00015000001;
		dispersionCondition="true";
		noiseShootModifier=-0.93000001;
		recoilModifier[]={0.89999998,0.89999998,0.89999998};
		swayModifier[]={1.3,1.3,1.3};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashAssault
				{
					overrideParticle="weapon_shot_akm_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=2;
				maxOverheatingValue=20;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=4;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\tgpa.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\tgpa.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\tgpa_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\tgpa_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\tgpa_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class PistolSuppressor: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_PistolSuppressor0";
		descriptionShort="$STR_cfgVehicles_PistolSuppressor1";
		model="\dz\weapons\attachments\muzzle\suppressor_45acp.p3d";
		rotationFlags=17;
		reversed=0;
		weight=70;
		itemSize[]={3,1};
		itemModelLength=0.176;
		barrelArmor=600;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_east",
			"Military_west",
			"Police",
			"Civilian"
		};
		inventorySlot[]=
		{
			"pistolMuzzle"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00015000001;
		dispersionCondition="true";
		noiseShootModifier=-0.93000001;
		recoilModifier[]={0.89999998,0.89999998,0.89999998};
		swayModifier[]={1.3,1.3,1.3};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=2;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
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
								"DZ\weapons\attachments\data\gemtech.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\gemtech.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\gemtech_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\gemtech_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\gemtech_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Groza_Barrel_Short: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_Groza_Barrel_Short0";
		descriptionShort="$STR_cfgVehicles_Groza_Barrel_Short1";
		model="\dz\weapons\firearms\ots14\ots14_barrel.p3d";
		rotationFlags=17;
		reversed=0;
		weight=150;
		itemSize[]={1,1};
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_east"
		};
		inventorySlot[]=
		{
			"weaponMuzzleAK"
		};
		selectionFireAnim="zasleh";
		muzzlePos="usti hlavne";
		simulation="ItemSuppressor";
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
								"DZ\weapons\firearms\ots14\data\ots14_barrel.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_barrel.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_barrel_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_barrel_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_barrel_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Groza_Barrel_Grip: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_Groza_Barrel_Grip0";
		descriptionShort="$STR_cfgVehicles_Groza_Barrel_Grip1";
		model="\dz\weapons\firearms\ots14\ots14_barrel_grip.p3d";
		rotationFlags=17;
		reversed=0;
		weight=354;
		itemSize[]={1,2};
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_east"
		};
		inventorySlot[]=
		{
			"weaponMuzzleAK"
		};
		selectionFireAnim="zasleh";
		muzzlePos="usti hlavne";
		simulation="ItemSuppressor";
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
								"DZ\weapons\firearms\ots14\data\ots14_barrel_grip.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_barrel_grip.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_barrel_grip_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_barrel_grip_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_barrel_grip_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Groza_Barrel_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_Groza_Barrel_Suppressor0";
		descriptionShort="$STR_cfgVehicles_Groza_Barrel_Suppressor1";
		model="\dz\weapons\firearms\ots14\ots14_silencer.p3d";
		rotationFlags=17;
		reversed=0;
		weight=120;
		itemSize[]={1,2};
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_east"
		};
		inventorySlot[]=
		{
			"weaponMuzzleAK"
		};
		dispersionModifier=-9.9999997e-05;
		noiseShootModifier=-0.89999998;
		simulation="ItemSuppressor";
		dispersionCondition="true";
		selectionFireAnim="zasleh";
		muzzlePos="usti hlavne";
		soundIndex=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=4;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_silencer.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_silencer.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_silencer_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_silencer_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\firearms\ots14\data\ots14_silencer_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class MakarovPBSuppressor: ItemSuppressor
	{
		scope=2;
		displayName="$STR_cfgVehicles_MakarovPBSuppressor0";
		descriptionShort="$STR_cfgVehicles_MakarovPBSuppressor1";
		model="\dz\weapons\attachments\muzzle\suppressor_pb6p9.p3d";
		rotationFlags=17;
		reversed=0;
		weight=70;
		itemSize[]={3,1};
		itemModelLength=0.13600001;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_east"
		};
		inventorySlot[]=
		{
			"pistolMuzzle"
		};
		simulation="ItemSuppressor";
		noiseShootModifier=-0.89999998;
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_akm_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
		};
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
								"DZ\weapons\attachments\muzzle\data\suppressor_pb6p9.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\muzzle\data\suppressor_pb6p9.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\muzzle\data\suppressor_pb6p9_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\muzzle\data\suppressor_pb6p9_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\muzzle\data\suppressor_pb6p9_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Aug_Barrel: ItemBarrel
	{
		scope=2;
		displayName="$STR_cfgVehicles_Aug_Barrel0";
		descriptionShort="$STR_cfgVehicles_Aug_Barrel1";
		model="\dz\weapons\attachments\muzzle\suppressor_556.p3d";
		rotationFlags=17;
		reversed=0;
		weight=73;
		itemSize[]={1,3};
		itemModelLength=0.148;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_west"
		};
		inventorySlot[]=
		{
			"weaponBarrelAug"
		};
		simulation="ItemBarrel";
		noiseShootModifier=-0.89999998;
		dispersionCondition="true";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
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
								"DZ\weapons\attachments\data\suppressor556.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\suppressor556.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\suppressor556_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\suppressor556_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\suppressor556_destruct.rvmat"
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
	class ProxyAttachment;
	class ProxyBayonet_AK: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponBayonetAK";
		model="\dz\weapons\attachments\muzzle\bayonet_ak.p3d";
	};
	class ProxyBayonet_M9A1: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponBayonet";
		model="\dz\weapons\attachments\muzzle\bayonet_m9a1.p3d";
	};
	class ProxyBayonet_Mosin: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponBayonetMosin";
		model="\dz\weapons\attachments\muzzle\bayonet_mosin.p3d";
	};
	class ProxyBayonet_SKS: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponBayonetSKS";
		model="\dz\weapons\attachments\muzzle\bayonet_sks.p3d";
	};
	class ProxyMosin_Compensator: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponMuzzleMosin";
		model="\dz\weapons\attachments\muzzle\mosin_compensator.p3d";
	};
	class ProxyMP5k_compensator: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponMuzzleMP5";
		model="\dz\weapons\attachments\muzzle\MP5k_compensator.p3d";
	};
	class Proxybottle_suppressor: ProxyAttachment
	{
		scope=2;
		inventorySlot="suppressorImpro";
		model="\dz\weapons\attachments\muzzle\bottle_suppressor.p3d";
	};
	class ProxySuppressor_556: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponMuzzleM4";
		model="\dz\weapons\attachments\muzzle\suppressor_556.p3d";
	};
	class ProxySuppressor_545: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponMuzzleAK";
		model="\dz\weapons\attachments\muzzle\suppressor_545.p3d";
	};
	class ProxySuppressor_45ACP: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistolMuzzle";
		model="\dz\weapons\attachments\muzzle\suppressor_45acp.p3d";
	};
	class ProxyOTs14_Barrel: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponMuzzleAK";
		model="\dz\weapons\firearms\ots14\ots14_barrel.p3d";
	};
	class ProxyOTs14_Barrel_Grip: ProxyOTs14_Barrel
	{
		model="\dz\weapons\firearms\ots14\ots14_barrel_grip.p3d";
	};
	class ProxyOTs14_Silencer: ProxyOTs14_Barrel
	{
		model="\dz\weapons\firearms\ots14\ots14_silencer.p3d";
	};
};

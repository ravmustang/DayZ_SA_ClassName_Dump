class CfgPatches
{
	class DZ_Weapons_Optics
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
	class ItemOptics;
	class ItemOptics_Base: ItemOptics
	{
		soundImpactType="default";
		repairableWithKits[]={7};
		repairCosts[]={25};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet="PSO11Optic_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="PSO11Optic_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class M4_CarryHandleOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_M4_CarryHandleOptic0";
		descriptionShort="$STR_cfgVehicles_M4_CarryHandleOptic1";
		model="\DZ\weapons\attachments\optics\optic_m4_carryhandle.p3d";
		debug_ItemCategory=3;
		rotationFlags=17;
		reversed=0;
		weight=350;
		itemSize[]={2,1};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		inventorySlot[]=
		{
			"weaponOptics"
		};
		simulation="itemoptics";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\m4_handle_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\data\m4_handle.rvmat"
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
								"DZ\weapons\attachments\data\m4_handle.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\m4_handle.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\m4_handle_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\m4_handle_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\m4_handle_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=25;
			distanceZoomMax=200;
			discreteDistance[]={25,50,100,200};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
		};
	};
	class BUISOptic: ItemOptics_Base
	{
		scope=2;
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		displayName="$STR_cfgVehicles_BUISOptic0";
		descriptionShort="$STR_cfgVehicles_BUISOptic1";
		model="\DZ\weapons\attachments\optics\optic_buis.p3d";
		debug_ItemCategory=3;
		rotationFlags=17;
		reversed=0;
		weight=644;
		itemSize[]={1,1};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		inventorySlot[]=
		{
			"weaponOptics"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\m4_buis_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\data\m4_buis.rvmat"
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
								"DZ\weapons\attachments\data\m4_buis.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\m4_buis.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\m4_buis_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\m4_buis_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\m4_buis_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=200;
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			discreteDistance[]={25,50,100,200};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
		};
	};
	class M68Optic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_M68Optic0";
		descriptionShort="$STR_cfgVehicles_M68Optic1";
		model="\DZ\weapons\attachments\optics\optic_m68_cco.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		simulation="itemoptics";
		inventorySlot[]=
		{
			"weaponOptics"
		};
		selectionFireAnim="zasleh";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		rotationFlags=16;
		reversed=0;
		weight=265;
		itemSize[]={2,1};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camo",
			"reddot"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\cm2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\data\cm2.rvmat"
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
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\data\cm2.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\data\cm2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"DZ\weapons\attachments\data\cm2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]={};
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=25;
			distanceZoomMax=100;
			discreteDistance[]={25,50,100};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
			opticSightTexture="dz\weapons\attachments\optics\data\collimdot_red_ca.paa";
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	class M4_T3NRDSOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_M4_T3NRDSOptic0";
		descriptionShort="$STR_cfgVehicles_M4_T3NRDSOptic1";
		model="\DZ\weapons\attachments\optics\optic_t3n_rds.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		simulation="itemoptics";
		inventorySlot[]=
		{
			"weaponOptics"
		};
		selectionFireAnim="zasleh";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		rotationFlags=4;
		reversed=0;
		weight=265;
		itemSize[]={2,1};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camo",
			"reddot"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\t3n_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\data\t3n.rvmat",
			""
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
								"DZ\weapons\attachments\data\t3n.rvmat"
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
								"DZ\weapons\attachments\data\t3n_damage.rvmat"
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
								"DZ\weapons\attachments\data\t3n_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]={};
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=25;
			distanceZoomMax=100;
			discreteDistance[]={25,50,100};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
			opticSightTexture="dz\weapons\attachments\optics\data\collimdot_red_ca.paa";
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	class FNP45_MRDSOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_FNP45_MRDSOptic0";
		descriptionShort="$STR_cfgVehicles_FNP45_MRDSOptic1";
		model="\DZ\weapons\attachments\optics\optic_fnp45_mrds.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		simulation="itemoptics";
		inventorySlot[]=
		{
			"pistolOptics",
			"weaponOpticsCrossbow"
		};
		selectionFireAnim="zasleh";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		rotationFlags=17;
		reversed=0;
		weight=150;
		itemSize[]={1,1};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"reddot",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"dz\weapons\attachments\data\mrds_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"dz\weapons\attachments\data\mrds.rvmat"
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
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
								"DZ\weapons\attachments\data\mrds.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
								"DZ\weapons\attachments\data\mrds_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
								"DZ\weapons\attachments\data\mrds_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]={};
			opticSightTexture="dz\weapons\attachments\optics\data\collimdot_red_ca.paa";
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=25;
			distanceZoomMax=50;
			discreteDistance[]={25,50};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
			PPDOFProperties[]={1,0.2,20,185,4,10};
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	class ReflexOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_ReflexOptic0";
		descriptionShort="$STR_cfgVehicles_ReflexOptic1";
		model="\DZ\weapons\attachments\optics\optic_reflex.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		simulation="itemoptics";
		inventorySlot[]=
		{
			"WeaponOptics"
		};
		selectionFireAnim="zasleh";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={2,1};
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"reddot",
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"dz\weapons\attachments\optics\data\red_dot_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"dz\weapons\attachments\optics\data\red_dot.rvmat"
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
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\optics\data\Red_Dot.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\optics\data\Red_Dot_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"DZ\weapons\attachments\optics\data\Red_Dot_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]={};
			opticSightTexture="dz\weapons\attachments\optics\data\collimdot_red_ca.paa";
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=25;
			distanceZoomMax=200;
			discreteDistance[]={25,50,100,200};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	class ACOGOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_ACOGOptic0";
		descriptionShort="$STR_cfgVehicles_ACOGOptic1";
		model="\DZ\weapons\attachments\optics\optic_acog.p3d";
		debug_ItemCategory=3;
		animClass="Binoculars";
		rotationFlags=16;
		reversed=0;
		weight=440;
		itemSize[]={2,1};
		inventorySlot[]=
		{
			"WeaponOptics"
		};
		selectionFireAnim="zasleh";
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\acog_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\data\acog.rvmat"
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
								"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
								"DZ\weapons\attachments\data\acog.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
								"DZ\weapons\attachments\data\acog_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
								"DZ\weapons\attachments\data\acog_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]={};
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/4";
			opticsZoomInit="0.3926/4";
			distanceZoomMin=100;
			distanceZoomMax=600;
			discreteDistance[]={100,200,300,400,500,600};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.375,0.050000001};
			PPLensProperties[]={0.5,0.15000001,0,0};
			PPBlurProperties=0.60000002;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera="eyeIronsights";
			cameraDir="cameraDirIronsights";
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=25;
			distanceZoomMax=25;
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			PPDOFProperties[]={1,0.1,20,200,4,10};
		};
	};
	class ACOGOptic_6x: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_ACOGOptic_6x_0";
		descriptionShort="$STR_ACOGOptic_6x_1";
		model="\DZ\weapons\attachments\optics\optic_acog6x.p3d";
		debug_ItemCategory=3;
		animClass="Binoculars";
		rotationFlags=16;
		reversed=0;
		weight=1300;
		itemSize[]={3,2};
		inventorySlot[]=
		{
			"WeaponOptics"
		};
		selectionFireAnim="zasleh";
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		hiddenSelections[]=
		{
			"camo",
			"Red_Dot_CO"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\optics\data\optic_acog6x_co.paa",
			"dz\weapons\attachments\optics\data\red_dot_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\optics\data\optic_acog6x.rvmat",
			"dz\weapons\attachments\optics\data\red_dot.rvmat"
		};
		class AnimationSources
		{
			class hide
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
								"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
								"DZ\weapons\attachments\optics\data\optic_acog6x.rvmat",
								"DZ\weapons\attachments\optics\data\Red_Dot.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
								"DZ\weapons\attachments\optics\data\optic_acog6x_damage.rvmat",
								"DZ\weapons\attachments\optics\data\Red_Dot_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
								"DZ\weapons\attachments\optics\data\optic_acog6x_destruct.rvmat",
								"DZ\weapons\attachments\optics\data\Red_Dot_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]={};
			opticsZoomMin="0.3926/6.0";
			opticsZoomMax="0.3926/6.0";
			opticsZoomInit="0.3926/6.0";
			nearPlaneDistanceOverride=0.54000002;
			distanceZoomMin=100;
			distanceZoomMax=800;
			discreteDistance[]={100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.34,0.050000001};
			PPLensProperties[]={0.5,0.15000001,0,0};
			PPBlurProperties=0.60000002;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera="eyeIronsights";
			cameraDir="cameraDirIronsights";
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=25;
			distanceZoomMax=200;
			discreteDistance[]={25,50,100,200};
			discreteDistanceInitIndex=0;
			PPDOFProperties[]={1,0.147,20,180,4,10};
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
		};
	};
	class PUScopeOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_PUScopeOptic0";
		descriptionShort="$STR_cfgVehicles_PUScopeOptic1";
		model="\DZ\weapons\attachments\optics\optic_puscope.p3d";
		debug_ItemCategory=3;
		animClass="Binoculars";
		rotationFlags=16;
		reversed=0;
		weight=800;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponOpticsMosin"
		};
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\puscope_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\data\puscope.rvmat"
		};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
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
								"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
								"DZ\weapons\attachments\data\puscope.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
								"DZ\weapons\attachments\data\puscope_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
								"DZ\weapons\attachments\data\puscope_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera3",
				"OpticsBlur1"
			};
			opticsZoomMin="0.3926/3.5";
			opticsZoomMax="0.3926/3.5";
			opticsZoomInit="0.3926/3.5";
			distanceZoomMin=100;
			distanceZoomMax=1300;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.34999999,0.050000001};
			PPLensProperties[]={0.5,0.15000001,0,0};
			PPBlurProperties=0.60000002;
		};
	};
	class KashtanOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_KashtanOptic0";
		descriptionShort="$STR_cfgVehicles_KashtanOptic1";
		model="\DZ\weapons\attachments\optics\optic_kashtan.p3d";
		debug_ItemCategory=3;
		animClass="Binoculars";
		rotationFlags=16;
		reversed=0;
		weight=800;
		itemSize[]={2,2};
		inventorySlot[]=
		{
			"weaponOpticsAK"
		};
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\optic_kashtan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\data\optic_kashtan.rvmat"
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
								"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
								"DZ\weapons\attachments\data\optic_kashtan.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
								"DZ\weapons\attachments\data\optic_kashtan_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
								"DZ\weapons\attachments\data\optic_kashtan_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera3",
				"OpticsBlur1"
			};
			opticsZoomMin="0.3926/2.38";
			opticsZoomMax="0.3926/2.38";
			opticsZoomInit="0.3926/2.38";
			distanceZoomMin=200;
			distanceZoomMax=200;
			discreteDistance[]={200};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.079999998};
			PPLensProperties[]={0.34999999,0.15000001,0,0};
			PPBlurProperties=0.2;
		};
	};
	class LongrangeOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_LongrangeOptic0";
		descriptionShort="$STR_cfgVehicles_LongrangeOptic1";
		model="\DZ\weapons\attachments\optics\optic_longrange.p3d";
		debug_ItemCategory=3;
		animClass="Binoculars";
		rotationFlags=4;
		reversed=0;
		weight=700;
		itemSize[]={3,2};
		inventorySlot[]=
		{
			"weaponOpticsLRS"
		};
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope_temp";
		cameraDir="cameraDir";
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
								"DZ\weapons\attachments\data\scope_alpha_ca.paa",
								"DZ\weapons\attachments\data\mosin_scope.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
								"DZ\weapons\attachments\data\mosin_scope_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
								"DZ\weapons\attachments\data\mosin_scope_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope_temp";
			cameraDir="cameraDir";
			useModelOptics=1;
			modelOptics="\DZ\weapons\attachments\optics\opticview_longrange.p3d";
			preloadOpticType="Preload2DOptic_Longrange";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera3",
				"OpticsBlur1"
			};
			opticsZoomMin="0.3926/2.08";
			opticsZoomMax="0.3926/7.5";
			opticsZoomInit="0.3926/2.08";
			discretefov[]=
			{
				"0.3926/2.08",
				"0.3926/3.89",
				"0.3926/5.69",
				"0.3926/7.5"
			};
			discreteInitIndex=0;
			distanceZoomMin=100;
			distanceZoomMax=800;
			discreteDistance[]={100,200,300,400,500,600,700,800};
			discreteDistanceInitIndex=1;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
		};
	};
	class HuntingOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_HuntingOptic0";
		descriptionShort="$STR_cfgVehicles_HuntingOptic1";
		model="\DZ\weapons\attachments\optics\optic_hunting.p3d";
		debug_ItemCategory=3;
		animClass="Binoculars";
		rotationFlags=4;
		reversed=0;
		weight=700;
		itemSize[]={4,1};
		inventorySlot[]=
		{
			"weaponOpticsHunting"
		};
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camo",
			"camo_rings"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\data\terra_co.paa",
			"dz\weapons\attachments\data\mosin_scope_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\data\terra.rvmat",
			"dz\weapons\attachments\data\mosin_scope.rvmat"
		};
		memoryPointCamera="eyeScope_temp";
		cameraDir="cameraDir";
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
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\data\terra.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\data\terra_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"DZ\weapons\attachments\data\terra_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			useModelOptics=1;
			modelOptics="\DZ\weapons\attachments\optics\opticview_longrange.p3d";
			preloadOpticType="Preload2DOptic_Longrange";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera3",
				"OpticsBlur1"
			};
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/12";
			opticsZoomInit="0.3926/4";
			discretefov[]=
			{
				"0.3926/4",
				"0.3926/8",
				"0.3926/12"
			};
			discreteInitIndex=0;
			distanceZoomMin=100;
			distanceZoomMax=1000;
			discreteDistance[]={200,300,400,500,600,700,800};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.47,0.1};
			PPLensProperties[]={0.075000003,0.15000001,0,0};
			PPBlurProperties=0.30000001;
		};
		class OpticsModelInfo
		{
			hiddenSelections[]=
			{
				"reddot"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
			healthLevels[]=
			{
				
				{
					1,
					
					{
						"dz\weapons\attachments\optics\data\lensglass_ca.paa"
					}
				},
				
				{
					0.69999999,
					{}
				},
				
				{
					0.5,
					
					{
						"dz\weapons\attachments\optics\data\lensglass_damage_ca.paa"
					}
				},
				
				{
					0.30000001,
					{}
				},
				
				{
					0,
					
					{
						"dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa"
					}
				}
			};
		};
		class AnimationSources
		{
			class hide
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class rings_ris
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class rings_ris_pilot
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class rings_winchester
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class rings_winchester_pilot
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
	};
	class PistolOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_PistolOptic0";
		descriptionShort="$STR_cfgVehicles_PistolOptic1";
		model="\DZ\weapons\attachments\optics\optic_pistol.p3d";
		debug_ItemCategory=3;
		animClass="Binoculars";
		rotationFlags=12;
		reversed=0;
		weight=700;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponOpticsCrossbow"
		};
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\optics\data\pistol_scope_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\data\pistol_scope.rvmat"
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
								"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
								"DZ\weapons\attachments\data\pistol_scope.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
								"DZ\weapons\attachments\data\pistol_scope_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
								"DZ\weapons\attachments\data\pistol_scope_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera5",
				"OpticsBlur1"
			};
			opticsZoomMin="0.3926/1.8";
			opticsZoomMax="0.3926/1.8";
			opticsZoomInit="0.3926/1.8";
			distanceZoomMin=50;
			distanceZoomMax=150;
			discreteDistance[]={50,100,150};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.23,0.050000001};
			PPLensProperties[]={0.5,0.15000001,0,0};
			PPBlurProperties=0.2;
		};
	};
	class SportingOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_SportingOptic0";
		descriptionShort="$STR_cfgVehicles_SportingOptic1";
		model="\DZ\weapons\attachments\optics\optic_sporting.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		rotationFlags=12;
		reversed=0;
		weight=250;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponOpticsHunting"
		};
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		hiddenSelections[]=
		{
			"camo",
			"reddot"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\optics\data\optic_sporting_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\optics\data\optic_sporting.rvmat",
			""
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
								"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
								"DZ\weapons\attachments\optics\data\optic_sporting.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
								"DZ\weapons\attachments\optics\data\optic_sporting_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
								"DZ\weapons\attachments\optics\data\optic_sporting_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera5",
				"OpticsBlur1"
			};
			opticsZoomMin="0.3926/2";
			opticsZoomMax="0.3926/2";
			opticsZoomInit="0.3926/2";
			distanceZoomMin=25;
			distanceZoomMax=200;
			discreteDistance[]={25,50,100,200};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.17200001,0.039999999};
			PPLensProperties[]={0.5,0.25,0,0};
			PPBlurProperties=0.2;
			opticSightTexture="dz\weapons\attachments\optics\data\collimdot_red_ca.paa";
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	class MK4Optic_ColorBase: ItemOptics_Base
	{
		scope=0;
		displayName="$STR_cfgVehicles_MK4Optic0";
		descriptionShort="$STR_cfgVehicles_MK4Optic1";
		model="\DZ\weapons\attachments\optics\optic_mark4.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		rotationFlags=4;
		reversed=0;
		weight=600;
		itemSize[]={4,1};
		inventorySlot[]=
		{
			"WeaponOptics"
		};
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope_temp";
		cameraDir="cameraDir";
		hiddenSelections[]=
		{
			"camo"
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
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\optics\data\optic_mark4.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\optics\data\optic_mark4_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"DZ\weapons\attachments\optics\data\optic_mark4_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			useModelOptics=1;
			modelOptics="\DZ\weapons\attachments\optics\opticview_mark4.p3d";
			preloadOpticType="Preload2DOptic_Longrange";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera3",
				"OpticsBlur1"
			};
			opticsZoomMin="0.3926/3.5";
			opticsZoomMax="0.3926/10";
			opticsZoomInit="0.3926/10";
			discretefov[]=
			{
				"0.3926/3.5",
				"0.3926/6.5",
				"0.3926/10"
			};
			discreteInitIndex=0;
			distanceZoomMin=100;
			distanceZoomMax=1100;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.47999999,0.1};
			PPLensProperties[]={0.075000003,0.15000001,0,0};
			PPBlurProperties=0.30000001;
		};
		class OpticsModelInfo
		{
			hiddenSelections[]=
			{
				"reddot"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
			healthLevels[]=
			{
				
				{
					1,
					
					{
						"dz\weapons\attachments\optics\data\lensglass_ca.paa"
					}
				},
				
				{
					0.69999999,
					{}
				},
				
				{
					0.5,
					
					{
						"dz\weapons\attachments\optics\data\lensglass_damage_ca.paa"
					}
				},
				
				{
					0.30000001,
					{}
				},
				
				{
					0,
					
					{
						"dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa"
					}
				}
			};
			opticSightTexture="dz\weapons\attachments\optics\data\opticview_mark4_e_ca.paa";
			opticSightMaterial="dz\weapons\attachments\optics\data\tritium_medium.rvmat";
		};
		class AnimationSources
		{
			class hide
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class camo
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	class MK4Optic_Tan: MK4Optic_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\optics\data\optic_mark4_tan_co.paa"
		};
	};
	class MK4Optic_Green: MK4Optic_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\optics\data\optic_mark4_green_co.paa"
		};
	};
	class MK4Optic_Black: MK4Optic_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\optics\data\optic_mark4_black_co.paa"
		};
	};
	class PSO1Optic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_PSO1Optic0";
		descriptionShort="$STR_cfgVehicles_PSO1Optic1";
		model="\DZ\weapons\attachments\optics\optic_pso1.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		rotationFlags=17;
		reversed=0;
		weight=600;
		itemSize[]={3,2};
		inventorySlot[]=
		{
			"weaponOpticsAK"
		};
		simulation="itemoptics";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"reddot",
			"reticle_nonglow",
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"dz\weapons\attachments\optics\data\Reticle_Pso1Glow_ca.paa",
			"dz\weapons\attachments\data\svd_scope_co.paa",
			"dz\weapons\attachments\data\svd_scope_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"dz\weapons\attachments\optics\data\default_black.rvmat",
			"dz\weapons\attachments\data\svd_scope.rvmat",
			""
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
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\data\svd_scope.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\data\svd_scope_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"DZ\weapons\attachments\data\svd_scope_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera5",
				"OpticsBlur3"
			};
			opticSightTexture="dz\weapons\attachments\optics\data\reticle_pso1glow_ca.paa";
			opticSightMaterial="dz\weapons\attachments\optics\data\tritium_medium.rvmat";
			opticsZoomMin="0.3926/4*5/4";
			opticsZoomMax="0.3926/4*5/4";
			opticsZoomInit="0.3926/4*5/4";
			distanceZoomMin=100;
			distanceZoomMax=1000;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.36000001,0.045000002};
			PPLensProperties[]={0.75,0.25,0,0};
			PPBlurProperties=0.60000002;
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	class PSO11Optic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_PSO11Optic0";
		descriptionShort="$STR_cfgVehicles_PSO11Optic1";
		model="\DZ\weapons\attachments\optics\optic_pso1.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		rotationFlags=1;
		reversed=0;
		weight=600;
		itemSize[]={3,2};
		inventorySlot[]=
		{
			"weaponOpticsAK"
		};
		simulation="itemoptics";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"reddot",
			"reticle_nonglow",
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"dz\weapons\attachments\optics\data\Reticle_Pso11Glow_ca.paa",
			"dz\weapons\attachments\data\svd_scope_co.paa",
			"dz\weapons\attachments\data\svd_scope_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"dz\weapons\attachments\optics\data\default_black.rvmat",
			"dz\weapons\attachments\data\svd_scope.rvmat",
			""
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
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\data\svd_scope.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\data\svd_scope_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"DZ\weapons\attachments\data\svd_scope_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera5",
				"OpticsBlur3"
			};
			opticSightTexture="dz\weapons\attachments\optics\data\reticle_pso11glow_ca.paa";
			opticSightMaterial="dz\weapons\attachments\optics\data\tritium_medium.rvmat";
			opticsZoomMin="0.3926/4*5/4";
			opticsZoomMax="0.3926/4*5/4";
			opticsZoomInit="0.3926/4*5/4";
			distanceZoomMin=100;
			distanceZoomMax=1000;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.36000001,0.045000002};
			PPLensProperties[]={0.75,0.25,0,0};
			PPBlurProperties=0.60000002;
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	class PSO6Optic: PSO1Optic
	{
		scope=2;
		displayName="$STR_cfgVehicles_PSO6Optic0";
		descriptionShort="$STR_cfgVehicles_PSO6Optic1";
		model="\DZ\weapons\attachments\optics\optic_pso6.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		rotationFlags=17;
		reversed=0;
		weight=650;
		itemSize[]={3,2};
		inventorySlot[]=
		{
			"weaponOpticsAK"
		};
		simulation="itemoptics";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"reddot",
			"reticle_nonglow"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"dz\weapons\attachments\optics\data\Reticle_Pso1Glow_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"dz\weapons\attachments\optics\data\default_black.rvmat"
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
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\data\svd_scope.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\data\svd_scope_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"DZ\weapons\attachments\data\svd_scope_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera5",
				"OpticsBlur3"
			};
			opticSightTexture="dz\weapons\attachments\optics\data\reticle_pso6xglow_ca.paa";
			opticSightMaterial="dz\weapons\attachments\optics\data\tritium_medium.rvmat";
			opticsZoomMin="0.3926/6.0";
			opticsZoomMax="0.3926/6.0";
			opticsZoomInit="0.3926/6.0";
			distanceZoomMin=100;
			distanceZoomMax=1000;
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.44999999,0.029999999};
			PPLensProperties[]={0.5,0.40000001,0,0};
			PPBlurProperties=0.60000002;
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	class GrozaOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_GrozaOptic0";
		descriptionShort="$STR_cfgVehicles_GrozaOptic1";
		model="\DZ\weapons\attachments\optics\optic_ots14.p3d";
		animClass="Binoculars";
		rotationFlags=17;
		reversed=0;
		weight=600;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"weaponOpticsAK"
		};
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
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
								"DZ\weapons\attachments\data\ots14_scope.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\ots14_scope.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\ots14_scope_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\ots14_scope_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\ots14_scope_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			useModelOptics=1;
			modelOptics="\DZ\weapons\attachments\optics\opticview_pso1_vss.p3d";
			preloadOpticType="Preload2DOptic_Pso1_VSS";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera5",
				"OpticsBlur3"
			};
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/4";
			opticsZoomInit="0.3926/4";
			distanceZoomMin=100;
			distanceZoomMax=400;
			discreteDistance[]={100,200,400};
			discreteDistanceInitIndex=1;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
		};
		class AnimationSources
		{
			class leaver
			{
				source="user";
				animPeriod=0.5;
				initPhase=0;
			};
			class hide
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
	};
	class KobraOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgVehicles_KobraOptic0";
		descriptionShort="$STR_cfgVehicles_KobraOptic1";
		model="\DZ\weapons\attachments\optics\optic_kobra.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		rotationFlags=16;
		reversed=0;
		weight=800;
		itemSize[]={2,2};
		inventorySlot[]=
		{
			"weaponOpticsAK"
		};
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camo",
			"reddot"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\optics\data\red_dot_kobra_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\optics\data\red_dot_kobra.rvmat"
		};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
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
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_clearer.rvmat",
								"DZ\weapons\attachments\optics\data\Red_dot_kobra.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_clearer_damage.rvmat",
								"DZ\weapons\attachments\optics\data\Red_dot_kobra_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_clearer_destruct.rvmat",
								"DZ\weapons\attachments\optics\data\Red_dot_kobra_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera3",
				"OpticsBlur1"
			};
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
			opticSightTexture="dz\weapons\attachments\optics\data\red_chevron_ca.paa";
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	class KazuarOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_cfgvehicles_1PN51Optic0";
		descriptionShort="$STR_cfgvehicles_1PN51Optic1";
		model="\DZ\weapons\attachments\optics\optic_1PN51.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		rotationFlags=17;
		reversed=0;
		weight=2000;
		itemSize[]={4,3};
		inventorySlot[]=
		{
			"weaponOpticsAK"
		};
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope_temp";
		cameraDir="cameraDir";
		NVOptic=1;
		repairableWithKits[]={};
		repairCosts[]={};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\optics\data\optic_1pn-51_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\optics\data\optic_1pn-51.rvmat"
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
								"dz\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\optics\data\optic_1PN-51.rvmat"
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
								"DZ\weapons\attachments\optics\data\optic_1PN-51_damage.rvmat"
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
								"DZ\weapons\attachments\optics\data\optic_1PN-51_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope_temp";
			cameraDir="cameraDir";
			useModelOptics=1;
			modelOptics="\DZ\weapons\attachments\optics\1PN51_opticview.p3d";
			preloadOpticType="Preload2DOptic_1PN51";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera3",
				"OpticsBlur1"
			};
			opticsZoomMin="0.3926/3.5";
			opticsZoomMax="0.3926/3.5";
			opticsZoomInit="0.3926/3.5";
			distanceZoomMin=100;
			distanceZoomMax=700;
			discreteDistance[]={100,200,300,400,500,600,700};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.1};
			PPLensProperties[]={-1.25,1,0,0};
			PPBlurProperties=0.75;
		};
		class OpticsModelInfo
		{
			hiddenSelections[]=
			{
				"reddot"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
			healthLevels[]=
			{
				
				{
					1,
					
					{
						"dz\weapons\attachments\optics\data\lensglass_ca.paa"
					}
				},
				
				{
					0.69999999,
					{}
				},
				
				{
					0.5,
					
					{
						"dz\weapons\attachments\optics\data\lensglass_damage_ca.paa"
					}
				},
				
				{
					0.30000001,
					{}
				},
				
				{
					0,
					
					{
						"dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa"
					}
				}
			};
			opticSightTexture="dz\weapons\attachments\optics\data\1pn51_reticle_ca.paa";
			opticSightMaterial="dz\weapons\attachments\optics\data\tritium_medium.rvmat";
		};
		class AnimationSources
		{
			class hide
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class hide_cover
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class hide_cover_pilot
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	class StarlightOptic: ItemOptics_Base
	{
		scope=2;
		displayName="$STR_StarlightOptic0";
		descriptionShort="$STR_StarlightOptic1";
		model="\DZ\weapons\attachments\optics\optic_starlight.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		rotationFlags=17;
		weight=1800;
		itemSize[]={4,3};
		inventorySlot[]=
		{
			"WeaponOptics"
		};
		simulation="itemoptics";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope_temp";
		cameraDir="cameraDir";
		NVOptic=1;
		repairableWithKits[]={};
		repairCosts[]={};
		hiddenSelections[]=
		{
			"camo",
			"camo_cover"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\optics\data\starlight_scope_co.paa",
			"dz\weapons\attachments\optics\data\starlight_cover_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\weapons\attachments\optics\data\optic_starlight.rvmat",
			"dz\weapons\attachments\optics\data\optic_starlight_cover.rvmat"
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
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\optics\data\optic_starlight.rvmat",
								"DZ\weapons\attachments\optics\data\optic_starlight_emissive.rvmat",
								"DZ\weapons\attachments\optics\data\optic_starlight_cover.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\optics\data\optic_starlight_damage.rvmat",
								"DZ\weapons\attachments\optics\data\optic_starlight_emissive.rvmat",
								"DZ\weapons\attachments\optics\data\optic_starlight_cover_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"DZ\weapons\attachments\optics\data\optic_starlight_destruct.rvmat",
								"DZ\weapons\attachments\optics\data\optic_starlight_destruct.rvmat",
								"DZ\weapons\attachments\optics\data\optic_starlight_cover_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope_temp";
			cameraDir="cameraDir";
			useModelOptics=1;
			modelOptics="\DZ\weapons\attachments\optics\starlightscope_opticview.p3d";
			preloadOpticType="Preload2DOptic_1PN51";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]=
			{
				"OpticsCHAbera3",
				"OpticsBlur1"
			};
			opticsZoomMin="0.3926/3.5";
			opticsZoomMax="0.3926/3.5";
			opticsZoomInit="0.3926/3.5";
			distanceZoomMin=100;
			distanceZoomMax=700;
			discreteDistance[]={100,200,300,400,500,600,700};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.5,0.059999999};
			PPLensProperties[]={-0.89999998,1,0,0};
			PPBlurProperties=0.75;
		};
		class OpticsModelInfo
		{
			hiddenSelections[]=
			{
				"reddot"
			};
			hiddenSelectionsTextures[]=
			{
				""
			};
			healthLevels[]=
			{
				
				{
					1,
					
					{
						"dz\weapons\attachments\optics\data\lensglass_ca.paa"
					}
				},
				
				{
					0.69999999,
					{}
				},
				
				{
					0.5,
					
					{
						"dz\weapons\attachments\optics\data\lensglass_damage_ca.paa"
					}
				},
				
				{
					0.30000001,
					{}
				},
				
				{
					0,
					
					{
						"dz\weapons\attachments\optics\data\lensglass_destruct_ca.paa"
					}
				}
			};
			opticSightTexture="dz\weapons\attachments\optics\data\starlight_scope_reticle_co.paa";
			opticSightMaterial="dz\weapons\attachments\optics\data\tritium_medium.rvmat";
		};
		class AnimationSources
		{
			class hide
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class hide_cover
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class hide_cover_pilot
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	class Preload2DOptic_Longrange: Inventory_Base
	{
		scope=0;
		model="\DZ\weapons\attachments\optics\opticview_longrange.p3d";
	};
	class Preload2DOptic_Pistol: Inventory_Base
	{
		scope=0;
		model="\DZ\weapons\attachments\optics\opticview_pistol.p3d";
	};
	class Preload2DOptic_Pso1_VSS: Inventory_Base
	{
		scope=0;
		model="\DZ\weapons\attachments\optics\opticview_pso1_vss.p3d";
	};
	class Preload2DOptic_1PN51: Inventory_Base
	{
		scope=0;
		model="\DZ\weapons\attachments\optics\1PN51_opticview.p3d";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyOptic_M4_carryhandle: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOptics";
		model="\DZ\weapons\attachments\optics\optic_m4_carryhandle.p3d";
	};
	class ProxyOptic_BUIS: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOptics";
		model="\DZ\weapons\attachments\optics\optic_buis.p3d";
	};
	class ProxyOptic_FNP45_MRDS: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistolOptics";
		model="\DZ\weapons\attachments\optics\optic_fnp45_mrds.p3d";
	};
	class ProxyOptic_ACOG: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOptics";
		model="\DZ\weapons\attachments\optics\optic_acog.p3d";
	};
	class ProxyOptic_T3N_RDS: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOptics";
		model="\DZ\weapons\attachments\optics\optic_t3n_rds.p3d";
	};
	class Proxyoptic_red_point: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsCrossbow";
		model="\DZ\weapons\attachments\optics\optic_red_point.p3d";
	};
	class ProxyOptic_PUScope: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsMosin";
		model="\DZ\weapons\attachments\optics\optic_puscope.p3d";
	};
	class ProxyOptic_LongRange: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsLRS";
		model="\DZ\weapons\attachments\optics\optic_longrange.p3d";
	};
	class ProxyOptic_PSO1: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsAK";
		model="\DZ\weapons\attachments\optics\optic_pso1.p3d";
	};
	class ProxyOptic_Hunting: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsHunting";
		model="\DZ\weapons\attachments\optics\optic_hunting.p3d";
	};
	class ProxyOptic_MK4Optic: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOptics";
		model="\DZ\weapons\attachments\optics\optic_hunting.p3d";
	};
	class ProxyOptic_Pistol: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsCrossbow";
		model="\DZ\weapons\attachments\optics\optic_pistol.p3d";
	};
	class ProxyOptic_Reflex: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOptics";
		model="\DZ\weapons\attachments\optics\optic_reflex.p3d";
	};
	class Proxyoptic_1PN51: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsAK";
		model="\DZ\weapons\attachments\optics\optic_1PN51.p3d";
	};
};

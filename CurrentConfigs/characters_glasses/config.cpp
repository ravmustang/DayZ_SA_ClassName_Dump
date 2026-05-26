class CfgPatches
{
	class DZ_Characters_Glasses
	{
		units[]=
		{
			"SunGlasses"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Gear_Optics"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class ItemOptics;
	class Clothing: Clothing_Base
	{
	};
	class SportGlasses_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_SportGlasses0";
		descriptionShort="$STR_CfgVehicles_SportGlasses1";
		model="\DZ\characters\glasses\sport_glasses_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=17;
		itemSize[]={3,1};
		weight=20;
		lootCategory="Eyewear";
		lootTag[]=
		{
			"Civilian"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
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
								"DZ\characters\glasses\data\joeyx.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\joeyx.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\joeyx_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\joeyx_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\joeyx_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\glasses\sport_glasses.p3d";
			female="\DZ\characters\glasses\sport_glasses.p3d";
		};
		soundImpactType="plastic";
		class Protection
		{
			dust_particle_eyes=0.80000001;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SportGlasses_Black: SportGlasses_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\glasses\data\joeyx_black_ca.paa",
			"\dz\characters\glasses\data\joeyx_black_ca.paa",
			"\dz\characters\glasses\data\joeyx_black_ca.paa"
		};
	};
	class SportGlasses_Blue: SportGlasses_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\glasses\data\joeyx_blue_ca.paa",
			"\dz\characters\glasses\data\joeyx_blue_ca.paa",
			"\dz\characters\glasses\data\joeyx_blue_ca.paa"
		};
	};
	class SportGlasses_Green: SportGlasses_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\glasses\data\joeyx_green_ca.paa",
			"\dz\characters\glasses\data\joeyx_green_ca.paa",
			"\dz\characters\glasses\data\joeyx_green_ca.paa"
		};
	};
	class SportGlasses_Orange: SportGlasses_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\glasses\data\joeyx_yellowred_ca.paa",
			"\dz\characters\glasses\data\joeyx_yellowred_ca.paa",
			"\dz\characters\glasses\data\joeyx_yellowred_ca.paa"
		};
	};
	class AviatorGlasses: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_AviatorGlasses0";
		descriptionShort="$STR_CfgVehicles_AviatorGlasses1";
		model="\DZ\characters\glasses\aviator_glasses_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=17;
		weight=36;
		itemSize[]={2,1};
		lootTag[]=
		{
			"Military_west",
			"Military_east",
			"Civilian"
		};
		lootCategory="Eyewear";
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
								"DZ\characters\glasses\data\goggles2_metal.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\goggles2_metal.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\goggles2_metal_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\goggles2_metal_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\goggles2_metal_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType="glass";
		class Protection
		{
			dust_particle_eyes=0.5;
		};
		class ClothingTypes
		{
			male="\DZ\characters\glasses\aviator_glasses.p3d";
			female="\DZ\characters\glasses\aviator_glasses.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class DesignerGlasses: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_DesignerGlasses0";
		descriptionShort="$STR_CfgVehicles_DesignerGlasses1";
		model="\DZ\characters\glasses\sunglasses_designer_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=17;
		weight=40;
		itemSize[]={2,1};
		lootTag[]=
		{
			"Civilian"
		};
		lootCategory="Eyewear";
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
								"DZ\characters\glasses\data\sunglass_designer.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\sunglass_designer.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\sunglass_designer_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\sunglass_designer_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\sunglass_designer_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\glasses\sunglasses_designer.p3d";
			female="\DZ\characters\glasses\sunglasses_designer.p3d";
		};
		soundImpactType="glass";
		class Protection
		{
			dust_particle_eyes=0.69999999;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class ThickFramesGlasses: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_ThickFramesGlasses0";
		descriptionShort="$STR_CfgVehicles_ThickFramesGlasses1";
		model="\DZ\characters\glasses\glasses_thick_frame_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=17;
		weight=50;
		itemSize[]={2,1};
		lootTag[]=
		{
			"Civilian"
		};
		lootCategory="Eyewear";
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
								"DZ\characters\glasses\data\ThickFrameGlasses.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\ThickFrameGlasses.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\ThickFrameGlasses_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\ThickFrameGlasses_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\ThickFrameGlasses_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\glasses\glasses_thick_frame.p3d";
			female="\DZ\characters\glasses\glasses_thick_frame.p3d";
		};
		soundImpactType="glass";
		class Protection
		{
			dust_particle_eyes=0.69999999;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class ThinFramesGlasses: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_ThinFramesGlasses0";
		descriptionShort="$STR_CfgVehicles_ThinFramesGlasses1";
		model="\DZ\characters\glasses\glasses_thin_frame_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=17;
		weight=30;
		itemSize[]={2,1};
		lootTag[]=
		{
			"Civilian"
		};
		lootCategory="Eyewear";
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
								"DZ\characters\glasses\data\ThinFrameGlasses.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\ThinFrameGlasses.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\ThinFrameGlasses_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\ThinFrameGlasses_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\ThinFrameGlasses_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\glasses\glasses_thin_frame.p3d";
			female="\DZ\characters\glasses\glasses_thin_frame.p3d";
		};
		soundImpactType="glass";
		class Protection
		{
			dust_particle_eyes=0.69999999;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TacticalGoggles: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_TacticalGoggles0";
		descriptionShort="$STR_CfgVehicles_TacticalGoggles1";
		model="\DZ\characters\glasses\TacGoggles_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=1;
		itemSize[]={2,1};
		weight=100;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\glasses\data\TacGoggles.rvmat",
								"DZ\characters\glasses\data\TacGoggles_glass.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\TacGoggles.rvmat",
								"DZ\characters\glasses\data\TacGoggles_glass.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\TacGoggles_damage.rvmat",
								"DZ\characters\glasses\data\TacGoggles_glass_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\TacGoggles_damage.rvmat",
								"DZ\characters\glasses\data\TacGoggles_glass_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\TacGoggles_destruct.rvmat",
								"DZ\characters\glasses\data\TacGoggles_glass_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\glasses\TacGoggles.p3d";
			female="\DZ\characters\glasses\TacGoggles.p3d";
		};
		soundImpactType="glass";
		class Protection
		{
			dust_particle_eyes=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class EyePatch_Improvised: Clothing
	{
		scope=2;
		displayName="$STR_EyePatch_Improvised0";
		descriptionShort="$STR_EyePatch_Improvised1";
		model="\DZ\characters\glasses\eyepatch_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=34;
		itemSize[]={3,1};
		weight=20;
		ragQuantity=1;
		repairableWithKits[]={2};
		repairCosts[]={25};
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
								"DZ\characters\glasses\data\eyepatch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\eyepatch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\eyepatch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\eyepatch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\eyepatch_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\glasses\eyepatch_m.p3d";
			female="\DZ\characters\glasses\eyepatch.p3d";
		};
		soundImpactType="textile";
		class Protection
		{
			dust_particle_eyes=0.2;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class NVGHeadstrap: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_NVGHeadstrap0";
		descriptionShort="$STR_CfgVehicles_NVGHeadstrap1";
		model="\DZ\characters\glasses\NVG_Headstrap_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		attachments[]=
		{
			"NVG"
		};
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=2;
		itemSize[]={3,3};
		weight=150;
		isStrap=1;
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
								"DZ\characters\glasses\data\NVG_Headstrap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		headSelectionsToHide[]=
		{
			"Clipping_NVGHeadstrap"
		};
		class ClothingTypes
		{
			male="\DZ\characters\glasses\NVG_Headstrap.p3d";
			female="\DZ\characters\glasses\NVG_Headstrap_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class NVGoggles: ItemOptics
	{
		scope=2;
		displayName="$STR_CfgVehicles_NVGoggles0";
		descriptionShort="$STR_CfgVehicles_NVGoggles1";
		model="\DZ\characters\glasses\NVG.p3d";
		simulation="itemoptics";
		animClass="Binoculars";
		inventorySlot[]=
		{
			"NVG"
		};
		itemSize[]={2,2};
		weight=300;
		rotationFlags=1;
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="\DZ\gear\optics\binoculars_view.p3d";
			distanceZoomMin=500;
			distanceZoomMax=500;
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
		};
		class OpticsModelInfo
		{
			healthLevels[]=
			{
				
				{
					1,
					
					{
						"dz\gear\optics\data\binoculars_reticledirty_ca.paa"
					}
				},
				
				{
					0.69999999,
					{}
				},
				
				{
					0.5,
					
					{
						"dz\gear\optics\data\binoculars_reticledirty_damage_ca.paa"
					}
				},
				
				{
					0.30000001,
					{}
				},
				
				{
					0,
					
					{
						"dz\gear\optics\data\binoculars_reticledirty_destruct_ca.paa"
					}
				}
			};
		};
		attachments[]=
		{
			"BatteryD"
		};
		NVOptic=1;
		simpleHiddenSelections[]=
		{
			"hide"
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
								"DZ\characters\glasses\data\NVG_Headstrap.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\NVG_Headstrap_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
		};
		class AnimationSources
		{
			class hide
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class rotate
			{
				source="user";
				animPeriod=0.30000001;
				initPhase=0;
			};
		};
		soundImpactType="glass";
	};
	class EyeMask_ColorBase: Clothing
	{
		displayName="$STR_EyeMask_Colorbase0";
		descriptionShort="$STR_EyeMask_Colorbase1";
		model="\DZ\characters\glasses\eyemask_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Eyewear",
			"Paper"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags=34;
		weight=25;
		itemSize[]={2,1};
		varWetMax=0.79000002;
		heatIsolation=0.1;
		noMask=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\glasses\eyemask_m.p3d";
			female="\DZ\characters\glasses\eyemask_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\glasses\data\EyeMask_CO.paa",
			"DZ\characters\glasses\data\EyeMask_CO.paa",
			"DZ\characters\glasses\data\EyeMask_CO.paa"
		};
		class Protection
		{
			dust_particle_eyes=0.1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class EyeMask_Valentines: EyeMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\glasses\data\EyeMask_Valentines_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Valentines_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Valentines_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\glasses\data\EyeMask_Valentines.rvmat",
			"DZ\characters\glasses\data\EyeMask_Valentines.rvmat",
			"DZ\characters\glasses\data\EyeMask_Valentines.rvmat"
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
						"dz\characters\glasses\data\eyemask.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\characters\glasses\data\EyeMask_Valentines.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\characters\glasses\data\EyeMask_Valentines.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\characters\glasses\data\EyeMask_Valentines_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\characters\glasses\data\EyeMask_Valentines_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\characters\glasses\data\EyeMask_Valentines_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class EyeMask_NewYears: EyeMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\glasses\data\EyeMask_NewYears_CO.paa",
			"DZ\characters\glasses\data\EyeMask_NewYears_CO.paa",
			"DZ\characters\glasses\data\EyeMask_NewYears_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\glasses\data\EyeMask_Decorative.rvmat",
			"DZ\characters\glasses\data\EyeMask_Decorative.rvmat",
			"DZ\characters\glasses\data\EyeMask_Decorative.rvmat"
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
						"dz\characters\glasses\data\eyemask.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\characters\glasses\data\EyeMask_Decorative.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\characters\glasses\data\EyeMask_Decorative.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\characters\glasses\data\EyeMask_Decorative_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\characters\glasses\data\EyeMask_Decorative_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\characters\glasses\data\EyeMask_Decorative_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class EyeMask_Christmas: EyeMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\glasses\data\EyeMask_Christmas_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Christmas_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Christmas_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\glasses\data\EyeMask_Decorative.rvmat",
			"DZ\characters\glasses\data\EyeMask_Decorative.rvmat",
			"DZ\characters\glasses\data\EyeMask_Decorative.rvmat"
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
						"dz\characters\glasses\data\eyemask.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\characters\glasses\data\EyeMask_Decorative.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\characters\glasses\data\EyeMask_Decorative.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\characters\glasses\data\EyeMask_Decorative_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\characters\glasses\data\EyeMask_Decorative_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\characters\glasses\data\EyeMask_Decorative_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class EyeMask_Dead: EyeMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\glasses\data\EyeMask_Dead_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Dead_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Dead_CO.paa"
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
								"DZ\characters\glasses\data\EyeMask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\EyeMask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\EyeMask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\EyeMask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\EyeMask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class EyeMask_Black: EyeMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\glasses\data\EyeMask_Black_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Black_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Black_CO.paa"
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
								"DZ\characters\glasses\data\EyeMask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\EyeMask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\EyeMask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\EyeMask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\EyeMask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class EyeMask_Blue: EyeMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\glasses\data\EyeMask_Blue_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Blue_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Blue_CO.paa"
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
								"DZ\characters\glasses\data\EyeMask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\EyeMask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\EyeMask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\EyeMask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\EyeMask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class EyeMask_Red: EyeMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\glasses\data\EyeMask_Red_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Red_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Red_CO.paa"
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
								"DZ\characters\glasses\data\EyeMask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\EyeMask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\EyeMask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\EyeMask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\EyeMask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class EyeMask_Yellow: EyeMask_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\glasses\data\EyeMask_Yellow_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Yellow_CO.paa",
			"DZ\characters\glasses\data\EyeMask_Yellow_CO.paa"
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
								"DZ\characters\glasses\data\EyeMask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\EyeMask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\EyeMask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\EyeMask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\EyeMask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class SkiGoggles_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_SkiGoggles0";
		descriptionShort="$STR_CfgVehicles_SkiGoggles1";
		model="\DZ\characters\glasses\SkiGoggles_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Eyewear"
		};
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		rotationFlags="PLACEMENT_ROT_BottomBack";
		itemSize[]={2,2};
		weight=90;
		lootCategory="Eyewear";
		lootTag[]=
		{
			"Civilian"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\glasses\data\SkiGoggles.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\glasses\data\SkiGoggles.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\glasses\data\SkiGoggles_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\glasses\data\SkiGoggles_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\glasses\data\SkiGoggles_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\glasses\SkiGoggles_m.p3d";
			female="\DZ\characters\glasses\SkiGoggles_f.p3d";
		};
		soundImpactType="plastic";
		class Protection
		{
			dust_particle_eyes=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SkiGoggles_WhiteClear: SkiGoggles_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\glasses\data\SkiGoggles_WhiteCLear_CA.paa",
			"\dz\characters\glasses\data\SkiGoggles_WhiteCLear_CA.paa",
			"\dz\characters\glasses\data\SkiGoggles_WhiteCLear_CA.paa"
		};
	};
	class SkiGoggles_WhiteDark: SkiGoggles_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\glasses\data\SkiGoggles_WhiteDark_CA.paa",
			"\dz\characters\glasses\data\SkiGoggles_WhiteDark_CA.paa",
			"\dz\characters\glasses\data\SkiGoggles_WhiteDark_CA.paa"
		};
	};
	class SkiGoggles_BlackYellow: SkiGoggles_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\glasses\data\SkiGoggles_BlackYellow_CA.paa",
			"\dz\characters\glasses\data\SkiGoggles_BlackYellow_CA.paa",
			"\dz\characters\glasses\data\SkiGoggles_BlackYellow_CA.paa"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyNVG: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"NVG"
		};
		model="\DZ\characters\glasses\NVG.p3d";
	};
};

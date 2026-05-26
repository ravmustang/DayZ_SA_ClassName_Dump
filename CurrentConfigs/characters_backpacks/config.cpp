class CfgPatches
{
	class DZ_Characters_Backpacks
	{
		units[]=
		{
			"BagTaloon_Blue",
			"BagTaloon_Green",
			"BagTaloon_Orange",
			"BagTaloon_Violet",
			"BagCourierImprovised",
			"BagCourierImprovisedFur",
			"BagImprovised",
			"BagImprovisedFur",
			"BagHunting",
			"BagMountain_Blue",
			"BagMountain_Green",
			"BagMountain_Orange",
			"BagMountain_Red",
			"BagChilds_Blue",
			"BagChilds_Green",
			"BagChilds_Red",
			"GhillieBushragWoodland",
			"GhillieTopWoodland",
			"GhillieSuitWoodland",
			"GhillieBushragTan",
			"GhillieTopTan",
			"GhillieSuitTan",
			"GhillieBushragMossy",
			"GhillieTopMossy",
			"GhillieSuitMossy"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class cfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class TaloonBag_ColorBase: Clothing
	{
		displayName="$STR_cfgVehicles_TaloonBag_ColorBase0";
		descriptionShort="$STR_cfgVehicles_TaloonBag_ColorBase1";
		model="\dz\characters\backpacks\taloon_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		weight=1300;
		itemSize[]={4,5};
		itemsCargoSize[]={6,5};
		varWetMax=0.79000002;
		heatIsolation=0.5;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=3;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\taloon_m.p3d";
			female="\DZ\characters\backpacks\taloon_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=110;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\taloon.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\taloon.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\taloon_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\taloon_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\taloon_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TaloonBag_Blue: TaloonBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Blue_co.paa",
			"DZ\characters\backpacks\data\Taloon_Blue_co.paa",
			"DZ\characters\backpacks\data\Taloon_Blue_co.paa"
		};
	};
	class TaloonBag_Green: TaloonBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Green_co.paa",
			"DZ\characters\backpacks\data\Taloon_Green_co.paa",
			"DZ\characters\backpacks\data\Taloon_Green_co.paa"
		};
	};
	class TaloonBag_Orange: TaloonBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Orange_co.paa",
			"DZ\characters\backpacks\data\Taloon_Orange_co.paa",
			"DZ\characters\backpacks\data\Taloon_Orange_co.paa"
		};
	};
	class TaloonBag_Violet: TaloonBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Violet_co.paa",
			"DZ\characters\backpacks\data\Taloon_Violet_co.paa",
			"DZ\characters\backpacks\data\Taloon_Violet_co.paa"
		};
	};
	class TortillaBag: Clothing
	{
		scope=2;
		displayName="$STR_cfgVehicles_TortillaBag0";
		descriptionShort="$STR_cfgVehicles_TortillaBag1";
		model="\dz\characters\backpacks\tortilla_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={5,6};
		itemsCargoSize[]={7,8};
		weight=2100;
		varWetMax=0.79000002;
		heatIsolation=0.80000001;
		visibilityModifier=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\tortilla_m.p3d";
			female="\DZ\characters\backpacks\tortilla_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=180;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\tortila.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\tortila.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\tortila_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\tortila_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\tortila_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class TortillaBag_Winter: TortillaBag
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\tortila_winter_co.paa",
			"DZ\characters\backpacks\data\tortila_winter_co.paa",
			"DZ\characters\backpacks\data\tortila_winter_co.paa"
		};
	};
	class CourierBag: Clothing
	{
		scope=2;
		displayName="$STR_cfgVehicles_CourierBag0";
		descriptionShort="$STR_cfgVehicles_CourierBag1";
		model="\dz\characters\backpacks\ImpCourierBag_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,4};
		itemsCargoSize[]={5,6};
		weight=900;
		varWetMax=1;
		heatIsolation=0.30000001;
		visibilityModifier=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Small";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ImpCourierBag_co.paa",
			"\dz\characters\backpacks\data\ImpCourierBag_co.paa",
			"\dz\characters\backpacks\data\ImpCourierBag_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\ImpCourierBag_m.p3d";
			female="\DZ\characters\backpacks\ImpCourierBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FurCourierBag: Clothing
	{
		scope=2;
		displayName="$STR_cfgVehicles_FurCourierBag0";
		descriptionShort="$STR_cfgVehicles_FurCourierBag1";
		model="\dz\characters\backpacks\ImpCourierBagFur_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,4};
		itemsCargoSize[]={5,6};
		weight=1200;
		varWetMax=1;
		heatIsolation=0.30000001;
		visibilityModifier=0.80000001;
		repairableWithKits[]={3};
		repairCosts[]={25};
		canBeDigged=1;
		soundAttType="Small";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ImpCourierBag_fur_co.paa",
			"\dz\characters\backpacks\data\ImpCourierBag_fur_co.paa",
			"\dz\characters\backpacks\data\ImpCourierBag_fur_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\ImpCourierBagFur_m.p3d";
			female="\DZ\characters\backpacks\ImpCourierBagFur_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag_fur.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag_fur.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag_fur_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag_fur_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\ImpCourierBag_fur_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class ImprovisedBag: Clothing
	{
		scope=2;
		displayName="$STR_cfgVehicles_ImprovisedBag0";
		descriptionShort="$STR_cfgVehicles_ImprovisedBag1";
		model="\dz\characters\backpacks\bp_Improvised_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,5};
		itemsCargoSize[]={7,5};
		weight=2400;
		varWetMax=1;
		heatIsolation=0.40000001;
		visibilityModifier=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Small";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\bp_improvised_co.paa",
			"\dz\characters\backpacks\data\bp_improvised_co.paa",
			"\dz\characters\backpacks\data\bp_improvised_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\bp_Improvised_m.p3d";
			female="\DZ\characters\backpacks\bp_Improvised_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\bp_improvised.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\bp_improvised.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\bp_improvised_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\bp_improvised_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\bp_improvised_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FurImprovisedBag: Clothing
	{
		scope=2;
		displayName="$STR_cfgVehicles_FurImprovisedBag0";
		descriptionShort="$STR_cfgVehicles_FurImprovisedBag1";
		model="\dz\characters\backpacks\bp_Improvised_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,5};
		itemsCargoSize[]={7,5};
		weight=3300;
		varWetMax=1;
		heatIsolation=0.40000001;
		visibilityModifier=0.75;
		repairableWithKits[]={3};
		repairCosts[]={25};
		canBeDigged=1;
		soundAttType="Small";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\bp_improvised_fur_co.paa",
			"\dz\characters\backpacks\data\bp_improvised_fur_co.paa",
			"\dz\characters\backpacks\data\bp_improvised_fur_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\bp_improvised_fur.rvmat",
			"dz\characters\backpacks\data\bp_improvised_fur.rvmat",
			"dz\characters\backpacks\data\bp_improvised_fur.rvmat"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\bp_Improvised_m.p3d";
			female="\DZ\characters\backpacks\bp_Improvised_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=140;
					transferToAttachmentsCoef=0.5;
					RefTexsMats[]=
					{
						"dz\characters\backpacks\data\bp_improvised.rvmat"
					};
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"dz\Characters\backpacks\data\bp_improvised_fur.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\Characters\backpacks\data\bp_improvised_fur.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\Characters\backpacks\data\bp_improvised_fur_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\Characters\backpacks\data\bp_improvised_fur_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\Characters\backpacks\data\bp_improvised_fur_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class DryBag_ColorBase: Clothing
	{
		displayName="$STR_cfgVehicles_DryBag_ColorBase0";
		descriptionShort="$STR_cfgVehicles_DryBag_ColorBase1";
		model="\dz\characters\backpacks\drybag_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={5,6};
		itemsCargoSize[]={6,7};
		weight=600;
		varWetMax=0.249;
		heatIsolation=0.5;
		repairableWithKits[]={5,6};
		repairCosts[]={30,25};
		canBeDigged=1;
		soundAttType="Outdoor";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\drybag_co.paa",
			"\dz\characters\backpacks\data\drybag_co.paa",
			"\dz\characters\backpacks\data\drybag_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\drybag_m.p3d";
			female="\DZ\characters\backpacks\drybag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=140;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\dryBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\dryBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\dryBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\dryBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\dryBag_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class DryBag_Orange: DryBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_Orange_co.paa",
			"DZ\characters\backpacks\data\DryBag_Orange_co.paa",
			"DZ\characters\backpacks\data\DryBag_Orange_co.paa"
		};
	};
	class DryBag_Yellow: DryBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_Yellow_co.paa",
			"DZ\characters\backpacks\data\DryBag_Yellow_co.paa",
			"DZ\characters\backpacks\data\DryBag_Yellow_co.paa"
		};
	};
	class DryBag_Blue: DryBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_Blue_co.paa",
			"DZ\characters\backpacks\data\DryBag_Blue_co.paa",
			"DZ\characters\backpacks\data\DryBag_Blue_co.paa"
		};
	};
	class DryBag_Green: DryBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_Green_co.paa",
			"DZ\characters\backpacks\data\DryBag_Green_co.paa",
			"DZ\characters\backpacks\data\DryBag_Green_co.paa"
		};
	};
	class DryBag_Black: DryBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_black_co.paa",
			"DZ\characters\backpacks\data\DryBag_black_co.paa",
			"DZ\characters\backpacks\data\DryBag_black_co.paa"
		};
	};
	class DryBag_Red: DryBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\DryBag_Red_co.paa",
			"DZ\characters\backpacks\data\DryBag_Red_co.paa",
			"DZ\characters\backpacks\data\DryBag_Red_co.paa"
		};
	};
	class HuntingBag: Clothing
	{
		scope=2;
		displayName="$STR_cfgVehicles_HuntingBag0";
		descriptionShort="$STR_cfgVehicles_HuntingBag1";
		model="\dz\characters\backpacks\hunting_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={5,6};
		itemsCargoSize[]={7,6};
		weight=1400;
		varWetMax=0.49000001;
		heatIsolation=0.69999999;
		visibilityModifier=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\hunting_co.paa",
			"\dz\characters\backpacks\data\hunting_co.paa",
			"\dz\characters\backpacks\data\hunting_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\hunting_m.p3d";
			female="\DZ\characters\backpacks\hunting_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\hunting.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\hunting.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\hunting_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\hunting_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\hunting_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class HuntingBag_Hannah: HuntingBag
	{
		scope=2;
		descriptionShort="$STR_cfgVehicles_HuntingBagH1";
		model="\dz\characters\backpacks\hunting_hannah_g.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\hunting_hannah.rvmat",
			"dz\characters\backpacks\data\hunting_hannah.rvmat",
			"dz\characters\backpacks\data\hunting_hannah.rvmat"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\hunting_hannah_m.p3d";
			female="\DZ\characters\backpacks\hunting_hannah_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\backpacks\data\hunting_hannah.rvmat",
								"dz\characters\backpacks\data\hunting_hannah_details.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\Data\hunting_hannah_damage.rvmat",
								"dz\characters\backpacks\data\hunting_hannah_details_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\Data\hunting_hannah_destruct.rvmat",
								"dz\characters\backpacks\data\hunting_hannah_details_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class MountainBag_ColorBase: Clothing
	{
		displayName="$STR_cfgVehicles_MountainBag_ColorBase0";
		descriptionShort="$STR_cfgVehicles_MountainBag_ColorBase1";
		model="\dz\characters\backpacks\mountain_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={5,7};
		itemsCargoSize[]={7,8};
		weight=2300;
		varWetMax=0.79000002;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\mountain_blue_co.paa",
			"\dz\characters\backpacks\data\mountain_blue_co.paa",
			"\dz\characters\backpacks\data\mountain_blue_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\mountain_m.p3d";
			female="\DZ\characters\backpacks\mountain_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\mountain.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\mountain.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\mountain_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\mountain_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\mountain_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class MountainBag_Red: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Red_co.paa",
			"DZ\characters\backpacks\data\Mountain_Red_co.paa",
			"DZ\characters\backpacks\data\Mountain_Red_co.paa"
		};
	};
	class MountainBag_Blue: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Blue_co.paa",
			"DZ\characters\backpacks\data\Mountain_Blue_co.paa",
			"DZ\characters\backpacks\data\Mountain_Blue_co.paa"
		};
	};
	class MountainBag_Orange: MountainBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Orange_co.paa",
			"DZ\characters\backpacks\data\Mountain_Orange_co.paa",
			"DZ\characters\backpacks\data\Mountain_Orange_co.paa"
		};
	};
	class MountainBag_Green: MountainBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Green_co.paa",
			"DZ\characters\backpacks\data\Mountain_Green_co.paa",
			"DZ\characters\backpacks\data\Mountain_Green_co.paa"
		};
	};
	class SmershBag: Clothing
	{
		scope=2;
		displayName="$STR_cfgVehicles_SmershBag0";
		descriptionShort="$STR_cfgVehicles_SmershBag1";
		model="\dz\characters\backpacks\SmershBag_alternate_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back",
			"VestBackpack"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,4};
		itemsCargoSize[]={6,4};
		weight=600;
		varWetMax=0.79000002;
		heatIsolation=0.2;
		visibilityModifier=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		randomQuantity=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\vests\data\smersh_co.paa",
			"\dz\characters\vests\data\smersh_co.paa",
			"\dz\characters\vests\data\smersh_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\SmershBag_m.p3d";
			female="\DZ\characters\backpacks\SmershBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\Smersh.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\Smersh.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\Smersh_damage.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\Smersh_damage.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\Smersh_destruct.rvmat",
								"DZ\Characters\backpacks\data\Smersh_g_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class ChildBag_ColorBase: Clothing
	{
		displayName="$STR_cfgVehicles_ChildBag_ColorBase0";
		descriptionShort="$STR_cfgVehicles_ChildBag_ColorBase1";
		model="\dz\characters\backpacks\childs_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,4};
		itemsCargoSize[]={6,4};
		weight=1850;
		varWetMax=0.49000001;
		heatIsolation=0.1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\childs_red_co.paa",
			"\dz\characters\backpacks\data\childs_red_co.paa",
			"\dz\characters\backpacks\data\childs_red_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\childs_m.p3d";
			female="\DZ\characters\backpacks\childs_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\childs.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\childs.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\childs_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\childs_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\childs_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class ChildBag_Green: ChildBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\childs_green_co.paa",
			"DZ\characters\backpacks\data\childs_green_co.paa",
			"DZ\characters\backpacks\data\childs_green_co.paa"
		};
	};
	class ChildBag_Red: ChildBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\childs_Red_co.paa",
			"DZ\characters\backpacks\data\childs_Red_co.paa",
			"DZ\characters\backpacks\data\childs_Red_co.paa"
		};
	};
	class ChildBag_Blue: ChildBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\childs_Blue_co.paa",
			"DZ\characters\backpacks\data\childs_Blue_co.paa",
			"DZ\characters\backpacks\data\childs_Blue_co.paa"
		};
	};
	class GhillieBushrag_ColorBase: Clothing
	{
		displayName="$STR_cfgvehicles_GhillieBushrag_colorbase0";
		descriptionShort="$STR_cfgVehicles_GhillieBushrag_ColorBase1";
		model="\dz\characters\backpacks\GhillieBushrag_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,3};
		weight=700;
		varWetMax=1;
		heatIsolation=0.60000002;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Ghillie";
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\GhillieBushrag_m.p3d";
			female="\DZ\characters\backpacks\GhillieBushrag_m.p3d";
		};
	};
	class GhillieBushrag_Tan: GhillieBushrag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_tan_co.paa",
			"\dz\characters\backpacks\data\ghillie_tan_co.paa",
			"\dz\characters\backpacks\data\ghillie_tan_co.paa"
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
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class GhillieBushrag_Woodland: GhillieBushrag_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_green_co.paa",
			"\dz\characters\backpacks\data\ghillie_green_co.paa",
			"\dz\characters\backpacks\data\ghillie_green_co.paa"
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
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class GhillieBushrag_Mossy: GhillieBushrag_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_mossy_co.paa",
			"\dz\characters\backpacks\data\ghillie_mossy_co.paa",
			"\dz\characters\backpacks\data\ghillie_mossy_co.paa"
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
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class GhillieBushrag_Winter: GhillieBushrag_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_winter_co.paa",
			"\dz\characters\backpacks\data\ghillie_winter_co.paa",
			"\dz\characters\backpacks\data\ghillie_winter_co.paa"
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
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class GhillieTop_ColorBase: Clothing
	{
		displayName="$STR_cfgVehicles_GhillieTop_ColorBase0";
		descriptionShort="$STR_cfgVehicles_GhillieTop_ColorBase1";
		model="\dz\characters\backpacks\GhillieBushrag_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		lootCategory="Crafted";
		rotationFlags=16;
		itemSize[]={4,4};
		weight=800;
		varWetMax=1;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Ghillie";
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\GhillieTop_m.p3d";
			female="\DZ\characters\backpacks\GhillieTop_m.p3d";
		};
	};
	class GhillieTop_Tan: GhillieTop_ColorBase
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_tan_co.paa",
			"\dz\characters\backpacks\data\ghillie_tan_co.paa",
			"\dz\characters\backpacks\data\ghillie_tan_co.paa"
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
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class GhillieTop_Woodland: GhillieTop_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_green_co.paa",
			"\dz\characters\backpacks\data\ghillie_green_co.paa",
			"\dz\characters\backpacks\data\ghillie_green_co.paa"
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
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class GhillieTop_Mossy: GhillieTop_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_mossy_co.paa",
			"\dz\characters\backpacks\data\ghillie_mossy_co.paa",
			"\dz\characters\backpacks\data\ghillie_mossy_co.paa"
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
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class GhillieTop_Winter: GhillieTop_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_winter_co.paa",
			"\dz\characters\backpacks\data\ghillie_winter_co.paa",
			"\dz\characters\backpacks\data\ghillie_winter_co.paa"
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
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class GhillieSuit_ColorBase: Clothing
	{
		displayName="$STR_cfgVehicles_GhillieSuit_ColorBase0";
		descriptionShort="$STR_cfgVehicles_GhillieSuit_ColorBase1";
		model="\dz\characters\backpacks\GhillieBushrag_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		lootCategory="Crafted";
		rotationFlags=16;
		itemSize[]={6,5};
		weight=3200;
		varWetMax=1;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Ghillie";
		hiddenSelections[]=
		{
			"camoGround",
			"camo",
			"camo1"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\GhillieSuit_m.p3d";
			female="\DZ\characters\backpacks\GhillieSuit_m.p3d";
		};
	};
	class GhillieSuit_Tan: GhillieSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_tan_co.paa",
			"\dz\characters\backpacks\data\ghillie_tan_co.paa",
			"\dz\characters\backpacks\data\ghillie_tan_co.paa"
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
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_tan_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class GhillieSuit_Woodland: GhillieSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_green_co.paa",
			"\dz\characters\backpacks\data\ghillie_green_co.paa",
			"\dz\characters\backpacks\data\ghillie_green_co.paa"
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
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_green_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class GhillieSuit_Mossy: GhillieSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_mossy_co.paa",
			"\dz\characters\backpacks\data\ghillie_mossy_co.paa",
			"\dz\characters\backpacks\data\ghillie_mossy_co.paa"
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
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_mossy_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class GhillieSuit_Winter: GhillieSuit_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ghillie_winter_co.paa",
			"\dz\characters\backpacks\data\ghillie_winter_co.paa",
			"\dz\characters\backpacks\data\ghillie_winter_co.paa"
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
								"DZ\characters\backpacks\data\ghillie_green_co.paa"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_co.paa"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_damage_co.paa"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_damage_co.paa"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\data\ghillie_winter_destruct_co.paa"
							}
						}
					};
				};
			};
		};
	};
	class LeatherSack_ColorBase: Clothing
	{
		displayName="$STR_cfgVehicles_LeatherSack_ColorBase0";
		descriptionShort="$STR_cfgVehicles_LeatherSack_ColorBase1";
		model="\dz\characters\backpacks\Bag_LeatherSack_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		lootCategory="Crafted";
		rotationFlags=2;
		itemSize[]={5,6};
		itemsCargoSize[]={6,7};
		weight=1300;
		varWetMax=0.249;
		heatIsolation=0.80000001;
		repairableWithKits[]={3};
		repairCosts[]={25};
		canBeDigged=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\Bag_LeatherSack_m.p3d";
			female="\DZ\characters\backpacks\Bag_LeatherSack_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Leather_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Leather_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class LeatherSack_Natural: LeatherSack_ColorBase
	{
		scope=2;
		color="Natural";
		visibilityModifier=0.75;
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\Bag_LeatherSack_natural.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_natural.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_natural.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\backpacks\data\Bag_LeatherSack_natural.rvmat",
								"dz\characters\backpacks\data\Bag_LeatherSack_g_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\Data\Bag_LeatherSack_natural_damage.rvmat",
								"dz\characters\backpacks\data\Bag_LeatherSack_g_natural_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\Data\Bag_LeatherSack_natural_destruct.rvmat",
								"dz\characters\backpacks\data\Bag_LeatherSack_g_natural_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class LeatherSack_Black: LeatherSack_ColorBase
	{
		scope=2;
		color="Black";
		visibilityModifier=0.80000001;
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\Bag_LeatherSack_Black.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_Black.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_Black.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\backpacks\data\Bag_LeatherSack_natural.rvmat",
								"dz\characters\backpacks\data\Bag_LeatherSack_g_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\Data\Bag_LeatherSack_Black_damage.rvmat",
								"dz\characters\backpacks\data\Bag_LeatherSack_g_Black_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\Data\Bag_LeatherSack_Black_destruct.rvmat",
								"dz\characters\backpacks\data\Bag_LeatherSack_g_Black_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class LeatherSack_Beige: LeatherSack_ColorBase
	{
		scope=2;
		color="Beige";
		visibilityModifier=0.85000002;
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\bag_leatherSack_beige.rvmat",
			"dz\characters\backpacks\data\bag_leatherSack_beige.rvmat",
			"dz\characters\backpacks\data\bag_leatherSack_beige.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\backpacks\data\Bag_LeatherSack_natural.rvmat",
								"dz\characters\backpacks\data\Bag_LeatherSack_g_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\Data\bag_leatherSack_beige_damage.rvmat",
								"dz\characters\backpacks\data\bag_leatherSack_g_beige_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\Data\bag_leatherSack_beige_destruct.rvmat",
								"dz\characters\backpacks\data\bag_leatherSack_g_beige_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class LeatherSack_Brown: LeatherSack_ColorBase
	{
		scope=2;
		color="Brown";
		visibilityModifier=0.80000001;
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\Bag_LeatherSack_Brown.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_Brown.rvmat",
			"dz\characters\backpacks\data\Bag_LeatherSack_Brown.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\backpacks\data\Bag_LeatherSack_natural.rvmat",
								"dz\characters\backpacks\data\Bag_LeatherSack_g_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\backpacks\Data\Bag_LeatherSack_Brown_damage.rvmat",
								"dz\characters\backpacks\data\Bag_LeatherSack_g_Brown_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\backpacks\Data\Bag_LeatherSack_Brown_destruct.rvmat",
								"dz\characters\backpacks\data\Bag_LeatherSack_g_Brown_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class AssaultBag_ColorBase: Clothing
	{
		displayName="$STR_cfgVehicles_AssaultBag_ColorBase0";
		descriptionShort="$STR_cfgVehicles_AssaultBag_ColorBase1";
		model="\dz\characters\backpacks\boulder_m53_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,5};
		itemsCargoSize[]={6,6};
		weight=900;
		varWetMax=0.79000002;
		heatIsolation=0.60000002;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\boulder_m53_m.p3d";
			female="\DZ\characters\backpacks\boulder_m53_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=170;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\boulder_m53_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class AssaultBag_Ttsko: AssaultBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\boulder_m53_ttsko_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_ttsko_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_ttsko_co.paa"
		};
	};
	class AssaultBag_Black: AssaultBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\boulder_m53_black_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_black_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_black_co.paa"
		};
	};
	class AssaultBag_Green: AssaultBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\boulder_m53_green_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_green_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_green_co.paa"
		};
	};
	class AssaultBag_Winter: AssaultBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\boulder_m53_winter_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_winter_co.paa",
			"\dz\characters\backpacks\data\boulder_m53_winter_co.paa"
		};
	};
	class Attack2Bag_ColorBase: Clothing
	{
		displayName="$STR_cfgVehicles_Attack2Backpack_ColorBase0";
		descriptionShort="$STR_cfgVehicles_Attack2Backpack_ColorBase1";
		model="\dz\characters\backpacks\Attack2Backpack_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=2;
		itemSize[]={6,7};
		itemsCargoSize[]={8,8};
		weight=2500;
		varWetMax=0.79000002;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\Attack2Backpack_m.p3d";
			female="\DZ\characters\backpacks\Attack2Backpack_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\Attack2Backpack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\Attack2Backpack.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\Attack2Backpack_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\Attack2Backpack_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\Attack2Backpack_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Attack2Bag_Ttsko: Attack2Bag_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\Attack2Backpack_ttsko_co.paa",
			"\dz\characters\backpacks\data\Attack2Backpack_ttsko_co.paa",
			"\dz\characters\backpacks\data\Attack2Backpack_ttsko_co.paa"
		};
	};
	class Attack2Bag_Black: Attack2Bag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\Attack2Backpack_black_co.paa",
			"\dz\characters\backpacks\data\Attack2Backpack_black_co.paa",
			"\dz\characters\backpacks\data\Attack2Backpack_black_co.paa"
		};
	};
	class Attack2Bag_Green: Attack2Bag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\Attack2Backpack_green_co.paa",
			"\dz\characters\backpacks\data\Attack2Backpack_green_co.paa",
			"\dz\characters\backpacks\data\Attack2Backpack_green_co.paa"
		};
	};
	class Attack2Bag_Yeger: Attack2Bag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\Attack2Backpack_yeger_co.paa",
			"\dz\characters\backpacks\data\Attack2Backpack_yeger_co.paa",
			"\dz\characters\backpacks\data\Attack2Backpack_yeger_co.paa"
		};
	};
	class CoyoteBag_ColorBase: Clothing
	{
		displayName="$STR_cfgVehicles_CoyoteBag_ColorBase0";
		descriptionShort="$STR_cfgVehicles_CoyoteBag_ColorBase1";
		model="\dz\characters\backpacks\CoyotesBP_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={5,6};
		itemsCargoSize[]={8,7};
		weight=2600;
		varWetMax=0.79000002;
		heatIsolation=0.89999998;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\CoyotesBP_m.p3d";
			female="\DZ\characters\backpacks\CoyotesBP_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=190;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\CoyotesBP.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\CoyotesBP.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\CoyotesBP_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\CoyotesBP_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\CoyotesBP_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CoyoteBag_Brown: CoyoteBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\CoyoteBP_co.paa",
			"\dz\characters\backpacks\data\CoyoteBP_co.paa",
			"\dz\characters\backpacks\data\CoyoteBP_co.paa"
		};
	};
	class CoyoteBag_Green: CoyoteBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\CoyoteBP_green_co.paa",
			"\dz\characters\backpacks\data\CoyoteBP_green_co.paa",
			"\dz\characters\backpacks\data\CoyoteBP_green_co.paa"
		};
	};
	class CoyoteBag_Winter: CoyoteBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\CoyoteBP_winter_co.paa",
			"\dz\characters\backpacks\data\CoyoteBP_winter_co.paa",
			"\dz\characters\backpacks\data\CoyoteBP_winter_co.paa"
		};
	};
	class AliceBag_ColorBase: Clothing
	{
		displayName="$STR_cfgVehicles_AliceBag_ColorBase0";
		descriptionShort="$STR_cfgVehicles_AliceBag_ColorBase1";
		model="\dz\characters\backpacks\alicebackpack_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={6,7};
		itemsCargoSize[]={8,8};
		weight=1600;
		varWetMax=0.79000002;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		randomQuantity=4;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\alicebackpack_m.p3d";
			female="\DZ\characters\backpacks\alicebackpack_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					transferToAttachmentsCoef=0.5;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\Alice_backpack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\Alice_backpack.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\Alice_backpack_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\Alice_backpack_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\Alice_backpack_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class AliceBag_Green: AliceBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\alicebackpack_co.paa",
			"\dz\characters\backpacks\data\alicebackpack_co.paa",
			"\dz\characters\backpacks\data\alicebackpack_co.paa"
		};
	};
	class AliceBag_Black: AliceBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\alicebackpack_black_co.paa",
			"\dz\characters\backpacks\data\alicebackpack_black_co.paa",
			"\dz\characters\backpacks\data\alicebackpack_black_co.paa"
		};
	};
	class AliceBag_Camo: AliceBag_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\alicebackpack_camo_co.paa",
			"\dz\characters\backpacks\data\alicebackpack_camo_co.paa",
			"\dz\characters\backpacks\data\alicebackpack_camo_co.paa"
		};
	};
	class AliceBag_NearBubble: AliceBag_Green
	{
		scope=2;
		descriptionShort="A container used for testing network bubble";
		forceFarBubble=0;
	};
	class AliceBag_FarBubble: AliceBag_Camo
	{
		scope=2;
		descriptionShort="A container used for testing network bubble";
		forceFarBubble=1;
	};
	class LargeTentBackPack: Clothing
	{
		scope=2;
		displayName="$STR_cfgvehicles_largetent_backpack0";
		descriptionShort="$STR_cfgvehicles_largetent_backpack1";
		model="DZ\gear\camping\proxies\LargeTentPackProxy.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		weight=1300;
		itemSize[]={4,5};
		varWetMax=0.79000002;
		heatIsolation=0.5;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		visibilityModifier=0.94999999;
		class ClothingTypes
		{
			male="\DZ\gear\camping\large_tent_backpack.p3d";
			female="\DZ\gear\camping\large_tent_backpack.p3d";
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
								"DZ\gear\camping\Data\large_tent.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\camping\Data\large_tent.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\camping\Data\large_tent_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\camping\Data\large_tent_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\camping\Data\large_tent_destruct.rvmat"
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
				class movement_walk
				{
					soundSet="mediumtent_movement_walk_SoundSet";
					id=1;
				};
				class movement_run
				{
					soundSet="mediumtent_movement_run_SoundSet";
					id=3;
				};
				class movement_sprint
				{
					soundSet="mediumtent_movement_sprint_SoundSet";
					id=5;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpTentLight_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpTent_SoundSet";
					id=797;
				};
				class mediumtent_drop
				{
					soundset="mediumtent_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SlingBag_ColorBase: Clothing
	{
		displayName="$STR_cfgvehicles_Slingbag0";
		descriptionShort="$STR_cfgvehicles_Slingbag1";
		model="\dz\characters\backpacks\SlingBag_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=2;
		itemSize[]={4,4};
		itemsCargoSize[]={4,5};
		weight=1000;
		varWetMax=0.79000002;
		heatIsolation=0.2;
		repairableWithKits[]={5,3};
		repairCosts[]={20,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\SlingBag_m.p3d";
			female="\DZ\characters\backpacks\SlingBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\SlingBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\SlingBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\SlingBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\SlingBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\SlingBag_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SlingBag_Brown: SlingBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\SlingBag_CO.paa",
			"\dz\characters\backpacks\data\SlingBag_CO.paa",
			"\dz\characters\backpacks\data\SlingBag_CO.paa"
		};
	};
	class SlingBag_Gray: SlingBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\Slingbag_gray_CO.paa",
			"\dz\characters\backpacks\data\Slingbag_gray_CO.paa",
			"\dz\characters\backpacks\data\Slingbag_gray_CO.paa"
		};
	};
	class SlingBag_Black: SlingBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\backpacks\data\SlingBag_black_CO.paa",
			"\DZ\characters\backpacks\data\SlingBag_black_CO.paa",
			"\DZ\characters\backpacks\data\SlingBag_black_CO.paa"
		};
	};
	class ArmyPouch_ColorBase: Clothing
	{
		displayName="$STR_cfgvehicles_ArmyPouch_ColorBase0";
		descriptionShort="$STR_cfgvehicles_ArmyPouch_ColorBase1";
		model="\dz\characters\backpacks\ArmyPouch_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=2;
		itemSize[]={4,5};
		itemsCargoSize[]={5,5};
		weight=700;
		varWetMax=0.79000002;
		heatIsolation=0.1;
		repairableWithKits[]={5,2};
		repairCosts[]={20,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\ArmyPouch_m.p3d";
			female="\DZ\characters\backpacks\ArmyPouch_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\ArmyPouch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\ArmyPouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\ArmyPouch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\ArmyPouch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\ArmyPouch_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class ArmyPouch_Beige: ArmyPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ArmyPouch_beige_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_beige_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_beige_CO.paa"
		};
	};
	class ArmyPouch_Black: ArmyPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ArmyPouch_black_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_black_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_black_CO.paa"
		};
	};
	class ArmyPouch_Camo: ArmyPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ArmyPouch_camo_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_camo_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_camo_CO.paa"
		};
	};
	class ArmyPouch_Green: ArmyPouch_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\ArmyPouch_green_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_green_CO.paa",
			"\dz\characters\backpacks\data\ArmyPouch_green_CO.paa"
		};
	};
	class DuffelBagSmall_ColorBase: Clothing
	{
		displayName="$STR_cfgvehicles_DuffelBagSmall_ColorBase0";
		descriptionShort="$STR_cfgvehicles_DuffelBagSmall_ColorBase1";
		model="\dz\characters\backpacks\DuffelBagSmall_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=2;
		itemSize[]={5,4};
		itemsCargoSize[]={5,5};
		weight=1000;
		varWetMax=0.79000002;
		heatIsolation=0.2;
		repairableWithKits[]={5,3};
		repairCosts[]={20,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\DuffelBagSmall_m.p3d";
			female="\DZ\characters\backpacks\DuffelBagSmall_f.p3d";
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
								"DZ\Characters\backpacks\data\DuffelBagSmall.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\DuffelBagSmall.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\DuffelBagSmall_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\DuffelBagSmall_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\DuffelBagSmall_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class DuffelBagSmall_Green: DuffelBagSmall_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\DuffelBagSmall_green_CA.paa",
			"\dz\characters\backpacks\data\DuffelBagSmall_green_CA.paa",
			"\dz\characters\backpacks\data\DuffelBagSmall_green_CA.paa"
		};
	};
	class DuffelBagSmall_Camo: DuffelBagSmall_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\DuffelBagSmall_camo_CA.paa",
			"\dz\characters\backpacks\data\DuffelBagSmall_camo_CA.paa",
			"\dz\characters\backpacks\data\DuffelBagSmall_camo_CA.paa"
		};
	};
	class DuffelBagSmall_Medical: DuffelBagSmall_ColorBase
	{
		scope=2;
		descriptionShort="$STR_cfgvehicles_DuffelBagSmall_Medical1";
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\DuffelBagSmall_medical_CA.paa",
			"\dz\characters\backpacks\data\DuffelBagSmall_medical_CA.paa",
			"\dz\characters\backpacks\data\DuffelBagSmall_medical_CA.paa"
		};
	};
	class CanvasBag_ColorBase: Clothing
	{
		displayName="$STR_cfgvehicles_CanvasBag_ColorBase0";
		descriptionShort="$STR_cfgvehicles_CanvasBag_ColorBase1";
		model="\dz\characters\backpacks\CanvasBag_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Backpack_1"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=2;
		itemSize[]={5,4};
		itemsCargoSize[]={5,5};
		weight=1000;
		varWetMax=0.79000002;
		heatIsolation=0.2;
		repairableWithKits[]={5,2};
		repairCosts[]={20,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\CanvasBag_m.p3d";
			female="\DZ\characters\backpacks\CanvasBag_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class CanvasBag_Olive: CanvasBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\CanvasBag_olive_CO.paa",
			"\dz\characters\backpacks\data\CanvasBag_olive_CO.paa",
			"\dz\characters\backpacks\data\CanvasBag_olive_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=140;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\CanvasBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\CanvasBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\CanvasBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\CanvasBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\CanvasBag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class CanvasBag_Medical: CanvasBag_ColorBase
	{
		descriptionShort="$STR_cfgvehicles_CanvasBag_Medical1";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\CanvasBag_medical_CO.paa",
			"\dz\characters\backpacks\data\CanvasBag_medical_CO.paa",
			"\dz\characters\backpacks\data\CanvasBag_medical_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\backpacks\data\CanvasBag_medical.rvmat",
			"dz\characters\backpacks\data\CanvasBag_medical.rvmat",
			"dz\characters\backpacks\data\CanvasBag_medical.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\CanvasBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\CanvasBag_medical.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\CanvasBag_medical_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\CanvasBag_medical_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\CanvasBag_medical_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class DrysackBag_ColorBase: Clothing
	{
		displayName="$STR_cfgvehicles_DrysackBag_ColorBase0";
		descriptionShort="$STR_cfgvehicles_DrysackBag_ColorBase1";
		model="\dz\characters\backpacks\drysackbag_g.p3d";
		debug_ItemCategory=9;
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"WalkieTalkie"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=17;
		itemSize[]={4,5};
		itemsCargoSize[]={4,5};
		weight=300;
		canBeDigged=1;
		varWetMax=0.249;
		heatIsolation=0.30000001;
		repairableWithKits[]={5,6};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\backpacks\drysackbag_m.p3d";
			female="\DZ\characters\backpacks\drysackbag_f.p3d";
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
								"DZ\gear\containers\data\WaterproofBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\containers\data\WaterproofBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\containers\data\WaterproofBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\containers\data\WaterproofBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\containers\data\WaterproofBag_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class DrysackBag_Green: DrysackBag_ColorBase
	{
		scope=2;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\containers\data\WaterproofBag_green_co.paa",
			"\dz\gear\containers\data\WaterproofBag_green_co.paa",
			"\dz\gear\containers\data\WaterproofBag_green_co.paa"
		};
	};
	class DrysackBag_Orange: DrysackBag_ColorBase
	{
		scope=2;
		color="Orange";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\containers\data\WaterproofBag_orange_co.paa",
			"\dz\gear\containers\data\WaterproofBag_orange_co.paa",
			"\dz\gear\containers\data\WaterproofBag_orange_co.paa"
		};
	};
	class DrysackBag_Yellow: DrysackBag_ColorBase
	{
		scope=2;
		color="Yellow";
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\containers\data\WaterproofBag_yellow_co.paa",
			"\dz\gear\containers\data\WaterproofBag_yellow_co.paa",
			"\dz\gear\containers\data\WaterproofBag_yellow_co.paa"
		};
	};
};

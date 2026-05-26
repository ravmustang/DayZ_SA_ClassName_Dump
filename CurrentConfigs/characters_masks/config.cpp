class CfgPatches
{
	class DZ_Characters_Masks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class GasMask: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_GasMask0";
		descriptionShort="$STR_CfgVehicles_GasMask1";
		model="\DZ\characters\masks\GasMask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		repairableWithKits[]={8,6};
		repairCosts[]={30,25};
		rotationFlags=2;
		weight=730;
		weightPerQuantityUnit=0.2;
		itemSize[]={3,4};
		varWetMax=0.49000001;
		heatIsolation=0.60000002;
		visibilityModifier=0.89999998;
		noHelmet=1;
		noEyewear=1;
		varQuantityInit=225;
		varQuantityMin=0;
		varQuantityMax=225;
		quantityBar=1;
		stackedUnit="ml";
		varQuantityDestroyOnMin=0;
		headSelectionsToHide[]=
		{
			"Clipping_Gasmask"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\masks\data\GasMask_co.paa",
			"\dz\characters\masks\data\GasMask_co.paa",
			"\dz\characters\masks\data\GasMask_co.paa"
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
								"DZ\characters\masks\data\GasMask.rvmat",
								"DZ\characters\masks\data\GasMask_Glass.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\GasMask.rvmat",
								"DZ\characters\masks\data\GasMask_Glass.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\GasMask_damage.rvmat",
								"DZ\characters\masks\data\GasMask_Glass_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\GasMask_damage.rvmat",
								"DZ\characters\masks\data\GasMask_Glass_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\GasMask_destruct.rvmat",
								"DZ\characters\masks\data\GasMask_Glass_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\GasMask_m.p3d";
			female="\DZ\characters\masks\GasMask_f.p3d";
		};
		class Protection
		{
			biological=1;
			chemical=1;
			dust_particle_breath=1;
			dust_particle_eyes=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
		soundImpactType="plastic";
		soundVoiceType="gasmask";
		soundVoicePriority=5;
	};
	class NioshFaceMask: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_NioshFaceMask0";
		descriptionShort="$STR_CfgVehicles_NioshFaceMask1";
		model="\DZ\characters\masks\NioshFaceMask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=16;
		weight=340;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.2;
		noHelmet=1;
		headSelectionsToHide[]=
		{
			"Clipping_NioshFaceMask"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\NioshFaceMask_co.paa",
			"\DZ\characters\masks\data\NioshFaceMask_co.paa",
			"\DZ\characters\masks\data\NioshFaceMask_co.paa"
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
								"DZ\characters\masks\data\NioshFaceMask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\NioshFaceMask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\NioshFaceMask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\NioshFaceMask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\NioshFaceMask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\NioshFaceMask_m.p3d";
			female="\DZ\characters\masks\NioshFaceMask_f.p3d";
		};
		class Protection
		{
			biological=0.75;
			dust_particle_breath=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="none";
		soundVoicePriority=5;
	};
	class BalaclavaMask_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_BalaclavaMask_ColorBase0";
		descriptionShort="$STR_CfgVehicles_BalaclavaMask_ColorBase1";
		model="\DZ\characters\masks\Balaclava_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=1;
		weight=130;
		itemSize[]={2,2};
		ragQuantity=1;
		varWetMax=1;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
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
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\masks\data\Balaclava.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\Balaclava.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\Balaclava_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\Balaclava_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\Balaclava_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\Balaclava_m.p3d";
			female="\DZ\characters\masks\Balaclava_f.p3d";
		};
		class Protection
		{
			biological=0.25;
			dust_particle_breath=0.44999999;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class BalaclavaMask_Black: BalaclavaMask_ColorBase
	{
		scope=2;
		color="black";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\Balaclava_black_co.paa",
			"\DZ\characters\masks\data\Balaclava_black_co.paa",
			"\DZ\characters\masks\data\Balaclava_black_co.paa"
		};
	};
	class BalaclavaMask_Blackskull: BalaclavaMask_ColorBase
	{
		scope=2;
		color="blackskull";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\Balaclava_blackskull_co.paa",
			"\DZ\characters\masks\data\Balaclava_blackskull_co.paa",
			"\DZ\characters\masks\data\Balaclava_blackskull_co.paa"
		};
	};
	class BalaclavaMask_Beige: BalaclavaMask_ColorBase
	{
		scope=2;
		color="beige";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\Balaclava_beige_co.paa",
			"\DZ\characters\masks\data\Balaclava_beige_co.paa",
			"\DZ\characters\masks\data\Balaclava_beige_co.paa"
		};
	};
	class BalaclavaMask_Blue: BalaclavaMask_ColorBase
	{
		scope=2;
		color="blue";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\Balaclava_blue_co.paa",
			"\DZ\characters\masks\data\Balaclava_blue_co.paa",
			"\DZ\characters\masks\data\Balaclava_blue_co.paa"
		};
	};
	class BalaclavaMask_Green: BalaclavaMask_ColorBase
	{
		scope=2;
		color="green";
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\Balaclava_green_co.paa",
			"\DZ\characters\masks\data\Balaclava_green_co.paa",
			"\DZ\characters\masks\data\Balaclava_green_co.paa"
		};
	};
	class BalaclavaMask_Pink: BalaclavaMask_ColorBase
	{
		scope=2;
		color="pink";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\Balaclava_pink_co.paa",
			"\DZ\characters\masks\data\Balaclava_pink_co.paa",
			"\DZ\characters\masks\data\Balaclava_pink_co.paa"
		};
	};
	class BalaclavaMask_White: BalaclavaMask_ColorBase
	{
		scope=2;
		color="white";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\Balaclava_white_co.paa",
			"\DZ\characters\masks\data\Balaclava_white_co.paa",
			"\DZ\characters\masks\data\Balaclava_white_co.paa"
		};
	};
	class BalaclavaMask_Pig: BalaclavaMask_ColorBase
	{
		scope=2;
		color="white";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\Balaclava_Schweini_co.paa",
			"\DZ\characters\masks\data\Balaclava_Schweini_co.paa",
			"\DZ\characters\masks\data\Balaclava_Schweini_co.paa"
		};
	};
	class BalaclavaMask_Chain: BalaclavaMask_ColorBase
	{
		scope=2;
		color="white";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\Balaclava_Chaiinzz_co.paa",
			"\DZ\characters\masks\data\Balaclava_Chaiinzz_co.paa",
			"\DZ\characters\masks\data\Balaclava_Chaiinzz_co.paa"
		};
	};
	class BalaclavaMask_BDU: BalaclavaMask_ColorBase
	{
		scope=2;
		color="white";
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\Balaclava_BDU_co.paa",
			"\DZ\characters\masks\data\Balaclava_BDU_co.paa",
			"\DZ\characters\masks\data\Balaclava_BDU_co.paa"
		};
	};
	class PaydayMask_ColorBase: Clothing
	{
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=2;
		headSelectionsToHide[]=
		{
			"Clipping_BoonieHat"
		};
		weight=100;
		itemSize[]={2,3};
		heatIsolation=0.1;
		noHelmet=1;
		class Protection
		{
			dust_particle_breath=0.44999999;
			dust_particle_eyes=0.40000001;
		};
	};
	class PaydayMask_Dallas: PaydayMask_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_DallasMask0";
		descriptionShort="$STR_cfgvehicles_DallasMask1";
		model="\DZ\characters\masks\DallasMask_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"Inside"
		};
		repairableWithKits[]={8};
		repairCosts[]={25};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\DallasMask_CO.paa",
			"\DZ\characters\masks\data\DallasMask_CO.paa",
			"\DZ\characters\masks\data\DallasMask_CO.paa",
			"\DZ\characters\masks\data\Mask_inside_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=60;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\masks\data\DallasMask.rvmat",
								"DZ\characters\masks\data\Mask_inside.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\DallasMask_damage.rvmat",
								"DZ\characters\masks\data\Mask_inside_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\DallasMask_destruct.rvmat",
								"DZ\characters\masks\data\Mask_inside_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\DallasMask_m.p3d";
			female="\DZ\characters\masks\DallasMask_f.p3d";
		};
	};
	class PaydayMask_Hoxton: PaydayMask_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_HoxtonMask0";
		descriptionShort="$STR_cfgvehicles_HoxtonMask1";
		model="\DZ\characters\masks\HoxtonMask_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"Inside"
		};
		repairableWithKits[]={8};
		repairCosts[]={25};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\HoxtonMask_CO.paa",
			"\DZ\characters\masks\data\HoxtonMask_CO.paa",
			"\DZ\characters\masks\data\HoxtonMask_CO.paa",
			"\DZ\characters\masks\data\Mask_inside_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=60;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\masks\data\HoxtonMask.rvmat",
								"DZ\characters\masks\data\Mask_inside.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\HoxtonMask_damage.rvmat",
								"DZ\characters\masks\data\Mask_inside_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\HoxtonMask_destruct.rvmat",
								"DZ\characters\masks\data\Mask_inside_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\HoxtonMask_m.p3d";
			female="\DZ\characters\masks\HoxtonMask_f.p3d";
		};
	};
	class PaydayMask_Wolf: PaydayMask_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_WolfMask0";
		descriptionShort="$STR_cfgvehicles_WolfMask1";
		model="\DZ\characters\masks\WolfMask_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"Inside"
		};
		repairableWithKits[]={8};
		repairCosts[]={25};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\WolfMask_CO.paa",
			"\DZ\characters\masks\data\WolfMask_CO.paa",
			"\DZ\characters\masks\data\WolfMask_CO.paa",
			"\DZ\characters\masks\data\Mask_inside_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=60;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\masks\data\WolfMask.rvmat",
								"DZ\characters\masks\data\Mask_inside.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\WolfMask_damage.rvmat",
								"DZ\characters\masks\data\Mask_inside_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\WolfMask_destruct.rvmat",
								"DZ\characters\masks\data\Mask_inside_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\WolfMask_m.p3d";
			female="\DZ\characters\masks\WolfMask_f.p3d";
		};
	};
	class PaydayMask_Chains: PaydayMask_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_ChainsMask0";
		descriptionShort="$STR_cfgvehicles_ChainsMask1";
		model="\DZ\characters\masks\ChainsMask_g.p3d";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"Inside"
		};
		repairableWithKits[]={8};
		repairCosts[]={25};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\ChainsMask_CO.paa",
			"\DZ\characters\masks\data\ChainsMask_CO.paa",
			"\DZ\characters\masks\data\ChainsMask_CO.paa",
			"\DZ\characters\masks\data\Mask_inside_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=60;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\masks\data\ChainsMask.rvmat",
								"DZ\characters\masks\data\Mask_inside.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\ChainsMask_damage.rvmat",
								"DZ\characters\masks\data\Mask_inside_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\ChainsMask_destruct.rvmat",
								"DZ\characters\masks\data\Mask_inside_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\ChainsMask_m.p3d";
			female="\DZ\characters\masks\ChainsMask_f.p3d";
		};
	};
	class GP5GasMask: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_GP5GasMask0";
		descriptionShort="$STR_CfgVehicles_GP5GasMask1";
		model="\DZ\characters\masks\GP5GasMask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		attachments[]=
		{
			"GasMaskFilter"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=1;
		itemSize[]={3,3};
		weight=1090;
		varWetMax=0.249;
		heatIsolation=0.69999999;
		repairableWithKits[]={8,6};
		repairCosts[]={30,25};
		visibilityModifier=0.94999999;
		noHelmet=1;
		noEyewear=1;
		headSelectionsToHide[]=
		{
			"Clipping_GP5GasMask"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\masks\data\GP5GasMask_white_co.paa",
			"\dz\characters\masks\data\GP5GasMask_white_co.paa",
			"\dz\characters\masks\data\GP5GasMask_white_co.paa"
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
								"DZ\characters\masks\data\GP5GasMask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\GP5GasMask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\GP5GasMask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\GP5GasMask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\GP5GasMask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\GP5GasMask_m.p3d";
			female="\DZ\characters\masks\GP5GasMask_f.p3d";
		};
		class Protection
		{
			biological=1;
			dust_particle_breath=1;
			dust_particle_eyes=1;
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="gasmask";
		soundVoicePriority=5;
	};
	class AirborneMask: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_AirborneMask0";
		descriptionShort="$STR_CfgVehicles_AirborneMask1";
		model="\DZ\characters\masks\airborne_mask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		attachments[]=
		{
			"GasMaskFilter"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=2;
		weight=700;
		itemSize[]={3,4};
		varWetMax=0.249;
		heatIsolation=0.80000001;
		repairableWithKits[]={8,6};
		repairCosts[]={30,25};
		visibilityModifier=0.89999998;
		noHelmet=1;
		noEyewear=1;
		headSelectionsToHide[]=
		{
			"Clipping_AirborneMask"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"camoFilter",
			"camoGlass"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\masks\data\airborne_mask_co.paa",
			"\dz\characters\masks\data\airborne_mask_co.paa",
			"\dz\characters\masks\data\airborne_mask_co.paa",
			"\dz\characters\masks\data\gp5gasmask_white_co.paa",
			"\dz\characters\masks\data\airborne_mask_glass_ca.paa"
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
								"dz\characters\masks\data\airborne_mask.rvmat",
								"dz\characters\masks\data\airborne_mask_glass.rvmat",
								"dz\characters\masks\data\gp5gasmask.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"dz\characters\masks\data\airborne_mask_damage.rvmat",
								"dz\characters\masks\data\airborne_mask_glass.rvmat",
								"dz\characters\masks\data\gp5gasmask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"dz\characters\masks\data\airborne_mask_destruct.rvmat",
								"dz\characters\masks\data\airborne_mask_glass.rvmat",
								"dz\characters\masks\data\gp5gasmask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\airborne_mask_m.p3d";
			female="\DZ\characters\masks\airborne_mask_f.p3d";
		};
		class Protection
		{
			biological=1;
			dust_particle_breath=1;
			dust_particle_eyes=1;
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="gasmask";
		soundVoicePriority=5;
	};
	class GP5GasMask_Filter: Inventory_Base
	{
		scope=0;
		displayName="$STR_GasMask_Filter0";
		descriptionShort="$STR_GasMask_Filter1";
		model="\DZ\characters\masks\GP5GasMask_filter.p3d";
		inventorySlot[]=
		{
			"GasMaskFilter"
		};
		rotationFlags=2;
		itemSize[]={2,2};
		weight=150;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		quantityBar=1;
		varQuantityDestroyOnMin=0;
		varWetMax=0.249;
		heatIsolation=0;
		visibilityModifier=0.94999999;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\masks\data\GP5GasMask_white_co.paa"
		};
		class Protection
		{
			biological=1;
			chemical=1;
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
								"DZ\characters\masks\data\GP5GasMask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\GP5GasMask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\GP5GasMask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\GP5GasMask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\GP5GasMask_destruct.rvmat"
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
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Balaclava3Holes_ColorBase: Clothing
	{
		displayName="$STR_CfgVehicles_Balaclava3Holes_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Balaclava3Holes_ColorBase1";
		model="\DZ\characters\masks\Balaclava_3holes_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=17;
		weight=300;
		itemSize[]={2,2};
		ragQuantity=2;
		varWetMax=1;
		heatIsolation=0.89999998;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava_3holes"
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
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\masks\data\Balaclava_3holes.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\Balaclava_3holes.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\Balaclava_3holes_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\Balaclava_3holes_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\Balaclava_3holes_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\Balaclava_3holes_m.p3d";
			female="\DZ\characters\masks\Balaclava_3holes_f.p3d";
		};
		class Protection
		{
			biological=0.25;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Balaclava3Holes_Beige: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\Balaklava_3holes_beige_co.paa",
			"DZ\characters\masks\data\Balaklava_3holes_beige_co.paa",
			"DZ\characters\masks\data\Balaklava_3holes_beige_co.paa"
		};
	};
	class Balaclava3Holes_Blue: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\Balaklava_3holes_blue_co.paa",
			"DZ\characters\masks\data\Balaklava_3holes_blue_co.paa",
			"DZ\characters\masks\data\Balaklava_3holes_blue_co.paa"
		};
	};
	class Balaclava3Holes_Black: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\Balaklava_3holes_co.paa",
			"DZ\characters\masks\data\Balaklava_3holes_co.paa",
			"DZ\characters\masks\data\Balaklava_3holes_co.paa"
		};
	};
	class Balaclava3Holes_Green: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\Balaklava_3holes_green_co.paa",
			"DZ\characters\masks\data\Balaklava_3holes_green_co.paa",
			"DZ\characters\masks\data\Balaklava_3holes_green_co.paa"
		};
	};
	class Balaclava3Holes_White: Balaclava3Holes_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\Balaklava_3holes_white_co.paa",
			"DZ\characters\masks\data\Balaklava_3holes_white_co.paa",
			"DZ\characters\masks\data\Balaklava_3holes_white_co.paa"
		};
	};
	class SantasBeard: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_SantasBeard0";
		descriptionShort="$STR_CfgVehicles_SantasBeard1";
		model="\DZ\characters\masks\SantasBeard_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		weight=220;
		itemSize[]={3,1};
		ragQuantity=1;
		varWetMax=0.048999999;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		noHelmet=1;
		headSelectionsToHide[]=
		{
			"Clipping_SantasBeard"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\masks\data\santasbeard_co.paa",
			"dz\characters\masks\data\santasbeard_co.paa",
			"dz\characters\masks\data\santasbeard_co.paa"
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
								"DZ\characters\masks\data\SantasBeard.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\SantasBeard.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\SantasBeard_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\SantasBeard_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\SantasBeard_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\SantasBeard_m.p3d";
			female="\DZ\characters\masks\SantasBeard_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="none";
		soundVoicePriority=5;
	};
	class MouthRag: Clothing
	{
		scope=2;
		displayName="$STR_cfgvehicles_rag0";
		descriptionShort="$STR_cfgvehicles_rag1";
		model="\DZ\gear\consumables\Rags.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		ChangeInventorySlot[]=
		{
			"Mask"
		};
		ChangeIntoOnDetach="Rag";
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		weight=150;
		itemSize[]={1,3};
		ragQuantity=1;
		varWetMax=1;
		heatIsolation=0;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_mouth_rags"
		};
		hiddenSelections[]=
		{
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\masks\data\mouth_rags_CO.paa",
			"DZ\characters\masks\data\mouth_rags_CO.paa"
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
								"DZ\characters\masks\data\mouth_rags.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\mouth_rags.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\mouth_rags_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\mouth_rags_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\mouth_rags_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\mouth_rags.p3d";
			female="\DZ\characters\masks\mouth_rags.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="gag";
		soundVoicePriority=15;
	};
	class SurgicalMask: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_SurgicalMask0";
		descriptionShort="$STR_CfgVehicles_SurgicalMask1";
		model="\DZ\characters\masks\Surgical_mask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=2;
		weight=340;
		itemSize[]={3,1};
		varWetMax=1;
		heatIsolation=0.1;
		headSelectionsToHide[]=
		{
			"Clipping_Surgical_mask"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\surgical_mask_ground_co.paa",
			"\DZ\characters\masks\data\surgical_mask_co.paa",
			"\DZ\characters\masks\data\surgical_mask_co.paa"
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
								"DZ\characters\masks\data\Surgical_mask.rvmat",
								"DZ\characters\masks\data\Surgical_mask_ground.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\Surgical_mask.rvmat",
								"DZ\characters\masks\data\Surgical_mask_ground.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\Surgical_mask_damage.rvmat",
								"DZ\characters\masks\data\Surgical_mask_ground_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\Surgical_mask_damage.rvmat",
								"DZ\characters\masks\data\Surgical_mask_ground_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\Surgical_mask_destruct.rvmat",
								"DZ\characters\masks\data\Surgical_mask_ground_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\Surgical_mask_m.p3d";
			female="\DZ\characters\masks\Surgical_mask_f.p3d";
		};
		class Protection
		{
			biological=0.5;
			dust_particle_breath=0.25;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
		soundVoiceType="none";
		soundVoicePriority=5;
	};
	class HockeyMask: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_HockeyMask0";
		descriptionShort="$STR_CfgVehicles_HockeyMask1";
		model="\DZ\characters\masks\VintageHockeyMask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		weight=555;
		itemSize[]={3,2};
		noHelmet=1;
		noEyewear=1;
		varWetMax=0.249;
		heatIsolation=0.050000001;
		headSelectionsToHide[]=
		{
			"Clipping_VintageHockeyMask"
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\Vinitagehockeym_CO.paa",
			"\DZ\characters\masks\data\Vinitagehockeym_CO.paa",
			"\DZ\characters\masks\data\Vinitagehockeym_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=90;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\masks\Data\Vintagehockeym.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\Data\Vintagehockeym.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\Data\Vintagehockeym_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\Data\Vintagehockeym_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\Data\Vintagehockeym_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.85000002;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.80000001;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.85000002;
					};
					class Blood
					{
						damage=0.80000001;
					};
					class Shock
					{
						damage=0.80000001;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\VintageHockeyMask_m.p3d";
			female="\DZ\characters\masks\VintageHockeyMask_f.p3d";
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class MimeMask_Male: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_MimeMask0";
		descriptionShort="$STR_CfgVehicles_MimeMask1";
		model="\DZ\characters\masks\MimeMask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		weight=100;
		itemSize[]={2,3};
		noEyewear=1;
		varWetMax=0.249;
		heatIsolation=0.1;
		headSelectionsToHide[]=
		{
			"Clipping_Surgical_mask"
		};
		repairableWithKits[]={8};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\MimeMask_Male_CO.paa",
			"\DZ\characters\masks\data\MimeMask_Male_CO.paa",
			"\DZ\characters\masks\data\MimeMask_Male_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=60;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\masks\data\MimeMask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\MimeMask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\MimeMask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\MimeMask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\MimeMask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\MimeMask_m.p3d";
			female="\DZ\characters\masks\MimeMask_f.p3d";
		};
		class Protection
		{
			biological=0.5;
			dust_particle_breath=0.44999999;
			dust_particle_eyes=0.40000001;
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class MimeMask_Female: MimeMask_Male
	{
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\MimeMask_Female_CO.paa",
			"\DZ\characters\masks\data\MimeMask_Female_CO.paa",
			"\DZ\characters\masks\data\MimeMask_Female_CO.paa"
		};
	};
	class CrookedNose: Clothing
	{
		scope=2;
		displayName="$STR_CrookedNose0";
		descriptionShort="$STR_CrookedNose1";
		model="\DZ\characters\masks\CrookedNose_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=16;
		weight=220;
		itemSize[]={3,1};
		varWetMax=0.048999999;
		heatIsolation=0.40000001;
		noHelmet=1;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"\DZ\characters\masks\data\CrookedNose_co.paa",
			"\DZ\characters\masks\data\CrookedNose_co.paa",
			"\DZ\characters\masks\data\CrookedNose_co.paa"
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
								"DZ\characters\masks\data\CrookedNose.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\CrookedNose.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\CrookedNose_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\CrookedNose_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\CrookedNose_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\CrookedNose_m.p3d";
			female="\DZ\characters\masks\CrookedNose_f.p3d";
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FaceCover_Improvised: Clothing
	{
		scope=2;
		displayName="$STR_FaceCover_Improvised0";
		descriptionShort="$STR_FaceCover_Improvised1";
		model="\DZ\characters\masks\FaceCover_Improvised_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=34;
		weight=150;
		itemSize[]={3,1};
		varWetMax=1;
		heatIsolation=0.15000001;
		repairableWithKits[]={2};
		repairCosts[]={25};
		noHelmet=0;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Surgical_mask"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\masks\data\FaceCover_Improvised_co.paa",
			"dz\characters\masks\data\FaceCover_Improvised_co.paa",
			"dz\characters\masks\data\FaceCover_Improvised_co.paa"
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
								"DZ\characters\masks\data\FaceCover_Improvised.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\masks\data\FaceCover_Improvised.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\masks\data\FaceCover_Improvised_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\masks\data\FaceCover_Improvised_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\masks\data\FaceCover_Improvised_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\masks\FaceCover_Improvised_m.p3d";
			female="\DZ\characters\masks\FaceCover_Improvised_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};

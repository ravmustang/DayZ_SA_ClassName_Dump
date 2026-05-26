class CfgPatches
{
	class DZ_Characters_Belts
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
	class Clothing_Base;
	class Clothing: Clothing_Base
	{
	};
	class CivilianBelt: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_CivilianBelt0";
		descriptionShort="$STR_CfgVehicles_CivilianBelt1";
		model="\DZ\characters\belts\civ_belt_g.p3d";
		attachments[]=
		{
			"Belt_Back",
			"Belt_Right",
			"Belt_Left"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		quickBarBonus=1;
		itemSize[]={3,1};
		weight=20;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		lootCategory="Crafted";
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
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\belts\data\civ_belt_2_co.paa",
			"\dz\characters\belts\data\civ_belt_2_co.paa",
			"\dz\characters\belts\data\civ_belt_2_co.paa"
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
								"DZ\characters\belts\data\civ_belt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\belts\data\civ_belt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\civ_belt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\belts\data\civ_belt_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\civ_belt_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\belts\civ_belt_m.p3d";
			female="\DZ\characters\belts\civ_belt_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class MilitaryBelt: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_MilitaryBelt0";
		descriptionShort="$STR_CfgVehicles_MilitaryBelt1";
		model="\DZ\characters\belts\mil_belt_g.p3d";
		attachments[]=
		{
			"Belt_Back",
			"Belt_Right",
			"Belt_Left"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		quickBarBonus=1;
		itemSize[]={3,1};
		weight=20;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		lootCategory="Crafted";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.415686,0.556863,0.34902,1.0,co)",
			"#(argb,8,8,3)color(0.415686,0.556863,0.34902,1.0,co)",
			"#(argb,8,8,3)color(0.415686,0.556863,0.34902,1.0,co)"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=110;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\belts\data\mil_belt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\mil_belt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\belts\data\mil_belt_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\mil_belt_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\belts\mil_belt_m.p3d";
			female="\DZ\characters\belts\mil_belt_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class RopeBelt: Clothing
	{
		scope=2;
		displayName="$STR_RopeBelt0";
		descriptionShort="$STR_RopeBelt1";
		model="\DZ\characters\belts\Rope_Belt_g.p3d";
		attachments[]=
		{
			"Knife"
		};
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		quickBarBonus=1;
		itemSize[]={3,1};
		weight=280;
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
								"DZ\characters\belts\data\Rope_Belt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\belts\data\Rope_Belt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\Rope_Belt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\belts\data\Rope_Belt_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\Rope_Belt_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\belts\Rope_Belt_m.p3d";
			female="\DZ\characters\belts\Rope_Belt_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class LeatherKnifeSheath: Clothing
	{
		scope=2;
		displayName="$STR_CfgVehicles_LeatherKnifeSheath0";
		descriptionShort="$STR_CfgVehicles_LeatherKnifeSheath1";
		model="\DZ\characters\belts\knife_holster_g.p3d";
		inventorySlot[]=
		{
			"Belt_Back"
		};
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Belt"
		};
		weight=110;
		itemSize[]={1,3};
		attachments[]=
		{
			"Knife"
		};
		absorbency=0.1;
		heatIsolation=0;
		repairableWithKits[]={3};
		repairCosts[]={25};
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
								"DZ\characters\belts\data\knife_holster.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\belts\data\knife_holster.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\knife_holster_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\belts\data\knife_holster_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\knife_holster_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\belts\knife_holster_m.p3d";
			female="\DZ\characters\belts\knife_holster_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class NylonKnifeSheath: Clothing
	{
		scope=2;
		displayName="$STR_cfgvehicles_knifesheath0";
		descriptionShort="$STR_cfgvehicles_knifesheath1";
		model="\DZ\characters\belts\nylon_KnifeSheath.p3d";
		inventorySlot[]=
		{
			"Belt_Back"
		};
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Belt"
		};
		weight=110;
		itemSize[]={3,1};
		attachments[]=
		{
			"Knife"
		};
		absorbency=0.1;
		heatIsolation=0;
		repairableWithKits[]={3};
		repairCosts[]={25};
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
								"DZ\characters\belts\data\nylon_KnifeSheath.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\belts\data\nylon_KnifeSheath.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\nylon_KnifeSheath_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\belts\data\nylon_KnifeSheath_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\nylon_KnifeSheath_destruct.rvmat"
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
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class LeatherBelt_ColorBase: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_LeatherBelt_ColorBase0";
		descriptionShort="$STR_CfgVehicles_LeatherBelt_ColorBase1";
		model="\DZ\characters\belts\belt_leather_g.p3d";
		attachments[]=
		{
			"Belt_Back",
			"Belt_Right",
			"Belt_Left"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		quickBarBonus=1;
		itemSize[]={3,1};
		weight=20;
		lootCategory="Crafted";
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
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\belts\data\belt_leather_co.paa",
			"\dz\characters\belts\data\belt_leather_co.paa",
			"\dz\characters\belts\data\belt_leather_co.paa"
		};
		absorbency=0.1;
		repairableWithKits[]={3};
		repairCosts[]={25};
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
								"DZ\characters\belts\data\belt_leather_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\belts\data\belt_leather_natural.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\belt_leather_natural_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\belts\data\belt_leather_natural_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\belt_leather_natural_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\DZ\characters\belts\belt_leather_m.p3d";
			female="\DZ\characters\belts\belt_leather_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class LeatherBelt_Natural: LeatherBelt_ColorBase
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\belts\data\belt_leather_natural.rvmat",
			"DZ\characters\belts\data\belt_leather_natural.rvmat",
			"DZ\characters\belts\data\belt_leather_natural.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\belts\data\belt_leather_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\belt_leather_natural_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\belt_leather_natural_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class LeatherBelt_Beige: LeatherBelt_ColorBase
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\belts\data\belt_leather_beige.rvmat",
			"DZ\characters\belts\data\belt_leather_beige.rvmat",
			"DZ\characters\belts\data\belt_leather_beige.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\belts\data\belt_leather_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\belt_leather_beige_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\belt_leather_beige_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class LeatherBelt_Brown: LeatherBelt_ColorBase
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\belts\data\belt_leather_brown.rvmat",
			"DZ\characters\belts\data\belt_leather_brown.rvmat",
			"DZ\characters\belts\data\belt_leather_brown.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\belts\data\belt_leather_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\belt_leather_brown_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\belt_leather_brown_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class LeatherBelt_Black: LeatherBelt_ColorBase
	{
		scope=2;
		hiddenSelectionsMaterials[]=
		{
			"DZ\characters\belts\data\belt_leather_black.rvmat",
			"DZ\characters\belts\data\belt_leather_black.rvmat",
			"DZ\characters\belts\data\belt_leather_black.rvmat"
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth: GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\belts\data\belt_leather_natural.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\belt_leather_black_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\belt_leather_black_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class HipPack_ColorBase: Clothing
	{
		displayName="$STR_cfgvehicles_HipPack_ColorBase0";
		descriptionShort="$STR_cfgvehicles_HipPack_ColorBase1";
		model="\DZ\characters\belts\HipPack_g.p3d";
		attachments[]=
		{
			"Belt_Left"
		};
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		quickBarBonus=1;
		weight=500;
		itemSize[]={4,2};
		itemsCargoSize[]={3,2};
		varWetMax=0.49000001;
		heatIsolation=0.1;
		repairableWithKits[]={5,2};
		repairCosts[]={20,25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=180;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\belts\data\HipPack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\belts\data\HipPack.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\belts\data\HipPack_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\belts\data\HipPack_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\belts\data\HipPack_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		class ClothingTypes
		{
			male="\DZ\characters\belts\HipPack_m.p3d";
			female="\DZ\characters\belts\HipPack_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class HipPack_Black: HipPack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\belts\data\HipPack_black_CO.paa",
			"\dz\characters\belts\data\HipPack_black_CO.paa",
			"\dz\characters\belts\data\HipPack_black_CO.paa"
		};
	};
	class HipPack_Green: HipPack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\belts\data\HipPack_green_CO.paa",
			"\dz\characters\belts\data\HipPack_green_CO.paa",
			"\dz\characters\belts\data\HipPack_green_CO.paa"
		};
	};
	class HipPack_Medical: HipPack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\belts\data\HipPack_medical_CO.paa",
			"\dz\characters\belts\data\HipPack_medical_CO.paa",
			"\dz\characters\belts\data\HipPack_medical_CO.paa"
		};
	};
	class HipPack_Party: HipPack_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\belts\data\HipPack_party_CO.paa",
			"\dz\characters\belts\data\HipPack_party_CO.paa",
			"\dz\characters\belts\data\HipPack_party_CO.paa"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxybelt_back_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"Belt_Back"
		};
		model="\DZ\characters\belts\proxies\belt_back_proxy.p3d";
	};
	class Proxybelt_right_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"Belt_Right"
		};
		model="\DZ\characters\belts\proxies\belt_right_proxy.p3d";
	};
	class Proxybelt_left_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"Belt_Left"
		};
		model="\DZ\characters\belts\proxies\belt_left_proxy.p3d";
	};
};

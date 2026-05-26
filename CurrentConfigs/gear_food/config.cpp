class CfgPatches
{
	class DZ_Gear_Food
	{
		units[]=
		{
			"Food_CanBakedBeans",
			"Food_CanFrankBeans",
			"Food_CanPasta",
			"Food_CanSardines",
			"Food_BoxCerealCrunchin"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class BaseFoodStageTransitions
{
	class Raw
	{
		class ToBaked
		{
			transition_to=2;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=3;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=4;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Rotten
	{
		class ToBurned
		{
			transition_to=5;
			cooking_method=1;
		};
	};
	class Baked
	{
		class ToBaked
		{
			transition_to=5;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=5;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Boiled
	{
		class ToBaked
		{
			transition_to=5;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=5;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Dried
	{
		class ToBaked
		{
			transition_to=5;
			cooking_method=1;
		};
		class ToBoiled
		{
			transition_to=5;
			cooking_method=2;
		};
		class ToDried
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToBurned
		{
			transition_to=5;
			cooking_method=3;
		};
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
	class Burned
	{
	};
};
class NotCookable
{
	class Raw
	{
		class ToRotten
		{
			transition_to=6;
			cooking_method=4;
		};
	};
};
class MeatStageTransitions: BaseFoodStageTransitions
{
};
class FruitStageTransitions: BaseFoodStageTransitions
{
};
class AnimalCorpsesStageTransitions: BaseFoodStageTransitions
{
};
class MushroomsStageTransitions: BaseFoodStageTransitions
{
};
class FoodAnimationSources
{
	class CS_Raw
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Rotten
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Baked
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Boiled
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Dried
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
	class CS_Burned
	{
		source="user";
		animPeriod=0.0099999998;
		initPhase=1;
	};
};
class NutritionModifiers
{
	class General
	{
		base_stage="Raw";
		class Raw
		{
			nutrition_properties[]={1,1,1,1,1};
		};
		class Rotten
		{
			nutrition_properties[]={0.5,0.75,1,0.25,1};
		};
		class Baked
		{
			nutrition_properties[]={2,0.5,0.75,0.75,1};
		};
		class Boiled
		{
			nutrition_properties[]={1,1,0.80000001,0.80000001,1};
		};
		class Dried
		{
			nutrition_properties[]={4,0.1,0.5,0.80000001,1};
		};
		class Burned
		{
			nutrition_properties[]={1,0.25,0.75,0.1,1};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Edible_Base;
	class BoxCerealCrunchin: Edible_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_BoxCerealCrunchin0";
		descriptionShort="$STR_CfgVehicles_BoxCerealCrunchin1";
		model="\dz\gear\food\BoxCereal.p3d";
		debug_ItemCategory=6;
		rotationFlags=17;
		weight=12;
		itemSize[]={3,3};
		varTemperatureFreezePoint=-25;
		varTemperatureThawPoint=-25;
		varTemperatureFreezeTime=7920;
		varTemperatureThawTime=7920;
		varTemperatureMax=80;
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
		isMeleeWeapon=1;
		temperaturePerQuantityWeight=4.5;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\CerealBox_01_CO.paa"
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
								"DZ\gear\food\data\Cereal_box.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\Cereal_box.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\Cereal_box_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\Cereal_box_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\Cereal_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=400;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickup
				{
					soundSet="BoxCerealCrunchin_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
				class drop
				{
					soundset="BoxCerealCrunchin_drop_SoundSet";
					id=898;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.059999999,0.017000001,0};
				orientation[]={0,90,180};
			};
			class DirectCookingB
			{
				position[]={0.059999999,0.017000001,0};
				orientation[]={0,270,0};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.017000001,0};
				orientation[]={0,90,0};
			};
		};
	};
	class PowderedMilk: Edible_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_PowderedMilk0";
		descriptionShort="$STR_CfgVehicles_PowderedMilk1";
		model="\dz\gear\food\PowderedMilk.p3d";
		debug_ItemCategory=6;
		rotationFlags=17;
		weight=30;
		itemSize[]={1,2};
		varTemperatureFreezePoint=-60;
		varTemperatureThawPoint=-60;
		varTemperatureFreezeTime=9900;
		varTemperatureThawTime=9900;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		varTemperatureMax=80;
		temperaturePerQuantityWeight=1;
		absorbency=0.89999998;
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
								"DZ\gear\food\data\powdered_milk.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\powdered_milk.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\powdered_milk_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\powdered_milk_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\powdered_milk_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=400;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.059999999,0.0099999998,0};
				orientation[]={0,90,0};
			};
			class DirectCookingB
			{
				position[]={0.059999999,0.0099999998,0};
				orientation[]={45,90,0};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.0099999998,0};
				orientation[]={0,90,0};
			};
		};
	};
	class SmallGuts: Edible_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_SmallGuts0";
		descriptionShort="$STR_CfgVehicles_SmallGuts1";
		model="\dz\gear\food\animal_smallguts.p3d";
		debug_ItemCategory=6;
		rotationFlags=1;
		weight=100;
		itemSize[]={2,1};
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		varTemperatureFreezeTime=2640;
		varTemperatureThawTime=2640;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		temperaturePerQuantityWeight=1;
		varTemperatureMax=105;
		absorbency=0;
		inventorySlot[]=
		{
			"Guts"
		};
		isMeleeWeapon=1;
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
								"DZ\gear\food\data\powdered_milk.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\powdered_milk.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\powdered_milk_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\powdered_milk_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\powdered_milk_destruct.rvmat"
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
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		class Nutrition
		{
			fullnessIndex=2.5;
			energy=150;
			water=20;
			nutritionalIndex=1;
			toxicity=0;
			agents=4;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Guts: Edible_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Guts0";
		descriptionShort="$STR_CfgVehicles_Guts1";
		model="\dz\gear\food\animal_guts.p3d";
		debug_ItemCategory=6;
		weight=100;
		itemSize[]={3,2};
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		varTemperatureFreezeTime=4488;
		varTemperatureThawTime=4488;
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		varTemperatureMax=105;
		temperaturePerQuantityWeight=3;
		inventorySlot[]=
		{
			"Guts"
		};
		isMeleeWeapon=1;
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
								"DZ\gear\food\data\powdered_milk.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\powdered_milk.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\powdered_milk_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\powdered_milk_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\powdered_milk_destruct.rvmat"
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
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		class Nutrition
		{
			fullnessIndex=5;
			energy=50;
			water=20;
			nutritionalIndex=1;
			toxicity=0;
			agents=4;
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Rice: Edible_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Rice0";
		descriptionShort="$STR_CfgVehicles_Rice1";
		model="\dz\gear\food\Rice.p3d";
		debug_ItemCategory=6;
		weight=60;
		itemSize[]={2,3};
		varTemperatureFreezePoint=-60;
		varTemperatureThawPoint=-60;
		varTemperatureFreezeTime=7920;
		varTemperatureThawTime=7920;
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		varTemperatureMax=105;
		temperaturePerQuantityWeight=3;
		absorbency=0.89999998;
		rotationFlags=63;
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
								"DZ\gear\food\data\rice.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\rice.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\rice_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\rice_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\rice_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=3;
			energy=100;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.02,0.039999999,0};
				orientation[]={180,90,90};
			};
			class DirectCookingB
			{
				position[]={0.050000001,0.039999999,0};
				orientation[]={30,90,0};
			};
			class DirectCookingC
			{
				position[]={0.050000001,0.039999999,0};
				orientation[]={0,90,0};
			};
		};
	};
	class Marmalade: Edible_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Marmalade0";
		descriptionShort="$STR_CfgVehicles_Marmalade1";
		model="\dz\gear\food\Marmalade.p3d";
		debug_ItemCategory=6;
		weight=250;
		itemSize[]={2,2};
		varTemperatureFreezePoint=-15;
		varTemperatureThawPoint=-15;
		varTemperatureFreezeTime=7920;
		varTemperatureThawTime=7920;
		varQuantityInit=400;
		varQuantityMin=0;
		varQuantityMax=400;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=2;
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
								"DZ\gear\food\data\marmalade_jar.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\marmalade_jar.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\marmalade_jar_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\marmalade_jar_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\marmalade_jar_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=4;
			energy=150;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
		soundImpactType="glass";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Marmalade_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class Honey: Edible_Base
	{
		scope=2;
		displayName="$STR_Honey0";
		descriptionShort="$STR_Honey1";
		model="\dz\gear\food\Honey.p3d";
		debug_ItemCategory=6;
		weight=0;
		itemSize[]={2,2};
		varTemperatureFreezePoint=-60;
		varTemperatureThawPoint=-60;
		varTemperatureFreezeTime=9900;
		varTemperatureThawTime=9900;
		varTemperauteMax=120;
		varQuantityInit=400;
		varQuantityMin=0;
		varQuantityMax=400;
		temperaturePerQuantityWeight=2;
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
								"DZ\gear\food\data\honey_jar.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\honey_jar.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\honey_jar_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\honey_jar_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\honey_jar_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=5;
			energy=250;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
		soundImpactType="glass";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Marmalade_pickup_SoundSet";
					id=797;
				};
			};
		};
	};
	class Zagorky_ColorBase: Edible_Base
	{
		model="\dz\gear\food\Zagorky.p3d";
		debug_ItemCategory=6;
		rotationFlags=1;
		weight=10;
		itemSize[]={1,2};
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=2640;
		varTemperatureThawTime=2640;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varTemperatureMax=80;
		temperaturePerQuantityWeight=1;
		isMeleeWeapon=1;
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
								"DZ\gear\food\data\zagorky.rvmat",
								"DZ\gear\food\data\zagorky_wrapping.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\zagorky.rvmat",
								"DZ\gear\food\data\zagorky_wrapping.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\zagorky_damage.rvmat",
								"DZ\gear\food\data\zagorky_wrapping_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\zagorky_damage.rvmat",
								"DZ\gear\food\data\zagorky_wrapping_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\zagorky_destruct.rvmat",
								"DZ\gear\food\data\zagorky_wrapping_destruct.rvmat"
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
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickup
				{
					soundSet="BoxCerealCrunchin_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
				class drop
				{
					soundset="BoxCerealCrunchin_drop_SoundSet";
					id=898;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.059999999,0.0020000001,0};
				orientation[]={0,90,0};
			};
			class DirectCookingB
			{
				position[]={0.059999999,0.0020000001,0};
				orientation[]={45,90,0};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.0020000001,0};
				orientation[]={0,90,0};
			};
		};
	};
	class Zagorky: Zagorky_ColorBase
	{
		scope=2;
		displayName="$STR_Zagorky0";
		descriptionShort="$STR_Zagorky1";
		hiddenSelections[]=
		{
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\zagorky_milk_ca.paa"
		};
		class Nutrition
		{
			fullnessIndex=0;
			energy=100;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class ZagorkyChocolate: Zagorky_ColorBase
	{
		scope=2;
		displayName="$STR_ZagorkyChocolate0";
		descriptionShort="$STR_ZagorkyChocolate1";
		hiddenSelections[]=
		{
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\zagorky_choco_ca.paa"
		};
		class Nutrition
		{
			fullnessIndex=0;
			energy=200;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class ZagorkyPeanuts: Zagorky_ColorBase
	{
		scope=2;
		displayName="$STR_ZagorkyPeanuts0";
		descriptionShort="$STR_ZagorkyPeanuts1";
		hiddenSelections[]=
		{
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\zagorky_nuts_ca.paa"
		};
		class Nutrition
		{
			fullnessIndex=0;
			energy=150;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Snack_ColorBase: Edible_Base
	{
		model="\DZ\gear\food\salty_crackers.p3d";
		debug_ItemCategory=6;
		rotationFlags=1;
		weight=10;
		itemSize[]={2,2};
		varTemperatureFreezePoint=-60;
		varTemperatureThawPoint=-60;
		varTemperatureFreezeTime=7920;
		varTemperatureThawTime=7920;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varTemperatureMax=80;
		temperaturePerQuantityWeight=2;
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
								"DZ\gear\food\data\tycinky.rvmat",
								"DZ\gear\food\data\tycinky_wrapping.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\tycinky.rvmat",
								"DZ\gear\food\data\tycinky_wrapping.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\tycinky_damage.rvmat",
								"DZ\gear\food\data\tycinky_wrapping_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\tycinky_damage.rvmat",
								"DZ\gear\food\data\tycinky_wrapping_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\tycinky_destruct.rvmat",
								"DZ\gear\food\data\tycinky_wrapping_destruct.rvmat"
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
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.059999999,0.015,0};
				orientation[]={0,90,0};
			};
			class DirectCookingB
			{
				position[]={0.059999999,0.015,0};
				orientation[]={45,90,0};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.015,0};
				orientation[]={0,90,0};
			};
		};
	};
	class SaltySticks: Snack_ColorBase
	{
		scope=2;
		displayName="$STR_SaltySticks0";
		descriptionShort="$STR_SaltySticks1";
		class Nutrition
		{
			fullnessIndex=3;
			energy=100;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Crackers: Snack_ColorBase
	{
		model="\DZ\gear\food\salty_chips.p3d";
		scope=2;
		displayName="$STR_Crackers0";
		descriptionShort="$STR_Crackers1";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\salted_crackers_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=3;
			energy=150;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Chips: Snack_ColorBase
	{
		model="\DZ\gear\food\salty_chips.p3d";
		scope=2;
		displayName="$STR_Chips0";
		descriptionShort="$STR_Chips1";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\salted_chips_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=3;
			energy=200;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
	};
	class Candycane_Colorbase: Edible_Base
	{
		displayName="$STR_CfgVehicles_CandyCane0";
		descriptionShort="$STR_CfgVehicles_CandyCane1";
		model="\dz\gear\food\candycane.p3d";
		debug_ItemCategory=6;
		rotationFlags=12;
		inventorySlot[]=
		{
			"WalkieTalkie",
			"Chemlight"
		};
		varWetMax=0.249;
		weight=0;
		weightPerQuantityUnit=0.0014600001;
		itemSize[]={1,2};
		varTemperatureFreezePoint=-20;
		varTemperatureThawPoint=-20;
		varTemperatureFreezeTime=2640;
		varTemperatureThawTime=2640;
		varTemperatureMax=120;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		temperaturePerQuantityWeight=1;
		isMeleeWeapon=1;
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
								"DZ\gear\food\data\candycane.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\candycane.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\candycane_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\candycane_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\candycane_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=3;
			energy=4500;
			water=0;
			nutritionalIndex=1;
			toxicity=0;
		};
		soundImpactType="plastic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class CandyCane_break
				{
					soundSet="CandyCane_break_SoundSet";
					id=202;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class WalkieTalkie
			{
				position[]={0,-0.02,0.0099999998};
				orientation[]={90,0,0};
			};
		};
	};
	class Candycane_Green: Candycane_Colorbase
	{
		model="\dz\gear\food\candycane.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\candycane_green_CO.paa"
		};
	};
	class Candycane_Red: Candycane_Colorbase
	{
		model="\dz\gear\food\candycane.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\candycane_red_CO.paa"
		};
	};
	class Candycane_RedGreen: Candycane_Colorbase
	{
		model="\dz\gear\food\candycane.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\candycane_redgreen_CO.paa"
		};
	};
	class Candycane_Yellow: Candycane_Colorbase
	{
		model="\dz\gear\food\candycane.p3d";
		scope=2;
		hiddenSelections[]=
		{
			"camoground"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\candycane_yellow_CO.paa"
		};
	};
	class BakedBeansCan: Edible_Base
	{
		scope=2;
		displayName="$STR_BakedBeansCan0";
		descriptionShort="$STR_BakedBeansCan1";
		model="\dz\gear\food\food_can.p3d";
		debug_ItemCategory=6;
		rotationFlags=63;
		itemSize[]={2,2};
		weight=440;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		weightPerQuantityUnit=0;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=2;
		quantityShow=0;
		quantityBar=0;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\deez_beans_co.paa"
		};
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
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
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
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="BakedBeansCan_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
				class drop
				{
					soundset="BakedBeansCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class BakedBeansCan_Opened: Edible_Base
	{
		scope=2;
		displayName="$STR_BakedBeansCan0";
		descriptionShort="$STR_BakedBeansCan1";
		model="\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,2};
		weight=40;
		varQuantityInit=400;
		varQuantityMin=0;
		varQuantityMax=400;
		varTemperatureMax=120;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		temperaturePerQuantityWeight=2;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\deez_beans_co.paa"
		};
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
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=200;
			water=25;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class PeachesCan: Edible_Base
	{
		scope=2;
		displayName="$STR_PeachesCan0";
		descriptionShort="$STR_PeachesCan1";
		model="\dz\gear\food\food_can.p3d";
		debug_ItemCategory=6;
		rotationFlags=63;
		itemSize[]={2,2};
		weight=440;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		weightPerQuantityUnit=0;
		quantityShow=0;
		quantityBar=0;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=2;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\canned_peaches_co.paa"
		};
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
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
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
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class PeachesCan_Opened: Edible_Base
	{
		scope=2;
		displayName="$STR_PeachesCan0";
		descriptionShort="$STR_PeachesCan1";
		model="\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,2};
		weight=40;
		varQuantityInit=400;
		varQuantityMin=0;
		varQuantityMax=400;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=2;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\canned_peaches_co.paa"
		};
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
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=150;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class TacticalBaconCan: Edible_Base
	{
		scope=2;
		displayName="$STR_TacticalBaconCan0";
		descriptionShort="$STR_TacticalBaconCan1";
		model="\dz\gear\food\food_can.p3d";
		debug_ItemCategory=6;
		rotationFlags=63;
		itemSize[]={2,2};
		weight=440;
		varTemperatureFreezePoint=-10;
		varTemperatureThawPoint=-10;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		weightPerQuantityUnit=0;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=2;
		quantityShow=0;
		quantityBar=0;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\tactical_bacon_co.paa"
		};
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
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
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
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class TacticalBaconCan_Opened: Edible_Base
	{
		scope=2;
		displayName="$STR_TacticalBaconCan0";
		descriptionShort="$STR_TacticalBaconCan1";
		model="\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,2};
		weight=40;
		varQuantityInit=400;
		varQuantityMin=0;
		varQuantityMax=400;
		varTemperatureMax=120;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		temperaturePerQuantityWeight=2;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\tactical_bacon_co.paa"
		};
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
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=300;
			water=25;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class SpaghettiCan: Edible_Base
	{
		scope=2;
		displayName="$STR_SpaghettiCan0";
		descriptionShort="$STR_SpaghettiCan1";
		model="\dz\gear\food\food_can.p3d";
		debug_ItemCategory=6;
		rotationFlags=63;
		itemSize[]={2,2};
		weight=440;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		weightPerQuantityUnit=0;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=2;
		quantityShow=0;
		quantityBar=0;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\canned_spaghetti_co.paa"
		};
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
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
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
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class SpaghettiCan_Opened: Edible_Base
	{
		scope=2;
		displayName="$STR_SpaghettiCan0";
		descriptionShort="$STR_SpaghettiCan1";
		model="\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,2};
		weight=40;
		varQuantityInit=400;
		varQuantityMin=0;
		varQuantityMax=400;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=2;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\canned_spaghetti_co.paa"
		};
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
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=175;
			water=38;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class SardinesCan: Edible_Base
	{
		scope=2;
		displayName="$STR_SardinesCan0";
		descriptionShort="$STR_SardinesCan1";
		model="\dz\gear\food\can_sardines.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		itemSize[]={2,1};
		weight=125;
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		weightPerQuantityUnit=0;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=1;
		quantityShow=0;
		quantityBar=0;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\sardines_CO.paa"
		};
		soundImpactType="metal";
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
								"DZ\gear\food\data\Sardines.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\Sardines.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\Sardines_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\Sardines_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\Sardines_destruct.rvmat"
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
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class SardinesCan_Opened: Edible_Base
	{
		scope=2;
		displayName="$STR_SardinesCan0";
		descriptionShort="$STR_SardinesCan1";
		model="\dz\gear\food\can_sardines_open.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=25;
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=1;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\sardines_CO.paa"
		};
		soundImpactType="metal";
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
								"DZ\gear\food\data\Sardines.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\Sardines.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\Sardines_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\Sardines_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\Sardines_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=250;
			water=25;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class TunaCan: Edible_Base
	{
		scope=2;
		displayName="$STR_TunaCan0";
		descriptionShort="$STR_TunaCan1";
		model="\dz\gear\food\Tuna.p3d";
		debug_ItemCategory=6;
		rotationFlags=32;
		itemSize[]={2,1};
		weight=265;
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		weightPerQuantityUnit=0;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=1;
		quantityShow=0;
		quantityBar=0;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\tuna_CO.paa"
		};
		soundImpactType="metal";
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
								"DZ\gear\food\data\tuna.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\tuna.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\tuna_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\tuna_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\tuna_destruct.rvmat"
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
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class TunaCan_Opened: Edible_Base
	{
		scope=2;
		displayName="$STR_TunaCan0";
		descriptionShort="$STR_TunaCan1";
		model="\dz\gear\food\tuna_open.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=15;
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=1;
		isMeleeWeapon=1;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\tuna_CO.paa"
		};
		soundImpactType="metal";
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
								"DZ\gear\food\data\tuna.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\tuna.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\tuna_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\tuna_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\tuna_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=150;
			water=20;
			nutritionalIndex=1;
			toxicity=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class FoodCan_250g_ColorBase: Edible_Base
	{
		model="\dz\gear\food\FoodCan_250g.p3d";
		debug_ItemCategory=6;
		rotationFlags=2;
		itemSize[]={2,1};
		weight=265;
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		weightPerQuantityUnit=0;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=1;
		quantityShow=0;
		quantityBar=0;
		isMeleeWeapon=1;
		soundImpactType="metal";
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
								"DZ\gear\food\data\FoodCan_250g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\FoodCan_250g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\FoodCan_250g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\FoodCan_250g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\FoodCan_250g_destruct.rvmat"
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
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class FoodCan_250g_Opened_ColorBase: Edible_Base
	{
		debug_ItemCategory=6;
		model="\dz\gear\food\FoodCan_250g_open.p3d";
		itemSize[]={2,1};
		weight=15;
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=1;
		isMeleeWeapon=1;
		soundImpactType="metal";
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
								"DZ\gear\food\data\FoodCan_250g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\FoodCan_250g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\FoodCan_250g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\FoodCan_250g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\FoodCan_250g_destruct.rvmat"
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
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class DogFoodCan: FoodCan_250g_ColorBase
	{
		scope=2;
		displayName="$STR_DogFoodCan0";
		descriptionShort="$STR_DogFoodCan1";
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.02,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.02,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.02,0};
				orientation[]={0,0,0};
			};
		};
	};
	class DogFoodCan_Opened: FoodCan_250g_Opened_ColorBase
	{
		scope=2;
		displayName="$STR_DogFoodCan0";
		descriptionShort="$STR_DogFoodCan1";
		class Nutrition
		{
			fullnessIndex=10;
			energy=150;
			water=40;
			nutritionalIndex=1;
			toxicity=0;
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.02,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.02,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.02,0};
				orientation[]={0,0,0};
			};
		};
	};
	class CatFoodCan: FoodCan_250g_ColorBase
	{
		scope=2;
		displayName="$STR_CatFoodCan0";
		descriptionShort="$STR_CatFoodCan1";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\FoodCan_250g_Cat_CO.paa"
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.02,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.02,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.02,0};
				orientation[]={0,0,0};
			};
		};
	};
	class CatFoodCan_Opened: FoodCan_250g_Opened_ColorBase
	{
		scope=2;
		displayName="$STR_CatFoodCan0";
		descriptionShort="$STR_CatFoodCan1";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\FoodCan_250g_Cat_CO.paa"
		};
		class Nutrition
		{
			fullnessIndex=10;
			energy=125;
			water=40;
			nutritionalIndex=1;
			toxicity=0;
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class PorkCan: FoodCan_250g_ColorBase
	{
		scope=2;
		displayName="$STR_PorkCan0";
		descriptionShort="$STR_PorkCan1";
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\FoodCan_250g_Pork_CO.paa"
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class PorkCan_Opened: FoodCan_250g_Opened_ColorBase
	{
		scope=2;
		displayName="$STR_PorkCan0";
		descriptionShort="$STR_PorkCan1";
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\FoodCan_250g_Pork_CO.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=225;
			water=20;
			nutritionalIndex=1;
			toxicity=0;
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class Lunchmeat: FoodCan_250g_ColorBase
	{
		scope=2;
		displayName="$STR_Lunchmeat0";
		descriptionShort="$STR_Lunchmeat1";
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\foodcan_250g_lunch_co.paa"
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class Lunchmeat_Opened: FoodCan_250g_Opened_ColorBase
	{
		scope=2;
		displayName="$STR_Lunchmeat0";
		descriptionShort="$STR_Lunchmeat1";
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\foodcan_250g_lunch_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=200;
			water=20;
			nutritionalIndex=1;
			toxicity=0;
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class CrabCan: FoodCan_250g_ColorBase
	{
		scope=2;
		displayName="$STR_cfgVehicles_CrabCan0";
		descriptionShort="$STR_cfgVehicles_CrabCan1";
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\foodcan_250g_crab_co.paa"
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class CrabCan_Opened: FoodCan_250g_Opened_ColorBase
	{
		scope=2;
		displayName="$STR_cfgVehicles_CrabCan0";
		descriptionShort="$STR_cfgVehicles_CrabCan1";
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\foodcan_250g_crab_co.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=200;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class UnknownFoodCan: Edible_Base
	{
		scope=2;
		displayName="$STR_UnknownFoodCan0";
		descriptionShort="$STR_UnknownFoodCan1";
		model="\dz\gear\food\food_can.p3d";
		debug_ItemCategory=6;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\UnknownFoodCan_co.paa"
		};
		rotationFlags=63;
		itemSize[]={2,2};
		weight=440;
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		weightPerQuantityUnit=0;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=2;
		quantityShow=0;
		quantityBar=0;
		isMeleeWeapon=1;
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
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
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
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class UnknownFoodCan_Opened: Edible_Base
	{
		scope=2;
		displayName="$STR_UnknownFoodCan0";
		descriptionShort="$STR_UnknownFoodCan1";
		model="\dz\gear\food\food_can_open.p3d";
		debug_ItemCategory=6;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\UnknownFoodCan_co.paa"
		};
		itemSize[]={2,2};
		weight=40;
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureMax=120;
		varQuantityInit=400;
		varQuantityMin=0;
		varQuantityMax=400;
		temperaturePerQuantityWeight=2;
		isMeleeWeapon=1;
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
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\food_can.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\food_can_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\food_can_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Nutrition
		{
			fullnessIndex=10;
			energy=200;
			water=50;
			nutritionalIndex=1;
			toxicity=0;
			agentsPerDigest=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class FoodCan_100g_ColorBase: Edible_Base
	{
		debug_ItemCategory=6;
		model="\dz\gear\food\FoodCan_100g.p3d";
		rotationFlags=2;
		itemSize[]={1,1};
		weight=115;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=0;
		weightPerQuantityUnit=0;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=0.5;
		quantityShow=0;
		quantityBar=0;
		isMeleeWeapon=1;
		soundImpactType="plastic";
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
								"DZ\gear\food\data\FoodCan_100g.rvmat",
								"DZ\gear\food\data\FoodCan_100g_silver.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\FoodCan_100g.rvmat",
								"DZ\gear\food\data\FoodCan_100g_silver.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\FoodCan_100g_damage.rvmat",
								"DZ\gear\food\data\FoodCan_100g_silver_damage.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\FoodCan_100g_damage.rvmat",
								"DZ\gear\food\data\FoodCan_100g_silver_damage.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\FoodCan_100g_destruct.rvmat",
								"DZ\gear\food\data\FoodCan_100g_silver_destruct.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content_destruct.rvmat"
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
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class FoodCan_100g_Opened_ColorBase: Edible_Base
	{
		debug_ItemCategory=6;
		model="\dz\gear\food\FoodCan_100g_open.p3d";
		itemSize[]={1,1};
		weight=15;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varTemperatureMax=120;
		temperaturePerQuantityWeight=0.5;
		isMeleeWeapon=1;
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
								"DZ\gear\food\data\FoodCan_100g.rvmat",
								"DZ\gear\food\data\FoodCan_100g_white.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\FoodCan_100g.rvmat",
								"DZ\gear\food\data\FoodCan_100g_white.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\FoodCan_100g_damage.rvmat",
								"DZ\gear\food\data\FoodCan_100g_white_damage.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\FoodCan_100g_damage.rvmat",
								"DZ\gear\food\data\FoodCan_100g_white_damage.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\FoodCan_100g_destruct.rvmat",
								"DZ\gear\food\data\FoodCan_100g_white_destruct.rvmat",
								"DZ\gear\food\data\FoodCan_100g_content_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Pajka: FoodCan_100g_ColorBase
	{
		scope=2;
		displayName="$STR_Pajka0";
		descriptionShort="$STR_Pajka1";
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class Pajka_Opened: FoodCan_100g_Opened_ColorBase
	{
		scope=2;
		displayName="$STR_Pajka0";
		descriptionShort="$STR_Pajka1";
		class Nutrition
		{
			fullnessIndex=2;
			energy=150;
			water=20;
			nutritionalIndex=1;
			toxicity=0;
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class Pate: FoodCan_100g_ColorBase
	{
		scope=2;
		displayName="$STR_Pate0";
		descriptionShort="$STR_Pate1";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\FoodCan_100g_Liver_CO.paa"
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class Pate_Opened: FoodCan_100g_Opened_ColorBase
	{
		scope=2;
		displayName="$STR_Pate0";
		descriptionShort="$STR_Pate1";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\FoodCan_100g_Liver_CO.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=250;
			water=20;
			nutritionalIndex=1;
			toxicity=0;
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class BrisketSpread: FoodCan_100g_ColorBase
	{
		scope=2;
		displayName="$STR_BrisketSpread0";
		descriptionShort="$STR_BrisketSpread1";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\FoodCan_100g_Brisket_CO.paa"
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class BrisketSpread_Opened: FoodCan_100g_Opened_ColorBase
	{
		scope=2;
		displayName="$STR_BrisketSpread0";
		descriptionShort="$STR_BrisketSpread1";
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\food\Data\FoodCan_100g_Brisket_CO.paa"
		};
		class Nutrition
		{
			fullnessIndex=2;
			energy=200;
			water=20;
			nutritionalIndex=1;
			toxicity=0;
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingB
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
			class DirectCookingC
			{
				position[]={0,0.0099999998,0};
				orientation[]={0,0,0};
			};
		};
	};
	class Apple: Edible_Base
	{
		scope=2;
		displayName="$STR_Apple0";
		descriptionShort="$STR_Apple1";
		model="\dz\gear\food\apple.p3d";
		debug_ItemCategory=6;
		weight=0;
		itemSize[]={1,1};
		stackedUnit="g";
		absorbency=0.2;
		varQuantityInit=125;
		varQuantityMin=0;
		varQuantityMax=125;
		quantityBar=1;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=0.5;
		ammoType="G_GrenadeHand";
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait",
			"Trap_Bait_2"
		};
		containsSeedsType="";
		containsSeedsQuantity="0";
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_boiled",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\apple_raw_CO.paa",
			"dz\gear\food\data\apple_baked_CO.paa",
			"dz\gear\food\data\apple_baked_CO.paa",
			"dz\gear\food\data\apple_dried_CO.paa",
			"dz\gear\food\data\apple_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\apple_raw.rvmat",
			"dz\gear\food\data\apple_baked.rvmat",
			"dz\gear\food\data\apple_boiled.rvmat",
			"dz\gear\food\data\apple_dried.rvmat",
			"dz\gear\food\data\apple_burnt.rvmat",
			"dz\gear\food\data\apple_rotten.rvmat"
		};
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
		class Trapping
		{
			baitTypes[]={3};
			baitTypeChances[]={0.69999999};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,100,40,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,75,16,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,250,24,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={1,2,2};
					nutrition_properties[]={1,200,64,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={2,3,3};
					nutrition_properties[]={1,200,8,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,100,0,1,0,16,1,4};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Apple_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Plum: Edible_Base
	{
		scope=2;
		displayName="$STR_Plum0";
		descriptionShort="$STR_Plum1";
		model="\dz\gear\food\plum.p3d";
		debug_ItemCategory=6;
		rotationFlags=12;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait",
			"Trap_Bait_2"
		};
		absorbency=0.40000001;
		weight=0;
		itemSize[]={1,1};
		stackedUnit="g";
		varQuantityInit=75;
		varQuantityMin=0;
		varQuantityMax=75;
		quantityBar=1;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=0.5;
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_baked",
			"cs_boiled",
			"cs_dried",
			"cs_burned"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\plum_raw_CO.paa",
			"dz\gear\food\data\plum_baked_CO.paa",
			"dz\gear\food\data\plum_boiled_CO.paa",
			"dz\gear\food\data\plum_dried_CO.paa",
			"dz\gear\food\data\plum_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\plum_raw.rvmat",
			"dz\gear\food\data\plum_boiled.rvmat",
			"dz\gear\food\data\plum_baked.rvmat",
			"dz\gear\food\data\plum_dried.rvmat",
			"dz\gear\food\data\plum_burnt.rvmat",
			"dz\gear\food\data\plum_rotten.rvmat"
		};
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
		class Trapping
		{
			baitTypes[]={3};
			baitTypeChances[]={0.69999999};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,100,53,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,75,21,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,300,32,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={2,2,2};
					nutrition_properties[]={1,250,85,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={3,3,3};
					nutrition_properties[]={1,250,11,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={4,4,4};
					nutrition_properties[]={5,125,0,1,0,16,1,4};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Pear: Edible_Base
	{
		scope=2;
		displayName="$STR_Pear0";
		descriptionShort="$STR_Pear1";
		model="\dz\gear\food\pear.p3d";
		debug_ItemCategory=6;
		rotationFlags=12;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait",
			"Trap_Bait_2"
		};
		absorbency=0.2;
		weight=0;
		itemSize[]={1,2};
		stackedUnit="g";
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		quantityBar=1;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\pear_raw_CO.paa",
			"dz\gear\food\data\pear_baked_CO.paa",
			"dz\gear\food\data\pear_baked_CO.paa",
			"dz\gear\food\data\pear_dried_CO.paa",
			"dz\gear\food\data\pear_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\pear_raw.rvmat",
			"dz\gear\food\data\pear_boiled.rvmat",
			"dz\gear\food\data\pear_baked.rvmat",
			"dz\gear\food\data\pear_dried.rvmat",
			"dz\gear\food\data\pear_burnt.rvmat",
			"dz\gear\food\data\pear_rotten.rvmat"
		};
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
		class Trapping
		{
			baitTypes[]={3};
			baitTypeChances[]={0.69999999};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,75,27,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,50,11,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,300,16,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,250,43,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={1,250,5,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,75,0,1,0,16,1,4};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Banana: Edible_Base
	{
		scope=2;
		displayName="$STR_Banana0";
		descriptionShort="$STR_Banana1";
		model="\dz\gear\food\banana_fresh.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		itemSize[]={1,2};
		stackedUnit="g";
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		quantityBar=1;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC"
		};
		containsSeedsType="";
		containsSeedsQuantity="0";
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
		class AnimationSources: FoodAnimationSources
		{
		};
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_rotten"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\banana_frash_CO.paa",
			"dz\gear\food\data\ban_rotten_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\banana_frash.rvmat",
			"dz\gear\food\data\banana_rotten.rvmat"
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,200,20,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={10,100,8,1,0,16,1,8};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Orange: Edible_Base
	{
		scope=2;
		displayName="$STR_Orange0";
		descriptionShort="$STR_Orange1";
		model="\dz\gear\food\orange_fresh.p3d";
		debug_ItemCategory=6;
		weight=0;
		itemSize[]={1,1};
		stackedUnit="g";
		varQuantityInit=110;
		varQuantityMin=0;
		varQuantityMax=110;
		quantityBar=1;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=0.5;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC"
		};
		containsSeedsType="";
		containsSeedsQuantity="0";
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_rotten"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\orange_frash_CO.paa",
			"dz\gear\food\data\orange_rotten_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\orange_frash.rvmat",
			"dz\gear\food\data\orange_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,75,70,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={10,50,28,1,0,16,1,8};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Tomato: Edible_Base
	{
		scope=2;
		displayName="$STR_Tomato0";
		descriptionShort="$STR_Tomato1";
		model="\dz\gear\food\tomato.p3d";
		debug_ItemCategory=6;
		weight=0;
		itemSize[]={1,1};
		stackedUnit="g";
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		quantityBar=1;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=0.5;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait",
			"Trap_Bait_2"
		};
		containsSeedsType="Cultivation_TomatoSeeds";
		containsSeedsQuantity="10";
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_burned"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\tomato_raw_CO.paa",
			"dz\gear\food\data\tomato_baked_CO.paa",
			"dz\gear\food\data\tomato_baked_CO.paa",
			"dz\gear\food\data\tomato_dried_CO.paa",
			"dz\gear\food\data\tomato_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\tomato_raw.rvmat",
			"dz\gear\food\data\tomato_baked.rvmat",
			"dz\gear\food\data\tomato_boiled.rvmat",
			"dz\gear\food\data\tomato_dried.rvmat",
			"dz\gear\food\data\tomato_burnt.rvmat",
			"dz\gear\food\data\tomato_rotten.rvmat"
		};
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
		class Trapping
		{
			baitTypes[]={3};
			baitTypeChances[]={0.60000002};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,50,50,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,20,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,150,30,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,125,80,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={1,125,10,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,50,0,1,0,16,1,4};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class GreenBellPepper: Edible_Base
	{
		scope=2;
		displayName="$STR_GreenBellPepper0";
		descriptionShort="$STR_GreenBellPepper1";
		model="\dz\gear\food\pepper_green.p3d";
		debug_ItemCategory=6;
		rotationFlags=12;
		weight=0;
		itemSize[]={1,2};
		stackedUnit="g";
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		quantityBar=1;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait",
			"Trap_Bait_2"
		};
		containsSeedsType="Cultivation_PepperSeeds";
		containsSeedsQuantity="10";
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0,0.015,0.07};
				orientation[]={0,75,0};
			};
			class DirectCookingB
			{
				position[]={0,0.015,-0.059999999};
				orientation[]={0,-75,0};
			};
			class DirectCookingC
			{
				position[]={0,0.015,0.07};
				orientation[]={0,75,0};
			};
		};
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\pepper_green_raw_CO.paa",
			"dz\gear\food\data\pepper_green_baked_CO.paa",
			"dz\gear\food\data\pepper_green_baked_CO.paa",
			"dz\gear\food\data\pepper_green_dried_CO.paa",
			"dz\gear\food\data\pepper_green_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\pepper_green_raw.rvmat",
			"dz\gear\food\data\pepper_green_boiled.rvmat",
			"dz\gear\food\data\pepper_green_baked.rvmat",
			"dz\gear\food\data\pepper_green_dried.rvmat",
			"dz\gear\food\data\pepper_green_burnt.rvmat",
			"dz\gear\food\data\pepper_green_rotten.rvmat"
		};
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
		class Trapping
		{
			baitTypes[]={3};
			baitTypeChances[]={0.69999999};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,100,33,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,50,13,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,250,20,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,200,53,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={1,200,7,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,100,0,1,0,16,1,3};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Zucchini: Edible_Base
	{
		scope=2;
		displayName="$STR_Zucchini0";
		descriptionShort="$STR_Zucchini1";
		model="\dz\gear\food\zucchini.p3d";
		debug_ItemCategory=6;
		rotationFlags=12;
		weight=0;
		stackedUnit="g";
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		quantityBar=1;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1.5;
		itemSize[]={1,3};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait",
			"Trap_Bait_2"
		};
		containsSeedsType="Cultivation_ZucchiniSeeds";
		containsSeedsQuantity="15";
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\zucchini_raw_CO.paa",
			"dz\gear\food\data\zucchini_baked_CO.paa",
			"dz\gear\food\data\zucchini_baked_CO.paa",
			"dz\gear\food\data\zucchini_dried_CO.paa",
			"dz\gear\food\data\zucchini_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\zucchini_raw.rvmat",
			"dz\gear\food\data\zucchini_boiled.rvmat",
			"dz\gear\food\data\zucchini_baked.rvmat",
			"dz\gear\food\data\zucchini_dried.rvmat",
			"dz\gear\food\data\zucchini_burnt.rvmat",
			"dz\gear\food\data\zucchini_rotten.rvmat"
		};
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
		class Trapping
		{
			baitTypes[]={3};
			baitTypeChances[]={0.75};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,125,25,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,10,1,0,16,1,8};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,250,15,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,200,40,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={1,200,5,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,125,0,1,0,16,1,3};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Pumpkin: Edible_Base
	{
		scope=2;
		displayName="$STR_Pumpkin0";
		descriptionShort="$STR_Pumpkin1";
		model="\dz\gear\food\Pumpkin_fresh.p3d";
		debug_ItemCategory=6;
		weight=0;
		itemSize[]={2,2};
		stackedUnit="g";
		varQuantityInit=2300;
		varQuantityMin=0;
		varQuantityMax=2300;
		quantityBar=1;
		varTemperatureFreezeTime=7920;
		varTemperatureThawTime=7920;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=2;
		absorbency=0.2;
		inventorySlot[]=
		{
			"Ingredient"
		};
		containsSeedsType="Cultivation_PumpkinSeeds";
		containsSeedsQuantity="20";
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_rotten"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\pumpkin_fresh_CO.paa",
			"dz\gear\food\data\pumpkin_rotten_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\pumpkin_fresh.rvmat",
			"dz\gear\food\data\pumpkin_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,20,20,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={2,15,8,1,0,16};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class SlicedPumpkin: Edible_Base
	{
		scope=2;
		displayName="$STR_SlicedPumpkin0";
		descriptionShort="$STR_SlicedPumpkin1";
		model="\dz\gear\food\pumpkin_sliced.p3d";
		debug_ItemCategory=6;
		rotationFlags=2;
		weight=0;
		itemSize[]={2,2};
		stackedUnit="g";
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
		quantityBar=1;
		varTemperatureFreezeTime=2640;
		varTemperatureThawTime=2640;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=2;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait",
			"Trap_Bait_2"
		};
		containsSeedsType="";
		containsSeedsQuantity="0";
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_baked",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\pumpkin_sliced_raw_CO.paa",
			"dz\gear\food\data\pumpkin_sliced_baked_CO.paa",
			"dz\gear\food\data\pumpkin_sliced_baked_CO.paa",
			"dz\gear\food\data\pumpkin_sliced_dried_CO.paa",
			"dz\gear\food\data\pumpkin_sliced_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\pumpkin_sliced_raw.rvmat",
			"dz\gear\food\data\pumpkin_sliced_boiled.rvmat",
			"dz\gear\food\data\pumpkin_sliced_baked.rvmat",
			"dz\gear\food\data\pumpkin_sliced_dried.rvmat",
			"dz\gear\food\data\pumpkin_sliced_burnt.rvmat",
			"dz\gear\food\data\pumpkin_sliced_rotten.rvmat"
		};
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
		class Trapping
		{
			baitTypes[]={3};
			baitTypeChances[]={0.60000002};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,75,20,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,50,8,1,0,16,1,8};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,150,12,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={1,2,2};
					nutrition_properties[]={1,125,32,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={2,3,3};
					nutrition_properties[]={1,125,4,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={2,4,4};
					nutrition_properties[]={5,75,0,1,0,16,1,3};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Potato: Edible_Base
	{
		scope=2;
		displayName="$STR_Potato0";
		descriptionShort="$STR_Potato1";
		model="\dz\gear\food\potato_prepared.p3d";
		debug_ItemCategory=6;
		rotationFlags=12;
		weight=0;
		itemSize[]={2,1};
		stackedUnit="g";
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		quantityBar=1;
		varTemperatureFreezeTime=2640;
		varTemperatureThawTime=2640;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		containsSeedsType="";
		containsSeedsQuantity="0";
		class Horticulture
		{
			PlantType="Plant_Potato";
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\potato_prepared_CO.paa",
			"dz\gear\food\Data\potato_baked_CO.paa",
			"#(argb,8,8,3)color(1,0.988235,0.835294,1.0,CO)",
			"dz\gear\food\Data\potato_prepared_CO.paa",
			"dz\gear\food\Data\potato_baked_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\potato_prepared.rvmat",
			"dz\gear\food\Data\potato_baked.rvmat",
			"dz\gear\food\data\potato_boiled.rvmat",
			"dz\gear\food\data\potato_dried.rvmat",
			"dz\gear\food\data\potato_burnt.rvmat",
			"dz\gear\food\data\potato_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,75,13,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,50,5,1,0,16,1,8};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,250,8,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,200,20,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,200,3,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,75,0,1,0,16,1,2};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Kiwi: Edible_Base
	{
		scope=2;
		displayName="$STR_Kiwi0";
		descriptionShort="$STR_Kiwi1";
		model="\dz\gear\food\kiwi_fresh.p3d";
		debug_ItemCategory=6;
		rotationFlags=12;
		itemSize[]={1,1};
		weight=0;
		VarQuantityInit=75;
		varQuantityMin=0;
		varQuantityMax=75;
		quantityBar=1;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=0.5;
		stackedUnit="g";
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC"
		};
		containsSeedsType="";
		containsSeedsQuantity="0";
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_rotten"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\kiwi_frash_CO.paa",
			"dz\gear\food\data\kiwi_rotten_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\kiwi_frash.rvmat",
			"dz\gear\food\data\kiwi_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,150,47,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={10,75,19,1,0,16};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class SambucusBerry: Edible_Base
	{
		scope=2;
		displayName="$STR_SambucusBerry0";
		descriptionShort="$STR_SambucusBerry1";
		model="\dz\gear\food\Sambucus_nigra.p3d";
		debug_ItemCategory=6;
		weight=0;
		itemSize[]={1,1};
		stackedUnit="g";
		absorbency=0.40000001;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		quantityBar=1;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=0.5;
		inventorySlot[]=
		{
			"Ingredient",
			"BerryB"
		};
		containsSeedsType="";
		containsSeedsQuantity="0";
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\sambucus_nigra_CO.paa",
			"dz\gear\food\data\sambucus_nigra_dried_CO.paa",
			"dz\gear\food\data\sambucus_nigra_dried_CO.paa",
			"dz\gear\food\data\sambucus_nigra_dried_CO.paa",
			"dz\gear\food\data\sambucus_nigra_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\sambucus_nigra_raw.rvmat",
			"dz\gear\food\data\sambucus_nigra_boiled.rvmat",
			"dz\gear\food\data\sambucus_nigra_baked.rvmat",
			"dz\gear\food\data\sambucus_nigra_dried.rvmat",
			"dz\gear\food\data\sambucus_nigra_burnt.rvmat",
			"dz\gear\food\data\sambucus_nigra_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,50,60,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,37.5,24,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,90,36,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,90,96,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,90,12,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,37.5,0,1,0};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class CaninaBerry: Edible_Base
	{
		scope=2;
		displayName="$STR_CaninaBerry0";
		descriptionShort="$STR_CaninaBerry1";
		model="\dz\gear\food\canina_raw.p3d";
		debug_ItemCategory=6;
		itemSize[]={1,1};
		weight=0;
		stackedUnit="g";
		absorbency=0.40000001;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		quantityBar=1;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=0.5;
		inventorySlot[]=
		{
			"Ingredient",
			"BerryR"
		};
		ontainsSeedsType="";
		containsSeedsQuantity="0";
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\canina_raw_CO.paa",
			"dz\gear\food\data\canina_baked_CO.paa",
			"dz\gear\food\data\canina_raw_CO.paa",
			"dz\gear\food\data\canina_dried_CO.paa",
			"dz\gear\food\data\canina_baked_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\canina_raw.rvmat",
			"dz\gear\food\data\canina_baked.rvmat",
			"dz\gear\food\data\canina_boiled.rvmat",
			"dz\gear\food\data\canina_dried.rvmat",
			"dz\gear\food\data\canina_burnt.rvmat",
			"dz\gear\food\data\canina_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,50,60,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,37.5,40,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,90,36,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,90,96,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,90,12,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,37.5,0,1,0};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Cannabis: Edible_Base
	{
		scope=2;
		displayName="$STR_Cannabis0";
		descriptionShort="$STR_Cannabis1";
		model="\dz\gear\food\cannabis_seedman.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		itemSize[]={1,1};
		stackedUnit="g";
		absorbency=0.2;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		quantityBar=1;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=0.5;
		inventorySlot[]=
		{
			"Ingredient"
		};
		containsSeedsType="";
		containsSeedsQuantity="0";
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\cannabis_seedman_raw_CO.paa",
			"dz\gear\food\data\cannabis_seedman_baked_CO.paa",
			"dz\gear\food\data\cannabis_seedman_raw_CO.paa",
			"dz\gear\food\data\cannabis_seedman_raw_CO.paa",
			"dz\gear\food\data\cannabis_seedman_baked_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\cannabis_seedman_raw.rvmat",
			"dz\gear\food\data\cannabis_seedman_baked.rvmat",
			"dz\gear\food\data\cannabis_seedman_raw.rvmat",
			"dz\gear\food\data\cannabis_seedman_dried.rvmat",
			"dz\gear\food\data\cannabis_seedman_burnt.rvmat",
			"dz\gear\food\data\cannabis_seedman_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,284,293,30,1};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={1,100,293,10,1,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={1,20,40,10,1};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions
			{
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class pickUpItem
				{
					soundSet="Zucchini_pickup_SoundSet";
					id=797;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class HumanSteakMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_HumanSteakMeat0";
		descriptionShort="$STR_HumanSteakMeat1";
		model="\dz\gear\food\human_meat.p3d";
		debug_ItemCategory=6;
		weight=0;
		weightPerQuantityUnit=2.5;
		interactionWeight=1;
		quantityBar=1;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1.5;
		itemSize[]={1,3};
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={7,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						25
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={4,200,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={4,150,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={5,150,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={7,50,0,1,0,16,1,9};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.25};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class GoatSteakMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_GoatSteakMeat0";
		descriptionShort="$STR_GoatSteakMeat1";
		model="\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		weightPerQuantityUnit=3;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=2508;
		varTemperatureThawTime=2508;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		quantityBar=1;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						25
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,250,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,200,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,200,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16,1,9};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.69999999};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class MouflonSteakMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_MouflonSteakMeat0";
		descriptionShort="$STR_MouflonSteakMeat1";
		model="\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		weightPerQuantityUnit=2.3;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		varQuantityInit=230;
		varQuantityMin=0;
		varQuantityMax=230;
		quantityBar=1;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={4.5,544,40,236,1,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						4,
						250,
						16,
						35,
						1,
						"4 + 		  16"
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={3.5,537,24,129,1};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={3,537,64,129,1};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1.5,390,8,180,1};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={4,250,0,50,1,16};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class BoarSteakMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_BoarSteakMeat0";
		descriptionShort="$STR_BoarSteakMeat1";
		model="\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		weightPerQuantityUnit=2;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=3168;
		varTemperatureThawTime=3168;
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
		quantityBar=1;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						20
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,325,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,275,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,275,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16,1,7};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.75};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class PigSteakMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_PigSteakMeat0";
		descriptionShort="$STR_PigSteakMeat1";
		model="\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		weightPerQuantityUnit=2;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		quantityBar=1;
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						20
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,300,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,250,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,250,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16,1,7};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.75};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class DeerSteakMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_DeerSteakMeat0";
		descriptionShort="$STR_DeerSteakMeat1";
		model="\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		weightPerQuantityUnit=2;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		quantityBar=1;
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						20
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,350,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,300,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,300,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16,1,7};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.75};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class ReindeerSteakMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_ReindeerSteakMeat0";
		descriptionShort="$STR_ReindeerSteakMeat1";
		model="\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		weightPerQuantityUnit=2;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		quantityBar=1;
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						20
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,350,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,300,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,300,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16,1,7};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.75};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class WolfSteakMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_WolfSteakMeat0";
		descriptionShort="$STR_WolfSteakMeat1";
		model="\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		quantityBar=1;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						25
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,200,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,150,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,150,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16,1,9};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.25};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class BearSteakMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_BearSteakMeat0";
		descriptionShort="$STR_BearSteakMeat1";
		model="\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		weightPerQuantityUnit=1.3;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		quantityBar=1;
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=2;
		itemSize[]={2,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						20
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,400,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,350,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,350,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16,1,7};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.25};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class CowSteakMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_CowSteakMeat0";
		descriptionShort="$STR_CowSteakMeat1";
		model="\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		quantityBar=1;
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=2;
		itemSize[]={2,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						20
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,300,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,250,60,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={1,250,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16,1,7};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.75};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class SheepSteakMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_SheepSteakMeat0";
		descriptionShort="$STR_SheepSteakMeat1";
		model="\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		weightPerQuantityUnit=1.66;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		quantityBar=1;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						23
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,250,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,200,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,200,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16,1,8};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.75};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class FoxSteakMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_FoxSteakMeat0";
		descriptionShort="$STR_FoxSteakMeat1";
		model="\dz\gear\food\meat_steak.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		quantityBar=1;
		varQuantityInit=130;
		varQuantityMin=0;
		varQuantityMax=130;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_steak_raw_CO.paa",
			"dz\gear\food\data\meat_steak_baked_CO.paa",
			"dz\gear\food\data\meat_steak_boiled_co.paa",
			"dz\gear\food\data\meat_steak_dried_CO.paa",
			"dz\gear\food\data\meat_steak_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_steak_raw.rvmat",
			"dz\gear\food\data\meat_steak_baked.rvmat",
			"dz\gear\food\data\meat_steak_boiled.rvmat",
			"dz\gear\food\data\meat_steak_dried.rvmat",
			"dz\gear\food\data\meat_steak_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={4.5,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						25
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,200,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,150,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,150,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16,1,7};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.1};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class ChickenBreastMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_ChickenBreastMeat0";
		descriptionShort="$STR_ChickenBreastMeat1";
		model="\dz\gear\food\meat_breast.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		quantityBar=1;
		varQuantityInit=125;
		varQuantityMin=0;
		varQuantityMax=125;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_breast_raw_CO.paa",
			"dz\gear\food\data\meat_breast_baked_CO.paa",
			"dz\gear\food\data\meat_breast_baked_CO.paa",
			"dz\gear\food\data\meat_breast_dried_CO.paa",
			"dz\gear\food\data\meat_breast_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_breast_raw.rvmat",
			"dz\gear\food\data\meat_breast_baked.rvmat",
			"dz\gear\food\data\meat_breast_boiled.rvmat",
			"dz\gear\food\data\meat_breast_dried.rvmat",
			"dz\gear\food\data\meat_breast_burnt.rvmat",
			"dz\gear\food\data\meat_breast_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,50,40,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						25,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						25
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,200,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,150,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,150,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,50,0,1,0,16,1,8};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.69999999};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class RabbitLegMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_RabbitLegMeat0";
		descriptionShort="$STR_RabbitLegMeat1";
		model="\dz\gear\food\meat_leg.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=100;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		quantityBar=1;
		varQuantityInit=250;
		varQuantityMin=0;
		varQuantityMax=250;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\meat_leg_raw_CO.paa",
			"dz\gear\food\data\meat_leg_baked_CO.paa",
			"dz\gear\food\data\meat_leg_baked_CO.paa",
			"dz\gear\food\data\meat_leg_dried_CO.paa",
			"dz\gear\food\data\meat_leg_burned_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\meat_leg_raw.rvmat",
			"dz\gear\food\data\meat_leg_baked.rvmat",
			"dz\gear\food\data\meat_leg_boiled.rvmat",
			"dz\gear\food\data\meat_leg_dried.rvmat",
			"dz\gear\food\data\meat_leg_burnt.rvmat",
			"dz\gear\food\data\meat_leg_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,30,24,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						15,
						10,
						1,
						0,
						"4 + 		  16",
						1,
						20
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,150,14,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,100,38,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,100,5,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,30,0,1,0,16,1,7};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.69999999};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class CarpFilletMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_CarpFilletMeat0";
		descriptionShort="$STR_CarpFilletMeat1";
		model="\dz\gear\food\carp_fillet.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		interactionWeight=1;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=3168;
		varTemperatureThawTime=3168;
		quantityBar=1;
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1.5;
		itemSize[]={3,1};
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\carp_fillet_raw_CO.paa",
			"dz\gear\food\data\carp_fillet_baked_CO.paa",
			"dz\gear\food\data\carp_fillet_boiled_CO.paa",
			"dz\gear\food\data\carp_fillet_dried_CO.paa",
			"dz\gear\food\data\carp_fillet_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\carp_fillet_raw.rvmat",
			"dz\gear\food\data\carp_fillet_baked.rvmat",
			"dz\gear\food\data\carp_fillet_boiled.rvmat",
			"dz\gear\food\data\carp_fillet_dried.rvmat",
			"dz\gear\food\data\carp_fillet_burnt.rvmat",
			"dz\gear\food\data\carp_fillet_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,30,40,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						15,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						15
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,150,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,130,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,115,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,30,0,1,0,16,1,3};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.75};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class MackerelFilletMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_MackerelFilletMeat0";
		descriptionShort="$STR_MackerelFilletMeat1";
		model="\dz\gear\food\mackerel_fillet.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		weightPerQuantityUnit=0.75;
		interactionWeight=1;
		quantityBar=1;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1.5;
		itemSize[]={3,1};
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mackerel_fillet_raw_CO.paa",
			"dz\gear\food\data\mackerel_fillet_baked_CO.paa",
			"dz\gear\food\data\mackerel_fillet_boiled_CO.paa",
			"dz\gear\food\data\mackerel_fillet_dried_CO.paa",
			"dz\gear\food\data\mackerel_fillet_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mackerel_fillet_raw.rvmat",
			"dz\gear\food\data\mackerel_fillet_baked.rvmat",
			"dz\gear\food\data\mackerel_fillet_boiled.rvmat",
			"dz\gear\food\data\mackerel_fillet_dried.rvmat",
			"dz\gear\food\data\mackerel_fillet_burnt.rvmat",
			"dz\gear\food\data\mackerel_fillet_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,20,40,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						10,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						15
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,200,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,170,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,160,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,30,0,1,0,16,1,3};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.75};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class WalleyePollockFilletMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_WalleyePollockFilletMeat0";
		descriptionShort="$STR_WalleyePollockFilletMeat1";
		model="\dz\gear\food\walleye_pollock_fillet.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		weightPerQuantityUnit=0.69999999;
		interactionWeight=1;
		quantityBar=1;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1.5;
		itemSize[]={3,1};
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\walleyepollock_fillet_raw_CO.paa",
			"dz\gear\food\data\walleyepollock_fillet_baked_CO.paa",
			"dz\gear\food\data\walleyepollock_fillet_boiled_CO.paa",
			"dz\gear\food\data\walleyepollock_fillet_dried_CO.paa",
			"dz\gear\food\data\walleyepollock_fillet_burnt_CO.paa",
			"dz\gear\food\data\walleyepollock_fillet_rotten_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\walleyepollock_fillet_raw.rvmat",
			"dz\gear\food\data\walleyepollock_fillet_baked.rvmat",
			"dz\gear\food\data\walleyepollock_fillet_boiled.rvmat",
			"dz\gear\food\data\walleyepollock_fillet_dried.rvmat",
			"dz\gear\food\data\walleyepollock_fillet_burnt.rvmat",
			"dz\gear\food\data\walleyepollock_fillet_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,20,40,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={0,5,5};
					nutrition_properties[]=
					{
						10,
						10,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						15
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,150,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,0};
					nutrition_properties[]={1,130,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,115,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,30,0,1,0,16,1,3};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.75};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class SteelheadTroutFilletMeat: Edible_Base
	{
		scope=2;
		displayName="$STR_SteelheadTroutFilletMeat0";
		descriptionShort="$STR_SteelheadTroutFilletMeat1";
		model="\dz\gear\food\steelhead_trout_fillet.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		weightPerQuantityUnit=2.4000001;
		interactionWeight=1;
		quantityBar=1;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1.5;
		itemSize[]={3,1};
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\steelheadtrout_fillet_raw_CO.paa",
			"dz\gear\food\data\steelheadtrout_fillet_baked_CO.paa",
			"dz\gear\food\data\steelheadtrout_fillet_boiled_CO.paa",
			"dz\gear\food\data\steelheadtrout_fillet_dried_CO.paa",
			"dz\gear\food\data\steelheadtrout_fillet_burnt_CO.paa",
			"dz\gear\food\data\steelheadtrout_fillet_rotten_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\steelheadtrout_fillet_raw.rvmat",
			"dz\gear\food\data\steelheadtrout_fillet_baked.rvmat",
			"dz\gear\food\data\steelheadtrout_fillet_boiled.rvmat",
			"dz\gear\food\data\steelheadtrout_fillet_dried.rvmat",
			"dz\gear\food\data\steelheadtrout_fillet_burnt.rvmat",
			"dz\gear\food\data\steelheadtrout_fillet_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,30,40,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={0,5,5};
					nutrition_properties[]=
					{
						10,
						15,
						16,
						1,
						0,
						"4 + 		  16",
						1,
						15
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,220,24,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,180,64,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,160,8,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,40,0,1,0,16,1,3};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={2};
			baitTypeChances[]={0.75};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class RedCaviar: Edible_Base
	{
		scope=2;
		displayName="$STR_RedCaviar0";
		descriptionShort="$STR_RedCaviar1";
		model="\dz\gear\food\red_caviar.p3d";
		debug_ItemCategory=6;
		itemSize[]={1,1};
		weight=300;
		stackedUnit="g";
		absorbency=0.40000001;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=200;
		quantityBar=1;
		varTemperatureMax=36;
		varTemperatureFreezeTime=1056;
		varTemperatureThawTime=1056;
		temperaturePerQuantityWeight=0.5;
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\red_caviar_raw_CO.paa",
			"dz\gear\food\data\red_caviar_rotten_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\red_caviar_raw.rvmat",
			"dz\gear\food\data\red_caviar_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,80,20,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,37.5,8,1,0,16,1,25};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Lard: Edible_Base
	{
		scope=2;
		displayName="$STR_Lard0";
		descriptionShort="$STR_Lard1";
		model="\dz\gear\food\lard.p3d";
		debug_ItemCategory=6;
		rotationFlags=34;
		weight=0;
		interactionWeight=1;
		itemSize[]={2,2};
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		varQuantityInit=200;
		varQuantityMin=0;
		varQuantityMax=200;
		quantityBar=1;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=2;
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\lard_raw_CO.paa",
			"dz\gear\food\data\lard_baked_CO.paa",
			"dz\gear\food\data\lard_boiled_CO.paa",
			"dz\gear\food\data\lard_dried_CO.paa",
			"dz\gear\food\data\lard_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\lard_raw.rvmat",
			"dz\gear\food\data\lard_baked.rvmat",
			"dz\gear\food\data\lard_boiled.rvmat",
			"dz\gear\food\data\lard_dried.rvmat",
			"dz\gear\food\data\lard_burnt.rvmat",
			"dz\gear\food\data\meat_steak_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={7,100,50,1,0,4};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						50,
						20,
						1,
						0,
						"4 + 		  16",
						1,
						25
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={4,300,30,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={4,250,80,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={5,250,10,1,0};
					cooking_properties[]={70,120,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={7,100,0,1,0,16,1,9};
					cooking_properties[]={100,150};
				};
			};
			class FoodStageTransitions: MeatStageTransitions
			{
				class Baked
				{
					class ToRotten
					{
						transition_to=6;
						cooking_method=4;
					};
				};
				class Dried
				{
					class ToBaked
					{
						transition_to=2;
						cooking_method=1;
					};
					class ToBoiled
					{
						transition_to=3;
						cooking_method=2;
					};
				};
			};
		};
		class NoiseImpact
		{
			strength=600;
			type="sound";
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Bitterlings: Edible_Base
	{
		scope=2;
		displayName="$STR_Bitterlings0";
		descriptionShort="$STR_Bitterlings1";
		model="\dz\gear\food\Bitterlings.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=150;
		weightPerQuantityUnit=1;
		interactionWeight=1;
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		varTemperatureFreezeTime=5280;
		varTemperatureThawTime=5280;
		varTemperatureInit=10;
		temperaturePerQuantityWeight=1;
		varTemperatureMax=110;
		quantityBar=1;
		varQuantityInit=500;
		varQuantityMin=0;
		varQuantityMax=500;
		stackedUnit="g";
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
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		inventorySlot[]=
		{
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\bitterlings_raw_co.paa",
			"dz\gear\food\data\bitterlings_baked_co.paa",
			"dz\gear\food\data\bitterlings_boiled_co.paa",
			"dz\gear\food\data\bitterlings_dried_co.paa",
			"dz\gear\food\data\bitterlings_burnt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\bitterlings_raw.rvmat",
			"dz\gear\food\data\bitterlings_baked.rvmat",
			"dz\gear\food\data\bitterlings_boiled.rvmat",
			"dz\gear\food\data\bitterlings_dried.rvmat",
			"dz\gear\food\data\bitterlings_burnt.rvmat",
			"dz\gear\food\data\bitterlings_rotten.rvmat"
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,10,20,1,0,16,1,8};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]=
					{
						10,
						5,
						8,
						1,
						0,
						"4 + 		  16",
						1,
						16
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,50,12,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,40,32,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,40,4,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,10,0,1,0,16,1,3};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: AnimalCorpsesStageTransitions
			{
			};
		};
		soundImpactType="organic";
		class Skinning
		{
			class BloodInfectionSettings
			{
				class Salmonella
				{
					chance=0.0099999998;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Shrimp: Edible_Base
	{
		scope=2;
		displayName="$STR_Shrimp0";
		descriptionShort="$STR_Shrimp1";
		model="\dz\gear\food\shrimp.p3d";
		debug_ItemCategory=6;
		itemSize[]={2,1};
		weight=1;
		weightPerQuantityUnit=1;
		interactionWeight=1;
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=2376;
		varTemperatureThawTime=2376;
		varTemperatureInit=10;
		temperaturePerQuantityWeight=1;
		varTemperatureMax=110;
		quantityBar=1;
		varQuantityInit=149;
		varQuantityMin=0;
		varQuantityMax=149;
		stackedUnit="g";
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
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		inventorySlot[]=
		{
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\shrimp_raw_co.paa",
			"dz\gear\food\data\shrimp_baked_co.paa",
			"dz\gear\food\data\shrimp_boiled_co.paa",
			"dz\gear\food\data\shrimp_dried_co.paa",
			"dz\gear\food\data\shrimp_burnt_co.paa",
			"dz\gear\food\data\shrimp_rotten_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\shrimp_raw.rvmat",
			"dz\gear\food\data\shrimp_baked.rvmat",
			"dz\gear\food\data\shrimp_boiled.rvmat",
			"dz\gear\food\data\shrimp_dried.rvmat",
			"dz\gear\food\data\shrimp_burnt.rvmat",
			"dz\gear\food\data\shrimp_rotten.rvmat"
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,35,70,1,0,16,1,16};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={0,5,5};
					nutrition_properties[]=
					{
						10,
						20,
						30,
						1,
						0,
						"4 + 		  16",
						1,
						25
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={2,170,40,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={2,140,110,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={3,140,15,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,35,0,1,0,16,1,6};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: AnimalCorpsesStageTransitions
			{
			};
		};
		class Skinning
		{
			class BloodInfectionSettings
			{
				class Salmonella
				{
					chance=0.0099999998;
				};
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Carp: Edible_Base
	{
		scope=2;
		displayName="$STR_Carp0";
		descriptionShort="$STR_Carp1";
		model="\dz\gear\food\carp_live.p3d";
		debug_ItemCategory=6;
		rotationFlags=17;
		itemSize[]={3,2};
		varTemperatureFreezePoint=0;
		varTemperatureThawPoint=0;
		varTemperatureFreezeTime=6600;
		varTemperatureThawTime=6600;
		varTemperatureInit=10;
		temperaturePerQuantityWeight=3;
		varTemperatureMax=110;
		weight=300;
		weightPerQuantityUnit=2;
		stackedUnit="g";
		quantityBar=1;
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		isMeleeWeapon=1;
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
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		inventorySlot[]=
		{
			"TrapPrey_1"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\carp_live_co.paa",
			"dz\gear\food\data\carp_live_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\carp_live.rvmat",
			"dz\gear\food\data\carp_live.rvmat"
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,20,60,70,1};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,25,1,0};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		class Skinning
		{
			class BloodInfectionSettings
			{
				class Salmonella
				{
					chance=0.0099999998;
				};
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Sardines: Edible_Base
	{
		scope=2;
		displayName="$STR_Sardines0";
		descriptionShort="$STR_Sardines1";
		model="\dz\gear\food\sardines_live.p3d";
		debug_ItemCategory=6;
		inventorySlot[]=
		{
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		itemSize[]={2,1};
		weight=150;
		weightPerQuantityUnit=1.5;
		interactionWeight=1;
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=6600;
		varTemperatureThawTime=6600;
		varTemperatureInit=10;
		temperaturePerQuantityWeight=1;
		varTemperatureMax=110;
		quantityBar=1;
		varQuantityInit=400;
		varQuantityMin=0;
		varQuantityMax=400;
		stackedUnit="g";
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\sardines_raw_CO.paa",
			"dz\gear\food\data\sardines_baked_CO.paa",
			"dz\gear\food\data\sardines_boiled_CO.paa",
			"dz\gear\food\data\sardines_dried_CO.paa",
			"dz\gear\food\data\sardines_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\sardines_raw.rvmat",
			"dz\gear\food\data\sardines_baked.rvmat",
			"dz\gear\food\data\sardines_boiled.rvmat",
			"dz\gear\food\data\sardines_dried.rvmat",
			"dz\gear\food\data\sardines_burnt.rvmat",
			"dz\gear\food\data\sardines_rotten.rvmat"
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
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={5,20,20,1,0,16,1,8};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={0,-1,5};
					nutrition_properties[]=
					{
						10,
						10,
						8,
						1,
						0,
						"4 + 		  16",
						1,
						16
					};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1,100,12,1,0};
					cooking_properties[]={70,45};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1,80,32,1,0};
					cooking_properties[]={105,55};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={2,80,4,1,0};
					cooking_properties[]={70,45,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={5,20,0,1,0,16,1,3};
					cooking_properties[]={100,30};
				};
			};
			class FoodStageTransitions: AnimalCorpsesStageTransitions
			{
			};
		};
		soundImpactType="organic";
		class Skinning
		{
			class BloodInfectionSettings
			{
				class Salmonella
				{
					chance=0.0099999998;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Mackerel: Edible_Base
	{
		scope=2;
		displayName="$STR_Mackerel0";
		descriptionShort="$STR_Mackerel1";
		model="\dz\gear\food\mackerel_live.p3d";
		debug_ItemCategory=6;
		rotationFlags=17;
		weight=300;
		weightPerQuantityUnit=1;
		itemSize[]={4,2};
		stackedUnit="g";
		quantityBar=1;
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=7920;
		varTemperatureThawTime=7920;
		varTemperatureInit=10;
		temperaturePerQuantityWeight=4;
		varTemperatureMax=110;
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		isMeleeWeapon=1;
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
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		inventorySlot[]=
		{
			"TrapPrey_1"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mackerel_live_co.paa",
			"dz\gear\food\data\mackerel_live_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mackerel_live.rvmat",
			"dz\gear\food\data\mackerel_live.rvmat"
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,25,1,0};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		soundImpactType="organic";
		class Skinning
		{
			class BloodInfectionSettings
			{
				class Salmonella
				{
					chance=0.0099999998;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class WalleyePollock: Edible_Base
	{
		scope=2;
		displayName="$STR_WalleyePollock0";
		descriptionShort="$STR_WalleyePollock1";
		model="\dz\gear\food\walleye_pollock_live.p3d";
		debug_ItemCategory=6;
		rotationFlags=17;
		weight=0;
		weightPerQuantityUnit=1;
		itemSize[]={3,2};
		stackedUnit="g";
		quantityBar=1;
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=9900;
		varTemperatureThawTime=9900;
		varTemperatureInit=10;
		temperaturePerQuantityWeight=3;
		varTemperatureMax=110;
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		isMeleeWeapon=1;
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
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		inventorySlot[]=
		{
			"TrapPrey_1"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\WalleyePollock_live_co.paa",
			"dz\gear\food\data\WalleyePollock_live_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\walleyepollock_live.rvmat",
			"dz\gear\food\data\walleyepollock_live.rvmat"
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,25,1,0};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		soundImpactType="organic";
		class Skinning
		{
			class BloodInfectionSettings
			{
				class Salmonella
				{
					chance=0.0099999998;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class SteelheadTrout: Edible_Base
	{
		scope=2;
		displayName="$STR_SteelheadTrout0";
		descriptionShort="$STR_SteelheadTrout1";
		model="\dz\gear\food\steelhead_trout_live.p3d";
		debug_ItemCategory=6;
		rotationFlags=17;
		weight=0;
		weightPerQuantityUnit=3.5;
		itemSize[]={4,2};
		stackedUnit="g";
		quantityBar=1;
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=9900;
		varTemperatureThawTime=9900;
		varTemperatureInit=10;
		temperaturePerQuantityWeight=4;
		varTemperatureMax=110;
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		isMeleeWeapon=1;
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
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		inventorySlot[]=
		{
			"TrapPrey_1"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\steelheadtrout_live_co.paa",
			"dz\gear\food\data\steelheadtrout_live_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\steelheadtrout_live.rvmat",
			"dz\gear\food\data\steelheadtrout_live.rvmat"
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,69,172,70,1};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,25,1,0};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		class Skinning
		{
			class BloodInfectionSettings
			{
				class Salmonella
				{
					chance=0.0099999998;
				};
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class Worm: Edible_Base
	{
		scope=2;
		displayName="$STR_Worm0";
		descriptionShort="$STR_Worm1";
		model="\dz\gear\food\bait_worm.p3d";
		rotationFlags=17;
		weight=21;
		stackedUnit="";
		varTemperatureMax=0;
		varTemperatureMin=0;
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varStackMax=5;
		canBeSplit=1;
		quantityBar=0;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=5;
		inventorySlot[]=
		{
			"Trap_Bait",
			"Bait",
			"Trap_Bait_1",
			"Trap_Bait_2"
		};
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
								"DZ\gear\food\data\"""".rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\food\data\"""".rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\food\data\""""_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\food\data\""""_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\food\data\""""_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\bait_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\bait.rvmat"
		};
		class AnimationSources: FoodAnimationSources
		{
			class Bait_Hooked
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Bait_Unhooked
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,80,8,42,1};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		soundImpactType="organic";
		class Fishing
		{
			signalCycleTargetAdjustment=-12;
			signalCycleTargetEndAdjustment=-20;
			signalDurationMin=1.2;
			signalDurationMax=1.6;
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
			hookLossChanceMod=0;
			baitLossChanceMod=0;
		};
		class Trapping
		{
			baitTypes[]={1,2};
			baitTypeChances[]={0.75,0.050000001};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class DeadChicken_ColorBase: Edible_Base
	{
		scope=0;
		model="\dz\gear\food\gallus_gallus_female_dead.p3d";
		inventorySlot[]=
		{
			"TrapPrey_1"
		};
		weight=1500;
		weightPerQuantityUnit=1;
		itemSize[]={3,3};
		stackedUnit="g";
		quantityBar=1;
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		temperaturePerQuantityWeight=4.5;
		varTemperatureMax=110;
		varTemperatureInit=40;
		varQuantityInit=1000;
		varQuantityMin=0;
		varQuantityMax=1000;
		isMeleeWeapon=1;
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
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="ChickenBreastMeat";
				count=2;
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedFeathers
			{
				item="ChickenFeather";
				count=10;
				quantityMinMaxCoef[]={0.5,1};
				transferToolDamageCoef=1;
			};
			class ObtainedGuts
			{
				item="SmallGuts";
				count=0;
				quantityMinMaxCoef[]={0.5,0.80000001};
			};
			class ObtainedBones
			{
				item="Bone";
				count=1;
				quantityMinMaxCoef[]={0.2,0.30000001};
				transferToolDamageCoef=1;
			};
			class BloodInfectionSettings
			{
				class Salmonella
				{
					chance=0.75;
				};
			};
		};
		hiddenSelections[]=
		{
			"Camo",
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mackerel_live_co.paa",
			"dz\gear\food\data\mackerel_live_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mackerel_live.rvmat",
			"dz\gear\food\data\mackerel_live.rvmat"
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={1,0,0};
					nutrition_properties[]={7,50,50,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,25,1,0};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class DeadRooster: DeadChicken_ColorBase
	{
		scope=2;
		displayName="$STR_CfgVehicles_Animal_GallusGallusDomesticus0";
		descriptionShort="$STR_CfgVehicles_Animal_GallusGallusDomesticus1";
		model="\dz\gear\food\gallus_gallus_male_dead.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\animals\gallus_gallus_domesticus_feminam\data\hen_brown_co.paa"
		};
	};
	class DeadChicken_White: DeadChicken_ColorBase
	{
		scope=2;
		displayName="$STR_cfgvehicles_animal_gallusgallusdomesticusf0";
		descriptionShort="$STR_cfgvehicles_animal_gallusgallusdomesticusf1";
		model="\dz\gear\food\gallus_gallus_female_dead.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\animals\gallus_gallus_domesticus_feminam\data\hen_white_co.paa"
		};
	};
	class DeadChicken_Spotted: DeadChicken_ColorBase
	{
		scope=2;
		displayName="$STR_cfgvehicles_animal_gallusgallusdomesticusf0";
		descriptionShort="$STR_cfgvehicles_animal_gallusgallusdomesticusf1";
		model="\dz\gear\food\gallus_gallus_female_dead.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\animals\gallus_gallus_domesticus_feminam\data\hen_spotted_co.paa"
		};
	};
	class DeadChicken_Brown: DeadChicken_ColorBase
	{
		scope=2;
		displayName="$STR_cfgvehicles_animal_gallusgallusdomesticusf0";
		descriptionShort="$STR_cfgvehicles_animal_gallusgallusdomesticusf1";
		model="\dz\gear\food\gallus_gallus_female_dead.p3d";
		hiddenSelectionsTextures[]=
		{
			"dz\animals\gallus_gallus_domesticus_feminam\data\hen_brown_co.paa"
		};
	};
	class DeadRabbit: Edible_Base
	{
		scope=2;
		displayName="$STR_Rabbit0";
		descriptionShort="$STR_Rabbit1";
		model="\dz\gear\food\lepus_europaeus_dead.p3d";
		inventorySlot[]=
		{
			"TrapPrey_1"
		};
		weight=1000;
		weightPerQuantityUnit=1;
		itemSize[]={3,4};
		stackedUnit="g";
		quantityBar=1;
		varTemperatureFreezePoint=-2;
		varTemperatureThawPoint=-2;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		varTemperatureInit=38;
		temperaturePerQuantityWeight=6;
		varTemperatureMax=110;
		varQuantityInit=2000;
		varQuantityMin=0;
		varQuantityMax=2000;
		isMeleeWeapon=1;
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
				ammo="MeleeSoft";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeSoft_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeSoft_Heavy";
				range=2.8;
			};
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mackerel_live_co.paa",
			"dz\gear\food\data\mackerel_live_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mackerel_live.rvmat",
			"dz\gear\food\data\mackerel_live.rvmat"
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={7,50,50,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,25,1,0};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		soundImpactType="organic";
		class Skinning
		{
			class BloodInfectionSettings
			{
				class Salmonella
				{
					chance=0.40000001;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class DeadFox: Edible_Base
	{
		scope=2;
		displayName="$STR_cfgvehicles_animal_vulpesvulpes0";
		descriptionShort="$STR_cfgvehicles_animal_vulpesvulpes1";
		model="\dz\gear\food\vulpes_vulpes_dead.p3d";
		inventorySlot[]=
		{
			"TrapPrey_1"
		};
		weight=1000;
		weightPerQuantityUnit=2;
		itemSize[]={6,3};
		stackedUnit="g";
		quantityBar=1;
		varTemperatureFreezePoint=-1;
		varTemperatureThawPoint=-1;
		varTemperatureFreezeTime=3960;
		varTemperatureThawTime=3960;
		varTemperatureInit=38;
		temperaturePerQuantityWeight=9;
		varTemperatureMax=110;
		varQuantityInit=3000;
		varQuantityMin=0;
		varQuantityMax=3000;
		isMeleeWeapon=1;
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
				class Blood
				{
					hitpoints=5000;
				};
				class Shock
				{
					hitpoints=100;
				};
			};
			class DamageZones
			{
				class Zone_Head
				{
					componentNames[]=
					{
						"Zone_Head"
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					fatalInjuryCoef=0.15000001;
					canBleed=0;
					class Health
					{
						hitpoints=30;
						transferToGlobalCoef=1;
					};
					class Blood: Health
					{
						hitpoints=0;
					};
					class Shock: Health
					{
						hitpoints=0;
					};
				};
				class Zone_Chest: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Chest"
					};
					transferToZonesNames[]=
					{
						"Zone_Head"
					};
					transferToZonesCoefs[]={0.15000001};
					fatalInjuryCoef=0.050000001;
					class Health: Health
					{
						hitpoints=40;
					};
				};
				class Zone_Legs: Zone_Head
				{
					componentNames[]=
					{
						"Zone_Legs",
						"Zone_Legs"
					};
					transferToZonesNames[]={};
					transferToZonesCoefs[]={};
					fatalInjuryCoef=0;
					class Health: Health
					{
						hitpoints=25;
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mackerel_live_co.paa",
			"dz\gear\food\data\mackerel_live_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mackerel_live.rvmat",
			"dz\gear\food\data\mackerel_live.rvmat"
		};
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={7,50,50,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={10,25,25,1,0};
					cooking_properties[]={0,0};
				};
			};
			class FoodStageTransitions: NotCookable
			{
			};
		};
		class Skinning
		{
			class BloodInfectionSettings
			{
				class Salmonella
				{
					chance=0.40000001;
				};
			};
		};
		soundImpactType="organic";
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class MushroomBase: Edible_Base
	{
		debug_ItemCategory=6;
		varQuantityInit=130;
		varQuantityMin=0;
		varQuantityMax=130;
		soundImpactType="organic";
	};
	class AgaricusMushroom: MushroomBase
	{
		scope=2;
		displayName="$STR_AgaricusMushroom0";
		descriptionShort="$STR_AgaricusMushroom1";
		model="\dz\gear\food\mushroom_agaricus.p3d";
		weight=0;
		itemSize[]={1,2};
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		stackedUnit="";
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mushroom_agaricus_raw_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_baked_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_baked_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_dried_CO.paa",
			"dz\gear\food\data\mushroom_agaricus_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mushroom_agaricus_raw.rvmat",
			"dz\gear\food\data\mushroom_agaricus_baked.rvmat",
			"dz\gear\food\data\mushroom_agaricus_boiled.rvmat",
			"dz\gear\food\data\mushroom_agaricus_dried.rvmat",
			"dz\gear\food\data\mushroom_agaricus_burnt.rvmat",
			"dz\gear\food\data\mushroom_agaricus_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,120,100,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,90,40,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,300,60,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,250,160,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,250,20,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,90,0,1,0};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={5};
			baitTypeChances[]={0.60000002};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.079999998,0.0099999998,0};
				orientation[]={100,65,0};
			};
			class DirectCookingB
			{
				position[]={0.039999999,0.0099999998,0};
				orientation[]={30,65,0};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.0099999998,0};
				orientation[]={140,65,0};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class AmanitaMushroom: MushroomBase
	{
		scope=2;
		displayName="$STR_AmanitaMushroom0";
		descriptionShort="$STR_AmanitaMushroom1";
		model="\dz\gear\food\mushroom_amanita.p3d";
		weight=0;
		itemSize[]={1,2};
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		stackedUnit="";
		inventorySlot[]=
		{
			"Ingredient"
		};
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_boiled"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mushroom_amanita_raw_CO.paa",
			"dz\gear\food\data\mushroom_amanita_boiled_CO.paa",
			"dz\gear\food\data\mushroom_amanita_baked_CO.paa",
			"dz\gear\food\data\mushroom_amanita_dried_CO.paa",
			"dz\gear\food\data\mushroom_amanita_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mushroom_amanita_raw.rvmat",
			"dz\gear\food\data\mushroom_amanita_baked.rvmat",
			"dz\gear\food\data\mushroom_amanita_boiled.rvmat",
			"dz\gear\food\data\mushroom_amanita_dried.rvmat",
			"dz\gear\food\data\mushroom_amanita_burnt.rvmat",
			"dz\gear\food\data\mushroom_amanita_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,120,150,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,90,40,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1.75,300,60,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={1,2,2};
					nutrition_properties[]={1.5,250,160,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,250,20,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={2,90,0,1,0};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={5};
			baitTypeChances[]={0.60000002};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class MacrolepiotaMushroom: MushroomBase
	{
		scope=2;
		displayName="$STR_MacrolepiotaMushroom0";
		descriptionShort="$STR_MacrolepiotaMushroom1";
		model="\dz\gear\food\mushroom_macrolepiota.p3d";
		weight=0;
		itemSize[]={1,2};
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		stackedUnit="";
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_baked",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mushroom_macrolepiota_raw_CO.paa",
			"dz\gear\food\data\mushroom_macrolepiota_baked_CO.paa",
			"dz\gear\food\data\mushroom_macrolepiota_baked_CO.paa",
			"dz\gear\food\data\mushroom_macrolepiota_dried_CO.paa",
			"dz\gear\food\data\mushroom_macrolepiota_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mushroom_macrolepiota_raw.rvmat",
			"dz\gear\food\data\mushroom_macrolepiota_baked.rvmat",
			"dz\gear\food\data\mushroom_macrolepiota_boiled.rvmat",
			"dz\gear\food\data\mushroom_macrolepiota_dried.rvmat",
			"dz\gear\food\data\mushroom_macrolepiota_burnt.rvmat",
			"dz\gear\food\data\mushroom_macrolepiota_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,120,100,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,90,40,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1.75,300,60,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={1,2,2};
					nutrition_properties[]={1.5,250,160,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={2,3,3};
					nutrition_properties[]={0.75,250,20,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={2,4,4};
					nutrition_properties[]={2,90,0,1,0,16,1,3};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={5};
			baitTypeChances[]={0.60000002};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.079999998,0.0099999998,0};
				orientation[]={100,70,0};
			};
			class DirectCookingB
			{
				position[]={0.079999998,0.0099999998,0.050000001};
				orientation[]={60,70,0};
			};
			class DirectCookingC
			{
				position[]={0.079999998,0.0099999998,0};
				orientation[]={140,70,0};
			};
		};
	};
	class LactariusMushroom: MushroomBase
	{
		scope=2;
		displayName="$STR_LactariusMushroom0";
		descriptionShort="$STR_LactariusMushroom1";
		model="\dz\gear\food\mushroom_lactarius.p3d";
		weight=0;
		itemSize[]={1,2};
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		stackedUnit="";
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mushroom_lactarius_raw_CO.paa",
			"dz\gear\food\data\mushroom_lactarius_baked_CO.paa",
			"dz\gear\food\data\mushroom_lactarius_baked_CO.paa",
			"dz\gear\food\data\mushroom_lactarius_dried_CO.paa",
			"dz\gear\food\data\mushroom_lactarius_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mushroom_lactarius_raw.rvmat",
			"dz\gear\food\data\mushroom_lactarius_baked.rvmat",
			"dz\gear\food\data\mushroom_lactarius_boiled.rvmat",
			"dz\gear\food\data\mushroom_lactarius_dried.rvmat",
			"dz\gear\food\data\mushroom_lactarius_burnt.rvmat",
			"dz\gear\food\data\mushroom_lactarius_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,120,100,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,90,40,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,300,60,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,250,160,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,250,20,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,90,0,1,0,16,1,3};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={5};
			baitTypeChances[]={0.60000002};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.079999998,0.0099999998,0};
				orientation[]={100,70,0};
			};
			class DirectCookingB
			{
				position[]={0.02,0.0099999998,0.050000001};
				orientation[]={60,70,0};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.0099999998,0};
				orientation[]={140,70,0};
			};
		};
	};
	class PsilocybeMushroom: MushroomBase
	{
		scope=2;
		displayName="$STR_PsilocybeMushroom0";
		descriptionShort="$STR_PsilocybeMushroom1";
		model="\dz\gear\food\Psilocybe_semilanceata.p3d";
		weight=0;
		itemSize[]={1,1};
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=0.5;
		stackedUnit="";
		inventorySlot[]=
		{
			"Ingredient"
		};
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\Psilocybe_semilanceata_CO.paa",
			"dz\gear\food\data\Psilocybe_semilanceata_dried_CO.paa",
			"dz\gear\food\data\Psilocybe_semilanceata_dried_CO.paa",
			"dz\gear\food\data\Psilocybe_semilanceata_dried_CO.paa",
			"dz\gear\food\data\Psilocybe_semilanceata_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\Psilocybe_semilanceata_raw.rvmat",
			"dz\gear\food\data\Psilocybe_semilanceata_baked.rvmat",
			"dz\gear\food\data\Psilocybe_semilanceata_boiled.rvmat",
			"dz\gear\food\data\Psilocybe_semilanceata_dried.rvmat",
			"dz\gear\food\data\Psilocybe_semilanceata_burnt.rvmat",
			"dz\gear\food\data\Psilocybe_semilanceata_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,120,60,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,90,24,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,300,36,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,250,96,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,250,12,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,90,0,1,0};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={5};
			baitTypeChances[]={0.60000002};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class AuriculariaMushroom: MushroomBase
	{
		scope=2;
		displayName="$STR_AuriculariaMushroom0";
		descriptionShort="$STR_AuriculariaMushroom1";
		model="\dz\gear\food\mushroom_auricularia.p3d";
		weight=0;
		itemSize[]={1,2};
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		rotationFlags=1;
		stackedUnit="";
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mushroom_auricularia_raw_CO.paa",
			"dz\gear\food\data\mushroom_auricularia_baked_CO.paa",
			"dz\gear\food\data\mushroom_auricularia_boiled_CO.paa",
			"dz\gear\food\data\mushroom_auricularia_dried_CO.paa",
			"dz\gear\food\data\mushroom_auricularia_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mushroom_auricularia_raw.rvmat",
			"dz\gear\food\data\mushroom_auricularia_baked.rvmat",
			"dz\gear\food\data\mushroom_auricularia_boiled.rvmat",
			"dz\gear\food\data\mushroom_auricularia_dried.rvmat",
			"dz\gear\food\data\mushroom_auricularia_burnt.rvmat",
			"dz\gear\food\data\mushroom_auricularia_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,120,100,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,90,40,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,300,60,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,250,160,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={0,3,3};
					nutrition_properties[]={0.75,250,20,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,90,0,1,0,16,1,3};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={5};
			baitTypeChances[]={0.60000002};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.079999998,0.07,0};
				orientation[]={100,100,0};
			};
			class DirectCookingB
			{
				position[]={0.02,0.07,0.050000001};
				orientation[]={60,100,0};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.07,0};
				orientation[]={140,100,0};
			};
		};
	};
	class BoletusMushroom: MushroomBase
	{
		scope=2;
		displayName="$STR_BoletusMushroom0";
		descriptionShort="$STR_BoletusMushroom1";
		model="\dz\gear\food\Mushroom_boletus.p3d";
		weight=0;
		itemSize[]={1,2};
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		stackedUnit="";
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mushroom_boletus_raw_CO.paa",
			"dz\gear\food\data\mushroom_boletus_baked_CO.paa",
			"dz\gear\food\data\mushroom_boletus_boiled_CO.paa",
			"dz\gear\food\data\mushroom_boletus_boiled_CO.paa",
			"dz\gear\food\data\mushroom_boletus_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mushroom_boletus_raw.rvmat",
			"dz\gear\food\data\mushroom_boletus_baked.rvmat",
			"dz\gear\food\data\mushroom_boletus_boiled.rvmat",
			"dz\gear\food\data\mushroom_boletus_dried.rvmat",
			"dz\gear\food\data\mushroom_boletus_burnt.rvmat",
			"dz\gear\food\data\mushroom_boletus_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,120,100,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,90,40,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,300,60,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,250,160,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,250,20,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={2,90,0,1,0,16,1,3};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={5};
			baitTypeChances[]={0.60000002};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.079999998,0.0099999998,0};
				orientation[]={100,70,0};
			};
			class DirectCookingB
			{
				position[]={0.02,0.0099999998,0.050000001};
				orientation[]={60,70,0};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.0099999998,0};
				orientation[]={140,70,0};
			};
		};
	};
	class PleurotusMushroom: MushroomBase
	{
		scope=2;
		displayName="$STR_PleurotusMushroom0";
		descriptionShort="$STR_PleurotusMushroom1";
		model="\dz\gear\food\mushroom_pleurotus.p3d";
		weight=0;
		itemSize[]={1,2};
		varTemperatureFreezePoint=-0.5;
		varTemperatureThawPoint=-0.5;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		rotationFlags=1;
		stackedUnit="";
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_boiled",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mushroom_pleurotus_raw_CO.paa",
			"dz\gear\food\data\mushroom_pleurotus_baked_CO.paa",
			"dz\gear\food\data\mushroom_pleurotus_baked_CO.paa",
			"dz\gear\food\data\mushroom_pleurotus_dried_CO.paa",
			"dz\gear\food\data\mushroom_pleurotus_burnt_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mushroom_pleurotus_raw.rvmat",
			"dz\gear\food\data\mushroom_pleurotus_baked.rvmat",
			"dz\gear\food\data\mushroom_pleurotus_boiled.rvmat",
			"dz\gear\food\data\mushroom_pleurotus_dried.rvmat",
			"dz\gear\food\data\mushroom_pleurotus_burnt.rvmat",
			"dz\gear\food\data\mushroom_pleurotus_rotten.rvmat"
		};
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,120,100,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,90,40,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1.75,300,60,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={1,2,2};
					nutrition_properties[]={1.5,250,160,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={2,3,3};
					nutrition_properties[]={0.75,250,20,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={2,90,0,1,0,16,1,3};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={5};
			baitTypeChances[]={0.60000002};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.079999998,0.017999999,0};
				orientation[]={100,-250,100};
			};
			class DirectCookingB
			{
				position[]={0.02,0.017999999,0.050000001};
				orientation[]={60,-250,100};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.017999999,0};
				orientation[]={140,-250,100};
			};
		};
	};
	class CraterellusMushroom: MushroomBase
	{
		scope=2;
		displayName="$STR_CraterellusMushroom0";
		descriptionShort="$STR_CraterellusMushroom1";
		model="\dz\gear\food\mushroom_craterellus.p3d";
		weight=0;
		itemSize[]={2,1};
		varTemperatureFreezePoint=-10;
		varTemperatureThawPoint=-10;
		varTemperatureFreezeTime=1980;
		varTemperatureThawTime=1980;
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		varTemperatureMax=110;
		temperaturePerQuantityWeight=1;
		rotationFlags=2;
		stackedUnit="";
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD",
			"Trap_Bait_2"
		};
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_boiled",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\gear\food\data\mushroom_craterellus_raw_CO.paa",
			"dz\gear\food\data\mushroom_craterellus_baked_CO.paa",
			"dz\gear\food\data\mushroom_craterellus_boiled_CO.paa",
			"dz\gear\food\data\mushroom_craterellus_dried_CO.paa",
			"dz\gear\food\data\mushroom_craterellus_burnt_CO.paa",
			"dz\gear\food\data\mushroom_craterellus_rotten_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dz\gear\food\data\mushroom_craterellus_raw.rvmat",
			"dz\gear\food\data\mushroom_craterellus_baked.rvmat",
			"dz\gear\food\data\mushroom_craterellus_boiled.rvmat",
			"dz\gear\food\data\mushroom_craterellus_dried.rvmat",
			"dz\gear\food\data\mushroom_craterellus_burnt.rvmat",
			"dz\gear\food\data\mushroom_craterellus_rotten.rvmat"
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
		class AnimationSources: FoodAnimationSources
		{
		};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,120,195,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,90,78,1,0,16,1,9};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={1,1,1};
					nutrition_properties[]={1.75,300,117,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={1,2,2};
					nutrition_properties[]={1.5,250,312,1,0};
					cooking_properties[]={105,45};
				};
				class Dried
				{
					visual_properties[]={2,3,3};
					nutrition_properties[]={0.75,250,39,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={1,4,4};
					nutrition_properties[]={2,90,0,1,0,16,1,3};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions
			{
			};
		};
		class Trapping
		{
			baitTypes[]={5};
			baitTypeChances[]={0.60000002};
			resultQuantityBaseMod=0;
			resultQuantityDispersionMin=0;
			resultQuantityDispersionMax=0;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
		class InventorySlotsOffsets
		{
			class DirectCookingA
			{
				position[]={0.029999999,0.0099999998,0};
				orientation[]={270,65,0};
			};
			class DirectCookingB
			{
				position[]={0.029999999,0.0099999998,0};
				orientation[]={250,65,0};
			};
			class DirectCookingC
			{
				position[]={0.059999999,0.0099999998,0};
				orientation[]={280,65,0};
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxybait_worm: ProxyAttachment
	{
		scope=2;
		inventorySlot[]=
		{
			"Bait"
		};
		model="\DZ\gear\food\bait_worm.p3d";
	};
};

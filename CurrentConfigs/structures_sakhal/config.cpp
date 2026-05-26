class CfgPatches
{
	class DZ_Structures_Sakhal
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Structures_Residential",
			"DZ_Structures_Bliss_Residential",
			"DZ_Structures_Specific",
			"DZ_Structures_Walls",
			"DZ_Structures_Bliss_Military",
			"DZ_Structures_Military"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_DryDock_End: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\harbour\DryDock_End.p3d";
	};
	class Land_DryDock_Middle: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\harbour\DryDock_Middle.p3d";
	};
	class Land_Pier_Concrete4_Ladders: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\harbour\Pier_Concrete4_Ladders.p3d";
	};
	class Land_Pier_Concrete5_Ladder: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\harbour\Pier_Concrete5_Ladder.p3d";
	};
	class Land_Pier_Wooden3_Ladder: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\harbour\Pier_Wooden3_Ladder.p3d";
	};
	class Land_Pier_Crane2_Base: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\harbour\Pier_Crane2_Base.p3d";
	};
	class Land_Pier_Crane2_Top: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\harbour\Pier_Crane2_Top.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_Pier_Crane_Submarine: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\harbour\Pier_Crane_Submarine.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door4
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors4"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
			};
		};
	};
	class Land_Pier_Floating_50m: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\harbour\Pier_Floating_50m.p3d";
	};
	class Land_Pier_Floating_Bridge: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\harbour\Pier_Floating_Bridge.p3d";
	};
	class Land_Buoy: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\harbour\Buoy.p3d";
		hiddenSelections[]=
		{
			"Glass"
		};
	};
	class Land_MooringBuoy: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\harbour\MooringBuoy.p3d";
		hiddenSelections[]=
		{
			"Glass"
		};
	};
	class StaticObj_Pier_Concrete4_16m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Concrete4_16m.p3d";
	};
	class StaticObj_Pier_Concrete4_16m_NoSup: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Concrete4_16m_NoSup.p3d";
	};
	class StaticObj_Pier_Concrete4_30deg: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Concrete4_30deg.p3d";
	};
	class StaticObj_Pier_Concrete4_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Concrete4_End.p3d";
	};
	class StaticObj_Pier_Concrete4_Steps: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Concrete4_Steps.p3d";
	};
	class StaticObj_Pier_Concrete5_20m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Concrete5_20m.p3d";
	};
	class StaticObj_Pier_Concrete5_Corner_Inner: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Concrete5_Corner_Inner.p3d";
	};
	class StaticObj_Pier_Concrete5_Corner_Outer: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Concrete5_Corner_Outer.p3d";
	};
	class StaticObj_Pier_Concrete5_T: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Concrete5_T.p3d";
	};
	class StaticObj_Pier_Crane2_Rails_4m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Crane2_Rails_4m.p3d";
	};
	class StaticObj_Pier_Crane2_Rails_4m_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Crane2_Rails_4m_End.p3d";
	};
	class StaticObj_Pier_Crane2_Rails_8m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Crane2_Rails_8m.p3d";
	};
	class StaticObj_Pier_Wooden3_30deg: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Wooden3_30deg.p3d";
	};
	class StaticObj_Pier_Wooden3_Barrels: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Wooden3_Barrels.p3d";
	};
	class StaticObj_Pier_Wooden3_16m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Wooden3_16m.p3d";
	};
	class StaticObj_Pier_Wooden3_Platform: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\Pier_Wooden3_Platform.p3d";
	};
	class StaticObj_MooringBuoy: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\harbour\MooringBuoy.p3d";
	};
	class Land_Misc_Through_Static_Frozen: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\misc\Misc_Through_Static_Frozen.p3d";
	};
	class Land_Misc_Through_Trailer_Frozen: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\misc\Misc_Through_Trailer_Frozen.p3d";
	};
	class Land_Misc_Pallet_Spawn: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\misc\Misc_Pallet_Spawn.p3d";
	};
	class Land_Misc_WoodenCrate_Spawn: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\misc\Misc_WoodenCrate_Spawn.p3d";
	};
	class StaticObj_Misc_CrabCages: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\misc\Misc_CrabCages.p3d";
	};
	class StaticObj_Misc_FishingGear1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\misc\Misc_FishingGear1.p3d";
	};
	class StaticObj_Misc_FishingGear2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\misc\Misc_FishingGear2.p3d";
	};
	class StaticObj_Misc_Walkover: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\misc\Misc_Walkover.p3d";
	};
	class StaticObj_Misc_StairBridge: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\misc\Misc_StairBridge.p3d";
	};
	class StaticObj_Power_HV2_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\power\Power_HV2_End.p3d";
	};
	class StaticObj_Power_HV2_Line_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\power\Power_HV2_Line_End.p3d";
	};
	class StaticObj_Power_HV2_Tower: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\power\Power_HV2_Tower.p3d";
	};
	class StaticObj_Power_HV2_Wire: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\power\Power_HV2_Wire.p3d";
	};
	class StaticObj_Power_HV2_Wire_Main: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\power\Power_HV2_Wire_Main.p3d";
	};
	class Land_Geoplant_CoolingStack: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_CoolingStack.p3d";
	};
	class Land_Geoplant_Corridor_Main: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_Corridor_Main.p3d";
	};
	class Land_Geoplant_DrillTower: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_DrillTower.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_Geoplant_MainHall_Left: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_MainHall_Left.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_Geoplant_MainHall_Middle: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_MainHall_Middle.p3d";
	};
	class Land_Geoplant_MainHall_Right: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_MainHall_Right.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door4
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors4"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door5
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors5"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_Geoplant_MaintenanceHall: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_MaintenanceHall.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_Geoplant_MaintenanceHall_Corridor: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_MaintenanceHall_Corridor.p3d";
	};
	class Land_Geoplant_OpenTank: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_OpenTank.p3d";
	};
	class Land_Geoplant_PipeHall: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_PipeHall.p3d";
	};
	class Land_Geoplant_PowerHall: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_PowerHall.p3d";
	};
	class Land_Geoplant_PowerHall_Corridor: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_PowerHall_Corridor.p3d";
	};
	class Land_Geoplant_PowerHall_Pole: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_PowerHall_Pole.p3d";
	};
	class Land_Geoplant_Well_Edgy: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_Well_Edgy.p3d";
	};
	class Land_Geoplant_Well_Round: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\powerplant\Geoplant_Well_Round.p3d";
	};
	class StaticObj_Geoplant_PowerHall_Wire: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\powerplant\Geoplant_PowerHall_Wire.p3d";
	};
	class Land_Conveyor_End: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\stockyard\Conveyor_End.p3d";
	};
	class Land_Stockyard_Crusher: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\stockyard\Stockyard_Crusher.p3d";
	};
	class Land_Stockyard_Reclaimer: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\stockyard\Stockyard_Reclaimer.p3d";
	};
	class Land_Stockyard_Shiploader: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\stockyard\Stockyard_Shiploader.p3d";
	};
	class Land_Stockyard_Shiploader_Arm: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\stockyard\Stockyard_Shiploader_Arm.p3d";
	};
	class StaticObj_Conveyor_Chute: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\stockyard\Conveyor_Chute.p3d";
	};
	class StaticObj_Conveyor_Junction: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\stockyard\Conveyor_Junction.p3d";
	};
	class StaticObj_Conveyor_Long: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\stockyard\Conveyor_Long.p3d";
	};
	class StaticObj_Conveyor_Pillar: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\stockyard\Conveyor_Pillar.p3d";
	};
	class StaticObj_Conveyor_Short: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\stockyard\Conveyor_Short.p3d";
	};
	class StaticObj_Conveyor_Short2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\stockyard\Conveyor_Short2.p3d";
	};
	class StaticObj_Conveyor_Slope: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\stockyard\Conveyor_Slope.p3d";
	};
	class StaticObj_Conveyor_Slope_NoSup: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\stockyard\Conveyor_Slope_NoSup.p3d";
	};
	class StaticObj_Conveyor_Tripper: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\stockyard\Conveyor_Tripper.p3d";
	};
	class StaticObj_Stockyard_OreMound1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\stockyard\Stockyard_OreMound1.p3d";
	};
	class StaticObj_Stockyard_OreMound2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\stockyard\Stockyard_OreMound2.p3d";
	};
	class StaticObj_Stockyard_Rail: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\industrial\stockyard\Stockyard_Rail.p3d";
	};
	class Land_Tank_Big2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\tanks\Tank_Big2.p3d";
	};
	class Land_Tank_Big3: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\industrial\tanks\Tank_Big3.p3d";
	};
	class Land_Mil_ReinforcedTank1;
	class Land_Mil_ReinforcedTank1_Sakhal: Land_Mil_ReinforcedTank1
	{
		model="\DZ\structures_sakhal\military\airfield\Mil_ReinforcedTank1_Sakhal.p3d";
	};
	class Land_Mil_ReinforcedTank2;
	class Land_Mil_ReinforcedTank2_Sakhal: Land_Mil_ReinforcedTank2
	{
		model="\DZ\structures_sakhal\military\airfield\Mil_ReinforcedTank2_Sakhal.p3d";
	};
	class StaticObj_Mil_BlastCover1_Sakhal: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\military\airfield\Mil_BlastCover1_Sakhal.p3d";
	};
	class StaticObj_Mil_BlastCover2_Sakhal: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\military\airfield\Mil_BlastCover2_Sakhal.p3d";
	};
	class StaticObj_Mil_BlastCover3_Sakhal: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\military\airfield\Mil_BlastCover3_Sakhal.p3d";
	};
	class StaticObj_Mil_BlastCover4_Sakhal: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\military\airfield\Mil_BlastCover4_Sakhal.p3d";
	};
	class Land_Bunker3_1: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\military\Bunkers\Bunker3_1.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorHeavyMetalBunkerOpen";
				soundClose="doorHeavyMetalBunkerClose";
				soundLocked="doorHeavyMetalBunkerRattle";
				soundOpenABit="doorHeavyMetalBunkerOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorHeavyMetalSmallBunkerOpen";
				soundClose="doorHeavyMetalSmallBunkerClose";
				soundLocked="doorHeavyMetalSmallBunkerRattle";
				soundOpenABit="doorHeavyMetalSmallBunkerOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorHeavyMetalSmallBunkerOpen";
				soundClose="doorHeavyMetalSmallBunkerClose";
				soundLocked="doorHeavyMetalSmallBunkerRattle";
				soundOpenABit="doorHeavyMetalSmallBunkerOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
			};
		};
	};
	class Land_Bunker3_2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\military\Bunkers\Bunker3_2.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorHeavyMetalBunkerOpen";
				soundClose="doorHeavyMetalBunkerClose";
				soundLocked="doorHeavyMetalBunkerRattle";
				soundOpenABit="doorHeavyMetalBunkerOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorHeavyMetalSmallBunkerOpen";
				soundClose="doorHeavyMetalSmallBunkerClose";
				soundLocked="doorHeavyMetalSmallBunkerRattle";
				soundOpenABit="doorHeavyMetalSmallBunkerOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorHeavyMetalSmallBunkerOpen";
				soundClose="doorHeavyMetalSmallBunkerClose";
				soundLocked="doorHeavyMetalSmallBunkerRattle";
				soundOpenABit="doorHeavyMetalSmallBunkerOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorHeavyMetalSmallBunkerOpen";
				soundClose="doorHeavyMetalSmallBunkerClose";
				soundLocked="doorHeavyMetalSmallBunkerRattle";
				soundOpenABit="doorHeavyMetalSmallBunkerOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorHeavyMetalSmallBunkerOpen";
				soundClose="doorHeavyMetalSmallBunkerClose";
				soundLocked="doorHeavyMetalSmallBunkerRattle";
				soundOpenABit="doorHeavyMetalSmallBunkerOpenABit";
			};
			class Doors6
			{
				displayName="door 6";
				component="Doors6";
				soundPos="doors6_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorHeavyMetalSmallBunkerOpen";
				soundClose="doorHeavyMetalSmallBunkerClose";
				soundLocked="doorHeavyMetalSmallBunkerRattle";
				soundOpenABit="doorHeavyMetalSmallBunkerOpenABit";
			};
			class Doors7
			{
				displayName="door 7";
				component="Doors7";
				soundPos="doors7_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorHeavyMetalSmallBunkerOpen";
				soundClose="doorHeavyMetalSmallBunkerClose";
				soundLocked="doorHeavyMetalSmallBunkerRattle";
				soundOpenABit="doorHeavyMetalSmallBunkerOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door4
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors4"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door5
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors5"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door6
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors6"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door7
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors7"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
			};
		};
	};
	class Land_Mil_Radome_Big: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\military\radar\Mil_Radome_Big.p3d";
	};
	class Land_Mil_Radome_Small: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\military\radar\Mil_Radome_Small.p3d";
	};
	class Land_Mil_Antena_K7: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\military\radar\Mil_Antena_K7.p3d";
	};
	class StaticObj_Mil_Artilery_Rampart_Sakhal: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\military\improvised\Mil_Artilery_Rampart_Sakhal.p3d";
	};
	class StaticObj_Mil_Artillery_Nest_Sakhal: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\military\improvised\Mil_Artillery_Nest_Sakhal.p3d";
	};
	class Land_WarheadStorage_Entrance: HouseNoDestruct
	{
		scope=2;
		model="\DZ\structures_sakhal\military\storage\WarheadStorage_Entrance.p3d";
	};
	class Land_WarheadStorage_Entrance_Roof: HouseNoDestruct
	{
		scope=2;
		model="\DZ\structures_sakhal\military\storage\WarheadStorage_Entrance_Roof.p3d";
	};
	class Land_WarheadStorage_Main: HouseNoDestruct
	{
		scope=2;
		model="\DZ\structures_sakhal\military\storage\WarheadStorage_Main.p3d";
		hiddenSelections[]=
		{
			"GlassLamp1",
			"GlassLamp2",
			"GlassLamp3",
			"GlassLamp4"
		};
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalJailSlideOpen";
				soundClose="doorMetalJailSlideClose";
				soundLocked="doorMetalJailSlideRattle";
				soundOpenABit="doorMetalJailSlideOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalJailSlideOpen";
				soundClose="doorMetalJailSlideClose";
				soundLocked="doorMetalJailSlideRattle";
				soundOpenABit="doorMetalJailSlideOpenABit";
			};
			class maindoor1_inner
			{
				displayName="maindoor1_INNER";
				component="maindoor1_inner";
				soundPos="maindoor1_inner_action";
				animPeriod=12;
				initPhase=0;
				initOpened=0;
				soundOpen="doorAirlockOpen";
				soundClose="doorAirlockClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
			class maindoor1_outer
			{
				displayName="maindoor1_OUTER";
				component="maindoor1_outer";
				soundPos="maindoor1_outer_action";
				animPeriod=12;
				initPhase=0;
				initOpened=0;
				soundOpen="doorAirlockOpen";
				soundClose="doorAirlockClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
			class maindoor2_inner
			{
				displayName="maindoor2_INNER";
				component="maindoor2_inner";
				soundPos="maindoor2_inner_action";
				animPeriod=12;
				initPhase=0;
				initOpened=0;
				soundOpen="doorAirlockOpen";
				soundClose="doorAirlockClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
			class maindoor2_outer
			{
				displayName="maindoor2_OUTER";
				component="maindoor2_outer";
				soundPos="maindoor2_outer_action";
				animPeriod=12;
				initPhase=0;
				initOpened=0;
				soundOpen="doorAirlockOpen";
				soundClose="doorAirlockClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
			class storagedoor1
			{
				displayName="storagedoor1";
				component="storagedoor1";
				soundPos="storagedoor1_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0;
				soundOpen="doorMetalBunkerOpen";
				soundClose="doorMetalBunkerClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
			class storagedoor2
			{
				displayName="storagedoor2";
				component="storagedoor2";
				soundPos="storagedoor2_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0;
				soundOpen="doorMetalBunkerOpen";
				soundClose="doorMetalBunkerClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
			class storagedoor3
			{
				displayName="storagedoor3";
				component="storagedoor3";
				soundPos="storagedoor3_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0;
				soundOpen="doorMetalBunkerOpen";
				soundClose="doorMetalBunkerClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
			class storagedoor4
			{
				displayName="storagedoor4";
				component="storagedoor4";
				soundPos="storagedoor4_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0;
				soundOpen="doorMetalBunkerOpen";
				soundClose="doorMetalBunkerClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class twin1
				{
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class twin2
				{
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
			};
		};
		class AnimationSources
		{
		};
	};
	class Land_WarheadStorage_Top: HouseNoDestruct
	{
		scope=2;
		model="\DZ\structures_sakhal\military\storage\WarheadStorage_Top.p3d";
	};
	class Land_WarheadStorage_Room1: HouseNoDestruct
	{
		scope=2;
		model="\DZ\structures_sakhal\military\storage\WarheadStorage_Room1.p3d";
	};
	class Land_WarheadStorage_Room2: HouseNoDestruct
	{
		scope=2;
		model="\DZ\structures_sakhal\military\storage\WarheadStorage_Room2.p3d";
	};
	class Land_WarheadStorage_Room3: HouseNoDestruct
	{
		scope=2;
		model="\DZ\structures_sakhal\military\storage\WarheadStorage_Room3.p3d";
	};
	class Land_WarheadStorage_Room4: HouseNoDestruct
	{
		scope=2;
		model="\DZ\structures_sakhal\military\storage\WarheadStorage_Room4.p3d";
	};
	class Land_Power_Station;
	class Land_WarheadStorage_PowerStation: Land_Power_Station
	{
		model="\DZ\structures_sakhal\military\storage\WarheadStorage_PowerStation.p3d";
		class AnimationSources
		{
			class lever1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class lever2
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class lever3
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class lever4
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
	class Inventory_Base;
	class PowerGeneratorStatic: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_PowerGenerator0";
		descriptionShort="$STR_CfgVehicles_PowerGenerator1";
		weight=75000;
		fuelTankCapacity=60000;
		model="DZ\structures_sakhal\military\storage\WarheadStorage_PowerStation_Generator.p3d";
		physLayer="item_large";
		carveNavmesh=1;
		attachments[]=
		{
			"GlowPlug"
		};
		class GUIInventoryAttachmentsProps
		{
			class Attachments_Engine
			{
				name="Generator parts";
				description="";
				attachmentSlots[]=
				{
					"GlowPlug"
				};
				icon="set:dayz_inventory image:glowplug";
				view_index=1;
			};
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOff=1;
			energyStorageMax=60000;
			energyUsagePerSecond=8;
			reduceMaxEnergyByDamageCoef=0.5;
			energyAtSpawn=0;
			powerSocketsCount=4;
			compatiblePlugTypes[]={2,6};
		};
		class DamageSystem
		{
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
		};
		class AnimationSources
		{
			class dial_fuel
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Switch1
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Switch2
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Switch3
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Switch4
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Switch5
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Switch6
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
	};
	class Land_WarheadStorage_Bunker_Facility: HouseNoDestruct
	{
		scope=2;
		model="\DZ\structures_sakhal\military\storage\WarheadStorage_Bunker_Facility.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.1;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors6
			{
				displayName="door 6";
				component="Doors6";
				soundPos="doors6_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors7
			{
				displayName="door 7";
				component="Doors7";
				soundPos="doors7_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors8
			{
				displayName="door 8";
				component="Doors8";
				soundPos="doors8_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors9
			{
				displayName="door 9";
				component="Doors9";
				soundPos="doors9_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class pressuredoor1
			{
				displayName="pressuredoor1";
				component="pressuredoor1";
				soundPos="pressuredoor1_action";
				animPeriod=10;
				initPhase=0;
				initOpened=0;
				soundOpen="doorPressurizedMechanismOpen";
				soundClose="doorPressurizedMechanismClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
			class pressuredoor2
			{
				displayName="pressuredoor2";
				component="pressuredoor2";
				soundPos="pressuredoor2_action";
				animPeriod=8;
				initPhase=0;
				initOpened=0;
				soundOpen="doorPressurizedOpen";
				soundClose="doorPressurizedClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
			class pressuredoor3
			{
				displayName="pressuredoor3";
				component="pressuredoor3";
				soundPos="pressuredoor3_action";
				animPeriod=8;
				initPhase=0;
				initOpened=0;
				soundOpen="doorPressurizedOpen";
				soundClose="doorPressurizedClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
		};
	};
	class Land_Tisy_BigHangar_A: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\military\tisy\Tisy_BigHangar_A.p3d";
	};
	class Land_Tisy_BigHangar_B: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\military\tisy\Tisy_BigHangar_B.p3d";
	};
	class Land_Tisy_Garages3: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\military\tisy\Tisy_Garages3.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class twin2
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door5
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors5"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
			};
		};
	};
	class Land_Tisy_LaunchControl: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\military\tisy\Tisy_LaunchControl.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors6
			{
				displayName="door 6";
				component="Doors6";
				soundPos="doors6_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors7
			{
				displayName="door 7";
				component="Doors7";
				soundPos="doors7_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors8
			{
				displayName="door 8";
				component="Doors8";
				soundPos="doors8_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors9
			{
				displayName="door 9";
				component="Doors9";
				soundPos="doors9_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors10
			{
				displayName="door 10";
				component="Doors10";
				soundPos="doors10_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors11
			{
				displayName="door 11";
				component="Doors11";
				soundPos="doors11_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class twin2
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door5
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors5"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door6
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors6"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door7
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors7"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door8
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors8"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door9
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors9"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door10
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors10"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door11
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors11"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
			};
		};
	};
	class Land_Tisy_Garages2;
	class Land_Tisy_Garages2_Sakhal: Land_Tisy_Garages2
	{
		model="\DZ\structures_sakhal\military\tisy\Tisy_Garages2_Sakhal.p3d";
	};
	class Land_Mil_ControlTower;
	class Land_Mil_ControlTower_East: Land_Mil_ControlTower
	{
		model="\DZ\structures_sakhal\military\houses\Mil_ControlTower_East.p3d";
	};
	class Land_House_1W01;
	class Land_House_1W01_Red: Land_House_1W01
	{
		model="\DZ\structures_sakhal\residential\houses\House_1W01_Red.p3d";
	};
	class Land_House_1W02;
	class Land_House_1W02_Blue: Land_House_1W02
	{
		model="\DZ\structures_sakhal\residential\houses\House_1W02_Blue.p3d";
	};
	class Land_House_1W03;
	class Land_House_1W03_Yellow: Land_House_1W03
	{
		model="\DZ\structures_sakhal\residential\houses\House_1W03_Yellow.p3d";
	};
	class Land_House_1W04;
	class Land_House_1W04_Yellow: Land_House_1W04
	{
		model="\DZ\structures_sakhal\residential\houses\House_1W04_Yellow.p3d";
	};
	class Land_House_1W06;
	class Land_House_1W06_Blue: Land_House_1W06
	{
		model="\DZ\structures_sakhal\residential\houses\House_1W06_Blue.p3d";
	};
	class Land_House_1W07;
	class Land_House_1W07_Green: Land_House_1W07
	{
		model="\DZ\structures_sakhal\residential\houses\House_1W07_Green.p3d";
	};
	class Land_House_1W08;
	class Land_House_1W08_Blue: Land_House_1W08
	{
		model="\DZ\structures_sakhal\residential\houses\House_1W08_Blue.p3d";
	};
	class Land_House_1W11;
	class Land_House_1W11_Blue: Land_House_1W11
	{
		model="\DZ\structures_sakhal\residential\houses\House_1W11_Blue.p3d";
	};
	class Land_House_1W13_Dam;
	class Land_House_1W13_Dam_NoIvy: Land_House_1W13_Dam
	{
		model="\DZ\structures_sakhal\residential\houses\House_1W13_Dam_NoIvy.p3d";
	};
	class Land_House_1W13_Dam_Snow: Land_House_1W13_Dam
	{
		model="\DZ\structures_sakhal\residential\houses\House_1W13_Dam_Snow.p3d";
	};
	class Land_House_2W01;
	class Land_House_2W01_Yellow: Land_House_2W01
	{
		model="\DZ\structures_sakhal\residential\houses\House_2W01_Yellow.p3d";
	};
	class Land_House_2W04;
	class Land_House_2W04_Blue: Land_House_2W04
	{
		model="\DZ\structures_sakhal\residential\houses\House_2W04_Blue.p3d";
	};
	class Land_House_1W14_Dam: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\residential\houses\House_1W14_Dam.p3d";
	};
	class Land_House_1W14_Dam_Snow: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\residential\houses\House_1W14_Dam_Snow.p3d";
	};
	class Land_House_1W15_Dam: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\residential\houses\House_1W15_Dam.p3d";
	};
	class Land_House_1W15_Dam_Snow: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\residential\houses\House_1W15_Dam_Snow.p3d";
	};
	class Land_City_Hospital;
	class Land_City_Hospital_East: Land_City_Hospital
	{
		model="\DZ\structures_sakhal\residential\medical\City_Hospital_East.p3d";
	};
	class Land_Village_HealthCare;
	class Land_Village_HealthCare_East: Land_Village_HealthCare
	{
		model="\DZ\structures_sakhal\residential\medical\Village_HealthCare_East.p3d";
	};
	class Land_Misc_FireBarrel_Blue: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\residential\misc\Misc_FireBarrel_Blue.p3d";
	};
	class Land_Misc_FireBarrel_Green: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\residential\misc\Misc_FireBarrel_Green.p3d";
	};
	class Land_Misc_FireBarrel_Red: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\residential\misc\Misc_FireBarrel_Red.p3d";
	};
	class Land_Misc_FireBarrel_Yellow: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\residential\misc\Misc_FireBarrel_Yellow.p3d";
	};
	class Land_OutsideThermometer: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures_sakhal\residential\misc\OutsideThermometer.p3d";
		class AnimationSources
		{
			class ThermoGauge
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
		};
	};
	class Land_OutsideThermometer_1: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures_sakhal\residential\misc\OutsideThermometer_1.p3d";
		class AnimationSources
		{
			class ThermoGauge
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
		};
	};
	class Land_OutsideThermometer_2: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures_sakhal\residential\misc\OutsideThermometer_2.p3d";
		class AnimationSources
		{
			class ThermoGauge
			{
				source="user";
				initPhase=0;
				animPeriod=0.1;
			};
		};
	};
	class Land_OutsideThermometer_2_wall: Land_OutsideThermometer_2
	{
		model="\dz\structures_sakhal\residential\misc\OutsideThermometer_2_wall.p3d";
	};
	class StaticObj_Misc_Fountain_Frozen: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\residential\misc\Misc_Fountain_Frozen.p3d";
	};
	class StaticObj_Misc_SatDish: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\residential\misc\Misc_SatDish.p3d";
	};
	class Land_Village_PoliceStation;
	class Land_Village_PoliceStation_East: Land_Village_PoliceStation
	{
		model="\DZ\structures_sakhal\residential\police\Village_PoliceStation_East.p3d";
	};
	class Land_City_School;
	class Land_City_School_East: Land_City_School
	{
		scope=1;
		model="\DZ\structures_sakhal\residential\Schools\City_School_East.p3d";
	};
	class Land_Village_Store;
	class Land_Village_Store_East: Land_Village_Store
	{
		model="\DZ\structures_sakhal\residential\Stores\Village_Store_East.p3d";
	};
	class Land_Tenement_Medium: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\residential\tenements\Tenement_Medium.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors6
			{
				displayName="door 6";
				component="Doors6";
				soundPos="doors6_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors7
			{
				displayName="door 7";
				component="Doors7";
				soundPos="doors7_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors8
			{
				displayName="door 8";
				component="Doors8";
				soundPos="doors8_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors9
			{
				displayName="door 9";
				component="Doors9";
				soundPos="doors9_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors10
			{
				displayName="door 10";
				component="Doors10";
				soundPos="doors10_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors11
			{
				displayName="door 11";
				component="Doors11";
				soundPos="doors11_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors12
			{
				displayName="door 12";
				component="Doors12";
				soundPos="doors12_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors13
			{
				displayName="door 13";
				component="Doors13";
				soundPos="doors13_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors14
			{
				displayName="door 14";
				component="Doors14";
				soundPos="doors14_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors15
			{
				displayName="door 15";
				component="Doors15";
				soundPos="doors15_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors17
			{
				displayName="door 17";
				component="Doors17";
				soundPos="doors17_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors18
			{
				displayName="door 18";
				component="Doors18";
				soundPos="doors18_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors19
			{
				displayName="door 19";
				component="Doors19";
				soundPos="doors19_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors20
			{
				displayName="door 20";
				component="Doors20";
				soundPos="doors20_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors21
			{
				displayName="door 21";
				component="Doors21";
				soundPos="doors21_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors22
			{
				displayName="door 22";
				component="Doors22";
				soundPos="doors22_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors23
			{
				displayName="door 23";
				component="Doors23";
				soundPos="doors23_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door4
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors4"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door5
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors5"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door6
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors6"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door7
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors7"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door8
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors8"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door9
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors9"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door10
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors10"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door11
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors11"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door12
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors12"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door13
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors13"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door14
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors14"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door15
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors15"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door17
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors17"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door18
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors18"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door19
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors19"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door20
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors20"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door21
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors21"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door22
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors22"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door23
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors23"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_Tenement_Small_Brick: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\residential\tenements\Tenement_Small_Brick.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors7
			{
				displayName="door 7";
				component="Doors7";
				soundPos="doors7_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors8
			{
				displayName="door 8";
				component="Doors8";
				soundPos="doors8_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors9
			{
				displayName="door 9";
				component="Doors9";
				soundPos="doors9_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors10
			{
				displayName="door 10";
				component="Doors10";
				soundPos="doors10_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors12
			{
				displayName="door 12";
				component="Doors12";
				soundPos="doors12_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors13
			{
				displayName="door 13";
				component="Doors13";
				soundPos="doors13_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors14
			{
				displayName="door 14";
				component="Doors14";
				soundPos="doors14_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors15
			{
				displayName="door 15";
				component="Doors15";
				soundPos="doors15_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors16
			{
				displayName="door 16";
				component="Doors16";
				soundPos="doors16_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors17
			{
				displayName="door 17";
				component="Doors17";
				soundPos="doors17_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors19
			{
				displayName="door 19";
				component="Doors19";
				soundPos="doors19_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors20
			{
				displayName="door 20";
				component="Doors20";
				soundPos="doors20_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors21
			{
				displayName="door 21";
				component="Doors21";
				soundPos="doors21_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors22
			{
				displayName="door 22";
				component="Doors22";
				soundPos="doors22_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors23
			{
				displayName="door 23";
				component="Doors23";
				soundPos="doors23_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors24
			{
				displayName="door 24";
				component="Doors24";
				soundPos="doors24_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors26
			{
				displayName="door 26";
				component="Doors26";
				soundPos="doors26_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors27
			{
				displayName="door 27";
				component="Doors27";
				soundPos="doors27_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors29
			{
				displayName="door 29";
				component="Doors29";
				soundPos="doors29_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors32
			{
				displayName="door 32";
				component="Doors32";
				soundPos="doors32_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door4
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors4"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door5
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors5"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door7
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors7"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door8
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors8"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door9
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors9"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door10
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors10"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door12
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors12"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door13
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors13"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door14
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors14"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door15
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors15"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door16
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors16"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door17
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors17"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door19
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors19"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door20
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors20"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door21
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors21"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door22
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors22"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door23
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors23"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door24
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors24"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door26
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors26"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door27
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors27"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_Tenement_Small_Brown: Land_Tenement_Small_Brick
	{
		model="\DZ\structures_sakhal\residential\tenements\Tenement_Small_Brown.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors7
			{
				displayName="door 7";
				component="Doors7";
				soundPos="doors7_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors8
			{
				displayName="door 8";
				component="Doors8";
				soundPos="doors8_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors9
			{
				displayName="door 9";
				component="Doors9";
				soundPos="doors9_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors10
			{
				displayName="door 10";
				component="Doors10";
				soundPos="doors10_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors12
			{
				displayName="door 12";
				component="Doors12";
				soundPos="doors12_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors13
			{
				displayName="door 13";
				component="Doors13";
				soundPos="doors13_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors14
			{
				displayName="door 14";
				component="Doors14";
				soundPos="doors14_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors15
			{
				displayName="door 15";
				component="Doors15";
				soundPos="doors15_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors16
			{
				displayName="door 16";
				component="Doors16";
				soundPos="doors16_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors17
			{
				displayName="door 17";
				component="Doors17";
				soundPos="doors17_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors19
			{
				displayName="door 19";
				component="Doors19";
				soundPos="doors19_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors20
			{
				displayName="door 20";
				component="Doors20";
				soundPos="doors20_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors21
			{
				displayName="door 21";
				component="Doors21";
				soundPos="doors21_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors22
			{
				displayName="door 22";
				component="Doors22";
				soundPos="doors22_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors23
			{
				displayName="door 23";
				component="Doors23";
				soundPos="doors23_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors24
			{
				displayName="door 24";
				component="Doors24";
				soundPos="doors24_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors26
			{
				displayName="door 26";
				component="Doors26";
				soundPos="doors26_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors27
			{
				displayName="door 27";
				component="Doors27";
				soundPos="doors27_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors28
			{
				displayName="door 28";
				component="Doors28";
				soundPos="doors28_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors29
			{
				displayName="door 29";
				component="Doors29";
				soundPos="doors29_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors30
			{
				displayName="door 30";
				component="Doors30";
				soundPos="doors30_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors32
			{
				displayName="door 32";
				component="Doors32";
				soundPos="doors32_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors33
			{
				displayName="door 33";
				component="Doors33";
				soundPos="doors33_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door4
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors4"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door5
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors5"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door7
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors7"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door8
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors8"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door9
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors9"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door10
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors10"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door12
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors12"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door13
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors13"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door14
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors14"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door15
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors15"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door16
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors16"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door17
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors17"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door19
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors19"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door20
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors20"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door21
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors21"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door22
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors22"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door23
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors23"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door24
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors24"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door26
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors26"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door27
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors27"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_Tenement_Small_Yellow: Land_Tenement_Small_Brick
	{
		model="\DZ\structures_sakhal\residential\tenements\Tenement_Small_Yellow.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors7
			{
				displayName="door 7";
				component="Doors7";
				soundPos="doors7_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors8
			{
				displayName="door 8";
				component="Doors8";
				soundPos="doors8_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors9
			{
				displayName="door 9";
				component="Doors9";
				soundPos="doors9_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors10
			{
				displayName="door 10";
				component="Doors10";
				soundPos="doors10_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors12
			{
				displayName="door 12";
				component="Doors12";
				soundPos="doors12_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors13
			{
				displayName="door 13";
				component="Doors13";
				soundPos="doors13_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors14
			{
				displayName="door 14";
				component="Doors14";
				soundPos="doors14_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors15
			{
				displayName="door 15";
				component="Doors15";
				soundPos="doors15_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors16
			{
				displayName="door 16";
				component="Doors16";
				soundPos="doors16_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors17
			{
				displayName="door 17";
				component="Doors17";
				soundPos="doors17_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors19
			{
				displayName="door 19";
				component="Doors19";
				soundPos="doors19_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors20
			{
				displayName="door 20";
				component="Doors20";
				soundPos="doors20_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors21
			{
				displayName="door 21";
				component="Doors21";
				soundPos="doors21_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors22
			{
				displayName="door 22";
				component="Doors22";
				soundPos="doors22_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors23
			{
				displayName="door 23";
				component="Doors23";
				soundPos="doors23_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors24
			{
				displayName="door 24";
				component="Doors24";
				soundPos="doors24_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors26
			{
				displayName="door 26";
				component="Doors26";
				soundPos="doors26_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors27
			{
				displayName="door 27";
				component="Doors27";
				soundPos="doors27_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door4
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors4"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door5
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors5"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door7
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors7"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door8
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors8"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door9
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors9"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door10
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors10"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door12
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors12"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door13
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors13"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door14
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors14"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door15
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors15"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door16
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors16"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door17
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors17"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door19
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors19"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door20
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors20"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door21
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors21"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door22
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors22"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door23
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors23"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door24
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors24"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door26
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors26"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door27
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors27"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_Tenement_Medium_Ghost1: HouseNoDestruct
	{
		model="\DZ\structures_sakhal\residential\tenements\Tenement_Medium_Ghost1.p3d";
	};
	class Land_Tenement_Medium_Ghost2: HouseNoDestruct
	{
		model="\DZ\structures_sakhal\residential\tenements\Tenement_Medium_Ghost2.p3d";
	};
	class Land_Tenement_Small_Brick_Ghost1: HouseNoDestruct
	{
		model="\DZ\structures_sakhal\residential\tenements\Tenement_Small_Brick_Ghost1.p3d";
	};
	class Land_Tenement_Small_Brick_Ghost2: HouseNoDestruct
	{
		model="\DZ\structures_sakhal\residential\tenements\Tenement_Small_Brick_Ghost2.p3d";
	};
	class Land_Tenement_Small_Brown_Ghost1: HouseNoDestruct
	{
		model="\DZ\structures_sakhal\residential\tenements\Tenement_Small_Brown_Ghost1.p3d";
	};
	class Land_Tenement_Small_Brown_Ghost2: HouseNoDestruct
	{
		model="\DZ\structures_sakhal\residential\tenements\Tenement_Small_Brown_Ghost2.p3d";
	};
	class Land_Tenement_Small_Yellow_Ghost1: HouseNoDestruct
	{
		model="\DZ\structures_sakhal\residential\tenements\Tenement_Small_Yellow_Ghost1.p3d";
	};
	class Land_Tenement_Small_Yellow_Ghost2: HouseNoDestruct
	{
		model="\DZ\structures_sakhal\residential\tenements\Tenement_Small_Yellow_Ghost2.p3d";
	};
	class StaticObj_Bridge_Concrete3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\bridges\Bridge_Concrete3.p3d";
	};
	class StaticObj_Bridge_Concrete3_Snow: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\bridges\Bridge_Concrete3_Snow.p3d";
	};
	class StaticObj_Bridge_Wood2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\bridges\Bridge_Wood2.p3d";
	};
	class StaticObj_Bridge_Wood2_Snow: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\bridges\Bridge_Wood2_Snow.p3d";
	};
	class StaticObj_Bridge_Wood2_Pillar: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\bridges\Bridge_Wood2_Pillar.p3d";
	};
	class StaticObj_Decal_CaveInterior_Square: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_CaveInterior_Square.p3d";
	};
	class StaticObj_Decal_Crosswalk_East: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Crosswalk_East.p3d";
	};
	class StaticObj_Decal_Sakhal_Snow_01: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Sakhal_Snow_01.p3d";
	};
	class StaticObj_Decal_Sakhal_Snow_01_noLC: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Sakhal_Snow_01_noLC.p3d";
	};
	class StaticObj_Decal_Sakhal_Snow_02: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Sakhal_Snow_02.p3d";
	};
	class StaticObj_Decal_Sakhal_Snow_02_noLC: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Sakhal_Snow_02_noLC.p3d";
	};
	class StaticObj_Decal_Sakhal_Snow_03: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Sakhal_Snow_03.p3d";
	};
	class StaticObj_Decal_Sakhal_Snow_03_noLC: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Sakhal_Snow_03_noLC.p3d";
	};
	class StaticObj_Decal_Sakhal_Snow_05: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Sakhal_Snow_05.p3d";
	};
	class StaticObj_Decal_Sakhal_Snow_05_noLC: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Sakhal_Snow_05_noLC.p3d";
	};
	class StaticObj_Decal_Sakhal_Snow_06: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Sakhal_Snow_06.p3d";
	};
	class StaticObj_Decal_Sakhal_Snow_06_noLC: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Sakhal_Snow_06_noLC.p3d";
	};
	class StaticObj_Decal_Sakhal_snow_long1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Sakhal_snow_long1.p3d";
	};
	class StaticObj_Decal_Sakhal_snow_long1_noLC: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\decals\Decal_Sakhal_snow_long1_noLC.p3d";
	};
	class StaticObj_asf1sakhal_dashedline_0_2000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_dashedline_0 2000.p3d";
	};
	class StaticObj_asf1sakhal_dashedline_1_1000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_dashedline_1 1000.p3d";
	};
	class StaticObj_asf1sakhal_dashedline_6: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_dashedline_6.p3d";
	};
	class StaticObj_asf1sakhal_dashedline_6konec: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_dashedline_6konec.p3d";
	};
	class StaticObj_asf1sakhal_dashedline_7_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_dashedline_7 100.p3d";
	};
	class StaticObj_asf1sakhal_dashedline_10_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_dashedline_10 25.p3d";
	};
	class StaticObj_asf1sakhal_dashedline_10_50: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_dashedline_10 50.p3d";
	};
	class StaticObj_asf1sakhal_dashedline_10_75: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_dashedline_10 75.p3d";
	};
	class StaticObj_asf1sakhal_dashedline_10_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_dashedline_10 100.p3d";
	};
	class StaticObj_asf1sakhal_dashedline_12: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_dashedline_12.p3d";
	};
	class StaticObj_asf1sakhal_dashedline_30_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_dashedline_30 25.p3d";
	};
	class StaticObj_asf1sakhal_dashedline_60_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_dashedline_60 10.p3d";
	};
	class StaticObj_asf1sakhal_fullline_0_2000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_fullline_0 2000.p3d";
	};
	class StaticObj_asf1sakhal_fullline_1_1000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_fullline_1 1000.p3d";
	};
	class StaticObj_asf1sakhal_fullline_6: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_fullline_6.p3d";
	};
	class StaticObj_asf1sakhal_fullline_6konec: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_fullline_6konec.p3d";
	};
	class StaticObj_asf1sakhal_fullline_7_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_fullline_7 100.p3d";
	};
	class StaticObj_asf1sakhal_fullline_10_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_fullline_10 25.p3d";
	};
	class StaticObj_asf1sakhal_fullline_10_50: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_fullline_10 50.p3d";
	};
	class StaticObj_asf1sakhal_fullline_10_75: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_fullline_10 75.p3d";
	};
	class StaticObj_asf1sakhal_fullline_10_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_fullline_10 100.p3d";
	};
	class StaticObj_asf1sakhal_fullline_12: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_fullline_12.p3d";
	};
	class StaticObj_asf1sakhal_fullline_30_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_fullline_30 25.p3d";
	};
	class StaticObj_asf1sakhal_fullline_60_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf1sakhal_fullline_60 10.p3d";
	};
	class StaticObj_asf2sakhal_0_2000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_0 2000.p3d";
	};
	class StaticObj_asf2sakhal_1_1000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_1 1000.p3d";
	};
	class StaticObj_asf2sakhal_6: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_6.p3d";
	};
	class StaticObj_asf2sakhal_6konec1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_6konec1.p3d";
	};
	class StaticObj_asf2sakhal_6konec2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_6konec2.p3d";
	};
	class StaticObj_asf2sakhal_7_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_7 100.p3d";
	};
	class StaticObj_asf2sakhal_10_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_10 25.p3d";
	};
	class StaticObj_asf2sakhal_10_50: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_10 50.p3d";
	};
	class StaticObj_asf2sakhal_10_75: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_10 75.p3d";
	};
	class StaticObj_asf2sakhal_10_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_10 100.p3d";
	};
	class StaticObj_asf2sakhal_12: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_12.p3d";
	};
	class StaticObj_asf2sakhal_30_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_30 25.p3d";
	};
	class StaticObj_asf2sakhal_60_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf2sakhal_60 10.p3d";
	};
	class StaticObj_asf3sakhal_0_2000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf3sakhal_0 2000.p3d";
	};
	class StaticObj_asf3sakhal_1_1000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf3sakhal_1 1000.p3d";
	};
	class StaticObj_asf3sakhal_6: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf3sakhal_6.p3d";
	};
	class StaticObj_asf3sakhal_6konec1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf3sakhal_6konec.p3d";
	};
	class StaticObj_asf3sakhal_7_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf3sakhal_7 100.p3d";
	};
	class StaticObj_asf3sakhal_10_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf3sakhal_10 25.p3d";
	};
	class StaticObj_asf3sakhal_10_50: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf3sakhal_10 50.p3d";
	};
	class StaticObj_asf3sakhal_10_75: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf3sakhal_10 75.p3d";
	};
	class StaticObj_asf3sakhal_10_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf3sakhal_10 100.p3d";
	};
	class StaticObj_asf3sakhal_12: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf3sakhal_12.p3d";
	};
	class StaticObj_asf3sakhal_30_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf3sakhal_30 25.p3d";
	};
	class StaticObj_asf3sakhal_60_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\asf3sakhal_60 10.p3d";
	};
	class StaticObj_gravsakhal_0_2000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\gravsakhal_0 2000.p3d";
	};
	class StaticObj_gravsakhal_1_1000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\gravsakhal_1 1000.p3d";
	};
	class StaticObj_gravsakhal_6: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\gravsakhal_6.p3d";
	};
	class StaticObj_gravsakhal_6konec1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\gravsakhal_6konec.p3d";
	};
	class StaticObj_gravsakhal_7_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\gravsakhal_7 100.p3d";
	};
	class StaticObj_gravsakhal_10_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\gravsakhal_10 25.p3d";
	};
	class StaticObj_gravsakhal_10_50: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\gravsakhal_10 50.p3d";
	};
	class StaticObj_gravsakhal_10_75: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\gravsakhal_10 75.p3d";
	};
	class StaticObj_gravsakhal_10_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\gravsakhal_10 100.p3d";
	};
	class StaticObj_gravsakhal_12: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\gravsakhal_12.p3d";
	};
	class StaticObj_gravsakhal_30_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\gravsakhal_30 25.p3d";
	};
	class StaticObj_gravsakhal_60_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\gravsakhal_60 10.p3d";
	};
	class StaticObj_mudsakhal_0_2000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\mudsakhal_0 2000.p3d";
	};
	class StaticObj_mudsakhal_1_1000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\mudsakhal_1 1000.p3d";
	};
	class StaticObj_mudsakhal_6: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\mudsakhal_6.p3d";
	};
	class StaticObj_mudsakhal_6konec1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\mudsakhal_6konec.p3d";
	};
	class StaticObj_mudsakhal_7_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\mudsakhal_7 100.p3d";
	};
	class StaticObj_mudsakhal_10_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\mudsakhal_10 25.p3d";
	};
	class StaticObj_mudsakhal_10_50: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\mudsakhal_10 50.p3d";
	};
	class StaticObj_mudsakhal_10_75: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\mudsakhal_10 75.p3d";
	};
	class StaticObj_mudsakhal_10_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\mudsakhal_10 100.p3d";
	};
	class StaticObj_mudsakhal_12: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\mudsakhal_12.p3d";
	};
	class StaticObj_mudsakhal_30_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\mudsakhal_30 25.p3d";
	};
	class StaticObj_mudsakhal_60_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\mudsakhal_60 10.p3d";
	};
	class StaticObj_quarrysakhal_0_2000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\quarrysakhal_0 2000.p3d";
	};
	class StaticObj_quarrysakhal_1_1000: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\quarrysakhal_1 1000.p3d";
	};
	class StaticObj_quarrysakhal_6: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\quarrysakhal_6.p3d";
	};
	class StaticObj_quarrysakhal_6konec1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\quarrysakhal_6konec.p3d";
	};
	class StaticObj_quarrysakhal_7_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\quarrysakhal_7 100.p3d";
	};
	class StaticObj_quarrysakhal_10_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\quarrysakhal_10 25.p3d";
	};
	class StaticObj_quarrysakhal_10_50: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\quarrysakhal_10 50.p3d";
	};
	class StaticObj_quarrysakhal_10_75: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\quarrysakhal_10 75.p3d";
	};
	class StaticObj_quarrysakhal_10_100: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\quarrysakhal_10 100.p3d";
	};
	class StaticObj_quarrysakhal_12: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\quarrysakhal_12.p3d";
	};
	class StaticObj_quarrysakhal_30_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\quarrysakhal_30 25.p3d";
	};
	class StaticObj_quarrysakhal_60_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\roads\parts\quarrysakhal_60 10.p3d";
	};
	class StaticObj_Billboard_CrabCan: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\signs\billboards\Billboard_CrabCan.p3d";
	};
	class StaticObj_Billboard_FilterBottle: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\signs\billboards\Billboard_FilterBottle.p3d";
	};
	class StaticObj_Billboard_Service: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\signs\billboards\Billboard_Service.p3d";
	};
	class StaticObj_Misc_SnowPole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\signs\misc\Misc_SnowPole.p3d";
	};
	class StaticObj_Sign_Petropavlovsk: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\signs\settlements\Sign_Petropavlovsk.p3d";
	};
	class StaticObj_Sign_Build_BlueCross: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\signs\misc\Sign_Build_BlueCross.p3d";
	};
	class Land_Airfield_Small_Hangar;
	class Land_Airport_Small_Hangar: Land_Airfield_Small_Hangar
	{
		scope=1;
		model="\DZ\structures_sakhal\specific\airport\Airport_Small_Hangar.p3d";
	};
	class Land_Airport_Small_Main: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\specific\airport\Airport_Small_Main.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors6
			{
				displayName="door 6";
				component="Doors6";
				soundPos="doors6_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors7
			{
				displayName="door 7";
				component="Doors7";
				soundPos="doors7_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors8
			{
				displayName="door 8";
				component="Doors8";
				soundPos="doors8_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors9
			{
				displayName="door 9";
				component="Doors9";
				soundPos="doors9_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors10
			{
				displayName="door 10";
				component="Doors10";
				soundPos="doors10_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodTwinOpen";
				soundClose="doorWoodTwinClose";
				soundLocked="doorWoodTwinRattle";
				soundOpenABit="doorWoodTwinOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodTwinOpen";
				soundClose="doorWoodTwinClose";
				soundLocked="doorWoodTwinRattle";
				soundOpenABit="doorWoodTwinOpenABit";
			};
			class Doors15
			{
				displayName="door 15";
				component="Doors15";
				soundPos="doors15_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors16
			{
				displayName="door 16";
				component="Doors16";
				soundPos="doors16_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors17
			{
				displayName="door 17";
				component="Doors17";
				soundPos="doors17_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door5
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors5"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door6
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors6"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door7
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors7"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door8
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors8"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door9
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors9"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door10
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors10"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door11
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors11"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class twin1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class twin2
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door15
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors15"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door16
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors16"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door17
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors17"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_Airport_Small_Hangar2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\specific\airport\Airport_Small_Hangar2.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class StaticObj_Monument_Bears: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\specific\monuments\Monument_Bears.p3d";
	};
	class StaticObj_Monument_Workcamp: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\specific\monuments\Monument_Workcamp.p3d";
	};
	class Land_Radio_building_East: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\specific\radio\Radio_building_East.p3d";
		class Doors
		{
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodTwinOpen";
				soundClose="doorWoodTwinClose";
				soundLocked="doorWoodTwinRattle";
				soundOpenABit="doorWoodTwinOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors6
			{
				displayName="door 6";
				component="Doors6";
				soundPos="doors6_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors7
			{
				displayName="door 7";
				component="Doors7";
				soundPos="doors7_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors8
			{
				displayName="door 8";
				component="Doors8";
				soundPos="doors8_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
			class Doors9
			{
				displayName="door 9";
				component="Doors9";
				soundPos="doors9_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class twin1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door4
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors4"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=2;
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
						class Melee
						{
							class Health
							{
								damage=2.5;
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
						class FragGrenade
						{
							class Health
							{
								damage=3;
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
					};
				};
				class door5
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors5"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door6
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors6"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door7
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors7"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door8
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors8"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door9
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors9"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_MobileLaboratory: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\specific\volcano\MobileLaboratory.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_MobileLaboratory_Ruin: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\specific\volcano\MobileLaboratory_Ruin.p3d";
	};
	class Land_Wall_Gate_Village;
	class Land_Wall_Gate_Village_Red: Land_Wall_Gate_Village
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Gate_Village_Red.p3d";
	};
	class Land_Wall_Gate_Village_Green: Land_Wall_Gate_Village
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Gate_Village_Green.p3d";
	};
	class StaticObj_Wall_Tin7_Blue_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Tin7_Blue_4.p3d";
	};
	class StaticObj_Wall_Tin7_Blue_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Tin7_Blue_8.p3d";
	};
	class StaticObj_Wall_Tin8_LowBlue_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Tin8_LowBlue_4.p3d";
	};
	class StaticObj_Wall_Tin8_LowBlue_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Tin8_LowBlue_8.p3d";
	};
	class StaticObj_Wall_Tin8_LowBlue_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Tin8_LowBlue_Pole.p3d";
	};
	class StaticObj_Wall_Tin8_LowGreen_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Tin8_LowGreen_4.p3d";
	};
	class StaticObj_Wall_Tin8_LowGreen_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Tin8_LowGreen_8.p3d";
	};
	class StaticObj_Wall_Tin8_LowGreen_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Tin8_LowGreen_Pole.p3d";
	};
	class StaticObj_Wall_Tin8_LowRed_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Tin8_LowRed_4.p3d";
	};
	class StaticObj_Wall_Tin8_LowRed_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Tin8_LowRed_8.p3d";
	};
	class StaticObj_Wall_Tin8_LowRed_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Tin8_LowRed_Pole.p3d";
	};
	class StaticObj_Wall_VilVar2_Green_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_VilVar2_Green_4.p3d";
	};
	class StaticObj_Wall_VilVar2_Green_4_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_VilVar2_Green_4_2.p3d";
	};
	class StaticObj_Wall_VilVar2_Green_4_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_VilVar2_Green_4_D.p3d";
	};
	class StaticObj_Wall_VilVar2_Green_4_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_VilVar2_Green_4_End.p3d";
	};
	class StaticObj_Wall_VilVar2_Green_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_VilVar2_Green_Pole.p3d";
	};
	class StaticObj_Wall_VilVar2_Red_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_VilVar2_Red_4.p3d";
	};
	class StaticObj_Wall_VilVar2_Red_4_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_VilVar2_Red_4_2.p3d";
	};
	class StaticObj_Wall_VilVar2_Red_4_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_VilVar2_Red_4_D.p3d";
	};
	class StaticObj_Wall_VilVar2_Red_4_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_VilVar2_Red_4_End.p3d";
	};
	class StaticObj_Wall_VilVar2_Red_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_VilVar2_Red_Pole.p3d";
	};
	class StaticObj_Wall_Wood5_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Wood5_4.p3d";
	};
	class StaticObj_Wall_Wood5_4_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Wood5_4_2.p3d";
	};
	class StaticObj_Wall_Wood5_4_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Wood5_4_D.p3d";
	};
	class StaticObj_Wall_Wood5_4_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Wood5_4_End.p3d";
	};
	class StaticObj_Wall_Wood5_4_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures_sakhal\walls\Wall_Wood5_4_Pole.p3d";
	};
	class Misc_TirePile_Burning_DE: HouseNoDestruct
	{
		scope=2;
		model="DZ\structures_sakhal\industrial\misc\Misc_TirePile_Burning.p3d";
		storageCategory=4;
	};
	class Land_Submarine_Back: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Submarine_Back.p3d";
	};
	class Land_Submarine_Front: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Submarine_Front.p3d";
	};
	class Land_Submarine_Middle: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Submarine_Middle.p3d";
	};
	class Land_Boat_Small7: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Boat_Small7.p3d";
	};
	class Land_Boat_Small8_Blue: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Boat_Small8_Blue.p3d";
	};
	class Land_Boat_Small8_Red: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Boat_Small8_Red.p3d";
	};
	class Land_Boat_Small9: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Boat_Small9.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_Boat_Small9_DE: Land_Boat_Small9
	{
		scope=2;
		storageCategory=4;
	};
	class Land_Boat_Small10_Blue: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Boat_Small10_Blue.p3d";
	};
	class Land_Boat_Small10_Red: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Boat_Small10_Red.p3d";
	};
	class Land_Ship_Medium2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Ship_Medium2.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors6
			{
				displayName="door 6";
				component="Doors6";
				soundPos="doors6_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
			class Doors7
			{
				displayName="door 7";
				component="Doors7";
				soundPos="doors7_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
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
				class Melee
				{
					class Health
					{
						damage=0;
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
				class FragGrenade
				{
					class Health
					{
						damage=0;
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
			};
			class DamageZones
			{
				class door1
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors1"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door2
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors2"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door3
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors3"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door4
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors4"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door5
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors5"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door6
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors6"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
				class door7
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors7"
					};
					fatalInjuryCoef=-1;
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=3;
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
						class Melee
						{
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
						class FragGrenade
						{
							class Health
							{
								damage=10;
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
					};
				};
			};
		};
	};
	class Land_Static_An2: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Static_An2.p3d";
	};
	class Land_Static_Mi8_Civilian: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Static_Mi8_Civilian.p3d";
	};
	class Land_Wreck_Mi8_Civilian: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\Wreck_Mi8_Civilian.p3d";
	};
	class Land_wreck_sed02_aban1_police: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\wreck_sed02_aban1_police.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorCarWreckOpen";
				soundClose="doorCarWreckClose";
				soundLocked="doorCarWreckRattle";
				soundOpenABit="doorCarWreckOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorCarWreckOpen";
				soundClose="doorCarWreckClose";
				soundLocked="doorCarWreckRattle";
				soundOpenABit="doorCarWreckOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorCarWreckOpen";
				soundClose="doorCarWreckClose";
				soundLocked="doorCarWreckRattle";
				soundOpenABit="doorCarWreckOpenABit";
			};
		};
	};
	class Land_wreck_sed02_aban1_police_DE: HouseNoDestruct
	{
		scope=1;
		storageCategory=4;
		model="\DZ\structures_sakhal\wrecks\wreck_sed02_aban1_police.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorCarWreckOpen";
				soundClose="doorCarWreckClose";
				soundLocked="doorCarWreckRattle";
				soundOpenABit="doorCarWreckOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorCarWreckOpen";
				soundClose="doorCarWreckClose";
				soundLocked="doorCarWreckRattle";
				soundOpenABit="doorCarWreckOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorCarWreckOpen";
				soundClose="doorCarWreckClose";
				soundLocked="doorCarWreckRattle";
				soundOpenABit="doorCarWreckOpenABit";
			};
		};
	};
	class Land_wreck_sed02_aban2_police: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures_sakhal\wrecks\wreck_sed02_aban2_police.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorCarWreckOpen";
				soundClose="doorCarWreckClose";
				soundLocked="doorCarWreckRattle";
				soundOpenABit="doorCarWreckOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorCarWreckOpen";
				soundClose="doorCarWreckClose";
				soundLocked="doorCarWreckRattle";
				soundOpenABit="doorCarWreckOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorCarWreckOpen";
				soundClose="doorCarWreckClose";
				soundLocked="doorCarWreckRattle";
				soundOpenABit="doorCarWreckOpenABit";
			};
		};
	};
	class Land_wreck_sed02_aban2_police_DE: HouseNoDestruct
	{
		scope=1;
		storageCategory=4;
		model="\DZ\structures_sakhal\wrecks\wreck_sed02_aban2_police.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorCarWreckOpen";
				soundClose="doorCarWreckClose";
				soundLocked="doorCarWreckRattle";
				soundOpenABit="doorCarWreckOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorCarWreckOpen";
				soundClose="doorCarWreckClose";
				soundLocked="doorCarWreckRattle";
				soundOpenABit="doorCarWreckOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorCarWreckOpen";
				soundClose="doorCarWreckClose";
				soundLocked="doorCarWreckRattle";
				soundOpenABit="doorCarWreckOpenABit";
			};
		};
	};
	class StaticObj_PatrolBoat_Military_DE: HouseNoDestruct
	{
		scope=2;
		storageCategory=4;
		model="\DZ\structures_sakhal\wrecks\PatrolBoat_Military.p3d";
	};
};

class CfgPatches
{
	class DZ_Structures_Rail
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
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Rail_Station_Big: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\Rail\Houses\Rail_Station_Big.p3d";
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
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
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
				class Twin1
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
	class Land_Rail_Station_Small: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\Rail\Houses\Rail_Station_Small.p3d";
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
				class Twin1
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
	class Land_Rail_Warehouse_Small: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\Rail\Houses\Rail_Warehouse_Small.p3d";
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
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideOpen";
				soundClose="doorWoodSlideClose";
				soundLocked="doorWoodSlideRattle";
				soundOpenABit="doorWoodSlideOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideOpen";
				soundClose="doorWoodSlideClose";
				soundLocked="doorWoodSlideRattle";
				soundOpenABit="doorWoodSlideOpenABit";
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
				class Twin1
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
				class Twin2
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
			};
		};
	};
	class StaticObj_Rail_Bridge_15: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Bridges\Rail_Bridge_15.p3d";
	};
	class StaticObj_Rail_Bridge_15_3tracks: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Bridges\Rail_Bridge_15_3tracks.p3d";
	};
	class StaticObj_Rail_Bridge_15_Curve: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Bridges\Rail_Bridge_15_Curve.p3d";
	};
	class StaticObj_Rail_Bridge_15_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Bridges\Rail_Bridge_15_End.p3d";
	};
	class StaticObj_Rail_Bridge_40: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Bridges\Rail_Bridge_40.p3d";
	};
	class StaticObj_Rail_ConcreteRamp: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_ConcreteRamp.p3d";
	};
	class StaticObj_Rail_Crossing_Barrier: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_Crossing_Barrier.p3d";
	};
	class StaticObj_Rail_Crossing_Block_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_Crossing_Block_10.p3d";
	};
	class StaticObj_Rail_Crossing_Block_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_Crossing_Block_25.p3d";
	};
	class StaticObj_Rail_LineBreak_Concrete: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_LineBreak_Concrete.p3d";
	};
	class StaticObj_Rail_LineBreak_Iron: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_LineBreak_Iron.p3d";
	};
	class StaticObj_Rail_Platform_Cross: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_Platform_Cross.p3d";
	};
	class StaticObj_Rail_Platform_Segment: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_Platform_Segment.p3d";
	};
	class StaticObj_Rail_Platform_Start: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_Platform_Start.p3d";
	};
	class StaticObj_Rail_PoleF: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_PoleF.p3d";
	};
	class StaticObj_Rail_PoleT: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_PoleT.p3d";
	};
	class StaticObj_Rail_PoleTT1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_PoleTT1.p3d";
	};
	class StaticObj_Rail_PoleTT2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_PoleTT2.p3d";
	};
	class StaticObj_Rail_Signals: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Misc\Rail_Signals.p3d";
	};
	class StaticObj_Rail_Track_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_25.p3d";
	};
	class StaticObj_Rail_Track_25_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_25_lc.p3d";
	};
	class StaticObj_Rail_Track_Down_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Down_25.p3d";
	};
	class StaticObj_Rail_Track_Down_25_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Down_25_lc.p3d";
	};
	class StaticObj_Rail_Track_Down_40: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Down_40.p3d";
	};
	class StaticObj_Rail_Track_Down_40_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Down_40_lc.p3d";
	};
	class StaticObj_Rail_Track_L25_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_L25_10.p3d";
	};
	class StaticObj_Rail_Track_L25_10_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_L25_10_lc.p3d";
	};
	class StaticObj_Rail_Track_LB_RE: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_LB_RE.p3d";
	};
	class StaticObj_Rail_Track_LB_RE_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_LB_RE_lc.p3d";
	};
	class StaticObj_Rail_Track_LB1_RE: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_LB1_RE.p3d";
	};
	class StaticObj_Rail_Track_LB1_RE_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_LB1_RE_lc.p3d";
	};
	class StaticObj_Rail_Track_LE_RB: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_LE_RB.p3d";
	};
	class StaticObj_Rail_Track_LE_RB_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_LE_RB_lc.p3d";
	};
	class StaticObj_Rail_Track_LE1_RB: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_LE1_RB.p3d";
	};
	class StaticObj_Rail_Track_LE1_RB_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_LE1_RB_lc.p3d";
	};
	class StaticObj_Rail_Track_Passing_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Passing_10.p3d";
	};
	class StaticObj_Rail_Track_Passing_10_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Passing_10_lc.p3d";
	};
	class StaticObj_Rail_Track_Passing_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Passing_25.p3d";
	};
	class StaticObj_Rail_Track_Passing_25_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Passing_25_lc.p3d";
	};
	class StaticObj_Rail_Track_Passing_25_nolc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Passing_25_nolc.p3d";
	};
	class StaticObj_Rail_Track_R25_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_R25_10.p3d";
	};
	class StaticObj_Rail_Track_R25_10_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_R25_10_lc.p3d";
	};
	class StaticObj_Rail_Track_SP: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_SP.p3d";
	};
	class StaticObj_Rail_Track_SP_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_SP_lc.p3d";
	};
	class StaticObj_Rail_Track_TurnOutR: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_TurnOutR.p3d";
	};
	class StaticObj_Rail_Track_TurnOutL: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_TurnOutL.p3d";
	};
	class StaticObj_Rail_Track_TurnOutR_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_TurnOutR_lc.p3d";
	};
	class StaticObj_Rail_Track_TurnOutL_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_TurnOutL_lc.p3d";
	};
	class StaticObj_Rail_Track_Up_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Up_25.p3d";
	};
	class StaticObj_Rail_Track_Up_40: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Up_40.p3d";
	};
	class StaticObj_Rail_Track_Up_25_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Up_25_lc.p3d";
	};
	class StaticObj_Rail_Track_Up_40_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_Track_Up_40_lc.p3d";
	};
	class StaticObj_Rail_TrackE_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_2.p3d";
	};
	class StaticObj_Rail_TrackE_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_4.p3d";
	};
	class StaticObj_Rail_TrackE_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_8.p3d";
	};
	class StaticObj_Rail_TrackE_8_nolc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_8_nolc.p3d";
	};
	class StaticObj_Rail_TrackE_25: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_25.p3d";
	};
	class StaticObj_Rail_TrackE_25_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_25_lc.p3d";
	};
	class StaticObj_Rail_TrackE_40: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_40.p3d";
	};
	class StaticObj_Rail_TrackE_40_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_40_lc.p3d";
	};
	class StaticObj_Rail_TrackE_L25_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_L25_5.p3d";
	};
	class StaticObj_Rail_TrackE_L25_5_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_L25_5_lc.p3d";
	};
	class StaticObj_Rail_TrackE_L25_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_L25_10.p3d";
	};
	class StaticObj_Rail_TrackE_L25_10_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_L25_10_lc.p3d";
	};
	class StaticObj_Rail_TrackE_L30_20: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_L30_20.p3d";
	};
	class StaticObj_Rail_TrackE_L30_20_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_L30_20_lc.p3d";
	};
	class StaticObj_Rail_TrackE_R25_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_R25_5.p3d";
	};
	class StaticObj_Rail_TrackE_R25_5_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_R25_5_lc.p3d";
	};
	class StaticObj_Rail_TrackE_R25_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_R25_10.p3d";
	};
	class StaticObj_Rail_TrackE_R25_10_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_R25_10_lc.p3d";
	};
	class StaticObj_Rail_TrackE_R30_20: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_R30_20.p3d";
	};
	class StaticObj_Rail_TrackE_R30_20_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_R30_20_lc.p3d";
	};
	class StaticObj_Rail_TrackE_TurnOutL: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_TurnOutL.p3d";
	};
	class StaticObj_Rail_TrackE_TurnOutR: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_TurnOutR.p3d";
	};
	class StaticObj_Rail_TrackE_TurnOutL_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_TurnOutL_lc.p3d";
	};
	class StaticObj_Rail_TrackE_TurnOutR_lc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Rail\Tracks\Rail_TrackE_TurnOutR_lc.p3d";
	};
};

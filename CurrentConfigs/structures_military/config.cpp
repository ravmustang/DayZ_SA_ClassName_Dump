class CfgPatches
{
	class DZ_Structures_Military
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
	class Land_Mil_CamoNet_Roof_east: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\Improvised\Mil_CamoNet_Roof_east.p3d";
	};
	class Land_Mil_Airfield_HQ: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\airfield\mil_airfield_hq.p3d";
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
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
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
	class Land_Mil_ATC_Small: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\airfield\mil_atc_small.p3d";
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
				initOpened=0;
				soundOpen="doorWoodSmallOpen";
				soundClose="doorWoodSmallClose";
				soundLocked="doorWoodSmallRattle";
				soundOpenABit="doorWoodSmallOpenABit";
			};
		};
	};
	class Land_Mil_ATC_Big: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\Military\Airfield\Mil_ATC_Big.p3d";
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
				soundOpen="doorMetalTwinOpen";
				soundClose="doorMetalTwinClose";
				soundLocked="doorMetalTwinRattle";
				soundOpenABit="doorMetalTwinOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalTwinOpen";
				soundClose="doorMetalTwinClose";
				soundLocked="doorMetalTwinRattle";
				soundOpenABit="doorMetalTwinOpenABit";
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
				initOpened=0.30000001;
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
				soundOpen="doorMetalFrontOpen";
				soundClose="doorMetalFrontClose";
				soundLocked="doorMetalFrontRattle";
				soundOpenABit="doorMetalFrontOpenABit";
			};
			class Doors8
			{
				displayName="door 8";
				component="Doors8";
				soundPos="doors8_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalFrontOpen";
				soundClose="doorMetalFrontClose";
				soundLocked="doorMetalFrontRattle";
				soundOpenABit="doorMetalFrontOpenABit";
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
			class DoorsTwin3
			{
				displayName="door Twin3";
				component="DoorsTwin3";
				soundPos="doorsTwin3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinOpen";
				soundClose="doorMetalTwinClose";
				soundLocked="doorMetalTwinRattle";
				soundOpenABit="doorMetalTwinOpenABit";
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
			class Doors25
			{
				displayName="door 25";
				component="Doors25";
				soundPos="doors25_action";
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
				class twin3
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin3"
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
				class door25
				{
					class Health
					{
						hitpoints=1000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doors25"
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
			};
		};
	};
	class Land_Mil_Barracks1: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\Military\Houses\Mil_Barracks1.p3d";
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
				initOpened=0;
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
	class Land_Mil_Barracks2: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\Military\Houses\Mil_Barracks2.p3d";
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
			};
		};
	};
	class Land_Mil_Barracks3: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\mil_barracks3.p3d";
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
				initOpened=0;
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
				class twin1
				{
					class Health
					{
						hitpoints=1000;
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
			};
		};
	};
	class Land_Mil_Barracks4: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\mil_barracks4.p3d";
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
			};
		};
	};
	class Land_Mil_Barracks5: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\mil_barracks5.p3d";
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
						hitpoints=1000;
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
	class Land_Mil_Barracks5_Basement: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\Mil_Barracks5_Basement.p3d";
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
				soundOpen="doorMetalJailHeavyOpen";
				soundClose="doorMetalJailHeavyClose";
				soundLocked="doorMetalJailHeavyRattle";
				soundOpenABit="doorMetalJailHeavyOpenABit";
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
						hitpoints=1000;
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
						hitpoints=2000;
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
			};
		};
	};
	class Land_Mil_Barracks6: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\mil_barracks6.p3d";
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
				initOpened=0.30000001;
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
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
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
				initOpened=0.30000001;
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
				initOpened=0.30000001;
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
			};
		};
	};
	class Land_Mil_Barracks6_Old: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\mil_barracks6_Old.p3d";
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
				initOpened=0.30000001;
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
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
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
				initOpened=0.30000001;
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
				initOpened=0.30000001;
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
			};
		};
	};
	class Land_Mil_Barracks6_Ghost1: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\Mil_Barracks6_Ghost1.p3d";
	};
	class Land_Mil_Barracks6_Ghost2: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\Mil_Barracks6_Ghost2.p3d";
	};
	class Land_Mil_Barracks_Round: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\mil_barracks_round.p3d";
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
	class Land_Mil_Guardhouse1: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\Mil_Guardhouse1.p3d";
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
	class Land_Mil_Guardhouse2: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\Mil_GuardHouse2.p3d";
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
			};
		};
	};
	class Land_Mil_Tower_Small: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\mil_tower_small.p3d";
	};
	class Land_Mil_GuardTower: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\houses\mil_guardtower.p3d";
	};
	class Land_Mil_Fortified_Nest_Big: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Fortified_Nest_Big";
	};
	class Land_Mil_Fortified_Nest_Small: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Fortified_Nest_Small";
	};
	class Land_Mil_Fortified_Nest_Watchtower: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Fortified_Nest_Watchtower";
	};
	class Land_Mil_GuardShed: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_GuardShed";
	};
	class Land_Mil_Tent_Big1_1: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Tent_Big1_1";
	};
	class Land_Mil_Tent_Big1_2: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Tent_Big1_2";
	};
	class Land_Mil_Tent_Big1_3: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Tent_Big1_3";
	};
	class Land_Mil_Tent_Big1_4: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Tent_Big1_4";
	};
	class Land_Mil_Tent_Big1_5: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Tent_Big1_5";
	};
	class Land_Mil_Tent_Big2_1: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Tent_Big2_1";
	};
	class Land_Mil_Tent_Big2_2: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Tent_Big2_2";
	};
	class Land_Mil_Tent_Big2_3: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Tent_Big2_3";
	};
	class Land_Mil_Tent_Big2_4: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Tent_Big2_4";
	};
	class Land_Mil_Tent_Big2_5: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Tent_Big2_5";
	};
	class Land_Mil_Tent_Big3: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Tent_Big3";
	};
	class Land_Mil_Tent_Big4: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="dz\structures\military\improvised\Mil_Tent_Big4";
	};
	class Land_Tisy_RadarPlatform_Top: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\tisy\Tisy_RadarPlatform_Top.p3d";
	};
	class Land_Tisy_KitchenRoom: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\tisy\tisy_kitchenroom.p3d";
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
			};
		};
	};
	class Land_Tisy_HQ: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\tisy\tisy_hq.p3d";
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
				initOpened=0.69999999;
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
			class Doors18
			{
				displayName="door 18";
				component="Doors18";
				soundPos="doors18_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalValveOpen";
				soundClose="doorMetalValveClose";
				soundLocked="doorMetalValveRattle";
				soundOpenABit="doorMetalValveOpenABit";
			};
			class Doors19
			{
				displayName="door 19";
				component="Doors19";
				soundPos="doors19_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalValveOpen";
				soundClose="doorMetalValveClose";
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
	class Land_Tisy_Garages: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\tisy\tisy_garages.p3d";
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
				animPeriod=1;
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
			};
		};
	};
	class Land_Tisy_Garages2: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\tisy\tisy_garages2.p3d";
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
				animPeriod=1;
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
			};
		};
	};
	class Land_Tisy_RadarB_Base: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\tisy\tisy_radarb_base.p3d";
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
				initOpened=0.30000001;
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
				initOpened=0.30000001;
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
	class Land_Tisy_RadarB_Antenna: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\tisy\tisy_radarb_antenna.p3d";
	};
	class Land_Tisy_Base_cooler: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\tisy\tisy_base_cooler.p3d";
	};
	class Land_Tisy_Barracks: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\tisy\tisy_barracks.p3d";
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
			};
		};
	};
	class Land_Airfield_Hangar_Green: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\airfield\airfield_hangar_green.p3d";
	};
	class Land_Airfield_ServiceHangar_R: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\airfield\airfield_servicehangar_r.p3d";
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
			class Doors10
			{
				displayName="door 10";
				component="Doors10";
				soundPos="doors10_action";
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
				initOpened=0.69999999;
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
			};
		};
	};
	class Land_Airfield_ServiceHangar_L: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\airfield\airfield_servicehangar_l.p3d";
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
				initOpened=0.30000001;
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
			};
		};
	};
	class Land_Mil_AircraftShelter: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\airfield\Mil_AircraftShelter.p3d";
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
				soundOpen="doorMetalTwinOpen";
				soundClose="doorMetalTwinClose";
				soundLocked="doorMetalTwinRattle";
				soundOpenABit="doorMetalTwinOpenABit";
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
			class DoorsTwin3
			{
				displayName="door Twin3";
				component="DoorsTwin3";
				soundPos="doorsTwin3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinOpen";
				soundClose="doorMetalTwinClose";
				soundLocked="doorMetalTwinRattle";
				soundOpenABit="doorMetalTwinOpenABit";
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
				class twin2
				{
					class Health
					{
						hitpoints=1000;
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
				class twin3
				{
					class Health
					{
						hitpoints=1500;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin3"
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
	class Land_Airfield_Radar_Tall: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\airfield\airfield_radar_tall.p3d";
	};
	class Land_Mil_ReinforcedTank1: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\airfield\Mil_ReinforcedTank1.p3d";
	};
	class Land_Mil_ReinforcedTank2: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\airfield\Mil_ReinforcedTank2.p3d";
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
			};
		};
	};
	class Land_Mil_Radar_Mobile1: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\Military\airfield\Mil_Radar_Mobile1.p3d";
	};
	class Land_Mil_Radar_Mobile2: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\airfield\Mil_Radar_Mobile2.p3d";
	};
	class Land_Mil_Radar_Mobile3: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\military\airfield\Mil_Radar_Mobile3.p3d";
	};
	class Land_Roadblock_Table: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\Military\Improvised\Roadblock_Table.p3d";
	};
	class Land_Roadblock_WoodenCrate: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\Military\Improvised\Roadblock_WoodenCrate.p3d";
	};
	class StaticObj_Mil_AircraftShelter_Door_L: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_AircraftShelter_Door_L.p3d";
	};
	class StaticObj_Mil_AircraftShelter_Door_R: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_AircraftShelter_Door_R.p3d";
	};
	class StaticObj_Mil_AircraftShelter_Grass_L: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_AircraftShelter_Grass_L.p3d";
	};
	class StaticObj_Mil_AircraftShelter_Grass_R: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_AircraftShelter_Grass_R.p3d";
	};
	class StaticObj_Mil_BlastCover1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_BlastCover1.p3d";
	};
	class StaticObj_Mil_BlastCover1_Grass: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_BlastCover1_Grass.p3d";
	};
	class StaticObj_Mil_BlastCover2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_BlastCover2.p3d";
	};
	class StaticObj_Mil_BlastCover2_Grass: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_BlastCover2_Grass.p3d";
	};
	class StaticObj_Mil_BlastCover3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_BlastCover3.p3d";
	};
	class StaticObj_Mil_BlastCover3_Grass: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_BlastCover3_Grass.p3d";
	};
	class StaticObj_Mil_BlastCover4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_BlastCover4.p3d";
	};
	class StaticObj_Mil_BlastCover4_Grass_L: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_BlastCover4_Grass_L.p3d";
	};
	class StaticObj_Mil_BlastCover4_Grass_R: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_BlastCover4_Grass_R.p3d";
	};
	class StaticObj_Mil_Radar_Mobile1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_Radar_Mobile1.p3d";
	};
	class StaticObj_Mil_Radar_Mobile2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_Radar_Mobile2.p3d";
	};
	class StaticObj_Mil_Radar_Mobile3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_Radar_Mobile3.p3d";
	};
	class StaticObj_Mil_ReinforcedTank1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_ReinforcedTank1.p3d";
	};
	class StaticObj_Mil_ReinforcedTank1_Grass: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_ReinforcedTank1_Grass.p3d";
	};
	class StaticObj_Mil_ReinforcedTank2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_ReinforcedTank2.p3d";
	};
	class StaticObj_Mil_ReinforcedTank2_Grass_L: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_ReinforcedTank2_Grass_L.p3d";
	};
	class StaticObj_Mil_ReinforcedTank2_Grass_R: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_ReinforcedTank2_Grass_R.p3d";
	};
	class StaticObj_Mil_ReinforcedTank2_Grass_Top: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Airfield\Mil_ReinforcedTank2_Grass_Top.p3d";
	};
	class StaticObj_Mil_HBarrier_1m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\HBarrier_1m.p3d";
	};
	class StaticObj_Mil_HBarrier_4m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\HBarrier_4m.p3d";
	};
	class StaticObj_Mil_HBarrier_6m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\HBarrier_6m.p3d";
	};
	class StaticObj_Mil_HBarrier_Big: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\HBarrier_Big.p3d";
	};
	class StaticObj_Mil_HBarrier_Round: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\HBarrier_Round.p3d";
	};
	class StaticObj_Mil_Artilery_Rampart: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Mil_Artilery_Rampart.p3d";
	};
	class StaticObj_Mil_Artilery_Nest: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Mil_Artillery_Nest.p3d";
	};
	class StaticObj_Mil_CamoNet_Big_east: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Mil_CamoNet_Big_east.p3d";
	};
	class StaticObj_Mil_CamoNet_Big_nato: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Mil_CamoNet_Big_nato.p3d";
	};
	class StaticObj_Mil_CamoNet_Side_east: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Mil_CamoNet_Side_east.p3d";
	};
	class StaticObj_Mil_CamoNet_Side_nato: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Mil_CamoNet_Side_nato.p3d";
	};
	class StaticObj_Mil_CamoNet_Tent2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Mil_CamoNet_Tent2.p3d";
	};
	class StaticObj_Roadblock_Bags_Curve: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Roadblock_Bags_Curve.p3d";
	};
	class StaticObj_Roadblock_Bags_EndL: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Roadblock_Bags_EndL.p3d";
	};
	class StaticObj_Roadblock_Bags_EndR: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Roadblock_Bags_EndR.p3d";
	};
	class StaticObj_Roadblock_Bags_Long: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Roadblock_Bags_Long.p3d";
	};
	class StaticObj_Roadblock_CncBlock: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Roadblock_CncBlock.p3d";
	};
	class StaticObj_Roadblock_CncBlocks_Long: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Roadblock_CncBlocks_Long.p3d";
	};
	class StaticObj_Roadblock_CncBlocks_short: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Roadblock_CncBlocks_short.p3d";
	};
	class StaticObj_Roadblock_Pillbox: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Improvised\Roadblock_Pillbox.p3d";
	};
	class StaticObj_Roadblock_Wood_Long: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\Military\Improvised\Roadblock_Wood_Long.p3d";
	};
	class StaticObj_Roadblock_Wood_Small: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\Military\Improvised\Roadblock_Wood_Small.p3d";
	};
	class StaticObj_Roadblock_Wood_Long_DE: HouseNoDestruct
	{
		scope=2;
		storageCategory=4;
		model="\DZ\structures\Military\Improvised\Roadblock_Wood_Long.p3d";
	};
	class StaticObj_Roadblock_Wood_Small_DE: HouseNoDestruct
	{
		scope=2;
		storageCategory=4;
		model="\DZ\structures\Military\Improvised\Roadblock_Wood_Small.p3d";
	};
	class StaticObj_Misc_Antenna: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Antenna.p3d";
	};
	class StaticObj_Misc_BagFence_3m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_BagFence_3m.p3d";
	};
	class StaticObj_Misc_BagFence_Corner: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_BagFence_Corner.p3d";
	};
	class StaticObj_Misc_BagFence_Round: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_BagFence_Round.p3d";
	};
	class StaticObj_Misc_Barbedwire: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Barbedwire.p3d";
	};
	class StaticObj_Misc_ConcreteBlock1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_ConcreteBlock1.p3d";
	};
	class StaticObj_Misc_ConcreteBlock1_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_ConcreteBlock1_End.p3d";
	};
	class StaticObj_Misc_ConcreteBlock2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_ConcreteBlock2.p3d";
	};
	class StaticObj_Misc_ConcreteBlock2_Damaged: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_ConcreteBlock2_Damaged.p3d";
	};
	class StaticObj_Misc_ConcreteBlock2_Stripes: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_ConcreteBlock2_Stripes.p3d";
	};
	class StaticObj_Misc_Cover_Big: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Cover_Big.p3d";
	};
	class StaticObj_Misc_Cover_Small: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Cover_Small.p3d";
	};
	class StaticObj_Misc_DragonTeeth: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_DragonTeeth.p3d";
	};
	class StaticObj_Misc_DragonTeeth_Big: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_DragonTeeth_Big.p3d";
	};
	class StaticObj_Misc_Flagpole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Flagpole.p3d";
	};
	class StaticObj_Misc_Gunrack: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Gunrack.p3d";
	};
	class StaticObj_Misc_Hedgehog_Concrete: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Hedgehog_Concrete.p3d";
	};
	class StaticObj_Misc_Hedgehog_Iron: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Hedgehog_Iron.p3d";
	};
	class StaticObj_Misc_Obstacle_Bridge: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Obstacle_Bridge.p3d";
	};
	class StaticObj_Misc_Obstacle_Crawl: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Obstacle_Crawl.p3d";
	};
	class StaticObj_Misc_Obstacle_Cross: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Obstacle_Cross.p3d";
	};
	class StaticObj_Misc_Obstacle_Pass: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Obstacle_Pass.p3d";
	};
	class StaticObj_Misc_Obstacle_Ramp: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Obstacle_Ramp.p3d";
	};
	class StaticObj_Misc_Obstacle_RunAround: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Obstacle_RunAround.p3d";
	};
	class StaticObj_Misc_Range_Line: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Range_Line.p3d";
	};
	class StaticObj_Misc_Range_Line_dispersions: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Range_Line_dispersions.p3d";
	};
	class StaticObj_Misc_Range_Pistol: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Range_Pistol.p3d";
	};
	class StaticObj_Misc_Range_Roof: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Range_Roof.p3d";
	};
	class StaticObj_Misc_Range_Single: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Range_Single.p3d";
	};
	class StaticObj_Misc_Razorwire: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Misc\Misc_Razorwire.p3d";
	};
	class StaticObj_Misc_SupplyBox1_DE: HouseNoDestruct
	{
		scope=2;
		storageCategory=4;
		model="DZ\structures\Military\Misc\Misc_SupplyBox1.p3d";
	};
	class StaticObj_Misc_SupplyBox2_DE: HouseNoDestruct
	{
		scope=2;
		storageCategory=4;
		model="DZ\structures\Military\Misc\Misc_SupplyBox2.p3d";
	};
	class StaticObj_Misc_SupplyBox3_DE: HouseNoDestruct
	{
		scope=2;
		storageCategory=4;
		model="DZ\structures\Military\Misc\Misc_SupplyBox3.p3d";
	};
	class StaticObj_Tisy_AirShaft: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Tisy\Tisy_AirShaft.p3d";
	};
	class StaticObj_Tisy_Garages_Grass_L: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Tisy\Tisy_Garages_Grass_L.p3d";
	};
	class StaticObj_Tisy_Garages_Grass_R: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Tisy\Tisy_Garages_Grass_R.p3d";
	};
	class StaticObj_Tisy_RadarPlatform_Bot: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Tisy\Tisy_RadarPlatform_Bot.p3d";
	};
	class StaticObj_Tisy_RadarPlatform_Mid: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Military\Tisy\Tisy_RadarPlatform_Mid.p3d";
	};
};

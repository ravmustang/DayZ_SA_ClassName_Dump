class CfgPatches
{
	class DZ_Structures_Industrial
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
	class Land_Cementworks_Conveyorhall: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\cementworks\cementworks_conveyorhall.p3d";
	};
	class Land_CementWorks_SiloBig1A: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\Industrial\CementWorks\CementWorks_SiloBig1A.p3d";
		featureSize=40;
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
				initOpened=0.69999999;
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
	class Land_CementWorks_SiloBig1B: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\Industrial\CementWorks\CementWorks_SiloBig1B.p3d";
		featureSize=40;
	};
	class Land_CementWorks_ExpeditionA: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\cementworks\cementworks_expeditiona.p3d";
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
			};
		};
	};
	class Land_CementWorks_Hall1: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\cementworks\cementworks_hall1.p3d";
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
				soundOpen="doorMetalSlideHeavyOpen";
				soundClose="doorMetalSlideHeavyClose";
				soundLocked="doorMetalSlideHeavyRattle";
				soundOpenABit="doorMetalSlideHeavyOpenABit";
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
						hitpoints=3000;
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
	class Land_CementWorks_Hall2_Brick: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\cementworks\cementworks_hall2_brick.p3d";
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
				soundOpen="doorMetalTwinHeavyOpen";
				soundClose="doorMetalTwinHeavyClose";
				soundLocked="doorMetalTwinHeavyRattle";
				soundOpenABit="doorMetalTwinHeavyOpenABit";
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
			class Doors7
			{
				displayName="door 7";
				component="Doors7";
				soundPos="doors7_action";
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
						hitpoints=3000;
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
			};
		};
	};
	class Land_CementWorks_Hall2_Grey: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\cementworks\cementworks_hall2_grey.p3d";
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
				soundOpen="doorMetalTwinHeavyOpen";
				soundClose="doorMetalTwinHeavyClose";
				soundLocked="doorMetalTwinHeavyRattle";
				soundOpenABit="doorMetalTwinHeavyOpenABit";
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
	class Land_CementWorks_MillA: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\cementworks\CementWorks_MillA.p3d";
	};
	class Land_CementWorks_MillB: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\cementworks\cementworks_millb.p3d";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=4.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinLargeOpen";
				soundClose="doorMetalTwinLargeClose";
				soundLocked="doorMetalTwinLargeRattle";
				soundOpenABit="doorMetalTwinLargeOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=4.5;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinLargeOpen";
				soundClose="doorMetalTwinLargeClose";
				soundLocked="doorMetalTwinLargeRattle";
				soundOpenABit="doorMetalTwinLargeOpenABit";
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
						hitpoints=2000;
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
						hitpoints=2000;
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
	class Land_CementWorks_MillC: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\cementworks\cementworks_millc.p3d";
		class Doors
		{
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
			};
		};
	};
	class Land_CementWorks_RotFurnace: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\cementworks\cementworks_rotfurnace.p3d";
		featureSize=40;
	};
	class Land_CementWorks_ExpeditionB: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="\dz\structures\industrial\cementworks\CementWorks_ExpeditionB";
	};
	class Land_CementWorks_ExpeditionC: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="\dz\structures\industrial\cementworks\CementWorks_ExpeditionC";
	};
	class Land_Construction_Building: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\construction\construction_building.p3d";
	};
	class Land_Construction_Crane: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\construction\construction_crane.p3d";
		featureSize=40;
	};
	class Land_Construction_House1: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\construction\Construction_House1.p3d";
	};
	class Land_Construction_House2: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\construction\Construction_House2.p3d";
	};
	class Land_Container_1Aoh: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\containers\container_1aoh.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalContainerOpen";
				soundClose="doorMetalContainerClose";
				soundLocked="doorMetalContainerRattle";
				soundOpenABit="doorMetalContainerOpenABit";
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
			};
		};
	};
	class Land_Container_1Aoh_DE: Land_Container_1Aoh
	{
		scope=2;
		storageCategory=4;
	};
	class Land_Container_1Bo: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\Industrial\Containers\Container_1Bo";
		bounding="BSphere";
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
				soundOpen="doorMetalContainerOpen";
				soundClose="doorMetalContainerClose";
				soundLocked="doorMetalContainerRattle";
				soundOpenABit="doorMetalContainerOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalContainerOpen";
				soundClose="doorMetalContainerClose";
				soundLocked="doorMetalContainerRattle";
				soundOpenABit="doorMetalContainerOpenABit";
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
			};
		};
	};
	class Land_Container_1Bo_DE: Land_Container_1Bo
	{
		scope=2;
		storageCategory=4;
	};
	class Land_Container_1Mo: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\containers\container_1mo.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalContainerOpen";
				soundClose="doorMetalContainerClose";
				soundLocked="doorMetalContainerRattle";
				soundOpenABit="doorMetalContainerOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalContainerOpen";
				soundClose="doorMetalContainerClose";
				soundLocked="doorMetalContainerRattle";
				soundOpenABit="doorMetalContainerOpenABit";
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
			};
		};
	};
	class Land_Container_1Mo_DE: Land_Container_1Mo
	{
		scope=2;
		storageCategory=4;
	};
	class Land_Container_1Moh: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\containers\container_1moh.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalContainerOpen";
				soundClose="doorMetalContainerClose";
				soundLocked="doorMetalContainerRattle";
				soundOpenABit="doorMetalContainerOpenABit";
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
			};
		};
	};
	class Land_Container_1Moh_DE: Land_Container_1Moh
	{
		scope=2;
		storageCategory=4;
	};
	class ContainerLockedBase: HouseNoDestruct
	{
		scope=0;
		storageCategory=4;
		model="\dz\structures\Industrial\Containers\ContainerLocked.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
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
				soundOpen="doorMetalContainerOpen";
				soundClose="doorMetalContainerClose";
				soundLocked="doorMetalContainerRattle";
				soundOpenABit="doorMetalContainerOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalContainerOpen";
				soundClose="doorMetalContainerClose";
				soundLocked="doorMetalContainerRattle";
				soundOpenABit="doorMetalContainerOpenABit";
			};
		};
		class AnimationSources
		{
			class Side1_lock
			{
				source="user";
				initPhase=0;
				animPeriod=1.75;
			};
			class Side2_lock: Side1_lock
			{
			};
		};
	};
	class Land_ContainerLocked_Blue_DE: ContainerLockedBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\structures\Industrial\Containers\Data\ShippingContainerLock_blue_CO.paa"
		};
	};
	class Land_ContainerLocked_Yellow_DE: ContainerLockedBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\structures\Industrial\Containers\Data\ShippingContainerLock_yellow_CO.paa"
		};
	};
	class Land_ContainerLocked_Orange_DE: ContainerLockedBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\structures\Industrial\Containers\Data\ShippingContainerLock_orange_CO.paa"
		};
	};
	class Land_ContainerLocked_Red_DE: ContainerLockedBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\structures\Industrial\Containers\Data\ShippingContainerLock_red_CO.paa"
		};
	};
	class Land_Barn_Brick1: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\farms\barn_brick1.p3d";
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
				soundOpen="doorWoodLargeOpen";
				soundClose="doorWoodLargeClose";
				soundLocked="doorWoodLargeRattle";
				soundOpenABit="doorWoodLargeOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodLargeOpen";
				soundClose="doorWoodLargeClose";
				soundLocked="doorWoodLargeRattle";
				soundOpenABit="doorWoodLargeOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodLargeOpen";
				soundClose="doorWoodLargeClose";
				soundLocked="doorWoodLargeRattle";
				soundOpenABit="doorWoodLargeOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodLargeOpen";
				soundClose="doorWoodLargeClose";
				soundLocked="doorWoodLargeRattle";
				soundOpenABit="doorWoodLargeOpenABit";
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
	class Land_Barn_Brick2: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\farms\barn_brick2.p3d";
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
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
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
	class Land_Barn_Wood1: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\farms\barn_wood1.p3d";
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
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
			};
			class Doors6
			{
				displayName="door 6";
				component="Doors6";
				soundPos="doors6_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
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
	class Land_Barn_Wood2: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\farms\barn_wood2.p3d";
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
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodNolatchOpen";
				soundClose="doorWoodNolatchClose";
				soundLocked="doorWoodNolatchRattle";
				soundOpenABit="doorWoodNolatchOpenABit";
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
	class Land_Barn_Metal_Big: HouseNoDestruct
	{
		scope=1;
		model="\DZ\structures\Industrial\Farms\Barn_Metal_Big.p3d";
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
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
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
	class Land_Barn_Metal_Big_Grey: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\farms\barn_metal_big_grey.p3d";
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
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
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
	class Land_Farm_CowshedA: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\farms\farm_cowsheda.p3d";
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
				soundOpen="doorWoodTwinShedOpen";
				soundClose="doorWoodTwinShedClose";
				soundLocked="doorWoodTwinShedRattle";
				soundOpenABit="doorWoodTwinShedOpenABit";
			};
			class DoorsTwin2
			{
				displayName="door Twin2";
				component="DoorsTwin2";
				soundPos="doorsTwin2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodTwinShedOpen";
				soundClose="doorWoodTwinShedClose";
				soundLocked="doorWoodTwinShedRattle";
				soundOpenABit="doorWoodTwinShedOpenABit";
			};
			class Doors5
			{
				displayName="door 5";
				component="Doors5";
				soundPos="doors5_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
			class Doors6
			{
				displayName="door 6";
				component="Doors6";
				soundPos="doors6_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
			};
			class Doors7
			{
				displayName="door 7";
				component="Doors7";
				soundPos="doors7_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorWoodSlideBigOpen";
				soundClose="doorWoodSlideBigClose";
				soundLocked="doorWoodSlideBigRattle";
				soundOpenABit="doorWoodSlideBigOpenABit";
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
	class Land_Farm_CowshedB: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\farms\farm_cowshedb.p3d";
	};
	class Land_Farm_CowshedC: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\farms\farm_cowshedc.p3d";
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
				soundOpen="doorWoodTwinShedOpen";
				soundClose="doorWoodTwinShedClose";
				soundLocked="doorWoodTwinShedRattle";
				soundOpenABit="doorWoodTwinShedOpenABit";
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
			};
		};
	};
	class Land_Farm_Hopper: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\farms\farm_hopper.p3d";
	};
	class Land_Farm_Watertower: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\farms\farm_watertower.p3d";
	};
	class Land_Farm_WaterTower_Small: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\farms\farm_watertower_small.p3d";
	};
	class Land_Garage_Big: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\garages\garage_big.p3d";
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
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSlideLargeOpen";
				soundClose="doorMetalSlideLargeClose";
				soundLocked="doorMetalSlideLargeRattle";
				soundOpenABit="doorMetalSlideLargeOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
				animPeriod=3;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSlideLargeOpen";
				soundClose="doorMetalSlideLargeClose";
				soundLocked="doorMetalSlideLargeRattle";
				soundOpenABit="doorMetalSlideLargeOpenABit";
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
	class Land_Garage_Row_Big: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\garages\garage_row_big.p3d";
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
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
			};
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
			class DoorsTwin3
			{
				displayName="door Twin3";
				component="DoorsTwin3";
				soundPos="doorsTwin3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class DoorsTwin4
			{
				displayName="door Twin4";
				component="DoorsTwin4";
				soundPos="doorsTwin4_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
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
				class twin3
				{
					class Health
					{
						hitpoints=2000;
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
				class twin4
				{
					class Health
					{
						hitpoints=2000;
						transferToGlobalCoef=0;
					};
					componentNames[]=
					{
						"doorsTwin4"
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
	class Land_Garage_Row_Small: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\garages\garage_row_small.p3d";
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
			class DoorsTwin3
			{
				displayName="door Twin3";
				component="DoorsTwin3";
				soundPos="doorsTwin3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
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
				class twin3
				{
					class Health
					{
						hitpoints=2000;
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
	class Land_Garage_Office: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\garages\garage_office.p3d";
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
				class doors1
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
								damage=3;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=5;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=10;
							};
							class Blood
							{
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
	class Land_Garage_Small: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\garages\garage_small.p3d";
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
			};
		};
	};
	class Land_Boathouse: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\harbour\Boathouse.p3d";
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
				soundOpen="doorWoodTwinShedOpen";
				soundClose="doorWoodTwinShedClose";
				soundLocked="doorWoodTwinShedRattle";
				soundOpenABit="doorWoodTwinShedOpenABit";
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
			};
		};
	};
	class Land_Lighthouse: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\harbour\lighthouse.p3d";
		featureSize=15;
	};
	class Land_Pier_Crane_A: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\harbour\pier_crane_a.p3d";
		featureSize=30;
	};
	class Land_Pier_Crane_B: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\harbour\pier_crane_b.p3d";
		featureSize=30;
	};
	class Land_Factory_Lathes: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\houses\factory_lathes.p3d";
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
				initOpened=0.30000001;
				soundOpen="doorWoodFrontOpen";
				soundClose="doorWoodFrontClose";
				soundLocked="doorWoodFrontRattle";
				soundOpenABit="doorWoodFrontOpenABit";
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
			};
		};
	};
	class Land_Factory_Small: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\houses\factory_small.p3d";
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
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
			};
			class DoorsTwin1
			{
				displayName="door Twin1";
				component="DoorsTwin1";
				soundPos="doorsTwin1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
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
				soundOpen="doorMetalTwinOpen";
				soundClose="doorMetalTwinClose";
				soundLocked="doorMetalTwinRattle";
				soundOpenABit="doorMetalTwinOpenABit";
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
			};
		};
	};
	class Land_Guardhouse: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\houses\guardhouse.p3d";
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
	class Land_Repair_Center: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\houses\repair_center.p3d";
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
				soundOpen="doorMetalTwinBigOpen";
				soundClose="doorMetalTwinBigClose";
				soundLocked="doorMetalTwinBigRattle";
				soundOpenABit="doorMetalTwinBigOpenABit";
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
	};
	class Land_Water_Station: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\houses\water_station.p3d";
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
	class Land_Workshop1: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\houses\workshop1.p3d";
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
	class Land_Workshop2: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\houses\workshop2.p3d";
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
			};
		};
	};
	class Land_Workshop3: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\houses\workshop3.p3d";
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
				soundOpen="doorMetalTwinOpen";
				soundClose="doorMetalTwinClose";
				soundLocked="doorMetalTwinRattle";
				soundOpenABit="doorMetalTwinOpenABit";
			};
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
	class Land_Workshop4: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\houses\workshop4.p3d";
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
	class Land_Workshop5: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\houses\workshop5.p3d";
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
			};
		};
	};
	class Land_Mine_Building: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\mines\mine_building.p3d";
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
			};
		};
	};
	class Land_Misc_Scaffolding: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\misc\misc_scaffolding.p3d";
	};
	class Land_Misc_Through_Static: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\misc\misc_through_static.p3d";
	};
	class Land_Pipe_Big_BuildR: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="\dz\structures\Industrial\Pipes\Pipe_Big_BuildR";
	};
	class Land_Pipe_Big_BuildL: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="\dz\structures\Industrial\Pipes\Pipe_Big_BuildL";
	};
	class Land_Pipe_Big_CornerL: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="\dz\structures\Industrial\Pipes\Pipe_Big_CornerL";
	};
	class Land_Pipe_Big_CornerR: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="\dz\structures\Industrial\Pipes\Pipe_Big_CornerR";
	};
	class Land_Pipe_Big_Ground1: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="\dz\structures\Industrial\Pipes\Pipe_Big_Ground1";
	};
	class Land_Pipe_Big_Ground2: HouseNoDestruct
	{
		scope=1;
		displayName="";
		model="\dz\structures\Industrial\Pipes\Pipe_Big_Ground2";
	};
	class Land_Power_Station: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\power\power_station.p3d";
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
			};
		};
	};
	class Land_Power_Transformer_Build: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\power\power_transformer_build.p3d";
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
	class Land_Power_Pole_Conc1_Amp: HouseNoDestruct
	{
		displayName="$STR_CfgVehicles_Land_Power_Pole_Conc1_Amp0";
		model="\dz\structures\industrial\power\power_pole_conc1_amp.p3d";
		simulation="pasreceiver";
		broadcasterRange=750;
		range=100;
		gain=2;
	};
	class Land_Power_Pole_Conc4_Lamp_Amp: HouseNoDestruct
	{
		displayName="$STR_CfgVehicles_Land_Power_Pole_Conc1_Amp0";
		model="\dz\structures\industrial\power\power_pole_conc4_lamp_amp.p3d";
		simulation="pasreceiver";
		broadcasterRange=750;
		range=100;
		gain=2;
	};
	class Land_Power_Pole_Wood1_Amp: HouseNoDestruct
	{
		displayName="$STR_CfgVehicles_Land_Power_Pole_Wood1_Amp0";
		model="\dz\structures\industrial\power\power_pole_wood1_amp.p3d";
		simulation="pasreceiver";
		broadcasterRange=750;
		range=100;
		gain=2;
	};
	class Land_Power_Pole_Wood1_Lamp_Amp: HouseNoDestruct
	{
		displayName="$STR_CfgVehicles_Land_Power_Pole_Wood1_Amp0";
		model="\dz\structures\industrial\power\power_pole_wood1_lamp_amp.p3d";
		simulation="pasreceiver";
		broadcasterRange=750;
		range=100;
		gain=2;
	};
	class Land_Quarry_Main: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\quarry\quarry_main.p3d";
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
			};
		};
	};
	class Land_Sawmill_Building: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\sawmills\sawmill_building.p3d";
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
	class Land_Sawmill_Illuminanttower: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\sawmills\sawmill_illuminanttower.p3d";
	};
	class Land_Shed_Closed: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\sheds\shed_closed.p3d";
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
	};
	class Land_Smokestack_Big: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\smokestacks\smokestack_big.p3d";
		featureSize=50;
	};
	class Land_Smokestack_Brick: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\smokestacks\smokestack_brick.p3d";
	};
	class Land_Smokestack_Metal: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\smokestacks\smokestack_metal.p3d";
		featureSize=40;
	};
	class Land_Tank_Big: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\Industrial\Tanks\Tank_Big.p3d";
	};
	class Land_Tank_Medium_Stairs: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\tanks\tank_medium_stairs.p3d";
	};
	class Land_CoalPlant_Main: HouseNoDestruct
	{
		scope=2;
		model="\dz\structures\industrial\coalplant\coalplant_main.p3d";
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
			};
		};
	};
	class Land_Smokestack_Medium: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\smokestacks\smokestack_medium.p3d";
	};
	class Dam_Concrete_20_Floodgate: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\industrial\dams\dam_concrete_20_floodgate.p3d";
	};
	class Misc_Spotlight: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Spotlight.p3d";
		class AnimationSources
		{
			class spotlight_cone
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
	};
	class StaticObj_CementWorks_Conveyor_Up1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CementWorks\CementWorks_Conveyor_Up1.p3d";
	};
	class StaticObj_CementWorks_Conveyor_Up2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CementWorks\CementWorks_Conveyor_Up2.p3d";
	};
	class StaticObj_CementWorks_Conveyor_Up3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CementWorks\CementWorks_Conveyor_Up3.p3d";
	};
	class StaticObj_CementWorks_ConveyorFurnace: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CementWorks\CementWorks_ConveyorFurnace.p3d";
	};
	class StaticObj_CementWorks_ConveyorMillA: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CementWorks\CementWorks_ConveyorMillA.p3d";
	};
	class StaticObj_CementWorks_ConveyorMillB: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CementWorks\CementWorks_ConveyorMillB.p3d";
	};
	class StaticObj_CementWorks_ConveyorTowerA: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CementWorks\CementWorks_ConveyorTowerA.p3d";
	};
	class StaticObj_CementWorks_ConveyorTowerB: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CementWorks\CementWorks_ConveyorTowerB.p3d";
	};
	class StaticObj_CementWorks_ConveyorTowerC: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CementWorks\CementWorks_ConveyorTowerC.p3d";
	};
	class StaticObj_CementWorks_SiloBig1Bridge: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CementWorks\CementWorks_SiloBig1Bridge.p3d";
	};
	class StaticObj_CementWorks_SiloBig2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CementWorks\CementWorks_SiloBig2.p3d";
	};
	class StaticObj_CoalPlant_Conveyor: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CoalPlant\CoalPlant_Conveyor.p3d";
	};
	class StaticObj_CoalPlant_LoadingHouse: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\CoalPlant\CoalPlant_LoadingHouse.p3d";
	};
	class StaticObj_Container_1C: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Containers\Container_1C.p3d";
	};
	class StaticObj_Container_1D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Containers\Container_1D.p3d";
	};
	class StaticObj_Container_1N: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Containers\Container_1N.p3d";
	};
	class StaticObj_Container_1Nr: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Containers\Container_1Nr.p3d";
	};
	class StaticObj_Container_1Nr2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Containers\Container_1Nr2.p3d";
	};
	class StaticObj_Container_2A: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Containers\Container_2A.p3d";
	};
	class StaticObj_Container_2B: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Containers\Container_2B.p3d";
	};
	class StaticObj_Container_2C: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Containers\Container_2C.p3d";
	};
	class StaticObj_Container_2D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Containers\Container_2D.p3d";
	};
	class StaticObj_Container_2E: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Containers\Container_2E.p3d";
	};
	class StaticObj_Dam_Concrete_20: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Dams\Dam_Concrete_20.p3d";
	};
	class StaticObj_Dam_Concrete_20_Floodgate: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Dams\Dam_Concrete_20_Floodgate.p3d";
	};
	class StaticObj_Dam_Concrete_40: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Dams\Dam_Stone_40.p3d";
	};
	class StaticObj_Barn_CowshedA: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Farms\Farm_CowshedA.p3d";
	};
	class StaticObj_Barn_CowshedB: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Farms\Farm_CowshedB.p3d";
	};
	class StaticObj_Barn_CowshedC: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Farms\Farm_CowshedC.p3d";
	};
	class StaticObj_Barn_Hopper: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Farms\Farm_Hopper.p3d";
	};
	class StaticObj_Barn_StrawStack: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Farms\Farm_StrawStack.p3d";
	};
	class StaticObj_Barn_WaterTower: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Farms\Farm_WaterTower.p3d";
	};
	class StaticObj_Barn_WaterTower_Small: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Farms\Farm_WaterTower_Small.p3d";
	};
	class StaticObj_Boathouse_PierL: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Boathouse_PierL.p3d";
	};
	class StaticObj_Boathouse_PierR: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Boathouse_PierR.p3d";
	};
	class StaticObj_Boathouse_PierT: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Boathouse_PierT.p3d";
	};
	class StaticObj_Pier_Concrete1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete1.p3d";
	};
	class StaticObj_Pier_Concrete1_CornerIn: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete1_CornerIn.p3d";
	};
	class StaticObj_Pier_Concrete1_CornerOut: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete1_CornerOut.p3d";
	};
	class StaticObj_Pier_Concrete1_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete1_End.p3d";
	};
	class StaticObj_Pier_Concrete1_L: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete1_R.p3d";
	};
	class StaticObj_Pier_Concrete1_L10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete1_R10.p3d";
	};
	class StaticObj_Pier_Concrete1_L30: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete1_R30.p3d";
	};
	class StaticObj_Pier_Concrete1_TBig: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete1_TBig.p3d";
	};
	class StaticObj_Pier_Concrete1_TSmall: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete1_TSmall.p3d";
	};
	class StaticObj_Pier_Concrete2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete2.p3d";
	};
	class StaticObj_Pier_Concrete2_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete2_End.p3d";
	};
	class StaticObj_Pier_Concrete3_1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete3_1.p3d";
	};
	class StaticObj_Pier_Concrete3_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete3_2.p3d";
	};
	class StaticObj_Pier_Concrete3_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete3_End.p3d";
	};
	class StaticObj_Pier_Concrete3_Fuel: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Concrete3_Fuel.p3d";
	};
	class StaticObj_Pier_Crane_Rails: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Crane_Rails.p3d";
	};
	class StaticObj_Pier_Crane_Rails_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Crane_Rails_End.p3d";
	};
	class StaticObj_Pier_Tube_Big: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Tube_Big.p3d";
	};
	class StaticObj_Pier_Tube_Small: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Tube_Small.p3d";
	};
	class StaticObj_Pier_Wooden1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Wooden1.p3d";
	};
	class StaticObj_Pier_Wooden1_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Wooden1_End.p3d";
	};
	class StaticObj_Pier_Wooden1_Pillars: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Harbour\Pier_Wooden1_Pillars.p3d";
	};
	class StaticObj_Workshop_Box: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Houses\Workshop_Box.p3d";
	};
	class StaticObj_Mine_Conveyer1_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Mines\Mine_Conveyer1_10.p3d";
	};
	class StaticObj_Mine_Conveyer1_Begin: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Mines\Mine_Conveyer1_Begin.p3d";
	};
	class StaticObj_Mine_Conveyer1_EndBuild: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Mines\Mine_Conveyer1_EndBuild.p3d";
	};
	class StaticObj_Mine_Conveyer2_Build: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Mines\Mine_Conveyer2_Build.p3d";
	};
	class StaticObj_Mine_Heap: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Mines\Mine_Heap.p3d";
	};
	class StaticObj_Mine_Hopper_Build: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Mines\Mine_Hopper_Build.p3d";
	};
	class StaticObj_Mine_Hopper_Build_nolc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Mines\Mine_Hopper_Build_nolc.p3d";
	};
	class StaticObj_Mine_Rail: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Mines\Mine_Rail.p3d";
	};
	class StaticObj_Mine_Rail_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Mines\Mine_Rail_End.p3d";
	};
	class StaticObj_Mine_Rail_Switch: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Mines\Mine_Rail_Switch.p3d";
	};
	class StaticObj_Mine_Rail_Tram: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Mines\Mine_Rail_Tram.p3d";
	};
	class StaticObj_Mine_Tunnel: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Mines\Mine_Tunnel.p3d";
	};
	class StaticObj_Lamp_Ind: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Lamp_Ind.p3d";
	};
	class StaticObj_Lamp_Rail: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Lamp_Rail.p3d";
	};
	class StaticObj_Misc_BoardsPack1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_BoardsPack1.p3d";
	};
	class StaticObj_Misc_BoardsPack2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_BoardsPack2.p3d";
	};
	class StaticObj_Misc_BoardsPack3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_BoardsPack3.p3d";
	};
	class StaticObj_Misc_Coil: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Coil.p3d";
	};
	class StaticObj_Misc_ConcretePanels: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_ConcretePanels.p3d";
	};
	class StaticObj_Misc_ConcretePipe: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_ConcretePipe.p3d";
	};
	class StaticObj_Misc_ConcretePipe_Gate: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_ConcretePipe_Gate.p3d";
	};
	class StaticObj_Misc_Drainage: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Drainage.p3d";
	};
	class StaticObj_Misc_GContainer_Big: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_GContainer_Big.p3d";
	};
	class StaticObj_Misc_HayBale: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_HayBale.p3d";
	};
	class StaticObj_Misc_HayBale_Decayed: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_HayBale_Decayed.p3d";
	};
	class StaticObj_Misc_Pallet: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Pallet.p3d";
	};
	class StaticObj_Misc_Pallets1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Pallets1.p3d";
	};
	class StaticObj_Misc_Pallets2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Pallets2.p3d";
	};
	class StaticObj_Misc_Pallets3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Pallets3.p3d";
	};
	class StaticObj_Misc_Pipes: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Pipes.p3d";
	};
	class StaticObj_Misc_Pipes_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Pipes_2.p3d";
	};
	class StaticObj_Misc_Through_Trailer: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Through_Trailer.p3d";
	};
	class StaticObj_Misc_Timbers_Log1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Timbers_Log1.p3d";
	};
	class StaticObj_Misc_Timbers_Log2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Timbers_Log2.p3d";
	};
	class StaticObj_Misc_Timbers_Log3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Timbers_Log3.p3d";
	};
	class StaticObj_Misc_Timbers_Log4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Timbers_Log4.p3d";
	};
	class StaticObj_Misc_Timbers_Log5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Timbers_Log5.p3d";
	};
	class StaticObj_Misc_Timbers1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Timbers1.p3d";
	};
	class StaticObj_Misc_Timbers2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Timbers2.p3d";
	};
	class StaticObj_Misc_Timbers3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Timbers3.p3d";
	};
	class StaticObj_Misc_Timbers4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Timbers4.p3d";
	};
	class StaticObj_Misc_TirePile: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_TirePile.p3d";
	};
	class StaticObj_Misc_Tire_Big: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_Tire_Big.p3d";
	};
	class StaticObj_Misc_TirePile_Group: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_TirePile_Group.p3d";
	};
	class StaticObj_Misc_WoodPile_Forest1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_WoodPile_Forest1.p3d";
	};
	class StaticObj_Misc_WoodPile_Forest2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_WoodPile_Forest2.p3d";
	};
	class StaticObj_Misc_WoodPile_Forest3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Misc\Misc_WoodPile_Forest3.p3d";
	};
	class StaticObj_Pipe_Big_9m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Big_9m.p3d";
	};
	class StaticObj_Pipe_Big_18m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Big_18m.p3d";
	};
	class StaticObj_Pipe_Big_18m_Ladder: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Big_18m_Ladder.p3d";
	};
	class StaticObj_Pipe_Big_SmallConL: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Big_SmallConL.p3d";
	};
	class StaticObj_Pipe_Big_SmallConR: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Big_SmallConR.p3d";
	};
	class StaticObj_Pipe_Big_Support: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Big_Support.p3d";
	};
	class StaticObj_Pipe_Med_9m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Med_9m.p3d";
	};
	class StaticObj_Pipe_Med_Ground1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Med_Ground1.p3d";
	};
	class StaticObj_Pipe_Med_Ground2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Med_Ground2.p3d";
	};
	class StaticObj_Pipe_MedL_BuildR: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_MedL_BuildR.p3d";
	};
	class StaticObj_Pipe_MedL_CornerL: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_MedL_CornerL.p3d";
	};
	class StaticObj_Pipe_MedL_CornerR: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_MedL_CornerR.p3d";
	};
	class StaticObj_Pipe_Med_BuildL: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_MedR_BuildL.p3d";
	};
	class StaticObj_Pipe_Med_BuildR: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_MedR_BuildR.p3d";
	};
	class StaticObj_Pipe_Small_20m: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Small_20m.p3d";
	};
	class StaticObj_Pipe_Small_Broken: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Small_Broken.p3d";
	};
	class StaticObj_Pipe_Small_Ground1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Small_Ground1.p3d";
	};
	class StaticObj_Pipe_Small_Ground2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Small_Ground2.p3d";
	};
	class StaticObj_Pipe_Small_L45: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Small_L45.p3d";
	};
	class StaticObj_Pipe_Small_L90: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Small_L90.p3d";
	};
	class StaticObj_Pipe_Small_R45: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Small_R45.p3d";
	};
	class StaticObj_Pipe_Small_R90: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Small_R90.p3d";
	};
	class StaticObj_Pipe_Small_Stairs: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Small_Stairs.p3d";
	};
	class StaticObj_Pipe_Small_U: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Small_U.p3d";
	};
	class StaticObj_Pipe_Small_Valve: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Pipes\Pipe_Small_Valve.p3d";
	};
	class StaticObj_Power_HV_Line: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_HV_Line.p3d";
	};
	class StaticObj_Power_HV_Line_80m_damaged: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_HV_Line_80m_damaged.p3d";
	};
	class StaticObj_Power_HV_Line_damaged: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_HV_Line_damaged.p3d";
	};
	class StaticObj_Power_HV_Line_Turn: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_HV_Line.p3d";
	};
	class StaticObj_Power_HV_Line_TurnL: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_HV_Line_TurnL.p3d";
	};
	class StaticObj_Power_HV_Line_TurnR: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_HV_Line_TurnR.p3d";
	};
	class StaticObj_Power_HV_Tower: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_HV_Tower.p3d";
	};
	class StaticObj_Power_Pole_ConcT: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_Pole_ConcT.p3d";
	};
	class StaticObj_Power_Pole_Wood1_Trail_B: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_Pole_Wood1_Trail_B.p3d";
	};
	class StaticObj_Power_Pole_Wood1_Trail_G: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_Pole_Wood1_Trail_G.p3d";
	};
	class StaticObj_Power_Pole_Wood1_Trail_R: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_Pole_Wood1_Trail_R.p3d";
	};
	class StaticObj_Power_Pole_Wood1_Trail_Y: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_Pole_Wood1_Trail_Y.p3d";
	};
	class StaticObj_Power_Pole_Wood2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_Pole_Wood2.p3d";
	};
	class StaticObj_Power_Pole_Wood3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_Pole_Wood3.p3d";
	};
	class StaticObj_Power_Transformer_Small: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_Transformer_Small.p3d";
	};
	class StaticObj_Power_TransformerStation_Big: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_TransformerStation_Big.p3d";
	};
	class StaticObj_Power_TransformerStation_Cables: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Power\Power_TransformerStation_Cables.p3d";
	};
	class StaticObj_Quarry_Conveyer: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Quarry\Quarry_Conveyer.p3d";
	};
	class StaticObj_Quarry_ConveyerLong: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Quarry\Quarry_ConveyerLong.p3d";
	};
	class StaticObj_Quarry_HammerMill: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Quarry\Quarry_HammerMill.p3d";
	};
	class StaticObj_Shed_Open_Big: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Sheds\Shed_Open_Big.p3d";
	};
	class StaticObj_Shed_Open_Big_end: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Sheds\Shed_Open_Big_end.p3d";
	};
	class StaticObj_Shed_Open_Sawmill: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Sheds\Shed_Open_Sawmill.p3d";
	};
	class StaticObj_Shed_Open_SideRoof: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Sheds\Shed_Open_SideRoof.p3d";
	};
	class StaticObj_Shed_Open_Small: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Sheds\Shed_Open_Small.p3d";
	};
	class StaticObj_Shed_Open_Small_end: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Sheds\Shed_Open_Small_end.p3d";
	};
	class StaticObj_Tank_Medium: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Tanks\Tank_Medium.p3d";
	};
	class StaticObj_Tank_Small_Gas: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Tanks\Tank_Small_Gas.p3d";
	};
	class StaticObj_Tank_Small_Rusty: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Tanks\Tank_Small_Rusty.p3d";
	};
	class StaticObj_Tank_Small_White: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Industrial\Tanks\Tank_Small_White.p3d";
	};
};

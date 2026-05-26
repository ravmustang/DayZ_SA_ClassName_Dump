class CfgPatches
{
	class DZ_Structures_Walls
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
	class Land_Wall_Gate_Camp: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_camp.p3d";
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
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors2
			{
				displayName="door 2";
				component="Doors2";
				soundPos="doors2_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors3
			{
				displayName="door 3";
				component="Doors3";
				soundPos="doors3_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.69999999;
				soundOpen="doorMetalGateOpen";
				soundClose="doorMetalGateClose";
				soundLocked="doorMetalGateRattle";
				soundOpenABit="doorMetalGateOpenABit";
			};
			class Doors4
			{
				displayName="door 4";
				component="Doors4";
				soundPos="doors4_action";
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
				class doors2
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
				class doors3
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
				class doors4
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
	class Land_Wall_Gate_Fen2_L: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_fen2_l.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalGateMeshOpen";
				soundClose="doorMetalGateMeshClose";
				soundLocked="doorMetalGateMeshRattle";
				soundOpenABit="doorMetalGateMeshOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_Fen2_R: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_fen2_r.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalGateMeshOpen";
				soundClose="doorMetalGateMeshClose";
				soundLocked="doorMetalGateMeshRattle";
				soundOpenABit="doorMetalGateMeshOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_FenG: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_feng.p3d";
		bounding="BSphere";
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
			};
		};
	};
	class Land_Wall_Gate_FenG_Big: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_feng_big.p3d";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
				class doors2
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
				class Twin1
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
	class Land_Wall_Gate_FenG_Big_L: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_feng_big_l.p3d";
		bounding="BSphere";
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
				class doors1
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
			};
		};
	};
	class Land_Wall_Gate_FenG_Big_Open: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_feng_big_open.p3d";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
				class doors2
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
	class Land_Wall_Gate_FenG_Big_R: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_feng_big_r.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_FenG_Open: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_feng_open.p3d";
		bounding="BSphere";
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
				class doors2
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
	class Land_Wall_Gate_FenR: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_fenr.p3d";
		bounding="BSphere";
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
			};
		};
	};
	class Land_Wall_Gate_FenR_Big: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_fenr_big.p3d";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
				class doors2
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
	class Land_Wall_Gate_FenR_Big_L: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_fenr_big_l.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_FenR_Big_Open: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_fenr_big_open.p3d";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
				class doors2
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
	class Land_Wall_Gate_FenR_Big_R: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_fenr_big_r.p3d";
		bounding="BSphere";
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=1;
				initOpened=0.30000001;
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_FenR_Open: Land_Wall_Gate_FenR
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_fenr_open.p3d";
		bounding="BSphere";
	};
	class Land_Wall_Gate_Ind1_L: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_ind1_l.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_Ind1_R: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_ind1_r.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_Ind2A_L: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_ind2a_l.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_Ind2A_R: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_ind2a_r.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_Ind2B_L: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_ind2b_l.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_Ind2B_R: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_ind2b_r.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_Ind2Rail_L: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_ind2rail_l.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_Ind2Rail_R: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_ind2rail_r.p3d";
		bounding="BSphere";
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
				soundOpen="doorMetalGateBigOpen";
				soundClose="doorMetalGateBigClose";
				soundLocked="doorMetalGateBigRattle";
				soundOpenABit="doorMetalGateBigOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_Village: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_village.p3d";
		bounding="BSphere";
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
			};
		};
	};
	class Land_Wall_Gate_Wood1: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_wood1.p3d";
		bounding="BSphere";
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
				soundOpen="doorWoodGateSmallOpen";
				soundClose="doorWoodGateSmallClose";
				soundLocked="doorWoodGateSmallRattle";
				soundOpenABit="doorWoodGateSmallOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_Wood2: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_wood2.p3d";
		bounding="BSphere";
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
				soundOpen="doorWoodGateSmallOpen";
				soundClose="doorWoodGateSmallClose";
				soundLocked="doorWoodGateSmallRattle";
				soundOpenABit="doorWoodGateSmallOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_Wood3: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_wood3.p3d";
		bounding="BSphere";
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
				soundOpen="doorWoodGateSmallOpen";
				soundClose="doorWoodGateSmallClose";
				soundLocked="doorWoodGateSmallRattle";
				soundOpenABit="doorWoodGateSmallOpenABit";
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
			};
		};
	};
	class Land_Wall_Gate_Wood4: HouseNoDestruct
	{
		scope=1;
		model="\dz\structures\walls\wall_gate_wood4.p3d";
		bounding="BSphere";
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
				soundOpen="doorWoodGateOpen";
				soundClose="doorWoodGateClose";
				soundLocked="doorWoodGateRattle";
				soundOpenABit="doorWoodGateOpenABit";
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
			};
		};
	};
	class StaticObj_Wall_CBrk_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CBrk_5.p3d";
	};
	class StaticObj_Wall_CBrk_5_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CBrk_5_D.p3d";
	};
	class StaticObj_Wall_CBrk_Corner: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CBrk_Corner.p3d";
	};
	class StaticObj_Wall_CBrk_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CBrk_End.p3d";
	};
	class StaticObj_Wall_CBrk_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CBrk_Pole.p3d";
	};
	class StaticObj_Wall_CGry_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CGry_5.p3d";
	};
	class StaticObj_Wall_CGry_5_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CGry_5_D.p3d";
	};
	class StaticObj_Wall_CGry_Corner: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CGry_Corner.p3d";
	};
	class StaticObj_Wall_CGry_Corner_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CGry_Corner_2.p3d";
	};
	class StaticObj_Wall_CGry_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CGry_End.p3d";
	};
	class StaticObj_Wall_CGryLow_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CGryLow_5.p3d";
	};
	class StaticObj_Wall_CGryLow_End1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CGryLow_End1.p3d";
	};
	class StaticObj_Wall_CGryLow_End2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CGryLow_End2.p3d";
	};
	class StaticObj_Wall_Cnc_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Cnc_5.p3d";
	};
	class StaticObj_Wall_CncSmall_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CncSmall_4.p3d";
	};
	class StaticObj_Wall_CncSmall_8: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CncSmall_8.p3d";
	};
	class StaticObj_Wall_CYel_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CYel_5.p3d";
	};
	class StaticObj_Wall_CYel_Corner: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CYel_Corner.p3d";
	};
	class StaticObj_Wall_CYel_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CYel_End.p3d";
	};
	class StaticObj_Wall_CYel_End2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_CYel_End2.p3d";
	};
	class StaticObj_Wall_Fen1_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Fen1_5.p3d";
	};
	class StaticObj_Wall_Fen1_5_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Fen1_5_2.p3d";
	};
	class StaticObj_Wall_Fen1_5_Hole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Fen1_5_Hole.p3d";
	};
	class StaticObj_Wall_Fen1_5_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Fen1_5_Pole.p3d";
	};
	class StaticObj_Wall_Fen2_6: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Fen2_6.p3d";
	};
	class StaticObj_Wall_Fen2_6_Hole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Fen2_6_Hole.p3d";
	};
	class StaticObj_Wall_Fen2_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Fen2_Pole.p3d";
	};
	class StaticObj_Wall_FenG_3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_FenG_3.p3d";
	};
	class StaticObj_Wall_FenG_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_FenG_Pole.p3d";
	};
	class StaticObj_Wall_FenR_3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_FenR_3.p3d";
	};
	class StaticObj_Wall_FenR_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_FenR_Pole.p3d";
	};
	class StaticObj_Wall_FenW_7: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_FenW_7.p3d";
	};
	class StaticObj_Wall_FenW_7_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_FenW_7_D.p3d";
	};
	class StaticObj_Wall_FenW_7_S: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_FenW_7_S.p3d";
	};
	class StaticObj_Wall_ForFieldFen_1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_ForFieldFen_1.p3d";
	};
	class StaticObj_Wall_ForFieldFen_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_ForFieldFen_2.p3d";
	};
	class StaticObj_Wall_ForFieldFen_end: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_ForFieldFen_end.p3d";
	};
	class StaticObj_Wall_GarbCont: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_GarbCont.p3d";
	};
	class StaticObj_Wall_GarbCont_Corner: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_GarbCont_Corner.p3d";
	};
	class StaticObj_Wall_Gate_CGry: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Gate_CGry.p3d";
	};
	class StaticObj_Wall_IndVar2_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndVar2_Pole.p3d";
	};
	class StaticObj_Wall_IndCnc_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndCnc_4.p3d";
	};
	class StaticObj_Wall_IndCnc_4_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndCnc_4_D.p3d";
	};
	class StaticObj_Wall_IndCnc_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndCnc_10.p3d";
	};
	class StaticObj_Wall_IndCnc_End_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndCnc_End_2.p3d";
	};
	class StaticObj_Wall_IndCnc_End_3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndCnc_End_3.p3d";
	};
	class StaticObj_Wall_IndCnc_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndCnc_Pole.p3d";
	};
	class StaticObj_Wall_IndCnc2_3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndCnc2_3.p3d";
	};
	class StaticObj_Wall_IndCncH_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndCncH_5.p3d";
	};
	class StaticObj_Wall_IndCncH_10: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndCncH_10.p3d";
	};
	class StaticObj_Wall_IndFnc_3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndFnc_3.p3d";
	};
	class StaticObj_Wall_IndFnc_3_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndFnc_3_D.p3d";
	};
	class StaticObj_Wall_IndFnc_3_Hole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndFnc_3_Hole.p3d";
	};
	class StaticObj_Wall_IndFnc_9: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndFnc_9.p3d";
	};
	class StaticObj_Wall_IndFnc_Corner: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndFnc_Corner.p3d";
	};
	class StaticObj_Wall_IndFnc_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndFnc_Pole.p3d";
	};
	class StaticObj_Wall_IndVar1_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndVar1_5.p3d";
	};
	class StaticObj_Wall_IndVar1_5_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndVar1_5_2.p3d";
	};
	class StaticObj_Wall_IndVar1_5_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndVar1_5_D.p3d";
	};
	class StaticObj_Wall_IndVar1_5_D_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndVar1_5_D_2.p3d";
	};
	class StaticObj_Wall_IndVar1_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndVar1_Pole.p3d";
	};
	class StaticObj_Wall_IndVar2_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndVar2_5.p3d";
	};
	class StaticObj_Wall_IndVar2_5_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_IndVar2_5_D.p3d";
	};
	class StaticObj_Wall_VilVar2_4_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_VilVar2_4_2.p3d";
	};
	class StaticObj_Wall_VilVar2_4_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_VilVar2_4_D.p3d";
	};
	class StaticObj_Wall_VilVar2_4_END: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_VilVar2_4_END.p3d";
	};
	class StaticObj_Wall_VilVar2_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_VilVar2_Pole.p3d";
	};
	class StaticObj_Wall_Wood1_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood1_5.p3d";
	};
	class StaticObj_Wall_Wood1_5_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood1_5_2.p3d";
	};
	class StaticObj_Wall_Wood1_5_pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood1_5_pole.p3d";
	};
	class StaticObj_Wall_Wood1D_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood1D_5.p3d";
	};
	class StaticObj_Wall_Wood1D_5_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood1D_5_2.p3d";
	};
	class StaticObj_Wall_Wood1D_5_pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood1D_5_pole.p3d";
	};
	class StaticObj_Wall_Wood2_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood2_5.p3d";
	};
	class StaticObj_Wall_Wood2_5_D: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood2_5_D.p3d";
	};
	class StaticObj_Wall_Wood2_5_END: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood2_5_END.p3d";
	};
	class StaticObj_Wall_Wood2_5_END_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood2_5_END_2.p3d";
	};
	class StaticObj_Wall_Wood2_5_nolc: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood2_5_nolc.p3d";
	};
	class StaticObj_Wall_Wood2_5_pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood2_5_pole.p3d";
	};
	class StaticObj_Wall_Wood3_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood3_4.p3d";
	};
	class StaticObj_Wall_Wood3_4_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood3_4_End.p3d";
	};
	class StaticObj_Wall_Wood4_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood4_4.p3d";
	};
	class StaticObj_Wall_Wood4_End1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood4_End1.p3d";
	};
	class StaticObj_Wall_Wood4_End2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood4_End2.p3d";
	};
	class StaticObj_Wall_Wood4_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Wood4_Pole.p3d";
	};
	class StaticObj_Wall_WoodF_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_WoodF_5.p3d";
	};
	class StaticObj_Wall_WoodF_5_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_WoodF_5_2.p3d";
	};
	class StaticObj_Wall_WoodF_5_END: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_WoodF_5_END.p3d";
	};
	class StaticObj_Wall_WoodVil_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_WoodVil_4.p3d";
	};
	class StaticObj_Wall_WoodVil_4_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_WoodVil_4_2.p3d";
	};
	class StaticObj_Wall_WoodVil_4_pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_WoodVil_4_pole.p3d";
	};
	class StaticObj_Walls_End: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Walls_End.p3d";
	};
	class StaticObj_Wall_Railing_1: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Railing_1.p3d";
	};
	class StaticObj_Wall_Railing_1_EndL: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Railing_1_EndL.p3d";
	};
	class StaticObj_Wall_Railing_1_EndR: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Railing_1_EndR.p3d";
	};
	class StaticObj_Wall_Railing_1_Slope: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Railing_1_Slope.p3d";
	};
	class StaticObj_Wall_Railing_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Railing_2.p3d";
	};
	class StaticObj_Wall_Railing_2_Slope: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Railing_2_Slope.p3d";
	};
	class StaticObj_Wall_Railing_EndL: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Railing_EndL.p3d";
	};
	class StaticObj_Wall_Railing_EndR: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Railing_EndR.p3d";
	};
	class StaticObj_Wall_Stone: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Stone.p3d";
	};
	class StaticObj_Wall_StoneD: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_StoneD.p3d";
	};
	class StaticObj_Wall_Tin_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Tin_4.p3d";
	};
	class StaticObj_Wall_Tin_4_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Tin_4_2.p3d";
	};
	class StaticObj_Wall_Tin_5: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Tin_5.p3d";
	};
	class StaticObj_Wall_Tin_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_Tin_Pole.p3d";
	};
	class StaticObj_Wall_TinCom_3: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_TinCom_3.p3d";
	};
	class StaticObj_Wall_TinCom_9: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_TinCom_9.p3d";
	};
	class StaticObj_Wall_TinCom_9_2: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_TinCom_9_2.p3d";
	};
	class StaticObj_Wall_TinCom_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_TinCom_Pole.p3d";
	};
	class StaticObj_Wall_VilVar1_6: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_VilVar1_6.p3d";
	};
	class StaticObj_Wall_VilVar1_Pole: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_VilVar1_Pole.p3d";
	};
	class StaticObj_Wall_VilVar2_4: HouseNoDestruct
	{
		scope=1;
		model="DZ\structures\Walls\Wall_VilVar2_4.p3d";
	};
};

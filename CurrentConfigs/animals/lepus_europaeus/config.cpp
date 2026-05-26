class CfgPatches
{
	class DZ_Animals_lepus_europaeus
	{
		units[]=
		{
			"Animal_LepusEuropaeus"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Animals"
		};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class Animal_LepusEuropaeus: AnimalBase
	{
		simulation="dayzanimal";
		scope=2;
		model="\DZ\animals\lepus_europaeus\lepus_europaeus.p3d";
		displayName="$STR_CfgVehicles_Animal_LepusEuropaeus0";
		descriptionShort="$STR_CfgVehicles_Animal_LepusEuropaeus1";
		aiAgentTemplate="AmbientLife_Lepus_Europaeus";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
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
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item="RabbitLegMeat";
				count=2;
				quantityMinMaxCoef[]={0.75,1};
			};
			class ObtainedPelt
			{
				item="RabbitPelt";
				count=1;
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedLard
			{
				item="Lard";
				count=1;
				quantityMinMaxCoef[]={0.1,0.2};
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
					chance=0.40000001;
				};
			};
		};
		class enfanimsys
		{
			meshObject="dz\animals\lepus_europaeus\data\lepus_europaeus_skeleton.xob";
			graphname="dz\animals\animations\!graph_files\AmbientLife\AmbientLife_Graph.agr";
			defaultinstance="dz\animals\animations\!graph_files\AmbientLife\LepusEuropaeus_Skeleton_AnimInstance.asi";
			startnode="Master_SM";
			skeletonName="lepus_europaeus_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="PawSmallWalk_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=1;
				};
				class Walk2
				{
					soundLookupTable="PawSmallWalk_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=2;
				};
				class Walk3
				{
					soundLookupTable="PawSmallWalk_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=3;
				};
				class Walk4
				{
					soundLookupTable="PawSmallWalk_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=4;
				};
				class Run1
				{
					soundLookupTable="PawSmallRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=5;
				};
				class Run2
				{
					soundLookupTable="PawSmallRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=6;
				};
				class Run3
				{
					soundLookupTable="PawSmallRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=7;
				};
				class Run4
				{
					soundLookupTable="PawSmallRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=8;
				};
				class Grazing1
				{
					soundLookupTable="PawSmallGrazing_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=9;
				};
				class Grazing2
				{
					soundLookupTable="PawSmallGrazing_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=10;
				};
				class Bodyfall
				{
					soundLookupTable="PawSmallBodyfall_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=11;
				};
				class Settle
				{
					soundLookupTable="PawSmallSettle_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=12;
				};
				class Rest2standA
				{
					soundLookupTable="PawSmallRest2standA_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=13;
				};
				class Rest2standB
				{
					soundLookupTable="PawSmallRest2standB_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=14;
				};
				class Stand2restA
				{
					soundLookupTable="PawSmallStand2restA_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=15;
				};
				class Stand2restB
				{
					soundLookupTable="PawSmallStand2restB_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=16;
				};
				class Stand2restC
				{
					soundLookupTable="PawSmallStand2restC_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=17;
				};
				class Jump
				{
					soundLookupTable="PawSmallJump_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=18;
				};
				class Impact
				{
					soundLookupTable="PawSmallImpact_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=19;
				};
			};
			class Sounds
			{
				class HareChirp
				{
					soundSet="BrownHareIdle_SoundSet";
					noise="WolfRoarNoise";
					id=1;
				};
				class HareScream
				{
					soundSet="BrownHareDeath_SoundSet";
					noise="WolfRoarNoise";
					id=2;
				};
				class HareSquawk
				{
					soundSet="BrownHarePain_SoundSet";
					noise="WolfRoarNoise";
					id=3;
				};
			};
			class Damages
			{
				class Bite
				{
					damage="WolfBiteDamage";
					id=1;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping=1;
			movementSpeedMapping[]={0,0.25,0.80000001,3,5};
		};
	};
};

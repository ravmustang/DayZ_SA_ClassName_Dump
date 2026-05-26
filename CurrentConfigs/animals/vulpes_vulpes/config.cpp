class CfgPatches
{
	class DZ_Animals_vulpes_vulpes
	{
		units[]=
		{
			"Animal_VulpesVulpes"
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
	class Animal_VulpesVulpes: AnimalBase
	{
		simulation="dayzanimal";
		scope=2;
		model="\DZ\animals\vulpes_vulpes\vulpes_vulpes.p3d";
		displayName="$STR_CfgVehicles_Animal_VulpesVulpes0";
		descriptionShort="$STR_CfgVehicles_Animal_VulpesVulpes1";
		aiAgentTemplate="AmbientLife_Vulpes_Vulpes";
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
		class Skinning
		{
			class ObtainedSteaks
			{
				item="FoxSteakMeat";
				count=4;
				itemZones[]=
				{
					"Zone_Chest"
				};
				quantityMinMaxCoef[]={0.5,1};
			};
			class ObtainedPelt
			{
				item="FoxPelt";
				count=1;
				itemZones[]=
				{
					"Zone_Chest"
				};
				quantityCoef=1;
				transferToolDamageCoef=1;
			};
			class ObtainedLard
			{
				item="Lard";
				count=1;
				quantityMinMaxCoef[]={0.2,0.40000001};
			};
			class ObtainedBones
			{
				item="Bone";
				count=1;
				quantityMinMaxCoef[]={0.60000002,8};
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
			meshObject="dz\animals\vulpes_vulpes\data\vulpes_vulpes_skeleton.xob";
			graphname="dz\animals\animations\!graph_files\AmbientLife\AmbientLife_Graph.agr";
			defaultinstance="dz\animals\animations\!graph_files\AmbientLife\VulpesVulpes_Skeleton.asi";
			startnode="Master_SM";
			skeletonName="vulpes_vulpes_skeleton.xob";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="PawMediumWalk_LookupTable";
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
					soundLookupTable="PawMediumWalk_LookupTable";
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
					soundLookupTable="PawMediumWalk_LookupTable";
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
					soundLookupTable="PawMediumWalk_LookupTable";
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
					soundLookupTable="PawMediumRun_LookupTable";
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
					soundLookupTable="PawMediumRun_LookupTable";
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
					soundLookupTable="PawMediumRun_LookupTable";
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
					soundLookupTable="PawMediumRun_LookupTable";
					noise="WolfStepNoise";
					effectSet[]=
					{
						"WolfStepEffect1",
						"WolfStepEffect2"
					};
					id=8;
				};
				class Bodyfall
				{
					soundLookupTable="PawMediumBodyfall_LookupTable";
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
					soundLookupTable="PawMediumSettle_LookupTable";
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
					soundLookupTable="PawMediumRest2standA_LookupTable";
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
					soundLookupTable="PawMediumRest2standB_LookupTable";
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
					soundLookupTable="PawMediumStand2restA_LookupTable";
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
					soundLookupTable="PawMediumStand2restB_LookupTable";
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
					soundLookupTable="PawMediumStand2restC_LookupTable";
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
					soundLookupTable="PawMediumJump_LookupTable";
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
					soundLookupTable="PawMediumImpact_LookupTable";
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
				class Red_Fox_Bark
				{
					soundSet="Red_Fox_Bark_SoundSet";
					noise="WolfRoarNoise";
					id=1;
				};
				class Red_Fox_Death
				{
					soundSet="Red_Fox_Death_SoundSet";
					noise="WolfRoarNoise";
					id=2;
				};
				class Red_Fox_Eating
				{
					soundSet="Red_Fox_Eating_SoundSet";
					noise="WolfRoarNoise";
					id=3;
				};
				class Red_Fox_Funny
				{
					soundSet="Red_Fox_Funny_SoundSet";
					noise="WolfRoarNoise";
					id=4;
				};
				class Red_Fox_Nervous
				{
					soundSet="Red_Fox_Nervous_SoundSet";
					noise="WolfRoarNoise";
					id=5;
				};
				class Red_Fox_Scared
				{
					soundSet="Red_Fox_Scared_SoundSet";
					noise="WolfRoarNoise";
					id=6;
				};
				class Red_Fox_Shake
				{
					soundSet="Red_Fox_Shake_SoundSet";
					noise="WolfRoarNoise";
					id=7;
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

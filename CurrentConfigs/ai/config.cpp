class CfgPatches
{
	class DZ_AI
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
class CfgAIBehaviours
{
	class AmbientLife
	{
		HeadLookBoneName="pin_lookat";
		teamName="AmbientLife";
		class PathAgent
		{
			radius=0.30000001;
			height=0.5;
		};
		class BehaviourHLAmbientLife
		{
			agentPathLength=20;
			agentPathUpdateDelta=2;
			agentPathMinLength=2.5;
			class SlotCalm
			{
				class BehaviourAmbientLifeCalm
				{
					walkWeight=25;
					idle1Weight=25;
					idle2Weight=0;
					idle3Weight=25;
					walkingDurationMin=5;
					walkingDurationMax=20;
					idle1DurationMin=5;
					idle1DurationMax=20;
					idle2DurationMin=5;
					idle2DurationMax=20;
					idle3DurationMin=5;
					idle3DurationMax=20;
					class WalkingMovement
					{
						maxSpeed=0.14;
						minSpeed=0.1;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourNonSpecificThreat
				{
					lookWeight=30;
					sniffWeight=0;
					sniffDuration=0.5;
					lookDuration=6;
				};
			};
			class SlotAlerted
			{
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=3;
						minSpeed=1;
						acceleration=5;
						maxAngleSpeed=180;
						slowRadius=1;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="ChickenOnRun";
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"HenCluck_X_SoundSet"
							};
						};
						probability=0.89999998;
						RepeatTimeMin=1;
						RepeatTimeMax=3;
						RepeatEnabled="true";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=10;
				noiseToAlertMultiplier=1.5;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=6;
					dropDelay=3;
					maxAlertValue=20;
				};
				class NonSpecificThreat
				{
					dropSpeed=6;
					dropDelay=3;
					maxAlertValue=40;
				};
				class Alerted
				{
					dropSpeed=10;
					dropDelay=4;
					maxAlertValue=100;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=2;
			rangeMax=15;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemAmbientLife
		{
			visionManSizeStand=1.5;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.44999999;
			visionRangeMin=2;
			visionRangeMax=10;
			visionNightMinMult=1;
			visionNightMaxMult=0.5;
		};
	};
	class AmbientLife_Gallus_Gallus_Domesticus
	{
		HeadLookBoneName="pin_lookat";
		teamName="AmbientLife";
		class PathAgent
		{
			radius=0.30000001;
			height=0.5;
		};
		class BehaviourHLAmbientLife
		{
			agentPathLength=20;
			agentPathUpdateDelta=2;
			agentPathMinLength=2.5;
			class SlotCalm
			{
				class BehaviourAmbientLifeCalm
				{
					walkWeight=25;
					idle1Weight=25;
					idle2Weight=0;
					idle3Weight=25;
					walkingDurationMin=5;
					walkingDurationMax=20;
					idle1DurationMin=5;
					idle1DurationMax=20;
					idle2DurationMin=5;
					idle2DurationMax=20;
					idle3DurationMin=2;
					idle3DurationMax=6;
					class WalkingMovement
					{
						maxSpeed=0.14;
						minSpeed=0.1;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourNonSpecificThreat
				{
					lookWeight=30;
					sniffWeight=0;
					sniffDuration=0.5;
					lookDuration=6;
				};
			};
			class SlotAlerted
			{
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=3;
						minSpeed=1;
						acceleration=5;
						maxAngleSpeed=180;
						slowRadius=1;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="ChickenOnRun";
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"HenCluck_X_SoundSet"
							};
						};
						probability=0.89999998;
						RepeatTimeMin=1;
						RepeatTimeMax=3;
						RepeatEnabled="true";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=10;
				noiseToAlertMultiplier=1.5;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=6;
					dropDelay=3;
					maxAlertValue=20;
				};
				class NonSpecificThreat
				{
					dropSpeed=6;
					dropDelay=3;
					maxAlertValue=40;
				};
				class Alerted
				{
					dropSpeed=10;
					dropDelay=4;
					maxAlertValue=100;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=2;
			rangeMax=15;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemAmbientLife
		{
			visionManSizeStand=1.5;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.44999999;
			visionRangeMin=2;
			visionRangeMax=10;
			visionNightMinMult=1;
			visionNightMaxMult=0.5;
		};
	};
	class AmbientLife_Lepus_Europaeus
	{
		HeadLookBoneName="pin_lookat";
		teamName="AmbientLife";
		class PathAgent
		{
			radius=0.30000001;
			height=0.30000001;
		};
		class BehaviourHLAmbientLife
		{
			agentPathLength=8;
			agentPathUpdateDelta=2;
			agentPathMinLength=1;
			agentChanceForAggressiveTurns="true";
			instantAlertEnabled="true";
			instantAlertRangeMin=3;
			instantAlertRangeMax=5;
			instantAlertStrength=100;
			class SlotCalm
			{
				class BehaviourAmbientLifeCalm
				{
					walkWeight=35;
					idle1Weight=20;
					idle2Weight=20;
					idle3Weight=15;
					walkingDurationMin=5;
					walkingDurationMax=20;
					idle1DurationMin=5;
					idle1DurationMax=15;
					idle2DurationMin=5;
					idle2DurationMax=15;
					idle3DurationMin=2;
					idle3DurationMax=15;
					class WalkingMovement
					{
						maxSpeed=1.8;
						minSpeed=1.5;
						acceleration=1.5;
						maxAngleSpeed=45;
						slowRadius=0.5;
						goalRadius=2;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourNonSpecificThreat
				{
					lookWeight=80;
					sniffWeight=20;
					lookDuration=4;
					sniffDuration=2;
				};
			};
			class SlotAlerted
			{
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=5;
						minSpeed=3;
						acceleration=5;
						maxAngleSpeed=180;
						slowRadius=0.2;
						goalRadius=8;
						goalSpeed=5;
						useStartAnimation="true";
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="ChickenOnRun";
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"BrownHarePain_SoundSet"
							};
						};
						probability=0.89999998;
						RepeatTimeMin=1;
						RepeatTimeMax=3;
						RepeatEnabled="true";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=0;
				noiseToAlertMultiplier=10;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=8;
					dropDelay=2;
					maxAlertValue=20;
				};
				class NonSpecificThreat
				{
					dropSpeed=8;
					dropDelay=3;
					maxAlertValue=55;
				};
				class Alerted
				{
					dropSpeed=8;
					dropDelay=2;
					maxAlertValue=100;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=3;
			rangeMax=15;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemAmbientLife
		{
			visionManSizeStand=1;
			visionManSizeCrouch=1;
			visionManSizeProne=1;
			visionRangeMin=7;
			visionRangeMax=25;
			visionNightMinMult=1;
			visionNightMaxMult=0.80000001;
		};
	};
	class AmbientLife_Vulpes_Vulpes
	{
		HeadLookBoneName="pin_lookat";
		teamName="AmbientLife";
		class PathAgent
		{
			radius=0.30000001;
			height=0.5;
		};
		class BehaviourHLAmbientLife
		{
			agentPathLength=20;
			agentPathUpdateDelta=2;
			agentPathMinLength=2.5;
			instantAlertEnabled="true";
			instantAlertRangeMin=3;
			instantAlertRangeMax=5;
			instantAlertStrength=100;
			class SlotCalm
			{
				class BehaviourAmbientLifeCalm
				{
					walkWeight=20;
					idle1Weight=10;
					idle2Weight=10;
					idle3Weight=15;
					walkingDurationMin=6;
					walkingDurationMax=20;
					idle1DurationMin=4;
					idle1DurationMax=8;
					idle2DurationMin=4;
					idle2DurationMax=8;
					idle3DurationMin=2;
					idle3DurationMax=6;
					class WalkingMovement
					{
						maxSpeed=0.14;
						minSpeed=0.1;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0.5;
						stopRadius=2;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourNonSpecificThreat
				{
					lookWeight=30;
					sniffWeight=70;
					sniffDuration=6;
					lookDuration=4;
				};
			};
			class SlotAlerted
			{
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=5;
						minSpeed=2.25;
						acceleration=7;
						maxAngleSpeed=180;
						slowRadius=0.2;
						goalRadius=8;
						goalSpeed=5;
						useStartAnimation="true";
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="ChickenOnRun";
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"Red_Fox_Scared_SoundSet"
							};
						};
						probability=0.89999998;
						RepeatTimeMin=2;
						RepeatTimeMax=3;
						RepeatEnabled="true";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=0;
				noiseToAlertMultiplier=18;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=6;
					dropDelay=3;
					maxAlertValue=20;
				};
				class NonSpecificThreat
				{
					dropSpeed=6;
					dropDelay=3;
					maxAlertValue=50;
				};
				class Alerted
				{
					dropSpeed=6;
					dropDelay=4;
					maxAlertValue=100;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=2;
			rangeMax=15;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemAmbientLife
		{
			visionManSizeStand=1.5;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.44999999;
			visionRangeMin=10;
			visionRangeMax=25;
			visionNightMinMult=1;
			visionNightMaxMult=0.5;
		};
	};
	class Herbivores
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZDeerGroupBeh";
		class PathAgent
		{
			radius=0.25;
			height=1.8;
		};
		class BehaviourHLDeer
		{
			instantAlertRangeMin=20;
			instantAlertRangeMax=50;
			instantAlertStrength=7;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=5;
					grazeWalkingWeight=5;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=40;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=30;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=10;
					safetyDurationMax=15;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.2;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
					};
					class CatchUpMovement
					{
						maxSpeed=6;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=10;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=20;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.2;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
					};
					class CatchUpMovement
					{
						maxSpeed=1.36;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=30;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=30;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=30;
					safetyDurationMin=15;
					safetyDurationMax=25;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=0.40000001;
					safetyLookAngleChangeInterval=5;
					class GrazeMovement
					{
						maxSpeed=0.2;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0.80000001;
						acceleration=1;
						maxAngleSpeed=10;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=5.8000002;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=100;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=100;
					grazeWalkingDurationMax=100;
					restingDurationMin=200;
					restingDurationMax=200;
					travelingDurationMin=0;
					travelingDurationMax=0;
					drinkingDurationMin=150;
					drinkingDurationMax=150;
					safetyDurationMin=15;
					safetyDurationMax=20;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class DrinkingMovement
					{
						maxSpeed=1.359;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class GrazeMovement
					{
						maxSpeed=0.2;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=1.359;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
					};
					class CatchUpMovement
					{
						maxSpeed=6;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourNonSpecificThreat
				{
					lookWeight=30;
					sniffWeight=0;
					sniffDuration=0.5;
					lookDuration=6;
				};
			};
			class SlotSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					class WalkingMovement
					{
						maxSpeed=1.359;
						minSpeed=0;
						acceleration=5;
						maxAngleSpeed=180;
						slowRadius=0;
						stopRadius=0.5;
					};
					lookWeight=10;
					walkWeight=0;
					walkSpeed=0.40000001;
					rotateAtStartAngleTolerance=0.5;
					maxRotateAngle=2.5;
					walkDuration=15;
					lookDuration=6;
				};
			};
			class SlotAlerted
			{
				class BehaviourFleeFromTargets
				{
					minDistanceToTargetRatio=0.5;
					class RunMovement
					{
						maxSpeed=17;
						optimalSpeed=12;
						minSpeed=1;
						maxSpeedRange=30;
						optimalSpeedRange=15;
						acceleration=4;
						maxAngleSpeed=70;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=7;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=1;
				class Calm
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=25;
				};
				class NonSpecificThreat
				{
					dropSpeed=5;
					dropDelay=10;
					maxAlertValue=50;
				};
				class SpecificThreat
				{
					dropSpeed=2;
					dropDelay=10;
					maxAlertValue=75;
				};
				class Alerted
				{
					dropSpeed=10;
					dropDelay=10;
					maxAlertValue=100;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=50;
			rangeMax=120;
			rangeShotMin=0;
			rangeShotMax=10;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
				Predator=10;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=20;
			visionRangeMax=100;
			visionFov=2;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=30;
			visionPeripheralFov=3.2;
			visionNightMinMult=1;
			visionNightMaxMult=0.5;
			visionRainMinMult=1;
			visionRainMaxMult=0.80000001;
			visionFogMinMult=1;
			visionFogMaxMult=0.40000001;
		};
	};
	class Herbivores_BosTaurus
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZdomesticGroupBeh";
		class PathAgent
		{
			radius=0.40000001;
			height=1.8;
		};
		class BehaviourHLDomestic
		{
			instantAlertRangeMin=10;
			instantAlertRangeMax=40;
			instantAlertStrength=9;
			agentPathLength=30;
			agentPathUpdateDelta=1;
			agentPathMinLength=2;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=50;
					grazeWalkingWeight=20;
					restWeight=50;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=120;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=120;
					restingDurationMin=60;
					restingDurationMax=180;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=1.2;
						minSpeed=0.60000002;
						acceleration=0.2;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=10;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=120;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=120;
					restingDurationMin=60;
					restingDurationMax=180;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=1.2;
						minSpeed=0.60000002;
						acceleration=0.2;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=25;
					grazeWalkingWeight=25;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=50;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=50;
					restingDurationMin=20;
					restingDurationMax=25;
					travelingDurationMin=20;
					travelingDurationMax=40;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=10;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=1.2;
						minSpeed=0.60000002;
						acceleration=0.2;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=100;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=100;
					grazeWalkingDurationMax=100;
					restingDurationMin=200;
					restingDurationMax=200;
					travelingDurationMin=0;
					travelingDurationMax=0;
					drinkingDurationMin=150;
					drinkingDurationMax=150;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=3;
					class DrinkingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.60000002;
						acceleration=0.1;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=1.2;
						minSpeed=0.60000002;
						acceleration=0.2;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=1;
					walkToWeight=0;
					stayLookAtWeight=7;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=1;
					walkAwayDurationMin=6;
					walkAwayDurationMax=15;
					walkToDurationMin=6;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=20;
					stayDurationMax=30;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.85000002;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.61000001;
					};
				};
			};
			class SlotSpecificThreat
			{
				class SlotEvents
				{
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_BosTaurusSlotSpec
						{
							repeatTimeMin=1;
							repeatTimeMax=6;
							class AlertImpulseActionRepeatAlert_BosTaurusSlotSpec
							{
								value=9;
								range=10;
							};
						};
					};
				};
				class BehaviourSpecificThreat
				{
					walkAwayWeight=10;
					walkToWeight=0;
					stayLookAtWeight=0;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=15;
					walkAwayDurationMax=25;
					walkToDurationMin=20;
					walkToDurationMax=30;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=5;
					stayDurationMax=10;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.85000002;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.61000001;
					};
				};
			};
			class SlotAlerted
			{
				class SlotEvents
				{
					class EventsEntering
					{
						class OneTimeEventSendAlert_BosTaurusSlotAlert
						{
							class AlertImpulseActionSendAlert_BosTaurusSlotAlert
							{
								value=50;
								range=15;
							};
						};
					};
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_BosTaurusSlotAlert
						{
							repeatTimeMin=1;
							repeatTimeMax=3;
							class AlertImpulseActionRepeatAlert_BosTaurusSlotAlert
							{
								value=8;
								range=15;
							};
						};
					};
				};
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=11;
						optimalSpeed=3;
						minSpeed=0.60000002;
						maxSpeedRange=30;
						optimalSpeedRange=20;
						acceleration=5;
						maxAngleSpeed=60;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.61000001;
					};
					class RunMovementInjured1
					{
						maxSpeed=1;
						optimalSpeed=1;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=5;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
					class RunMovementInjured2
					{
						maxSpeed=0.1;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=5;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="CowOnRun";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=40;
				noiseToAlertMultiplier=3;
				noiseShotToAlertMultiplier=10;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=8;
					dropDelay=1;
					maxAlertValue=5;
				};
				class NonSpecificThreat
				{
					dropSpeed=8;
					dropDelay=2;
					maxAlertValue=70;
				};
				class SpecificThreat
				{
					dropSpeed=7;
					dropDelay=2;
					maxAlertValue=90;
				};
				class Alerted
				{
					dropSpeed=7;
					dropDelay=4;
					maxAlertValue=100;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=30;
			rangeShotMin=5;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=5;
			visionRangeMin=8;
			visionRangeMax=20;
			visionFov=1.6;
			visionPeripheralRangeMin=0;
			visionPeripheralRangeMax=10;
			visionPeripheralFov=4.6999998;
			visionNightMinMult=1;
			visionNightMaxMult=1;
			visionRainMinMult=1;
			visionRainMaxMult=1;
			visionFogMinMult=1;
			visionFogMaxMult=1;
		};
	};
	class Herbivores_CapreolusCapreolus
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZDeerGroupBeh";
		class PathAgent
		{
			radius=0.2;
			height=1;
		};
		class BehaviourHLDeer
		{
			instantAlertRangeMin=20;
			instantAlertRangeMax=50;
			instantAlertStrength=6;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=20;
					restWeight=35;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=80;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=80;
					restingDurationMin=40;
					restingDurationMax=60;
					travelingDurationMin=20;
					travelingDurationMax=20;
					safetyDurationMin=14;
					safetyDurationMax=24;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.13500001;
						minSpeed=0.13500001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
					class CatchUpMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					class SoundsDuring
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=100;
						probability=0.5;
						RepeatTimeMin=10;
						RepeatTimeMax=50;
						RepeatEnabled="true";
					};
					travelingMode="false";
					grazeOnSpotWeight=15;
					grazeWalkingWeight=20;
					restWeight=15;
					travelWeight=0;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=50;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=40;
					restingDurationMin=20;
					restingDurationMax=20;
					travelingDurationMin=20;
					travelingDurationMax=20;
					safetyDurationMin=14;
					safetyDurationMax=24;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.13500001;
						minSpeed=0.13500001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
					class CatchUpMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					class SoundsDuring
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=100;
						probability=0.5;
						RepeatTimeMin=10;
						RepeatTimeMax=50;
						RepeatEnabled="true";
					};
					travelingMode="true";
					grazeOnSpotWeight=5;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=15;
					grazeOnSpotDurationMax=20;
					grazeWalkingDurationMin=15;
					grazeWalkingDurationMax=20;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=40;
					travelingDurationMax=60;
					safetyDurationMin=14;
					safetyDurationMax=24;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.13500001;
						minSpeed=0.13500001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
					class CatchUpMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					class SoundsDuring
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=100;
						probability=0.5;
						RepeatTimeMin=10;
						RepeatTimeMax=50;
						RepeatEnabled="true";
					};
					travelingMode="true";
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=10;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=20;
					drinkingDurationMin=15;
					drinkingDurationMax=20;
					grazeWalkingSpeed=0.17900001;
					travelingWalkingSpeed=1.196;
					safetyDurationMin=14;
					safetyDurationMax=24;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class DrinkingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
					class GrazeMovement
					{
						maxSpeed=0.13500001;
						minSpeed=0.13500001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
					class CatchUpMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					class SoundsEntering
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=100;
						probability=0.80000001;
					};
					class SoundsDuring
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=100;
						probability=0.30000001;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=20;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=7;
					walkToDurationMax=14;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=25;
					stayDurationMin=5;
					stayDurationMax=10;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
				};
			};
			class SlotSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					class SoundsEntering
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=100;
						probability=0.80000001;
					};
					class SoundsDuring
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=150;
						probability=0.30000001;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					walkAwayWeight=10;
					walkToWeight=10;
					stayLookAtWeight=20;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=10;
					walkAwayDurationMax=20;
					walkToDurationMin=7;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=25;
					stayDurationMin=5;
					stayDurationMax=10;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.52999997;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="RoeDeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.54000002;
					};
				};
			};
			class SlotAlerted
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"DeerAmbush1_SoundSet",
								"DeerAmbush1_tailForest_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"DeerAmbush2_SoundSet",
								"DeerAmbush2_tailForest_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"DeerAmbush3_SoundSet",
								"DeerAmbush3_tailForest_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"DeerAmbush4_SoundSet",
								"DeerAmbush4_tailForest_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"DeerAmbush5_SoundSet",
								"DeerAmbush5_tailForest_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"DeerAmbush6_SoundSet",
								"DeerAmbush6_tailForest_SoundSet"
							};
						};
						probability=1;
					};
					minDistanceToTargetRatio=0.5;
					class SoundsDuring
					{
						sounds[]=
						{
							"dz\sounds\effects\animals\deer\bark_roe\bark_0",
							"dz\sounds\effects\animals\deer\bark_roe\bark_1",
							"dz\sounds\effects\animals\deer\bark_roe\bark_2",
							"dz\sounds\effects\animals\deer\bark_roe\bark_3",
							"dz\sounds\effects\animals\deer\bark_roe\bark_4",
							"dz\sounds\effects\animals\deer\bark_roe\bark_5",
							"dz\sounds\effects\animals\deer\bark_roe\bark_6",
							"dz\sounds\effects\animals\deer\bark_roe\bark_7"
						};
						volume=0.80000001;
						distance=200;
						probability=0.30000001;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					class RunMovement
					{
						maxSpeed=11.76;
						optimalSpeed=9.6000004;
						minSpeed=0.89999998;
						maxSpeedRange=50;
						optimalSpeedRange=25;
						acceleration=7;
						maxAngleSpeed=70;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="RoeDeerOnRun";
						startAnimationMaxSpeed=0.91000003;
					};
					class RunMovementInjured1
					{
						maxSpeed=1.35;
						optimalSpeed=1.35;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=0.91000003;
					};
					class RunMovementInjured2
					{
						maxSpeed=0.1;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=0.91000003;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=20;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=25;
				};
				class NonSpecificThreat
				{
					dropSpeed=5;
					dropDelay=10;
					maxAlertValue=50;
				};
				class SpecificThreat
				{
					dropSpeed=2;
					dropDelay=10;
					maxAlertValue=75;
				};
				class Alerted
				{
					dropSpeed=10;
					dropDelay=10;
					maxAlertValue=100;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=20;
			rangeMax=70;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
				Predator=10;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=5;
			visionRangeMax=50;
			visionFov=2;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=30;
			visionPeripheralFov=3.2;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
	class Herbivores_CapraHircus
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZSheepGroupBeh";
		class PathAgent
		{
			radius=0.2;
			height=1;
		};
		class BehaviourHLDomestic
		{
			instantAlertRangeMin=10;
			instantAlertRangeMax=40;
			instantAlertStrength=9;
			agentPathLength=30;
			agentPathUpdateDelta=1;
			agentPathMinLength=2;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=10;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=120;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=120;
					restingDurationMin=60;
					restingDurationMax=180;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.11;
						minSpeed=0.11;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
					class CatchUpMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=10;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=120;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=120;
					restingDurationMin=60;
					restingDurationMax=180;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.11;
						minSpeed=0.11;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
					class CatchUpMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=30;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=30;
					restingDurationMin=20;
					restingDurationMax=30;
					travelingDurationMin=0;
					travelingDurationMax=20;
					drinkingDurationMin=40;
					drinkingDurationMax=60;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class DrinkingMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
					class GrazeMovement
					{
						maxSpeed=0.11;
						minSpeed=0.11;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
					class CatchUpMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=50;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=50;
					restingDurationMin=20;
					restingDurationMax=25;
					travelingDurationMin=20;
					travelingDurationMax=40;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.11;
						minSpeed=0.11;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
					class CatchUpMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=3;
					walkToWeight=0;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=1;
					walkAwayDurationMin=5;
					walkAwayDurationMax=15;
					walkToDurationMin=5;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=20;
					stayDurationMax=30;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.83999997;
						minSpeed=0.41;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.41999999;
					};
				};
			};
			class SlotSpecificThreat
			{
				class SlotEvents
				{
					class EventsEntering
					{
					};
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_OvisAriesSlotSpec
						{
							repeatTimeMin=1;
							repeatTimeMax=4;
							class AlertImpulseActionRepeatAlert_OvisAriesSlotSpec
							{
								value=0;
								range=10;
							};
						};
					};
				};
				class BehaviourSpecificThreat
				{
					walkAwayWeight=10;
					walkToWeight=0;
					stayLookAtWeight=0;
					stayWeight=0;
					walkAwaySpreadAngle=0.5;
					walkAwayInitialAngle=1;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=1;
					walkAwayDurationMin=5;
					walkAwayDurationMax=15;
					walkToDurationMin=5;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=20;
					stayDurationMax=30;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=6;
						optimalSpeed=2.8;
						minSpeed=2.1199999;
						maxSpeedRange=30;
						optimalSpeedRange=20;
						acceleration=4;
						maxAngleSpeed=90;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=2.1300001;
					};
				};
			};
			class SlotAlerted
			{
				class SlotEvents
				{
					class EventsEntering
					{
						class OneTimeEventSendAlert_OvisAriesSlotAlert
						{
							class AlertImpulseActionSendAlert_OvisAriesSlotAlert
							{
								value=50;
								range=10;
							};
						};
					};
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_OvisAriesSlotAlert
						{
							repeatTimeMin=1;
							repeatTimeMax=4;
							class AlertImpulseActionRepeatAlert_OvisAriesSlotAlert
							{
								value=0;
								range=10;
							};
						};
					};
				};
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=10.44;
						optimalSpeed=6;
						minSpeed=0.41;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=60;
						slowRadius=6;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.41999999;
					};
					class RunMovementInjured1
					{
						maxSpeed=1.2;
						optimalSpeed=0.41;
						minSpeed=0.41;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=1;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.41999999;
					};
					class RunMovementInjured2
					{
						maxSpeed=0;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=1;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=1.4;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=40;
				noiseToAlertMultiplier=5;
				noiseShotToAlertMultiplier=1.2;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=8;
					dropDelay=1;
					maxAlertValue=5;
				};
				class NonSpecificThreat
				{
					dropSpeed=8;
					dropDelay=2;
					maxAlertValue=70;
				};
				class SpecificThreat
				{
					dropSpeed=7;
					dropDelay=3;
					maxAlertValue=95;
				};
				class Alerted
				{
					dropSpeed=6;
					dropDelay=4;
					maxAlertValue=110;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=30;
			rangeShotMin=5;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=5;
			visionRangeMin=6;
			visionRangeMax=10;
			visionFov=1.6;
			visionPeripheralRangeMin=5;
			visionPeripheralRangeMax=8;
			visionPeripheralFov=4.6999998;
			visionNightMinMult=1;
			visionNightMaxMult=1;
			visionRainMinMult=1;
			visionRainMaxMult=1;
			visionFogMinMult=1;
			visionFogMaxMult=1;
		};
	};
	class Herbivores_SusDomesticus
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZSheepGroupBeh";
		class PathAgent
		{
			radius=0.2;
			height=1;
		};
		class BehaviourHLDomestic
		{
			instantAlertRangeMin=5;
			instantAlertRangeMax=15;
			instantAlertStrength=7;
			agentPathLength=30;
			agentPathUpdateDelta=1;
			agentPathMinLength=2;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					travelingMode="false";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=15;
					grazeWalkingDurationMin=3;
					grazeWalkingDurationMax=8;
					restingDurationMin=15;
					restingDurationMax=20;
					travelingDurationMin=0;
					travelingDurationMax=0;
					grazeWalkingSpeed=0.25;
					travelingWalkingSpeed=0.95999998;
					safetyIntervalMin=13;
					safetyIntervalMax=27;
					safetyDurationMin=8;
					safetyDurationMax=12;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.23;
						minSpeed=0.23;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.69999999;
						optimalSpeed=0.69999999;
						minSpeed=0.49000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=3;
						optimalSpeed=3;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					travelingMode="false";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=5;
					grazeWalkingDurationMax=10;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=0;
					travelingDurationMax=0;
					grazeWalkingSpeed=0.25;
					travelingWalkingSpeed=0.95999998;
					safetyIntervalMin=30;
					safetyIntervalMax=40;
					safetyDurationMin=5;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.23;
						minSpeed=0.23;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.69999999;
						optimalSpeed=0.69999999;
						minSpeed=0.49000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=3;
						optimalSpeed=3;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=20;
					grazeOnSpotDurationMin=100;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=100;
					grazeWalkingDurationMax=100;
					restingDurationMin=100;
					restingDurationMax=100;
					travelingDurationMin=100;
					travelingDurationMax=100;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.23;
						minSpeed=0.23;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.69999999;
						optimalSpeed=0.69999999;
						minSpeed=0.49000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=3;
						optimalSpeed=3;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=10;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=20;
					drinkingDurationMin=15;
					drinkingDurationMax=20;
					grazeWalkingSpeed=0.17900001;
					travelingWalkingSpeed=1.196;
					safetyIntervalMin=15;
					safetyIntervalMax=20;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class DrinkingMovement
					{
						maxSpeed=0.69999999;
						optimalSpeed=0.69999999;
						minSpeed=0.49000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
					class GrazeMovement
					{
						maxSpeed=0.23;
						minSpeed=0.23;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=0.69999999;
						optimalSpeed=0.69999999;
						minSpeed=0.49000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
					class CatchUpMovement
					{
						maxSpeed=3;
						optimalSpeed=3;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=3;
					walkToDurationMax=5;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=15;
					stayDurationMin=10;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.69999999;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class SlotSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=10;
					walkToWeight=0;
					stayLookAtWeight=0;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=0.1;
					walkToInitialAngle=0.1;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=2;
					walkToDurationMax=6;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=15;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.69999999;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.5;
					};
				};
			};
			class SlotAlerted
			{
				class SlotEvents
				{
					class EventsEntering
					{
						class OneTimeEventSendAlert_BosTaurusSlotAlert
						{
							class AlertImpulseActionSendAlert_BosTaurusSlotAlert
							{
								value=50;
								range=15;
							};
						};
					};
				};
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=7.1999998;
						optimalSpeed=5;
						minSpeed=0.69999999;
						maxSpeedRange=30;
						optimalSpeedRange=15;
						acceleration=4;
						maxAngleSpeed=70;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.80000001;
					};
					class RunMovementInjured1
					{
						maxSpeed=7.1999998;
						optimalSpeed=5;
						minSpeed=0.69999999;
						maxSpeedRange=30;
						optimalSpeedRange=15;
						acceleration=4;
						maxAngleSpeed=70;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.80000001;
					};
					class RunMovementInjured2
					{
						maxSpeed=7.1999998;
						optimalSpeed=5;
						minSpeed=0.69999999;
						maxSpeedRange=30;
						optimalSpeedRange=15;
						acceleration=4;
						maxAngleSpeed=70;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.80000001;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=35;
				noiseToAlertMultiplier=2;
				noiseShotToAlertMultiplier=2;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=10;
				};
				class NonSpecificThreat
				{
					dropSpeed=5;
					dropDelay=5;
					maxAlertValue=70;
				};
				class SpecificThreat
				{
					dropSpeed=5;
					dropDelay=3;
					maxAlertValue=100;
				};
				class Alerted
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=115;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=35;
			rangeShotMin=5;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.44999999;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=5;
			visionRangeMin=15;
			visionRangeMax=20;
			visionFov=1.2;
			visionPeripheralRangeMin=5;
			visionPeripheralRangeMax=10;
			visionPeripheralFov=4.6999998;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
	class Herbivores_SusScrofa
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZDeerGroupBeh";
		class PathAgent
		{
			radius=0.2;
			height=1;
		};
		class BehaviourHLDeer
		{
			instantAlertRangeMin=20;
			instantAlertRangeMax=50;
			instantAlertStrength=7;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=30;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=30;
					restingDurationMin=20;
					restingDurationMax=30;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=8;
					safetyDurationMax=12;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=4.1999998;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=5;
					travelWeight=0;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=30;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=30;
					restingDurationMin=20;
					restingDurationMax=30;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=8;
					safetyDurationMax=12;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=4.1999998;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=15;
					grazeOnSpotDurationMax=25;
					grazeWalkingDurationMin=15;
					grazeWalkingDurationMax=25;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=40;
					safetyDurationMin=8;
					safetyDurationMax=12;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=4.1999998;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=20;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=20;
					restingDurationMin=15;
					restingDurationMax=25;
					travelingDurationMin=0;
					travelingDurationMax=0;
					drinkingDurationMin=50;
					drinkingDurationMax=70;
					safetyDurationMin=8;
					safetyDurationMax=12;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class DrinkingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=4.1999998;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=4;
					walkToDurationMax=8;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=15;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=4;
					walkToDurationMax=8;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=15;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=1.12;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotAlerted
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"DeerAmbush1_SoundSet",
								"DeerAmbush1_tailForest_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"DeerAmbush2_SoundSet",
								"DeerAmbush2_tailForest_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"DeerAmbush3_SoundSet",
								"DeerAmbush3_tailForest_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"DeerAmbush4_SoundSet",
								"DeerAmbush4_tailForest_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"DeerAmbush5_SoundSet",
								"DeerAmbush5_tailForest_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"DeerAmbush6_SoundSet",
								"DeerAmbush6_tailForest_SoundSet"
							};
						};
						probability=1;
					};
					minDistanceToTargetRatio=0.5;
					class RunMovement
					{
						maxSpeed=17;
						optimalSpeed=12;
						minSpeed=1;
						maxSpeedRange=30;
						optimalSpeedRange=15;
						acceleration=4;
						maxAngleSpeed=70;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=1.4;
					};
					class RunMovementInjured1
					{
						maxSpeed=1.35;
						optimalSpeed=1.35;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=1.4;
					};
					class RunMovementInjured2
					{
						maxSpeed=0.1;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=1.4;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=35;
				noiseToAlertMultiplier=2;
				noiseShotToAlertMultiplier=2;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=15;
				};
				class NonSpecificThreat
				{
					dropSpeed=5;
					dropDelay=5;
					maxAlertValue=70;
				};
				class SpecificThreat
				{
					dropSpeed=2;
					dropDelay=8;
					maxAlertValue=100;
				};
				class Alerted
				{
					dropSpeed=3;
					dropDelay=10;
					maxAlertValue=105;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=30;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.44999999;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=5;
			visionRangeMax=60;
			visionFov=1.2;
			visionPeripheralRangeMin=5;
			visionPeripheralRangeMax=25;
			visionPeripheralFov=4.6999998;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
	class Herbivores_CervusElaphusFem
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZDeerGroupBeh";
		class PathAgent
		{
			radius=0.2;
			height=1.4;
		};
		class BehaviourHLDeer
		{
			instantAlertRangeMin=20;
			instantAlertRangeMax=50;
			instantAlertStrength=7;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=5;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=60;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=60;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyIntervalMin=15;
					safetyIntervalMax=15;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.17900001;
						minSpeed=0.17900001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.225;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
					class CatchUpMovement
					{
						maxSpeed=3.4000001;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=20;
					restWeight=5;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyIntervalMin=15;
					safetyIntervalMax=15;
					safetyDurationMin=20;
					safetyDurationMax=20;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.17900001;
						minSpeed=0.17900001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.225;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
					class CatchUpMovement
					{
						maxSpeed=3.4000001;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=5;
					grazeWalkingWeight=5;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=30;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=20;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=50;
					safetyIntervalMin=15;
					safetyIntervalMax=20;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.17900001;
						minSpeed=0.17900001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.225;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
					class CatchUpMovement
					{
						maxSpeed=3.4000001;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=100;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=100;
					grazeWalkingDurationMax=100;
					restingDurationMin=200;
					restingDurationMax=200;
					travelingDurationMin=0;
					travelingDurationMax=0;
					drinkingDurationMin=150;
					drinkingDurationMax=150;
					safetyIntervalMin=15;
					safetyIntervalMax=20;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class DrinkingMovement
					{
						maxSpeed=1.225;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
					class GrazeMovement
					{
						maxSpeed=0.17900001;
						minSpeed=0.17900001;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.225;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
					class CatchUpMovement
					{
						maxSpeed=3.4000001;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=4;
					walkToDurationMax=8;
					stayLookAtDurationMin=15;
					stayLookAtDurationMax=25;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.89999998;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=10;
					walkToWeight=0;
					stayLookAtWeight=20;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=20;
					walkToDurationMax=30;
					stayLookAtDurationMin=15;
					stayLookAtDurationMax=25;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=1.225;
						minSpeed=0.69999999;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.70999998;
					};
				};
			};
			class SlotAlerted
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"DeerAmbush1_SoundSet",
								"DeerAmbush1_tailForest_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"DeerAmbush2_SoundSet",
								"DeerAmbush2_tailForest_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"DeerAmbush3_SoundSet",
								"DeerAmbush3_tailForest_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"DeerAmbush4_SoundSet",
								"DeerAmbush4_tailForest_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"DeerAmbush5_SoundSet",
								"DeerAmbush5_tailForest_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"DeerAmbush6_SoundSet",
								"DeerAmbush6_tailForest_SoundSet"
							};
						};
						probability=1;
					};
					minDistanceToTargetRatio=0.5;
					class RunMovement
					{
						maxSpeed=15;
						optimalSpeed=8;
						minSpeed=1;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=5;
						maxAngleSpeed=70;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
					class RunMovementInjured1
					{
						maxSpeed=1.196;
						optimalSpeed=1.196;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
					class RunMovementInjured2
					{
						maxSpeed=0.1;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=20;
				noiseToAlertMultiplier=1.5;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=25;
				};
				class NonSpecificThreat
				{
					dropSpeed=5;
					dropDelay=10;
					maxAlertValue=50;
				};
				class SpecificThreat
				{
					dropSpeed=2;
					dropDelay=8;
					maxAlertValue=75;
				};
				class Alerted
				{
					dropSpeed=10;
					dropDelay=10;
					maxAlertValue=100;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=20;
			rangeMax=80;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
				Predator=10;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=5;
			visionRangeMax=80;
			visionFov=2;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=30;
			visionPeripheralFov=3.2;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
	class Herbivores_OvisAries
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZSheepGroupBeh";
		class PathAgent
		{
			radius=0.2;
			height=1;
		};
		class BehaviourHLDomestic
		{
			instantAlertRangeMin=20;
			instantAlertRangeMax=40;
			instantAlertStrength=9;
			agentPathLength=30;
			agentPathUpdateDelta=1;
			agentPathMinLength=2;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=10;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=120;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=120;
					restingDurationMin=60;
					restingDurationMax=180;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.090000004;
						minSpeed=0.090000004;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
					class CatchUpMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=10;
					travelWeight=0;
					grazeOnSpotDurationMin=40;
					grazeOnSpotDurationMax=120;
					grazeWalkingDurationMin=40;
					grazeWalkingDurationMax=120;
					restingDurationMin=60;
					restingDurationMax=180;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.090000004;
						minSpeed=0.090000004;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
					class CatchUpMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=10;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=20;
					drinkingDurationMin=15;
					drinkingDurationMax=20;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class DrinkingUpMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
					class GrazeMovement
					{
						maxSpeed=0.090000004;
						minSpeed=0.090000004;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
					class CatchUpMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=50;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=50;
					restingDurationMin=20;
					restingDurationMax=25;
					travelingDurationMin=20;
					travelingDurationMax=40;
					safetyDurationMin=15;
					safetyDurationMax=35;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.090999998;
						minSpeed=0.090999998;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
						pathFilter="NoJumping";
					};
					class TravelingMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
					class CatchUpMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.30000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class SlotEvents
				{
					class EventsDuring
					{
					};
				};
				class BehaviourSpecificThreat
				{
					walkAwayWeight=2;
					walkToWeight=0;
					stayLookAtWeight=7;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=1;
					walkAwayDurationMin=5;
					walkAwayDurationMax=15;
					walkToDurationMin=5;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=20;
					stayDurationMax=30;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.55000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="NoJumping";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.31;
					};
				};
			};
			class SlotSpecificThreat
			{
				class SlotEvents
				{
					class EventsEntering
					{
					};
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_OvisAriesSlotSpec
						{
							repeatTimeMin=1;
							repeatTimeMax=4;
							class AlertImpulseActionRepeatAlert_OvisAriesSlotSpec
							{
								value=0;
								range=10;
							};
						};
					};
				};
				class BehaviourSpecificThreat
				{
					walkAwayWeight=10;
					walkToWeight=0;
					stayLookAtWeight=0;
					stayWeight=0;
					walkAwaySpreadAngle=0.5;
					walkAwayInitialAngle=1;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=1;
					walkAwayDurationMin=5;
					walkAwayDurationMax=15;
					walkToDurationMin=5;
					walkToDurationMax=15;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=20;
					stayDurationMin=20;
					stayDurationMax=30;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.55000001;
						minSpeed=0.55000001;
						maxSpeedRange=30;
						optimalSpeedRange=20;
						acceleration=4;
						maxAngleSpeed=10;
						slowRadius=8;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.31;
					};
				};
			};
			class SlotAlerted
			{
				class SlotEvents
				{
					class EventsEntering
					{
						class OneTimeEventSendAlert_OvisAriesSlotAlert
						{
							class AlertImpulseActionSendAlert_OvisAriesSlotAlert
							{
								value=50;
								range=10;
							};
						};
					};
					class EventsDuring
					{
						class PeriodicEventRepeatAlert_OvisAriesSlotAlert
						{
							repeatTimeMin=1;
							repeatTimeMax=4;
							class AlertImpulseActionRepeatAlert_OvisAriesSlotAlert
							{
								value=0;
								range=10;
							};
						};
					};
				};
				class BehaviourGoToTarget
				{
					class Movement
					{
						maxSpeed=8.6300001;
						optimalSpeed=6;
						minSpeed=0.30000001;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=60;
						slowRadius=6;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.30000001;
					};
					class RunMovementInjured1
					{
						maxSpeed=0.89999998;
						optimalSpeed=0.40000001;
						minSpeed=0.30000001;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=1;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=6;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=0.30000001;
					};
					class RunMovementInjured2
					{
						maxSpeed=0;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=1;
						maxAngleSpeed=30;
						slowRadius=10;
						stopRadius=6;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="NoJumping";
						startAnimationMaxSpeed=1.4;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=40;
				noiseToAlertMultiplier=4;
				noiseShotToAlertMultiplier=30;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=8;
					dropDelay=1;
					maxAlertValue=5;
				};
				class NonSpecificThreat
				{
					dropSpeed=7;
					dropDelay=2;
					maxAlertValue=70;
				};
				class SpecificThreat
				{
					dropSpeed=7;
					dropDelay=2;
					maxAlertValue=90;
				};
				class Alerted
				{
					dropSpeed=7;
					dropDelay=5;
					maxAlertValue=110;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=30;
			rangeShotMin=5;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=5;
			visionRangeMin=3;
			visionRangeMax=9;
			visionFov=1.6;
			visionPeripheralRangeMin=0;
			visionPeripheralRangeMax=6;
			visionPeripheralFov=3.7;
			visionNightMinMult=1;
			visionNightMaxMult=1;
			visionRainMinMult=1;
			visionRainMaxMult=1;
			visionFogMinMult=1;
			visionFogMaxMult=1;
		};
	};
	class Herbivores_CervusElaphus
	{
		HeadLookBoneName="pin_lookat";
		teamName="BigGame";
		defaultGroupTemplateName="DZDeerGroupBeh";
		class PathAgent
		{
			radius=0.25;
			height=1.8;
		};
		class BehaviourHLDeer
		{
			instantAlertRangeMin=20;
			instantAlertRangeMax=50;
			instantAlertStrength=7;
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=5;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=60;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=60;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=25;
					safetyDurationMax=40;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=5;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=15;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					safetyDurationMin=25;
					safetyDurationMax=40;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=5;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=5;
					grazeWalkingWeight=5;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=20;
					grazeOnSpotDurationMax=30;
					grazeWalkingDurationMin=20;
					grazeWalkingDurationMax=30;
					restingDurationMin=0;
					restingDurationMax=0;
					travelingDurationMin=20;
					travelingDurationMax=30;
					safetyDurationMin=25;
					safetyDurationMax=40;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=0.40000001;
					safetyLookAngleChangeInterval=5;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=5;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotDrinking
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=10;
					grazeWalkingWeight=10;
					restWeight=10;
					travelWeight=0;
					drinkingWeight=20;
					grazeOnSpotDurationMin=100;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=100;
					grazeWalkingDurationMax=100;
					restingDurationMin=200;
					restingDurationMax=200;
					travelingDurationMin=0;
					travelingDurationMax=0;
					drinkingDurationMin=150;
					drinkingDurationMax=150;
					safetyDurationMin=25;
					safetyDurationMax=40;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class DrinkingMovement
					{
						maxSpeed=1.36;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=5;
						slowRadius=0;
						stopRadius=2;
					};
					class TravelingMovement
					{
						maxSpeed=1.36;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=0;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
					class CatchUpMovement
					{
						maxSpeed=5;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotNonSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=0;
					walkToWeight=10;
					stayLookAtWeight=10;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=4;
					walkToDurationMax=8;
					stayLookAtDurationMin=10;
					stayLookAtDurationMax=25;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=0.85000002;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotSpecificThreat
			{
				class BehaviourSpecificThreat
				{
					walkAwayWeight=10;
					walkToWeight=0;
					stayLookAtWeight=20;
					stayWeight=0;
					walkAwaySpreadAngle=1.5;
					walkAwayInitialAngle=2;
					walkToSpreadAngle=1.5;
					walkToInitialAngle=2;
					walkAwayDurationMin=5;
					walkAwayDurationMax=10;
					walkToDurationMin=20;
					walkToDurationMax=30;
					stayLookAtDurationMin=15;
					stayLookAtDurationMax=25;
					stayDurationMin=5;
					stayDurationMax=15;
					pathLength=10;
					class WalkingMovement
					{
						maxSpeed=1.359;
						minSpeed=0.80000001;
						acceleration=5;
						maxAngleSpeed=10;
						slowRadius=1.9;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="DeerOnRun";
						useStartAnimation="true";
						startAnimationMaxSpeed=0.81;
					};
				};
			};
			class SlotAlerted
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"DeerAmbush1_SoundSet",
								"DeerAmbush1_tailForest_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"DeerAmbush2_SoundSet",
								"DeerAmbush2_tailForest_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"DeerAmbush3_SoundSet",
								"DeerAmbush3_tailForest_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"DeerAmbush4_SoundSet",
								"DeerAmbush4_tailForest_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"DeerAmbush5_SoundSet",
								"DeerAmbush5_tailForest_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"DeerAmbush6_SoundSet",
								"DeerAmbush6_tailForest_SoundSet"
							};
						};
						probability=1;
					};
					minDistanceToTargetRatio=0.5;
					class RunMovement
					{
						maxSpeed=15;
						optimalSpeed=8;
						minSpeed=1;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=5;
						maxAngleSpeed=70;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
					class RunMovementInjured1
					{
						maxSpeed=1.35;
						optimalSpeed=1.35;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
					class RunMovementInjured2
					{
						maxSpeed=0.1;
						optimalSpeed=0;
						minSpeed=0;
						maxSpeedRange=30;
						optimalSpeedRange=25;
						acceleration=2;
						maxAngleSpeed=1;
						slowRadius=10;
						stopRadius=4;
						slowToTurn="true";
						smoothAcceleration="true";
						useStartAnimation="true";
						pathFilter="DeerOnRun";
						startAnimationMaxSpeed=1.4;
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=20;
				noiseToAlertMultiplier=1.5;
				noiseShotToAlertMultiplier=2;
				damageToAlertMultiplier=1000000;
				class Calm
				{
					dropSpeed=5;
					dropDelay=1;
					maxAlertValue=25;
				};
				class NonSpecificThreat
				{
					dropSpeed=5;
					dropDelay=10;
					maxAlertValue=50;
				};
				class SpecificThreat
				{
					dropSpeed=2;
					dropDelay=10;
					maxAlertValue=75;
				};
				class Alerted
				{
					dropSpeed=10;
					dropDelay=10;
					maxAlertValue=100;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=20;
			rangeMax=80;
			rangeShotMin=100;
			rangeShotMax=300;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.80000001;
				Zombies=1;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
				Predator=10;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.5;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=5;
			visionRangeMax=80;
			visionFov=2;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=30;
			visionPeripheralFov=3.2;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
	class Predators_Wolf
	{
		HeadLookBoneName="pin_lookat";
		teamName="Predator";
		defaultGroupTemplateName="DZWolfGroupBeh";
		class PathAgent
		{
			radius=0.30000001;
			height=1;
			lengthRadius=0.69999999;
		};
		class BehaviourHLPredator
		{
			instantAlertRangeMin=0;
			instantAlertRangeMax=0;
			instantAlertStrength=0;
			proximityAttackRange=2.5;
			attackCooldown=3;
			class SlotCalmGrazing
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=500;
					grazeWalkingDurationMax=500;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=15;
					travelingDurationMax=30;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotSiege
			{
				class BehaviourSiege
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfPantShort_SoundSet"
							};
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfPant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfGrowl_SoundSet"
							};
						};
						probability=0.40000001;
						RepeatTimeMin=5;
						RepeatTimeMax=15;
						RepeatEnabled="true";
					};
					innerRadius=7;
					innerRadiusMin=4.5;
					innerRadiusMax=10;
					outerRadius=16;
					directionChangeTimeMin=7;
					directionChangeTimeMax=25;
					PlayerFOV=1.4;
					preferPlayerFOVCooldown=1;
					attackDistance=3.5;
					class InnerCircleMovement
					{
						maxSpeed=6.3000002;
						optimalSpeed=6.3000002;
						optimalSpeedRange=1;
						minSpeed=1;
						acceleration=7;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=2;
						pathFilter="WolfOnHunt";
						startAnimationMaxSpeed=0.54000002;
					};
					class Movement
					{
						maxSpeed=9;
						optimalSpeed=6.3000002;
						optimalSpeedRange=15;
						minSpeed=1;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=0;
						stopRadius=2;
						maxSpeedRange=20;
						pathFilter="WolfOnOuterCircle";
						startAnimationMaxSpeed=0.54000002;
					};
					class AttackMovement
					{
						maxSpeed=12.175;
						optimalSpeed=12;
						optimalSpeedRange=6;
						minSpeed=0.80000001;
						acceleration=10;
						maxAngleSpeed=180;
						slowRadius=2;
						stopRadius=3;
						maxSpeedRange=30;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotEating
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=20;
					eatingWeight=20;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=10;
					grazeWalkingDurationMax=15;
					restingDurationMin=15;
					restingDurationMax=25;
					travelingDurationMin=15;
					travelingDurationMax=30;
					eatingDurationMin=15;
					eatingDurationMax=25;
					safetyDurationMin=10;
					safetyDurationMax=20;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotHunting
			{
				class BehaviourHunt
				{
					attackRange=3.5;
					followingRadius=15;
					followingRadiusReqroupCooldownMin=5;
					followingRadiusReqroupCooldownMax=15;
					followingRadiusRegroupMinSpeed=1.5;
					predictFollowingMinDistance=10;
					minDistanceToTargetRatio=0.30000001;
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfBark_SoundSet"
							};
						};
						probability=0.30000001;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfBark2_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfBark3_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfBark_SoundSet"
							};
						};
						probability=1;
						RepeatTimeMin=10;
						RepeatTimeMax=30;
						RepeatEnabled="true";
					};
					class Movement
					{
						maxSpeed=10;
						optimalSpeed=9.5;
						minSpeed=1;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						maxSpeedRange=15;
						optimalSpeedRange=5;
						pathFilter="WolfOnHunt";
					};
					class MovementAttack
					{
						maxSpeed=12.175;
						optimalSpeed=12.175;
						minSpeed=6;
						acceleration=20;
						maxAngleSpeed=360;
						slowRadius=0;
						stopRadius=0;
						maxSpeedRange=3;
						optimalSpeedRange=1;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotCalmResting
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=50;
					grazeWalkingWeight=50;
					restWeight=50;
					travelWeight=0;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=15;
					grazeWalkingDurationMax=25;
					restingDurationMin=25;
					restingDurationMax=35;
					travelingDurationMin=15;
					travelingDurationMax=30;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.1;
					safetyLookAngleMax=1.5;
					safetyLookAngleChangeInterval=7;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotCalmTravelling
			{
				class BehaviourCalm
				{
					travelingMode="true";
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=10;
					grazeOnSpotDurationMax=20;
					grazeWalkingDurationMin=25;
					grazeWalkingDurationMax=35;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=10;
					travelingDurationMax=50;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=4;
						stopRadius=2;
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
						slowToTurn="true";
						smoothAcceleration="true";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=2;
						stopRadius=1;
						pathFilter="WolfOnHunt";
					};
				};
			};
			class SlotAttracted
			{
				class BehaviourCalm
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfHowls1_SoundSet",
								"WolfHowls1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfHowls2_SoundSet",
								"WolfHowls2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfHowls3_SoundSet",
								"WolfHowls3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfHowls4_SoundSet",
								"WolfHowls4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfHowls5_SoundSet",
								"WolfHowls5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfHowls6_SoundSet",
								"WolfHowls6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfHowls7_SoundSet",
								"WolfHowls7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfHowls8_SoundSet",
								"WolfHowls8_tailDistant_SoundSet"
							};
						};
						probability=0.69999999;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfHowl1_SoundSet",
								"WolfHowl1_tailDistant_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfHowl2_SoundSet",
								"WolfHowl2_tailDistant_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfHowl3_SoundSet",
								"WolfHowl3_tailDistant_SoundSet"
							};
						};
						class Sound4
						{
							sounds[]=
							{
								"WolfHowl4_SoundSet",
								"WolfHowl4_tailDistant_SoundSet"
							};
						};
						class Sound5
						{
							sounds[]=
							{
								"WolfHowl5_SoundSet",
								"WolfHowl5_tailDistant_SoundSet"
							};
						};
						class Sound6
						{
							sounds[]=
							{
								"WolfHowl6_SoundSet",
								"WolfHowl6_tailDistant_SoundSet"
							};
						};
						class Sound7
						{
							sounds[]=
							{
								"WolfHowl7_SoundSet",
								"WolfHowl7_tailDistant_SoundSet"
							};
						};
						class Sound8
						{
							sounds[]=
							{
								"WolfHowl8_SoundSet",
								"WolfHowl8_tailDistant_SoundSet"
							};
						};
						probability=0.40000001;
						RepeatTimeMin=25;
						RepeatTimeMax=35;
						RepeatEnabled="true";
					};
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=0;
					travelWeight=50;
					grazeOnSpotDurationMin=5;
					grazeOnSpotDurationMax=10;
					grazeWalkingDurationMin=5;
					grazeWalkingDurationMax=10;
					restingDurationMin=5;
					restingDurationMax=10;
					travelingDurationMin=50;
					travelingDurationMax=100;
					grazeWalkingSpeed=0.54400003;
					travelingWalkingSpeed=0.78200001;
					safetyDurationMin=10;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=5;
						stopRadius=3;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class CatchUpMovement
					{
						maxSpeed=6.3800001;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
						pathFilter="WolfOnHunt";
					};
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
				};
			};
			class SlotFireplace
			{
				class BehaviourCalm
				{
					grazeOnSpotWeight=20;
					grazeWalkingWeight=20;
					restWeight=20;
					travelWeight=0;
					grazeOnSpotDurationMin=50;
					grazeOnSpotDurationMax=100;
					grazeWalkingDurationMin=50;
					grazeWalkingDurationMax=100;
					restingDurationMin=50;
					restingDurationMax=150;
					travelingDurationMin=0;
					travelingDurationMax=0;
					grazeWalkingSpeed=0.2;
					travelingWalkingSpeed=1.36;
					safetyIntervalMin=30;
					safetyIntervalMax=40;
					safetyDurationMin=5;
					safetyDurationMax=10;
					safetyLookAngleMin=0.30000001;
					safetyLookAngleMax=0.69999999;
					safetyLookAngleChangeInterval=3;
					class GrazeMovement
					{
						maxSpeed=0.25;
						minSpeed=0.25;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
					};
					class TravelingMovement
					{
						maxSpeed=2.8499999;
						minSpeed=0.77999997;
						acceleration=5;
						maxAngleSpeed=90;
						slowRadius=0;
						stopRadius=0.5;
						slowToTurn="true";
						smoothAcceleration="true";
					};
				};
			};
			class SlotScared
			{
				class BehaviourFleeFromTargets
				{
					class SoundsEntering
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfGroans1_SoundSet"
							};
						};
						class Sound2
						{
							sounds[]=
							{
								"WolfGroans2_SoundSet"
							};
						};
						class Sound3
						{
							sounds[]=
							{
								"WolfGroans3_SoundSet"
							};
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
							sounds[]=
							{
								"WolfGroans_SoundSet"
							};
						};
						probability=0.30000001;
						RepeatTimeMin=5;
						RepeatTimeMax=25;
						RepeatEnabled="true";
					};
					class RunMovement
					{
						maxSpeed=12.175;
						optimalSpeed=6.3899999;
						minSpeed=1;
						acceleration=2;
						maxAngleSpeed=360;
						slowRadius=4;
						stopRadius=0;
						maxSpeedRange=15;
						optimalSpeedRange=10;
						pathFilter="DeerOnRun";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=20;
				noiseToAlertMultiplier=1.5;
				damageToAlertMultiplier=200;
				class Calm
				{
					dropSpeed=3;
					dropDelay=2;
					maxAlertValue=30;
				};
				class Alerted
				{
					dropSpeed=11;
					dropDelay=0;
					maxAlertValue=100;
				};
				class AlertedExtra
				{
					dropSpeed=25;
					dropDelay=10;
					maxAlertValue=500;
				};
			};
		};
		class NoiseSystemParams
		{
			rangeMin=25;
			rangeMax=100;
			rangeShotMin=0;
			rangeShotMax=50;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=0.40000001;
				Zombies=0.60000002;
				Player=1;
			};
		};
		class TargetSystemDZBase
		{
			class VisionTeamMultipliers
			{
				BigGame=0.60000002;
				Zombies=1;
				Player=1;
			};
			visionManSizeStand=1;
			visionManSizeCrouch=0.80000001;
			visionManSizeProne=0.60000002;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1.5;
			visionRangeMin=100;
			visionRangeMax=200;
			visionFov=1.8;
			visionPeripheralRangeMin=1;
			visionPeripheralRangeMax=16;
			visionPeripheralFov=6.1999998;
			visionNightMinMult=1;
			visionNightMaxMult=0.75;
			visionRainMinMult=1;
			visionRainMaxMult=0.89999998;
			visionFogMinMult=1;
			visionFogMaxMult=0.69999999;
		};
	};
	class Infected
	{
		name="zombie";
		HeadLookBoneName="lookat";
		teamName="Zombies";
		class BehaviourHLZombie
		{
			class MovementWalk
			{
				maxSpeed=1.5;
				minSpeed=0;
				acceleration=5;
				maxAngleSpeed=180;
				slowRadius=0;
				stopRadius=0.5;
				pathFilter="ZombieCalm";
			};
			class MovementRun
			{
				maxSpeed=3;
				minSpeed=0;
				acceleration=15;
				maxAngleSpeed=120;
				slowRadius=0;
				goalRadius=1.5;
				stopRadius=1.7;
				useStartAnimation="false";
				pathFilter="ZombieAlerted";
			};
			class MovementSprint
			{
				maxSpeed=9;
				minSpeed=0;
				acceleration=27;
				maxAngleSpeed=180;
				maxSpeedRange=9;
				slowRadius=3.2;
				goalRadius=1.5;
				goalSpeed=7.1999998;
				stopRadius=1.7;
				waypointRadius=1.5;
				useStartAnimation="false";
				startAnimationMaxSpeed=0;
				slowToTurn="false";
				smoothAcceleration="true";
				pathFilter="ZombieAlerted";
			};
			class SlotCalm
			{
				class BehaviourZombieCalm
				{
					StandingDurationMin=6;
					StandingDurationMax=8;
					WalkingDurationMin=4;
					WalkingDurationMax=8;
					MinLookTime=1;
					MaxLookTime=2;
					IsAttractMode="false";
					class SoundsDuring
					{
						class Sound1
						{
							moveWithEntity="true";
						};
						probability=0.80000001;
						RepeatTimeMin=9;
						RepeatTimeMax=15;
						RepeatEnabled="true";
					};
				};
			};
			class SlotAlerted
			{
				class BehaviourZombieAlerted
				{
					maxTimeInDisturbedState=2;
					alertToAttract=0.80000001;
					fightStateEnterDistance=2;
					fightStateExitDistance=3;
					fightStateEnterOrientAngleDiff=160;
					fightStateExitOrientAngleDiff=160;
					disturbedTargetHistoryLength=10;
					disturbedVisionUtilityWeight=1;
					disturbedNoiseUtilityWeight=1;
					disturbedDamageUtilityWeight=1;
					attractedTargetHistoryLength=10;
					attractedVisionUtilityWeight=1;
					attractedNoiseUtilityWeight=1;
					attractedDamageUtilityWeight=1;
					attractedSearchDistance=15;
					chaseTargetHistoryLength=10;
					chaseVisionUtilityWeight=1;
					chaseNoiseUtilityWeight=1;
					chaseDamageUtilityWeight=1;
					class SoundsEntering
					{
						class Sound1
						{
						};
						probability=1;
					};
					class SoundsDuring
					{
						class Sound1
						{
						};
						probability=1;
						RepeatTimeMin=3.9000001;
						RepeatTimeMax=4.0999999;
						RepeatEnabled="true";
					};
					noiseMakeAlertPeriod=6;
					class NoiseMakeAlert
					{
						strength=40;
						type="sound";
					};
				};
			};
			class AlertSystem
			{
				visionToAlertMultiplier=20;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=10000;
				noiseShotToAlertMultiplier=1.7;
				class Calm
				{
					DropSpeed=1;
					DropDelay=0;
					MaxAlertValue=20;
				};
				class Alerted
				{
					DropSpeed=2.5;
					DropDelay=1;
					MaxAlertValue=100;
				};
			};
			staminaDepletionSpeed=5;
			staminaRechargeSpeed=10;
		};
		class TargetSystemDZBase
		{
			visionProximityRange=2.5;
			visionProximityStrengthMult=2;
			visionCloseRange=10;
			visionCloseHeight=1.8;
			visionCloseStrengthMult=1.5;
			visionRangeMin=20;
			visionRangeMax=40;
			visionFov=1;
			visionPeripheralRangeMin=2.5;
			visionPeripheralRangeMax=20;
			visionPeripheralFov=2.3;
			visionAngularSpeedMin=0.1;
			visionAngularSpeedMax=0.5;
			visionAngularSpeedMaxMult=1;
			visionNightMinMult=1;
			visionNightMaxMult=0.30000001;
			visionRainMinMult=1;
			visionRainMaxMult=0.60000002;
			visionFogMinMult=1;
			visionFogMaxMult=0.5;
		};
		class NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=35;
			rangeShotMin=25;
			rangeShotMax=110;
			radiusMin=10;
			radiusMax=25;
			radiusShotMin=35;
			radiusShotMax=70;
			shotVolExponent=1;
			class NoiseStrengthTeamMultipliers
			{
				BigGame=1;
				Zombies=1;
				Player=1;
			};
		};
	};
	class InfectedFemale: Infected
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class SlotCalm: SlotCalm
			{
				class BehaviourZombieCalm: BehaviourZombieCalm
				{
					class SoundsDuring: SoundsDuring
					{
						class Sound1: Sound1
						{
							moveWithEntity="true";
						};
					};
				};
			};
			class SlotAlerted: SlotAlerted
			{
				class BehaviourZombieAlerted: BehaviourZombieAlerted
				{
					class SoundsEntering: SoundsEntering
					{
						class Sound1: Sound1
						{
						};
					};
					class SoundsDuring: SoundsDuring
					{
						class Sound1: Sound1
						{
						};
					};
				};
			};
		};
	};
	class InfectedFJogger: InfectedFemale
	{
	};
	class InfectedMale: Infected
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class SlotCalm: SlotCalm
			{
				class BehaviourZombieCalm: BehaviourZombieCalm
				{
					class SoundsDuring: SoundsDuring
					{
						class Sound1: Sound1
						{
							moveWithEntity="true";
						};
					};
				};
			};
			class SlotAlerted: SlotAlerted
			{
				class BehaviourZombieAlerted: BehaviourZombieAlerted
				{
					class SoundsEntering: SoundsEntering
					{
						class Sound1: Sound1
						{
						};
					};
					class SoundsDuring: SoundsDuring
					{
						class Sound1: Sound1
						{
						};
					};
				};
			};
		};
	};
	class InfectedMJogger: InfectedMale
	{
	};
	class InfectedMSoldier: InfectedMale
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class SlotAlerted: SlotAlerted
			{
				class BehaviourZombieAlerted: BehaviourZombieAlerted
				{
					class NoiseMakeAlert: NoiseMakeAlert
					{
						strength=25;
						type="sound";
					};
				};
			};
			class AlertSystem: AlertSystem
			{
				visionToAlertMultiplier=25;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=10000;
				noiseShotToAlertMultiplier=2;
				class Calm
				{
					DropSpeed=1;
					DropDelay=0;
					MaxAlertValue=20;
				};
				class Alerted
				{
					DropSpeed=1;
					DropDelay=1;
					MaxAlertValue=100;
				};
			};
			staminaDepletionSpeed=2;
			staminaRechargeSpeed=15;
		};
		class TargetSystemDZBase: TargetSystemDZBase
		{
			visionProximityRange=2;
			visionProximityStrengthMult=1.5;
			visionNightMinMult=1;
			visionNightMaxMult=0.5;
		};
		class NoiseSystemParams: NoiseSystemParams
		{
			rangeMin=10;
			rangeMax=35;
			rangeShotMin=50;
			rangeShotMax=110;
			radiusMin=5;
			radiusMax=20;
			radiusShotMin=25;
			radiusShotMax=40;
		};
	};
	class InfectedSoldier_Heavy: InfectedMSoldier
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class MovementSprint: MovementSprint
			{
				maxSpeed=3;
				minSpeed=0;
				acceleration=15;
				maxAngleSpeed=120;
				slowRadius=0;
				goalRadius=1.5;
				stopRadius=1.7;
				useStartAnimation="false";
				startAnimationMaxSpeed=0;
				slowToTurn="false";
				smoothAcceleration="true";
				pathFilter="ZombieAlerted";
			};
		};
	};
	class InfectedSoldier_Officer: InfectedMSoldier
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class SlotAlerted: SlotAlerted
			{
				class BehaviourZombieAlerted: BehaviourZombieAlerted
				{
					noiseMakeAlertPeriod=4;
					class NoiseMakeAlert: NoiseMakeAlert
					{
						strength=25;
						type="shot";
					};
				};
			};
		};
	};
	class InfectedMPolice: InfectedMale
	{
	};
	class InfectedFPolice: InfectedFemale
	{
	};
	class InfectedMParamedic: InfectedMale
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class SlotAlerted: SlotAlerted
			{
				class BehaviourZombieAlerted: BehaviourZombieAlerted
				{
					class NoiseMakeAlert
					{
						strength=40;
						type="sound";
					};
				};
			};
			class AlertSystem: AlertSystem
			{
				visionToAlertMultiplier=20;
				noiseToAlertMultiplier=1.2;
				damageToAlertMultiplier=10000;
				noiseShotToAlertMultiplier=1.7;
				class Calm
				{
					DropSpeed=1;
					DropDelay=0;
					MaxAlertValue=20;
				};
				class Alerted
				{
					DropSpeed=2.5;
					DropDelay=1;
					MaxAlertValue=100;
				};
			};
			staminaDepletionSpeed=5;
			staminaRechargeSpeed=10;
		};
		class TargetSystemDZBase: TargetSystemDZBase
		{
			visionNightMinMult=1;
			visionNightMaxMult=0.30000001;
		};
		class NoiseSystemParams: NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=35;
			rangeShotMin=20;
			rangeShotMax=105;
			radiusMin=5;
			radiusMax=22;
			radiusShotMin=35;
			radiusShotMax=70;
		};
	};
	class InfectedFParamedic: InfectedFemale
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class SlotAlerted: SlotAlerted
			{
				class BehaviourZombieAlerted: BehaviourZombieAlerted
				{
					class NoiseMakeAlert
					{
						strength=40;
						type="sound";
					};
				};
			};
			class AlertSystem: AlertSystem
			{
				visionToAlertMultiplier=20;
				noiseToAlertMultiplier=1.2;
				damageToAlertMultiplier=10000;
				noiseShotToAlertMultiplier=1.7;
				class Calm
				{
					DropSpeed=1;
					DropDelay=0;
					MaxAlertValue=20;
				};
				class Alerted
				{
					DropSpeed=3;
					DropDelay=1;
					MaxAlertValue=100;
				};
			};
			staminaDepletionSpeed=5;
			staminaRechargeSpeed=10;
		};
		class TargetSystemDZBase: TargetSystemDZBase
		{
			visionNightMinMult=1;
			visionNightMaxMult=0.30000001;
		};
		class NoiseSystemParams: NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=35;
			rangeShotMin=0;
			rangeShotMax=175;
			radiusMin=5;
			radiusMax=22;
			radiusShotMin=35;
			radiusShotMax=70;
		};
	};
	class InfectedMFirefighter: InfectedMale
	{
	};
	class InfectedMHunter: InfectedMale
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class SlotAlerted: SlotAlerted
			{
				class BehaviourZombieAlerted: BehaviourZombieAlerted
				{
					class NoiseMakeAlert
					{
						strength=10;
						type="sound";
					};
				};
			};
			class AlertSystem: AlertSystem
			{
				visionToAlertMultiplier=20;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=10000;
				noiseShotToAlertMultiplier=1.8;
				class Calm
				{
					DropSpeed=1;
					DropDelay=0;
					MaxAlertValue=20;
				};
				class Alerted
				{
					DropSpeed=2.5;
					DropDelay=1;
					MaxAlertValue=100;
				};
			};
			staminaDepletionSpeed=5;
			staminaRechargeSpeed=10;
		};
		class TargetSystemDZBase: TargetSystemDZBase
		{
			visionNightMinMult=1;
			visionNightMaxMult=0.40000001;
		};
		class NoiseSystemParams: NoiseSystemParams
		{
			rangeMin=5;
			rangeMax=35;
			rangeShotMin=25;
			rangeShotMax=110;
			radiusMin=5;
			radiusMax=20;
			radiusShotMin=35;
			radiusShotMax=70;
		};
	};
	class InfectedPriest: InfectedMale
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class SlotAlerted: SlotAlerted
			{
				class BehaviourZombieAlerted: BehaviourZombieAlerted
				{
					class NoiseMakeAlert
					{
						strength=60;
						type="sound";
					};
				};
			};
			class AlertSystem: AlertSystem
			{
				visionToAlertMultiplier=20;
				noiseToAlertMultiplier=1;
				damageToAlertMultiplier=10000;
				noiseShotToAlertMultiplier=1.7;
				class Calm
				{
					DropSpeed=1;
					DropDelay=0;
					MaxAlertValue=20;
				};
				class Alerted
				{
					DropSpeed=2.5;
					DropDelay=1;
					MaxAlertValue=100;
				};
			};
			staminaDepletionSpeed=5;
			staminaRechargeSpeed=10;
		};
		class TargetSystemDZBase: TargetSystemDZBase
		{
			visionNightMinMult=1;
			visionNightMaxMult=0.30000001;
		};
		class NoiseSystemParams: NoiseSystemParams
		{
			rangeMin=0;
			rangeMax=35;
			rangeShotMin=15;
			rangeShotMax=90;
			radiusMin=5;
			radiusMax=25;
			radiusShotMin=35;
			radiusShotMax=70;
		};
	};
	class InfectedRunner: InfectedMale
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class MovementWalk: MovementWalk
			{
				maxSpeed=3;
				minSpeed=0;
				acceleration=15;
				maxAngleSpeed=120;
				slowRadius=0;
				stopRadius=1.7;
				pathFilter="ZombieCalm";
			};
			class MovementRun: MovementRun
			{
				maxSpeed=9;
				minSpeed=0;
				acceleration=27;
				maxAngleSpeed=120;
				maxSpeedRange=9;
				slowRadius=0;
				goalRadius=1.5;
				goalSpeed=7.1999998;
				stopRadius=1.7;
				waypointRadius=1.5;
				useStartAnimation="false";
				smoothAcceleration="true";
				pathFilter="ZombieAlerted";
			};
			class SlotCalm: SlotCalm
			{
				class BehaviourZombieCalm: BehaviourZombieCalm
				{
					StandingDurationMin=0.5;
					StandingDurationMax=3;
					WalkingDurationMin=4;
					WalkingDurationMax=8;
					MinLookTime=1;
					MaxLookTime=2;
					IsAttractMode="false";
				};
			};
			class SlotAlerted: SlotAlerted
			{
				class BehaviourZombieAlerted: BehaviourZombieAlerted
				{
					noiseMakeAlertPeriod=10;
					class NoiseMakeAlert
					{
						strength=0;
						type="sound";
					};
				};
			};
			class AlertSystem: AlertSystem
			{
				visionToAlertMultiplier=25;
				noiseToAlertMultiplier=1.5;
				damageToAlertMultiplier=10000;
				noiseShotToAlertMultiplier=2;
			};
		};
	};
	class InfectedMMummy: InfectedMale
	{
		class BehaviourHLZombie: BehaviourHLZombie
		{
			class MovementSprint: MovementSprint
			{
				maxSpeed=3;
				minSpeed=0;
				acceleration=15;
				maxAngleSpeed=120;
				slowRadius=0;
				goalRadius=1.5;
				stopRadius=1.7;
				useStartAnimation="false";
				startAnimationMaxSpeed=0;
				slowToTurn="false";
				smoothAcceleration="true";
				pathFilter="ZombieAlerted";
			};
		};
		class TargetSystemDZBase: TargetSystemDZBase
		{
			visionProximityRange=2.5;
			visionProximityStrengthMult=5;
			visionCloseRange=20;
			visionCloseHeight=1.8;
			visionCloseStrengthMult=2;
			visionRangeMin=30;
			visionRangeMax=60;
			visionFov=1;
			visionPeripheralRangeMin=2.5;
			visionPeripheralRangeMax=30;
			visionPeripheralFov=2.5;
			visionNightMinMult=1;
			visionNightMaxMult=1;
			visionRainMinMult=1;
			visionRainMaxMult=1;
			visionFogMinMult=1;
			visionFogMaxMult=1;
		};
	};
};
class CfgNoises
{
	class DeerStepNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
	};
	class DeerRoarNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
	};
	class WolfStepNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
	};
	class WolfRoarNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
	};
	class ZombieStepNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
	};
	class ZombieRoarNoise
	{
		type="sound";
		continuousRange=100;
		strength=10;
	};
};
class CfgDamages
{
	class DeerBiteDamage
	{
	};
	class WolfBiteDamage
	{
		bone="tongue3";
		ammo="MeleeWolf";
		radius=0.40000001;
		duration=0.2;
	};
	class WolfLowBiteDamage
	{
		bone="chest";
		ammo="MeleeWolf";
		radius=0.69999999;
		duration=0.5;
	};
};

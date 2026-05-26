class CfgPatches
{
	class DZ_Animals
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
	class DZ_LightAI;
	class AnimalBase: DZ_LightAI
	{
		scope=0;
		vehicleClass="Animals";
		simulation="animal";
		storageCategory=2;
		icon="\dz\animals\data\mapicon_animals_ca.paa";
		displayName="$STR_DN_ANIMAL";
		nameSound="veh_animal";
		accuracy=0.25;
		faceType="Default";
		memoryPointHeadAxis="head_axis";
		memoryPointAim="aimPoint";
		memoryPointCameraTarget="camera";
		agentTasks[]=
		{
			"AnimalMainTask"
		};
		attackSounds="";
		spottedSounds="";
		chaseSounds="";
		idleSounds="";
		varTemperatureInit=38;
		varTemperatureMin=-100;
		varTemperatureMax=1000;
		varTemperatureFreezePoint=-2;
		varTemperatureThawPoint=-2;
		varTemperatureFreezeTime=7920;
		varTemperatureThawTime=7920;
		class VariablesScalar
		{
			_threatMaxRadius=50;
			_runDistanceMax=100;
			_movePrefer=0.69999999;
			_formationPrefer=0.1;
			_scareLimit=0.2;
			_dangerLimit=1;
		};
		class VariablesString
		{
			_expSafe="(0.5 * meadow) * (0.5 * trees) * (1 - forest) * (1 - houses) * (1 - sea)";
			_expDanger="(trees) * (forest) * (1 - meadow)";
		};
		htMin=60;
		htMax=1800;
		afMax=30;
		mfMax=0;
		mFact=1;
		tBody=37;
	};
	class AnimalsHoofsMedium: AnimalBase
	{
	};
};
class CfgTasks
{
	class AnimalMainTask
	{
		name="Animal Main Task";
		fsm="\dz\animals\Data\scripts\main.fsm";
		condition="\dz\animals\Data\scripts\createSingleTask.sqf";
		description="Animal master task";
		destination="";
		resources[]={};
	};
};
class CfgFSMs
{
	class Dragonfly
	{
		class States
		{
			class Random_Move
			{
				name="Random_Move";
				class Init
				{
					function="randomMove";
					parameters[]={1,-0.1,1.2,5};
					thresholds[]={};
				};
				class Links
				{
					class MoveCompleted
					{
						priority=1;
						to="SetRandom3";
						class Condition
						{
							function="moveCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class TimeElapsed
					{
						priority=0;
						to="SetRandom2";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class LongerWait
			{
				name="LongerWait";
				class Init
				{
					function="wait";
					parameters[]={0.80000001,2};
					thresholds[]={};
				};
				class Links
				{
					class WaitCompleted
					{
						priority=0;
						to="SetTimerRandom";
						class Condition
						{
							function="waitCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Init
			{
				name="Init";
				class Init
				{
					function="setNoBackwards";
					parameters[]={1};
					thresholds[]=
					{
						{0,0.5,0.5}
					};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetTimerRandom";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetTimerRandom
			{
				name="SetTimerRandom";
				class Init
				{
					function="setTimer";
					parameters[]={0.5,2};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetRandom";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class ShortWait
			{
				name="ShortWait";
				class Init
				{
					function="wait";
					parameters[]={0.60000002,1.5};
					thresholds[]={};
				};
				class Links
				{
					class WaitCompleted
					{
						priority=0;
						to="SetTimerRandom";
						class Condition
						{
							function="waitCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetRandom2
			{
				name="SetRandom2";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]=
					{
						{1,0,1}
					};
				};
				class Links
				{
					class constProbability
					{
						priority=1;
						to="LongWait";
						class Condition
						{
							function="const";
							parameters[]={0.1};
							threshold=1;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class Always
					{
						priority=0;
						to="LongerWait";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetRandom3
			{
				name="SetRandom3";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]=
					{
						{1,0,1}
					};
				};
				class Links
				{
					class constProbability
					{
						priority=1;
						to="LongWait";
						class Condition
						{
							function="const";
							parameters[]={0.15000001};
							threshold=1;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class Always
					{
						priority=0;
						to="ShortWait";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class LongWait
			{
				name="LongWait";
				class Init
				{
					function="wait";
					parameters[]={4,8};
					thresholds[]={};
				};
				class Links
				{
					class WaitCompleted
					{
						priority=0;
						to="SetTimerRandom";
						class Condition
						{
							function="waitCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetRandom
			{
				name="SetRandom";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]=
					{
						{1,0,1}
					};
				};
				class Links
				{
					class constProbability
					{
						priority=1;
						to="LongMove";
						class Condition
						{
							function="const";
							parameters[]={0.1};
							threshold=1;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class Always
					{
						priority=0;
						to="Random_Move";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class LongMove
			{
				name="LongMove";
				class Init
				{
					function="randomMove";
					parameters[]={2.5,-0.1,1.2,5};
					thresholds[]={};
				};
				class Links
				{
					class MoveCompleted
					{
						priority=1;
						to="SetRandom3";
						class Condition
						{
							function="moveCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class TimeElapsed
					{
						priority=0;
						to="SetRandom2";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
		};
		initState="Init";
		finalStates[]={};
	};
	class Butterfly
	{
		class States
		{
			class Init
			{
				name="Init";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]=
					{
						{0,0.5,0.5}
					};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetTimer";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class MoveLand
			{
				name="MoveLand";
				class Init
				{
					function="randomMoveLand";
					parameters[]={2};
					thresholds[]={};
				};
				class Links
				{
					class MoveCompleted
					{
						priority=1;
						to="SetTimer3";
						class Condition
						{
							function="moveCompletedVertical";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="wait";
							parameters[]={5,15};
							thresholds[]={};
						};
					};
					class TimeElapsed
					{
						priority=0;
						to="Land";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetTimer3
			{
				name="SetTimer3";
				class Init
				{
					function="setTimer";
					parameters[]={4,6};
					thresholds[]={};
				};
				class Links
				{
					class TimeElapsed
					{
						priority=0;
						to="checkWait";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="switchAction";
							parameters[]={1};
							thresholds[]={};
						};
					};
				};
			};
			class checkWait
			{
				name="checkWait";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]={};
				};
				class Links
				{
					class WaitCompleted
					{
						priority=1;
						to="SetTimer";
						class Condition
						{
							function="waitCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="switchAction";
							parameters[]={0};
							thresholds[]={};
						};
					};
					class Always
					{
						priority=0;
						to="SetTimer3";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetTimer
			{
				name="SetTimer";
				class Init
				{
					function="setTimer";
					parameters[]={10,25};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="Move";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Land
			{
				name="Land";
				class Init
				{
					function="Land";
					parameters[]={};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="Wait";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Wait
			{
				name="Wait";
				class Init
				{
					function="wait";
					parameters[]={3,10};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetTimer3";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Move
			{
				name="Move";
				class Init
				{
					function="randomMove";
					parameters[]={3};
					thresholds[]={};
				};
				class Links
				{
					class MoveCompleted
					{
						priority=1;
						to="Continue";
						class Condition
						{
							function="moveCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class TimeElapsed
					{
						priority=0;
						to="SetTimer2";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetTimer2
			{
				name="SetTimer2";
				class Init
				{
					function="setTimer";
					parameters[]={3,6};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="MoveLand";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Continue
			{
				name="Continue";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="Move";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
		};
		initState="Init";
		finalStates[]={};
	};
	class HoneyBee
	{
		class States
		{
			class ShortMove
			{
				name="ShortMove";
				class Init
				{
					function="randomMove";
					parameters[]={0.2};
					thresholds[]={};
				};
				class Links
				{
					class MoveCompleted
					{
						priority=1;
						to="SetRandom";
						class Condition
						{
							function="moveCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class TimeElapsed
					{
						priority=0;
						to="SetRandom";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Break
			{
				name="Break";
				class Init
				{
					function="break";
					parameters[]={50};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetTimer";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class Init
			{
				name="Init";
				class Init
				{
					function="setNoBackwards";
					parameters[]={0};
					thresholds[]=
					{
						{0,0.5,0.5}
					};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetTimerRandom";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetTimerRandom
			{
				name="SetTimerRandom";
				class Init
				{
					function="setTimer";
					parameters[]={0.5,2};
					thresholds[]={};
				};
				class Links
				{
					class Always
					{
						priority=0;
						to="SetRandom_1";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetTimer
			{
				name="SetTimer";
				class Init
				{
					function="setTimer";
					parameters[]={0.1,0.30000001};
					thresholds[]={};
				};
				class Links
				{
					class TimeElapsed
					{
						priority=0;
						to="SetTimerRandom";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetRandom
			{
				name="SetRandom";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]=
					{
						{1,0,1}
					};
				};
				class Links
				{
					class constProbability
					{
						priority=1;
						to="SetRandom_1";
						class Condition
						{
							function="const";
							parameters[]={0.5};
							threshold=1;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class Always
					{
						priority=0;
						to="Break";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class SetRandom_1
			{
				name="SetRandom_1";
				class Init
				{
					function="nothing";
					parameters[]={};
					thresholds[]=
					{
						{1,0,1}
					};
				};
				class Links
				{
					class constProbability
					{
						priority=1;
						to="LongMove";
						class Condition
						{
							function="const";
							parameters[]={0.1};
							threshold=1;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class Always
					{
						priority=0;
						to="ShortMove";
						class Condition
						{
							function="true";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
			class LongMove
			{
				name="LongMove";
				class Init
				{
					function="randomMove";
					parameters[]={1.5};
					thresholds[]={};
				};
				class Links
				{
					class MoveCompleted
					{
						priority=1;
						to="SetRandom";
						class Condition
						{
							function="moveCompleted";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
					class TimeElapsed
					{
						priority=0;
						to="SetRandom";
						class Condition
						{
							function="timeElapsed";
							parameters[]={};
							threshold=0;
						};
						class Action
						{
							function="nothing";
							parameters[]={};
							thresholds[]={};
						};
					};
				};
			};
		};
		initState="Init";
		finalStates[]={};
	};
};

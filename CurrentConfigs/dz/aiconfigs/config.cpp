////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:04:28 2018 : 'file' last modified on Mon Sep 17 12:10:16 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\dz\aiconfigs\config.bin{
class CfgPatches
{
	class DZ_data_aiconfigs{};
};
class AIParamsDebug
{
	showViewCones = "true";
	showLifeCycle = "true";
};
class AIParams
{
	maxNoiseRange = 400.0;
	rainToNoiseMultiplier = 20.0;
	seaToNoiseMultiplier = 15.0;
	noiseDampeningMultiplier = 0.7;
	noiseCollisionDampeningMultiplier = 0.2;
	groupLODDistance = 1000.0;
	class AgentTeams
	{
		TeamList[] = {"Player","BigGame","Zombies","Predator","AmbientLife"};
		class Player
		{
			friends[] = {"Player"};
		};
		class Predator
		{
			friends[] = {"Predator","AmbientLife"};
		};
		class BigGame
		{
			friends[] = {"BigGame","AmbientLife"};
		};
		class Zombies
		{
			friends[] = {"Zombies","AmbientLife"};
		};
		class AmbientLife
		{
			friends[] = {"AmbientLife"};
		};
	};
};
class GroupBehaviourTemplates
{
	class DZAmbientLifeGroupBeh
	{
		type = "AmbientLifeGroup";
		groupRadius = 10.0;
		groupMinCount = 2;
		groupMaxCount = 10;
		spawnMinDistanceBetweenAgents = 3.0;
	};
	class DZWolfGroupBeh
	{
		type = "Predators";
		alertDistributionSpeed = 20.0;
		catchUpTestDelay = 4.0;
		catchUpStartRadius = 80.0;
		catchUpTargetRadius = 7.0;
		groupRadius = 10.0;
		spawnMinDistanceBetweenAgents = 1.0;
		agentPathLength = 100.0;
		atNeedMinDuration = 60.0;
		atNeedMaxDuration = 120.0;
		singleAgentSafeKeeperDelayMin = 100.0;
		singleAgentSafeKeeperDelayMax = 100.0;
		preyAttractionRange = 350.0;
		innerOuterCircleRatio = 0.6;
		endAttractionRange = 10;
		attractionCooldown = 60;
		endAttractionTime = 300;
		targetEscapingSpeed = 1.5;
		killAddFear = 34;
		eatingTime = 600.0;
		huntingCooldown = 120.0;
		maxHuntingTime = 60;
		safeKeeperIntervalMin = 20;
		safeKeeperIntervalMax = 40;
		siegeAttackCountdownMin = 1;
		siegeAttackCountdownMax = 12;
		huntAttackCountdownMin = 1;
		huntAttackCountdownMax = 10;
		changeTargetCooldown = 5.0;
		changeTargetAlertRatio = 1.3;
		changeTargetEffectRadius = 6.0;
		subgroupSpacingMax = 500.0;
		class LifeCycleDayTime
		{
			class Activity1
			{
				endTimeMin = 8.5;
				endTimeMax = 8.5;
				zoneType = "Rest";
			};
			class Activity2
			{
				endTimeMin = 16.0;
				endTimeMax = 16.0;
				zoneType = "HuntingGround";
				stayInZone = "false";
			};
			class Activity3
			{
				endTimeMin = 18.5;
				endTimeMax = 19.5;
				zoneType = "Rest";
			};
			class Activity4
			{
				endTimeMin = 22.5;
				endTimeMax = 23.5;
				zoneType = "HuntingGround";
				stayInZone = "false";
			};
		};
	};
	class DZDeerGroupBeh
	{
		type = "WildHerbivores";
		alertDistributionSpeed = 20.0;
		catchUpTestDelay = 4.0;
		catchUpStartRadius = 30.0;
		catchUpTargetRadius = 7.0;
		groupRadius = 10.0;
		spawnMinDistanceBetweenAgents = 3.0;
		agentPathLength = 60.0;
		atNeedMinDuration = 60.0;
		atNeedMaxDuration = 60.0;
		singleAgentSafeKeeperDelayMin = 10.0;
		singleAgentSafeKeeperDelayMax = 100.0;
		safeKeeperIntervalMin = 10;
		safeKeeperIntervalMax = 30;
		class LifeCycleDayTime
		{
			class Activity1
			{
				endTimeMin = 8.5;
				endTimeMax = 8.5;
				zoneType = "Graze";
			};
			class Activity2
			{
				endTimeMin = 11.0;
				endTimeMax = 11.0;
				zoneType = "Rest";
			};
			class Activity3
			{
				endTimeMin = 13.0;
				endTimeMax = 13.0;
				zoneType = "Graze";
			};
			class Activity4
			{
				endTimeMin = 17.0;
				endTimeMax = 17.0;
				zoneType = "Graze";
			};
			class Activity5
			{
				endTimeMin = 21.0;
				endTimeMax = 21.0;
				zoneType = "Water";
			};
		};
	};
	class DZdomesticGroupBeh
	{
		type = "DomesticHerbivores";
		alertDistributionSpeed = 0.0;
		groupMaxAlertedSpreadRadius = 30.0;
		catchUpStartRadius = 50.0;
		catchUpTargetRadius = 15.0;
		groupRadius = 10.0;
		spawnMinDistanceBetweenAgents = 3.0;
		agentPathLength = 60.0;
		atNeedMinDuration = 60.0;
		atNeedMaxDuration = 60.0;
		singleAgentSafeKeeperDelayMin = 20.0;
		singleAgentSafeKeeperDelayMax = 20.0;
		pauseLifeCycleAfterEscapeDuration = 60;
		safeKeeperIntervalMin = 10.0;
		safeKeeperIntervalMax = 30.0;
		class LifeCycleDayTime
		{
			class Activity1
			{
				endTimeMin = 8.5;
				endTimeMax = 8.5;
				zoneType = "Rest";
			};
			class Activity2
			{
				endTimeMin = 11.5;
				endTimeMax = 11.5;
				zoneType = "Water";
			};
			class Activity3
			{
				endTimeMin = 13.5;
				endTimeMax = 13.5;
				zoneType = "Graze";
			};
			class Activity4
			{
				endTimeMin = 18.5;
				endTimeMax = 19.5;
				zoneType = "Graze";
			};
			class Activity5
			{
				endTimeMin = 20.5;
				endTimeMax = 21.5;
				zoneType = "Graze";
			};
		};
	};
	class DZSheepGroupBeh
	{
		type = "DomesticHerbivores";
		alertDistributionSpeed = 0.0;
		groupMaxAlertedSpreadRadius = 10.0;
		catchUpTestDelay = 1.0;
		catchUpStartRadius = 15.0;
		catchUpTargetRadius = 5.0;
		groupRadius = 10.0;
		spawnMinDistanceBetweenAgents = 3.0;
		agentPathLength = 30.0;
		atNeedMinDuration = 60.0;
		atNeedMaxDuration = 60.0;
		singleAgentSafeKeeperDelayMin = 20.0;
		singleAgentSafeKeeperDelayMax = 20.0;
		pauseLifeCycleAfterEscapeDuration = 60;
		safeKeeperIntervalMin = 10.0;
		safeKeeperIntervalMax = 20.0;
		class LifeCycleDayTime
		{
			class Activity1
			{
				endTimeMin = 8.5;
				endTimeMax = 8.5;
				zoneType = "Rest";
			};
			class Activity2
			{
				endTimeMin = 11.5;
				endTimeMax = 11.5;
				zoneType = "Graze";
			};
			class Activity3
			{
				endTimeMin = 13.5;
				endTimeMax = 13.5;
				zoneType = "Graze";
			};
			class Activity4
			{
				endTimeMin = 18.5;
				endTimeMax = 19.5;
				zoneType = "Graze";
			};
			class Activity5
			{
				endTimeMin = 20.5;
				endTimeMax = 21.5;
				zoneType = "Graze";
			};
		};
	};
};
class PathGraphFilters
{
	class ZombieCalm
	{
		class Flags
		{
			include[] = {"walk","door","inside"};
			exclude[] = {"disabled","swim","swimsea","jump","climb","crawl","crouch"};
		};
		class Costs
		{
			building = 5.0;
		};
	};
	class ZombieAlerted
	{
		class Flags
		{
			include[] = {"walk","door","inside","jump","climb"};
			exclude[] = {"disabled","crawl","crouch"};
		};
		class Costs
		{
			jump0 = 3.0;
			jump1 = 0.0;
			jump2 = 0.0;
			jump3 = 0.0;
			jump4 = 0.0;
			water = 5.0;
		};
	};
	class ZombieCrawl
	{
		class Flags
		{
			include[] = {"walk","door","inside"};
			exclude[] = {"disabled","swim","swimsea","jump","climb","crouch"};
		};
	};
	class ChickenOnRun
	{
		class Flags
		{
			include[] = {"walk","door","inside","jump"};
			exclude[] = {"disabled","swim","swimsea","climb"};
		};
		class Costs
		{
			jump0 = 0.0;
			jump1 = 0.0;
			jump2 = 0.0;
			jump3 = 0.0;
			jump4 = 0.1;
			water = 5.0;
		};
	};
	class DeerOnRun
	{
		class Flags
		{
			include[] = {"walk","door","inside","jumpover"};
			exclude[] = {"disabled","swim","swimsea","climb","crawl","crouch"};
		};
		class Costs
		{
			jump0 = 0.0;
			jump1 = 0.0;
			jump2 = 1.0;
			jump3 = 1.0;
			jump4 = 0.0;
			water = 1.0;
			building = 5.0;
		};
	};
	class RoeDeerOnRun
	{
		class Flags
		{
			include[] = {"walk","door","inside","jumpover"};
			exclude[] = {"disabled","swim","swimsea","climb","crawl","crouch"};
		};
		class Costs
		{
			jump0 = 0.0;
			jump1 = 0.0;
			jump2 = 1.0;
			jump3 = 0.0;
			jump4 = 0.0;
			water = 1.0;
			building = 5.0;
		};
	};
	class CowOnRun
	{
		class Flags
		{
			include[] = {"walk","door","inside","jumpover"};
			exclude[] = {"disabled","swim","swimsea","climb","crawl","crouch"};
		};
		class Costs
		{
			jump0 = 0.0;
			jump1 = 0.0;
			jump2 = 0.5;
			jump3 = 0.0;
			jump4 = 0.0;
			water = 1.0;
			building = 5.0;
		};
	};
	class WolfOnHunt
	{
		class Flags
		{
			include[] = {"walk","door","inside","jumpover"};
			exclude[] = {"disabled","swim","swimsea","climb","crawl","crouch"};
		};
		class Costs
		{
			jump0 = 0.0;
			jump1 = 0.0;
			jump2 = 1.0;
			jump3 = 1.0;
			jump4 = 0.0;
			water = 1.0;
		};
	};
	class WolfOnOuterCircle
	{
		class Flags
		{
			include[] = {"walk","jumpover"};
			exclude[] = {"disabled","swim","swimsea","climb","crawl","crouch"};
		};
		class Costs
		{
			jump0 = 0.0;
			jump1 = 0.0;
			jump2 = 1.0;
			jump3 = 1.0;
			jump4 = 0.0;
			water = 1.0;
		};
	};
	class NoJumping
	{
		class Flags
		{
			include[] = {"walk"};
			exclude[] = {"disabled","swim","swimsea","climb","crawl","crouch","jumpover"};
		};
		class Costs
		{
			jump0 = 0.0;
			jump1 = 0.0;
			jump2 = 1.0;
			jump3 = 0.0;
			jump4 = 0.0;
			water = 1.0;
		};
	};
};
//};

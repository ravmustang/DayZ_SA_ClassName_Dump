////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:59:07 2018 : 'file' last modified on Wed Aug 22 22:38:26 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\worlds_chernarusplus_ai\spawner\config.bin{
class CfgPatches
{
	class DZ_worlds_chernarusplus_ai_spawner{};
};
class ChernarusPlusSpawner
{
	class AISpawnerParams
	{
		territoriesFiles[] = {"DZ\worlds\chernarusplus\ai\cattle_territories.xml","DZ\worlds\chernarusplus\ai\sheep_goat_territories.xml","DZ\worlds\chernarusplus\ai\red_deer_territories.xml","DZ\worlds\chernarusplus\ai\roe_deer_territories.xml","DZ\worlds\chernarusplus\ai\wild_boar_territories.xml","DZ\worlds\chernarusplus\ai\pig_territories.xml","dz\worlds\chernarusplus\ai\hen_territories.xml","dz\worlds\chernarusplus\ai\wolf_territories.xml","DZ\worlds\chernarusplus\ai\hare_territories.xml","DZ\worlds\chernarusplus\ai\zombie_territories.xml"};
		class HerdDeer
		{
			usableTerritories[] = {"red_deer_territories"};
			groupBehaviourTemplateName = "DZDeerGroupBeh";
		};
		class HerdCow
		{
			usableTerritories[] = {"cattle_territories"};
			groupBehaviourTemplateName = "DZdomesticGroupBeh";
		};
		class HerdGoat
		{
			usableTerritories[] = {"sheep_goat_territories"};
			groupBehaviourTemplateName = "DZSheepGroupBeh";
		};
		class HerdSheep
		{
			usableTerritories[] = {"sheep_goat_territories"};
			groupBehaviourTemplateName = "DZSheepGroupBeh";
		};
		class HerdRoeDeer
		{
			usableTerritories[] = {"roe_deer_territories"};
			groupBehaviourTemplateName = "DZDeerGroupBeh";
		};
		class HerdWolf
		{
			usableTerritories[] = {"wolf_territories"};
			groupBehaviourTemplateName = "DZWolfGroupBeh";
		};
		class HerdWildBoar
		{
			usableTerritories[] = {"wild_boar_territories"};
			groupBehaviourTemplateName = "DZDeerGroupBeh";
		};
		class HerdPig
		{
			usableTerritories[] = {"pig_territories"};
			groupBehaviourTemplateName = "DZSheepGroupBeh";
		};
		class AmbientHen
		{
			usableTerritories[] = {"hen_territories"};
			groupBehaviourTemplateName = "DZAmbientLifeGroupBeh";
			globalCountMax = 50;
			zoneCountMin = 1;
			zoneCountMax = 1;
			playerSpawnRadiusNear = 25;
			playerSpawnRadiusFar = 75;
			class AgentTypeMale
			{
				agentConfigName[] = {"Animal_GallusGallusDomesticus"};
				agentSpawnChance[] = {"1"};
			};
			class AgentTypeFemale
			{
				agentConfigName[] = {"Animal_GallusGallusDomesticusF_Brown","Animal_GallusGallusDomesticusF_Spotted","Animal_GallusGallusDomesticusF_White"};
				agentSpawnChance[] = {"1","10","20"};
			};
			agentTypeSpawnChance[] = {"1","3"};
		};
		class AmbientHare
		{
			usableTerritories[] = {"hare_territories"};
			groupBehaviourTemplateName = "DZAmbientLifeGroupBeh";
			globalCountMax = 0;
			zoneCountMin = 3;
			zoneCountMax = 5;
			playerSpawnRadiusNear = 15;
			playerSpawnRadiusFar = 200;
			class AgentTypeMale
			{
				agentConfigName[] = {"Animal_LepusEuropaeus"};
				agentSpawnChance[] = {"1"};
			};
			class AgentTypeFemale
			{
				agentConfigName[] = {"Animal_LepusEuropaeus"};
				agentSpawnChance[] = {"1"};
			};
			agentTypeSpawnChance[] = {"1","3"};
		};
		class HerdZombieTest
		{
			usableTerritories[] = {"zombie_territories"};
			groupBehaviourTemplateName = "DZdomesticGroupBeh";
			herdsCount = 0;
			class AgentTypeMale
			{
				agentConfigName[] = {"ZombieMale3_NewAI"};
				countMin = 0;
				countMax = 0;
			};
			class AgentTypeFemale
			{
				agentConfigName[] = {"ZombieFemale3_NewAI"};
				countMin = 0;
				countMax = 0;
			};
		};
	};
};
//};

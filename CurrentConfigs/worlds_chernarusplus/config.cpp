////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Thu Sep 27 19:26:23 2018 : 'file' last modified on Thu Aug 23 01:43:29 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=12
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\worlds_chernarusplus\config.bin{
class CfgPatches
{
	class DZ_Worlds_Chernarusplus_World
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces"};
	};
};
class CfgWorlds
{
	class DefaultWorld
	{
		class Weather;
		class Grid;
	};
	class CAWorld: DefaultWorld
	{
		class Grid: Grid{};
	};
	class DefaultLighting;
	class ChernarusPlus: CAWorld
	{
		access = 3;
		worldId = 1;
		cutscenes[] = {"ChernarusPlusIntro1"};
		description = "Chernarus";
		worldName = "\DZ\worlds\chernarusplus\world\ChernarusPlus.wrp";
		proxyExportFile = "\DZ\worlds\chernarusplus\proxyexport\ChernarusPlus.bin";
		class Navmesh
		{
			navmeshName = "\dz\Worlds\chernarusplus\navmesh\navmesh.nm";
			filterIsolatedIslandsOnLoad = 1;
			visualiseOffset = 0.0;
			class GenParams
			{
				tileWidth = 50.0;
				cellSize1 = 0.25;
				cellSize2 = 0.1;
				cellSize3 = 0.1;
				filterIsolatedIslands = 1;
				seedPosition[] = {7500,0,7500};
				class Agent
				{
					diameter = 0.6;
					standHeight = 1.5;
					crouchHeight = 1.0;
					proneHeight = 0.5;
					maxStepHeight = 0.45;
					maxSlope = 60.0;
				};
				class Links
				{
					class ZedJump387_050
					{
						jumpLength = 1.5;
						jumpHeight = 0.5;
						minCenterHeight = 0.3;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump0";
						flags[] = {"jumpOver"};
						color = 1727987712;
					};
					class ZedJump388_050
					{
						jumpLength = 1.5;
						jumpHeight = 0.5;
						minCenterHeight = -0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump0";
						flags[] = {"jumpOver"};
						color = 1725781248;
					};
					class ZedJump387_110
					{
						jumpLength = 3.9;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump0";
						flags[] = {"jumpOver"};
						color = 1711308800;
					};
					class ZedJump420_160
					{
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump0";
						flags[] = {"jumpOver"};
						color = 1711276287;
					};
					class ZedJump265_210
					{
						jumpLength = 2.45;
						jumpHeight = 2.5;
						minCenterHeight = 1.8;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump0";
						flags[] = {"climb"};
						color = 1720975571;
					};
					class Fence50_110deer
					{
						typeId = 100;
						jumpLength = 8.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType = "jump2";
						flags[] = {"jumpOver"};
						color = 1722460927;
					};
					class Fence110_160deer
					{
						typeId = 101;
						jumpLength = 8.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType = "jump3";
						flags[] = {"jumpOver"};
						color = 1713700856;
					};
					class Fence50_110hen
					{
						typeId = 110;
						jumpLength = 4.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump4";
						flags[] = {"jumpOver"};
						color = -22016;
					};
					class Fence110_160hen
					{
						typeId = 111;
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType = "jump4";
						flags[] = {"jumpOver"};
						color = -22016;
					};
				};
			};
		};
		longitude = 30;
		latitude = -45;
		soundMapAttenCoef = 0.01;
		class SoundMapValues
		{
			treehard = 0.03;
			treesoft = 0.03;
			bushhard = 0.0;
			bushsoft = 0.0;
			forest = 1.0;
			house = 0.3;
			church = 0.5;
		};
		class OutsideTerrain
		{
			satellite = "DZ\worlds\chernarusplus\data\outside_sat_co.paa";
			enableTerrainSynth = 1;
			class Layers
			{
				class Layer0
				{
					nopx = "DZ\surfaces\data\terrain\cp_grass_nopx.paa";
					texture = "DZ\surfaces\data\terrain\cp_grass_ca.paa";
				};
			};
		};
		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 0;
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = 100;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = 1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = 10000;
			};
		};
		startTime = "9:20";
		startDate = "11/10/2017";
		startWeather = 0.25;
		startFog = 0.0;
		forecastWeather = 0.25;
		forecastFog = 0.0;
		centerPosition[] = {7100,7750,300};
		seagullPos[] = {1272.842,150.0,14034.962};
		ilsPosition[] = {0.0,0.0};
		ilsDirection[] = {0.0,0.0,0.0};
		ilsTaxiIn[] = {0.0,0.0};
		ilsTaxiOff[] = {0.0,0.0};
		class Sounds
		{
			sounds[] = {};
		};
		clutterGrid = 1.0;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 15;
		midDetailTexture = "DZ\worlds\chernarusplus\data\middle_sat_mco.paa";
		terrainNormalTexture = "DZ\worlds\chernarusplus\data\global_nohq.paa";
		minTreesInForestSquare = 50;
		minRocksInRockSquare = 3;
		class UsedTerrainMaterials
		{
			material0 = "DZ\surfaces\data\terrain\cp_broadleaf_dense1.rvmat";
			material1 = "DZ\surfaces\data\terrain\cp_broadleaf_dense2.rvmat";
			material2 = "DZ\surfaces\data\terrain\cp_broadleaf_sparse1.rvmat";
			material3 = "DZ\surfaces\data\terrain\cp_broadleaf_sparse2.rvmat";
			material4 = "DZ\surfaces\data\terrain\cp_concrete1.rvmat";
			material5 = "DZ\surfaces\data\terrain\cp_concrete2.rvmat";
			material6 = "DZ\surfaces\data\terrain\cp_conifer_common1.rvmat";
			material7 = "DZ\surfaces\data\terrain\cp_conifer_common2.rvmat";
			material8 = "DZ\surfaces\data\terrain\cp_conifer_moss1.rvmat";
			material9 = "DZ\surfaces\data\terrain\cp_conifer_moss2.rvmat";
			material10 = "DZ\surfaces\data\terrain\cp_dirt.rvmat";
			material11 = "DZ\surfaces\data\terrain\cp_grass.rvmat";
			material12 = "DZ\surfaces\data\terrain\cp_grass_tall.rvmat";
			material13 = "DZ\surfaces\data\terrain\cp_gravel.rvmat";
			material14 = "DZ\surfaces\data\terrain\cp_rock.rvmat";
		};
		class Subdivision
		{
			class Fractal
			{
				rougness = 5;
				maxRoad = 0.02;
				maxTrack = 0.5;
				maxSlopeFactor = 0.05;
			};
			class WhiteNoise
			{
				rougness = 2;
				maxRoad = 0.01;
				maxTrack = 0.05;
				maxSlopeFactor = 0.0025;
			};
			minY = -0.0;
			minSlope = 0.02;
		};
		class Ambient
		{
			class BigInsects
			{
				radius = 20;
				cost = "(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species{};
			};
			class BigInsectsAquatic
			{
				radius = 20;
				cost = "(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
				class Species{};
			};
			class SmallInsects
			{
				radius = 3;
				cost = "(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species{};
			};
			class NightInsects
			{
				radius = 3;
				cost = "(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species{};
			};
			class WindClutter
			{
				radius = 10;
				cost = "((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
				class Species
				{
					class FxWindGrass1
					{
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					class FxWindGrass2
					{
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					class FxWindRock1
					{
						probability = "0.4 * hills";
						cost = 1;
					};
					class FxCrWindLeaf1
					{
						probability = "0.2 * trees";
						cost = 1;
					};
					class FxCrWindLeaf2
					{
						probability = "0.1 * trees + 0.2";
						cost = 1;
					};
					class FxCrWindLeaf3
					{
						probability = "0.1 * trees";
						cost = 1;
					};
				};
			};
			class NoWindClutter
			{
				radius = 15;
				cost = 8;
				class Species
				{
					class FxWindPollen1
					{
						probability = 1;
						cost = 1;
					};
					class FxCrWindLeaf1
					{
						probability = "0.2 * trees";
						cost = 1;
					};
					class FxCrWindLeaf2
					{
						probability = "0.1 * trees + 0.2";
						cost = 1;
					};
					class FxCrWindLeaf3
					{
						probability = "0.1 * trees";
						cost = 1;
					};
				};
			};
		};
	};
};
class CfgWorldList
{
	class ChernarusPlus{};
};
class CfgMissions
{
	class Cutscenes
	{
		class ChernarusPlusIntro1
		{
			directory = "dz\Worlds\ChernarusPlus\data\scenes\intro.ChernarusPlus";
		};
	};
};
//};

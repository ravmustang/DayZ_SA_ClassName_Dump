////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:11:31 2018 : 'file' last modified on Wed Aug 22 17:44:36 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_navigation\config.bin{
class CfgPatches
{
	class DZ_Gear_Navigation
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class RecipeToolOnTool;
class CfgRecipes{};
class MapDefaults
{
	ptsPerSquareSea = 8;
	ptsPerSquareTxt = 10;
	ptsPerSquareCLn = 10;
	ptsPerSquareFor = "6.0f";
	ptsPerSquareForEdge = "15.0f";
	ptsPerSquareRoad = "3f";
	ptsPerSquareObj = 15;
	showCountourInterval = 1;
	colorLevels[] = {0.65,0.6,0.45,1.0};
	colorSea[] = {0.46,0.65,0.74,0.5};
	colorForest[] = {0.45,0.64,0.333,0.5};
	colorRocks[] = {0.0,0.0,0.0,0.3};
	colorCountlines[] = {0.85,0.8,0.65,1.0};
	colorMainCountlines[] = {0.45,0.4,0.25,1.0};
	colorCountlinesWater[] = {0.25,0.4,0.5,0.3};
	colorMainCountlinesWater[] = {0.25,0.4,0.5,0.9};
	colorPowerLines[] = {0.1,0.1,0.1,1.0};
	colorRailWay[] = {0.8,0.2,0.0,1.0};
	colorForestBorder[] = {0.0,0.0,0.0,0.0};
	colorRocksBorder[] = {0.0,0.0,0.0,0.0};
	colorNames[] = {0.1,0.1,0.1,0.9};
	colorOutside[] = {1.0,1.0,1.0,1.0};
	colorTracks[] = {0.2,0.13,0,1};
	colorRoads[] = {0.2,0.13,0,1};
	colorMainRoads[] = {0,0,0,1};
	colorTracksFill[] = {0,0,0,0};
	colorRoadsFill[] = {1,0.88,0.65,1};
	colorMainRoadsFill[] = {0.94,0.69,0.2,1};
	colorGrid[] = {0.05,0.1,0,0.6};
	colorGridMap[] = {0.05,0.1,0,0.4};
	fontNames = "AmorSerifPro";
	sizeExNames = 0.04;
	fontGrid = "AmorSerifPro";
	sizeExGrid = 0.02;
	fontLevel = "AmorSerifPro";
	sizeExLevel = 0.02;
	text = "";
	class Legend
	{
		x = 0.05;
		y = 0.85;
		w = 0.4;
		h = 0.1;
		font = "AmorSerifPro";
		sizeEx = 0.02;
		colorBackground[] = {1,1,1,0.5};
		color[] = {0,0,0,1};
	};
	class Bunker
	{
		icon = "\dz\gear\navigation\map\bunker_ca.paa";
		color[] = {0,0,0,1};
		size = 14;
		importance = "1.5 * 14 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Bush
	{
		icon = "\dz\gear\navigation\map\bush_ca.paa";
		color[] = {0.45,0.64,0.33,0.4};
		size = 14;
		importance = "0.2 * 14 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class BusStop
	{
		icon = "\dz\gear\navigation\map\busstop_ca.paa";
		color[] = {0.15,0.26,0.87,1};
		size = 12;
		importance = "1 * 10 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Cross
	{
		icon = "\dz\gear\navigation\map\cross_ca.paa";
		size = 16;
		color[] = {0,0,0,1};
		importance = "0.7 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Fortress
	{
		icon = "\dz\gear\navigation\map\fortress_ca.paa";
		size = 16;
		color[] = {0,0,0,1};
		importance = "2 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Fuelstation
	{
		icon = "\dz\gear\navigation\map\fuelstation_ca.paa";
		size = 16;
		color[] = {0,0,0,1};
		importance = "2 * 16 * 0.05";
		coefMin = 0.75;
		coefMax = 4;
	};
	class Fountain
	{
		icon = "\dz\gear\navigation\map\fountain_ca.paa";
		color[] = {0.2,0.45,0.7,1};
		size = 11;
		importance = "1 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Hospital
	{
		icon = "\dz\gear\navigation\map\hospital_ca.paa";
		color[] = {0.78,0,0.05,1};
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Chapel
	{
		icon = "\dz\gear\navigation\map\chapel_ca.paa";
		color[] = {0,0,0,1};
		size = 16;
		importance = "1 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Church
	{
		icon = "\dz\gear\navigation\map\church_ca.paa";
		color[] = {0,0,0,1};
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Lighthouse
	{
		icon = "\dz\gear\navigation\map\lighthouse_ca.paa";
		size = 14;
		color[] = {0,0,0,1};
		importance = "3 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Quay
	{
		icon = "\dz\gear\navigation\map\quay_ca.paa";
		size = 16;
		color[] = {0,0,0,1};
		importance = "2 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Rock
	{
		icon = "\dz\gear\navigation\map\rock_ca.paa";
		color[] = {0.1,0.1,0.1,0.8};
		size = 12;
		importance = "0.5 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Ruin
	{
		icon = "\dz\gear\navigation\map\ruin_ca.paa";
		size = 16;
		color[] = {0,0,0,1};
		importance = "1.2 * 16 * 0.05";
		coefMin = 1;
		coefMax = 4;
	};
	class SmallTree
	{
		icon = "\dz\gear\navigation\map\smalltree_ca.paa";
		color[] = {0.45,0.64,0.33,0.4};
		size = 12;
		importance = "0.6 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Stack
	{
		icon = "\dz\gear\navigation\map\stack_ca.paa";
		size = 20;
		color[] = {0,0,0,1};
		importance = "2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Tree
	{
		icon = "\dz\gear\navigation\map\tree_ca.paa";
		color[] = {0.45,0.64,0.33,0.4};
		size = 12;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Tourism
	{
		icon = "\dz\gear\navigation\map\tourism_ca.paa";
		color[] = {0.78,0,0.05,1};
		size = 16;
		importance = "1 * 16 * 0.05";
		coefMin = 0.7;
		coefMax = 4;
	};
	class Transmitter
	{
		icon = "\dz\gear\navigation\map\transmitter_ca.paa";
		color[] = {0,0,0,1};
		size = 20;
		importance = "2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class ViewTower
	{
		icon = "\dz\gear\navigation\map\viewtower_ca.paa";
		color[] = {0,0,0,1};
		size = 16;
		importance = "2.5 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Watertower
	{
		icon = "\dz\gear\navigation\map\watertower_ca.paa";
		color[] = {0.2,0.45,0.7,1};
		size = 20;
		importance = "1.2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
};
class TouristDefaults: MapDefaults
{
	scaleMin = 0.5;
	scaleMax = 0.75;
	scaleDefault = 0.5;
	ptsPerSquareCLn = 10;
	ptsPerSquareFor = "1.0f";
	ptsPerSquareForEdge = "15.0f";
	ptsPerSquareRoad = "3f";
	ptsPerSquareObj = 1;
	colorLevels[] = {0.65,0.6,0.45,1.0};
	colorRailWay[] = {0,0,0,1.0};
	colorPowerLines[] = {0.1,0.1,0.1,0.0};
	colorRocks[] = {1.0,0.0,0.0,0.0};
	colorCountlines[] = {0.85,0.8,0.65,0.0};
	colorMainCountlines[] = {0.45,0.4,0.25,0.0};
	colorCountlinesWater[] = {0.25,0.4,0.5,0.0};
	colorMainCountlinesWater[] = {0.25,0.4,0.5,0.0};
	colorGrid[] = {0.05,0.1,0,0.0};
	colorGridMap[] = {0.05,0.1,0,0.0};
	colorSea[] = {0.658,0.772,0.968,1.0};
	colorForest[] = {0.53,0.99,0.45,0.55};
	colorRoads[] = {1,0.352,0.223,1};
	colorRoadsFill[] = {1,0.352,0.223,1};
	colorMainRoads[] = {0.98039,0.3647,0.2705,1};
	colorMainRoadsFill[] = {0.9607,1.0,0.0039,1};
	colorTracks[] = {0.819,0.819,0.819,1.0};
	colorTracksFill[] = {0.819,0.819,0.819,0.0};
	colorBackground[] = {0,0,0,1.0};
	colorOutside[] = {0.0,0.0,0.0,1.0};
	class Legend
	{
		x = 0.05;
		y = 0.85;
		w = 0.4;
		h = 0.1;
		font = "AmorSerifPro";
		sizeEx = 0.02;
		colorBackground[] = {1,1,1,0};
		color[] = {0,0,0,0};
	};
};
class TouristCityDefaults: MapDefaults
{
	ptsPerSquareCLn = 10;
	ptsPerSquareFor = "1.0f";
	ptsPerSquareForEdge = "15.0f";
	ptsPerSquareRoad = "3f";
	ptsPerSquareObj = 1;
	colorForest[] = {0.556,0.682,0.396,1};
	colorLevels[] = {0.65,0.6,0.45,1.0};
	colorPowerLines[] = {0.1,0.1,0.1,0.0};
	colorRocks[] = {1.0,0.0,0.0,0.0};
	colorCountlines[] = {0.85,0.8,0.65,0.0};
	colorMainCountlines[] = {0.45,0.4,0.25,0.0};
	colorCountlinesWater[] = {0.25,0.4,0.5,0.0};
	colorMainCountlinesWater[] = {0.25,0.4,0.5,0.0};
	colorGrid[] = {0.05,0.1,0,0.0};
	colorGridMap[] = {0.05,0.1,0,0.0};
	colorSea[] = {0.658,0.772,0.968,1.0};
	class Legend
	{
		x = 0.05;
		y = 0.85;
		w = 0.4;
		h = 0.1;
		font = "AmorSerifPro";
		sizeEx = 0.02;
		colorBackground[] = {1,1,1,0};
		color[] = {0,0,0,0};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class ItemMap: Inventory_Base{};
	class ChernarusMap: ItemMap
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ChernarusMap0";
		descriptionShort = "$STR_CfgVehicles_ChernarusMap1";
		model = "\dz\gear\navigation\Map_chernarus.p3d";
		rotationFlags = 17;
		itemSize[] = {1,2};
		weight = 40;
		SingleUseActions[] = {574};
		world = "ChernarusPlus";
		selectionPaper = "paper";
		simulation = "ItemMap";
		absorbency = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\navigation\data\Map_chernarus.rvmat"}},{0.5,{"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"}},{0.0,{"DZ\gear\navigation\data\Map_chernarus_destruct.rvmat"}}};
				};
			};
		};
		class MapProperties: MapDefaults
		{
			scaleMin = 0.1;
			scaleMax = 1.0;
		};
	};
	class ChernarusMap_Open: ItemMap
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ChernarusMapOpen0";
		descriptionShort = "$STR_CfgVehicles_ChernarusMapOpen1";
		model = "\dz\gear\navigation\Map_chernarus_open.p3d";
		rotationFlags = 17;
		itemSize[] = {1,2};
		weight = 40;
		SingleUseActions[] = {574};
		world = "ChernarusPlus";
		selectionPaper = "paper";
		simulation = "ItemMap";
		absorbency = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\navigation\data\Map_chernarus.rvmat"}},{0.5,{"DZ\gear\navigation\data\Map_chernarus_damage.rvmat"}},{0.0,{"DZ\gear\navigation\data\Map_chernarus_destruct.rvmat"}}};
				};
			};
		};
		class MapProperties: MapDefaults
		{
			scaleMin = 0.1;
			scaleMax = 1.0;
		};
	};
	class Compass: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Compass0";
		descriptionShort = "$STR_CfgVehicles_Compass1";
		model = "\dz\gear\navigation\compass.p3d";
		animClass = "Compass";
		itemSize[] = {1,1};
		SingleUseActions[] = {501,538};
		ContinuousActions[] = {230};
		autoQuickbar = 1;
		weight = 190;
		simulation = "ItemCompass";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\navigation\data\compass.rvmat"}},{0.5,{"DZ\gear\navigation\data\compass_damage.rvmat"}},{0.0,{"DZ\gear\navigation\data\compass_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class cover
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
		};
	};
	class OrienteeringCompass: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_OrienteeringCompass0";
		descriptionShort = "$STR_CfgVehicles_OrienteeringCompass1";
		model = "\dz\gear\navigation\compass_modern.p3d";
		animClass = "Compass";
		autoQuickbar = 1;
		itemSize[] = {1,2};
		weight = 130;
		simulation = "ItemCompass";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\navigation\data\compass_modern.rvmat"}},{0.5,{"DZ\gear\navigation\data\compass_modern_damage.rvmat"}},{0.0,{"DZ\gear\navigation\data\compass_modern_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class wheel
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
		};
	};
};
//};

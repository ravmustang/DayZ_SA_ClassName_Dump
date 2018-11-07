////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:11:28 2018 : 'file' last modified on Wed Aug 22 17:46:36 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_optics\config.bin{
class CfgPatches
{
	class DZ_Gear_Optics
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Pistols"};
	};
};
class RecipeToolOnTool;
class CfgRecipes{};
class CfgVehicles
{
	class ItemOptics;
	class Rangefinder: ItemOptics
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Rangefinder0";
		descriptionShort = "$STR_CfgVehicles_Rangefinder1";
		model = "\dz\gear\optics\Rangefinder.p3d";
		simulation = "itemoptics";
		animClass = "Binoculars";
		SingleUseActions[] = {};
		ContinuousActions[] = {237};
		itemSize[] = {2,2};
		weight = 270;
		rotationFlags = 17;
		autoQuickbar = 1;
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class OpticsInfo
		{
			modelOptics = "\dz\gear\optics\opticview_rangefinder.p3d";
			distanceZoomMin = 500;
			distanceZoomMax = 500;
			opticsZoomMin = 0.5;
			opticsZoomMax = 0.5;
			opticsZoomInit = 0.5;
		};
		attachments[] = {"BatteryD"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\optics\data\Rangefinder.rvmat"}},{0.5,{"DZ\gear\optics\data\Rangefinder_damage.rvmat"}},{0.0,{"DZ\gear\optics\data\Rangefinder_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class Binoculars: ItemOptics
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Binoculars0";
		descriptionShort = "$STR_CfgVehicles_Binoculars1";
		model = "\dz\gear\optics\binoculars.p3d";
		simulation = "itemoptics";
		animClass = "Binoculars";
		SingleUseActions[] = {};
		ContinuousActions[] = {237};
		itemSize[] = {3,3};
		weight = 980;
		rotationFlags = 17;
		autoQuickbar = 1;
		optics = 1;
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class OpticsInfo
		{
			modelOptics = "\DZ\gear\optics\binoculars_view.p3d";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			opticsZoomMin = 0.05;
			opticsZoomMax = 0.05;
			opticsZoomInit = 0.05;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\optics\data\binoculars.rvmat"}},{0.5,{"DZ\gear\optics\data\binoculars_damage.rvmat"}},{0.0,{"DZ\gear\optics\data\binoculars_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyEncore: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "Pistol";
		model = "\dz\gear\optics\binoculars.p3d";
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:04:17 2018 : 'file' last modified on Mon Sep 17 12:10:16 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\dz\config.bin{
class CfgPatches
{
	class DZ_Data
	{
		units[] = {"FxWindGrass1","FxWindGrass2","FxWindRock1","FxWindLeaf1","FxWindLeaf2","FxWindLeaf3","FxWindPollen1","FXUSWindLeaf1","FXUSWindLeaf2","FXUSWindLeaf3"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgAddons
{
	class PreloadBanks{};
	class PreloadAddons
	{
		class DayZ
		{
			list[] = {"DZ_A_Airport","DZ_Animals","DZ_Animals_AnimConfig","DZ_Animals_Birds","DZ_Animals_Birds_Chicken","DZ_Animals_Birds_Cock","DZ_Animals_Birds_Crow","DZ_Animals_Birds_hawk","DZ_Animals_Birds_Seagull","DZ_Animals_Cow","DZ_Animals_Deer","DZ_Animals_Dogs_Fin","DZ_Animals_Dogs_Pastor","DZ_Animals_Goat","DZ_Animals_Insect","DZ_Animals_Rabbit","DZ_Animals_Rat","DZ_Animals_Sheep","DZ_Animals_WildBoar","DZ_Anims","DZ_Anims_Config_Sdr","DZ_Anims_Config_Wmn","DZ_Anims_Config_Zmb","DZ_Buildings","DZ_Buildings2","DZ_Buildings2_A_Crane_02","DZ_Buildings2_A_GENERALSTORE_01","DZ_Buildings2_A_Pub","DZ_Buildings2_A_Statue","DZ_Buildings2_Barn_Metal","DZ_Buildings2_BuildingParts","DZ_Buildings2_BuildingParts_Signs","DZ_Buildings2_BuildingParts_Signs_TEC","DZ_Buildings2_Church_01","DZ_Buildings2_Farm_Cowshed","DZ_Buildings2_Farm_WTower","DZ_Buildings2_HouseBlocks_HouseBlock_A","DZ_Buildings2_HouseBlocks_HouseBlock_B","DZ_Buildings2_HouseBlocks_HouseBlock_C","DZ_Buildings2_HouseBlocks_HouseBlock_D","DZ_Buildings2_Ind_CementWorks_Ind_Dopravnik","DZ_Buildings2_Ind_CementWorks_Ind_Expedice","DZ_Buildings2_Ind_CementWorks_Ind_MalyKomin","DZ_Buildings2_Ind_CementWorks_Ind_Mlyn","DZ_Buildings2_Ind_CementWorks_Ind_Pec","DZ_Buildings2_Ind_CementWorks_Ind_SiloMale","DZ_Buildings2_Ind_CementWorks_Ind_SiloVelke","DZ_Buildings2_Ind_CementWorks_Ind_Vysypka","DZ_Buildings2_Ind_Garage01","DZ_Buildings2_Ind_Pipeline_IndPipe2","DZ_Buildings2_Ind_Shed_01","DZ_Buildings2_Ind_Shed_02","DZ_Buildings2_Ind_Tank","DZ_Buildings2_Ind_Workshop01","DZ_Buildings2_Misc_Cargo","DZ_Buildings2_Misc_PowerStation","DZ_Buildings2_Misc_WaterStation","DZ_Buildings2_Rail_House_01","DZ_Buildings2_Shed_small","DZ_Buildings2_Shed_wooden","DZ_Characters","DZ_Characters_Backpacks","DZ_Characters_Glasses","DZ_Characters_Gloves","DZ_Characters_Headgear","DZ_Characters_Heads","DZ_Characters_Pants","DZ_Characters_Masks","DZ_Characters_Shoes","DZ_Characters_Tops","DZ_Characters_Vests","DZ_Code","DZ_Data","DZ_Data_Data_ParticleEffects","DZ_Functions","DZ_Gear_Crafting","DZ_Gear_Cooking","DZ_Gear_Consumables","DZ_Gear_Containers","DZ_Gear_Drinks","DZ_Gead_Food","DZ_Gear_Medical","DZ_Gear_Navigation","DZ_Gear_Optics","DZ_Gear_Tools","DZ_Gear_Traps","DZ_Items","DZ_Items_Drinks","DZ_Items_Food","DZ_Items_Medical","DZ_Items_Misc","DZ_Items_Trash","DZ_Items_Weapons","DZ_Misc","DZ_Misc2","DZ_Misc2_Samsite","DZ_Misc3","DZ_Modules","DZ_Roads2","DZ_Roads2_Bridge","DZ_Roads2_Dam","DZ_Rocks2","DZ_Rocks3","DZ_Signs2","DZ_Server_Data","DZ_Spawn_Proxies","DZ_Sounds_Arma2","DZ_Sounds_Mod","DZ_Sounds_Effects","DZ_Structures","DZ_Structures_A_BuildingWIP","DZ_Structures_A_CraneCon","DZ_Structures_A_MunicipalOffice","DZ_Structures_A_TVTower","DZ_Structures_Barn_W","DZ_Structures_Castle","DZ_Structures_Furniture","DZ_Structures_Houses","DZ_Structures_House_A_FuelStation","DZ_Structures_House_A_Hospital","DZ_Structures_House_A_Office01","DZ_Structures_House_A_Office02","DZ_Structures_House_A_StationHouse","DZ_Structures_House_Church_02","DZ_Structures_House_Church_03","DZ_Structures_House_Church_05R","DZ_Structures_House_HouseBT","DZ_Structures_House_HouseV","DZ_Structures_House_HouseV2","DZ_Structures_House_Street_Booth","DZ_Structures_Ind","DZ_Structures_Ind_Pipeline_IndPipe1","DZ_Structures_Ind_Quarry","DZ_Structures_Ind_SawMill","DZ_Structures_Mil","DZ_Structures_Misc","DZ_Structures_Misc_Powerlines","DZ_Structures_NAV","DZ_Structures_Nav_Boathouse","DZ_Structures_Nav_Pier","DZ_Structures_Pond","DZ_Structures_Rail","DZ_Structures_Rail_Rail_Station_big","DZ_Structures_Rail_Railway","DZ_Structures_Ruins","DZ_Structures_Shed_Ind","DZ_Structures_Shed_Shed_Small","DZ_Structures_Tenement","DZ_Structures_Wall","DZ_Structures_Ship_Wreck","DZ_UI","DZ_UIFonts","DZ_UIFonts_CoreConfigOverwrite","DZ_Vehicles_Tracked","DZ_Vehicles_Wheeled","DZ_Vehicles_Wheeled_Datsun_Armed","DZ_Vehicles_Wheeled_Hilux_Armed","DZ_Vehicles_Wrecks","DZ_Weapons_Magazines","DZ_Weapons_Lights","DZ_Weapons_Muzzles","DZ_Weapons_Optics","DZ_Weapons_Supports","DZ_Weapons_Animations","DZ_Weapons_Ammunition","DZ_Weapons_Firearms","DZ_Weapons_Firearms_Winchester70","DZ_Weapons_Firearms_SVD","DZ_Weapons_Melee","DZ_Weapons_Melee_Blunt","DZ_Weapons_Melee_Blade","DZ_Weapons_Melee_Powered","DZ_Weapons_Misc","DZ_Weapons_Explosives","DZ_Weapons_Firearms_aug","DZ_Weapons_Firearms_M4","DZ_Weapons_Firearms_MosinNagant","DZ_Weapons_Firearms_SKS","DZ_Weapons_Firearms_Ruger1022","DZ_Weapons_Pistols_1911","DZ_Weapons_Pistols_Cz75","DZ_Weapons_Pistols_Fnx45","DZ_Weapons_Pistols_Magnum","DZ_Weapons_Pistols_Mkii","DZ_Weapons_Projectiles","DZ_Weapons_Shotguns","DZ_Worlds_Chernarusplus_World","DZ_Worlds_Test_Terrain"};
		};
	};
};
class CfgWorlds
{
	initWorld = "ChernarusPlus";
	class DefaultWorld
	{
		class Weather
		{
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
			};
		};
		class SimulWeather
		{
			class DefaultKeyframe;
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	class CAWorld: DefaultWorld
	{
		class SimulWeather: SimulWeather
		{
			numKeyframesPerDay = 48;
			windSpeedCoef = "10.0f";
			moonIrradianceCoef = "10.0f";
			fadeMaxDistanceKm = 100.0;
			fadeMaxAltitudeKm = 15.0;
			fadeNumAltitudes = 8;
			fadeNumElevations = 8;
			fadeNumDistances = 8;
			fadeEarthTest = 0;
			autoBrightness = 1;
			autoBrightnessStrength = 0.1;
			cloudGridWidth = 64;
			cloudGridLength = 64;
			cloudGridHeight = 16;
			helperGridElevationSteps = 24;
			helperGridAzimuthSteps = 15;
			helperEffectiveEarthRadius = 1100000;
			helperCurvedEarth = 1;
			helperAdjustCurvature = 0;
			helperNumLayers = 80;
			helperMaxDistance = 100000;
			helperNearCloudFade = 0.1;
			helperChurn = 10;
			cloudWidth = 40000;
			cloudLength = 40000;
			wrapClouds = 1;
			noiseResolution = 8;
			noisePeriod = 4.0;
			opticalDensity = 1.5;
			alphaSharpness = 0.8;
			selfShadowScale = 0.001;
			mieAsymmetry = 0.5087;
			minimumLightElevationDegrees = 6.0;
			directLightCoef = 1.0;
			indirectLightCoef = 0.01;
			fogStart = 0;
			fogEnd = 40000;
			fogHeight = 1000;
			class DefaultKeyframe: DefaultKeyframe
			{
				rayleigh[] = {0.00749,0.01388,0.02878};
				mie[] = {0.0046,0.0046,0.0046};
				haze = 1.0;
				hazeBaseKm = 1.0;
				hazeScaleKm = 0.5;
				hazeEccentricity = 0.82;
				brightnessAdjustment = 1.0;
				cloudiness = 0.35;
				cloudBaseKm = 3.2;
				cloudHeightKm = 3;
				directLight = 1.0;
				indirectLight = 0.8;
				ambientLight = 0.8;
				noiseOctaves = 4.3;
				noisePersistence = 0.55;
				fractalAmplitude = 2.3;
				fractalWavelength = 240.0;
				extinction = 1.7;
				diffusivity = 0.1;
			};
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					overcast = 0.0;
					cloudiness = 0.0;
				};
				class Weather2: DefaultKeyframe
				{
					overcast = 0.2;
				};
				class Weather3: DefaultKeyframe
				{
					overcast = 0.4;
					cloudiness = 0.45;
					cloudBaseKm = 2.2;
					cloudHeightKm = 3.5;
					directLight = 0.8;
					indirectLight = 0.7;
					ambientLight = 0.7;
					extinction = 3.0;
					diffusivity = 0.25;
				};
				class Weather4: DefaultKeyframe
				{
					overcast = 0.6;
					cloudiness = 0.65;
					cloudBaseKm = 1.8;
					cloudHeightKm = 4.0;
					directLight = 0.8;
					indirectLight = 0.5;
					ambientLight = 0.5;
					extinction = 3.25;
					diffusivity = 0.25;
				};
				class Weather5: DefaultKeyframe
				{
					overcast = 0.8;
					cloudiness = 0.8;
					cloudBaseKm = 1.2;
					cloudHeightKm = 4.5;
					directLight = 0.64;
					indirectLight = 0.3;
					ambientLight = 0.3;
					extinction = 3.5;
					diffusivity = 0.01;
				};
				class Weather6: DefaultKeyframe
				{
					overcast = 1.0;
					cloudiness = 1.0;
					cloudBaseKm = 1.0;
					cloudHeightKm = 5.0;
					directLight = 0.44;
					indirectLight = 0.25;
					ambientLight = 0.2;
					extinction = 4.5;
					diffusivity = 0.01;
				};
			};
		};
		class Weather: Weather
		{
			class LightingNew
			{
				class C_Night
				{
					height = 0;
					overcast = 0.5;
					sunAngle = -18;
					sunOrMoon = 0.0;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {0.016,0.0316,0.048};
					ambientCloud[] = {0.016,0.0316,0.048};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.012,0.012,0.029};
					skyAroundSun[] = {0.018,0.028,0.043};
					desiredLuminanceCoef = 0.1;
					desiredLuminanceCoefCloud = 0.1;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class C_Astro1
				{
					height = 0;
					overcast = 0.5;
					sunAngle = -17;
					sunOrMoon = 0.5;
					diffuse[] = {0.0,0.0,0.0};
					diffuseCloud[] = {0.0,0.0,0.0};
					ambient[] = {0.016,0.0316,0.048};
					ambientCloud[] = {0.016,0.0316,0.048};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.036,0.056,0.087};
					skyAroundSun[] = {0.036,0.056,0.087};
					desiredLuminanceCoef = 0.15;
					desiredLuminanceCoefCloud = 0.15;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class C_Astro2
				{
					height = 0;
					overcast = 0.5;
					sunAngle = -16;
					sunOrMoon = 1.0;
					diffuse[] = {0.0,0.0,0.0};
					diffuseCloud[] = {0.0,0.0,0.0};
					ambient[] = {0.032,0.0632,0.096};
					ambientCloud[] = {0.032,0.0632,0.096};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.036,0.056,0.087};
					skyAroundSun[] = {0.1011,0.1063,0.0926};
					desiredLuminanceCoef = 0.15;
					desiredLuminanceCoefCloud = 0.15;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class C_Astro3
				{
					height = 0;
					overcast = 0.5;
					sunAngle = -14;
					sunOrMoon = 1.0;
					diffuse[] = {0.0,0.0,0.0};
					diffuseCloud[] = {0.0,0.0,0.0};
					ambient[] = {0.032,0.0632,0.096};
					ambientCloud[] = {0.032,0.0632,0.096};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.1,0.14,0.22};
					skyAroundSun[] = {0.3035,0.319,0.278};
					desiredLuminanceCoef = 0.2;
					desiredLuminanceCoefCloud = 0.2;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class C_Nautical1
				{
					height = 0;
					overcast = 0.5;
					sunAngle = -12;
					sunOrMoon = 1.0;
					diffuse[] = {0.1011,0.1063,0.0926};
					diffuseCloud[] = {0.1011,0.1063,0.0926};
					ambient[] = {0.064,0.1264,0.192};
					ambientCloud[] = {0.064,0.1264,0.192};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.15,0.21,0.34};
					skyAroundSun[] = {0.6039,0.5411,0.4509};
					desiredLuminanceCoef = 0.2;
					desiredLuminanceCoefCloud = 0.2;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class C_Nautical2
				{
					height = 0;
					overcast = 0.5;
					sunAngle = -10;
					sunOrMoon = 1.0;
					diffuse[] = {0.1011,0.1063,0.0926};
					diffuseCloud[] = {0.1011,0.1063,0.0926};
					ambient[] = {0.064,0.1264,0.192};
					ambientCloud[] = {0.064,0.1264,0.192};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.15,0.21,0.34};
					skyAroundSun[] = {0.8039,0.5411,0.4509};
					desiredLuminanceCoef = 0.25;
					desiredLuminanceCoefCloud = 0.25;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class C_Nautical3
				{
					height = 0;
					overcast = 0.5;
					sunAngle = -8;
					sunOrMoon = 1.0;
					diffuse[] = {0.2311,0.2112,0.184};
					diffuseCloud[] = {0.2311,0.2112,0.184};
					ambient[] = {0.064,0.1264,0.192};
					ambientCloud[] = {0.064,0.1264,0.192};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.15,0.21,0.34},0.1};
					skyAroundSun[] = {{0.8039,0.5411,0.4509},0.8};
					desiredLuminanceCoef = 0.25;
					desiredLuminanceCoefCloud = 0.25;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class C_Civil1
				{
					height = 0;
					overcast = 0.5;
					sunAngle = -6;
					sunOrMoon = 1.0;
					diffuse[] = {0.346,0.1803,0.0836};
					diffuseCloud[] = {0.346,0.1803,0.0836};
					ambient[] = {0.128,0.2528,0.384};
					ambientCloud[] = {0.128,0.2528,0.384};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.3,0.225,0.327},1.0};
					skyAroundSun[] = {{0.939,0.5411,0.2509},1.8};
					desiredLuminanceCoef = 0.25;
					desiredLuminanceCoefCloud = 0.25;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class C_Civil2
				{
					height = 0;
					overcast = 0.5;
					sunAngle = -4;
					sunOrMoon = 1.0;
					diffuse[] = {{0.446,0.1803,0.0836},0.5};
					diffuseCloud[] = {{0.446,0.1803,0.0836},0.5};
					ambient[] = {{0.128,0.2528,0.384},1.5};
					ambientCloud[] = {{0.128,0.2528,0.384},1.5};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.6,0.549,0.745},2.0};
					skyAroundSun[] = {{0.939,0.5411,0.2509},3.1};
					desiredLuminanceCoef = 0.25;
					desiredLuminanceCoefCloud = 0.25;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class C_Civil3
				{
					height = 0;
					overcast = 0.5;
					sunAngle = -2;
					sunOrMoon = 1.0;
					diffuse[] = {{3.5,1.64,1},2.5};
					diffuseCloud[] = {{3.5,1.64,1},2.5};
					ambient[] = {{0.2,0.23,0.4},3.5};
					ambientCloud[] = {{0.2,0.23,0.4},3.5};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{1.2,0.64,1},4.0};
					skyAroundSun[] = {{1.239,0.4411,0.2509},5.1};
					desiredLuminanceCoef = 0.25;
					desiredLuminanceCoefCloud = 0.25;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class C_Day0
				{
					height = 0;
					overcast = 0.5;
					sunAngle = 0;
					sunOrMoon = 1.0;
					diffuse[] = {{1.3,0.404,0.294},4.5};
					diffuseCloud[] = {{1.3,0.404,0.294},4.5};
					ambient[] = {{0.2,0.23,0.4},6.5};
					ambientCloud[] = {{0.2,0.23,0.4},6.5};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{1.2,0.64,1},6.7};
					skyAroundSun[] = {{3.5,1.64,1},7.7};
					desiredLuminanceCoef = 0.58;
					desiredLuminanceCoefCloud = 0.58;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 2.25;
				};
				class C_Day4
				{
					height = 0;
					overcast = 0.5;
					sunAngle = 4;
					sunOrMoon = 1;
					diffuse[] = {{1.2,0.404,0.294},7.4};
					diffuseCloud[] = {{1.2,0.404,0.294},7.4};
					ambient[] = {{0.2,0.23,0.4},8.0};
					ambientCloud[] = {{0.2,0.23,0.4},8.0};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.03,0.03,0.03};
					bidirectCloud[] = {0.03,0.03,0.03};
					sky[] = {{0.5,0.64,1},9.0};
					skyAroundSun[] = {{2.2,1.24,1},10.2};
					desiredLuminanceCoef = 0.62;
					desiredLuminanceCoefCloud = 0.62;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 1.8;
				};
				class C_Day8
				{
					height = 0;
					overcast = 0.5;
					sunAngle = 8;
					sunOrMoon = 1;
					diffuse[] = {{1.0,0.604,0.294},10.4};
					diffuseCloud[] = {{1.0,0.604,0.294},10.4};
					ambient[] = {{0.383,0.58,0.858},9.8};
					ambientCloud[] = {{0.383,0.58,0.858},9.8};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.03,0.03,0.03};
					bidirectCloud[] = {0.03,0.03,0.03};
					sky[] = {{0.5,0.64,1},10.4};
					skyAroundSun[] = {{1.2,0.674,0.294},11};
					desiredLuminanceCoef = 0.64;
					desiredLuminanceCoefCloud = 0.64;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 1.5;
				};
				class C_Day12
				{
					height = 0;
					overcast = 0.5;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{1.0,0.64,0.31},11.4};
					diffuseCloud[] = {{1.0,0.64,0.31},11.4};
					ambient[] = {{0.383,0.58,0.858},10.6};
					ambientCloud[] = {{0.383,0.58,0.858},10.6};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.03,0.03,0.03};
					bidirectCloud[] = {0.03,0.03,0.03};
					sky[] = {{0.5,0.64,1},10.8};
					skyAroundSun[] = {{1.0,0.874,0.494},11.4};
					desiredLuminanceCoef = 0.66;
					desiredLuminanceCoefCloud = 0.66;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 1.2;
				};
				class C_Day16
				{
					height = 0;
					overcast = 0.5;
					sunAngle = 16;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},11.8};
					diffuseCloud[] = {{1,0.87,0.85},11.8};
					ambient[] = {{0.12,0.18,0.28},10.8};
					ambientCloud[] = {{0.12,0.18,0.28},10.8};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.08,0.08,0.07};
					bidirectCloud[] = {0.06,0.06,0.06};
					sky[] = {{0.5,0.64,1},11};
					skyAroundSun[] = {{1.0,1.0,1.0},11.8};
					desiredLuminanceCoef = 0.68;
					desiredLuminanceCoefCloud = 0.68;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0.1;
				};
				class C_Day35
				{
					height = 0;
					overcast = 0.5;
					sunAngle = 35;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},12.8};
					diffuseCloud[] = {{1,0.87,0.85},12.8};
					ambient[] = {{0.2,0.27,0.32},11.0};
					ambientCloud[] = {{0.2,0.27,0.32},11.0};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.08,0.08,0.07};
					bidirectCloud[] = {0.06,0.06,0.06};
					sky[] = {{0.5,0.64,1},12.0};
					skyAroundSun[] = {{1.0,1.0,1.0},12.5};
					desiredLuminanceCoef = 0.7;
					desiredLuminanceCoefCloud = 0.7;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0.1;
				};
				class C_Day60
				{
					height = 0;
					overcast = 0.5;
					sunAngle = 60;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},13.8};
					diffuseCloud[] = {{1,0.87,0.85},13.8};
					ambient[] = {{0.2,0.27,0.32},11.8};
					ambientCloud[] = {{0.2,0.27,0.32},11.8};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.08,0.08,0.07};
					bidirectCloud[] = {0.06,0.06,0.06};
					sky[] = {{0.5,0.64,1},12.2};
					skyAroundSun[] = {{1.0,1.0,1.0},13.0};
					desiredLuminanceCoef = 0.7;
					desiredLuminanceCoefCloud = 0.7;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0.1;
				};
				class O_Night
				{
					height = 0;
					overcast = 0.9;
					sunAngle = -18;
					sunOrMoon = 0.0;
					diffuse[] = {0.0,0.0,0.0};
					diffuseCloud[] = {0.0,0.0,0.0};
					ambient[] = {{0.036,0.057,0.085},2.0};
					ambientCloud[] = {{0.036,0.057,0.085},2.0};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.012,0.012,0.012};
					skyAroundSun[] = {0.012,0.012,0.012};
					desiredLuminanceCoef = 0.05;
					desiredLuminanceCoefCloud = 0.05;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class O_Astro1
				{
					height = 0;
					overcast = 0.9;
					sunAngle = -17;
					sunOrMoon = 0.5;
					diffuse[] = {0.004,0.0079,0.012};
					diffuseCloud[] = {0.004,0.0079,0.012};
					ambient[] = {{0.004,0.0079,0.012},2.0};
					ambientCloud[] = {{0.004,0.0079,0.012},2.0};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.036,0.056,0.087};
					skyAroundSun[] = {0.036,0.056,0.087};
					desiredLuminanceCoef = 0.1;
					desiredLuminanceCoefCloud = 0.1;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class O_Nautical1
				{
					height = 0;
					overcast = 0.9;
					sunAngle = -12;
					sunOrMoon = 1.0;
					diffuse[] = {0.004,0.0079,0.012};
					diffuseCloud[] = {0.004,0.0079,0.012};
					ambient[] = {{0.004,0.0079,0.012},2.0};
					ambientCloud[] = {{0.004,0.0079,0.012},2.0};
					groundReflection[] = {0.0,0.0,0.0};
					groundReflectionCloud[] = {0.0,0.0,0.0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.036,0.056,0.087};
					skyAroundSun[] = {0.1011,0.1063,0.0926};
					desiredLuminanceCoef = 0.15;
					desiredLuminanceCoefCloud = 0.15;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class O_Civil1
				{
					height = 0;
					overcast = 0.9;
					sunAngle = -6;
					sunOrMoon = 1;
					diffuse[] = {0.018,0.018,0.018};
					diffuseCloud[] = {0.018,0.018,0.018};
					ambient[] = {{0.1,0.18,0.29},2.0};
					ambientCloud[] = {{0.1,0.18,0.29},2.0};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.1,0.14,0.22};
					skyAroundSun[] = {0.1,0.14,0.22};
					desiredLuminanceCoef = 0.25;
					desiredLuminanceCoefCloud = 0.25;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class O_Civil2
				{
					height = 0;
					overcast = 0.9;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {0.018,0.018,0.018};
					diffuseCloud[] = {0.018,0.018,0.018};
					ambient[] = {{0.145,0.227,0.349},1.6};
					ambientCloud[] = {{0.145,0.227,0.349},1.6};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.03,0.03,0.03};
					bidirectCloud[] = {0.03,0.03,0.03};
					sky[] = {{0.1,0.14,0.22},1.715};
					skyAroundSun[] = {{0.1,0.14,0.22},2.799};
					desiredLuminanceCoef = 0.35;
					desiredLuminanceCoefCloud = 0.35;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class O_Day0
				{
					height = 0;
					overcast = 0.9;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.27,0.27,0.27},0.4};
					diffuseCloud[] = {{0.27,0.27,0.27},0.4};
					ambient[] = {{0.145,0.227,0.349},3.4};
					ambientCloud[] = {{0.145,0.227,0.349},3.4};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.065,0.065,0.065};
					bidirectCloud[] = {0.065,0.065,0.065};
					sky[] = {{0.1,0.14,0.22},3.715};
					skyAroundSun[] = {{0.1,0.14,0.22},4.799};
					desiredLuminanceCoef = 0.55;
					desiredLuminanceCoefCloud = 0.55;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class O_Day4
				{
					height = 0;
					overcast = 0.9;
					sunAngle = 4;
					sunOrMoon = 1;
					diffuse[] = {{0.27,0.27,0.29},4.4};
					diffuseCloud[] = {{0.27,0.27,0.29},4.4};
					ambient[] = {{0.145,0.227,0.349},5.4};
					ambientCloud[] = {{0.145,0.227,0.349},5.4};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.13,0.13,0.13};
					bidirectCloud[] = {0.13,0.13,0.13};
					sky[] = {{0.1,0.18,0.29},6.715};
					skyAroundSun[] = {{0.1,0.18,0.29},7.799};
					desiredLuminanceCoef = 0.55;
					desiredLuminanceCoefCloud = 0.55;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class O_Day8
				{
					height = 0;
					overcast = 0.9;
					sunAngle = 8;
					sunOrMoon = 1;
					diffuse[] = {{0.27,0.27,0.3},7.4};
					diffuseCloud[] = {{0.27,0.27,0.3},7.4};
					ambient[] = {{0.145,0.227,0.349},8.1};
					ambientCloud[] = {{0.145,0.227,0.349},8.1};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.13,0.13,0.13};
					bidirectCloud[] = {0.13,0.13,0.13};
					sky[] = {{0.2,0.36,0.58},8.0};
					skyAroundSun[] = {{0.2,0.36,0.58},8.8};
					desiredLuminanceCoef = 0.55;
					desiredLuminanceCoefCloud = 0.55;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class O_Day12
				{
					height = 0;
					overcast = 0.9;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{0.27,0.27,0.3},8.2};
					diffuseCloud[] = {{0.27,0.27,0.3},8.2};
					ambient[] = {{0.145,0.227,0.349},10.1};
					ambientCloud[] = {{0.145,0.227,0.349},10.1};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.13,0.13,0.13};
					bidirectCloud[] = {0.13,0.13,0.13};
					sky[] = {{0.4,0.72,1.0},9.0};
					skyAroundSun[] = {{0.4,0.72,1.0},9.8};
					desiredLuminanceCoef = 0.55;
					desiredLuminanceCoefCloud = 0.55;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class O_Day35
				{
					height = 0;
					overcast = 0.9;
					sunAngle = 35;
					sunOrMoon = 1;
					diffuse[] = {{0.27,0.27,0.3},9.4};
					diffuseCloud[] = {{0.27,0.27,0.3},9.4};
					ambient[] = {{0.15,0.2,0.25},11.1};
					ambientCloud[] = {{0.15,0.2,0.25},11.1};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.23,0.23,0.23};
					bidirectCloud[] = {0.23,0.23,0.23};
					sky[] = {{1,1,1},11};
					skyAroundSun[] = {{1,1,1},11.8};
					desiredLuminanceCoef = 0.55;
					desiredLuminanceCoefCloud = 0.55;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
				class O_Day60
				{
					height = 0;
					overcast = 0.9;
					sunAngle = 60;
					sunOrMoon = 1;
					diffuse[] = {{0.27,0.27,0.3},10.4};
					diffuseCloud[] = {{0.27,0.27,0.3},10.4};
					ambient[] = {{0.2,0.24,0.29},12.4};
					ambientCloud[] = {{0.2,0.24,0.29},12.4};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0.33,0.33,0.33};
					bidirectCloud[] = {0.33,0.33,0.33};
					sky[] = {{0.8,0.8,0.8},13};
					skyAroundSun[] = {{1,1,1},13.8};
					desiredLuminanceCoef = 0.6;
					desiredLuminanceCoefCloud = 0.6;
					luminanceRectCoef = 0.0;
					luminanceRectCoefCloud = 0.0;
					rayleigh[] = {0.0,0.0,0.0};
					mie[] = {0.0,0.0,0.0};
					cloudsColor[] = {0,0,0};
					swBrightness = 0;
				};
			};
			dayTemperature = 10;
			nightTemperature = 6;
			class VolFog
			{
				CameraFog = 0.0;
				Item1[] = {900.0,0.03,0.9,0.06,1.0};
				Item2[] = {1300.0,0.01,0.9,0.03,1.0};
			};
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					overcast = 0.0;
					sky = "dz\data\data\sky_semicloudy_sky.paa";
					skyR = "dz\data\data\sky_semicloudy_lco.paa";
					horizon = "dz\data\data\sky_semicloudy_horizont_sky.paa";
					waves = 0.15;
					lightingOvercast = 0.0;
					through = 1.0;
					alpha = 0.0;
					bright = 0.0;
					speed = 0.0;
					size = 0.0;
					height = 0.0;
					diffuse = 1.0;
					cloudDiffuse = 1.0;
				};
				class Weather2: Weather1
				{
					overcast = 0.1;
					sky = "dz\data\data\sky_semicloudy_sky.paa";
					skyR = "dz\data\data\sky_semicloudy_lco.paa";
					horizon = "dz\data\data\sky_semicloudy_horizont_sky.paa";
					waves = 0.2;
					lightingOvercast = 0.1;
					through = 1.0;
				};
				class Weather3: Weather1
				{
					overcast = 0.2;
					sky = "dz\data\data\sky_semicloudy_sky.paa";
					skyR = "dz\data\data\sky_semicloudy_lco.paa";
					horizon = "dz\data\data\sky_semicloudy_horizont_sky.paa";
					waves = 0.25;
					lightingOvercast = 0.2;
					through = 1.0;
				};
				class Weather4: Weather1
				{
					overcast = 0.3;
					sky = "dz\data\data\sky_semicloudy_sky.paa";
					skyR = "dz\data\data\sky_semicloudy_lco.paa";
					horizon = "dz\data\data\sky_semicloudy_horizont_sky.paa";
					waves = 0.3;
					lightingOvercast = 0.3;
					through = 1.0;
				};
				class Weather5: Weather1
				{
					overcast = 0.4;
					sky = "dz\data\data\sky_semicloudy_sky.paa";
					skyR = "dz\data\data\sky_semicloudy_lco.paa";
					horizon = "dz\data\data\sky_semicloudy_horizont_sky.paa";
					waves = 0.35;
					lightingOvercast = 0.65;
					through = 1.0;
				};
				class Weather6: Weather1
				{
					overcast = 0.5;
					sky = "dz\data\data\sky_mostlycloudy_sky.paa";
					skyR = "dz\data\data\sky_mostlycloudy_lco.paa";
					horizon = "dz\data\data\sky_mostlycloudy_horizont_sky.paa";
					waves = 0.35;
					lightingOvercast = 0.85;
					through = 0.8;
				};
				class Weather7: Weather1
				{
					overcast = 0.6;
					sky = "dz\data\data\sky_mostlycloudy_sky.paa";
					skyR = "dz\data\data\sky_mostlycloudy_lco.paa";
					horizon = "dz\data\data\sky_mostlycloudy_horizont_sky.paa";
					waves = 0.35;
					lightingOvercast = 0.9;
					through = 0.7;
				};
				class Weather8: Weather1
				{
					overcast = 0.7;
					sky = "dz\data\data\sky_mostlycloudy_sky.paa";
					skyR = "dz\data\data\sky_mostlycloudy_lco.paa";
					horizon = "dz\data\data\sky_mostlycloudy_horizont_sky.paa";
					waves = 0.35;
					lightingOvercast = 1.0;
					through = 0.4;
				};
				class Weather9: Weather1
				{
					overcast = 0.8;
					sky = "dz\data\data\sky_overcast_sky.paa";
					skyR = "dz\data\data\sky_mostlycloudy_lco.paa";
					horizon = "dz\data\data\sky_mostlycloudy_horizont_sky.paa";
					waves = 0.45;
					lightingOvercast = 1.0;
					through = 0.0;
				};
				class Weather10: Weather1
				{
					overcast = 0.9;
					sky = "dz\data\data\sky_overcast_sky.paa";
					skyR = "dz\data\data\sky_mostlycloudy_lco.paa";
					horizon = "dz\data\data\sky_mostlycloudy_horizont_sky.paa";
					waves = 0.55;
					lightingOvercast = 1.0;
					through = 0.0;
				};
				class Weather11: Weather1
				{
					overcast = 1.0;
					sky = "dz\data\data\sky_overcast_sky.paa";
					skyR = "dz\data\data\sky_mostlycloudy_lco.paa";
					horizon = "dz\data\data\sky_mostlycloudy_horizont_sky.paa";
					waves = 0.75;
					lightingOvercast = 1.0;
					through = 0.0;
				};
			};
		};
		envTexture = "DZ\Data\data\env_co.paa";
		clouds[] = {"DZ\Data\data\mrak1.p3d","DZ\Data\data\mrak2.p3d","DZ\Data\data\mrak3.p3d","DZ\Data\data\mrak4.p3d"};
		skyObject = "DZ\Data\data\obloha.p3d";
		starsObject = "DZ\Data\data\stars.p3d";
		pointObject = "DZ\Data\data\point.p3d";
		horizontObject = "DZ\Data\data\horizont.p3d";
		haloObject = "DZ\Data\data\sunHalo.p3d";
		sunObject = "DZ\Data\data\sun.p3d";
		rainbowObject = "DZ\Data\data\rainbow.p3d";
		moonObject = "DZ\Data\data\moon.p3d";
		starsIntensity = 0.008;
		hazeDistCoef = 0.0;
		hazeFogCoef = 1.0;
		satelliteNormalBlendStart = 100;
		satelliteNormalBlendEnd = 500;
	};
};
class CfgMaterials
{
	class Water
	{
		PixelShaderID = "Water";
		VertexShaderID = "Water";
		ambient[] = {0.07058824,0.17254902,0.14509805,0.4};
		diffuse[] = {0.07058824,0.17254902,0.14509805,1};
		forcedDiffuse[] = {0.0264,0.03,0.013,0};
		specular[] = {1.5,1.5,1.5,0};
		specularPower = 4;
		emmisive[] = {0,0,0,0};
		class Stage1
		{
			texture = "DZ\Data\data\water_nofhq.paa";
			uvSource = "texWaterAnim";
			class uvTransform
			{
				aside[] = {0,1,0};
				up[] = {1,0,0};
				dir[] = {0,0,1};
				pos[] = {0.3,0.4,0};
			};
		};
		class Stage2
		{
			texture = "DZ\Data\data\sea_foam_lco.paa";
			uvSource = "none";
		};
		class Stage3
		{
			texture = "DZ\Data\data\water2_nohq.paa";
			uvSource = "none";
		};
	};
	class Shore
	{
		PixelShaderID = "Shore";
		VertexShaderID = "Shore";
		ambient[] = {0.07058824,0.17254902,0.14509805,0.4};
		diffuse[] = {0.07058824,0.17254902,0.14509805,1};
		forcedDiffuse[] = {0.0264,0.03,0.013,0};
		specular[] = {1.5,1.5,1.5,0};
		specularPower = 4;
		emmisive[] = {0,0,0,0};
		class Stage1
		{
			texture = "DZ\Data\data\water_nofhq.paa";
			uvSource = "texWaterAnim";
			class uvTransform
			{
				aside[] = {0,1,0};
				up[] = {0.1,0,0};
				dir[] = {0,0,1};
				pos[] = {0.3,0.4,0};
			};
		};
		class Stage2
		{
			texture = "DZ\Data\data\sea_foam_lco.paa";
			uvSource = "none";
		};
		class Stage3
		{
			texture = "DZ\Data\data\water2_nohq.paa";
			uvSource = "none";
		};
	};
	class ShoreWet
	{
		PixelShaderID = "ShoreWet";
		VertexShaderID = "Shore";
	};
};
class CfgDifficulties
{
	class Recruit
	{
		displayName = "Recruit";
		scoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		badScoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		skillFriendly = 1;
		precisionFriendly = 1;
		skillEnemy = 0.55;
		precisionEnemy = 0.3;
		myArmorCoef = 4.0;
		peripheralVisionAid = 0.85;
		visionAid = 0.85;
		class Flags
		{
			friendlyTag[] = {0,1};
			tracers[] = {1,1};
			unlimitedSaves[] = {1,1};
			roughLanding[] = {1,1};
			windEnabled[] = {0,1};
			autoTrimEnabled[] = {1,1};
			stressDamageEnabled[] = {0,1};
		};
		overviewText = "";
		overviewPicture = "";
	};
	class Regular
	{
		displayName = "Regular";
		scoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		badScoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		skillFriendly = 1;
		precisionFriendly = 1;
		skillEnemy = 0.7;
		precisionEnemy = 0.5;
		peripheralVisionAid = 0.75;
		visionAid = 0;
		class Flags
		{
			friendlyTag[] = {0,1};
			tracers[] = {1,1};
			roughLanding[] = {0,1};
			windEnabled[] = {1,1};
			autoTrimEnabled[] = {1,1};
			stressDamageEnabled[] = {1,1};
		};
		overviewText = "";
		overviewPicture = "";
	};
	class Veteran
	{
		displayName = "Veteran";
		scoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		badScoreImage = "#(argb,8,8,3)color(1,1,1,1)";
		skillFriendly = 1.0;
		precisionFriendly = 1.0;
		skillEnemy = 0.9;
		precisionEnemy = 0.75;
		myArmorCoef = 1.0;
		groupArmorCoef = 1.0;
		autoAimSizeFactor = 0.3;
		autoAimDistance = 0.6;
		autoAimAngle = 2.5;
		peripheralVisionAid = 0.65;
		class Flags
		{
			hudWpPerm[] = {0,0};
			map[] = {0,1};
			clockIndicator[] = {0,1};
			tracers[] = {0,0};
			unlimitedSaves[] = {0,1};
			deathMessages[] = {1,1};
			hudGroupInfo[] = {0,1};
			roughLanding[] = {0,0};
			windEnabled[] = {1,0};
			autoTrimEnabled[] = {0,0};
			stressDamageEnabled[] = {1,0};
		};
		overviewText = "";
		overviewPicture = "";
	};
};
class cfgCharacterCreation
{
	format = "Survivor%1_%2";
	gender[] = {"Female","Male"};
	personalityMale[] = {"Mirek","Boris","Cyril","Denis","Elias","Francis","Guo","Hassan","Indar","Jose","Kaito","Lewis","Manua","Niki","Oliver","Peter","Quinn","Rolf","Seth","Taiki"};
	personalityFemale[] = {"Eva","Frida","Gabi","Helga","Irena","Judy","Keiko","Linda","Maria","Naomi"};
	top[] = {"Hoodie_Blue","Hoodie_Black","Hoodie_Brown","Hoodie_Green","Hoodie_Grey","Hoodie_Red"};
	bottom[] = {"Jeans_Black","Jeans_BlueDark","Jeans_Blue","Jeans_Brown","Jeans_Green","Jeans_Grey","CanvasPants_Beige","CanvasPants_Blue","CanvasPants_Grey"};
	shoe[] = {"AthleticShoes_Black","AthleticShoes_Blue","AthleticShoes_Brown","AthleticShoes_Green","AthleticShoes_Grey"};
	maleCustom[] = {};
	femaleCustom[] = {};
};
class cfgCharacterScenes
{
	class ChernarusPlus
	{
		class loc1
		{
			target[] = {5347.46,11325.82,262.39};
			position[] = {5354.71,11320.16,1.4};
			fov = 0.5236;
			date[] = {1984,7,12,8,45};
			overcast = 1;
			rain = 1;
			fog = 0;
		};
		class loc2
		{
			target[] = {6634.36,14351.49,377.72};
			position[] = {6642.71,14337.42,1.5};
			fov = 0.5236;
			date[] = {1984,7,12,10,50};
			overcast = 0.25;
			rain = 0;
			fog = 0;
		};
		class loc3
		{
			target[] = {7093.04,14660.13,357.62};
			position[] = {7097.25,14657.76,1.2};
			fov = 0.6;
			date[] = {1984,7,12,7,50};
			overcast = 0.25;
			rain = 0;
			fog = 0;
		};
		class loc4
		{
			target[] = {7271.83,3258.7,7.01};
			position[] = {7256.44,3258.23,1.3};
			fov = 0.5236;
			date[] = {1984,7,12,16,50};
			overcast = 0.25;
			rain = 0;
			fog = 0;
		};
		class loc5
		{
			target[] = {6931.83,11607.34,378.42};
			position[] = {6935.11,11616.07,1.1};
			fov = 0.5236;
			date[] = {1984,7,12,4,50};
			overcast = 0.25;
			rain = 0;
			fog = 0;
		};
		class loc6
		{
			target[] = {846.47,4232.76,129.43};
			position[] = {835.18,4236.55,1.2};
			fov = 0.5236;
			date[] = {1984,7,12,16,50};
			overcast = 0.25;
			rain = 0;
			fog = 0;
		};
		class loc7
		{
			target[] = {2523.34,5253.04,191.59};
			position[] = {2535.38,5253.54,1.3};
			fov = 0.5236;
			date[] = {1984,7,12,10,50};
			overcast = 0.25;
			rain = 0;
			fog = 0;
		};
		class loc8
		{
			target[] = {9691.52,6542.82,210.24};
			position[] = {9679.99,6553.78,1.2};
			fov = 0.5236;
			date[] = {1984,7,12,15,50};
			overcast = 0.25;
			rain = 0;
			fog = 0;
		};
		class loc9
		{
			target[] = {6195.65,7657.29,299.79};
			position[] = {6188.46,7654.36,1.1};
			fov = 0.6236;
			date[] = {1984,7,12,15,45};
			overcast = 0.25;
			rain = 0;
			fog = 0;
		};
		class loc10
		{
			target[] = {6054.04,1919.83,14.57};
			position[] = {6048.88,1908.36,0.96};
			fov = 0.6;
			date[] = {1984,7,12,16,20};
			overcast = 0;
			rain = 0;
			fog = 0;
			windspeed = 2;
		};
	};
	class sampleMap
	{
		class default
		{
			target[] = {60497.79,-79032.57,-39.78};
			position[] = {2887.08,2704.82,1.23};
			fov = 0.491;
			date[] = {3000,6,1,12,11};
			aperture = 18;
		};
	};
	class sampleMap3: sampleMap{};
	class sampleMap4: sampleMap{};
};
class cfgLiquidDefinitions
{
	class Water
	{
		type = 512;
		displayName = "$STR_cfgLiquidDefinitions_Water0";
		flammability = -10;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 0;
			water = 100;
			nutritionalIndex = 75;
			toxicity = -10;
		};
	};
	class RiverWater
	{
		type = 1024;
		displayName = "$STR_cfgLiquidDefinitions_RiverWater0";
		flammability = -10;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 0;
			water = 100;
			nutritionalIndex = 75;
			toxicity = -10;
		};
	};
	class Disinfectant
	{
		type = 32768;
		displayName = "$STR_cfgLiquidDefinitions_Disinfectant0";
		flammability = 10;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 350;
			water = 30;
			nutritionalIndex = 55;
			toxicity = 50;
		};
	};
	class Vodka
	{
		type = 2048;
		displayName = "$STR_cfgLiquidDefinitions_Vodka0";
		flammability = 10;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 231;
			water = 100;
			nutritionalIndex = 75;
			toxicity = 50;
		};
	};
	class Beer
	{
		type = 4096;
		displayName = "$STR_cfgLiquidDefinitions_Beer0";
		flammability = 0;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 43;
			water = 100;
			nutritionalIndex = 75;
			toxicity = 10;
		};
	};
	class Gasoline
	{
		type = 8192;
		displayName = "$STR_cfgLiquidDefinitions_Gasoline0";
		flammability = 50;
		class Nutrition
		{
			fullnessIndex = 100;
			energy = -10;
			water = 100;
			nutritionalIndex = 75;
			toxicity = 5;
		};
	};
	class Diesel
	{
		type = 16384;
		displayName = "$STR_cfgLiquidDefinitions_Diesel0";
		flammability = 50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = -10;
			water = 100;
			nutritionalIndex = 75;
			toxicity = 5;
		};
	};
	class Saline
	{
		type = 256;
		displayName = "$STR_cfgLiquidDefinitions_Saline0";
		flammability = -10;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 0;
			water = 100;
			nutritionalIndex = 75;
			toxicity = -10;
		};
	};
	class Blood_0Positive
	{
		type = 1;
		displayName = "$STR_cfgLiquidDefinitions_Blood_0Positive0";
		flammability = 50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 350;
			water = 30;
			nutritionalIndex = 55;
			toxicity = 5;
		};
	};
	class Blood_0Negative
	{
		type = 2;
		displayName = "$STR_cfgLiquidDefinitions_Blood_0Negative0";
		flammability = 50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 350;
			water = 30;
			nutritionalIndex = 55;
			toxicity = 5;
		};
	};
	class Blood_APositive
	{
		type = 4;
		displayName = "$STR_cfgLiquidDefinitions_Blood_APositive0";
		flammability = 50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 350;
			water = 30;
			nutritionalIndex = 55;
			toxicity = 5;
		};
	};
	class Blood_ANegative
	{
		type = 8;
		displayName = "$STR_cfgLiquidDefinitions_Blood_ANegative0";
		flammability = 50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 350;
			water = 30;
			nutritionalIndex = 55;
			toxicity = 5;
		};
	};
	class Blood_BPositive
	{
		type = 16;
		displayName = "$STR_cfgLiquidDefinitions_Blood_BPositive0";
		flammability = 50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 350;
			water = 30;
			nutritionalIndex = 55;
			toxicity = 5;
		};
	};
	class Blood_BNegative
	{
		type = 32;
		displayName = "$STR_cfgLiquidDefinitions_Blood_BNegative0";
		flammability = 50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 350;
			water = 30;
			nutritionalIndex = 55;
			toxicity = 5;
		};
	};
	class Blood_ABPositive
	{
		type = 64;
		displayName = "$STR_cfgLiquidDefinitions_Blood_ABPositive0";
		flammability = 50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 350;
			water = 30;
			nutritionalIndex = 55;
			toxicity = 5;
		};
	};
	class Blood_ABNegative
	{
		type = 128;
		displayName = "$STR_cfgLiquidDefinitions_Blood_ABNegative0";
		flammability = 50;
		class Nutrition
		{
			fullnessIndex = 1;
			energy = 350;
			water = 30;
			nutritionalIndex = 55;
			toxicity = 5;
		};
	};
};
class CfgSlots
{
	class Slot_Shoulder
	{
		name = "Shoulder";
		displayName = "Shoulder";
		ghostIcon = "shoulder";
	};
	class Slot_Melee
	{
		name = "Melee";
		displayName = "Melee";
		ghostIcon = "melee";
	};
	class Slot_Bow
	{
		name = "Bow";
		displayName = "Bow";
		ghostIcon = "bow";
	};
	class Slot_Headgear
	{
		name = "Headgear";
		displayName = "Headgear";
		ghostIcon = "headgear";
		boneName = "Head";
	};
	class Slot_Mask
	{
		name = "Mask";
		displayName = "Mask";
		ghostIcon = "mask";
	};
	class Slot_Eyewear
	{
		name = "Eyewear";
		displayName = "Eyewear";
		ghostIcon = "eyewear";
	};
	class Slot_Hands
	{
		name = "Hands";
		displayName = "Hands";
		ghostIcon = "hands";
		boneName = "RightHand";
	};
	class Slot_LeftHand
	{
		name = "LeftHand";
		displayName = "LH";
		ghostIcon = "hands";
		boneName = "LeftHand";
	};
	class Slot_Gloves
	{
		name = "Gloves";
		displayName = "Gloves";
		ghostIcon = "gloves";
	};
	class Slot_Armband
	{
		name = "Armband";
		displayName = "Armband";
		ghostIcon = "armband";
	};
	class Slot_Vest
	{
		name = "Vest";
		displayName = "Vest";
		ghostIcon = "vest";
	};
	class Slot_Body
	{
		name = "Body";
		displayName = "Body";
		ghostIcon = "body";
	};
	class Slot_Back
	{
		name = "Back";
		displayName = "Back";
		ghostIcon = "back";
	};
	class Slot_Hips
	{
		name = "Hips";
		displayName = "Hips";
		ghostIcon = "hips";
	};
	class Slot_Legs
	{
		name = "Legs";
		displayName = "Legs";
		ghostIcon = "legs";
	};
	class Slot_Feet
	{
		name = "Feet";
		displayName = "Feet";
		ghostIcon = "feet";
	};
	class Slot_magazine
	{
		name = "magazine";
		displayName = "magazine";
		ghostIcon = "magazine";
		autoAttach = 0;
	};
	class Slot_magazine2
	{
		name = "magazine2";
		displayName = "magazine2";
		ghostIcon = "magazine2";
		autoAttach = 0;
	};
	class Slot_magazine3
	{
		name = "magazine3";
		displayName = "magazine3";
		ghostIcon = "magazine3";
		autoAttach = 0;
	};
	class Slot_Driver
	{
		name = "Driver";
		displayName = "Driver";
		ghostIcon = "doors";
	};
	class Slot_Cargo
	{
		name = "Cargo";
		displayName = "Cargo";
		ghostIcon = "missing";
	};
	class Slot_Muzzle1
	{
		name = "Muzzle1";
		displayName = "Muzzle1";
		ghostIcon = "muzzle";
	};
	class Slot_Muzzle2
	{
		name = "Muzzle2";
		displayName = "Muzzle2";
		ghostIcon = "muzzle";
	};
	class Slot_Muzzle3
	{
		name = "Muzzle3";
		displayName = "Muzzle3";
		ghostIcon = "muzzle";
	};
	class Slot_Vest_Holster
	{
		name = "VestHolster";
		displayName = "VestHolster";
		ghostIcon = "muzzle";
	};
	class Slot_Vest_Pouch
	{
		name = "VestPouch";
		displayName = "VestPouch";
		ghostIcon = "muzzle";
	};
	class Slot_pistolFlashlight
	{
		name = "pistolFlashlight";
		displayName = "pistolFlashlight";
		ghostIcon = "weaponflashlight";
	};
	class Slot_pistolMuzzle
	{
		name = "pistolMuzzle";
		displayName = "pistolMuzzle";
		ghostIcon = "supressor";
	};
	class Slot_pistolOptics
	{
		name = "pistolOptics";
		displayName = "pistolOptics";
		ghostIcon = "weaponoptics";
	};
	class Slot_weaponBayonet
	{
		name = "weaponBayonet";
		displayName = "weaponBayonet";
		ghostIcon = "bayonet";
	};
	class Slot_weaponBayonetAK
	{
		name = "weaponBayonetAK";
		displayName = "weaponBayonetAK";
		ghostIcon = "bayonetak";
	};
	class Slot_weaponBayonetMosin
	{
		name = "weaponBayonetMosin";
		displayName = "weaponBayonetMosin";
		ghostIcon = "bayonetmosin";
	};
	class Slot_weaponBayonetSKS
	{
		name = "weaponBayonetSKS";
		displayName = "weaponBayonetSKS";
		ghostIcon = "bayonet";
	};
	class Slot_weaponButtstockAK
	{
		name = "weaponButtstockAK";
		displayName = "weaponButtstockAK";
		ghostIcon = "buttstock";
	};
	class Slot_weaponButtstockFal
	{
		name = "weaponButtstockFal";
		displayName = "weaponButtstockFal";
		ghostIcon = "buttstock";
	};
	class Slot_weaponButtstockM4
	{
		name = "weaponButtstockM4";
		displayName = "weaponButtstockM4";
		ghostIcon = "buttstockm4";
	};
	class Slot_weaponButtstockMP5
	{
		name = "weaponButtstockMP5";
		displayName = "weaponButtstockMP5";
		ghostIcon = "buttstock";
	};
	class Slot_weaponButtstockRed9
	{
		name = "weaponButtstockRed9";
		displayName = "weaponButtstockRed9";
		ghostIcon = "buttstock";
	};
	class Slot_weaponButtstockSaiga
	{
		name = "weaponButtstockSaiga";
		displayName = "weaponButtstockSaiga";
		ghostIcon = "buttstock";
	};
	class Slot_weaponHandguardAK
	{
		name = "weaponHandguardAK";
		displayName = "weaponHandguardAK";
		ghostIcon = "handguard";
	};
	class Slot_weaponHandguardM4
	{
		name = "weaponHandguardM4";
		displayName = "weaponHandguardM4";
		ghostIcon = "handguard";
	};
	class Slot_weaponHandguardMP5
	{
		name = "weaponHandguardMP5";
		displayName = "weaponHandguardMP5";
		ghostIcon = "handguard";
	};
	class Slot_weaponHandguardM249
	{
		name = "weaponHandguardM249";
		displayName = "weaponHandguardM249";
		ghostIcon = "handguard";
	};
	class Slot_weaponMuzzle
	{
		name = "weaponMuzzle";
		displayName = "weaponMuzzle";
		ghostIcon = "weaponmuzzle";
	};
	class Slot_weaponMuzzleAK
	{
		name = "weaponMuzzleAK";
		displayName = "weaponMuzzleAK";
		ghostIcon = "weaponmuzzleak";
	};
	class Slot_weaponMuzzleM4
	{
		name = "weaponMuzzleM4";
		displayName = "weaponMuzzleM4";
		ghostIcon = "weaponmuzzlem4";
	};
	class Slot_weaponMuzzleMP5
	{
		name = "weaponMuzzleMP5";
		displayName = "weaponMuzzleMP5";
		ghostIcon = "weaponmuzzlemp5";
	};
	class Slot_weaponMuzzleMosin
	{
		name = "weaponMuzzleMosin";
		displayName = "weaponMuzzleMosin";
		ghostIcon = "weaponmuzzlemosin";
	};
	class Slot_weaponUngerSlugM4
	{
		name = "weaponUnderSlugM4";
		displayName = "weaponUnderSlugM4";
		ghostIcon = "weaponunderslungm4";
	};
	class Slot_weaponUngerSlugAK
	{
		name = "weaponUnderSlugAK";
		displayName = "weaponUnderSlugAK";
		ghostIcon = "weaponunderslungak";
	};
	class Slot_weaponBarrelAug
	{
		name = "weaponBarrelAug";
		displayName = "weaponBarrelAug";
		ghostIcon = "weaponmuzzleaug";
	};
	class Slot_weaponOptics
	{
		name = "weaponOptics";
		displayName = "weaponOptics";
		ghostIcon = "weaponoptics";
	};
	class Slot_weaponOpticsAcog
	{
		name = "weaponOpticsAcog";
		displayName = "optic_acog";
		ghostIcon = "opticacog";
	};
	class Slot_weaponOpticsAK
	{
		name = "weaponOpticsAK";
		displayName = "weaponOpticsAK";
		ghostIcon = "weaponoptics";
	};
	class Slot_weaponOpticsCrossbow
	{
		name = "weaponOpticsCrossbow";
		displayName = "weaponOpticsCrossbow";
		ghostIcon = "weaponoptics";
	};
	class Slot_weaponOpticsHunting
	{
		name = "weaponOpticsHunting";
		displayName = "weaponOpticsHunting";
		ghostIcon = "weaponoptics";
	};
	class Slot_weaponOpticsLRS
	{
		name = "weaponOpticsLRS";
		displayName = "weaponOpticsLRS";
		ghostIcon = "weaponoptics";
	};
	class Slot_weaponOpticsMosin
	{
		name = "weaponOpticsMosin";
		displayName = "weaponOpticsMosin";
		ghostIcon = "weaponoptics";
	};
	class Slot_weaponBipod
	{
		name = "weaponBipod";
		displayName = "weaponBipod";
		ghostIcon = "bipod";
	};
	class Slot_weaponBipodM249
	{
		name = "Slot_weaponBipodM249";
		displayName = "Slot_weaponBipodM249";
		ghostIcon = "bipod";
	};
	class Slot_weaponFlashlight
	{
		name = "weaponFlashlight";
		displayName = "weaponFlashlight";
		ghostIcon = "weaponflashlight";
	};
	class Slot_suppressor
	{
		name = "suppressorImpro";
		displayName = "Suppressor";
		ghostIcon = "supressor";
	};
	class Slot_weaponWrap
	{
		name = "weaponWrap";
		displayName = "weaponWrap";
		ghostIcon = "weaponwrap";
	};
	class Slot_magazineFakeWeapon
	{
		name = "magazineFakeWeapon";
		displayName = "magazineFakeWeapon";
		ghostIcon = "magazinefakeweapon";
		autoAttach = 0;
	};
	class Slot_tripWireAttachment
	{
		name = "tripWireAttachment";
		displayName = "tripWireAttachment";
		ghostIcon = "tripwireattachment";
	};
	class Slot_BatteryD
	{
		name = "BatteryD";
		displayName = "BatteryD";
		ghostIcon = "batteryd";
	};
	class Slot_MetalWire
	{
		name = "MetalWire";
		displayName = "MetalWire";
		ghostIcon = "metalwire";
	};
	class Slot_Book
	{
		name = "Book";
		displayName = "Book";
		ghostIcon = "book";
	};
	class Slot_ButaneTorchCanister
	{
		name = "ButaneTorchCanister";
		displayName = "ButaneTorchCanister";
		ghostIcon = "butanetorchcanister";
	};
	class Slot_CableReel
	{
		name = "CableReel";
		displayName = "CableReel";
		ghostIcon = "cablereel";
	};
	class Slot_CamoNet
	{
		name = "CamoNet";
		displayName = "CamoNet";
		ghostIcon = "camonet";
	};
	class Slot_CookingBase
	{
		name = "CookingBase";
		displayName = "CookingBase";
		ghostIcon = "cookingbase";
	};
	class Slot_CookingEquipment
	{
		name = "CookingEquipment";
		displayName = "CookingEquipment";
		ghostIcon = "cookingequipment";
	};
	class Slot_CookingTripod
	{
		name = "CookingTripod";
		displayName = "CookingTripod";
		ghostIcon = "cookingtripod";
	};
	class Slot_DBHelmetMouth
	{
		name = "DBHelmetMouth";
		displayName = "DBHelmetMouth";
		ghostIcon = "dbhelmetmouth";
	};
	class Slot_DBHelmetVisor
	{
		name = "DBHelmetVisor";
		displayName = "DBHelmetVisor";
		ghostIcon = "dbhelmetvisor";
	};
	class Slot_Firewood
	{
		name = "Firewood";
		displayName = "Firewood";
		ghostIcon = "firewood";
		stackMax = 6;
	};
	class Slot_GasCanister
	{
		name = "GasCanister";
		displayName = "GasCanister";
		ghostIcon = "gascanister";
	};
	class Slot_Glass
	{
		name = "Glass";
		displayName = "Glass";
		ghostIcon = "glass";
	};
	class Slot_Hook
	{
		name = "Hook";
		displayName = "Hook";
		ghostIcon = "hook";
	};
	class Slot_Ingredient
	{
		name = "Ingredient";
		displayName = "Ingredient";
		ghostIcon = "ingredient";
	};
	class Slot_Knife
	{
		name = "Knife";
		displayName = "Knife";
		ghostIcon = "knife";
	};
	class Slot_Lights
	{
		name = "Lights";
		displayName = "Lights";
		ghostIcon = "lights";
	};
	class Slot_MedicalBandage
	{
		name = "MedicalBandage";
		displayName = "MedicalBandage";
		ghostIcon = "medicalbandage";
	};
	class Slot_Paper
	{
		name = "Paper";
		displayName = "Paper";
		ghostIcon = "paper";
	};
	class Slot_Pistol
	{
		name = "Pistol";
		displayName = "Pistol";
		ghostIcon = "pistol";
	};
	class Slot_Rags
	{
		name = "Rags";
		displayName = "Rags";
		ghostIcon = "rags";
	};
	class Slot_Stones
	{
		name = "Stones";
		displayName = "Stones";
		ghostIcon = "stones";
	};
	class Slot_WoodenStick
	{
		name = "WoodenStick";
		displayName = "WoodenStick";
		ghostIcon = "woodenstick";
		stackMax = 4;
	};
	class Slot_bait
	{
		name = "Bait";
		displayName = "Bait";
		ghostIcon = "bait";
	};
	class Slot_matchinside
	{
		name = "matchinside";
		displayName = "matchinside";
		ghostIcon = "matchinside";
	};
	class Slot_BerryB
	{
		name = "BerryB";
		displayName = "BerryB";
		ghostIcon = "berry";
	};
	class Slot_BerryR
	{
		name = "BerryR";
		displayName = "BerryR";
		ghostIcon = "berry";
	};
	class Slot_BirchBark
	{
		name = "BirchBark";
		displayName = "BirchBark";
		ghostIcon = "bark";
	};
	class Slot_OakBark
	{
		name = "OakBark";
		displayName = "OakBark";
		ghostIcon = "bark";
	};
	class Slot_Plant
	{
		name = "Plant";
		displayName = "Plant";
		ghostIcon = "plant";
	};
	class Slot_Disinfectant
	{
		name = "Disinfectant";
		displayName = "Disinfectant";
		ghostIcon = "disinfectant";
	};
	class Slot_Guts
	{
		name = "Guts";
		displayName = "Guts";
		ghostIcon = "guts";
	};
	class Slot_Lime
	{
		name = "Lime";
		displayName = "Lime";
		ghostIcon = "lime";
	};
	class Slot_SeedBase_1
	{
		name = "SeedBase_1";
		displayName = "SeedBase_1";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_SeedBase_2
	{
		name = "SeedBase_2";
		displayName = "SeedBase_2";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_SeedBase_3
	{
		name = "SeedBase_3";
		displayName = "SeedBase_3";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_SeedBase_4
	{
		name = "SeedBase_4";
		displayName = "SeedBase_4";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_SeedBase_5
	{
		name = "SeedBase_5";
		displayName = "SeedBase_5";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_SeedBase_6
	{
		name = "SeedBase_6";
		displayName = "SeedBase_6";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_SeedBase_7
	{
		name = "SeedBase_7";
		displayName = "SeedBase_7";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_SeedBase_8
	{
		name = "SeedBase_8";
		displayName = "SeedBase_8";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_SeedBase_9
	{
		name = "SeedBase_9";
		displayName = "SeedBase_9";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_SeedBase_10
	{
		name = "SeedBase_10";
		displayName = "SeedBase_10";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_SeedBase_11
	{
		name = "SeedBase_11";
		displayName = "SeedBase_11";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_SeedBase_12
	{
		name = "SeedBase_12";
		displayName = "SeedBase_12";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_SeedBase_13
	{
		name = "SeedBase_13";
		displayName = "SeedBase_13";
		ghostIcon = "seedbase";
		stackMax = 1;
	};
	class Slot_GlowPlug
	{
		name = "GlowPlug";
		displayName = "GlowPlug";
		ghostIcon = "glowplug";
	};
	class Slot_SparkPlug
	{
		name = "SparkPlug";
		displayName = "SparkPlug";
		ghostIcon = "sparkplug";
	};
	class Slot_EngineBelt
	{
		name = "EngineBelt";
		displayName = "EngineBelt";
		ghostIcon = "enginebelt";
	};
	class Slot_CarBattery
	{
		name = "CarBattery";
		displayName = "CarBattery";
		ghostIcon = "carbattery";
	};
	class Slot_TruckBattery
	{
		name = "TruckBattery";
		displayName = "TruckBattery";
		ghostIcon = "carbattery";
	};
	class Slot_LightBulb
	{
		name = "LightBulb";
		displayName = "LightBulb";
		ghostIcon = "lightbulb";
	};
	class Slot_TruckRadiator
	{
		name = "TruckRadiator";
		displayName = "TruckRadiator";
		ghostIcon = "radiator";
	};
	class Slot_CarRadiator
	{
		name = "CarRadiator";
		displayName = "CarRadiator";
		ghostIcon = "radiator";
	};
	class Slot_V3SWheel_1_1
	{
		name = "V3SWheel_1_1";
		displayName = "Front Left V3S Wheel";
		selection = "wheel_1_1_hide";
		ghostIcon = "wheel";
	};
	class Slot_V3SWheel_1_2
	{
		name = "V3SWheel_1_2";
		displayName = "Back Left V3S Wheel";
		selection = "wheel_1_2_hide";
		ghostIcon = "wheel";
	};
	class Slot_V3SWheel_1_3
	{
		name = "V3SWheel_1_3";
		displayName = "Middle Right V3S Wheel";
		selection = "wheel_1_3_hide";
		ghostIcon = "wheel";
	};
	class Slot_V3SWheel_2_1
	{
		name = "V3SWheel_2_1";
		displayName = "Front Right V3S Wheel";
		selection = "wheel_2_1_hide";
		ghostIcon = "wheel";
	};
	class Slot_V3SWheel_2_2
	{
		name = "V3SWheel_2_2";
		displayName = "Back Right V3S Wheel";
		selection = "wheel_2_2_hide";
		ghostIcon = "wheel";
	};
	class Slot_V3SWheel_2_3
	{
		name = "V3SWheel_2_3";
		displayName = "Middle Right V3S Wheel";
		selection = "wheel_2_3_hide";
		ghostIcon = "wheel";
	};
	class Slot_V3SWheel_Spare_1
	{
		name = "V3SWheel_Spare_1";
		displayName = "Spare Left V3S Wheel";
		selection = "wheel_spare_1";
		ghostIcon = "wheel";
	};
	class Slot_V3SWheel_Spare_2
	{
		name = "V3SWheel_Spare_2";
		displayName = "Spare Right V3S Wheel";
		selection = "wheel_spare_2";
		ghostIcon = "wheel";
	};
	class Slot_V3SHood
	{
		name = "V3SHood";
		displayName = "V3SHood";
		ghostIcon = "hood";
	};
	class Slot_V3SDriverDoors
	{
		name = "V3SDriverDoors";
		displayName = "V3SDriverDoors";
		ghostIcon = "doorfront";
	};
	class Slot_V3SCoDriverDoors
	{
		name = "V3SCoDriverDoors";
		displayName = "V3SCoDriverDoors";
		ghostIcon = "doorfront";
	};
	class Slot_NivaWheel_1_1
	{
		name = "NivaWheel_1_1";
		displayName = "Front Left Niva Wheel";
		selection = "wheel_1_1_hide";
		ghostIcon = "wheel";
	};
	class Slot_NivaWheel_1_2
	{
		name = "NivaWheel_1_2";
		displayName = "Front Right Niva Wheel";
		selection = "wheel_1_2_hide";
		ghostIcon = "wheel";
	};
	class Slot_NivaWheel_2_1
	{
		name = "NivaWheel_2_1";
		displayName = "Front Left Niva Wheel";
		selection = "wheel_2_1_hide";
		ghostIcon = "wheel";
	};
	class Slot_NivaWheel_2_2
	{
		name = "NivaWheel_2_2";
		displayName = "Front Right Niva Wheel";
		selection = "wheel_2_2_hide";
		ghostIcon = "wheel";
	};
	class Slot_NivaWheel_Spare_1
	{
		name = "NivaWheel_Spare_1";
		displayName = "Spare Niva Wheel";
		selection = "wheel_spare_1";
		ghostIcon = "wheel";
	};
	class Slot_NivaHood
	{
		name = "NivaHood";
		displayName = "NivaHood";
		ghostIcon = "hood";
	};
	class Slot_NivaTrunk
	{
		name = "NivaTrunk";
		displayName = "NivaTrunk";
		ghostIcon = "trunk";
	};
	class Slot_NivaDriverDoors
	{
		name = "NivaDriverDoors";
		displayName = "NivaDriverDoors";
		ghostIcon = "doorfront";
	};
	class Slot_NivaCoDriverDoors
	{
		name = "NivaCoDriverDoors";
		displayName = "NivaCoDriverDoors";
		ghostIcon = "doorfront";
	};
	class Slot_CivSedanWheel_1_1
	{
		name = "CivSedanWheel_1_1";
		displayName = "Front Left CivSedan Wheel";
		selection = "wheel_1_1_hide";
		ghostIcon = "wheel";
	};
	class Slot_CivSedanWheel_1_2
	{
		name = "CivSedanWheel_1_2";
		displayName = "Front Right CivSedan Wheel";
		selection = "wheel_1_2_hide";
		ghostIcon = "wheel";
	};
	class Slot_CivSedanWheel_2_1
	{
		name = "CivSedanWheel_2_1";
		displayName = "Front Left CivSedan Wheel";
		selection = "wheel_2_1_hide";
		ghostIcon = "wheel";
	};
	class Slot_CivSedanWheel_2_2
	{
		name = "CivSedanWheel_2_2";
		displayName = "Front Right CivSedan Wheel";
		selection = "wheel_2_2_hide";
		ghostIcon = "wheel";
	};
	class Slot_CivSedanHood
	{
		name = "CivSedanHood";
		displayName = "CivSedanHood";
		ghostIcon = "hood";
	};
	class Slot_CivSedanTrunk
	{
		name = "CivSedanTrunk";
		displayName = "CivSedanTrunk";
		ghostIcon = "trunk";
	};
	class Slot_CivSedanDriverDoors
	{
		name = "CivSedanDriverDoors";
		displayName = "CivSedanDriverDoors";
		ghostIcon = "doorfront";
	};
	class Slot_CivSedanCoDriverDoors
	{
		name = "CivSedanCoDriverDoors";
		displayName = "CivSedanCoDriverDoors";
		ghostIcon = "doorfront";
	};
	class Slot_CivSedanCargo1Doors
	{
		name = "CivSedanCargo1Doors";
		displayName = "CivSedanCargo1Doors";
		ghostIcon = "doorrear";
	};
	class Slot_CivSedanCargo2Doors
	{
		name = "CivSedanCargo2Doors";
		displayName = "CivSedanCargo2Doors";
		ghostIcon = "doorrear";
	};
	class Slot_CivVanWheel_1_1
	{
		name = "CivVanWheel_1_1";
		displayName = "Front Left CivVan Wheel";
		selection = "wheel_1_1_hide";
		ghostIcon = "wheel";
	};
	class Slot_CivVanWheel_1_2
	{
		name = "CivVanWheel_1_2";
		displayName = "Front Right CivVan Wheel";
		selection = "wheel_1_2_hide";
		ghostIcon = "wheel";
	};
	class Slot_CivVanWheel_2_1
	{
		name = "CivVanWheel_2_1";
		displayName = "Front Left CivVan Wheel";
		selection = "wheel_2_1_hide";
		ghostIcon = "wheel";
	};
	class Slot_CivVanWheel_2_2
	{
		name = "CivVanWheel_2_2";
		displayName = "Front Right CivVan Wheel";
		selection = "wheel_2_2_hide";
		ghostIcon = "wheel";
	};
	class Slot_CivVanDriverDoors
	{
		name = "CivVanDriverDoors";
		displayName = "CivVanDriverDoors";
		ghostIcon = "doorfront";
	};
	class Slot_CivVanCoDriverDoors
	{
		name = "CivVanCoDriverDoors";
		displayName = "CivVanCoDriverDoors";
		ghostIcon = "doorfront";
	};
	class Slot_CivVanCargo1Doors
	{
		name = "CivVanCargo1Doors";
		displayName = "CivVanCargo1Doors";
		ghostIcon = "doorrear";
	};
	class Slot_CivVanTrunkUp
	{
		name = "CivVanTrunkUp";
		displayName = "CivVanTrunkUp";
		ghostIcon = "trunk";
	};
	class Slot_CivVanCargoDown
	{
		name = "CivVanTrunkDown";
		displayName = "CivVanTrunkDown";
		ghostIcon = "doorrear";
	};
	class Slot_BusWheel_1_1
	{
		name = "BusWheel_1_1";
		displayName = "Front Left Bus Wheel";
		selection = "wheel_1_1_hide";
		ghostIcon = "wheel";
	};
	class Slot_BusWheel_1_2
	{
		name = "BusWheel_1_2";
		displayName = "Front Right Bus Wheel";
		selection = "wheel_1_2_hide";
		ghostIcon = "wheel";
	};
	class Slot_BusWheel_2_1
	{
		name = "BusWheel_2_1";
		displayName = "Front Left Bus Wheel";
		selection = "wheel_2_1_hide";
		ghostIcon = "wheel";
	};
	class Slot_BusWheel_2_2
	{
		name = "BusWheel_2_2";
		displayName = "Front Right Bus Wheel";
		selection = "wheel_2_2_hide";
		ghostIcon = "wheel";
	};
	class Slot_BusHood
	{
		name = "BusHood";
		displayName = "BusHood";
		ghostIcon = "hood";
	};
	class Slot_BusLeftDoors_1
	{
		name = "BusLeftDoors_1";
		displayName = "BusLeftDoors";
		selection = "BusLeftDoors_1";
		ghostIcon = "busdoor";
	};
	class Slot_BusLeftDoors_2
	{
		name = "BusLeftDoors_2";
		displayName = "BusLeftDoors";
		selection = "BusLeftDoors_2";
		ghostIcon = "busdoor";
	};
	class Slot_BusLeftDoors_3
	{
		name = "BusLeftDoors_3";
		displayName = "BusLeftDoors";
		selection = "BusLeftDoors_3";
		ghostIcon = "busdoor";
	};
	class Slot_BusRightDoors_1
	{
		name = "BusRightDoors_1";
		displayName = "BusRightDoors";
		selection = "BusRightDoors_1";
		ghostIcon = "busdoor";
	};
	class Slot_BusRightDoors_2
	{
		name = "BusRightDoors_2";
		displayName = "BusRightDoors";
		selection = "BusRightDoors_2";
		ghostIcon = "busdoor";
	};
	class Slot_BusRightDoors_3
	{
		name = "BusRightDoors_3";
		displayName = "BusRightDoors";
		selection = "BusRightDoors_3";
		ghostIcon = "busdoor";
	};
	class Slot_W_BarbWire_1_L
	{
		name = "W_BarbWire_1_L";
		displayName = "Left-side barbed wire";
		selection = "level_1_barb_wire_l";
		ghostIcon = "barbedwire";
	};
	class Slot_W_BarbWire_1_R
	{
		name = "W_BarbWire_1_R";
		displayName = "Right-side barbed wire";
		selection = "level_1_barb_wire_r";
		ghostIcon = "barbedwire";
	};
	class Slot_W_BarbWire_1_F
	{
		name = "W_BarbWire_1_F";
		displayName = "Front-side barbed wire";
		selection = "level_1_barb_wire_f";
		ghostIcon = "barbedwire";
	};
	class Slot_W_CamoNet_1_L
	{
		name = "W_CamoNet_1_L";
		displayName = "Left-side camo net";
		selection = "level_1_camonet_l";
		ghostIcon = "camonet";
	};
	class Slot_W_CamoNet_1_R
	{
		name = "W_CamoNet_1_R";
		displayName = "Right-side camo net";
		selection = "level_1_camonet_r";
		ghostIcon = "camonet";
	};
	class Slot_W_CamoNet_1_F
	{
		name = "W_CamoNet_1_F";
		displayName = "Front-side camo net";
		selection = "level_1_camonet_f";
		ghostIcon = "camonet";
	};
	class Slot_W_CamoNet_2_L
	{
		name = "W_CamoNet_2_L";
		displayName = "Left-side camo net";
		selection = "level_2_camonet_l";
		ghostIcon = "camonet";
	};
	class Slot_W_CamoNet_2_R
	{
		name = "W_CamoNet_2_R";
		displayName = "Right-side camo net";
		selection = "level_2_camonet_r";
		ghostIcon = "camonet";
	};
	class Slot_W_CamoNet_2_F
	{
		name = "W_CamoNet_2_F";
		displayName = "Front-side camo net";
		selection = "level_2_camonet_f";
		ghostIcon = "camonet";
	};
	class Slot_W_CamoNet_3_L
	{
		name = "W_CamoNet_3_L";
		displayName = "Left-side camo net";
		selection = "level_3_camonet_l";
		ghostIcon = "camonet";
	};
	class Slot_W_CamoNet_3_R
	{
		name = "W_CamoNet_3_R";
		displayName = "Right-side camo net";
		selection = "level_3_camonet_r";
		ghostIcon = "camonet";
	};
	class Slot_W_CamoNet_3_F
	{
		name = "W_CamoNet_3_F";
		displayName = "Front-side camo net";
		selection = "level_3_camonet_f";
		ghostIcon = "camonet";
	};
	class Slot_W_Lights_1_L
	{
		name = "W_Lights_1_L";
		displayName = "Left-side chrismass lights";
		selection = "level_1_ligths_l";
		ghostIcon = "lights";
	};
	class Slot_W_Lights_1_R
	{
		name = "W_Lights_1_R";
		displayName = "Right-side chrismass lights";
		selection = "level_1_ligths_r";
		ghostIcon = "lights";
	};
	class Slot_W_Lights_1_F
	{
		name = "W_Lights_1_F";
		displayName = "Front-side chrismass lights";
		selection = "level_1_ligths_f";
		ghostIcon = "lights";
	};
	class Slot_W_Lights_2_L
	{
		name = "W_Lights_2_L";
		displayName = "Left-side chrismass lights";
		selection = "level_2_ligths_l";
		ghostIcon = "lights";
	};
	class Slot_W_Lights_2_R
	{
		name = "W_Lights_2_R";
		displayName = "Right-side chrismass lights";
		selection = "level_2_ligths_r";
		ghostIcon = "lights";
	};
	class Slot_W_Lights_2_F
	{
		name = "W_Lights_2_F";
		displayName = "Front-side chrismass lights";
		selection = "level_2_ligths_f";
		ghostIcon = "lights";
	};
	class Slot_W_Lights_3_L
	{
		name = "W_Lights_3_L";
		displayName = "Left-side chrismass lights";
		selection = "level_3_ligths_l";
		ghostIcon = "lights";
	};
	class Slot_W_Lights_3_R
	{
		name = "W_Lights_3_R";
		displayName = "Right-side chrismass lights";
		selection = "level_3_ligths_r";
		ghostIcon = "lights";
	};
	class Slot_W_Lights_3_F
	{
		name = "W_Lights_3_F";
		displayName = "Front-side chrismass lights";
		selection = "level_3_ligths_f";
		ghostIcon = "lights";
	};
	class Slot_NailsG_Down
	{
		name = "NailsG_Down";
		displayName = "Nails";
		selection = "nailsG_Down";
		ghostIcon = "nails";
	};
	class Slot_NailsG_UP
	{
		name = "NailsG_Up";
		displayName = "Nails";
		selection = "nailsG_Up";
		ghostIcon = "nails";
	};
	class Slot_PlanksG_Down
	{
		name = "PlanksG_Down";
		displayName = "WoodenPlanks";
		selection = "planksG_Down";
		ghostIcon = "planks";
	};
	class Slot_PlanksG_Up
	{
		name = "PlanksG_Up";
		displayName = "WoodenPlanks";
		selection = "planksG_Up";
		ghostIcon = "planks";
	};
	class Slot_PlatesG_Down
	{
		name = "PlatesG_Down";
		displayName = "MetalPlates";
		selection = "platesG_Down";
		ghostIcon = "plates";
	};
	class Slot_PlatesG_Up
	{
		name = "PlatesG_Up";
		displayName = "MetalPlates";
		selection = "platesG_Up";
		ghostIcon = "plates";
	};
};
class CfgMods
{
	class DayZ
	{
		dir = "DZ";
		picture = "DZ\ui\data\logos\dayz_ca";
		action = "http://www.dayzgame.com";
		hideName = 1;
		hidePicture = 1;
		name = "DayZ";
		credits = "BIS_fnc_credits_H";
		author = "Bohemia Interactive";
	};
};
class DefaultEventhandlers
{
	init = "_scr = _this execVM ""\dz\Data\data\ParticleEffects\SCRIPTS\init.sqf"";";
	fired = "_this call BIS_Effects_EH_Fired;";
	killed = "_this call BIS_Effects_EH_Killed;";
};
class CfgVehicleClasses
{
	class People
	{
		displayName = "People";
	};
	class Zombie
	{
		displayName = "Zombies";
	};
	class Vehicles_Car
	{
		displayName = "Cars";
	};
	class Vehicles_Truck
	{
		displayName = "Trucks";
	};
	class Vehicles_Bicycle
	{
		displayName = "Bicycle";
	};
	class Vehicles_Motorbike
	{
		displayName = "Motorbikes";
	};
	class Vehicles_Boat
	{
		displayName = "Boats";
	};
	class Vehicles_Ship
	{
		displayName = "Ships";
	};
	class Vehicles_Helicopter
	{
		displayName = "Helicopters";
	};
	class Vehicles_Plane
	{
		displayName = "Planes";
	};
	class Clothing
	{
		displayName = "Clothing";
	};
	class Backpacks
	{
		displayName = "Backpacks";
	};
	class Ammoboxes
	{
		displayName = "Ammoboxes";
	};
	class Test
	{
		displayName = "Test";
	};
	class Buildings
	{
		displayName = "Buildings";
	};
	class Ruins
	{
		displayName = "Ruins";
	};
	class Fortifications
	{
		displayName = "$STR_DN_OBJECTS_FORTIFICATIONS";
	};
	class Furniture
	{
		displayName = "$STR_DN_FURNITURE";
	};
	class Military
	{
		displayName = "$STR_DN_MILITARY";
	};
	class Misc
	{
		displayName = "$STR_DN_MISC";
	};
	class Signs
	{
		displayName = "$STR_DN_SIGNS";
	};
	class Targets
	{
		displayName = "$STR_DN_TARGETS";
	};
	class Training
	{
		displayName = "$STR_DN_TRAINING";
	};
	class Wrecks
	{
		displayName = "$STR_DN_WRECKS";
	};
	class Dead_bodies
	{
		displayName = "Dead bodies";
	};
	class Small_items
	{
		displayName = "Small items";
	};
};
class CfgCoreData
{
	textureDefault = "dz\Data\data\default_co.paa";
	textureTrack = "dz\Data\data\texturetrack_ca.paa";
	textureTrackFour = "dz\Data\data\texturetrackfour_ca.paa";
	maskTextureFlare = "dz\Data\data\masktextureflare%02d_co.paa";
	eyeFlare = "dz\Data\data\eyeflare_ca.paa";
	heatHazeNoise = "dz\Data\data\heathaze_ca.paa";
	cloudletBasic = "dz\Data\data\cl_basic.p3d";
	cloudletFire = "dz\Data\data\cl_fire.p3d";
	cloudletFireD = "dz\Data\data\cl_fireD.p3d";
	cloudletFireNew = "dz\Data\data\Fire_4x4.p3d";
	cloudletWater = "dz\Data\data\cl_water.p3d";
	paperCarModel = "dz\Data\data\papauto.p3d";
	collisionShape = "dz\Data\data\colision.p3d";
	sphereModel = "dz\Data\data\koule.p3d";
	rectangleModel = "dz\Data\data\rect.p3d";
	craterShell = "dz\Data\data\krater.p3d";
	craterBullet = "dz\Data\data\krater_po_kulce.p3d";
	sphereLight = "dz\Data\data\kouleSvetlo.p3d";
	cloudletMissile = "dz\Data\data\missileSmoke.p3d";
	horizontObject = "dz\Data\data\horizont.p3d";
	skysphere = "dz\Data\data\obloha.p3d";
	halflight = "dz\Data\data\halfLight.p3d";
	footStepL = "dz\Data\data\stopa_L.p3d";
	footStepR = "dz\Data\data\stopa_P.p3d";
	slopBlood = "dz\Data\data\krvava_skvrna.p3d";
	textureBlack = "dz\Data\data\black_co.paa";
	textureLine = "dz\Data\data\tracer_co.paa";
	textureLine3D = "dz\Data\data\textureline3d_ca.paa";
	cobraLight = "dz\Data\data\cobraSvetlo.p3d";
	gunLightModel = "dz\Data\data\gunLight.p3d";
	marker = "dz\Data\data\obrysove svetlo.p3d";
	rayModel = "dz\Data\data\laserBeam.p3d";
};
class CfgCloudletShapes
{
	cloudletBlood = "\dz\Data\data\cl_water.p3d";
	cloudletClouds = "\dz\Data\data\cl_basic.p3d";
	cloudletDust = "\dz\Data\data\cl_basic.p3d";
	cloudletExplosion = "\dz\Data\data\cl_basic.p3d";
	cloudletFire = "\dz\Data\data\cl_fireD.p3d";
	cloudletMissile = "\dz\Data\data\cl_basic.p3d";
	cloudletSmoke = "\dz\Data\data\cl_basic.p3d";
	cloudletUniversal = "\dz\Data\data\ParticleEffects\Universal\Universal.p3d";
	cloudletWater = "\dz\Data\data\cl_water.p3d";
	cloudletUniversal_02 = "\dz\data\data\ParticleEffects\Universal\Universal_02";
};
class CfgOpticsEffect
{
	class TankGunnerOptics1
	{
		type = "ColorCorrections";
		priority = 1550;
		params[] = {1,1,0,0,0,0,0,1,1.0,0.2,0.6,0.199,0.587,0.114,0};
	};
	class TankGunnerOptics2
	{
		type = "ColorCorrections";
		priority = 1550;
		params[] = {1,1,0,0,0,0,0,1,1.0,0.2,0.8,0.199,0.25,0.114,0};
	};
	class TankCommanderOptics1
	{
		type = "FilmGrain";
		priority = 2050;
		params[] = {0.05,1,1,0.35,1,0};
	};
	class OpticsInverted
	{
		type = "colorInversion";
		priority = 2550;
		params[] = {1,1,1};
	};
	class BWTV
	{
		type = "ColorCorrections";
		priority = 1550;
		params[] = {1,2,-0.03,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.199,0.587,0.114,0.0};
	};
	class WeaponsOptics
	{
		type = "dynamicblur";
		priority = 450;
		params[] = {0.05};
	};
	class OpticsBlur1
	{
		type = "dynamicblur";
		priority = 450;
		params[] = {0.0025};
	};
	class OpticsBlur2
	{
		type = "dynamicblur";
		priority = 450;
		params[] = {0.005};
	};
	class OpticsBlur3
	{
		type = "dynamicblur";
		priority = 450;
		params[] = {0.01};
	};
	class OpticsCHAbera1
	{
		type = "chromaberration";
		priority = 250;
		params[] = {0.004,0.004,1};
	};
	class OpticsCHAbera2
	{
		type = "chromaberration";
		priority = 250;
		params[] = {0.006,0.006,1};
	};
	class OpticsCHAbera3
	{
		type = "chromaberration";
		priority = 250;
		params[] = {0.008,0.008,1};
	};
};
class CfgNoMipmapTextures
{
	NoMipmapTextures = "\dz\data\data\NoMipmapTextures.p3d";
};
class PreloadTextures
{
	class CfgCloudletShapes
	{
		cloudletSmoke = "@*";
		cloudletWater = "@*";
		cloudletFire = "@*";
		cloudletUniversal = "@*";
	};
	class CfgNoMipmapTextures
	{
		NoMipmapTextures = "@*";
	};
};
class AirplaneHUD
{
	class Pos10Vector;
	class bones
	{
		class AGLMove1;
		class AGLMove2;
		class ASLMove1;
		class ASLMove2;
		class VertSpeed;
		class SpdMove2;
		class ILS;
		class WeaponAim;
		class Target;
		class TargetDistanceMissile;
		class TargetDistanceMGun;
		class Level0;
		class LevelP5;
		class LevelM5;
		class LevelP10;
		class LevelM10;
		class LevelP15;
		class LevelM15;
		class Velocity;
		class PlaneW;
	};
	class Draw
	{
		class Altitude;
		class DimmedBase
		{
			class AltitudeBase;
		};
		class Speed;
		class SpeedNumber;
		class PlaneW
		{
			class LineHL;
			class Velocity;
		};
		class MGun
		{
			class Circle;
		};
		class Missile
		{
			class Circle;
			class Target;
		};
		class Horizont
		{
			class Dimmed
			{
				class Level0;
			};
			class LevelP5;
			class LevelM5;
			class LevelP10;
			class LevelM10;
			class LevelP15;
			class LevelM15;
		};
		class ILS
		{
			class Glideslope
			{
				class ILS;
			};
			class AOABracket;
		};
	};
};
class CfgDamageAround
{
	class DamageAroundPole
	{
		radiusRatio = "10";
		indirectHit = "900";
	};
};
class CfgDestructPos
{
	class DelayedDestruction
	{
		timeBeforeHiding = "0.2";
		hideDuration = "0.65+lifeTime*0.05";
	};
};
class CfgVehicles
{
	class All
	{
		camouflage = 0;
		audible = 0;
		clothingType = "";
		itemsCargoSize[] = {};
		HeadAimDown = 0;
		driverCanEject = 0;
		cargoCanEject = 0;
		author = "dayz";
		maxCargo = 0;
	};
	class AllVehicles: All
	{
		side = 3;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		class ViewPilot;
		driverFreelook = 1;
	};
	class Man: AllVehicles
	{
		camouflage = 2;
		sensitivityEar = 0.5;
		minFireTime = 5;
		extCameraPosition[] = {0.15,0,-2.0};
	};
	class Man_Base: Man{};
	class DZ_LightAI_old: Man
	{
		weaponSlots = 0;
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ViewPilot;
	};
	class DZ_LightAI: Man_Base
	{
		weaponSlots = 0;
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class ViewPilot;
	};
	class Air: AllVehicles
	{
		class AnimationSources;
		class NewTurret;
		accuracy = 0;
		irScanRangeMin = 500;
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {0.0388,0.0388,0.0388,1.0};
				ambient[] = {0.03,0.023,0.0056,1.0};
				radius = 0.001;
				blinking = 0;
			};
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.12,0.006,0.006,1.0};
				ambient[] = {0.1,0.01,0.01,1.0};
				radius = 0.001;
				blinking = 0;
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.006,0.12,0.006,1.0};
				ambient[] = {0.01,0.1,0.01,1.0};
				radius = 0.001;
				blinking = 0;
			};
			class WhiteBlinking
			{
				name = "bily pozicni blik";
				color[] = {0.0388,0.0388,0.0388,1.0};
				ambient[] = {0.03,0.023,0.0056,1.0};
				radius = 0.001;
				blinking = 1;
			};
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.12,0.006,0.006,1.0};
				ambient[] = {0.1,0.01,0.01,1.0};
				radius = 0.001;
				blinking = 1;
			};
		};
	};
	class Static: All{};
	class Building: Static{};
	class Strategic: Building{};
	class FlagCarrierCore: Strategic{};
	class NonStrategic: Building{};
	class NonStrategic_Base: NonStrategic
	{
		animated = 0;
	};
	class House: Static
	{
		scope = 1;
		armor = 150;
		side = 3;
		ladders[] = {};
		simulation = "house";
		nameSound = "obj_building";
		displayName = "House";
		irTarget = 0;
		accuracy = 0.1;
		destrType = "DestructBuilding";
	};
	class HouseNoDestruct: House
	{
		displayName = "";
		animated = 0;
		destrType = "DestructNo";
		storageCategory = 7;
	};
	class HouseHighCost: House
	{
		displayName = "STRUCTUR HIGH COST";
		armor = 350;
		cost = 1000000;
	};
	class Ruins: House
	{
		vehicleClass = "Ruins";
		destrType = "DestructNo";
	};
	class Inventory_Base: Static
	{
		scope = 0;
		displayName = "";
		model = "";
		descriptionShort = "...";
		simulation = "inventoryItem";
		physLayer = "item_small";
		storageCategory = 1;
		weight = 1000;
		itemSize[] = {1,1};
		baseAttachments[] = {};
		attachments[] = {};
		SingleUseActions[] = {};
		ContinuousActions[] = {};
		InteractActions[] = {};
		repairableWithKits[] = {0};
		repairCosts[] = {0.0};
		ragQuantity = 0;
		fragility = 0.1;
		inventoryCondition = "true";
		inventorySlot = "";
		cargoClass = "";
		targetCategory = "";
		itemInfo[] = {};
		absorbency = 0;
		heatIsolation = 0;
		heatReduction = 0;
		coldReduction = 0;
		spawnDamageRange[] = {0.0,0.6};
		canBeSplit = 0;
		stackedUnit = "pc.";
		quantity = "";
		quantityBar = 0;
		animated = 0;
		reversed = 1;
		vehicleClass = "Inventory";
		mapSize = 1;
		side = 3;
		supplyRadius = 1.4;
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		recoilModifier[] = {1,1,1};
		isMeleeWeapon = 1;
		destroyOnEmpty = 1;
		varQuantityDestroyOnMin = 1;
		varWetInit = 0;
		varWetMin = 0;
		varWetMax = 1;
		varTemperatureInit = 0;
		varTemperatureMin = 0;
		varTemperatureMax = 1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeFist";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeFist_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeFist_Heavy";
				range = 2.8;
			};
		};
	};
	class ExplosionTest: HouseNoDestruct
	{
		scope = 2;
		model = "\DZ\data\lightpoint.p3d";
		ammoType = "Explosion_NonLethal";
	};
	class Light: Inventory_Base
	{
		scope = 2;
		model = "\DZ\data\lightpoint.p3d";
		overrideDrawArea = "500.0";
		class PointLights
		{
			class PointLight
			{
				color[] = {0.76,0.68,0.31,1};
				brightness = 1;
				radius = 5;
				dayLight = 1;
				position = "light";
				hitpoint = "bulb";
				selection = "bulb";
				heatHazeRadius = 0.1;
				heatHazePower = 0.01;
				fireEffect = 1;
				fireEffectOctaves = 4;
				fireEffectPersistence = 0.99;
				fireEffectFract = 0.33;
			};
		};
	};
	class Container_Base: Inventory_Base
	{
		storageCategory = 1;
		inventoryCondition = "typeOf _parent != typeOf _this";
		openable = 0;
		armAction = "Disarm";
		lootCategory = "Containers";
	};
	class WorldContainer_Base: Inventory_Base
	{
		storageCategory = 1;
		inventoryCondition = "false";
		openable = 0;
		itemsCargoSize[] = {5,8};
		itemsCargo[] = {};
	};
	class Powered_Base: Inventory_Base
	{
		displayName = "Powered Item Base";
		descriptionShort = "Should not be in inventory.";
		lootTag[] = {"Work","Civilian","Hunting","Military_east","Military_west"};
		attachments[] = {"BatteryD"};
		energyResources[] = {{"power",8.0}};
	};
	class EnergyItem_Base: Inventory_Base
	{
		armAction = "Disarm";
		lootCategory = "Tools";
		quantity = "[_this,'power'] call fnc_generateRscQuantity;";
		varEnergyInit = 0;
		varEnergyMin = 0;
		varEnergyMax = 1;
		varIsLightedInit = 0;
		varIsLightedMin = 0;
		varIsLightedMax = 1;
		class Resources
		{
			power = 0;
		};
	};
	class Edible_Base: Inventory_Base
	{
		armAction = "Disarm";
		spawnOffset = 0;
		trashItem = "";
		lootCategory = "Food";
		varQuantityInit = 1000;
		varQuantityMin = 0;
		varQuantityMax = 1000;
		stackedUnit = "g";
		quantityBar = 1;
	};
	class Tearable_Base: Inventory_Base
	{
		ragQuantity = 0;
	};
	class Trap_Base: Inventory_Base
	{
		armAction = "Disarm";
		itemSize[] = {2,2};
		lootCategory = "Tools";
	};
	class Grenade_Base: Inventory_Base
	{
		simulation = "handGrenade";
		absorbency = 0.5;
		itemSize[] = {2,2};
		lootCategory = "Explosives";
		inventorySlot = "tripWireAttachment";
		unpinAction = "unpinGrenade";
		havePin = 1;
		internalResources[] = {{"internalenergy",0.1}};
	};
	class Book_Base: Inventory_Base
	{
		simulation = "ItemBook";
		model = "\DZ\gear\books\Book_kniga.p3d";
		inventorySlot = "Book";
		itemSize[] = {1,2};
		lootCategory = "Books";
		lootTag[] = {"Civilian"};
		hiddenSelections[] = {"camoGround"};
		hiddenSelectionsTextures[] = {"dz\gear\books\data\book_kniga_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\gear\books\data\book.rvmat","DZ\gear\books\data\book_damage.rvmat","DZ\gear\books\data\book_destruct.rvmat"};
		};
	};
	class FishingRod_Base: Inventory_Base
	{
		scope = 0;
		SingleUseActions[] = {540};
		ContinuousActions[] = {166};
	};
	class Clothing_Base: Inventory_Base
	{
		scope = 0;
		simulation = "clothing";
		itemInfo[] = {"Clothing"};
		visibilityModifier = 1.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 1;
					Blood = 1;
					Shock = 1;
				};
				class Melee
				{
					Health = 1;
					Blood = 1;
					Shock = 1;
				};
			};
		};
	};
	class Switchable_Base: Powered_Base{};
	class Box_Base: Inventory_Base
	{
		ContinuousActions[] = {212};
		isMeleeWeapon = 1;
	};
	class Bottle_Base: Edible_Base
	{
		storageCategory = 1;
		canBeSplit = 0;
		quantityBar = 1;
		stackedRandom = 1;
		stackedUnit = "ml";
		itemSize[] = {1,2};
		SingleUseActions[] = {507,505,544};
		ContinuousActions[] = {108,106};
		InteractActions[] = {};
		varLiquidTypeInit = 512;
	};
	class ItemOptics: Inventory_Base
	{
		scope = 1;
		simulation = "itemoptics";
		optics = 1;
		SingleUseActions[] = {};
		ContinuousActions[] = {236};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class Thing;
	class ThingEffectLight;
	class ThingEffectFeather;
	class FxWindGrass1: ThingEffectLight
	{
		scope = 1;
		model = "\dz\data\data\cl_grass1.p3d";
		displayName = "Internal: FxWindGrass1";
		airRotation = 0.45;
	};
	class FxWindGrass2: ThingEffectLight
	{
		scope = 1;
		model = "\dz\data\data\cl_grass2.p3d";
		displayName = "Internal: FxWindGrass2";
		airRotation = 0.3;
	};
	class FxWindRock1: ThingEffectLight
	{
		scope = 1;
		model = "\dz\data\data\cl_rock1.p3d";
		displayName = "Internal: FxWindRock1";
		airFriction2[] = {1,1,1};
		airFriction1[] = {0.5,0.5,0.5};
		airFriction0[] = {0.05,0.05,0.05};
		airRotation = 0.7;
		minHeight = 0.05;
		avgHeight = 0.1;
		maxHeight = 0.15;
	};
	class FxWindLeaf1: ThingEffectLight
	{
		scope = 1;
		model = "\dz\data\data\cl_leaf.p3d";
		displayName = "Internal: FxWindLeaf1";
		airFriction2[] = {2,2,8};
		airFriction1[] = {1,1,4};
		airFriction0[] = {0.3,0.3,0.1};
		airRotation = 0.35;
		minHeight = 0.3;
		avgHeight = 1.5;
		maxHeight = 3.0;
	};
	class FxWindLeaf2: FxWindLeaf1
	{
		model = "\dz\data\data\cl_leaf2.p3d";
		displayName = "Internal: FxWindLeaf2";
	};
	class FxWindLeaf3: FxWindLeaf1
	{
		model = "\dz\data\data\cl_leaf3.p3d";
		displayName = "Internal: FxWindLeaf3";
	};
	class FXCrWindLeaf1: ThingEffectLight
	{
		scope = 1;
		model = "\dz\data\data\cr_leaf.p3d";
		displayName = "Internal: FxCrWindLeaf1";
		airFriction2[] = {2,2,8};
		airFriction1[] = {1,1,4};
		airFriction0[] = {0.3,0.3,0.1};
		airRotation = 0.35;
		minHeight = 0.3;
		avgHeight = 5.5;
		maxHeight = 10.0;
	};
	class FXCrWindLeaf2: FXCrWindLeaf1
	{
		model = "\dz\data\data\cr_leaf2.p3d";
		displayName = "Internal: FxCrWindLeaf2";
	};
	class FXCrWindLeaf3: FXCrWindLeaf1
	{
		model = "\dz\data\data\cr_leaf3.p3d";
		displayName = "Internal: FxCrWindLeaf3";
	};
	class FxWindPollen1: ThingEffectFeather
	{
		scope = 1;
		model = "\dz\data\data\cl_feathers2.p3d";
		displayName = "Internal: FxWindPollen1";
	};
	class FXUSWindLeaf1: ThingEffectLight
	{
		scope = 1;
		model = "\dz\data\cr_leaf.p3d";
		displayName = "Internal: FxUSWindLeaf1";
		airFriction2[] = {2,2,8};
		airFriction1[] = {1,1,4};
		airFriction0[] = {0.3,0.3,0.1};
		airRotation = 0.35;
		minHeight = 0.3;
		avgHeight = 5.5;
		maxHeight = 10.0;
	};
	class FXUSWindLeaf2: FXUSWindLeaf1
	{
		model = "\dz\data\cr_leaf2.p3d";
		displayName = "Internal: FxUSWindLeaf2";
	};
	class FXUSWindLeaf3: FXUSWindLeaf1
	{
		model = "\dz\data\cr_leaf3.p3d";
		displayName = "Internal: FxUSWindLeaf3";
	};
};
class CfgNonAIVehicles
{
	class StaticObject;
	class Plant: StaticObject
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health = 0;
					Blood = 0;
					Shock = 0;
				};
			};
		};
	};
	class ProxyFlag
	{
		scope = 2;
		model = "";
		autocenter = 0;
		reversed = 0;
		simulation = "flag";
		selectionFabric = "latka";
	};
	class ProxyCargo;
	class ProxyCargo01: ProxyCargo{};
	class ProxyCargo02: ProxyCargo{};
	class ProxyCargo03: ProxyCargo{};
	class ProxyCargo04: ProxyCargo{};
};
class CfgRecipes
{
	class Default
	{
		name = "";
		material[] = {};
		tools[] = {};
		results[] = {};
		condition = "";
		action = "";
	};
};
class cfgRecoils
{
	pistolBase[] = {0,0,0,0.08,0.003,0.02,0.05,-0.003,-0.033,0.05,0,0};
	subMachineGunBase[] = {0,0,0,0.06,0.005,0.005,0.05,0,-0.02,0.06,-0.005,0.005,0.05,0,0};
	assaultRifleBase[] = {0,0,0,0.06,0.01,0.01,0.1,0,-0.02,0.1,-0.01,0.01,0.05,0,0};
	machinegunBase[] = {0,0,0,0.08,0.01,0.04,0.05,-0.003,-0.01,0.2,0,0};
	launcherBase[] = {0,0,0,0.01,0,0.05,0.025,0,0};
	AK74Recoil[] = {0,0,0,0.06,0.01,0.012,0.1,0,-0.02,0.1,-0.01,0.01,0.05,0,0};
	M249Recoil[] = {0,0,0,0.07,0.002,0.01,0.035,-0.002,-0.02,0.05,0,0};
	M249RecoilProne[] = {0,0,0,0.1,0.003,0.004,0.05,-0.003,-0.008,0.05,0,0};
	M4Recoil[] = {0,0,0,0.06,0.01,0.01,0.1,0,-0.018,0.1,-0.01,0.01,0.05,0,0};
	PKMRecoil[] = {0,0,0,0.1,0.03,0.04,0.05,-0.03,-0.08,0.05,0,0};
	PKMRecoilProne[] = {0,0,0,0.1,0.003,0.005,0.05,-0.003,-0.01,0.05,0,0};
	recoil_single_primary_1outof10[] = {0.04,"0.006*(  (1/7))","0.05*.5*(  (1/7))",0.01,"0.009*(  (1/7))",0,0.045,0,"-0.025*.5*(  (1/7))"};
	recoil_single_primary_2outof10[] = {0.04,"0.006*(  (2/7))","0.05*.5*(  (2/7))",0.01,"0.009*(  (2/7))",0,0.045,0,"-0.025*.5*(  (2/7))"};
	recoil_single_primary_3outof10[] = {0.04,"0.006*(  (3/7))","0.05*.5*(  (3/7))",0.01,"0.009*(  (3/7))",0,0.045,0,"-0.025*.5*(  (3/7))"};
	recoil_single_primary_4outof10[] = {0.04,"0.006*(  (4/7))","0.05*.5*(  (4/7))",0.01,"0.009*(  (4/7))",0,0.045,0,"-0.025*.5*(  (4/7))"};
	recoil_single_primary_5outof10[] = {0.04,"0.006*(  (5/7))","0.05*.5*(  (5/7))",0.01,"0.009*(  (5/7))",0,0.045,0,"-0.025*.5*(  (5/7))"};
	recoil_single_primary_6outof10[] = {0.04,"0.006*(  (6/7))","0.05*.5*(  (6/7))",0.01,"0.009*(  (6/7))",0,0.045,0,"-0.025*.5*(  (6/7))"};
	recoil_single_primary_7outof10[] = {0.04,"0.006*(  (7/7))","0.05*.5*(  (7/7))",0.01,"0.009*(  (7/7))",0,0.045,0,"-0.025*.5*(  (7/7))"};
	recoil_single_primary_8outof10[] = {0.04,"0.006*(  (8/7))","0.05*.5*(  (8/7))",0.01,"0.009*(  (8/7))",0,0.045,0,"-0.025*.5*(  (8/7))"};
	recoil_single_primary_9outof10[] = {0.04,"0.006*(  (9/7))","0.05*.5*(  (9/7))",0.01,"0.009*(  (9/7))",0,0.045,0,"-0.025*.5*(  (9/7))"};
	recoil_single_primary_10outof10[] = {0.04,"0.006*( (10/7))","0.05*.5*( (10/7))",0.01,"0.009*( (10/7))",0,0.045,0,"-0.025*.5*( (10/7))"};
	recoil_single_primary_prone_1outof10[] = {0.035,"0.004*(  (1/7))","0.035*.5*(  (1/7))",0.01,"0.006*(  (1/7))",0,0.045,0,"-0.025*.25*(  (1/7))",0.01,0,"-0.025*.25*(  (1/7))"};
	recoil_single_primary_prone_2outof10[] = {0.035,"0.004*(  (2/7))","0.035*.5*(  (2/7))",0.01,"0.006*(  (2/7))",0,0.045,0,"-0.025*.25*(  (2/7))",0.01,0,"-0.025*.25*(  (2/7))"};
	recoil_single_primary_prone_3outof10[] = {0.035,"0.004*(  (3/7))","0.035*.5*(  (3/7))",0.01,"0.006*(  (3/7))",0,0.045,0,"-0.025*.25*(  (3/7))",0.01,0,"-0.025*.25*(  (3/7))"};
	recoil_single_primary_prone_4outof10[] = {0.035,"0.004*(  (4/7))","0.035*.5*(  (4/7))",0.01,"0.006*(  (4/7))",0,0.045,0,"-0.025*.25*(  (4/7))",0.01,0,"-0.025*.25*(  (4/7))"};
	recoil_single_primary_prone_5outof10[] = {0.035,"0.004*(  (5/7))","0.035*.5*(  (5/7))",0.01,"0.006*(  (5/7))",0,0.045,0,"-0.025*.25*(  (5/7))",0.01,0,"-0.025*.25*(  (5/7))"};
	recoil_single_primary_prone_6outof10[] = {0.035,"0.004*(  (6/7))","0.035*.5*(  (6/7))",0.01,"0.006*(  (6/7))",0,0.045,0,"-0.025*.25*(  (6/7))",0.01,0,"-0.025*.25*(  (6/7))"};
	recoil_single_primary_prone_7outof10[] = {0.035,"0.004*(  (7/7))","0.035*.5*(  (7/7))",0.01,"0.006*(  (7/7))",0,0.045,0,"-0.025*.25*(  (7/7))",0.01,0,"-0.025*.25*(  (7/7))"};
	recoil_single_primary_prone_8outof10[] = {0.035,"0.004*(  (8/7))","0.035*.5*(  (8/7))",0.01,"0.006*(  (8/7))",0,0.045,0,"-0.025*.25*(  (8/7))",0.01,0,"-0.025*.25*(  (8/7))"};
	recoil_single_primary_prone_9outof10[] = {0.035,"0.004*(  (9/7))","0.035*.5*(  (9/7))",0.01,"0.006*(  (9/7))",0,0.045,0,"-0.025*.25*(  (9/7))",0.01,0,"-0.025*.25*(  (9/7))"};
	recoil_single_primary_prone_10outof10[] = {0.035,"0.004*( (10/7))","0.035*.5*( (10/7))",0.01,"0.006*( (10/7))",0,0.045,0,"-0.025*.25*( (10/7))",0.01,0,"-0.025*.25*( (10/7))"};
	recoil_auto_primary_1outof10[] = {0,"0.006*(  (1/7))","0.035*.5*(  (1/7))",0.04,"0.009*(  (1/7))","0.015*(  (1/7))",0.025,0,"0.0125*(  (1/7))"};
	recoil_auto_primary_2outof10[] = {0,"0.006*(  (2/7))","0.035*.5*(  (2/7))",0.04,"0.009*(  (2/7))","0.015*(  (2/7))",0.025,0,"0.0125*(  (2/7))"};
	recoil_auto_primary_3outof10[] = {0,"0.006*(  (3/7))","0.035*.5*(  (3/7))",0.04,"0.009*(  (3/7))","0.015*(  (3/7))",0.025,0,"0.0125*(  (3/7))"};
	recoil_auto_primary_4outof10[] = {0,"0.006*(  (4/7))","0.035*.5*(  (4/7))",0.04,"0.009*(  (4/7))","0.015*(  (4/7))",0.025,0,"0.0125*(  (4/7))"};
	recoil_auto_primary_5outof10[] = {0,"0.006*(  (5/7))","0.035*.5*(  (5/7))",0.04,"0.009*(  (5/7))","0.015*(  (5/7))",0.025,0,"0.0125*(  (5/7))"};
	recoil_auto_primary_6outof10[] = {0,"0.006*(  (6/7))","0.035*.5*(  (6/7))",0.04,"0.009*(  (6/7))","0.015*(  (6/7))",0.025,0,"0.0125*(  (6/7))"};
	recoil_auto_primary_7outof10[] = {0,"0.006*(  (7/7))","0.035*.5*(  (7/7))",0.04,"0.009*(  (7/7))","0.015*(  (7/7))",0.025,0,"0.0125*(  (7/7))"};
	recoil_auto_primary_8outof10[] = {0,"0.006*(  (8/7))","0.035*.5*(  (8/7))",0.04,"0.009*(  (8/7))","0.015*(  (8/7))",0.025,0,"0.0125*(  (8/7))"};
	recoil_auto_primary_9outof10[] = {0,"0.006*(  (9/7))","0.035*.5*(  (9/7))",0.04,"0.009*(  (9/7))","0.015*(  (9/7))",0.025,0,"0.0125*(  (9/7))"};
	recoil_auto_primary_10outof10[] = {0,"0.006*( (10/7))","0.035*.5*( (10/7))",0.04,"0.009*( (10/7))","0.015*( (10/7))",0.025,0,"0.0125*( (10/7))"};
	recoil_auto_primary_prone_1outof10[] = {0,"0.004*(  (1/7))","0.035*.25*(  (1/7))",0.035,"0.006*(  (1/7))","0.035*(  (1/7))",0.01,"0.006*(  (1/7))",0,0.012,0,"-0.0125*(  (1/7))",0.01,0,"-0.0025*(  (1/7))"};
	recoil_auto_primary_prone_2outof10[] = {0,"0.004*(  (2/7))","0.035*.25*(  (2/7))",0.035,"0.006*(  (2/7))","0.035*(  (2/7))",0.01,"0.006*(  (2/7))",0,0.012,0,"-0.0125*(  (2/7))",0.01,0,"-0.0025*(  (2/7))"};
	recoil_auto_primary_prone_3outof10[] = {0,"0.004*(  (3/7))","0.035*.25*(  (3/7))",0.035,"0.006*(  (3/7))","0.035*(  (3/7))",0.01,"0.006*(  (3/7))",0,0.012,0,"-0.0125*(  (3/7))",0.01,0,"-0.0025*(  (3/7))"};
	recoil_auto_primary_prone_4outof10[] = {0,"0.004*(  (4/7))","0.035*.25*(  (4/7))",0.035,"0.006*(  (4/7))","0.035*(  (4/7))",0.01,"0.006*(  (4/7))",0,0.012,0,"-0.0125*(  (4/7))",0.01,0,"-0.0025*(  (4/7))"};
	recoil_auto_primary_prone_5outof10[] = {0,"0.004*(  (5/7))","0.035*.25*(  (5/7))",0.035,"0.006*(  (5/7))","0.035*(  (5/7))",0.01,"0.006*(  (5/7))",0,0.012,0,"-0.0125*(  (5/7))",0.01,0,"-0.0025*(  (5/7))"};
	recoil_auto_primary_prone_6outof10[] = {0,"0.004*(  (6/7))","0.035*.25*(  (6/7))",0.035,"0.006*(  (6/7))","0.035*(  (6/7))",0.01,"0.006*(  (6/7))",0,0.012,0,"-0.0125*(  (6/7))",0.01,0,"-0.0025*(  (6/7))"};
	recoil_auto_primary_prone_7outof10[] = {0,"0.004*(  (7/7))","0.035*.25*(  (7/7))",0.035,"0.006*(  (7/7))","0.035*(  (7/7))",0.01,"0.006*(  (7/7))",0,0.012,0,"-0.0125*(  (7/7))",0.01,0,"-0.0025*(  (7/7))"};
	recoil_auto_primary_prone_8outof10[] = {0,"0.004*(  (8/7))","0.035*.25*(  (8/7))",0.035,"0.006*(  (8/7))","0.035*(  (8/7))",0.01,"0.006*(  (8/7))",0,0.012,0,"-0.0125*(  (8/7))",0.01,0,"-0.0025*(  (8/7))"};
	recoil_auto_primary_prone_9outof10[] = {0,"0.004*(  (9/7))","0.035*.25*(  (9/7))",0.035,"0.006*(  (9/7))","0.035*(  (9/7))",0.01,"0.006*(  (9/7))",0,0.012,0,"-0.0125*(  (9/7))",0.01,0,"-0.0025*(  (9/7))"};
	recoil_auto_primary_prone_10outof10[] = {0,"0.004*( (10/7))","0.035*.25*( (10/7))",0.035,"0.006*( (10/7))","0.035*( (10/7))",0.01,"0.006*( (10/7))",0,0.012,0,"-0.0125*( (10/7))",0.01,0,"-0.0025*( (10/7))"};
	recoil_auto_machinegun_1outof10[] = {0,"0.006*.5*(  (1/7))","0.0005*2*(  (1/7))",0.03,"0.009*.5*(  (1/7))","0.001*2*(  (1/7))",0.04,0,"0.01*2*(  (1/7))"};
	recoil_auto_machinegun_2outof10[] = {0,"0.006*.5*(  (2/7))","0.0005*2*(  (2/7))",0.03,"0.009*.5*(  (2/7))","0.001*2*(  (2/7))",0.04,0,"0.01*2*(  (2/7))"};
	recoil_auto_machinegun_3outof10[] = {0,"0.006*.5*(  (3/7))","0.0005*2*(  (3/7))",0.03,"0.009*.5*(  (3/7))","0.001*2*(  (3/7))",0.04,0,"0.01*2*(  (3/7))"};
	recoil_auto_machinegun_4outof10[] = {0,"0.006*.5*(  (4/7))","0.0005*2*(  (4/7))",0.03,"0.009*.5*(  (4/7))","0.001*2*(  (4/7))",0.04,0,"0.01*2*(  (4/7))"};
	recoil_auto_machinegun_5outof10[] = {0,"0.006*.5*(  (5/7))","0.0005*2*(  (5/7))",0.03,"0.009*.5*(  (5/7))","0.001*2*(  (5/7))",0.04,0,"0.01*2*(  (5/7))"};
	recoil_auto_machinegun_6outof10[] = {0,"0.006*.5*(  (6/7))","0.0005*2*(  (6/7))",0.03,"0.009*.5*(  (6/7))","0.001*2*(  (6/7))",0.04,0,"0.01*2*(  (6/7))"};
	recoil_auto_machinegun_7outof10[] = {0,"0.006*.5*(  (7/7))","0.0005*2*(  (7/7))",0.03,"0.009*.5*(  (7/7))","0.001*2*(  (7/7))",0.04,0,"0.01*2*(  (7/7))"};
	recoil_auto_machinegun_8outof10[] = {0,"0.006*.5*(  (8/7))","0.0005*2*(  (8/7))",0.03,"0.009*.5*(  (8/7))","0.001*2*(  (8/7))",0.04,0,"0.01*2*(  (8/7))"};
	recoil_auto_machinegun_9outof10[] = {0,"0.006*.5*(  (9/7))","0.0005*2*(  (9/7))",0.03,"0.009*.5*(  (9/7))","0.001*2*(  (9/7))",0.04,0,"0.01*2*(  (9/7))"};
	recoil_auto_machinegun_10outof10[] = {0,"0.006*.5*( (10/7))","0.0005*2*( (10/7))",0.03,"0.009*.5*( (10/7))","0.001*2*( (10/7))",0.04,0,"0.01*2*( (10/7))"};
	recoil_auto_machinegun_prone_1outof10[] = {0,"0.004*.5*(  (1/7))","0.0035*.25*(  (1/7))",0.03,"0.006*.5*(  (1/7))","0.007*(  (1/7))",0.01,"0.006*.5*(  (1/7))",0,0.084,0,"-0.0025*(  (1/7))",0.084,0,"-0.0025*(  (1/7))"};
	recoil_auto_machinegun_prone_2outof10[] = {0,"0.004*.5*(  (2/7))","0.0035*.25*(  (2/7))",0.03,"0.006*.5*(  (2/7))","0.007*(  (2/7))",0.01,"0.006*.5*(  (2/7))",0,0.084,0,"-0.0025*(  (2/7))",0.084,0,"-0.0025*(  (2/7))"};
	recoil_auto_machinegun_prone_3outof10[] = {0,"0.004*.5*(  (3/7))","0.0035*.25*(  (3/7))",0.03,"0.006*.5*(  (3/7))","0.007*(  (3/7))",0.01,"0.006*.5*(  (3/7))",0,0.084,0,"-0.0025*(  (3/7))",0.084,0,"-0.0025*(  (3/7))"};
	recoil_auto_machinegun_prone_4outof10[] = {0,"0.004*.5*(  (4/7))","0.0035*.25*(  (4/7))",0.03,"0.006*.5*(  (4/7))","0.007*(  (4/7))",0.01,"0.006*.5*(  (4/7))",0,0.084,0,"-0.0025*(  (4/7))",0.084,0,"-0.0025*(  (4/7))"};
	recoil_auto_machinegun_prone_5outof10[] = {0,"0.004*.5*(  (5/7))","0.0035*.25*(  (5/7))",0.03,"0.006*.5*(  (5/7))","0.007*(  (5/7))",0.01,"0.006*.5*(  (5/7))",0,0.084,0,"-0.0025*(  (5/7))",0.084,0,"-0.0025*(  (5/7))"};
	recoil_auto_machinegun_prone_6outof10[] = {0,"0.004*.5*(  (6/7))","0.0035*.25*(  (6/7))",0.03,"0.006*.5*(  (6/7))","0.007*(  (6/7))",0.01,"0.006*.5*(  (6/7))",0,0.084,0,"-0.0025*(  (6/7))",0.084,0,"-0.0025*(  (6/7))"};
	recoil_auto_machinegun_prone_7outof10[] = {0,"0.004*.5*(  (7/7))","0.0035*.25*(  (7/7))",0.03,"0.006*.5*(  (7/7))","0.007*(  (7/7))",0.01,"0.006*.5*(  (7/7))",0,0.084,0,"-0.0025*(  (7/7))",0.084,0,"-0.0025*(  (7/7))"};
	recoil_auto_machinegun_prone_8outof10[] = {0,"0.004*.5*(  (8/7))","0.0035*.25*(  (8/7))",0.03,"0.006*.5*(  (8/7))","0.007*(  (8/7))",0.01,"0.006*.5*(  (8/7))",0,0.084,0,"-0.0025*(  (8/7))",0.084,0,"-0.0025*(  (8/7))"};
	recoil_auto_machinegun_prone_9outof10[] = {0,"0.004*.5*(  (9/7))","0.0035*.25*(  (9/7))",0.03,"0.006*.5*(  (9/7))","0.007*(  (9/7))",0.01,"0.006*.5*(  (9/7))",0,0.084,0,"-0.0025*(  (9/7))",0.084,0,"-0.0025*(  (9/7))"};
	recoil_auto_machinegun_prone_10outof10[] = {0,"0.004*.5*( (10/7))","0.0035*.25*( (10/7))",0.03,"0.006*.5*( (10/7))","0.007*( (10/7))",0.01,"0.006*.5*( (10/7))",0,0.084,0,"-0.0025*( (10/7))",0.084,0,"-0.0025*( (10/7))"};
	recoil_single_pistol_1outof3[] = {0.04,"0.006*(  (3/7))","0.05*.5*(  (3/7))",0.01,"0.009*(  (3/7))",0,0.045,0,"-0.025*.5*(  (3/7))"};
	recoil_single_pistol_2outof3[] = {0.04,"0.006*(  (5/7))","0.05*.5*(  (5/7))",0.01,"0.009*(  (5/7))",0,0.045,0,"-0.025*.5*(  (5/7))"};
	recoil_single_pistol_3outof3[] = {0.04,"0.006*(  (7/7))","0.05*.5*(  (7/7))",0.01,"0.009*(  (7/7))",0,0.045,0,"-0.025*.5*(  (7/7))"};
	recoil_single_pistol_prone_1outof3[] = {0.035,"0.004*(  (4/7))","0.035*.5*(  (4/7))",0.01,"0.006*(  (4/7))",0,0.045,0,"-0.025*.25*(  (4/7))",0.01,0,"-0.025*.25*(  (4/7))"};
	recoil_single_pistol_prone_2outof3[] = {0.035,"0.004*(  (6/7))","0.035*.5*(  (6/7))",0.01,"0.006*(  (6/7))",0,0.045,0,"-0.025*.25*(  (6/7))",0.01,0,"-0.025*.25*(  (6/7))"};
	recoil_single_pistol_prone_3outof3[] = {0.035,"0.004*(  (8/7))","0.035*.5*(  (8/7))",0.01,"0.006*(  (8/7))",0,0.045,0,"-0.025*.25*(  (8/7))",0.01,0,"-0.025*.25*(  (8/7))"};
	recoil_recoiless_weapon[] = {0.5,0,0.04};
	recoil_empty[] = {0,0,0};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class Mode_Safe: Mode_SemiAuto
{
	magazines[] = {};
};
class cfgAmmo
{
	class cfgAmmoTypes
	{
		class AType_Arrow_Composite
		{
			name = "Arrow_Composite";
		};
		class AType_Arrow_Crude
		{
			name = "Arrow_Crude";
		};
		class AType_Arrow_Primitive
		{
			name = "Arrow_Primitive";
		};
		class AType_Bullet_12GaugePellets
		{
			name = "Bullet_12GaugePellets";
		};
		class AType_Bullet_12GaugeSlug
		{
			name = "Bullet_12GaugeSlug";
		};
		class AType_Bullet_22
		{
			name = "Bullet_22";
		};
		class AType_Bullet_357
		{
			name = "Bullet_357";
		};
		class AType_Bullet_308Win
		{
			name = "Bullet_308Win";
		};
		class AType_Bullet_380
		{
			name = "Bullet_380";
		};
		class AType_Bullet_45ACP
		{
			name = "Bullet_45ACP";
		};
		class AType_Bullet_9x19
		{
			name = "Bullet_9x19";
		};
		class AType_Bullet_9x39
		{
			name = "Bullet_9x39";
		};
		class AType_Bullet_545x39
		{
			name = "Bullet_545x39";
		};
		class AType_Bullet_556x45
		{
			name = "Bullet_556x45";
		};
		class AType_Bullet_762x39
		{
			name = "Bullet_762x39";
		};
		class AType_Bullet_762x54
		{
			name = "Bullet_762x54";
		};
		class AType_Bullet_762x54Tracer
		{
			name = "Bullet_762x54Tracer";
		};
	};
	class DefaultAmmo;
	class Explosion_NonLethal: DefaultAmmo
	{
		hit = 1;
		indirectHit = 1;
		indirectHitRange = 1;
		particle = "explosion_landmine_01";
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		fuseDistance = 1;
		cost = 40;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundSetExplosion[] = {"Grenade_explosion_SoundSet","Grenade_Tail_SoundSet"};
		soundHit[] = {"DZ\sounds\weapons\grenades\hand_grenade_1",10.0,1};
		soundFly[] = {"dz\sounds\Weapons\explosions\noise",3.162277e-005,1};
		soundEngine[] = {"",9.999998e-005,4};
		visibleFire = 2;
		audibleFire = 0.25;
		whistleDist = 4;
		visibleFireTime = 0;
		class DamageApplied
		{
			type = "Projectile";
			Health = 5;
			Blood = 10;
			Shock = 10;
		};
	};
};
class cfgWeapons
{
	class DefaultWeapon;
	class LauncherCore;
	class RifleCore;
	class PistolCore;
	class Rifle_Base: RifleCore
	{
		scope = 0;
		lootCategory = "Rifles";
		storageCategory = 1;
		targetCategory = "loot";
		weaponInfoType = "RscWeaponZeroing";
		rotationFlags = 17;
		cursor = "aimGunGhost";
		cursorAim = "aimPistol";
		SingleUseActions[] = {558,559};
		itemSize[] = {6,3};
		spawnDamageRange[] = {0.0,0.6};
		barrelArmor = 400;
		unjamTime[] = {6.0,10.0};
		autoReload = 0;
		discreteDistance[] = {50,100,200,300};
		discreteDistanceInitIndex = 1;
		opticsZoomMin = 0.414215;
		opticsZoomInit = 0.57737;
		opticsZoomMax = 0.70022;
		magazineSlot = "magazine";
		chamberedRound = "";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		bullet1[] = {"dz\sounds\weapons\shells\5_56\asphlat_556_01",0.17782794,1,15};
		bullet2[] = {"dz\sounds\weapons\shells\5_56\asphlat_556_02",0.17782794,1,15};
		bullet3[] = {"dz\sounds\weapons\shells\5_56\asphlat_556_03",0.17782794,1,15};
		bullet4[] = {"dz\sounds\weapons\shells\5_56\asphlat_556_04",0.17782794,1,15};
		bullet5[] = {"dz\sounds\weapons\shells\5_56\asphlat_556_05",0.31622776,1,15};
		bullet6[] = {"dz\sounds\weapons\shells\5_56\asphlat_556_06",0.31622776,1,15};
		bullet7[] = {"dz\sounds\weapons\shells\5_56\dirt_556_01",0.31622776,1,15};
		bullet8[] = {"dz\sounds\weapons\shells\5_56\dirt_556_02",0.31622776,1,15};
		bullet9[] = {"dz\sounds\weapons\shells\5_56\dirt_556_03",0.17782794,1,15};
		bullet10[] = {"dz\sounds\weapons\shells\5_56\dirt_556_04",0.17782794,1,15};
		bullet11[] = {"dz\sounds\weapons\shells\5_56\dirt_556_05",0.17782794,1,15};
		bullet12[] = {"dz\sounds\weapons\shells\5_56\dirt_556_06",0.17782794,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class Single: Mode_SemiAuto{};
		class NoiseShoot
		{
			strength = 100.0;
			type = "shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
			};
		};
	};
	class Shotgun_Base: Rifle_Base
	{
		scope = 0;
		rotationFlags = 17;
		animClass = "Shotgun";
		modelOptics = "-";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		discreteDistance[] = {50};
		optics = 1;
		opticsFlare = 0;
		value = 0;
	};
	class Pistol_Base: PistolCore
	{
		scope = 0;
		lootCategory = "Pistols";
		storageCategory = 1;
		targetCategory = "loot";
		inventorySlot = "Pistol";
		rotationFlags = 17;
		cursor = "aimGunGhost";
		cursorAim = "aimPistol";
		type = 1;
		SingleUseActions[] = {558,559};
		itemSize[] = {4,2};
		barrelArmor = 400;
		unjamTime[] = {6.0,10.0};
		autoReload = 0;
		opticsZoomMin = 0.414215;
		opticsZoomInit = 0.57737;
		opticsZoomMax = 0.70022;
		magazineSlot = "magazine";
		varQuantityInit = 0;
		varQuantityMin = 0;
		varQuantityMax = 0;
		bullet1[] = {"dz\sounds\weapons\shells\45\asphlat_45_01",0.17782794,1,15};
		bullet2[] = {"dz\sounds\weapons\shells\45\asphlat_45_02",0.17782794,1,15};
		bullet3[] = {"dz\sounds\weapons\shells\45\asphlat_45_03",0.17782794,1,15};
		bullet4[] = {"dz\sounds\weapons\shells\45\asphlat_45_04",0.17782794,1,15};
		bullet5[] = {"dz\sounds\weapons\shells\45\asphlat_45_05",0.31622776,1,15};
		bullet6[] = {"dz\sounds\weapons\shells\45\asphlat_45_06",0.31622776,1,15};
		bullet7[] = {"dz\sounds\weapons\shells\45\dirt_45_01",0.31622776,1,15};
		bullet8[] = {"dz\sounds\weapons\shells\45\dirt_45_02",0.31622776,1,15};
		bullet9[] = {"dz\sounds\weapons\shells\45\dirt_45_03",0.17782794,1,15};
		bullet10[] = {"dz\sounds\weapons\shells\45\dirt_45_04",0.17782794,1,15};
		bullet11[] = {"dz\sounds\weapons\shells\45\dirt_45_05",0.17782794,1,15};
		bullet12[] = {"dz\sounds\weapons\shells\45\dirt_45_06",0.17782794,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class Single: Mode_SemiAuto{};
		class NoiseShoot
		{
			strength = 100.0;
			type = "shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
			};
		};
	};
	class Archery_Base: RifleCore
	{
		scope = 0;
		storageCategory = 1;
		armAction = "Bow";
		animClass = "Bow";
		animName = "Bow";
		targetCategory = "loot";
		autoReload = 0;
		tooltip = "_text = _this call fnc_generateTooltip;_text";
		cursor = "aimBowGhost";
		cursorAim = "aimBow";
		arrow1[] = {};
		SingleUseActions[] = {559};
		absorbency = 0.1;
		itemSize[] = {7,3};
		modelOptics = "-";
		distanceZoomMin = 10;
		distanceZoomMax = 10;
		discreteDistance[] = {10};
		discreteDistanceInitIndex = 1;
		value = 0;
		dexterity = 1.8;
		optics = 1;
		opticsFlare = 0;
		soundBullet[] = {"arrow1",1};
		drySound[] = {"dz\sounds\weapons\bows\dry_bow_0",0.9,1,30};
		reloadMagazineSound[] = {};
		reloadSound[] = {"dz\sounds\weapons\bows\Bow_reload",0.9,1,30};
		prepSoundDry1[] = {"dz\sounds\weapons\bows\Bow_wood_bend_empty_01",0.9,1,30};
		prepSoundDry2[] = {"dz\sounds\weapons\bows\Bow_wood_bend_empty_02",0.9,1,30};
		prepSoundDry[] = {"prepSoundDry1",0.5,"prepSoundDry2",0.5};
		prepSoundLoaded1[] = {"dz\sounds\weapons\bows\Bow_wood_bend_loaded_01",0.9,1,30};
		prepSoundLoaded2[] = {"dz\sounds\weapons\bows\Bow_wood_bend_loaded_02",0.9,1,30};
		prepSoundLoaded[] = {"prepSoundLoaded1",0.5,"prepSoundLoaded2",0.5};
		baseAttachments[] = {};
		attachments[] = {};
		ejectType = 1;
		reloadAction = "ReloadBow";
		shotAction = "ReloadBow";
		magazineSlot = "magazine";
		fireLightDuration = 0;
		fireLightIntensity = 0;
		fireSmokeDuration = 0;
		canChamberByDestroyed = 0;
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.7;
			recoil = "recoil_bow";
			recoilProne = "recoil_bow";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength = 5.0;
			type = "shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
			};
		};
	};
	class Launcher_Base: LauncherCore
	{
		scope = 0;
		cursorAim = "";
		cursor = "";
		cursorSize = 1;
		autoAimEnabled = 0;
		opticsDisablePeripherialVision = 1;
		magazines[] = {};
		value = 10;
		magazineReloadTime = 12;
		reloadTime = 0;
		initSpeed = 30;
		canLock = 0;
		SingleUseActions[] = {558,559};
		rotationFlags = 17;
		reloadAction = "ManActReloadAT";
		autoReload = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "";
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 500;
		optics = 1;
		primary = 0;
		spawnDamageRange[] = {0.0,0.6};
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.5;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		minRange = 20;
		minRangeProbab = 0.3;
		midRange = 150;
		midRangeProbab = 0.58;
		maxRange = 500;
		maxRangeProbab = 0.04;
	};
};
//};

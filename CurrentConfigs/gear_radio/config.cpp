////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:11:25 2018 : 'file' last modified on Wed Aug 22 17:47:32 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_radio\config.bin{
class CfgPatches
{
	class DZ_Radio
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgRecipes{};
class CfgVehicles
{
	class Inventory_Base;
	class HouseNoDestruct;
	class Transmitter_Base: Inventory_Base
	{
		scope = 0;
	};
	class PersonalRadio: Transmitter_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PersonalRadio0";
		descriptionShort = "$STR_CfgVehicles_PersonalRadio1";
		lootTag[] = {"Police","Hunting","Camping","Military_east"};
		model = "\dz\gear\radio\WalkieTalkie.p3d";
		SingleUseActions[] = {542,543};
		ContinuousActions[] = {170};
		weight = 2400;
		absorbency = 0.5;
		itemSize[] = {1,3};
		rotationFlags = 1;
		oldpower = 0;
		isMeleeWeapon = 1;
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
		simulation = "itemTransmitter";
		inputRange = 8;
		range = 5000;
		attachments[] = {"BatteryD"};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.01;
			plugType = 1;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		class ClothingTypes{};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\radio\data\WalkieTalkie.rvmat"}},{0.5,{"DZ\gear\radio\data\WalkieTalkie_damage.rvmat"}},{0.0,{"DZ\gear\radio\data\WalkieTalkie_destruct.rvmat"}}};
				};
			};
		};
	};
	class BaseRadio: Transmitter_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BaseRadio0";
		descriptionShort = "$STR_CfgVehicles_BaseRadio1";
		model = "\dz\gear\radio\Base_radio_station_g.p3d";
		SingleUseActions[] = {542,543};
		ContinuousActions[] = {170};
		weight = 2400;
		absorbency = 0.5;
		itemSize[] = {10,10};
		inventorySlot = "Back";
		class ClothingTypes
		{
			male = "\dz\gear\radio\Base_radio_station_m.p3d";
			female = "\dz\gear\radio\Base_radio_station_f.p3d";
		};
		oldpower = 0;
		simulation = "itemTransmitter";
		inputRange = 8;
		range = 50000;
		attachments[] = {"CarBattery"};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.05;
			plugType = 5;
			attachmentAction = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\radio\data\Base_radio_station.rvmat"}},{0.5,{"DZ\gear\radio\data\Base_radio_station_damage.rvmat"}},{0.0,{"DZ\gear\radio\data\Base_radio_station_destruct.rvmat"}}};
				};
			};
		};
	};
	class Megaphone: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Megaphone0";
		descriptionShort = "$STR_CfgVehicles_Megaphone1";
		lootTag[] = {"Police","Military_east"};
		model = "\dz\gear\radio\megaphone.p3d";
		ContinuousActions[] = {232};
		weight = 2400;
		absorbency = 0.5;
		itemSize[] = {3,4};
		rotationFlags = 17;
		oldpower = 0;
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
		simulation = "itemMegaphone";
		range = 200;
		gain = 3.0;
		attachments[] = {"BatteryD"};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			attachmentAction = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\radio\data\megaphone.rvmat"}},{0.5,{"DZ\gear\radio\data\megaphone_damage.rvmat"}},{0.0,{"DZ\gear\radio\data\megaphone_destruct.rvmat"}}};
				};
			};
		};
	};
	class Radio: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Radio0";
		descriptionShort = "$STR_CfgVehicles_Radio1";
		model = "\dz\gear\tools\unitra_wilga.p3d";
		animClass = "Knife";
		SingleUseActions[] = {542,543};
		ContinuousActions[] = {171};
		weight = 1700;
		itemSize[] = {2,3};
		fragility = 0.01;
		absorbency = 0.5;
		simulation = "ItemRadio";
		attachments[] = {"BatteryD"};
		oldpower = 0;
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.02;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\radio\data\unitra_wilga.rvmat"}},{0.5,{"DZ\gear\radio\data\unitra_wilga_damage.rvmat"}},{0.0,{"DZ\gear\radio\data\unitra_wilga_destruct.rvmat"}}};
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
		class Channels
		{
			class Absolute80s
			{
				name = "Absolute 80s";
				url = "http://icecast.timlradio.co.uk/a832.ogg";
			};
			class Absolute90s
			{
				name = "Absolute 90s";
				url = "http://icecast.timlradio.co.uk/a932.ogg";
			};
		};
	};
};
//};

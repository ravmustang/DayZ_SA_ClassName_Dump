////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:03:43 2018 : 'file' last modified on Wed Aug 22 15:06:19 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\characters_belts\config.bin{
class CfgPatches
{
	class DZ_Characters_Belts
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class LeatherBelt_ColorBase: Clothing
	{
		scope = 0;
		displayName = "Leather Belt";
		descriptionShort = "nothing here";
		model = "\DZ\characters\belts\belt_leather_g.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot = "Hips";
		itemInfo[] = {"Clothing","Hips"};
		itemSize[] = {2,1};
		weight = 20;
		lootCategory = "Crafted";
		lootTag[] = {"Civilian"};
		hiddenSelections[] = {"camoGround","camoMale","camoFemale"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\belts\data\belt_leather_beige.rvmat"}},{0.5,{"DZ\characters\belts\data\belt_leather_beige_damage.rvmat"}},{0.0,{"DZ\characters\belts\data\belt_leather_beige_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\belts\belt_leather_m.p3d";
			female = "\DZ\characters\belts\belt_leather_f.p3d";
		};
	};
	class LeatherBelt_Beige: LeatherBelt_ColorBase
	{
		scope = 1;
		hiddenSelectionsTextures[] = {"\dz\characters\belts\data\belt_leather_co.paa","\dz\characters\belts\data\belt_leather_co.paa","\dz\characters\belts\data\belt_leather_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\characters\belts\data\belt_leather_beige.rvmat","DZ\characters\belts\data\belt_leather_beige.rvmat","DZ\characters\belts\data\belt_leather_beige.rvmat"};
	};
};
//};

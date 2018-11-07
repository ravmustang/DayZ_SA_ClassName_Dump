////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:03:46 2018 : 'file' last modified on Wed Aug 22 15:09:04 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\characters_glasses\config.bin{
class CfgPatches
{
	class DZ_Characters_Glasses
	{
		units[] = {"SunGlasses"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters"};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class SportGlasses: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SportGlasses0";
		descriptionShort = "$STR_CfgVehicles_SportGlasses1";
		model = "\DZ\characters\glasses\sport_glasses_g.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot = "Eyewear";
		itemInfo[] = {"Clothing","Eyewear"};
		rotationFlags = 1;
		itemSize[] = {2,1};
		weight = 20;
		lootCategory = "Eyewear";
		lootTag[] = {"Civilian"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\glasses\data\joeyx.rvmat"}},{0.5,{"DZ\characters\glasses\data\joeyx_damage.rvmat"}},{0.0,{"DZ\characters\glasses\data\joeyx_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\glasses\sport_glasses.p3d";
			female = "\DZ\characters\glasses\sport_glasses.p3d";
		};
	};
	class AviatorGlasses: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_AviatorGlasses0";
		descriptionShort = "$STR_CfgVehicles_AviatorGlasses1";
		model = "\DZ\characters\glasses\aviator_glasses_g.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot = "Eyewear";
		itemInfo[] = {"Clothing","Eyewear"};
		rotationFlags = 1;
		weight = 36;
		itemSize[] = {2,1};
		lootTag[] = {"Military_west","Military_east","Civilian"};
		lootCategory = "Eyewear";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\glasses\data\goggles2_metal.rvmat"}},{0.5,{"DZ\characters\glasses\data\goggles2_metal_damage.rvmat"}},{0.0,{"DZ\characters\glasses\data\goggles2_metal_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\glasses\aviator_glasses.p3d";
			female = "\DZ\characters\glasses\aviator_glasses.p3d";
		};
	};
	class DesignerGlasses: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_DesignerGlasses0";
		descriptionShort = "$STR_CfgVehicles_DesignerGlasses1";
		model = "\DZ\characters\glasses\sunglasses_designer_g.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot = "Eyewear";
		itemInfo[] = {"Clothing","Eyewear"};
		rotationFlags = 1;
		weight = 40;
		itemSize[] = {2,1};
		lootTag[] = {"Civilian"};
		lootCategory = "Eyewear";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\glasses\data\sunglass_designer.rvmat"}},{0.5,{"DZ\characters\glasses\data\sunglass_designer_damage.rvmat"}},{0.0,{"DZ\characters\glasses\data\sunglass_designer_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\glasses\sunglasses_designer.p3d";
			female = "\DZ\characters\glasses\sunglasses_designer.p3d";
		};
	};
	class ThickFramesGlasses: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ThickFramesGlasses0";
		descriptionShort = "$STR_CfgVehicles_ThickFramesGlasses1";
		model = "\DZ\characters\glasses\glasses_thick_frame_g.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot = "Eyewear";
		itemInfo[] = {"Clothing","Eyewear"};
		rotationFlags = 1;
		weight = 50;
		itemSize[] = {2,1};
		lootTag[] = {"Civilian"};
		lootCategory = "Eyewear";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\glasses\data\ThickFrameGlasses.rvmat"}},{0.5,{"DZ\characters\glasses\data\ThickFrameGlasses_damage.rvmat"}},{0.0,{"DZ\characters\glasses\data\ThickFrameGlasses_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\glasses\glasses_thick_frame.p3d";
			female = "\DZ\characters\glasses\glasses_thick_frame.p3d";
		};
	};
	class ThinFramesGlasses: Clothing
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_ThinFramesGlasses0";
		descriptionShort = "$STR_CfgVehicles_ThinFramesGlasses1";
		model = "\DZ\characters\glasses\glasses_thin_frame_g.p3d";
		vehicleClass = "Clothing";
		simulation = "clothing";
		inventorySlot = "Eyewear";
		itemInfo[] = {"Clothing","Eyewear"};
		rotationFlags = 1;
		weight = 30;
		itemSize[] = {2,1};
		lootTag[] = {"Civilian"};
		lootCategory = "Eyewear";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\characters\glasses\data\ThinFrameGlasses.rvmat"}},{0.5,{"DZ\characters\glasses\data\ThinFrameGlasses_damage.rvmat"}},{0.0,{"DZ\characters\glasses\data\ThinFrameGlasses_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male = "\DZ\characters\glasses\glasses_thin_frame.p3d";
			female = "\DZ\characters\glasses\glasses_thin_frame.p3d";
		};
	};
};
//};

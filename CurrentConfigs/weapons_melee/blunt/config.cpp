////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:50:30 2018 : 'file' last modified on Wed Aug 22 21:57:34 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_melee\blunt\config.bin{
class CfgPatches
{
	class DZ_Weapons_Melee_Blunt
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Melee"};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class BaseballBat: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BaseballBat0";
		descriptionShort = "$STR_CfgVehicles_BaseballBat1";
		model = "\dz\weapons\melee\blunt\baseballbat.p3d";
		rotationFlags = 17;
		autoQuickbar = 1;
		inventorySlot = "Melee";
		weight = 566;
		itemSize[] = {2,8};
		fragility = 0.02;
		lootTag[] = {"Civilian","Work"};
		lootCategory = "Tools";
		openItemSpillRange[] = {40,80};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBat";
				range = 1.5;
			};
			class Heavy
			{
				ammo = "MeleeBat_Heavy";
				range = 1.5;
			};
			class Sprint
			{
				ammo = "MeleeBat_Heavy";
				range = 4.1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat","DZ\weapons\melee\blunt\Data\BaseballBat_View.rvmat"}},{0.5,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat","DZ\weapons\melee\blunt\Data\BaseballBat_View_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blunt\Data\BaseballBat_destruct.rvmat","DZ\weapons\melee\blunt\Data\BaseballBat_View_destruct.rvmat"}}};
				};
			};
		};
	};
	class NailedBaseballBat: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_NailedBaseballBat0";
		descriptionShort = "$STR_CfgVehicles_NailedBaseballBat1";
		model = "\dz\weapons\melee\blunt\Baseballbat_nailed.p3d";
		rotationFlags = 17;
		autoQuickbar = 1;
		inventorySlot = "Melee";
		weight = 600;
		itemSize[] = {2,8};
		fragility = 0.02;
		lootTag[] = {"Civilian","Work"};
		lootCategory = "Crafted";
		openItemSpillRange[] = {40,70};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBatNails";
				range = 1.5;
			};
			class Heavy
			{
				ammo = "MeleeBatNails_Heavy";
				range = 1.5;
			};
			class Sprint
			{
				ammo = "MeleeBatNails_Heavy";
				range = 4.1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blunt\Data\BaseballBat.rvmat","DZ\weapons\melee\blunt\Data\BaseballBat_View.rvmat"}},{0.5,{"DZ\weapons\melee\blunt\Data\BaseballBat_damage.rvmat","DZ\weapons\melee\blunt\Data\BaseballBat_View_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blunt\Data\BaseballBat_destruct.rvmat","DZ\weapons\melee\blunt\Data\BaseballBat_View_destruct.rvmat"}}};
				};
			};
		};
	};
	class PipeWrench: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PipeWrench0";
		descriptionShort = "$STR_CfgVehicles_PipeWrench1";
		model = "\dz\weapons\melee\blunt\pipewrench.p3d";
		rotationFlags = 12;
		autoQuickbar = 1;
		inventorySlot = "Melee";
		weight = 4400;
		itemSize[] = {2,5};
		fragility = 0.002;
		lootTag[] = {"Work"};
		lootCategory = "Tools";
		openItemSpillRange[] = {30,60};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleePipeWrench";
				range = 1.5;
			};
			class Heavy
			{
				ammo = "MeleePipeWrench_Heavy";
				range = 1.5;
			};
			class Sprint
			{
				ammo = "MeleePipeWrench_Heavy";
				range = 4.1;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blunt\Data\pipewrench.rvmat","DZ\weapons\melee\blunt\Data\pipewrench_view.rvmat"}},{0.5,{"DZ\weapons\melee\blunt\Data\pipewrench_damage.rvmat","DZ\weapons\melee\blunt\Data\pipewrench_view_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blunt\Data\pipewrench_destruct.rvmat","DZ\weapons\melee\blunt\Data\pipewrench_view_destruct.rvmat"}}};
				};
			};
		};
	};
	class BrassKnuckles_ColorBase: Inventory_Base
	{
		displayName = "$STR_CfgVehicles_BrassKnuckles_ColorBase0";
		descriptionShort = "$STR_CfgVehicles_BrassKnuckles_ColorBase1";
		model = "\dz\weapons\melee\blunt\Brassknuckles.p3d";
		rotationFlags = 17;
		autoQuickbar = 1;
		inventorySlot = "";
		weight = 142;
		itemSize[] = {1,2};
		fragility = 0.002;
		lootTag[] = {"Civilian","Military_east","Military_west"};
		lootCategory = "Tools";
		hiddenSelections[] = {"camo"};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBrassKnuckles";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBrassKnuckles_Heavy";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBrassKnuckles_Heavy";
				range = 2.8;
			};
		};
	};
	class BrassKnuckles_Dull: BrassKnuckles_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BrassKnuckles_Dull0";
		hiddenSelectionsMaterials[] = {"dz\weapons\melee\blunt\data\Brassknuckles_dull.rvmat"};
		hiddenSelectionsTextures[] = {"dz\weapons\melee\blunt\data\BrassKnuckles_dull_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blunt\Data\brassknuckles_dull.rvmat"}},{0.5,{"DZ\weapons\melee\blunt\Data\brassknuckles_dull_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blunt\Data\brassknuckles_dull_destruct.rvmat"}}};
				};
			};
		};
	};
	class BrassKnuckles_Shiny: BrassKnuckles_ColorBase
	{
		scope = 2;
		descriptionShort = "$STR_CfgVehicles_BrassKnuckles_Shiny0";
		weight = 162;
		hiddenSelectionsMaterials[] = {"dz\weapons\melee\blunt\Data\Brassknuckles_shiny.rvmat"};
		hiddenSelectionsTextures[] = {"dz\weapons\melee\blunt\data\BrassKnuckles_shiny_co.paa"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blunt\Data\Brassknuckles_shiny.rvmat"}},{0.5,{"DZ\weapons\melee\blunt\Data\Brassknuckles_shiny_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blunt\Data\Brassknuckles_shiny_destruct.rvmat"}}};
				};
			};
		};
	};
	class TelescopicBaton: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TelescopicBaton0";
		descriptionShort = "$STR_CfgVehicles_TelescopicBaton1";
		model = "\dz\weapons\melee\blunt\TelescopingBaton.p3d";
		SingleUseActions[] = {501,538};
		rotationFlags = 17;
		autoQuickbar = 1;
		inventorySlot = "Melee";
		weight = 252;
		itemSize[] = {2,5};
		fragility = 0.002;
		lootTag[] = {"Police","Civilian"};
		lootCategory = "Tools";
		openItemSpillRange[] = {35,55};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blunt\Data\TelescopingBaton.rvmat"}},{0.5,{"DZ\weapons\melee\blunt\Data\TelescopingBaton_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blunt\Data\TelescopingBaton_destruct.rvmat"}}};
				};
			};
		};
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
			class Default_Opened
			{
				ammo = "MeleeBlunt";
				range = 1.6;
			};
			class Heavy_Opened
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.6;
			};
			class Sprint_Opened
			{
				ammo = "MeleeBlunt_Heavy";
				range = 4.1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Baton_deploy
				{
					soundSet = "Baton_deploy_SoundSet";
					id = 201;
				};
				class Baton_retract
				{
					soundSet = "Baton_retract_SoundSet";
					id = 202;
				};
			};
		};
		class AnimationSources
		{
			class Doors1
			{
				source = "user";
				initPhase = 1;
				animPeriod = 0.001;
			};
		};
	};
	class HockeyStick: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_HockeyStick0";
		descriptionShort = "$STR_CfgVehicles_HockeyStick1";
		model = "\dz\weapons\melee\blunt\hockey_stick_peters.p3d";
		rotationFlags = 12;
		autoQuickbar = 1;
		inventorySlot = "Melee";
		weight = 650;
		itemSize[] = {2,10};
		fragility = 0.02;
		lootTag[] = {"Civilian"};
		lootCategory = "Tools";
		openItemSpillRange[] = {40,80};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blunt\Data\Hockey_Stick.rvmat"}},{0.5,{"DZ\weapons\melee\blunt\Data\Hockey_Stick_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blunt\Data\Hockey_Stick_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeWoodBlunt";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleeWoodBlunt_Heavy";
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleeWoodBlunt_Heavy";
				range = 3.7;
			};
		};
	};
	class NewHockeyStick: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_NewHockeyStick0";
		descriptionShort = "$STR_CfgVehicles_NewHockeyStick1";
		model = "\dz\weapons\melee\blunt\hockey_stick_peters.p3d";
		rotationFlags = 12;
		autoQuickbar = 1;
		inventorySlot = "Melee";
		weight = 650;
		itemSize[] = {2,10};
		fragility = 0.02;
		lootTag[] = {"Civilian"};
		lootCategory = "Tools";
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBat";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleeBat_Heavy";
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleeBat_Heavy";
				range = 3.7;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blunt\Data\Hockey_Stick.rvmat"}},{0.5,{"DZ\weapons\melee\blunt\Data\Hockey_Stick_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blunt\Data\Hockey_Stick_destruct.rvmat"}}};
				};
			};
		};
	};
	class PoliceBaton: Inventory_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_PoliceBaton0";
		descriptionShort = "$STR_CfgVehicles_PoliceBaton1";
		model = "\dz\weapons\melee\blunt\Police_baton.p3d";
		rotationFlags = 16;
		autoQuickbar = 1;
		inventorySlot = "Melee";
		weight = 540;
		itemSize[] = {2,5};
		fragility = 0.002;
		lootTag[] = {"Police"};
		lootCategory = "Tools";
		openItemSpillRange[] = {35,55};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\blunt\Data\baton.rvmat"}},{0.5,{"DZ\weapons\melee\blunt\Data\baton_damage.rvmat"}},{0.0,{"DZ\weapons\melee\blunt\Data\baton_destruct.rvmat"}}};
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBlunt";
				range = 1.6;
			};
			class Heavy
			{
				ammo = "MeleeBlunt_Heavy";
				range = 1.6;
			};
			class Sprint
			{
				ammo = "MeleeBlunt_Heavy";
				range = 4.1;
			};
		};
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 19:50:34 2018 : 'file' last modified on Wed Aug 22 21:57:42 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\weapons_melee\powered\config.bin{
class CfgPatches
{
	class DZ_Weapons_Melee_Powered
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Melee"};
	};
};
class CfgRecipes
{
	class FuelChainsaw
	{
		name = "Refuel";
		tools[] = {"BottleBase","Chainsaw"};
		condition = "damage _tool2 < 1 && ((_tool2 getVariable['internalenergy',0]) < 10) && (quantity _tool1) >= 0 && _tool1 getVariable ['liquidType',''] == 'gasoline'";
		action = "_fuelamount = _tool2 getVariable['internalenergy',0]; _sourceVolume = quantity _tool1;if ( _sourceVolume >= (500 - ( _fuelamount*50)) ) then {_tool2 setVariable['internalenergy',10];_tool1 addQuantity - (500 - ( _fuelamount*50));}else{_tool1 addQuantity -_sourceVolume; _tool2 setVariable['internalenergy',_fuelamount + (_sourceVolume*0.02)];};";
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Powered_Base;
	class Switchable_Base;
	class Chainsaw: Switchable_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Chainsaw0";
		descriptionShort = "$STR_CfgVehicles_Chainsaw1";
		model = "\dz\weapons\melee\powered\chainsaw.p3d";
		animClass = "Chainsaw";
		autoQuickbar = 1;
		weight = 5800;
		itemSize[] = {10,5};
		absorbency = 0.5;
		ContinuousActions[] = {183};
		lootTag[] = {"Work","Forester"};
		lootCategory = "Tools";
		openItemSpillRange[] = {40,60};
		class EnergyManager
		{
			hasIcon = 1;
			energyAtSpawn = 0;
			energyUsagePerSecond = 1;
			energyStorageMax = 600;
		};
		internalResources[] = {{"internalenergy",0.1}};
		hiddenSelections[] = {"flame"};
		hiddenSelectionsTextures[] = {""};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\powered\Data\chainsaw.rvmat"}},{0.5,{"DZ\weapons\melee\powered\Data\chainsaw_damage.rvmat"}},{0.0,{"DZ\weapons\melee\powered\Data\chainsaw_destruct.rvmat"}}};
				};
			};
		};
		class flame
		{
			sound = "Sound_FlareFlame";
			texture = "dz\gear\consumables\data\flame_red_ca.paa";
		};
	};
	class CattleProd: Powered_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_CattleProd0";
		descriptionShort = "$STR_CfgVehicles_CattleProd1";
		model = "\dz\gear\tools\Catle_Prod.p3d";
		inventorySlot = "Melee";
		SingleUseActions[] = {509,510};
		rotationFlags = 1;
		autoQuickbar = 1;
		weight = 2700;
		itemSize[] = {2,5};
		fragility = 0.008;
		lootTag[] = {"Farm"};
		lootCategory = "Tools";
		energyResources[] = {{"power",0.1}};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\powered\Data\chainsaw.rvmat"}},{0.5,{"DZ\weapons\melee\powered\Data\chainsaw_damage.rvmat"}},{0.0,{"DZ\weapons\melee\powered\Data\chainsaw_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			plugType = 1;
			energyUsagePerSecond = 1.5;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.6;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.6;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.2;
			};
			class Default_SwitchedOn
			{
				ammo = "MeleeLightBluntShock";
				range = 1.6;
			};
			class Heavy_SwitchedOn
			{
				ammo = "MeleeLightBluntShock_Heavy";
				range = 1.6;
			};
			class Sprint_SwitchedOn
			{
				ammo = "MeleeLightBluntShock_Heavy";
				range = 2.2;
			};
		};
	};
	class StunBaton: Powered_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_StunBaton0";
		descriptionShort = "$STR_CfgVehicles_StunBaton1";
		model = "\dz\weapons\melee\powered\Stun_Baton.p3d";
		inventorySlot = "Melee";
		SingleUseActions[] = {509,510};
		rotationFlags = 1;
		autoQuickbar = 1;
		weight = 800;
		itemSize[] = {2,3};
		fragility = 0.008;
		lootTag[] = {"Police"};
		lootCategory = "Tools";
		energyResources[] = {{"power",0.1}};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\weapons\melee\powered\Data\Stun_Baton.rvmat"}},{0.5,{"DZ\weapons\melee\powered\Data\Stun_Baton_damage.rvmat"}},{0.0,{"DZ\weapons\melee\powered\Data\Stun_Baton_destruct.rvmat"}}};
				};
			};
		};
		class EnergyManager
		{
			hasIcon = 1;
			plugType = 1;
			energyUsagePerSecond = 3;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1.5;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1.5;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.0;
			};
			class Default_SwitchedOn
			{
				ammo = "MeleeLightBluntShock";
				range = 1.5;
			};
			class Heavy_SwitchedOn
			{
				ammo = "MeleeLightBluntShock_Heavy";
				range = 1.5;
			};
			class Sprint_SwitchedOn
			{
				ammo = "MeleeLightBluntShock_Heavy";
				range = 2.0;
			};
		};
	};
};
//};

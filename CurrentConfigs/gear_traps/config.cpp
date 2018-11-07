////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 17:12:26 2018 : 'file' last modified on Wed Aug 22 17:50:12 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\gear_traps\config.bin{
class RecipeToolOnTool;
class CfgRecipes
{
	class CraftTripWireMetal: RecipeToolOnTool
	{
		name = "Craft tripwire from %TOOL1 and %TOOL2";
		tools[] = {"Crafting_WoodenStick","Crafting_MetalWire"};
		results[] = {"Trap_TripWire"};
		condition = "quantity _tool1 > 1 && damage _tool1 < 0.75 && damage _tool2 < 0.75";
		action = "_dmg = (0.5*damage _tool1) + (0.5*damage _tool2); _tool1 addQuantity -2; deleteVehicle _tool2; if (quantity _tool1 < 1) then {deleteVehicle _tool1}; _result1 setDamage _dmg; [_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage; _result1 callMethod ['SetStringType', 0];";
	};
	class CraftTripWireBarb: RecipeToolOnTool
	{
		name = "Craft tripwire from %TOOL1 and %TOOL2";
		tools[] = {"Crafting_WoodenStick","Fence_BarbedWire"};
		results[] = {"Trap_TripWire"};
		condition = "quantity _tool1 > 1 && damage _tool1 < 0.75 && damage _tool2 < 0.75";
		action = "_dmg = (0.5*damage _tool1) + (0.5*damage _tool2); _tool1 addQuantity -2; deleteVehicle _tool2; if (quantity _tool1 < 1) then {deleteVehicle _tool1}; _result1 setDamage _dmg; [_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage; _result1 callMethod ['SetStringType', 1];";
	};
	class Craft_TrapSmallFish: RecipeToolOnTool
	{
		name = "Craft small fish trap from %TOOL1 and %TOOL2";
		tools[] = {"Drink_WaterBottle","KnifeBase"};
		results[] = {"Trap_SmallFish"};
		condition = "damage _tool1 < 1 && damage _tool2 < 1";
		action = "_dmg = (0.5*damage _tool1) + (0.5*damage _tool2); deleteVehicle _tool1; _result1 setDamage _dmg; [_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class Craft_TrapFishNet: RecipeToolOnTool
	{
		name = "Craft fish net from %TOOL1 and %TOOL2";
		tools[] = {"Consumable_Netting","Crafting_MetalWire"};
		results[] = {"Trap_FishNet"};
		condition = "damage _tool1 < 0.75 && damage _tool2 < 0.75";
		action = "_dmg = (0.5*damage _tool1) + (0.5*damage _tool2); _tool1 addQuantity -1; if (quantity _tool1 < 1) then {deleteVehicle _tool1}; deleteVehicle _tool2; _result1 setDamage _dmg; [_owner,format['I have made a %1.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class CraftRabbitSnare: RecipeToolOnTool
	{
		name = "Craft snare trap from %TOOL1 and %TOOL2";
		tools[] = {"Crafting_MetalWire","Crafting_WoodenStick"};
		condition = "damage _tool1 < 1  &&  damage _tool2 < 1";
		results[] = {"Trap_RabbitSnare"};
		action = "_result1 setDamage (damage _tool1 + damage _tool2 )/2;  _tool2 addQuantity -1;  if (quantity _tool2 < 1) then {deleteVehicle _tool2};  deleteVehicle _tool1;  [_owner,format['I have made a snare trap.',displayName _result1],'colorAction'] call fnc_playerMessage;";
	};
	class Decraft_SnareTrap
	{
		name = "Break down into wooden stick";
		condition = "_owner getVariable ['isUsingSomething',0] == 0";
		material[] = {"Trap_RabbitSnare"};
		results[] = {"Crafting_WoodenStick"};
		action = "_result1 setQuantity 1;  _result1 setdamage (damage _material1);  [_owner,format['I have broken down the %1, but ruined the wire while doing it.',displayName _material1],'colorAction'] call fnc_playerMessage";
	};
	class Decraft_Trap_TripWireMetal
	{
		name = "Break down into Wooden stick and Metal wire";
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && _material1 callMethod ['GetStringType'] == 0;";
		material[] = {"Trap_TripWire"};
		results[] = {"Crafting_WoodenStick","Crafting_MetalWire"};
		action = "_result1 setQuantity 2;  _result1 setdamage (damage _material1); _result2 setQuantity 1;  _result2 setdamage (damage _material1); [_owner,format['I have broken down the %1.',displayName _material1],'colorAction'] call fnc_playerMessage";
	};
	class Decraft_Trap_TripWireBarb
	{
		name = "Break down into Wooden stick and Barbed wire";
		condition = "_owner getVariable ['isUsingSomething',0] == 0 && _material1 callMethod ['GetStringType'] == 1;";
		material[] = {"Trap_TripWire"};
		results[] = {"Crafting_WoodenStick","Fence_BarbedWire"};
		action = "_result1 setQuantity 2;  _result1 setdamage (damage _material1); _result2 setQuantity 1;  _result2 setdamage (damage _material1); [_owner,format['I have broken down the %1.',displayName _material1],'colorAction'] call fnc_playerMessage";
	};
};
class CfgPatches
{
	class DZ_Gear_Traps
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgAmmo
{
	class DefaultAmmo;
	class LandMineExplosion: DefaultAmmo
	{
		hit = 60;
		indirectHit = 28;
		indirectHitRange = 7;
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
			Health = 99;
			Blood = 500;
			Shock = 500;
		};
	};
};
class CfgVehicles
{
	class Trap_Base;
	class BearTrap: Trap_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_BearTrap0";
		descriptionShort = "$STR_CfgVehicles_BearTrap1";
		model = "\DZ\gear\traps\beartrap.p3d";
		itemSize[] = {6,4};
		weight = 12000;
		lootTag[] = {"Hunting","Forester","Work"};
		SingleUseActions[] = {560,527};
		ContinuousActions[] = {231};
		hiddenSelections[] = {"placing"};
		hiddenSelectionsTextures[] = {"dz\gear\traps\data\beartrap_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\traps\data\beartrap.rvmat"};
		hologramMaterial = "beartrap";
		hologramMaterialPath = "dz\gear\traps\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\traps\data\beartrap.rvmat"}},{0.5,{"DZ\gear\traps\data\beartrap_damage.rvmat"}},{0.0,{"DZ\gear\traps\data\beartrap_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class BearTrap_Set
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class inventory
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class beartrap_start
				{
					soundSet = "beartrap_start_SoundSet";
					id = 1;
				};
				class beartrap_loop
				{
					soundSet = "beartrap_loop_SoundSet";
					id = 2;
				};
				class beartrap_end
				{
					soundSet = "beartrap_end_SoundSet";
					id = 3;
				};
			};
		};
	};
	class LandMineTrap: Trap_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_LandMineTrap0";
		descriptionShort = "$STR_CfgVehicles_LandMineTrap1";
		model = "\DZ\gear\traps\landmine.p3d";
		weight = 1670;
		itemSize[] = {3,3};
		SingleUseActions[] = {527};
		InteractActions[] = {233};
		ContinuousActions[] = {231};
		hiddenSelections[] = {"placing"};
		hiddenSelectionsTextures[] = {"dz\gear\traps\data\landmine_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\traps\data\landmine.rvmat"};
		hologramMaterial = "landmine";
		hologramMaterialPath = "dz\gear\traps\data";
		ammoType = "LandMineExplosion";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\traps\data\landmine.rvmat"}},{0.5,{"DZ\gear\traps\data\landmine_damage.rvmat"}},{0.0,{"DZ\gear\traps\data\landmine_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class safety_pin
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class landmine_start
				{
					soundSet = "landmine_start_SoundSet";
					id = 1;
				};
				class landmine_loop
				{
					soundSet = "landmine_loop_SoundSet";
					id = 2;
				};
				class landmine_end
				{
					soundSet = "landmine_end_SoundSet";
					id = 3;
				};
			};
		};
	};
	class SmallFishTrap: Trap_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_SmallFishTrap0";
		descriptionShort = "$STR_CfgVehicles_SmallFishTrap1";
		model = "\dz\gear\tools\improvised_fish_trap.p3d";
		lootCategory = "Crafted";
		rotationFlags = 17;
		weight = 60;
		itemSize[] = {2,3};
		itemsCargoSize[] = {1,2};
		allowOwnedCargoManipulation = 1;
		SingleUseActions[] = {527};
		ContinuousActions[] = {231,182,176,169,189,160,108,225,226,234,106};
		hiddenSelections[] = {"placing"};
		hiddenSelectionsTextures[] = {"dz\gear\drinks\Data\Loot_WaterBottle_CA.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\drinks\Data\Loot_WaterBottle.rvmat"};
		hologramMaterial = "Loot_WaterBottle";
		hologramMaterialPath = "dz\gear\drinks\data";
		stackedUnit = "ml";
		destroyOnEmpty = 0;
		varQuantityDestroyOnMin = 0;
		quantityBar = 1;
		liquidContainerType = "1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		varQuantityInit = 0.0;
		varQuantityMin = 0.0;
		varQuantityMax = 500.0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"}},{0.5,{"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"}},{0.0,{"DZ\gear\drinks\data\Loot_WaterBottle_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class inventory
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class fishtrap_start
				{
					soundSet = "fishtrap_start_SoundSet";
					id = 1;
				};
				class fishtrap_loop
				{
					soundSet = "fishtrap_loop_SoundSet";
					id = 2;
				};
				class fishtrap_end
				{
					soundSet = "fishtrap_end_SoundSet";
					id = 3;
				};
			};
		};
	};
	class FishNetTrap: Trap_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_FishNetTrap0";
		descriptionShort = "$STR_CfgVehicles_FishNetTrap1";
		model = "\dz\gear\traps\fishnettrap.p3d";
		lootCategory = "Crafted";
		weight = 60;
		itemSize[] = {2,3};
		itemsCargoSize[] = {2,3};
		allowOwnedCargoManipulation = 1;
		SingleUseActions[] = {527};
		ContinuousActions[] = {231};
		hiddenSelections[] = {"placing"};
		hiddenSelectionsTextures[] = {"dz\gear\traps\data\fishnettrap_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\traps\data\fishnettrap.rvmat"};
		hologramMaterial = "fishnettrap";
		hologramMaterialPath = "dz\gear\traps\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\drinks\data\Loot_WaterBottle.rvmat"}},{0.5,{"DZ\gear\drinks\data\Loot_WaterBottle_damage.rvmat"}},{0.0,{"DZ\gear\drinks\data\Loot_WaterBottle_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class inventory
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class fishnet_start
				{
					soundSet = "fishnet_start_SoundSet";
					id = 1;
				};
				class fishnet_loop
				{
					soundSet = "fishnet_loop_SoundSet";
					id = 2;
				};
				class fishnet_end
				{
					soundSet = "fishnet_end_SoundSet";
					id = 3;
				};
			};
		};
	};
	class TripwireTrap: Trap_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_TripwireTrap0";
		descriptionShort = "$STR_CfgVehicles_TripwireTrap1";
		model = "\dz\gear\traps\tripwire.p3d";
		rotationFlags = 16;
		lootCategory = "Crafted";
		attachments[] = {"tripWireAttachment"};
		weight = 60;
		itemSize[] = {2,3};
		SingleUseActions[] = {527};
		ContinuousActions[] = {231};
		hiddenSelections[] = {"placing"};
		hiddenSelectionsTextures[] = {"dz\gear\crafting\data\rabbit_snare_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\crafting\data\rabbit_snare.rvmat"};
		hologramMaterial = "rabbit_snare";
		hologramMaterialPath = "dz\gear\crafting\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\crafting\data\rabbit_snare.rvmat"}},{0.5,{"DZ\gear\crafting\data\rabbit_snare_damage.rvmat"}},{0.0,{"DZ\gear\crafting\data\rabbit_snare_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class HiddenByDefault
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class ShownByDefault
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class inventory: ShownByDefault{};
			class placing: HiddenByDefault{};
			class TripWire_set_can: HiddenByDefault{};
			class TripWire_set_grenade: HiddenByDefault{};
			class TripWire_triggered: HiddenByDefault{};
			class s1_flashbang: HiddenByDefault{};
			class s1_frag_RGD5: HiddenByDefault{};
			class s1_grenade: HiddenByDefault{};
			class s1_Road_flare: HiddenByDefault{};
			class s1_smokegrenade: HiddenByDefault{};
			class s1_smokegrenade_rdg2: HiddenByDefault{};
			class s1_SodaCan_Used: HiddenByDefault{};
			class s2_flashbang: HiddenByDefault{};
			class s2_frag_RGD5: HiddenByDefault{};
			class s2_grenade: HiddenByDefault{};
			class s2_Road_flare: HiddenByDefault{};
			class s2_smokegrenade: HiddenByDefault{};
			class s2_smokegrenade_rdg2: HiddenByDefault{};
			class s2_SodaCan_Used: HiddenByDefault{};
			class s3_flashbang: HiddenByDefault{};
			class s3_frag_RGD5: HiddenByDefault{};
			class s3_grenade: HiddenByDefault{};
			class s3_Road_flare: HiddenByDefault{};
			class s3_smokegrenade: HiddenByDefault{};
			class s3_smokegrenade_rdg2: HiddenByDefault{};
			class s3_SodaCan_Used: HiddenByDefault{};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class tripwire_start
				{
					soundSet = "tripwire_start_SoundSet";
					id = 1;
				};
				class tripwire_loop
				{
					soundSet = "tripwire_loop_SoundSet";
					id = 2;
				};
				class tripwire_end
				{
					soundSet = "tripwire_end_SoundSet";
					id = 3;
				};
			};
		};
	};
	class RabbitSnareTrap: Trap_Base
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_RabbitSnareTrap0";
		descriptionShort = "$STR_CfgVehicles_RabbitSnareTrap1";
		model = "\dz\gear\crafting\rabbit_snare.p3d";
		rotationFlags = 16;
		lootCategory = "Crafted";
		weight = 240;
		itemSize[] = {2,2};
		SingleUseActions[] = {527};
		ContinuousActions[] = {231};
		hiddenSelections[] = {"placing"};
		hiddenSelectionsTextures[] = {"dz\gear\crafting\data\rabbit_snare_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\gear\crafting\data\rabbit_snare.rvmat"};
		hologramMaterial = "rabbit_snare";
		hologramMaterialPath = "dz\gear\crafting\data";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
					healthLevels[] = {{1.0,{"DZ\gear\crafting\data\rabbit_snare.rvmat"}},{0.5,{"DZ\gear\crafting\data\rabbit_snare_damage.rvmat"}},{0.0,{"DZ\gear\crafting\data\rabbit_snare_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
		{
			class inventory
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
			class placing
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
			};
			class rabbit_snare_used
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
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
	class AnimEvents
	{
		class SoundWeapon
		{
			class rabbitsnare_start
			{
				soundSet = "rabbitsnare_start_SoundSet";
				id = 1;
			};
			class rabbitsnare_loop
			{
				soundSet = "rabbitsnare_loop_SoundSet";
				id = 2;
			};
			class rabbitsnare_end
			{
				soundSet = "rabbitsnare_end_SoundSet";
				id = 3;
			};
		};
	};
};
//};

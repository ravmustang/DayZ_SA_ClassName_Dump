////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:01:48 2018 : 'file' last modified on Wed Aug 22 14:53:49 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\animals\ovis_aries\config.bin{
class CfgPatches
{
	class DZ_Animals_ovis_aries
	{
		units[] = {"Animal_OvisAries"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class Animal_OvisAries: AnimalBase
	{
		simulation = "dayzanimal";
		scope = 2;
		model = "\DZ\animals\ovis_aries\ovis_aries.p3d";
		displayName = "$STR_CfgVehicles_Animal_OvisAries0";
		aiAgentTemplate = "Herbivores_OvisAries";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
				};
				healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				class Blood
				{
					hitpoints = 5000;
				};
				class Shock
				{
					hitpoints = 5000;
				};
			};
			class DamageZones
			{
				class Zone_Belly
				{
					bleedChance = 1;
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							Health = 0.66;
							Blood = 5;
							Shock = 0;
						};
						class Projectile
						{
							Health = 1.0;
							Blood = 5;
							Shock = 0;
						};
					};
					componentNames[] = {"Zone_Belly"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
				};
				class Zone_Chest
				{
					bleedChance = 1;
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							Health = 0.33;
							Blood = 5;
							Shock = 0;
						};
						class Projectile
						{
							Health = 2;
							Blood = 0;
							Shock = 0;
						};
					};
					componentNames[] = {"Zone_Chest"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
				};
				class Zone_Head
				{
					bleedChance = 1;
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							Health = 10;
							Blood = 0;
							Shock = 0;
						};
						class Projectile
						{
							Health = 2;
							Blood = 0;
							Shock = 0;
						};
					};
					componentNames[] = {"Zone_Head"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
				};
				class Zone_Legs
				{
					bleedChance = 0;
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							Health = 0.1;
							Blood = 0;
							Shock = 0;
						};
						class Projectile
						{
							Health = 0.1;
							Blood = 0;
							Shock = 0;
						};
					};
					componentNames[] = {"Zone_Legs"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
				};
				class Zone_Neck
				{
					bleedChance = 0.5;
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							Health = 0.66;
							Blood = 5;
							Shock = 0;
						};
						class Projectile
						{
							Health = 1.0;
							Blood = 5;
							Shock = 0;
						};
					};
					componentNames[] = {"Zone_Neck"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
				};
				class Zone_Pelvis
				{
					bleedChance = 0;
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							Health = 0.2;
							Blood = 0;
							Shock = 0;
						};
						class Projectile
						{
							Health = 1.0;
							Blood = 0;
							Shock = 0;
						};
					};
					componentNames[] = {"Zone_Pelvis"};
					transferToZonesNames[] = {"Zone_Spine"};
					transferToZonesCoefs[] = {0.5};
					fatalInjuryCoef = 0.1;
				};
				class Zone_Spine
				{
					bleedChance = 1;
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 1;
					};
					class ArmorType
					{
						class Melee
						{
							Health = 0.66;
							Blood = 1;
							Shock = 0;
						};
						class Projectile
						{
							Health = 1.0;
							Blood = 1;
							Shock = 0;
						};
					};
					componentNames[] = {"Zone_Spine"};
					transferToZonesNames[] = {};
					transferToZonesCoefs[] = {};
					fatalInjuryCoef = 0.1;
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "SheepSteakMeat";
				count = 13;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedPelt
			{
				item = "SheepPelt";
				count = 1;
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 0;
				quantityMinMaxCoef[] = {0.2,0.4};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 0;
				quantityMinMaxCoef[] = {0.4,8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 2;
				quantityMinMaxCoef[] = {0.8,1};
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\ovis_aries_fem\data\sheep_and_ram_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Herbivores\Herbivores_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Herbivores\OvisAries_AnimInstance.asi";
			startnode = "Master_GoatAndSheep_SM";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "HoofSmallWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "HoofSmallWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "HoofSmallWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "HoofSmallWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "HoofSmallRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "HoofSmallRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "HoofSmallRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "HoofSmallRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 8;
				};
				class Grazing1
				{
					soundLookupTable = "HoofSmallGrazing_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 9;
				};
				class Grazing2
				{
					soundLookupTable = "HoofSmallGrazing_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 10;
				};
				class Bodyfall
				{
					soundLookupTable = "HoofSmallBodyfall_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "HoofSmallSettle_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "HoofSmallRest2standA_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "HoofSmallRest2standB_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "HoofSmallStand2restA_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "HoofSmallStand2restB_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "HoofSmallStand2restC_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 17;
				};
				class Rub1
				{
					soundLookupTable = "HoofSmallRub1_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 18;
				};
				class Rub2
				{
					soundLookupTable = "HoofSmallRub2_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 19;
				};
			};
			class Sounds
			{
				class SheepBleat_A
				{
					soundSet = "SheepBleat_A_SoundSet";
					noise = "DeerRoarNoise";
					id = 1;
				};
				class SheepBleat_B
				{
					soundSet = "SheepBleat_B_SoundSet";
					noise = "DeerRoarNoise";
					id = 2;
				};
				class SheepBleat_C
				{
					soundSet = "SheepBleat_C_SoundSet";
					noise = "DeerRoarNoise";
					id = 3;
				};
				class SheepBleat_D
				{
					soundSet = "SheepBleat_D_SoundSet";
					noise = "DeerRoarNoise";
					id = 4;
				};
				class SheepBleat_E
				{
					soundSet = "SheepBleat_E_SoundSet";
					noise = "DeerRoarNoise";
					id = 5;
				};
				class SheepBleat_F
				{
					soundSet = "SheepBleat_F_SoundSet";
					noise = "DeerRoarNoise";
					id = 6;
				};
				class SheepBleat_G
				{
					soundSet = "SheepBleat_G_SoundSet";
					noise = "DeerRoarNoise";
					id = 7;
				};
				class SheepBleat_H
				{
					soundSet = "SheepBleat_H_SoundSet";
					noise = "DeerRoarNoise";
					id = 8;
				};
			};
			class Damages
			{
				class Bite
				{
					damage = "DeerBiteDamage";
					id = 1;
				};
			};
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0.0,0.091,0.3,1.3,3.53,8.63};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
	};
};
//};

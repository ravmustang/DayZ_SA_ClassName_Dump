////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:02:07 2018 : 'file' last modified on Wed Aug 22 14:53:49 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\animals\sus_domesticus\config.bin{
class CfgPatches
{
	class DZ_Animals_sus_domesticus
	{
		units[] = {"Animal_SusDomesticus"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class Animal_SusDomesticus: AnimalBase
	{
		simulation = "dayzanimal";
		scope = 2;
		model = "\DZ\animals\sus_domesticus\sus_domesticus.p3d";
		displayName = "$STR_CfgVehicles_Animal_SusDomesticus0";
		aiAgentTemplate = "Herbivores_SusDomesticus";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
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
							Health = 0.66;
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
							Health = 0.66;
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
							Health = 0.2;
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
							Health = 0.66;
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
				item = "PigSteakMeat";
				count = 14;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedPelt
			{
				item = "PigPelt";
				count = 1;
				quantityCoef = 1;
				transferToolDamageCoef = 1;
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 0;
				quantityMinMaxCoef[] = {0.4,0.8};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 0;
				quantityMinMaxCoef[] = {0.5,0.8};
			};
			class ObtainedBones
			{
				item = "Bone";
				count = 0;
				quantityMinMaxCoef[] = {0.8,1};
				transferToolDamageCoef = 1;
			};
		};
		class enfanimsys
		{
			meshObject = "dz\animals\sus_domesticus\data\sus_domesticus_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Herbivores\Herbivores_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Herbivores\Pig_AnimInstance.asi";
			startnode = "Master_BoarAndPig_SM";
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0.0,0.23,0.48,1.59,4.0,7.2};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 3.0;
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
				class HogGrunt_A
				{
					soundSet = "HogGrunt_A_SoundSet";
					noise = "DeerRoarNoise";
					id = 1;
				};
				class HogGrunt_A_Squeal
				{
					soundSet = "HogGrunt_A_Squeal_SoundSet";
					noise = "DeerRoarNoise";
					id = 2;
				};
				class HogGrunt_B
				{
					soundSet = "HogGrunt_B_SoundSet";
					noise = "DeerRoarNoise";
					id = 3;
				};
				class HogGrunt_B_Long
				{
					soundSet = "HogGrunt_B_Long_SoundSet";
					noise = "DeerRoarNoise";
					id = 4;
				};
				class HogGrunt_C
				{
					soundSet = "HogGrunt_C_SoundSet";
					noise = "DeerRoarNoise";
					id = 5;
				};
				class HogGrunt_D
				{
					soundSet = "HogGrunt_D_SoundSet";
					noise = "DeerRoarNoise";
					id = 6;
				};
				class HogGrunt_E
				{
					soundSet = "HogGrunt_E_SoundSet";
					noise = "DeerRoarNoise";
					id = 7;
				};
				class HogGrunt_F
				{
					soundSet = "HogGrunt_F_SoundSet";
					noise = "DeerRoarNoise";
					id = 8;
				};
				class HogGrunt_G
				{
					soundSet = "HogGrunt_G_SoundSet";
					noise = "DeerRoarNoise";
					id = 9;
				};
				class HogGrunt_H
				{
					soundSet = "HogGrunt_H_SoundSet";
					noise = "DeerRoarNoise";
					id = 10;
				};
				class HogGrunt_I
				{
					soundSet = "HogGrunt_I_SoundSet";
					noise = "DeerRoarNoise";
					id = 11;
				};
				class HogSniff
				{
					soundSet = "HogSniff_SoundSet";
					noise = "DeerRoarNoise";
					id = 12;
				};
				class HogSqueal
				{
					soundSet = "HogSqueal_SoundSet";
					noise = "DeerRoarNoise";
					id = 13;
				};
				class HogScratch3
				{
					soundSet = "HogSscratch3_SoundSet";
					noise = "DeerRoarNoise";
					id = 14;
				};
				class HogScratch4
				{
					soundSet = "HogSscratch4_SoundSet";
					noise = "DeerRoarNoise";
					id = 15;
				};
				class HogClaw
				{
					soundSet = "HogClaw_SoundSet";
					noise = "DeerRoarNoise";
					id = 16;
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
	};
};
//};

////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:00:55 2018 : 'file' last modified on Wed Aug 22 14:53:48 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\animals\capreolus_capreolus_fem\config.bin{
class CfgPatches
{
	class DZ_Animals_capreolus_capreolus_fem
	{
		units[] = {"Animal_CapreolusCapreolusF"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class Animal_CapreolusCapreolusF: AnimalBase
	{
		simulation = "dayzanimal";
		scope = 2;
		model = "\DZ\animals\capreolus_capreolus_fem\capreolus_capreolus_fem.p3d";
		displayName = "$STR_CfgVehicles_Animal_CapreolusCapreolusF0";
		aiAgentTemplate = "Herbivores_CapreolusCapreolus";
		injuryLevels[] = {1.0,0.5,0.2,0.0};
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
						transferToGlobalCoef = 0;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
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
						transferToGlobalCoef = 0;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
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
						transferToGlobalCoef = 0;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
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
						transferToGlobalCoef = 0;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
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
						transferToGlobalCoef = 0;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
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
						transferToGlobalCoef = 0;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
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
						transferToGlobalCoef = 0;
					};
					class Blood
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
					};
					class Shock
					{
						hitpoints = 5000;
						transferToGlobalCoef = 0;
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
				item = "DeerSteakMeat";
				count = 10;
				quantityMinMaxCoef[] = {0.3,7};
			};
			class ObtainedGuts
			{
				item = "Guts";
				count = 0;
				quantityMinMaxCoef[] = {0.25,0.5};
			};
			class ObtainedLard
			{
				item = "Lard";
				count = 0;
				quantityMinMaxCoef[] = {0.2,0.5};
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
			meshObject = "dz\animals\capreolus_capreolus\data\capreolus_capreolus_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Herbivores\Herbivores_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Herbivores\RoeDeerSkeleton_AnimInstance.asi";
			startnode = "MasterDeers_SM";
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable = "HoofMediumWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 1;
				};
				class Walk2
				{
					soundLookupTable = "HoofMediumWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 2;
				};
				class Walk3
				{
					soundLookupTable = "HoofMediumWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 3;
				};
				class Walk4
				{
					soundLookupTable = "HoofMediumWalk_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 4;
				};
				class Run1
				{
					soundLookupTable = "HoofMediumRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 5;
				};
				class Run2
				{
					soundLookupTable = "HoofMediumRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 6;
				};
				class Run3
				{
					soundLookupTable = "HoofMediumRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 7;
				};
				class Run4
				{
					soundLookupTable = "HoofMediumRun_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 8;
				};
				class Grazing1
				{
					soundLookupTable = "HoofMediumGrazing_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 9;
				};
				class Grazing2
				{
					soundLookupTable = "HoofMediumGrazing_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 10;
				};
				class Bodyfall
				{
					soundLookupTable = "HoofMediumBodyfall_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 11;
				};
				class Settle
				{
					soundLookupTable = "HoofMediumSettle_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 12;
				};
				class Rest2standA
				{
					soundLookupTable = "HoofMediumRest2standA_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 13;
				};
				class Rest2standB
				{
					soundLookupTable = "HoofMediumRest2standB_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 14;
				};
				class Stand2restA
				{
					soundLookupTable = "HoofMediumStand2restA_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 15;
				};
				class Stand2restB
				{
					soundLookupTable = "HoofMediumStand2restB_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 16;
				};
				class Stand2restC
				{
					soundLookupTable = "HoofMediumStand2restC_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 17;
				};
				class Rub1
				{
					soundLookupTable = "HoofMediumRub1_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 18;
				};
				class Rub2
				{
					soundLookupTable = "HoofMediumRub2_LookupTable";
					noise = "DeerStepNoise";
					effectSet[] = {"DeerStepEffect1","DeerStepEffect2"};
					id = 19;
				};
			};
			class Sounds
			{
				class DeerBleat
				{
					soundSet = "DeerBleat_SoundSet";
					noise = "DeerRoarNoise";
					id = 1;
				};
				class DoeBleat
				{
					soundSet = "DoeBleat_SoundSet";
					noise = "DeerRoarNoise";
					id = 2;
				};
				class DeerBreath
				{
					soundSet = "DeerBreath_SoundSet";
					noise = "DeerRoarNoise";
					id = 3;
				};
				class DeerBark
				{
					soundSet = "DeerBark_SoundSet";
					noise = "DeerRoarNoise";
					id = 4;
				};
				class DoeBark
				{
					soundSet = "DoeBark_SoundSet";
					noise = "DeerRoarNoise";
					id = 5;
				};
				class RoeBark
				{
					soundSet = "RoeBark_SoundSet";
					noise = "DeerRoarNoise";
					id = 6;
				};
				class DeerCall
				{
					soundSet = "DeerCall_SoundSet";
					noise = "DeerRoarNoise";
					id = 7;
				};
				class DeerCallFear
				{
					soundSet = "DeerCallFear_SoundSet";
					noise = "DeerRoarNoise";
					id = 8;
				};
				class DeerGrunt
				{
					soundSet = "DeerGrunt_SoundSet";
					noise = "DeerRoarNoise";
					id = 9;
				};
				class DeerRoar
				{
					soundSet = "DeerRoar_SoundSet";
					noise = "DeerRoarNoise";
					id = 10;
				};
				class DeerRoarLong
				{
					soundSet = "DeerRoarLong_SoundSet";
					noise = "DeerRoarNoise";
					id = 11;
				};
				class DeerRoarShort
				{
					soundSet = "DeerRoarShort_SoundSet";
					noise = "DeerRoarNoise";
					id = 12;
				};
				class DeerSnort
				{
					soundSet = "DeerSnort_SoundSet";
					noise = "DeerRoarNoise";
					id = 13;
				};
				class DoeBarkX1
				{
					soundSet = "DoeBarkX1_SoundSet";
					noise = "DeerRoarNoise";
					id = 14;
				};
				class DoeBarkX1_Tail
				{
					soundSet = "DoeBarkX1_Tail_SoundSet";
					noise = "DeerRoarNoise";
					id = 15;
				};
				class DoeBarkX2
				{
					soundSet = "DoeBarkX2_SoundSet";
					noise = "DeerRoarNoise";
					id = 16;
				};
				class DoeBarkX2_Tail
				{
					soundSet = "DoeBarkX2_Tail_SoundSet";
					noise = "DeerRoarNoise";
					id = 17;
				};
				class DoeBarkX3
				{
					soundSet = "DoeBarkX3_SoundSet";
					noise = "DeerRoarNoise";
					id = 18;
				};
				class DoeBarkX3_Tail
				{
					soundSet = "DoeBarkX3_Tail_SoundSet";
					noise = "DeerRoarNoise";
					id = 19;
				};
				class DoeBarkX4
				{
					soundSet = "DoeBarkX4_SoundSet";
					noise = "DeerRoarNoise";
					id = 20;
				};
				class DoeBarkX4_Tail
				{
					soundSet = "DoeBarkX4_Tail_SoundSet";
					noise = "DeerRoarNoise";
					id = 21;
				};
				class DoeBarkX5
				{
					soundSet = "DoeBarkX5_SoundSet";
					noise = "DeerRoarNoise";
					id = 22;
				};
				class DoeBarkX5_Tail
				{
					soundSet = "DoeBarkX5_Tail_SoundSet";
					noise = "DeerRoarNoise";
					id = 23;
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
			movementSpeedMapping[] = {0.0,0.13,0.53,2.13,4.41,11.76};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
	};
};
//};

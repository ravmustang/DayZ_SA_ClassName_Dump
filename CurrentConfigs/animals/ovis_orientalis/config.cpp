////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.69
//'now' is Tue Nov 06 20:02:00 2018 : 'file' last modified on Wed Aug 22 14:53:49 2018
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

//Class E:\SteamLibrary\steamapps\common\DayZ\Addons\animals\ovis_orientalis\config.bin{
class CfgPatches
{
	class DZ_Animals_ovis_orientalis
	{
		units[] = {"Animal_OvisOrientalis"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class Animal_OvisOrientalis: AnimalBase
	{
		simulation = "dayzanimal";
		scope = 2;
		model = "\DZ\animals\ovis_orientalis\ovis_orientalis.p3d";
		displayName = "$STR_CfgVehicles_Animal_OvisOrientalis0";
		aiAgentTemplate = "Herbivores_OvisAries";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1;
					healthLabels[] = {1.0,0.7,0.5,0.3,0.0};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					Health = 0.01;
					Blood = 0;
					Shock = 0.25;
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "MouflonSteakMeat";
				count = 13;
				quantityMinMaxCoef[] = {0.5,1};
			};
			class ObtainedPelt
			{
				item = "MouflonPelt";
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
			meshObject = "dz\animals\capra_hircus\Data\capra_hircus_skeleton.xob";
			graphname = "dz\animals\animations\!graph_files\Herbivores\Herbivores_Graph.agr";
			defaultinstance = "dz\animals\animations\!graph_files\Herbivores\GoatSkeleton_AnimInstance.asi";
			startnode = "Master_GoatAndSheep_SM";
		};
		class CommandMoveSettings
		{
			useSpeedMapping = 1;
			movementSpeedMapping[] = {0.0,0.25,0.8,2.51,6.0,17.0};
		};
		class CommandLookAtSettings
		{
			lookAtFilterTimeout = 0.5;
			lookAtFilterSpeed = 1.57;
		};
		class AnimSystem
		{
			class AnimEventSounds
			{
				class hog_grunt_a
				{
					sounds[] = {"DZ\sounds\effects\animals\hog\grunt_a\grunt_a_0","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_1","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_2","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_3","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_4","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_5","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_6","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_7","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_8","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_9","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_10","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_11","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_12","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_13","DZ\sounds\effects\animals\hog\grunt_a\grunt_a_14","DZ\sounds\effects\animals\0\1","DZ\sounds\effects\animals\wild_boar\2","DZ\sounds\effects\animals\0\3","DZ\sounds\effects\animals\0\4"};
					volume = 1;
					distance = 70;
				};
				class hog_grunt_a_squeal
				{
					sounds[] = {"DZ\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0","DZ\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1","DZ\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2"};
					volume = 1;
					distance = 70;
				};
				class hog_grunt_b
				{
					sounds[] = {"DZ\sounds\effects\animals\hog\grunt_b\grunt_b_0","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_1","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_2","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_3","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_4","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_5","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_6","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_7","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_8","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_9","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_10","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_11","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_12","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_13","DZ\sounds\effects\animals\hog\grunt_b\grunt_b_14","DZ\sounds\effects\animals\0\1","DZ\sounds\effects\animals\wild_boar\2","DZ\sounds\effects\animals\0\3","DZ\sounds\effects\animals\0\4"};
					volume = 1;
					distance = 70;
				};
				class hog_grunt_c
				{
					sounds[] = {"DZ\sounds\effects\animals\hog\grunt_c\grunt_c_0","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_1","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_2","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_3","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_4","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_5","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_6","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_7","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_8","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_9","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_10","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_11","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_12","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_13","DZ\sounds\effects\animals\hog\grunt_c\grunt_c_14","DZ\sounds\effects\animals\0\1","DZ\sounds\effects\animals\wild_boar\2","DZ\sounds\effects\animals\0\3","DZ\sounds\effects\animals\0\4"};
					volume = 1;
					distance = 70;
				};
				class hog_grunt_d
				{
					sounds[] = {"DZ\sounds\effects\animals\hog\grunt_d\grunt_d_0","DZ\sounds\effects\animals\hog\grunt_d\grunt_d_1","DZ\sounds\effects\animals\hog\grunt_d\grunt_d_2"};
					volume = 1;
					distance = 70;
				};
				class hog_grunt_e
				{
					sounds[] = {"DZ\sounds\effects\animals\hog\grunt_e\grunt_e_0","DZ\sounds\effects\animals\hog\grunt_e\grunt_e_1","DZ\sounds\effects\animals\hog\grunt_e\grunt_e_2","DZ\sounds\effects\animals\hog\grunt_e\grunt_e_3","DZ\sounds\effects\animals\hog\grunt_e\grunt_e_4","DZ\sounds\effects\animals\hog\grunt_e\grunt_e_5"};
					volume = 1;
					distance = 70;
				};
				class hog_grunt_f
				{
					sounds[] = {"DZ\sounds\effects\animals\hog\grunt_f\grunt_f_0","DZ\sounds\effects\animals\hog\grunt_f\grunt_f_1"};
					volume = 1;
					distance = 70;
				};
				class hog_grunt_g
				{
					sounds[] = {"DZ\sounds\effects\animals\hog\grunt_g\grunt_g_0","DZ\sounds\effects\animals\hog\grunt_g\grunt_g_1"};
					volume = 1;
					distance = 70;
				};
				class hog_grunt_h
				{
					sounds[] = {"DZ\sounds\effects\animals\hog\grunt_h\grunt_h_0","DZ\sounds\effects\animals\hog\grunt_h\grunt_h_1"};
					volume = 1;
					distance = 70;
				};
				class hog_grunt_i
				{
					sounds[] = {"DZ\sounds\effects\animals\hog\grunt_i\grunt_i_0","DZ\sounds\effects\animals\hog\grunt_i\grunt_i_1","DZ\sounds\effects\animals\hog\grunt_i\grunt_i_2"};
					volume = 1;
					distance = 70;
				};
				class hog_sniff
				{
					sounds[] = {"DZ\sounds\effects\animals\hog\sniff\sniff_0","DZ\sounds\effects\animals\hog\sniff\sniff_1","DZ\sounds\effects\animals\hog\sniff\sniff_2","DZ\sounds\effects\animals\hog\sniff\sniff_3"};
					volume = 1;
					distance = 70;
				};
				class hog_squeal
				{
					sounds[] = {"DZ\sounds\effects\animals\hog\squeal\squeal_0","DZ\sounds\effects\animals\hog\squeal\squeal_1","DZ\sounds\effects\animals\hog\squeal\squeal_2","DZ\sounds\effects\animals\hog\squeal\squeal_3","DZ\sounds\effects\animals\hog\squeal\squeal_4","DZ\sounds\effects\animals\hog\squeal\squeal_5","DZ\sounds\effects\animals\hog\squeal\squeal_6"};
					volume = 1;
					distance = 70;
				};
			};
		};
	};
};
//};
